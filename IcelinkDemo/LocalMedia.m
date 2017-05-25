//
//  LocalMedia.m
//  iOS.Conference.WebRTC
//
//  Created by Adrian Mercado on 2014-06-09.
//  Copyright (c) 2014 Frozen Mountain Software. All rights reserved.
//

#import "LocalMedia.h"

@implementation LocalMedia

// We're going to use both audio and video
// for this example.
static bool audio          = YES;
static bool video          = YES;
static int  videoFrameRate = 15;

@synthesize layoutManager = _layoutManager;
@synthesize localMediaStream = _localMediaStream;

- (void)start:(UIView *)videoContainer callback:(void (^)(NSString *))callback
{
    [[AVAudioSession sharedInstance] setCategory:AVAudioSessionCategoryPlayAndRecord
                                     withOptions:
     AVAudioSessionCategoryOptionAllowBluetooth |
     AVAudioSessionCategoryOptionDefaultToSpeaker error:nil];
    
    // WebRTC audio and video streams require us to first get access to
    // the local media (microphone, camera, or both).
    FMIceLinkWebRTCGetMediaArgs *getMediaArgs = [FMIceLinkWebRTCGetMediaArgs getMediaArgsWithAudio:audio video:video];
    //[getMediaArgs setVideoCaptureProvider:[[[FMIceLinkWebRTCScreenCaptureProvider alloc] init] autorelease]]; // uncomment this line to do in-app screen capture
    [getMediaArgs setVideoPreset:AVCaptureSessionPresetMedium]; // optional
    [getMediaArgs setVideoFrameRate:videoFrameRate];            // optional
    [getMediaArgs setDefaultVideoPreviewScale:FMIceLinkWebRTCLayoutScaleContain]; // optional
    [getMediaArgs setDefaultVideoScale:FMIceLinkWebRTCLayoutScaleContain];        // optional
    [getMediaArgs setOnFailureBlock:^(FMIceLinkWebRTCGetMediaFailureArgs *e)
     {
         callback([NSString stringWithFormat:@"Could not get media. %@", e.exception.message]);
     }];
    [getMediaArgs setOnSuccessBlock:^(FMIceLinkWebRTCGetMediaSuccessArgs *e)
     {
         // We have successfully acquired access to the local
         // audio/video device! Grab a reference to the media.
         // Internally, it maintains access to the local audio
         // and video feeds coming from the device hardware.
         _localMediaStream = e.localStream;
         
         // This is our local video control, a UIView (iOS) or
         // and NSView (Mac). It is constantly updated with our
         // live video feed since we requested video above. Add
         // it directly to the UI or use the IceLink layout manager,
         // which we do below.
         UIView *localVideoControl = (UIView *)e.localVideoControl;
         
         // Create an IceLink layout manager, which makes the task
         // of arranging video controls easy. Give it a reference
         // to a UIView that can be filled with video feeds.
         _layoutManager = [FMIceLinkWebRTCLayoutManager layoutManagerWithContainer:videoContainer];
         
         // Position and display the local video control on-screen
         // by passing it to the layout manager created above.
         [_layoutManager setLocalVideoControl:localVideoControl];
         
         callback(nil);
     }];
    [FMIceLinkWebRTCUserMedia getMediaWithArgs:getMediaArgs];
}

- (void)stop:(void (^)(NSString *))callback
{
    // Clear out the layout manager.
    [_layoutManager removeRemoteVideoControls];
    [_layoutManager unsetLocalVideoControl];
   
    // Stop the local media stream.
    [_localMediaStream stop];
    callback(nil);
}

@end
