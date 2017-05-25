//
// Title: IceLink WebSync Extension for Cocoa
// Version: 2.9.25
// Copyright Frozen Mountain Software 2011+
//

#import <Foundation/Foundation.h>
#import <AVFoundation/AVFoundation.h>

#if TARGET_OS_IPHONE
  #import <UIKit/UIKit.h>
#else
  #import <AppKit/AppKit.h>
#endif

#import <Icelink/FMWebSync.h>
#import <Icelink/FMWebSyncSubscribers.h>

@class FMWebSyncClientFMIceLinkWebSyncExtensions2;
@class FMIceLinkWebSyncShouldLinkArgs;
@class FMIceLinkWebSyncJoinConferenceCompleteArgs;
@class FMIceLinkWebSyncJoinConferenceFailureArgs;
@class FMIceLinkWebSyncJoinConferenceReceiveArgs;
@class FMIceLinkWebSyncJoinConferenceSuccessArgs;
@class FMIceLinkWebSyncLeaveConferenceCompleteArgs;
@class FMIceLinkWebSyncLeaveConferenceArgs;
@class FMIceLinkWebSyncJoinConferenceArgs;
@class FMIceLinkWebSyncLeaveConferenceFailureArgs;
@class FMIceLinkWebSyncLeaveConferenceSuccessArgs;
@class FMIceLinkWebSyncState;
@class FMWebSyncClientExtensions;
@class FMIceLinkBaseLinkArgsExtensions;
@class FMIceLinkWebSyncPeerClient;

@class FMIceLinkWebSyncPeerClient;

/// <summary>
/// Arguments for join-conference should-link callbacks.
/// </summary>
#pragma clang diagnostic ignored "-Wshorten-64-to-32"
#pragma clang diagnostic ignored "-Wint-to-pointer-cast"

@interface FMIceLinkWebSyncShouldLinkArgs : FMWebSyncBaseSuccessArgs

- (id) init;
/// <summary>
/// Gets whether the current process is the initiator.
/// </summary>
- (bool) initiator;
/// <summary>
/// Gets the user that just joined.
/// </summary>
- (FMIceLinkWebSyncPeerClient*) joinedPeer;
+ (FMIceLinkWebSyncShouldLinkArgs*) shouldLinkArgs;

@end



/// <summary>
/// Arguments for join-conference complete callbacks.
/// </summary>
#pragma clang diagnostic ignored "-Wshorten-64-to-32"
#pragma clang diagnostic ignored "-Wint-to-pointer-cast"

@interface FMIceLinkWebSyncJoinConferenceCompleteArgs : FMWebSyncBaseCompleteArgs 

- (id) init;
/// <summary>
/// Gets whether the join call was automatically
/// invoked following a stream failure.
/// </summary>
- (bool) isRejoin;
+ (FMIceLinkWebSyncJoinConferenceCompleteArgs*) joinConferenceCompleteArgs;

@end


@class NSStringFMExtensions;

/// <summary>
/// Arguments for join-conference failure callbacks.
/// </summary>
#pragma clang diagnostic ignored "-Wshorten-64-to-32"
#pragma clang diagnostic ignored "-Wint-to-pointer-cast"

@interface FMIceLinkWebSyncJoinConferenceFailureArgs : FMWebSyncBaseFailureArgs 

/// <summary>
/// Gets the ID of the conference that failed to be joined.
/// </summary>
- (NSString*) conferenceChannel;
- (id) init;
/// <summary>
/// Gets whether the join call was automatically
/// invoked following a stream failure.
/// </summary>
- (bool) isRejoin;
+ (FMIceLinkWebSyncJoinConferenceFailureArgs*) joinConferenceFailureArgs;

@end


@class FMIceLinkWebSyncPeerClient;
@class NSStringFMExtensions;
@class NSMutableDataFMExtensions;

