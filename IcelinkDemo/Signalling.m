//
//  Signalling.m
//  iOS.Conference.WebRTC
//
//  Created by Adrian Mercado on 2014-06-09.
//  Copyright (c) 2014 Frozen Mountain Software. All rights reserved.
//

#import "Signalling.h"

@implementation Signalling

// IceLink includes a WebSync client extension that will
// automatically manage signalling for you. If you are not
// using WebSync, set this to false to see how the event
// system works. Use it as a template for your own code.
static bool useWebSyncExtension = YES;

- (id)initWithWebSyncServerUrl:(NSString *)websyncServerUrl
{
    self = [super init];
    if(self)
    {
        _websyncServerUrl = [websyncServerUrl copy];
        
        _sendOfferAnswerEvent = [FMCallback callback:@selector(sendOfferAnswer:) target:self];
        _sendCandidateEvent = [FMCallback callback:@selector(sendCandidate:) target:self];
        _receiveOfferAnswerOrCandidateEvent = [FMCallback callback:@selector(receiveOfferAnswerOrCandidate:) target:self] ;
    }
    return self;
}

- (void)start:(void (^)(NSString *))callback
{
    // Create a WebSync client.
    _websyncClient = [[FMWebSyncClient alloc] initWithRequestUrl:_websyncServerUrl];
    //[_websyncClient setDomainKey:[FMGuid guidWithG:@"5fb3bdc2-ea34-11dd-9b91-3e6b56d89593"]]; // WebSync On-Demand
    
    FMWebSyncConnectArgs *connectArgs = [FMWebSyncConnectArgs connectArgs];
    [connectArgs setOnFailureBlock:^(FMWebSyncConnectFailureArgs *e)
     {
         callback([NSString stringWithFormat:@"Could not connect to WebSync. %@", e.exception.message]);
         e.retry = NO;
     }];
    [connectArgs setOnSuccessBlock:^(FMWebSyncConnectSuccessArgs *e)
     {
         callback(nil);
     }];
    [_websyncClient connectWithArgs:connectArgs];
}

- (void)stop:(void (^)(NSString *))callback
{
    FMWebSyncDisconnectArgs *disconnectArgs = [FMWebSyncDisconnectArgs disconnectArgs];
    [disconnectArgs setOnCompleteBlock:^(FMWebSyncDisconnectCompleteArgs *e)
     {
         callback(nil);
     }];
    [_websyncClient disconnectWithArgs:disconnectArgs];
}

- (void)attach:(FMIceLinkConference *)conference sessionId:(NSString *)sessionId callback:(void (^)(NSString *))callback
{
    _conference = conference;
    _sessionId = [sessionId copy];
    
    NSString *channel = [NSString stringWithFormat:@"/%@", _sessionId];
    if (useWebSyncExtension)
    {
        // Manage the conference automatically using a WebSync
        // channel. P2P links will be created automatically to
        // peers that join the same channel.
        FMIceLinkWebSyncJoinConferenceArgs *joinArgs = [FMIceLinkWebSyncJoinConferenceArgs joinConferenceArgsWithConferenceChannel:channel conference:_conference];
        [joinArgs setOnFailureBlock:^(FMIceLinkWebSyncJoinConferenceFailureArgs *e)
         {
             callback([NSString stringWithFormat:@"Could not attach signalling to conference %@. %@", _sessionId, e.exception.message]);
         }];
        [joinArgs setOnSuccessBlock:^(FMIceLinkWebSyncJoinConferenceSuccessArgs *e)
         {
             callback(nil);
         }];
        [_websyncClient joinConferenceWithArgs:joinArgs];
    }
    else
    {
        // When the conference generates an offer/answer or candidate,
        // we want to send it to the remote peer immediately.
        [_conference addOnLinkOfferAnswer:_sendOfferAnswerEvent];
        [_conference addOnLinkCandidate:_sendCandidateEvent];
        
        // When we receive an offer/answer or candidate, we want to
        // inform the conference immediately.
        [_websyncClient addOnNotify:_receiveOfferAnswerOrCandidateEvent];
        
        // Subscribe to a WebSync channel. When another client joins the same
        // channel, create a P2P link. When a client leaves, destroy it.
        FMWebSyncSubscribeArgs *subscribeArgs = [FMWebSyncSubscribeArgs subscribeArgsWithChannel:channel];
        [subscribeArgs setOnFailureBlock:^(FMWebSyncSubscribeFailureArgs *e)
         {
             callback([NSString stringWithFormat:@"Could not attach signalling to conference %@. %@", _sessionId, e.exception.message]);
         }];
        [subscribeArgs setOnReceiveBlock:^(FMWebSyncSubscribeReceiveArgs *e) { }];
        [subscribeArgs setOnSuccessBlock:^(FMWebSyncSubscribeSuccessArgs *e)
         {
             callback(nil);
         }];
        [subscribeArgs setOnClientSubscribeBlock:^(FMWebSyncSubscribersClientSubscribeArgs *e)
         {
             // Kick off a P2P link.
             NSString *peerId = [e.subscribedClient.clientId toString];
             NSObject *peerState = e.subscribedClient.boundRecords;
             [_conference linkWithPeerId:peerId peerState:peerState];
         }];
        [subscribeArgs setOnClientUnsubscribeBlock:^(FMWebSyncSubscribersClientUnsubscribeArgs *e)
         {
             // Tear down a P2P link.
             NSString *peerId = [e.unsubscribedClient.clientId toString];
             [_conference unlinkWithPeerId:peerId];
         }];
        [_websyncClient subscribeWithArgs:subscribeArgs];
    }
}

