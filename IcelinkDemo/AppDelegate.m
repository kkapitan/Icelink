//
//  AppDelegate.m
//  iOS.Conference.WebRTC
//
//  Created by Anton Venema on 2012-10-29.
//  Copyright (c) 2012 Frozen Mountain Software. All rights reserved.
//

#import "AppDelegate.h"
#import <Icelink/Icelink.h>

#import "App.h"

#import "SessionController.h"

@implementation AppDelegate



- (BOOL)application:(UIApplication *)application didFinishLaunchingWithOptions:(NSDictionary *)launchOptions
{
    self.window = [[UIWindow alloc] initWithFrame:[[UIScreen mainScreen] bounds]];
    self.window.rootViewController = [[SessionController alloc] initWithNibName:@"SessionController" bundle:nil];
    [self.window makeKeyAndVisible];
    
    // We're going to observe our own interruptions. Since iOS 9, the
    // reliability of AVAudioSessionInterruptionTypeEnded has gotten
    // worse, so we rely on applicationDidBecomeActive: as a backup.
    [FMIceLinkWebRTCAudioUnitCaptureProvider setObserveInterruptions:NO];
    [[NSNotificationCenter defaultCenter] addObserver:self selector:@selector(interrupted:) name:AVAudioSessionInterruptionNotification object:nil];
    
    return YES;
}

- (void)interrupted:(NSNotification *)notification
{
    NSInteger interruptionType = [[notification.userInfo valueForKey:AVAudioSessionInterruptionTypeKey] integerValue];
    if (interruptionType == AVAudioSessionInterruptionTypeBegan)
    {
        NSLog(@"Interruption! Pausing...");
        [[App instance] pauseAudio];
    }
    else if (interruptionType == AVAudioSessionInterruptionTypeEnded)
    {
        NSLog(@"Interruption ended. Resuming...");
        [[App instance] resumeAudio];
    }
}

- (void)applicationDidBecomeActive:(UIApplication *)application
{
    NSLog(@"Application has become active. Resuming...");
    [[App instance] resumeAudio];
}

@end