/// <summary>
/// Arguments for join-conference receive callbacks.
/// </summary>
#pragma clang diagnostic ignored "-Wshorten-64-to-32"
#pragma clang diagnostic ignored "-Wint-to-pointer-cast"

@interface FMIceLinkWebSyncJoinConferenceReceiveArgs : FMWebSyncSubscribeReceiveArgs 

/// <summary>
/// Initializes a new instance of the <see cref="FMIceLinkWebSyncJoinConferenceReceiveArgs" /> class.
/// </summary>
/// <param name="channel">The channel over which data was received.</param>
/// <param name="dataJson">The data in JSON format.</param>
/// <param name="dataBytes">The data in binary format.</param>
/// <param name="connectionType">The current connection type.</param>
/// <param name="reconnectAfter">The amount of time in milliseconds to pause before reconnecting to the server.</param>
- (id) initWithChannel:(NSString*)channel dataJson:(NSString*)dataJson dataBytes:(NSMutableData*)dataBytes connectionType:(FMWebSyncConnectionType)connectionType reconnectAfter:(int)reconnectAfter;
/// <summary>
/// Initializes a new instance of the <see cref="FMIceLinkWebSyncJoinConferenceReceiveArgs" /> class.
/// </summary>
/// <param name="channel">The channel over which data was received.</param>
/// <param name="dataJson">The data in JSON format.</param>
/// <param name="dataBytes">The data in binary format.</param>
/// <param name="connectionType">The current connection type.</param>
/// <param name="reconnectAfter">The amount of time in milliseconds to pause before reconnecting to the server.</param>
+ (FMIceLinkWebSyncJoinConferenceReceiveArgs*) joinConferenceReceiveArgsWithChannel:(NSString*)channel dataJson:(NSString*)dataJson dataBytes:(NSMutableData*)dataBytes connectionType:(FMWebSyncConnectionType)connectionType reconnectAfter:(int)reconnectAfter;
/// <summary>
/// Gets the user that published the message.
/// </summary>
- (FMIceLinkWebSyncPeerClient*) publishingPeer;

@end


@class NSStringFMExtensions;
@class NSMutableArrayFMExtensions;

/// <summary>
/// Arguments for join-conference success callbacks.
/// </summary>
#pragma clang diagnostic ignored "-Wshorten-64-to-32"
#pragma clang diagnostic ignored "-Wint-to-pointer-cast"

@interface FMIceLinkWebSyncJoinConferenceSuccessArgs : FMWebSyncBaseSuccessArgs 

/// <summary>
/// Gets the ID of the conference that was joined.
/// </summary>
- (NSString*) conferenceChannel;
- (id) init;
/// <summary>
/// Gets whether the join call was automatically
/// invoked following a stream failure.
/// </summary>
- (bool) isRejoin;
+ (FMIceLinkWebSyncJoinConferenceSuccessArgs*) joinConferenceSuccessArgs;
/// <summary>
/// Gets the array of users in the channel.
/// </summary>
- (NSMutableArray*) users;

@end



/// <summary>
/// Arguments for leave-conference complete callbacks.
/// </summary>
#pragma clang diagnostic ignored "-Wshorten-64-to-32"
#pragma clang diagnostic ignored "-Wint-to-pointer-cast"

@interface FMIceLinkWebSyncLeaveConferenceCompleteArgs : FMWebSyncBaseCompleteArgs 

- (id) init;
+ (FMIceLinkWebSyncLeaveConferenceCompleteArgs*) leaveConferenceCompleteArgs;

@end


@class FMIceLinkWebSyncLeaveConferenceCompleteArgs;
@class FMIceLinkWebSyncLeaveConferenceFailureArgs;
@class FMIceLinkWebSyncLeaveConferenceSuccessArgs;
@class NSStringFMExtensions;
@class FMCallback;

/// <summary>
/// Arguments for a client leaving an IceLink conference.
/// </summary>
#pragma clang diagnostic ignored "-Wshorten-64-to-32"
#pragma clang diagnostic ignored "-Wint-to-pointer-cast"

