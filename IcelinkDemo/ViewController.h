//
//  ViewController.h
//  iOS.Conference.WebRTC
//
//  Created by Anton Venema on 2012-10-29.
//  Copyright (c) 2012 Frozen Mountain Software. All rights reserved.
//

#import <UIKit/UIKit.h>

#import "App.h"

@interface ViewController : UIViewController
{
    IBOutlet UIBarButtonItem* _sessionID;
    IBOutlet UIBarButtonItem* _leaveButton;
    IBOutlet UIToolbar* _toolBar;
    IBOutlet UIView* _videoView;
    
    App *_app;
}

@end
