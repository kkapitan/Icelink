//
//  main.m
//  iOS.Conference.WebRTC
//
//  Created by Anton Venema on 2012-10-29.
//  Copyright (c) 2012 Frozen Mountain Software. All rights reserved.
//

#import <UIKit/UIKit.h>

#import "AppDelegate.h"

int main(int argc, char *argv[])
{
    @autoreleasepool {
        int retval;
        @try
        {
            retval = UIApplicationMain(argc, argv, nil, NSStringFromClass([AppDelegate class]));
        }
        @catch (NSException *exception)
        {
            NSLog(@"An unhandled exception has been thrown. %@", [exception callStackSymbols]);
            @throw;
        }
        return retval;
    }
}