@interface FMIceLinkWebSyncLeaveConferenceArgs : FMWebSyncBaseInputArgs 

/// <summary>
/// Gets the conference channel.
/// </summary>
- (NSString*) conferenceChannel;
/// <summary>
/// Initializes a new instance of the <see cref="FMIceLinkWebSyncLeaveConferenceArgs" /> class.
/// </summary>
/// <param name="conferenceChannel">The conference ID.</param>
- (id) initWithConferenceChannel:(NSString*)conferenceChannel;
/// <summary>
/// Initializes a new instance of the <see cref="FMIceLinkWebSyncLeaveConferenceArgs" /> class.
/// </summary>
/// <param name="conferenceChannel">The conference ID.</param>
+ (FMIceLinkWebSyncLeaveConferenceArgs*) leaveConferenceArgsWithConferenceChannel:(NSString*)conferenceChannel;
/// <summary>
/// Gets the callback to invoke after <see cref="FMIceLinkWebSyncLeaveConferenceArgs#onSuccess" /> or <see cref="FMIceLinkWebSyncLeaveConferenceArgs#onFailure" />.
/// </summary>
- (FMCallback*) onComplete;
/// <summary>
/// Gets the callback to invoke if the request fails.
/// </summary>
- (FMCallback*) onFailure;
/// <summary>
/// Gets the callback to invoke if the request succeeds.
/// </summary>
- (FMCallback*) onSuccess;
/// <summary>
/// Sets the conference channel.
/// </summary>
- (void) setConferenceChannel:(NSString*)value;
/// <summary>
/// Sets the callback to invoke after <see cref="FMIceLinkWebSyncLeaveConferenceArgs#onSuccess" /> or <see cref="FMIceLinkWebSyncLeaveConferenceArgs#onFailure" />.
/// </summary>
- (void) setOnComplete:(FMCallback*)value;
/// <summary>
/// Sets the callback to invoke after <see cref="FMIceLinkWebSyncLeaveConferenceArgs#onSuccess" /> or <see cref="FMIceLinkWebSyncLeaveConferenceArgs#onFailure" />.
/// </summary>
- (void) setOnCompleteBlock:(void (^) (FMIceLinkWebSyncLeaveConferenceCompleteArgs*))valueBlock;
/// <summary>
/// Sets the callback to invoke if the request fails.
/// </summary>
- (void) setOnFailure:(FMCallback*)value;
/// <summary>
/// Sets the callback to invoke if the request fails.
/// </summary>
- (void) setOnFailureBlock:(void (^) (FMIceLinkWebSyncLeaveConferenceFailureArgs*))valueBlock;
/// <summary>
/// Sets the callback to invoke if the request succeeds.
/// </summary>
- (void) setOnSuccess:(FMCallback*)value;
/// <summary>
/// Sets the callback to invoke if the request succeeds.
/// </summary>
- (void) setOnSuccessBlock:(void (^) (FMIceLinkWebSyncLeaveConferenceSuccessArgs*))valueBlock;
/// <summary>
/// Sets a value indicating whether this endpoint
/// should initiate an unlink from everyone after leaving
/// the channel successfully.
/// Defaults to <c>true</c>.
/// </summary>
- (void) setUnlinkAllOnSuccess:(bool)value;
/// <summary>
/// Gets a value indicating whether this endpoint
/// should initiate an unlink from everyone after leaving
/// the channel successfully.
/// Defaults to <c>true</c>.
/// </summary>
- (bool) unlinkAllOnSuccess;

@end


@class FMIceLinkWebSyncJoinConferenceCompleteArgs;
@class FMIceLinkWebSyncJoinConferenceFailureArgs;
@class FMIceLinkWebSyncJoinConferenceSuccessArgs;
@class FMIceLinkWebSyncJoinConferenceReceiveArgs;
@class FMIceLinkConference;
@class NSStringFMExtensions;
@class FMCallback;

