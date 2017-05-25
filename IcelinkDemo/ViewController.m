//
//  ViewController.m
//  iOS.Conference.WebRTC
//
//  Created by Anton Venema on 2012-10-29.
//  Copyright (c) 2012 Frozen Mountain Software. All rights reserved.
//

#import "ViewController.h"

#import "UIView+Toast.h"

@implementation ViewController

- (void)viewDidLoad
{
    [super viewDidLoad];
    
    // Hide the status bar to give us more screen real estate.
    // Also disable the idle timer since there isn't much touch
    // screen interaction during a video chat.
    [[UIApplication sharedApplication] setStatusBarHidden:YES];
    [[UIApplication sharedApplication] setIdleTimerDisabled:YES];
    
    _app = [App instance];
    
    _sessionID.title = [NSString stringWithFormat:@"Session ID: %@", _app.sessionId];
    
    // Start local media when the view loads.
    [_app startLocalMedia:_videoView callback:^(NSString *error)
     {
         if (error)
         {
             [self alert:error];
         }
         else
         {
             // Start conference now that the local media is available.
             [_app startConference:^(NSString *error)
              {
                  if (error)
                  {
                      [self alert:error];
                  }
              }];
         }
     }];
}

- (void)viewDidAppear:(BOOL)animated
{
    [super viewDidAppear:animated];
    
    // Set up a double-tap gesture recognizer to
    // switch between the front and rear cameras.
    UITapGestureRecognizer *gesture = [[UITapGestureRecognizer alloc] initWithTarget:self action:@selector(handleDoubleTap:)];
    [gesture setNumberOfTapsRequired:2];
    [self.view addGestureRecognizer:gesture];
    [self.view makeToast:@"Double-tap to switch camera."];
}

- (IBAction)onLeaveButtonClick:(id)sender
{
    // Stop the conference first.
    [_app stopConference:^(NSString *error)
     {
         if (error)
         {
             [self alert:error];
         }
         
         // Whether or not that failed, stop the local media next.
         dispatch_async(dispatch_get_main_queue(), ^{
             [_app stopLocalMedia:^(NSString *error)
              {
                  if (error)
                  {
                      [self alert:error];
                  }
                  
                  // Finally, dismiss the view.
                  dispatch_async(dispatch_get_main_queue(), ^{
                      [self dismissViewControllerAnimated:NO completion:nil];
                  });
              }];
         });
     }];
}

- (void)handleDoubleTap:(UITapGestureRecognizer *)gesture
{
    [_app useNextVideoDevice];
}

- (void)alert:(NSString *)format, ...
{
    va_list args;
    va_start(args, format);
    UIAlertView *alert = [[UIAlertView alloc] initWithTitle:@"Alert" message:[[NSString alloc] initWithFormat:format arguments:args] delegate:nil cancelButtonTitle:@"OK" otherButtonTitles:nil];
    va_end(args);
    
    dispatch_async(dispatch_get_main_queue(), ^
                   {
                       [alert show];
                   });
}

@end
