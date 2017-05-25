//
//  LocalMedia.h
//  iOS.Conference.WebRTC
//
//  Created by Adrian Mercado on 2014-06-09.
//  Copyright (c) 2014 Frozen Mountain Software. All rights reserved.
//

#import <Foundation/Foundation.h>


@interface LocalMedia : NSObject
{
    FMIceLinkWebRTCLocalMediaStream *_localMediaStream;
    FMIceLinkWebRTCLayoutManager *_layoutManager;
}

@property (nonatomic, retain) FMIceLinkWebRTCLocalMediaStream *localMediaStream;
@property (nonatomic, retain) FMIceLinkWebRTCLayoutManager *layoutManager;

- (void)start:(UIView *)videoContainer callback:(void (^)(NSString *))callback;
- (void)stop:(void (^)(NSString *))callback;

@end
