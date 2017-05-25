//
//  App.m
//  iOS.Conference.WebRTC
//
//  Created by Adrian Mercado on 2014-06-09.
//  Copyright (c) 2014 Frozen Mountain Software. All rights reserved.
//

#import "App.h"

//#import "OpusCodec.h"
//#import "Vp8Codec.h"
#import "UIView+Toast.h"

@implementation App

static NSString *icelinkServerAddress = @"turn.icelink.fm:3478";
static NSString *websyncServerUrl = @"https://v4.websync.fm/websync.ashx"; // WebSync On-Demand

@synthesize sessionId = _sessionId;

+ (App *)instance
{
    static App *instance = nil;
    static dispatch_once_t onceToken;
    dispatch_once(&onceToken, ^{
        instance = [[self alloc] init];
    });
    return instance;
}

- (id)init
{
    if (self = [super init])
    {
        // Log to the console.
        [FMLog setProvider:[FMNSLogProvider nsLogProviderWithLogLevel:FMLogLevelInfo]];
        
        // WebRTC has chosen VP8 as its mandatory video codec.
        // Since video encoding is best done using native code,
        // reference the video codec at the application-level.
        // This is required when using a WebRTC video stream.
//        [FMIceLinkWebRTCVideoStream registerCodecWithEncodingName:@"VP8" createCodecBlock:^()
//         {
//             return [[[Vp8Codec alloc] init] autorelease];
//         } preferred:YES];
//        
//        // For improved audio quality, we can use Opus. By
//        // setting it as the preferred audio codec, it will
//        // override the default PCMU/PCMA codecs.
//        [FMIceLinkWebRTCAudioStream registerCodecWithEncodingName:@"opus" clockRate:48000 channels:2 createCodecBlock:^
//         {
//             return [[[OpusCodec alloc] init] autorelease];
//         } preferred:YES];
        
        // To save time, generate a DTLS certificate when the
        // app starts and reuse it for multiple conferences.
        _certificate = [FMIceLinkCertificate generateCertificate];
        
        _addRemoteVideoControlEvent = [FMCallback callback:@selector(addRemoteVideoControl:) target:self];
        _removeRemoteVideoControlEvent = [FMCallback callback:@selector(removeRemoteVideoControl:) target:self];
        _logLinkInitEvent = [FMCallback callback:@selector(logLinkInit:) target:self];
        _logLinkUpEvent = [FMCallback callback:@selector(logLinkUp:) target:self];
        _logLinkDownEvent = [FMCallback callback:@selector(logLinkDown:) target:self];
    }
    return self;
}

- (void)startSignalling:(void (^)(NSString *))callback
{
    _signalling = [[Signalling alloc] initWithWebSyncServerUrl:websyncServerUrl];
    [_signalling start:callback];
}

- (void)stopSignalling:(void (^)(NSString *)) callback
{
    if (_signalling)
    {
        [_signalling stop:callback];
    }
    else
    {
        callback(nil);
    }
}

- (void)startLocalMedia:(UIView *)videoContainer callback:(void (^)(NSString *))callback
{
    _localMedia = [[LocalMedia alloc] init];
    [_localMedia start:videoContainer callback:callback];
}

- (void)stopLocalMedia:(void (^)(NSString *)) callback
{
    if (_localMedia)
    {
        [_localMedia stop:callback];
    }
    else
    {
        callback(nil);
    }
}

