//
//  App.h
//  iOS.Conference.WebRTC
//
//  Created by Adrian Mercado on 2014-06-09.
//  Copyright (c) 2014 Frozen Mountain Software. All rights reserved.
//

#import <Foundation/Foundation.h>

#import "FM.h"
#import "FMIceLink.h"
#import "FMIceLinkWebRTC.h"

#import "Signalling.h"
#import "LocalMedia.h"

@interface App : NSObject
{
    LocalMedia *_localMedia;
    Signalling *_signalling;
    
    FMIceLinkWebRTCAudioStream *_audioStream;
    FMIceLinkWebRTCVideoStream *_videoStream;
    
    FMIceLinkConference *_conference;
    
    NSString *_sessionId;
    
    FMIceLinkCertificate *_certificate;
    
    FMCallback *_addRemoteVideoControlEvent;
    FMCallback *_removeRemoteVideoControlEvent;
    FMCallback *_logLinkInitEvent;
    FMCallback *_logLinkUpEvent;
    FMCallback *_logLinkDownEvent;
}

@property (nonatomic, retain) NSString *sessionId;

+ (App *)instance;

- (void)startSignalling:(void (^)(NSString *))callback;
- (void)stopSignalling:(void (^)(NSString *))callback;
- (void)startLocalMedia:(UIView *)videoContainer callback:(void (^)(NSString *))callback;
- (void)stopLocalMedia:(void (^)(NSString *))callback;
- (void)startConference:(void (^)(NSString *)) callback;
- (void)stopConference:(void (^)(NSString *))callback;
- (void)useNextVideoDevice;
- (void)pauseAudio;
- (void)resumeAudio;

@end