/// <summary>
/// Arguments for a client joining an IceLink conference.
/// </summary>
#pragma clang diagnostic ignored "-Wshorten-64-to-32"
#pragma clang diagnostic ignored "-Wint-to-pointer-cast"

@interface FMIceLinkWebSyncJoinConferenceArgs : FMWebSyncBaseInputArgs 

/// <summary>
/// Gets the conference.
/// </summary>
- (FMIceLinkConference*) conference;
/// <summary>
/// Gets the conference channel.
/// </summary>
- (NSString*) conferenceChannel;
/// <summary>
/// Initializes a new instance of the <see cref="FMIceLinkWebSyncJoinConferenceArgs" /> class.
/// </summary>
/// <param name="conferenceChannel">The conference channel.</param>
/// <param name="conference">The conference</param>
- (id) initWithConferenceChannel:(NSString*)conferenceChannel conference:(FMIceLinkConference*)conference;
/// <summary>
/// Initializes a new instance of the <see cref="FMIceLinkWebSyncJoinConferenceArgs" /> class.
/// </summary>
/// <param name="conferenceChannel">The conference channel.</param>
/// <param name="conference">The conference</param>
+ (FMIceLinkWebSyncJoinConferenceArgs*) joinConferenceArgsWithConferenceChannel:(NSString*)conferenceChannel conference:(FMIceLinkConference*)conference;
/// <summary>
/// Gets the callback to invoke after <see cref="FMIceLinkWebSyncJoinConferenceArgs#onSuccess" /> or <see cref="FMIceLinkWebSyncJoinConferenceArgs#onFailure" />.
/// See <see cref="FMIceLinkWebSyncJoinConferenceCompleteArgs" /> for callback argument details.
/// </summary>
- (FMCallback*) onComplete;
/// <summary>
/// Gets the callback to invoke if the request fails.
/// See <see cref="FMIceLinkWebSyncJoinConferenceFailureArgs" /> for callback argument details.
/// </summary>
- (FMCallback*) onFailure;
/// <summary>
/// Gets the callback to invoke when data is received on the channel.
/// See <see cref="FMIceLinkWebSyncJoinConferenceReceiveArgs" /> for callback argument details.
/// </summary>
- (FMCallback*) onReceive;
/// <summary>
/// Gets the callback to invoke if the request succeeds.
/// See <see cref="FMIceLinkWebSyncJoinConferenceSuccessArgs" /> for callback argument details.
/// </summary>
- (FMCallback*) onSuccess;
- (bool) rejoin;
/// <summary>
/// Sets the conference.
/// </summary>
- (void) setConference:(FMIceLinkConference*)value;
/// <summary>
/// Sets the conference channel.
/// </summary>
- (void) setConferenceChannel:(NSString*)value;
/// <summary>
/// Sets the callback to invoke after <see cref="FMIceLinkWebSyncJoinConferenceArgs#onSuccess" /> or <see cref="FMIceLinkWebSyncJoinConferenceArgs#onFailure" />.
/// See <see cref="FMIceLinkWebSyncJoinConferenceCompleteArgs" /> for callback argument details.
/// </summary>
- (void) setOnComplete:(FMCallback*)value;
/// <summary>
/// Sets the callback to invoke after <see cref="FMIceLinkWebSyncJoinConferenceArgs#onSuccess" /> or <see cref="FMIceLinkWebSyncJoinConferenceArgs#onFailure" />.
/// See <see cref="FMIceLinkWebSyncJoinConferenceCompleteArgs" /> for callback argument details.
/// </summary>
- (void) setOnCompleteBlock:(void (^) (FMIceLinkWebSyncJoinConferenceCompleteArgs*))valueBlock;
/// <summary>
/// Sets the callback to invoke if the request fails.
/// See <see cref="FMIceLinkWebSyncJoinConferenceFailureArgs" /> for callback argument details.
/// </summary>
- (void) setOnFailure:(FMCallback*)value;
/// <summary>
/// Sets the callback to invoke if the request fails.
/// See <see cref="FMIceLinkWebSyncJoinConferenceFailureArgs" /> for callback argument details.
/// </summary>
- (void) setOnFailureBlock:(void (^) (FMIceLinkWebSyncJoinConferenceFailureArgs*))valueBlock;
/// <summary>
/// Sets the callback to invoke when data is received on the channel.
/// See <see cref="FMIceLinkWebSyncJoinConferenceReceiveArgs" /> for callback argument details.
/// </summary>
- (void) setOnReceive:(FMCallback*)value;
/// <summary>
/// Sets the callback to invoke when data is received on the channel.
/// See <see cref="FMIceLinkWebSyncJoinConferenceReceiveArgs" /> for callback argument details.
/// </summary>
- (void) setOnReceiveBlock:(void (^) (FMIceLinkWebSyncJoinConferenceReceiveArgs*))valueBlock;
/// <summary>
/// Sets the callback to invoke if the request succeeds.
/// See <see cref="FMIceLinkWebSyncJoinConferenceSuccessArgs" /> for callback argument details.
/// </summary>
- (void) setOnSuccess:(FMCallback*)value;
/// <summary>
/// Sets the callback to invoke if the request succeeds.
/// See <see cref="FMIceLinkWebSyncJoinConferenceSuccessArgs" /> for callback argument details.
/// </summary>
- (void) setOnSuccessBlock:(void (^) (FMIceLinkWebSyncJoinConferenceSuccessArgs*))valueBlock;
- (void) setRejoin:(bool)value;
/// <summary>
/// Sets the callback used to determine whether a peer link should
/// be initiated. Return <c>true</c> to initiate a link or <c>false</c> to
/// ignore the peer. If <c>null</c>, a link will always be initiated.
/// See <see cref="FMIceLinkWebSyncShouldLinkArgs" /> for callback argument details.
/// </summary>
- (void) setShouldLink:(FMCallback*)value;
/// <summary>
/// Sets a value indicating whether this endpoint
/// should drop existing links in favour of new ones
/// when remote peers join the channel.
/// Defaults to <c>true</c>.
/// </summary>
- (void) setUnlinkExistingOnUserJoin:(bool)value;
/// <summary>
/// Sets a value indicating whether this endpoint
/// should initiate an unlink when remote peers leave the channel.
/// Defaults to <c>true</c>.
/// </summary>
- (void) setUnlinkOnUserLeave:(bool)value;
/// <summary>
/// Gets the callback used to determine whether a peer link should
/// be initiated. Return <c>true</c> to initiate a link or <c>false</c> to
/// ignore the peer. If <c>null</c>, a link will always be initiated.
/// See <see cref="FMIceLinkWebSyncShouldLinkArgs" /> for callback argument details.
/// </summary>
- (FMCallback*) shouldLink;
/// <summary>
/// Gets a value indicating whether this endpoint
/// should drop existing links in favour of new ones
/// when remote peers join the channel.
/// Defaults to <c>true</c>.
/// </summary>
- (bool) unlinkExistingOnUserJoin;
/// <summary>
/// Gets a value indicating whether this endpoint
/// should initiate an unlink when remote peers leave the channel.
/// Defaults to <c>true</c>.
/// </summary>
- (bool) unlinkOnUserLeave;