- (void)startConference:(void (^)(NSString *))callback
{
    // Create a WebRTC audio stream description (requires a
    // reference to the local audio feed).
    _audioStream = [[FMIceLinkWebRTCAudioStream alloc] initWithLocalStream:_localMedia.localMediaStream];
    
    // Create a WebRTC video stream description (requires a
    // reference to the local video feed). Whenever a P2P link
    // initializes using this description, position and display
    // the remote video control on-screen by passing it to the
    // layout manager created above. Whenever a P2P link goes
    // down, remove it.
    _videoStream = [[FMIceLinkWebRTCVideoStream alloc] initWithLocalStream:_localMedia.localMediaStream];
    [_videoStream addOnLinkInit:_addRemoteVideoControlEvent];
    [_videoStream addOnLinkDown:_removeRemoteVideoControlEvent];
    
    // Create a conference using our stream descriptions.
    _conference = [[FMIceLinkConference alloc] initWithServerAddress:icelinkServerAddress
                                                             streams:[NSMutableArray arrayWithObjects:_audioStream, _videoStream, nil]];
    
    // Use our pre-generated DTLS certificate.
    [_conference setDtlsCertificate:_certificate];
    
    // Supply TURN relay credentials in case we are behind a
    // highly restrictive firewall. These credentials will be
    // verified by the TURN server.
    [_conference setRelayUsername:@"test"];
    [_conference setRelayPassword:@"pa55w0rd!"];
    
    // Add a few event handlers to the conference so we can see
    // when a new P2P link is created or changes state.
    [_conference addOnLinkInit:_logLinkInitEvent];
    [_conference addOnLinkUp:_logLinkUpEvent];
    [_conference addOnLinkDown:_logLinkDownEvent];
    
    [_conference addOnLinkOfferAnswerBlock:^(FMIceLinkLinkOfferAnswerArgs *e) {
        @try {
            FMIceLinkSDPMessage *sdpMessage = [FMIceLinkSDPMessage parseWithS:e.offerAnswer.sdpMessage];
            for (FMIceLinkSDPMediaDescription *mediaDescription in sdpMessage.mediaDescriptions) {
                NSString *mediaType = mediaDescription.media.mediaType;
                int bandwidthKbps = 0;
                if ([mediaType isEqualToString:FMIceLinkSDPMediaType.audio]) {
                    bandwidthKbps = 32; // instruct remote sender to limit audio to 32kbps
                } else if ([mediaType isEqualToString:FMIceLinkSDPMediaType.video]) {
                    bandwidthKbps = 512; // instruct remote sender to limit video to 512kbps
                }
                if (bandwidthKbps > 0) {
                    // b=AS:{bandwidth}
                    [mediaDescription addBandwidth:
                     [FMIceLinkSDPBandwidth sdpBandwidthWithType:FMIceLinkSDPBandwidthType.applicationSpecific bandwidth:bandwidthKbps]];
                }
            }
            e.offerAnswer.sdpMessage = [sdpMessage toString];
        } @catch (NSException *ex) {
            [FMLog errorWithMessage:@"Could not add bandwidth constraints to outbound SDP message." ex:ex];
        }
    }];
    
    // Attach signalling to the conference.
    [_signalling attach:_conference sessionId:_sessionId callback:callback];
}

- (void)addRemoteVideoControl:(FMIceLinkStreamLinkInitArgs *)e
{
    UIView *remoteVideoControl = (UIView *)[e.link getRemoteVideoControl];
    [_localMedia.layoutManager addRemoteVideoControlWithPeerId:e.peerId remoteVideoControl:remoteVideoControl];
}

- (void)removeRemoteVideoControl:(FMIceLinkStreamLinkDownArgs *)e
{
    [_localMedia.layoutManager removeRemoteVideoControlWithPeerId:e.peerId];
}

- (void)logLinkInit:(FMIceLinkLinkInitArgs *)e
{
    [FMLog infoWithMessage:@"Link to peer initializing..."];
}

- (void)logLinkUp:(FMIceLinkLinkUpArgs *)e
{
    [FMLog infoWithMessage:@"Link to peer is UP."];
}

- (void)logLinkDown:(FMIceLinkLinkDownArgs *)e
{
    [FMLog infoWithMessage:[NSString stringWithFormat:@"Link to peer is DOWN. %@", e.exception.message]];
}

- (void)stopConference:(void (^)(NSString *))callback
{
    // Detach signalling from the conference.
    [_signalling detach:^(NSString *error)
    {
        [_conference removeOnLinkInit:_logLinkInitEvent];
        [_conference removeOnLinkUp:_logLinkUpEvent];
        [_conference removeOnLinkDown:_logLinkDownEvent];
        
        [_videoStream removeOnLinkInit:_addRemoteVideoControlEvent];
        [_videoStream removeOnLinkDown:_removeRemoteVideoControlEvent];
        
        callback(error);
    }];
}

- (void)useNextVideoDevice
{
    [_localMedia.localMediaStream useNextVideoDevice];
}

- (void)pauseAudio
{
    [_localMedia.localMediaStream pauseAudio];
}

- (void)resumeAudio
{
    [_localMedia.localMediaStream resumeAudio];
}

@end
