//
//  SessionController.h
//  iOS.Conference.WebRTC
//
//  Created by Adrian Mercado on 2014-06-09.
//  Copyright (c) 2014 Frozen Mountain Software. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "App.h"

@class App;

@interface SessionController : UIViewController<UITextFieldDelegate>
{
    IBOutlet UITextField* _createSession;
    IBOutlet UITextField* _joinSession;
    IBOutlet UIButton* _createButton;
    IBOutlet UIButton* _joinButton;
    
    App* _app;
}

@end
