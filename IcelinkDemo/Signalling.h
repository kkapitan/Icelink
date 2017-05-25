//
//  Signalling.h
//  iOS.Conference.WebRTC
//
//  Created by Adrian Mercado on 2014-06-09.
//  Copyright (c) 2014 Frozen Mountain Software. All rights reserved.
//

#import <Foundation/Foundation.h>

#import <Icelink/Icelink.h>

// Peers have to exchange information when setting up P2P links,
// like descriptions of the streams (called the offer or answer)
// and information about network addresses (called candidates).
// IceLink generates this information for you automatically.
// Your responsibility is to pass messages back and forth between
// peers as quickly as possible. This is called "signalling".
@interface Signalling : NSObject
{
    // We're going to use WebSync for this example, but any real-time
    // messaging system will do (like SIP or XMPP). We use WebSync
    // since it works well with JavaScript and uses HTTP, which is
    // widely allowed. To use something else, simply replace the calls
    // to WebSync with calls to your library.
    NSString *_websyncServerUrl;
    FMWebSyncClient *_websyncClient;
    
    FMIceLinkConference *_conference;
    NSString *_sessionId;
    
    FMCallback *_sendOfferAnswerEvent;
    FMCallback *_sendCandidateEvent;
    FMCallback *_receiveOfferAnswerOrCandidateEvent;
}

- (id)initWithWebSyncServerUrl:(NSString *)websyncServerUrl;
- (void)start:(void (^)(NSString *))callback;
- (void)stop:(void (^)(NSString *))callback;
- (void)attach:(FMIceLinkConference *)conference sessionId:(NSString *)sessionId callback:(void (^)(NSString *))callback;
- (void)detach:(void (^)(NSString *))callback;

@end
