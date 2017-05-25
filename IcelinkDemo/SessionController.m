//
//  SessionController.m
//  iOS.Conference.WebRTC
//
//  Created by Adrian Mercado on 2014-06-09.
//  Copyright (c) 2014 Frozen Mountain Software. All rights reserved.
//

#import "SessionController.h"

#import "ViewController.h"

@implementation SessionController

- (void)viewDidLoad
{
    [super viewDidLoad];
    _app = [App instance];
    
    // Create a random 6 digit number for the new session ID.
    [_createSession setText:[NSString stringWithFormat:@"%d",[[[FMRandomizer alloc] init] nextWithMinValue:100000 maxValue:999999]]];
    
    [_joinSession setDelegate:self];
    
    // Start signalling when the view loads.
    [self startSignalling];
}

- (void)startSignalling
{
    [_app startSignalling:^(NSString *error)
     {
         if (error)
         {
             [self alert:error];
         }
     }];
}

- (void)switchToVideoChat:(NSString *)sessionId
{
    if (sessionId.length == 6)
    {
        _app.sessionId = sessionId;
        
        // Show the video chat.
        [self presentViewController:[[ViewController alloc] initWithNibName:@"ViewController" bundle:nil] animated:NO completion:nil];
    }
    else
    {
        [self alert:@"Session ID must be 6 digits long."];
    }
}

- (void)touchesBegan:(NSSet *)touches withEvent:(UIEvent *)event
{
    [super touchesBegan:touches withEvent:event];
    for (UIView *view in self.view.subviews)
    {
        if ([view isKindOfClass:[UITextField class]] && [view isFirstResponder])
        {
            [view resignFirstResponder];
        }
    }
}

- (BOOL)textField:(UITextField *)textField shouldChangeCharactersInRange:(NSRange)range replacementString:(NSString *)string
{
    if(textField == _joinSession)
    {
        NSUInteger newLength = [textField.text length] + [string length] - range.length;
        return newLength <= 6;
    }
    return NO;
}

- (IBAction)onCreateButtonClick:(id)sender
{
    [self switchToVideoChat:_createSession.text];
    [self.view endEditing:YES];
}

- (IBAction)onJoinButtonClick:(id)sender
{
    [self switchToVideoChat:_joinSession.text];
    [self.view endEditing:YES];
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