@end


@class NSStringFMExtensions;

/// <summary>
/// Arguments for leave-conference failure callbacks.
/// </summary>
#pragma clang diagnostic ignored "-Wshorten-64-to-32"
#pragma clang diagnostic ignored "-Wint-to-pointer-cast"

@interface FMIceLinkWebSyncLeaveConferenceFailureArgs : FMWebSyncBaseFailureArgs 

/// <summary>
/// Gets the ID of the conference that failed to be left.
/// </summary>
- (NSString*) conferenceChannel;
- (id) init;
+ (FMIceLinkWebSyncLeaveConferenceFailureArgs*) leaveConferenceFailureArgs;

@end


@class NSStringFMExtensions;

/// <summary>
/// Arguments for leave-conference success callbacks.
/// </summary>
#pragma clang diagnostic ignored "-Wshorten-64-to-32"
#pragma clang diagnostic ignored "-Wint-to-pointer-cast"

@interface FMIceLinkWebSyncLeaveConferenceSuccessArgs : FMWebSyncBaseSuccessArgs 

/// <summary>
/// Gets the ID of the conference that was left.
/// </summary>
- (NSString*) conferenceChannel;
- (id) init;
+ (FMIceLinkWebSyncLeaveConferenceSuccessArgs*) leaveConferenceSuccessArgs;