- (void)sendOfferAnswer:(FMIceLinkLinkOfferAnswerArgs *)e
{
    NSString *tag = [NSString stringWithFormat:@"offeranswer:%@", _sessionId];
    [_websyncClient notifyWithArgs:[FMWebSyncNotifyArgs notifyArgsWithClientId:[FMGuid guidWithG:e.peerId]
                                                                      dataJson:[e.offerAnswer toJson]
                                                                           tag:tag]];
}

- (void)sendCandidate:(FMIceLinkLinkCandidateArgs *)e
{
    NSString *tag = [NSString stringWithFormat:@"candidate:%@", _sessionId];
    [_websyncClient notifyWithArgs:[FMWebSyncNotifyArgs notifyArgsWithClientId:[FMGuid guidWithG:e.peerId]
                                                                      dataJson:[e.candidate toJson]
                                                                           tag:tag]];
}

- (void)receiveOfferAnswerOrCandidate:(FMWebSyncNotifyReceiveArgs *)e
{
    NSString *peerId = [e.notifyingClient.clientId toString];
    NSObject *peerState = e.notifyingClient.boundRecords;
    NSString *offerAnswerTag = [NSString stringWithFormat:@"offeranswer:%@", _sessionId];
    NSString *candidateTag = [NSString stringWithFormat:@"candidate:%@", _sessionId];
    if ([e.tag isEqualToString:offerAnswerTag])
    {
        [_conference receiveOfferAnswer:[FMIceLinkOfferAnswer fromJsonWithOfferAnswerJson:e.dataJson]
                                 peerId:peerId
                              peerState:peerState];
    }
    else if ([e.tag isEqualToString:candidateTag])
    {
        [_conference receiveCandidate:[FMIceLinkCandidate fromJsonWithCandidateJson:e.dataJson]
                               peerId:peerId];
    }
}

- (void)detach:(void (^)(NSString *))callback
{
    NSString *channel = [NSString stringWithFormat:@"/%@", _sessionId];
    if (useWebSyncExtension)
    {
        // Leave the managed WebSync channel.
        FMIceLinkWebSyncLeaveConferenceArgs *leaveArgs = [FMIceLinkWebSyncLeaveConferenceArgs leaveConferenceArgsWithConferenceChannel:channel];
        [leaveArgs setOnFailureBlock:^(FMIceLinkWebSyncLeaveConferenceFailureArgs *e)
         {
             callback([NSString stringWithFormat:@"Could not detach signalling from conference %@. %@", _sessionId, e.exception.message]);
         }];
        [leaveArgs setOnSuccessBlock:^(FMIceLinkWebSyncLeaveConferenceSuccessArgs *e)
         {
             callback(nil);
         }];
        [_websyncClient leaveConferenceWithArgs:leaveArgs];
    }
    else
    {
        // Unsubscribe from the WebSync channel.
        FMWebSyncUnsubscribeArgs *unsubscribeArgs = [FMWebSyncUnsubscribeArgs unsubscribeArgsWithChannel:channel];
        [unsubscribeArgs setOnFailureBlock:^(FMWebSyncUnsubscribeFailureArgs *e)
         {
             callback([NSString stringWithFormat:@"Could not detach signalling from conference %@. %@", _sessionId, e.exception.message]);
         }];
        [unsubscribeArgs setOnSuccessBlock:^(FMWebSyncUnsubscribeSuccessArgs *e)
         {
             // Detach our event handlers.
             [_conference removeOnLinkOfferAnswer:_sendOfferAnswerEvent];
             [_conference removeOnLinkCandidate:_sendCandidateEvent];
             [_websyncClient removeOnNotify:_receiveOfferAnswerOrCandidateEvent];
             
             callback(nil);
         }];
        [_websyncClient unsubscribeWithArgs:unsubscribeArgs];
    }
}

@end