@end


@class FMIceLinkWebSyncJoinConferenceSuccessArgs;
@class FMIceLinkWebSyncJoinConferenceFailureArgs;
@class FMIceLinkWebSyncJoinConferenceCompleteArgs;
@class FMIceLinkWebSyncJoinConferenceReceiveArgs;
@class FMIceLinkWebSyncLeaveConferenceSuccessArgs;
@class FMIceLinkWebSyncLeaveConferenceFailureArgs;
@class FMIceLinkWebSyncLeaveConferenceCompleteArgs;
@class FMWebSyncClient;
@class FMIceLinkConference;
@class NSStringFMExtensions;
@class FMCallback;
@class FMIceLinkCandidate;
@class FMIceLinkOfferAnswer;

#pragma clang diagnostic ignored "-Wshorten-64-to-32"
#pragma clang diagnostic ignored "-Wint-to-pointer-cast"

@interface FMIceLinkWebSyncState : NSObject 

+ (NSString*) candidateTag;
- (FMWebSyncClient*) client;
- (FMIceLinkConference*) conference;
- (NSString*) conferenceChannel;
+ (NSString*) conferenceKey;
- (id) init;
- (NSString*) instanceChannel;
- (NSString*) instanceId;
- (FMCallback*) joinShouldLink;
+ (NSString*) offerAnswerTag;
- (FMCallback*) onJoinComplete;
- (FMCallback*) onJoinFailure;
- (FMCallback*) onJoinReceive;
- (FMCallback*) onJoinSuccess;
- (FMCallback*) onLeaveComplete;
- (FMCallback*) onLeaveFailure;
- (FMCallback*) onLeaveSuccess;
- (void) publishCandidateWithInstanceId:(NSString*)instanceId candidate:(FMIceLinkCandidate*)candidate;
- (void) publishOfferAnswerWithInstanceId:(NSString*)instanceId offerAnswer:(FMIceLinkOfferAnswer*)offerAnswer;
- (void) setClient:(FMWebSyncClient*)value;
- (void) setConference:(FMIceLinkConference*)value;
- (void) setConferenceChannel:(NSString*)value;
- (void) setJoinShouldLink:(FMCallback*)value;
- (void) setOnJoinComplete:(FMCallback*)value;
- (void) setOnJoinCompleteBlock:(void (^) (FMIceLinkWebSyncJoinConferenceCompleteArgs*))valueBlock;
- (void) setOnJoinFailure:(FMCallback*)value;
- (void) setOnJoinFailureBlock:(void (^) (FMIceLinkWebSyncJoinConferenceFailureArgs*))valueBlock;
- (void) setOnJoinReceive:(FMCallback*)value;
- (void) setOnJoinReceiveBlock:(void (^) (FMIceLinkWebSyncJoinConferenceReceiveArgs*))valueBlock;
- (void) setOnJoinSuccess:(FMCallback*)value;
- (void) setOnJoinSuccessBlock:(void (^) (FMIceLinkWebSyncJoinConferenceSuccessArgs*))valueBlock;
- (void) setOnLeaveComplete:(FMCallback*)value;
- (void) setOnLeaveCompleteBlock:(void (^) (FMIceLinkWebSyncLeaveConferenceCompleteArgs*))valueBlock;
- (void) setOnLeaveFailure:(FMCallback*)value;
- (void) setOnLeaveFailureBlock:(void (^) (FMIceLinkWebSyncLeaveConferenceFailureArgs*))valueBlock;
- (void) setOnLeaveSuccess:(FMCallback*)value;
- (void) setOnLeaveSuccessBlock:(void (^) (FMIceLinkWebSyncLeaveConferenceSuccessArgs*))valueBlock;
- (void) setUnlinkAllOnLeaveSuccess:(bool)value;
- (void) setUnlinkExistingOnUserJoin:(bool)value;
- (void) setUnlinkOnUserLeave:(bool)value;
+ (FMIceLinkWebSyncState*) state;
- (bool) unlinkAllOnLeaveSuccess;
- (bool) unlinkExistingOnUserJoin;
- (bool) unlinkOnUserLeave;

@end


@class FMWebSyncClient;
@class FMIceLinkWebSyncJoinConferenceArgs;
@class FMIceLinkWebSyncLeaveConferenceArgs;

/// <summary>
/// Extension methods for <see cref="FMWebSyncClient" /> instances.
/// </summary>
#pragma clang diagnostic ignored "-Wshorten-64-to-32"
#pragma clang diagnostic ignored "-Wint-to-pointer-cast"

@interface FMWebSyncClient (FMIceLinkWebSyncExtensions)

/// <summary>
/// Joins an IceLink conference.
/// </summary>
/// <param name="client">The WebSync client.</param>
/// <param name="joinConferenceArgs">The arguments.</param>
/// <returns>The WebSync client.</returns>
+ (FMWebSyncClient*) joinConferenceWithClient:(FMWebSyncClient*)client joinConferenceArgs:(FMIceLinkWebSyncJoinConferenceArgs*)joinConferenceArgs;
/// <summary>
/// Joins an IceLink conference.
/// </summary>
/// <param name="client">The WebSync client.</param>
/// <param name="joinConferenceArgs">The arguments.</param>
/// <returns>The WebSync client.</returns>
- (FMWebSyncClient*) joinConferenceWithJoinConferenceArgs:(FMIceLinkWebSyncJoinConferenceArgs*)joinConferenceArgs;
/// <summary>
/// Joins an IceLink conference.
/// </summary>
/// <param name="client">The WebSync client.</param>
/// <param name="joinConferenceArgs">The arguments.</param>
/// <returns>The WebSync client.</returns>
- (FMWebSyncClient*) joinConferenceWithArgs:(FMIceLinkWebSyncJoinConferenceArgs*)joinConferenceArgs;
/// <summary>
/// Leaves an IceLink conference.
/// </summary>
/// <param name="client">The WebSync client.</param>
/// <param name="leaveConferenceArgs">The arguments.</param>
/// <returns>The WebSync client.</returns>
+ (FMWebSyncClient*) leaveConferenceWithClient:(FMWebSyncClient*)client leaveConferenceArgs:(FMIceLinkWebSyncLeaveConferenceArgs*)leaveConferenceArgs;
/// <summary>
/// Leaves an IceLink conference.
/// </summary>
/// <param name="client">The WebSync client.</param>
/// <param name="leaveConferenceArgs">The arguments.</param>
/// <returns>The WebSync client.</returns>
- (FMWebSyncClient*) leaveConferenceWithLeaveConferenceArgs:(FMIceLinkWebSyncLeaveConferenceArgs*)leaveConferenceArgs;
/// <summary>
/// Leaves an IceLink conference.
/// </summary>
/// <param name="client">The WebSync client.</param>
/// <param name="leaveConferenceArgs">The arguments.</param>
/// <returns>The WebSync client.</returns>
- (FMWebSyncClient*) leaveConferenceWithArgs:(FMIceLinkWebSyncLeaveConferenceArgs*)leaveConferenceArgs;

@end


@class FMIceLinkWebSyncPeerClient;
@class FMIceLinkBaseLinkArgs;

/// <summary>
/// Extension methods for <see cref="FMIceLinkBaseLinkArgs" /> instances.
/// </summary>
#pragma clang diagnostic ignored "-Wshorten-64-to-32"
#pragma clang diagnostic ignored "-Wint-to-pointer-cast"

@interface FMIceLinkBaseLinkArgs (FMIceLinkWebSyncExtensions)

/// <summary>
/// Gets the remote WebSync peer.
/// </summary>
/// <param name="baseLinkArgs">The base link arguments.</param>
/// <returns>The remote WebSync peer.</returns>
- (FMIceLinkWebSyncPeerClient*) getPeerClient;
/// <summary>
/// Gets the remote WebSync peer.
/// </summary>
/// <param name="baseLinkArgs">The base link arguments.</param>
/// <returns>The remote WebSync peer.</returns>
+ (FMIceLinkWebSyncPeerClient*) getPeerClientWithBaseLinkArgs:(FMIceLinkBaseLinkArgs*)baseLinkArgs;

@end


@class NSMutableDictionaryFMExtensions;
@class NSStringFMExtensions;

/// <summary>
/// Details about a remote WebSync instance.
/// </summary>
#pragma clang diagnostic ignored "-Wshorten-64-to-32"
#pragma clang diagnostic ignored "-Wint-to-pointer-cast"

@interface FMIceLinkWebSyncPeerClient : NSObject 

/// <summary>
/// Gets the WebSync bound records.
/// </summary>
- (NSMutableDictionary*) boundRecords;
/// <summary>
/// Initializes a new instance of the <see cref="FMIceLinkWebSyncPeerClient" /> class.
/// </summary>
/// <param name="instanceId">The WebSync instance ID.</param>
/// <param name="boundRecords">The WebSync bound records.</param>
- (id) initWithInstanceId:(NSString*)instanceId boundRecords:(NSMutableDictionary*)boundRecords;
/// <summary>
/// Gets the WebSync instance ID.
/// </summary>
- (NSString*) instanceId;
/// <summary>
/// Initializes a new instance of the <see cref="FMIceLinkWebSyncPeerClient" /> class.
/// </summary>
/// <param name="instanceId">The WebSync instance ID.</param>
/// <param name="boundRecords">The WebSync bound records.</param>
+ (FMIceLinkWebSyncPeerClient*) peerClientWithInstanceId:(NSString*)instanceId boundRecords:(NSMutableDictionary*)boundRecords;
/// <summary>
/// Sets the WebSync bound records.
/// </summary>
- (void) setBoundRecords:(NSMutableDictionary*)value;
/// <summary>
/// Sets the WebSync instance ID.
/// </summary>
- (void) setInstanceId:(NSString*)value;

@end



/// <summary>
/// Extension methods for <see cref="FMWebSyncClient" /> instances.
/// </summary>
@interface FMWebSyncClient (FMIceLinkWebSyncExtensions2)

/// <summary>
/// Joins an IceLink conference.
/// </summary>
/// <param name="client">The WebSync client.</param>
/// <param name="joinConferenceArgs">The arguments.</param>
/// <returns>The WebSync client.</returns>
- (FMWebSyncClient*) joinConferenceWithJoinArgs:(FMIceLinkWebSyncJoinConferenceArgs*)joinConferenceArgs;
/// <summary>
/// Leaves an IceLink conference.
/// </summary>
/// <param name="client">The WebSync client.</param>
/// <param name="leaveConferenceArgs">The arguments.</param>
/// <returns>The WebSync client.</returns>
- (FMWebSyncClient*) leaveConferenceWithLeaveArgs:(FMIceLinkWebSyncLeaveConferenceArgs*)leaveConferenceArgs;

@end


