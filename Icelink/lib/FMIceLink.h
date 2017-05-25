//
// Title: IceLink for Cocoa
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

@class FMIceLinkAdobeExtension;
@class FMIceLinkAdobeLink;
@class FMIceLinkAdobeLogProvider;
@class FMIceLinkAdobeUtil;
@class FMIceLinkAESCounter;
@class FMIceLinkCRC32;
@class FMIceLinkCRC32c;
@class FMIceLinkCrypto;
@class FMIceLinkDTLSClient;
@class FMIceLinkDTLSPeer;
@class FMIceLinkDTLSServer;
@class FMIceLinkLocalNetwork;
@class FMIceLinkBaseLinkArgs;
@class FMIceLinkCloseCompleteArgs;
@class FMIceLinkCloseArgs;
@class FMIceLinkLinkSendRTCPArgs;
@class FMIceLinkLinkSendRTPArgs;
@class FMIceLinkLinkLocalAddressesArgs;
@class FMIceLinkSendSCTPCompleteArgs;
@class FMIceLinkLinkCandidateArgs;
@class FMIceLinkLinkReceiveRTCPArgs;
@class FMIceLinkLinkReceiveRTPArgs;
@class FMIceLinkAllocateInfo;
@class FMIceLinkLinkReceiveSCTPArgs;
@class FMIceLinkChannelBindInfo;
@class FMIceLinkDTLSContentType;
@class FMIceLinkDTLSHandshakeType;
@class FMIceLinkDTLSMessage;
@class FMIceLinkICEAgentSendRTPArgs;
@class FMIceLinkICEAgentSendRTCPArgs;
@class FMIceLinkICEAgentLocalAddressesArgs;
@class FMIceLinkICERefreshArgs;
@class FMIceLinkICERefreshCompleteArgs;
@class FMIceLinkICERefreshFailureArgs;
@class FMIceLinkICERefreshSuccessArgs;
@class FMIceLinkICESctpResendInitArgs;
@class FMIceLinkSendSCTPArgs;
@class FMIceLinkSendSCTPFailureArgs;
@class FMIceLinkSendSCTPSuccessArgs;
@class FMIceLinkStreamLinkReceiveSCTPArgs;
@class FMIceLinkUnhandledExceptionArgs;
@class FMIceLinkBaseConference;
@class FMIceLinkBaseLink;
@class FMIceLinkBaseStream;
@class FMIceLinkBlockCipher;
@class FMIceLinkCertificate;
@class FMIceLinkAsymmetricKey;
@class FMIceLinkConnectInfo;
@class FMIceLinkConnectionBindInfo;
@class FMIceLinkICEAgentReceiveSCTPArgs;
@class FMIceLinkICEPeerSCTPMessageArgs;
@class FMIceLinkICEMessageBroker;
@class FMIceLinkICESctpManager;
@class FMIceLinkICETcpMessageBroker;
@class FMIceLinkTransportAddress;
@class FMIceLinkICECandidate;
@class FMIceLinkICETcpCandidate;
@class FMIceLinkICETcpHostCandidate;
@class FMIceLinkICETcpRelayedCandidate;
@class FMIceLinkRTCPPacket;
@class FMIceLinkRTCPFeedbackPacket;
@class FMIceLinkRTCPPsPacket;
@class FMIceLinkRTCPRpsiPacket;
@class FMIceLinkRTCPReferencePictureSelectionIndication;
@class FMIceLinkRTCPSliPacket;
@class FMIceLinkRTCPSliceLossIndication;
@class FMIceLinkRTCPReportPacket;
@class FMIceLinkPriorityQueue;
@class FMIceLinkJitterBuffer;
@class FMIceLinkJitterBufferPacket;
@class FMIceLinkRSAKey;
@class FMIceLinkSCTPLinkedList;
@class FMIceLinkSCTPLinkedListNode;
@class FMIceLinkSDPAttribute;
@class FMIceLinkSDPRtcpFeedbackAttribute;
@class FMIceLinkSDPSctpMapAttribute;
@class FMIceLinkSRTPProtectionProfile;
@class FMIceLinkSCTPAssociationState;
@class FMIceLinkSCTPAuthenticatedChunksParameters;
@class FMIceLinkSCTPDynamicAddressReconfigurationSupportParameters;
@class FMIceLinkSCTPPartialReliabilitySupportParameters;
@class FMIceLinkSCTPConstants;
@class FMIceLinkSCTPAuxilary;
@class FMIceLinkSCTPChunkType;
@class FMIceLinkSCTPHMACIdentifier;
@class FMIceLinkSCTPParameterType;
@class FMIceLinkSCTPErrorCauseCode;
@class FMIceLinkSCTPChannel;
@class FMIceLinkSCTPChannels;
@class FMIceLinkSCTPChunk;
@class FMIceLinkSCTPControlChunk;
@class FMIceLinkSCTPAbortChunk;
@class FMIceLinkSCTPCookieAckChunk;
@class FMIceLinkSCTPCookieEchoChunk;
@class FMIceLinkSCTPDataChunk;
@class FMIceLinkSCTPErrorChunk;
@class FMIceLinkSCTPErrorCause;
@class FMIceLinkSCTPInvalidStreamIdentifier;
@class FMIceLinkSCTPMissingMandatoryParameter;
@class FMIceLinkSCTPStaleCookieError;
@class FMIceLinkSCTPOutOfResource;
@class FMIceLinkSCTPUnresolvableAddress;
@class FMIceLinkSCTPUnrecognizedChunkType;
@class FMIceLinkSCTPInvalidMandatoryParameter;
@class FMIceLinkSCTPUnrecognizedParameters;
@class FMIceLinkSCTPNoUserData;
@class FMIceLinkSCTPCookieReceivedWhileShuttingDown;
@class FMIceLinkSCTPRestartOfAnAssociationWithNewAddresses;
@class FMIceLinkSCTPUserInitiatedAbort;
@class FMIceLinkSCTPProtocolViolation;
@class FMIceLinkSCTPHeartbeatChunk;
@class FMIceLinkSCTPHeartbeatAckChunk;
@class FMIceLinkSCTPInitChunk;
@class FMIceLinkSCTPInitAckChunk;
@class FMIceLinkSCTPPadChunk;
@class FMIceLinkSCTPSackChunk;
@class FMIceLinkSCTPGapAckBlock;
@class FMIceLinkSCTPGenericChunk;
@class FMIceLinkSCTPTLVParameter;
@class FMIceLinkSCTPHeartbeatInfoChunkParameter;
@class FMIceLinkSCTPIPv4ChunkParameter;
@class FMIceLinkSCTPRandomChunkParameter;
@class FMIceLinkSCTPRequestedHMACAlgorithmChunkParameter;
@class FMIceLinkSCTPChunkListChunkParameter;
@class FMIceLinkSCTPPADChunkParameter;
@class FMIceLinkSCTPForwardTSNSupportedChunkParameter;
@class FMIceLinkSCTPSupportedExtensionsChunkParameter;
@class FMIceLinkSCTPCookiePreservativeChunkParameter;
@class FMIceLinkSCTPHostNameAddressChunkParameter;
@class FMIceLinkSCTPSupportedAddressTypesChunkParameter;
@class FMIceLinkSCTPStateCookieChunkParameter;
@class FMIceLinkSCTPGenericChunkParameter;
@class FMIceLinkSCTPUnrecognizedParameterChunkParameter;
@class FMIceLinkSCTPShutdownChunk;
@class FMIceLinkSCTPShutdownAckChunk;
@class FMIceLinkSCTPShutdownCompleteChunk;
@class FMIceLinkSCTPCommonHeader;
@class FMIceLinkSCTPDataQueue;
@class FMIceLinkSCTPMessage;
@class FMIceLinkSCTPPacket;
@class FMIceLinkSCTPSendControlChunkQueue;
@class FMIceLinkSCTPStateCookie;
@class FMIceLinkSCTPStates;
@class FMIceLinkSDPSctpMaxMessageSizeAttribute;
@class FMIceLinkSDPMedia;
@class FMIceLinkSDPSctpMedia;
@class FMIceLinkSDPSctpPortAttribute;
@class FMIceLinkSDPSetup;
@class FMIceLinkSDPSetupAttribute;
@class FMIceLinkServerArray;
@class FMIceLinkStartSuccessArgs;
@class FMIceLinkStartFailureArgs;
@class FMIceLinkStartCompleteArgs;
@class FMIceLinkStartArgs;
@class FMIceLinkStopSuccessArgs;
@class FMIceLinkStopFailureArgs;
@class FMIceLinkStopCompleteArgs;
@class FMIceLinkStopArgs;
@class FMIceLinkSendOfferAnswerArgs;
@class FMIceLinkSendCandidateArgs;
@class FMIceLinkReceiveOfferAnswerArgs;
@class FMIceLinkReceiveCandidateArgs;
@class FMIceLinkSignalProvider;
@class FMIceLinkSTUNAddressFamily;
@class FMIceLinkSTUNMessage;
@class FMIceLinkSTUNDataMessage;
@class FMIceLinkSTUNConnectionAttemptIndication;
@class FMIceLinkSTUNException;
@class FMIceLinkSTUNConnectionTimeoutOrFailureException;
@class FMIceLinkSTUNConnectionAlreadyExistsException;
@class FMIceLinkSTUNAttribute;
@class FMIceLinkSTUNConnectionIdAttribute;
@class FMIceLinkSTUNConnectionAttemptMessage;
@class FMIceLinkSTUNConnectionBindMessage;
@class FMIceLinkSTUNConnectionBindRequest;
@class FMIceLinkSTUNConnectionBindResponse;
@class FMIceLinkSTUNConnectMessage;
@class FMIceLinkSTUNConnectResponse;
@class FMIceLinkSTUNConnectRequest;
@class FMIceLinkReceiveInfo;
@class FMIceLinkSendInfo;
@class FMIceLinkRefreshInfo;
@class FMIceLinkCreatePermissionInfo;
@class FMIceLinkServerEventArgs;
@class FMIceLinkLinkDownArgs;
@class FMIceLinkStreamLinkDownArgs;
@class FMIceLinkLinkInitArgs;
@class FMIceLinkStreamLinkInitArgs;
@class FMIceLinkLinkUpArgs;
@class FMIceLinkStreamLinkUpArgs;
@class FMIceLinkLinkOfferAnswerArgs;
@class FMIceLinkStreamLinkReceiveRTCPArgs;
@class FMIceLinkRelayAuthenticateArgs;
@class FMIceLinkRelayAuthenticateResult;
@class FMIceLinkStreamLinkReceiveRTPArgs;
@class FMIceLinkASN1Any;
@class FMIceLinkASN1ArrayOf;
@class FMIceLinkASN1Array;
@class FMIceLinkASN1ArrayElement;
@class FMIceLinkASN1BitString;
@class FMIceLinkASN1BmpString;
@class FMIceLinkASN1Boolean;
@class FMIceLinkASN1Class;
@class FMIceLinkASN1Explicit;
@class FMIceLinkASN1GeneralizedTime;
@class FMIceLinkASN1GeneralString;
@class FMIceLinkASN1GraphicString;
@class FMIceLinkASN1Ia5String;
@class FMIceLinkASN1Implicit;
@class FMIceLinkASN1Integer;
@class FMIceLinkASN1Null;
@class FMIceLinkASN1NumericString;
@class FMIceLinkASN1ObjectIdentifier;
@class FMIceLinkASN1OctetString;
@class FMIceLinkASN1PrintableString;
@class FMIceLinkASN1Sequence;
@class FMIceLinkASN1SequenceElement;
@class FMIceLinkASN1SequenceOf;
@class FMIceLinkASN1Set;
@class FMIceLinkASN1SetElement;
@class FMIceLinkASN1SetOf;
@class FMIceLinkASN1UniversalString;
@class FMIceLinkASN1UniversalTag;
@class FMIceLinkASN1Unknown;
@class FMIceLinkASN1UtcTime;
@class FMIceLinkASN1Utf8String;
@class FMIceLinkASN1VisibleString;
@class FMIceLinkConference;
@class FMIceLinkAcceptArgs;
@class FMIceLinkAcceptCompleteArgs;
@class FMIceLinkAcceptFailureArgs;
@class FMIceLinkAcceptSuccessArgs;
@class FMIceLinkCreateCompleteArgs;
@class FMIceLinkCreateFailureArgs;
@class FMIceLinkCreateSuccessArgs;
@class FMIceLinkCandidate;
@class FMIceLinkBaseMediaStreamOutputArgs;
@class FMIceLinkICEAgentReceiveRTPArgs;
@class FMIceLinkICEAgentReceiveRTCPArgs;
@class FMIceLinkICELocalCandidateArgs;
@class FMIceLinkICEPeerCloseArgs;
@class FMIceLinkICEPeerRTPPacketArgs;
@class FMIceLinkICEPeerRTCPPacketsArgs;
@class FMIceLinkICESendRequestBeforeSendArgs;
@class FMIceLinkICEAgentInitArgs;
@class FMIceLinkICEAgentUpArgs;
@class FMIceLinkICEDisconnectArgs;
@class FMIceLinkICEDisconnectCompleteArgs;
@class FMIceLinkICEAgentDownArgs;
@class FMIceLinkICEAgentCandidateArgs;
@class FMIceLinkICECreatePermissionArgs;
@class FMIceLinkICECreatePermissionCompleteArgs;
@class FMIceLinkICECreatePermissionFailureArgs;
@class FMIceLinkICECreatePermissionSuccessArgs;
@class FMIceLinkICESelectedValidCandidatePairArgs;
@class FMIceLinkICESendResponseArgs;
@class FMIceLinkICESendResponseCompleteArgs;
@class FMIceLinkICESendResponseFailureArgs;
@class FMIceLinkICESendResponseSuccessArgs;
@class FMIceLinkICESendRequestArgs;
@class FMIceLinkICESendRequestCompleteArgs;
@class FMIceLinkICESendRequestFailureArgs;
@class FMIceLinkICESendRequestSuccessArgs;
@class FMIceLinkICEServerBindArgs;
@class FMIceLinkICEServerBindCompleteArgs;
@class FMIceLinkICEServerBindFailureArgs;
@class FMIceLinkICEServerBindSuccessArgs;
@class FMIceLinkICEServerAllocateCompleteArgs;
@class FMIceLinkICEServerAllocateFailureArgs;
@class FMIceLinkICEServerAllocateSuccessArgs;
@class FMIceLinkICEAcceptArgs;
@class FMIceLinkICEAcceptCompleteArgs;
@class FMIceLinkICEAcceptFailureArgs;
@class FMIceLinkICEAcceptSuccessArgs;
@class FMIceLinkICEServerAllocateArgs;
@class FMIceLinkICECheckThread;
@class FMIceLinkOfferAnswer;
@class FMIceLinkRTCPAfbPacket;
@class FMIceLinkRTCPPliPacket;
@class FMIceLinkRTCPFbApplicationLayerFeedback;
@class FMIceLinkRTCPFbGenericNack;
@class FMIceLinkRTCPRtpPacket;
@class FMIceLinkRTCPGenericNackPacket;
@class FMIceLinkRTCPAppPacket;
@class FMIceLinkRTCPByePacket;
@class FMIceLinkRTCPReportBlock;
@class FMIceLinkRTCPSdesPacket;
@class FMIceLinkRTCPSourceDescriptionChunk;
@class FMIceLinkRTCPSourceDescriptionItem;
@class FMIceLinkRTCPRrPacket;
@class FMIceLinkSDPFingerprintAttribute;
@class FMIceLinkSDPRtcpMuxAttribute;
@class FMIceLinkRTCPUnknownPacket;
@class FMIceLinkRTCPSrPacket;
@class FMIceLinkRTPPacket;
@class FMIceLinkSDPSsrcAttribute;
@class FMIceLinkSDPUnknownAttribute;
@class FMIceLinkSDPCryptoSessionParam;
@class FMIceLinkSDPCryptoKeyMethod;
@class FMIceLinkSDPCryptoSuite;
@class FMIceLinkSDPCryptoAttribute;
@class FMIceLinkSerializer;
@class FMIceLinkTURNTcpConnectState;
@class FMIceLinkTURNTcpConnection;
@class FMIceLinkServer;
@class FMIceLinkCheckServerArgs;
@class FMIceLinkCheckServerSuccessArgs;
@class FMIceLinkCheckServerFailureArgs;
@class FMIceLinkServerCheck;
@class FMIceLinkSort;
@class FMIceLinkEncryptor;
@class FMIceLinkStream;
@class FMIceLinkStreamFormat;
@class FMIceLinkICECreateArgs;
@class FMIceLinkICECreateCompleteArgs;
@class FMIceLinkICECreateFailureArgs;
@class FMIceLinkICECreateSuccessArgs;
@class FMIceLinkICEValidList;
@class FMIceLinkICECheckList;
@class FMIceLinkICEUdpMessageBroker;
@class FMIceLinkLinkInitializeState;
@class FMIceLinkLink;
@class FMIceLinkICELocalAddress;
@class FMIceLinkICEMediaFormat;
@class FMIceLinkSDPCandidateType;
@class FMIceLinkSDPRemoteCandidate;
@class FMIceLinkSTUNRoleConflictException;
@class FMIceLinkSTUNIceControllingAttribute;
@class FMIceLinkSTUNIceControlledAttribute;
@class FMIceLinkSTUNUseCandidateAttribute;
@class FMIceLinkSDPIceUfragAttribute;
@class FMIceLinkSDPIceOptionsAttribute;
@class FMIceLinkSDPIcePasswordAttribute;
@class FMIceLinkSDPIceMismatchAttribute;
@class FMIceLinkSDPIceLiteAttribute;
@class FMIceLinkSDPRemoteCandidatesAttribute;
@class FMIceLinkSDPCandidateAttribute;
@class FMIceLinkSTUNPriorityAttribute;
@class FMIceLinkCreateArgs;
@class FMIceLinkNetworkTimeProtocol;
@class FMIceLinkSDPRtcpAttribute;
@class FMIceLinkSDPRtpAvpMedia;
@class FMIceLinkSDPUdpMedia;
@class FMIceLinkSDPEncryptionKey;
@class FMIceLinkSDPPromptEncryptionKey;
@class FMIceLinkSDPUriEncryptionKey;
@class FMIceLinkSDPBase64EncryptionKey;
@class FMIceLinkSDPClearEncryptionKey;
@class FMIceLinkSDPConferenceType;
@class FMIceLinkSDPOrientation;
@class FMIceLinkSDPReceiveOnlyAttribute;
@class FMIceLinkSDPSendReceiveAttribute;
@class FMIceLinkSDPSendOnlyAttribute;
@class FMIceLinkSDPInactiveAttribute;
@class FMIceLinkSDPOrientationAttribute;
@class FMIceLinkSDPConferenceTypeAttribute;
@class FMIceLinkSDPCharacterSetAttribute;
@class FMIceLinkSDPSdpLanguageAttribute;
@class FMIceLinkSDPLanguageAttribute;
@class FMIceLinkSDPFrameRateAttribute;
@class FMIceLinkSDPQualityAttribute;
@class FMIceLinkSDPFormatParametersAttribute;
@class FMIceLinkSDPRtpMapAttribute;
@class FMIceLinkSDPMaxPacketTimeAttribute;
@class FMIceLinkSDPPacketTimeAttribute;
@class FMIceLinkSDPToolAttribute;
@class FMIceLinkSDPKeywordsAttribute;
@class FMIceLinkSDPCategoryAttribute;
@class FMIceLinkSDPMediaType;
@class FMIceLinkSDPAttributeCreationArgs;
@class FMIceLinkSDPAttributeRegistration;
@class FMIceLinkSDPTimeZones;
@class FMIceLinkSDPRepeatTime;
@class FMIceLinkSDPBandwidthType;
@class FMIceLinkSDPAddressType;
@class FMIceLinkSDPBandwidth;
@class FMIceLinkSDPConnectionData;
@class FMIceLinkSDPMediaDescription;
@class FMIceLinkSDPMessage;
@class FMIceLinkSDPNetworkType;
@class FMIceLinkSDPOrigin;
@class FMIceLinkSDPTimeDescription;
@class FMIceLinkSDPTimeZone;
@class FMIceLinkSDPTiming;
@class FMIceLinkStringExtensions;
@class FMIceLinkSTUN;
@class FMIceLinkSTUNBindingMessage;
@class FMIceLinkSTUNBindingIndication;
@class FMIceLinkSTUNBadRequestException;
@class FMIceLinkSTUNBindingRequest;
@class FMIceLinkSTUNBindingResponse;
@class FMIceLinkSTUNExceptionCreationArgs;
@class FMIceLinkSTUNExceptionRegistration;
@class FMIceLinkSTUNUnknownErrorCodeException;
@class FMIceLinkSTUNTryAlternateException;
@class FMIceLinkSTUNServerErrorException;
@class FMIceLinkSTUNStaleNonceException;
@class FMIceLinkSTUNUnauthorizedException;
@class FMIceLinkSTUNInvalidErrorCodeException;
@class FMIceLinkSTUNUnknownAttributeException;
@class FMIceLinkICEAgent;
@class FMIceLinkICEUdpCandidate;
@class FMIceLinkICECandidatePair;
@class FMIceLinkICEComponent;
@class FMIceLinkSTUNInvalidTransactionIdException;
@class FMIceLinkSTUNInvalidMessageIntegrityException;
@class FMIceLinkSTUNAlternateServerAttribute;
@class FMIceLinkSTUNSoftwareAttribute;
@class FMIceLinkSTUNUnknownAttributesAttribute;
@class FMIceLinkSTUNNonceAttribute;
@class FMIceLinkSTUNRealmAttribute;
@class FMIceLinkSTUNErrorCodeAttribute;
@class FMIceLinkSTUNFingerprintAttribute;
@class FMIceLinkSTUNMessageIntegrityAttribute;
@class FMIceLinkSTUNUsernameAttribute;
@class FMIceLinkSTUNXorMappedAddressAttribute;
@class FMIceLinkICEUdpHostCandidate;
@class FMIceLinkSTUNInvalidResponseTypeException;
@class FMIceLinkSTUNMappedAddressAttribute;
@class FMIceLinkICEMediaStream;
@class FMIceLinkICEUdpPeerReflexiveCandidate;
@class FMIceLinkICEUdpRelayedCandidate;
@class FMIceLinkICEUdpServerReflexiveCandidate;
@class FMIceLinkSTUNAttributeCreationArgs;
@class FMIceLinkSTUNAttributeRegistration;
@class FMIceLinkSTUNMessageCreationArgs;
@class FMIceLinkSTUNMessageRegistration;
@class FMIceLinkSTUNRequestedAddressFamilyAttribute;
@class FMIceLinkSTUNWrongCredentialsException;
@class FMIceLinkSTUNUnsupportedTransportProtocolException;
@class FMIceLinkSTUNAllocationQuotaReachedException;
@class FMIceLinkSTUNInsufficientCapacityException;
@class FMIceLinkSTUNAllocationMismatchException;
@class FMIceLinkSTUNForbiddenException;
@class FMIceLinkSTUNXorRelayedAddressAttribute;
@class FMIceLinkSTUNReservationTokenAttribute;
@class FMIceLinkSTUNDontFragmentAttribute;
@class FMIceLinkSTUNRequestedTransportAttribute;
@class FMIceLinkSTUNEvenPortAttribute;
@class FMIceLinkSTUNXorPeerAddressAttribute;
@class FMIceLinkSTUNDataAttribute;
@class FMIceLinkSTUNLifetimeAttribute;
@class FMIceLinkSTUNChannelBindMessage;
@class FMIceLinkSTUNChannelBindResponse;
@class FMIceLinkSTUNChannelBindRequest;
@class FMIceLinkSTUNCreatePermissionMessage;
@class FMIceLinkSTUNCreatePermissionResponse;
@class FMIceLinkSTUNCreatePermissionRequest;
@class FMIceLinkSTUNDataIndication;
@class FMIceLinkSTUNSendMessage;
@class FMIceLinkSTUNSendIndication;
@class FMIceLinkSTUNRefreshMessage;
@class FMIceLinkSTUNRefreshRequest;
@class FMIceLinkSTUNRefreshResponse;
@class FMIceLinkSTUNAllocateMessage;
@class FMIceLinkSTUNAllocateResponse;
@class FMIceLinkSTUNAllocateRequest;
@class FMIceLinkSTUNChannelNumberAttribute;
@class FMIceLinkTURNDataReceivedArgs;
@class FMIceLinkTURNSocketAcceptedArgs;
@class FMIceLinkTURNChannelBinding;
@class FMIceLinkTURNAllocation;
@class FMIceLinkTURNTcpAllocation;
@class FMIceLinkTURNPermission;
@class FMIceLinkTURNUdpAllocation;
@class FMTcpOutputArgsExtensions;
@class FMTcpAcceptSuccessArgsExtensions;
@class FMIceLinkVirtualTcpSocket;
@class FMIceLinkVirtualNat;
@class FMIceLinkVirtualDevice;
@class FMIceLinkVirtualAdapter;
@class FMIceLinkPacketDeliveredArgs;
@class FMIceLinkVirtualNatMapping;
@class FMIceLinkVirtualNetwork;
@class FMIceLinkVirtualPacket;
@class FMUdpOutputArgsExtensions;
@class FMIceLinkVirtualUdpSocket;
@class FMIceLinkX501AttributeType;
@class FMIceLinkX501Attribute;
@class FMIceLinkX501DirectoryString;
@class FMIceLinkX501Name;
@class FMIceLinkX501RelativeDistinguishedName;
@class FMIceLinkX509AlgorithmIdentifier;
@class FMIceLinkX509Certificate;
@class FMIceLinkX509Extension;
@class FMIceLinkX509Extensions;
@class FMIceLinkX509RsaPrivateKey;
@class FMIceLinkX509RsaPublicKey;
@class FMIceLinkX509SubjectPublicKeyInfo;
@class FMIceLinkX509TbsCertificate;
@class FMIceLinkX509Time;
@class FMIceLinkX509Validity;

@interface FMIceLinkCRC32 : NSObject 

+ (long long)computeWithBytes:(NSData*)bytes;

@end


@interface FMIceLinkCRC32c : NSObject 

+ (long long)computeWithBytes:(NSData*)bytes;

+ (long long) computeWithBytes:(NSData*)bytes off:(int)off len:(int)len;

@end



@interface FMIceLinkCrypto : NSObject 

+ (NSMutableData *)secureRandomWithLength:(int)length;
+ (int)encryptAes128CbcWithKey:(NSData *)key iv:(NSData *)iv input:(NSData *)input inputOffset:(int)inputOffset output:(NSMutableData *)output outputOffset:(int)outputOffset length:(int)length;
+ (int)encryptAes256CbcWithKey:(NSData *)key iv:(NSData *)iv input:(NSData *)input inputOffset:(int)inputOffset output:(NSMutableData *)output outputOffset:(int)outputOffset length:(int)length;
+ (int)decryptAes128CbcWithKey:(NSData *)key iv:(NSData *)iv input:(NSData *)input inputOffset:(int)inputOffset output:(NSMutableData *)output outputOffset:(int)outputOffset length:(int)length;
+ (int)decryptAes256CbcWithKey:(NSData *)key iv:(NSData *)iv input:(NSData *)input inputOffset:(int)inputOffset output:(NSMutableData *)output outputOffset:(int)outputOffset length:(int)length;
+ (FMIceLinkRSAKey *)createRsaKey;
+ (NSMutableData *)signRsaMd5Sha1WithMd5Sha1:(NSData *)md5Sha1 privateKey:(FMIceLinkRSAKey *)privateKey;
+ (bool)verifyRsaMd5Sha1WithMd5Sha1:(NSData *)md5Sha1 signature:(NSData *)signature publicKey:(FMIceLinkRSAKey *)publicKey;
+ (NSMutableData *)signRsaSha1WithSha1:(NSData *)sha1 privateKey:(FMIceLinkRSAKey *)privateKey;
+ (bool)verifyRsaSha1WithSha1:(NSData *)sha1 signature:(NSData *)signature publicKey:(FMIceLinkRSAKey *)publicKey;
+ (NSMutableData *)signRsaSha256WithSha256:(NSData *)sha256 privateKey:(FMIceLinkRSAKey *)privateKey;
+ (bool)verifyRsaSha256WithSha256:(NSData *)sha256 signature:(NSData *)signature publicKey:(FMIceLinkRSAKey *)publicKey;
+ (NSMutableData *)encryptRsaWithData:(NSData *)data publicKey:(FMIceLinkRSAKey *)publicKey;
+ (NSMutableData *)decryptRsaWithData:(NSData *)data privateKey:(FMIceLinkRSAKey *)privateKey;
+ (NSMutableData *)getMd5HashWithS:(NSString *)s;
+ (NSMutableData *)getMd5HashWithData:(NSData *)data;
+ (NSMutableData *)getSha1HashWithS:(NSString *)s;
+ (NSMutableData *)getSha1HashWithData:(NSData *)data;
+ (NSMutableData *)getMd5Sha1HashWithS:(NSString *)s;
+ (NSMutableData *)getMd5Sha1HashWithData:(NSData *)data;
+ (NSMutableData *)getSha256HashWithS:(NSString *)s;
+ (NSMutableData *)getSha256HashWithData:(NSData *)data;
+ (NSMutableData *)getHmacMd5WithKey:(NSData *)key data:(NSData *)data;
+ (NSMutableData *)getHmacSha1WithKey:(NSData *)key data:(NSData *)data offset:(int)offset length:(int)length;
+ (NSMutableData *)generateAESKeystreamWithKey:(NSData *)key length:(int)length counter:(NSMutableData *)counter;

@end


@interface FMIceLinkAESCounter : NSObject 

- (void)clear;
- (id)initWithKey:(NSData *)key salt:(NSData *)salt;
- (NSMutableData *)generateWithLabel:(char)label length:(int)length;
- (NSMutableData *)encryptWithData:(NSMutableData *)data offset:(int)offset length:(int)length ssrc:(long long)ssrc packetIndex:(long long)packetIndex;
- (NSMutableData *)decryptWithData:(NSMutableData *)data offset:(int)offset length:(int)length ssrc:(long long)ssrc packetIndex:(long long)packetIndex;

@end



typedef enum {
	FMIceLinkAddressTypeUnknown = 1,
	FMIceLinkAddressTypeIPv4 = 4,
	FMIceLinkAddressTypeIPv6 = 6
} FMIceLinkAddressType;



/// <summary>
/// DTLS cipher suites.
/// </summary>
typedef enum {
	/// <summary>
	/// Indicates TLS_RSA_WITH_AES_128_CBC_SHA.
	/// </summary>
	FMIceLinkCipherSuiteAes128Sha = 1,
	/// <summary>
	/// Indicates TLS_DH_RSA_WITH_AES_128_CBC_SHA.
	/// </summary>
	FMIceLinkCipherSuiteDhRsaAes128Sha = 2,
	/// <summary>
	/// Indicates TLS_DH_RSA_WITH_AES_128_CBC_SHA.
	/// </summary>
	FMIceLinkCipherSuiteEcdhRsaAes128Sha = 3,
	/// <summary>
	/// Indicates TLS_DHE_RSA_WITH_AES_128_CBC_SHA.
	/// </summary>
	FMIceLinkCipherSuiteDheRsaAes128Sha = 4,
	/// <summary>
	/// Indicates TLS_DHE_RSA_WITH_AES_128_CBC_SHA.
	/// </summary>
	FMIceLinkCipherSuiteEcdheRsaAes128Sha = 5,
	/// <summary>
	/// Indicates TLS_ECDHE_ECDSA_WITH_AES_128_CBC_SHA.
	/// </summary>
	FMIceLinkCipherSuiteEcdheEcdsaAes128Sha = 6,
	/// <summary>
	/// Indicates TLS_RSA_WITH_AES_128_GCM_SHA256.
	/// </summary>
	FMIceLinkCipherSuiteAes128GcmSha256 = 7,
	/// <summary>
	/// Indicates TLS_DH_RSA_WITH_AES_128_GCM_SHA256.
	/// </summary>
	FMIceLinkCipherSuiteDhRsaAes128GcmSha256 = 8,
	/// <summary>
	/// Indicates TLS_DH_RSA_WITH_AES_128_GCM_SHA256.
	/// </summary>
	FMIceLinkCipherSuiteEcdhRsaAes128GcmSha256 = 9,
	/// <summary>
	/// Indicates TLS_DHE_RSA_WITH_AES_128_GCM_SHA256.
	/// </summary>
	FMIceLinkCipherSuiteDheRsaAes128GcmSha256 = 10,
	/// <summary>
	/// Indicates TLS_DHE_RSA_WITH_AES_128_GCM_SHA256.
	/// </summary>
	FMIceLinkCipherSuiteEcdheRsaAes128GcmSha256 = 11,
	/// <summary>
	/// Indicates TLS_ECDHE_ECDSA_WITH_AES_128_GCM_SHA256.
	/// </summary>
	FMIceLinkCipherSuiteEcdheEcdsaAes128GcmSha256 = 12
} FMIceLinkCipherSuite;



/// <summary>
/// DTLS protocol versions.
/// </summary>
typedef enum {
	/// <summary>
	/// Indicates DTLS 1.0.
	/// </summary>
	FMIceLinkProtocolVersionDtls10 = 1,
	/// <summary>
	/// Indicates DTLS 1.2.
	/// </summary>
	FMIceLinkProtocolVersionDtls12 = 2
} FMIceLinkProtocolVersion;



/// <summary>
/// Describes the direction of media flow.
/// </summary>
typedef enum {
	/// <summary>
	/// Indicates media can be sent and received.
	/// </summary>
	FMIceLinkDirectionSendReceive = 1,
	/// <summary>
	/// Indicates media can be sent, but not received.
	/// </summary>
	FMIceLinkDirectionSendOnly = 2,
	/// <summary>
	/// Indicates media can be received, but not sent.
	/// </summary>
	FMIceLinkDirectionReceiveOnly = 3,
	/// <summary>
	/// Indicates media cannot be sent or received.
	/// </summary>
	FMIceLinkDirectionInactive = 4,
	/// <summary>
	/// Same as <see cref="FMIceLinkDirectionSendReceive" />.
	/// </summary>
	FMIceLinkDirectionDefault = 1
} FMIceLinkDirection;



/// <summary>
/// An IceLink protocol type.
/// </summary>
typedef enum {
	/// <summary>
	/// Indicates that the protocol is UDP.
	/// </summary>
	FMIceLinkProtocolTypeUdp = 1,
	/// <summary>
	/// Indicates that the protocol is TCP.
	/// </summary>
	FMIceLinkProtocolTypeTcp = 2
} FMIceLinkProtocolType;



/// <summary>
/// An authenticated relay operation.
/// </summary>
typedef enum {
	/// <summary>
	/// Indicates a socket allocation request.
	/// </summary>
	FMIceLinkRelayOperationAllocate = 1,
	/// <summary>
	/// Indicates a create-permission request.
	/// </summary>
	FMIceLinkRelayOperationCreatePermission = 2,
	/// <summary>
	/// Indicates an allocation refresh request.
	/// </summary>
	FMIceLinkRelayOperationRefresh = 3,
	/// <summary>
	/// Indicates a channel-bind request.
	/// </summary>
	FMIceLinkRelayOperationChannelBind = 4
} FMIceLinkRelayOperation;



/// <summary>
/// Describes the RTP mode to use.
/// </summary>
typedef enum {
	/// <summary>
	/// Indicates RTP/AVP and RTP/SAVP (secure) profiles
	/// should be used.
	/// </summary>
	FMIceLinkRtpModeBasic = 1,
	/// <summary>
	/// Indicates RTP/AVPF and RTP/SAVPF (secure) profiles
	/// should be used.
	/// </summary>
	FMIceLinkRtpModeExtended = 2,
	/// <summary>
	/// Same as <see cref="FMIceLinkRtpModeExtended" />.
	/// </summary>
	FMIceLinkRtpModeDefault = 2
} FMIceLinkRtpMode;



/// <summary>
/// The encryption role for the stream.
/// </summary>
typedef enum {
	/// <summary>
	/// Same as <see cref="FMIceLinkEncryptionRoleActivePassive" />.
	/// </summary>
	FMIceLinkEncryptionRoleDefault = 3,
	/// <summary>
	/// Indicates that this endpoint will initiate
	/// an outgoing connection (client role).
	/// </summary>
	FMIceLinkEncryptionRoleActive = 1,
	/// <summary>
	/// Indicates that this endpoint will accept
	/// an incoming connection (server role).
	/// </summary>
	FMIceLinkEncryptionRolePassive = 2,
	/// <summary>
	/// Indicates that this endpoint is willing to
	/// initiate an outgoing connection (client role)
	/// or accept an incoming connection (server role).
	/// </summary>
	FMIceLinkEncryptionRoleActivePassive = 3
} FMIceLinkEncryptionRole;



/// <summary>
/// Describes the stream protocol to use.
/// </summary>
typedef enum {
	/// <summary>
	/// Indicates that the RTP protocol is used.
	/// </summary>
	FMIceLinkStreamProtocolRtp = 1,
	/// <summary>
	/// Indicates that the SCTP protocol is used.
	/// </summary>
	FMIceLinkStreamProtocolSctp = 2
} FMIceLinkStreamProtocol;



/// <summary>
/// Describes how candidates are to be gathered.
/// </summary>
typedef enum {
	/// <summary>
	/// Indicates that candidates should be gathered
	/// early and included in the offer/answer. This is
	/// the slowest mode of operation since candidate
	/// gathering is asynchronous and requires a timeout
	/// period to elapse before the offer/answer can be
	/// raised. There is also a risk that valid candidates
	/// might not be gathered before the end of the
	/// timeout period and therefore not included for
	/// path consideration. This mode should only be used
	/// for third-party compatibility.
	/// </summary>
	FMIceLinkCandidateModeEarly = 1,
	/// <summary>
	/// Indicates that candidates should be gathered late
	/// and excluded from the offer/answer. This is the
	/// fastest mode of operation since it allows the
	/// offer/answer exchange to take place immediately,
	/// with candidates exchanged between peers immediately
	/// after being discovered. There is also little risk for
	/// missing valid candidates - the search for valid
	/// candidates only terminates when the link establishes
	/// or times out. This is also known as "trickle" ICE.
	/// </summary>
	FMIceLinkCandidateModeLate = 2,
	/// <summary>
	/// Same as <see cref="FMIceLinkCandidateModeLate" />.
	/// </summary>
	FMIceLinkCandidateModeDefault = 2
} FMIceLinkCandidateMode;



/// <summary>
/// Describes candidate types.
/// </summary>
typedef enum {
	/// <summary>
	/// Private, or host, candidates represent local
	/// IP address and port combinations.
	/// </summary>
	FMIceLinkCandidateTypePrivate = 1,
	/// <summary>
	/// Public, or reflexive, candidates represent
	/// IP address and port combinations assigned by the
	/// NAT when communicating with a STUN server.
	/// </summary>
	FMIceLinkCandidateTypePublic = 2,
	/// <summary>
	/// Relay candidates represent IP address and port
	/// combinations assigned by the TURN server.
	/// </summary>
	FMIceLinkCandidateTypeRelay = 4,
	/// <summary>
	/// Relay candidates represent IP address and port
	/// combinations assigned by the TURN server.
	/// </summary>
	FMIceLinkCandidateTypeRelayed = 4
} FMIceLinkCandidateType;



/// <summary>
/// The encryption mode for the stream.
/// </summary>
typedef enum {
	/// <summary>
	/// Same as <see cref="FMIceLinkEncryptionModeAes128Strong" />.
	/// </summary>
	FMIceLinkEncryptionModeDefault = 2,
	/// <summary>
	/// No encryption and no integrity checking.
	/// </summary>
	FMIceLinkEncryptionModeNull = 1,
	/// <summary>
	/// AES 128-bit encryption with strong HMAC-SHA1 integrity checking (80-bit).
	/// </summary>
	FMIceLinkEncryptionModeAes128Strong = 2,
	/// <summary>
	/// AES 128-bit encryption with weak HMAC-SHA1 integrity checking (32-bit).
	/// </summary>
	FMIceLinkEncryptionModeAes128Weak = 3,
	/// <summary>
	/// Null encryption with strong HMAC-SHA1 integrity checking (80-bit).
	/// </summary>
	FMIceLinkEncryptionModeNullStrong = 4,
	/// <summary>
	/// Null encryption with weak HMAC-SHA1 integrity checking (32-bit).
	/// </summary>
	FMIceLinkEncryptionModeNullWeak = 5
} FMIceLinkEncryptionMode;



/// <summary>
/// An IceLink event type.
/// </summary>
typedef enum {
	/// <summary>
	/// Indicates that a STUN binding request is about to be processed.
	/// </summary>
	FMIceLinkEventTypeBeforeBinding = 1,
	/// <summary>
	/// Indicates that a TURN allocate request is about to be processed.
	/// </summary>
	FMIceLinkEventTypeBeforeAllocate = 2,
	/// <summary>
	/// Indicates that a TURN refresh request is about to be processed.
	/// </summary>
	FMIceLinkEventTypeBeforeRefresh = 3,
	/// <summary>
	/// Indicates that a TURN create-permission request is about to be processed.
	/// </summary>
	FMIceLinkEventTypeBeforeCreatePermission = 4,
	/// <summary>
	/// Indicates that a TURN allocation is about to send data.
	/// </summary>
	FMIceLinkEventTypeBeforeSend = 5,
	/// <summary>
	/// Indicates that a TURN allocation is about to receive data.
	/// </summary>
	FMIceLinkEventTypeBeforeReceive = 6,
	/// <summary>
	/// Indicates that a TURN connect request is about to be processed.
	/// </summary>
	FMIceLinkEventTypeBeforeConnect = 7,
	/// <summary>
	/// Indicates that a TURN connection-bind request is about to be processed.
	/// </summary>
	FMIceLinkEventTypeBeforeConnectionBind = 8,
	/// <summary>
	/// Indicates that a TURN channel-bind request is about to be processed.
	/// </summary>
	FMIceLinkEventTypeBeforeChannelBind = 9,
	/// <summary>
	/// Indicates that a STUN binding request has been processed.
	/// </summary>
	FMIceLinkEventTypeAfterBinding = 11,
	/// <summary>
	/// Indicates that a TURN allocate request has been processed.
	/// </summary>
	FMIceLinkEventTypeAfterAllocate = 12,
	/// <summary>
	/// Indicates that a TURN refresh request has been processed.
	/// </summary>
	FMIceLinkEventTypeAfterRefresh = 13,
	/// <summary>
	/// Indicates that a TURN create-permission request has been processed.
	/// </summary>
	FMIceLinkEventTypeAfterCreatePermission = 14,
	/// <summary>
	/// Indicates that a TURN allocation has sent data.
	/// </summary>
	FMIceLinkEventTypeAfterSend = 15,
	/// <summary>
	/// Indicates that a TURN allocation has received data.
	/// </summary>
	FMIceLinkEventTypeAfterReceive = 16,
	/// <summary>
	/// Indicates that a TURN connect request has been processed.
	/// </summary>
	FMIceLinkEventTypeAfterConnect = 17,
	/// <summary>
	/// Indicates that a TURN connection-bind request has been processed.
	/// </summary>
	FMIceLinkEventTypeAfterConnectionBind = 18,
	/// <summary>
	/// Indicates that a TURN channel-bind request has been processed.
	/// </summary>
	FMIceLinkEventTypeAfterChannelBind = 19
} FMIceLinkEventType;



typedef enum {
	FMIceLinkTURNTcpConnectionTypeUnknown = 1,
	FMIceLinkTURNTcpConnectionTypeControl = 2,
	FMIceLinkTURNTcpConnectionTypeClientData = 3
} FMIceLinkTURNTcpConnectionType;



/// <summary>
/// The compare result in a sort operation.
/// </summary>
typedef enum {
	/// <summary>
	/// Indicates that the two elements are equal.
	/// </summary>
	FMIceLinkCompareResultEqual = 1,
	/// <summary>
	/// Indicates that the first element belongs before the second.
	/// </summary>
	FMIceLinkCompareResultNegative = 2,
	/// <summary>
	/// Indicates that ths second element belongs before the first.
	/// </summary>
	FMIceLinkCompareResultPositive = 3
} FMIceLinkCompareResult;



/// <summary>
/// The valid types of streams that can be established.
/// </summary>
typedef enum {
	/// <summary>
	/// Indicates an audio stream.
	/// </summary>
	FMIceLinkStreamTypeAudio = 1,
	/// <summary>
	/// Indicates a video stream.
	/// </summary>
	FMIceLinkStreamTypeVideo = 2,
	/// <summary>
	/// Indicates a text stream.
	/// </summary>
	FMIceLinkStreamTypeText = 3,
	/// <summary>
	/// Indicates an application stream.
	/// </summary>
	FMIceLinkStreamTypeApplication = 4,
	/// <summary>
	/// Indicates a message stream.
	/// </summary>
	FMIceLinkStreamTypeMessage = 5
} FMIceLinkStreamType;



typedef enum {
	FMIceLinkICEAgentStateRunning = 1,
	FMIceLinkICEAgentStateCompleted = 2,
	FMIceLinkICEAgentStateFailed = 3,
	FMIceLinkICEAgentStateInactive = 4,
	FMIceLinkICEAgentStateCompleting = 5
} FMIceLinkICEAgentState;



typedef enum {
	FMIceLinkICECheckListStateRunning = 1,
	FMIceLinkICECheckListStateCompleted = 2,
	FMIceLinkICECheckListStateFailed = 3
} FMIceLinkICECheckListState;



typedef enum {
	FMIceLinkICECandidatePairStateWaiting = 1,
	FMIceLinkICECandidatePairStateInProgress = 2,
	FMIceLinkICECandidatePairStateSucceeded = 3,
	FMIceLinkICECandidatePairStateFailed = 4
} FMIceLinkICECandidatePairState;



typedef enum {
	FMIceLinkICEAgentRoleControlling = 1,
	FMIceLinkICEAgentRoleControlled = 2
} FMIceLinkICEAgentRole;



typedef enum {
	FMIceLinkICEDtlsHandshakeStateInactive = 1,
	FMIceLinkICEDtlsHandshakeStateRunning = 2,
	FMIceLinkICEDtlsHandshakeStateFailed = 3,
	FMIceLinkICEDtlsHandshakeStateFinished = 4
} FMIceLinkICEDtlsHandshakeState;



typedef enum {
	FMIceLinkICESctpInitializationStateInactive = 1,
	FMIceLinkICESctpInitializationStateRunning = 2,
	FMIceLinkICESctpInitializationStateFailed = 3,
	FMIceLinkICESctpInitializationStateFinished = 4
} FMIceLinkICESctpInitializationState;



typedef enum {
	FMIceLinkICENominationRegular = 1,
	FMIceLinkICENominationAggressive = 2
} FMIceLinkICENomination;



/// <summary>
/// The list of valid message types.
/// </summary>
typedef enum {
	/// <summary>
	/// Specifies that the message is a request.
	/// </summary>
	FMIceLinkSTUNMessageTypeRequest = 1,
	/// <summary>
	/// Specifies that the message is an indication (no response).
	/// </summary>
	FMIceLinkSTUNMessageTypeIndication = 2,
	/// <summary>
	/// Specifies that the message is a response indicating success.
	/// </summary>
	FMIceLinkSTUNMessageTypeSuccessResponse = 3,
	/// <summary>
	/// Specifies that the message is a response indicating failure.
	/// </summary>
	FMIceLinkSTUNMessageTypeErrorResponse = 4
} FMIceLinkSTUNMessageType;



/// <summary>
/// Defines various virtual network NAT modes.
/// </summary>
typedef enum {
	/// <summary>
	/// Once an internal address (iAddr:iPort) is mapped to an external
	/// address (eAddr:ePort), any packets from iAddr:iPort will be sent
	/// through eAddr:ePort. Any external host can send packets to
	/// iAddr:iPort by sending packets to eAddr:ePort.
	/// </summary>
	FMIceLinkVirtualNatModeFullCone = 1,
	/// <summary>
	/// Once an internal address (iAddr:iPort) is mapped to an external
	/// address (eAddr:ePort), any packets from iAddr:iPort will be sent
	/// through eAddr:ePort. An external host (hAddr:any) can send
	/// packets to iAddr:iPort by sending packets to eAddr:ePort only if
	/// iAddr:iPort has previously sent a packet to hAddr:any. "Any"
	/// means the port number doesn't matter.
	/// </summary>
	FMIceLinkVirtualNatModeAddressRestrictedCone = 2,
	/// <summary>
	/// Once an internal address (iAddr:iPort) is mapped to an external
	/// address (eAddr:ePort), any packets from iAddr:iPort will be sent
	/// through eAddr:ePort. An external host (hAddr:hPort) can send
	/// packets to iAddr:iPort by sending packets to eAddr:ePort only if
	/// iAddr:iPort has previously sent a packet to hAddr:hPort.
	/// </summary>
	FMIceLinkVirtualNatModePortRestrictedCone = 3,
	/// <summary>
	/// Each request from the same internal IP address and port to a
	/// specific destination IP address and port is mapped to a unique
	/// external source IP address and port, if the same internal host
	/// sends a packet even with the same source address and port but
	/// to a different destination, a different mapping is used. Only
	/// an external host that receives a packet from an internal host
	/// can send a packet back.
	/// </summary>
	FMIceLinkVirtualNatModeSymmetric = 4
} FMIceLinkVirtualNatMode;



typedef enum {
	FMIceLinkX509TimeTypeUtc = 1,
	FMIceLinkX509TimeTypeGeneralized = 2
} FMIceLinkX509TimeType;


@class FMIceLinkConference;
@class FMIceLinkLink;
@class NSStringFMExtensions;

/// <summary>
/// Base class for link event arguments.
/// </summary>
#pragma clang diagnostic ignored "-Wshorten-64-to-32"
#pragma clang diagnostic ignored "-Wint-to-pointer-cast"

@interface FMIceLinkBaseLinkArgs : FMDynamic 

+ (FMIceLinkBaseLinkArgs*) baseLinkArgs;
/// <summary>
/// Gets the conferece.
/// </summary>
- (FMIceLinkConference*) conference;
- (id) init;
/// <summary>
/// Gets the link.
/// </summary>
- (FMIceLinkLink*) link;
/// <summary>
/// Gets the ID of the peer.
/// </summary>
- (NSString*) peerId;
/// <summary>
/// Gets custom state associated with the peer.
/// </summary>
- (NSObject*) peerState;
/// <summary>
/// Sets the conferece.
/// </summary>
- (void) setConference:(FMIceLinkConference*)value;
/// <summary>
/// Sets the link.
/// </summary>
- (void) setLink:(FMIceLinkLink*)value;

@end


@class NSExceptionFMExtensions;
@class FMIceLinkLink;
@class NSStringFMExtensions;

/// <summary>
/// Arguments for the close complete event.
/// </summary>
#pragma clang diagnostic ignored "-Wshorten-64-to-32"
#pragma clang diagnostic ignored "-Wint-to-pointer-cast"

@interface FMIceLinkCloseCompleteArgs : FMDynamic 

+ (FMIceLinkCloseCompleteArgs*) closeCompleteArgs;
/// <summary>
/// Gets the exception that was generated while closing.
/// </summary>
- (NSException*) exception;
/// <summary>
/// Deserializes an instance from JSON.
/// </summary>
/// <param name="closeCompleteArgsJson">The JSON to deserialize.</param>
/// <returns>The deserialized close complete arguments.</returns>
+ (FMIceLinkCloseCompleteArgs*) fromJsonWithCloseCompleteArgsJson:(NSString*)closeCompleteArgsJson;
- (id) init;
/// <summary>
/// Gets the closed link.
/// </summary>
- (FMIceLinkLink*) link;
/// <summary>
/// Gets the original reason for closing.
/// </summary>
- (NSString*) reason;
- (void) setException:(NSException*)value;
- (void) setLink:(FMIceLinkLink*)value;
- (void) setReason:(NSString*)value;
/// <summary>
/// Serializes this instance to JSON.
/// </summary>
/// <returns></returns>
- (NSString*) toJson;
/// <summary>
/// Serializes an instance to JSON.
/// </summary>
/// <param name="closeCompleteArgs">The close complete arguments to serialize.</param>
/// <returns>The serialized JSON.</returns>
+ (NSString*) toJsonWithCloseCompleteArgs:(FMIceLinkCloseCompleteArgs*)closeCompleteArgs;

@end


@class FMIceLinkCloseCompleteArgs;
@class FMCallback;
@class NSStringFMExtensions;

/// <summary>
/// Arguments for link close invocations.
/// </summary>
#pragma clang diagnostic ignored "-Wshorten-64-to-32"
#pragma clang diagnostic ignored "-Wint-to-pointer-cast"

@interface FMIceLinkCloseArgs : FMDynamic 

/// <summary>
/// Initializes a new instance of the <see cref="FMIceLinkCloseArgs" /> class.
/// </summary>
+ (FMIceLinkCloseArgs*) closeArgs;
/// <summary>
/// Initializes a new instance of the <see cref="FMIceLinkCloseArgs" /> class.
/// </summary>
/// <param name="reason">The reason for closing.</param>
+ (FMIceLinkCloseArgs*) closeArgsWithReason:(NSString*)reason;
/// <summary>
/// Deserializes an instance from JSON.
/// </summary>
/// <param name="closeArgsJson">The JSON to deserialize.</param>
/// <returns>The deserialized close arguments.</returns>
+ (FMIceLinkCloseArgs*) fromJsonWithCloseArgsJson:(NSString*)closeArgsJson;
/// <summary>
/// Initializes a new instance of the <see cref="FMIceLinkCloseArgs" /> class.
/// </summary>
- (id) init;
/// <summary>
/// Initializes a new instance of the <see cref="FMIceLinkCloseArgs" /> class.
/// </summary>
/// <param name="reason">The reason for closing.</param>
- (id) initWithReason:(NSString*)reason;
/// <summary>
/// Gets the callback to invoke when the close operation completes.
/// </summary>
- (FMCallback*) onComplete;
/// <summary>
/// Gets the reason for closing.
/// </summary>
- (NSString*) reason;
/// <summary>
/// Sets the callback to invoke when the close operation completes.
/// </summary>
- (void) setOnComplete:(FMCallback*)value;
/// <summary>
/// Sets the callback to invoke when the close operation completes.
/// </summary>
- (void) setOnCompleteBlock:(void (^) (FMIceLinkCloseCompleteArgs*))valueBlock;
/// <summary>
/// Sets the reason for closing.
/// </summary>
- (void) setReason:(NSString*)value;
/// <summary>
/// Serializes this instance to JSON.
/// </summary>
/// <returns></returns>
- (NSString*) toJson;
/// <summary>
/// Serializes an instance to JSON.
/// </summary>
/// <param name="closeArgs">The close arguments to serialize.</param>
/// <returns>The serialized JSON.</returns>
+ (NSString*) toJsonWithCloseArgs:(FMIceLinkCloseArgs*)closeArgs;

@end


@class FMIceLinkStream;
@class NSMutableArrayFMExtensions;

/// <summary>
/// Arguments for the link send-RTCP event.
/// </summary>
#pragma clang diagnostic ignored "-Wshorten-64-to-32"
#pragma clang diagnostic ignored "-Wint-to-pointer-cast"

@interface FMIceLinkLinkSendRTCPArgs : FMIceLinkBaseLinkArgs 

- (id) init;
+ (FMIceLinkLinkSendRTCPArgs*) linkSendRTCPArgs;
/// <summary>
/// Gets the index of the stream relative to
/// all other media streams.
/// </summary>
- (int) mediaIndex;
/// <summary>
/// Gets the negotiated stream.
/// </summary>
- (FMIceLinkStream*) negotiatedStream;
/// <summary>
/// Gets the received packets.
/// </summary>
- (NSMutableArray*) packets;
- (void) setMediaIndex:(int)value;
- (void) setNegotiatedStream:(FMIceLinkStream*)value;
- (void) setPackets:(NSMutableArray*)value;
- (void) setStream:(FMIceLinkStream*)value;
- (void) setStreamIndex:(int)value;
/// <summary>
/// Gets the stream.
/// </summary>
- (FMIceLinkStream*) stream;
/// <summary>
/// Gets the index of the stream relative to
/// other streams of the same type.
/// </summary>
- (int) streamIndex;

@end


@class FMIceLinkStream;
@class FMIceLinkRTPPacket;
@class FMIceLinkStreamFormat;

/// <summary>
/// Arguments for the link send RTP event.
/// </summary>
#pragma clang diagnostic ignored "-Wshorten-64-to-32"
#pragma clang diagnostic ignored "-Wint-to-pointer-cast"

@interface FMIceLinkLinkSendRTPArgs : FMIceLinkBaseLinkArgs 

- (id) init;
+ (FMIceLinkLinkSendRTPArgs*) linkSendRTPArgs;
/// <summary>
/// Gets the index of the stream relative to
/// all other media streams.
/// </summary>
- (int) mediaIndex;
/// <summary>
/// Gets the negotiated stream.
/// </summary>
- (FMIceLinkStream*) negotiatedStream;
/// <summary>
/// Gets the received packet.
/// </summary>
- (FMIceLinkRTPPacket*) packet;
- (void) setMediaIndex:(int)value;
- (void) setNegotiatedStream:(FMIceLinkStream*)value;
- (void) setPacket:(FMIceLinkRTPPacket*)value;
- (void) setStream:(FMIceLinkStream*)value;
- (void) setStreamFormat:(FMIceLinkStreamFormat*)value;
- (void) setStreamIndex:(int)value;
/// <summary>
/// Gets the stream.
/// </summary>
- (FMIceLinkStream*) stream;
/// <summary>
/// Gets the stream format.
/// </summary>
- (FMIceLinkStreamFormat*) streamFormat;
/// <summary>
/// Gets the index of the stream relative to
/// other streams of the same type.
/// </summary>
- (int) streamIndex;

@end


@class NSMutableArrayFMExtensions;
@class NSStringFMExtensions;

/// <summary>
/// Arguments for the link local-addresses event.
/// </summary>
#pragma clang diagnostic ignored "-Wshorten-64-to-32"
#pragma clang diagnostic ignored "-Wint-to-pointer-cast"

@interface FMIceLinkLinkLocalAddressesArgs : FMIceLinkBaseLinkArgs 

/// <summary>
/// Finds the index of local address.
/// </summary>
/// <param name="localAddress">The local address.</param>
/// <returns></returns>
- (int) findLocalAddressIndexWithLocalAddress:(NSString*)localAddress;
/// <summary>
/// Initializes a new instance of the <see cref="FMIceLinkLinkLocalAddressesArgs" /> class.
/// </summary>
/// <param name="localAddresses">The local addresses.</param>
- (id) initWithLocalAddresses:(NSMutableArray*)localAddresses;
/// <summary>
/// Initializes a new instance of the <see cref="FMIceLinkLinkLocalAddressesArgs" /> class.
/// </summary>
/// <param name="localAddresses">The local addresses.</param>
+ (FMIceLinkLinkLocalAddressesArgs*) linkLocalAddressesArgsWithLocalAddresses:(NSMutableArray*)localAddresses;
/// <summary>
/// Gets the created offer/answer.
/// </summary>
- (NSMutableArray*) localAddresses;
/// <summary>
/// Removes the local address at the specified index.
/// </summary>
/// <param name="index">The index of the local address to remove.</param>
/// <returns><c>true</c> if successful; otherwise <c>false</c>.</returns>
- (bool) removeLocalAddressWithIndex:(int)index;
/// <summary>
/// Sets the created offer/answer.
/// </summary>
- (void) setLocalAddresses:(NSMutableArray*)value;
/// <summary>
/// Swaps the local addresses at the specified indexes.
/// </summary>
/// <param name="index1">The index of the first local address.</param>
/// <param name="index2">The index of the second local address.</param>
/// <returns><c>true</c> if successful; otherwise <c>false</c>.</returns>
- (bool) swapLocalAddressesWithIndex1:(int)index1 index2:(int)index2;

@end


@class FMIceLinkSCTPMessage;
@class FMIceLinkStream;

/// <summary>
/// Arguments for the send SCTP complete event.
/// </summary>
#pragma clang diagnostic ignored "-Wshorten-64-to-32"
#pragma clang diagnostic ignored "-Wint-to-pointer-cast"

@interface FMIceLinkSendSCTPCompleteArgs : FMIceLinkBaseLinkArgs 

/// <summary>
/// Gets the original channel index.
/// </summary>
- (int) channelIndex;
- (id) init;
/// <summary>
/// Gets the original message.
/// </summary>
- (FMIceLinkSCTPMessage*) message;
+ (FMIceLinkSendSCTPCompleteArgs*) sendSCTPCompleteArgs;
- (void) setChannelIndex:(int)value;
- (void) setMessage:(FMIceLinkSCTPMessage*)value;
- (void) setStream:(FMIceLinkStream*)value;
/// <summary>
/// Gets the oritinal stream.
/// </summary>
- (FMIceLinkStream*) stream;

@end


@class FMIceLinkCandidate;
@class NSStringFMExtensions;

/// <summary>
/// Arguments for the link candidate event.
/// </summary>
#pragma clang diagnostic ignored "-Wshorten-64-to-32"
#pragma clang diagnostic ignored "-Wint-to-pointer-cast"

@interface FMIceLinkLinkCandidateArgs : FMIceLinkBaseLinkArgs 

/// <summary>
/// Gets the discovered candidate.
/// </summary>
- (FMIceLinkCandidate*) candidate;
/// <summary>
/// Deserializes an instance from JSON.
/// </summary>
/// <param name="linkCandidateArgsJson">The JSON to deserialize.</param>
/// <returns>The deserialized link candidate arguments.</returns>
+ (FMIceLinkLinkCandidateArgs*) fromJsonWithLinkCandidateArgsJson:(NSString*)linkCandidateArgsJson;
- (id) init;
+ (FMIceLinkLinkCandidateArgs*) linkCandidateArgs;
- (void) setCandidate:(FMIceLinkCandidate*)value;
/// <summary>
/// Serializes this instance to JSON.
/// </summary>
/// <returns></returns>
- (NSString*) toJson;
/// <summary>
/// Serializes an instance to JSON.
/// </summary>
/// <param name="linkCandidateArgs">The link candidate arguments to serialize.</param>
/// <returns>The serialized JSON.</returns>
+ (NSString*) toJsonWithLinkCandidateArgs:(FMIceLinkLinkCandidateArgs*)linkCandidateArgs;

@end


@class FMIceLinkStream;
@class NSMutableArrayFMExtensions;

/// <summary>
/// Arguments for the link receive-RTCP event.
/// </summary>
#pragma clang diagnostic ignored "-Wshorten-64-to-32"
#pragma clang diagnostic ignored "-Wint-to-pointer-cast"

@interface FMIceLinkLinkReceiveRTCPArgs : FMIceLinkBaseLinkArgs 

- (id) init;
+ (FMIceLinkLinkReceiveRTCPArgs*) linkReceiveRTCPArgs;
/// <summary>
/// Gets the index of the stream relative to
/// all other media streams.
/// </summary>
- (int) mediaIndex;
/// <summary>
/// Gets the negotiated stream.
/// </summary>
- (FMIceLinkStream*) negotiatedStream;
/// <summary>
/// Gets the received packets.
/// </summary>
- (NSMutableArray*) packets;
- (void) setMediaIndex:(int)value;
- (void) setNegotiatedStream:(FMIceLinkStream*)value;
- (void) setPackets:(NSMutableArray*)value;
- (void) setStream:(FMIceLinkStream*)value;
- (void) setStreamIndex:(int)value;
/// <summary>
/// Gets the stream.
/// </summary>
- (FMIceLinkStream*) stream;
/// <summary>
/// Gets the index of the stream relative to
/// other streams of the same type.
/// </summary>
- (int) streamIndex;

@end


@class FMIceLinkStream;
@class FMIceLinkRTPPacket;
@class FMIceLinkStreamFormat;

/// <summary>
/// Arguments for the link receive RTP event.
/// </summary>
#pragma clang diagnostic ignored "-Wshorten-64-to-32"
#pragma clang diagnostic ignored "-Wint-to-pointer-cast"

@interface FMIceLinkLinkReceiveRTPArgs : FMIceLinkBaseLinkArgs 

- (id) init;
+ (FMIceLinkLinkReceiveRTPArgs*) linkReceiveRTPArgs;
/// <summary>
/// Gets the index of the stream relative to
/// all other media streams.
/// </summary>
- (int) mediaIndex;
/// <summary>
/// Gets the negotiated stream.
/// </summary>
- (FMIceLinkStream*) negotiatedStream;
/// <summary>
/// Gets the received packet.
/// </summary>
- (FMIceLinkRTPPacket*) packet;
- (void) setMediaIndex:(int)value;
- (void) setNegotiatedStream:(FMIceLinkStream*)value;
- (void) setPacket:(FMIceLinkRTPPacket*)value;
- (void) setStream:(FMIceLinkStream*)value;
- (void) setStreamFormat:(FMIceLinkStreamFormat*)value;
- (void) setStreamIndex:(int)value;
/// <summary>
/// Gets the stream.
/// </summary>
- (FMIceLinkStream*) stream;
/// <summary>
/// Gets the stream format.
/// </summary>
- (FMIceLinkStreamFormat*) streamFormat;
/// <summary>
/// Gets the index of the stream relative to
/// other streams of the same type.
/// </summary>
- (int) streamIndex;

@end


@class FMIceLinkSTUNMessage;
@class NSStringFMExtensions;
@class NSMutableDataFMExtensions;
@class FMIceLinkTransportAddress;

/// <summary>
/// Details about a TURN allocate request or response.
/// </summary>
#pragma clang diagnostic ignored "-Wshorten-64-to-32"
#pragma clang diagnostic ignored "-Wint-to-pointer-cast"

@interface FMIceLinkAllocateInfo : NSObject 

+ (FMIceLinkAllocateInfo*) allocateInfoWithRequest:(FMIceLinkSTUNMessage*)request;
+ (FMIceLinkAllocateInfo*) allocateInfoWithRequest:(FMIceLinkSTUNMessage*)request response:(FMIceLinkSTUNMessage*)response;
/// <summary>
/// Gets whether an even port
/// is requested.
/// </summary>
- (bool) evenPort;
- (id) initWithRequest:(FMIceLinkSTUNMessage*)request;
- (id) initWithRequest:(FMIceLinkSTUNMessage*)request response:(FMIceLinkSTUNMessage*)response;
/// <summary>
/// Gets the time-to-expiry of the allocation
/// if the request was processed successfully.
/// </summary>
- (int) lifetime;
/// <summary>
/// Gets the nonce used when nonce-based
/// security is enabled on the server.
/// </summary>
- (NSString*) nonce;
/// <summary>
/// Gets the realm credential.
/// </summary>
- (NSString*) realm;
/// <summary>
/// Gets the reservation token if a reservation
/// was requested and the request was processed
/// successfully.
/// </summary>
- (NSMutableData*) reservationToken;
/// <summary>
/// Gets whether the next-higher
/// port should be reserved.
/// </summary>
- (bool) reserveNextHigher;
/// <summary>
/// Sets whether an even port
/// is requested.
/// </summary>
- (void) setEvenPort:(bool)value;
/// <summary>
/// Sets the nonce used when nonce-based
/// security is enabled on the server.
/// </summary>
- (void) setNonce:(NSString*)value;
/// <summary>
/// Sets the realm credential.
/// </summary>
- (void) setRealm:(NSString*)value;
/// <summary>
/// Sets whether the next-higher
/// port should be reserved.
/// </summary>
- (void) setReserveNextHigher:(bool)value;
/// <summary>
/// Sets the username credential.
/// </summary>
- (void) setUsername:(NSString*)value;
/// <summary>
/// Gets the address of the allocated socket
/// if the request was processed successfully.
/// </summary>
- (FMIceLinkTransportAddress*) socketAddress;
/// <summary>
/// Gets whether or not the
/// response indicates success.
/// </summary>
- (bool) success;
/// <summary>
/// Gets the username credential.
/// </summary>
- (NSString*) username;

@end


@class FMIceLinkSCTPMessage;
@class FMIceLinkStream;

/// <summary>
/// Arguments for the link receive SCTP event.
/// </summary>
#pragma clang diagnostic ignored "-Wshorten-64-to-32"
#pragma clang diagnostic ignored "-Wint-to-pointer-cast"

@interface FMIceLinkLinkReceiveSCTPArgs : FMIceLinkBaseLinkArgs 

/// <summary>
/// Gets the channel index.
/// </summary>
- (int) channelIndex;
- (id) init;
+ (FMIceLinkLinkReceiveSCTPArgs*) linkReceiveSCTPArgs;
/// <summary>
/// Gets the index of the stream relative to
/// all other media streams.
/// </summary>
- (int) mediaIndex;
/// <summary>
/// Gets the received message.
/// </summary>
- (FMIceLinkSCTPMessage*) message;
/// <summary>
/// Gets the negotiated stream.
/// </summary>
- (FMIceLinkStream*) negotiatedStream;
- (void) setChannelIndex:(int)value;
- (void) setMediaIndex:(int)value;
- (void) setMessage:(FMIceLinkSCTPMessage*)value;
- (void) setNegotiatedStream:(FMIceLinkStream*)value;
- (void) setStream:(FMIceLinkStream*)value;
- (void) setStreamIndex:(int)value;
/// <summary>
/// Gets the stream.
/// </summary>
- (FMIceLinkStream*) stream;
/// <summary>
/// Gets the index of the stream relative to
/// other streams of the same type.
/// </summary>
- (int) streamIndex;

@end


@class FMIceLinkSTUNMessage;
@class FMIceLinkTransportAddress;

/// <summary>
/// Details about a TURN channel-bind request or response.
/// </summary>
#pragma clang diagnostic ignored "-Wshorten-64-to-32"
#pragma clang diagnostic ignored "-Wint-to-pointer-cast"

@interface FMIceLinkChannelBindInfo : NSObject 

+ (FMIceLinkChannelBindInfo*) channelBindInfoWithRequest:(FMIceLinkSTUNMessage*)request;
+ (FMIceLinkChannelBindInfo*) channelBindInfoWithRequest:(FMIceLinkSTUNMessage*)request response:(FMIceLinkSTUNMessage*)response;
/// <summary>
/// Gets the channel number.
/// </summary>
- (int) channelNumber;
- (id) initWithRequest:(FMIceLinkSTUNMessage*)request;
- (id) initWithRequest:(FMIceLinkSTUNMessage*)request response:(FMIceLinkSTUNMessage*)response;
/// <summary>
/// Gets the peer address for which the channel is valid.
/// </summary>
- (FMIceLinkTransportAddress*) peerAddress;
/// <summary>
/// Sets the channel number.
/// </summary>
- (void) setChannelNumber:(int)value;
/// <summary>
/// Gets whether or not the
/// response indicates success.
/// </summary>
- (bool) success;

@end


@class NSStringFMExtensions;

#pragma clang diagnostic ignored "-Wshorten-64-to-32"
#pragma clang diagnostic ignored "-Wint-to-pointer-cast"

@interface FMIceLinkDTLSContentType : NSObject 

+ (int) alert;
+ (int) applicationData;
+ (int) changeCipherSpec;
+ (FMIceLinkDTLSContentType*) dtlsContentType;
+ (NSString*) getDisplayNameWithContentType:(int)contentType;
+ (int) handshake;
- (id) init;

@end


@class NSStringFMExtensions;

#pragma clang diagnostic ignored "-Wshorten-64-to-32"
#pragma clang diagnostic ignored "-Wint-to-pointer-cast"

@interface FMIceLinkDTLSHandshakeType : NSObject 

+ (int) certificate;
+ (int) certificateRequest;
+ (int) certificateVerify;
+ (int) clientHello;
+ (int) clientKeyExchange;
+ (FMIceLinkDTLSHandshakeType*) dtlsHandshakeType;
+ (int) finished;
+ (NSString*) getDisplayNameWithHandshakeType:(int)handshakeType;
+ (int) helloRequest;
+ (int) helloVerifyRequest;
- (id) init;
+ (int) serverHello;
+ (int) serverHelloDone;
+ (int) serverKeyExchange;

@end


@class NSMutableDataFMExtensions;
@class NSMutableArrayFMExtensions;
@class NSStringFMExtensions;

#pragma clang diagnostic ignored "-Wshorten-64-to-32"
#pragma clang diagnostic ignored "-Wint-to-pointer-cast"

@interface FMIceLinkDTLSMessage : NSObject 

- (int) contentType;
+ (FMIceLinkDTLSMessage*) dtlsMessage;
- (int) epoch;
- (int) handshakeFragmentLength;
- (int) handshakeFragmentOffset;
- (int) handshakeLength;
- (int) handshakeMessageSequence;
- (NSMutableData*) handshakePayload;
- (int) handshakeType;
- (id) init;
- (int) length;
+ (NSMutableArray*) parseMultipleWithData:(NSMutableData*)data;
+ (FMIceLinkDTLSMessage*) parseWithData:(NSMutableData*)data offset:(int)offset offsetPlus:(int*)offsetPlus;
- (NSMutableData*) payload;
- (int) protocolVersionMajor;
- (int) protocolVersionMinor;
- (NSMutableData*) raw;
- (long long) sequenceNumber;
- (void) setContentType:(int)value;
- (void) setEpoch:(int)value;
- (void) setHandshakeFragmentLength:(int)value;
- (void) setHandshakeFragmentOffset:(int)value;
- (void) setHandshakeLength:(int)value;
- (void) setHandshakeMessageSequence:(int)value;
- (void) setHandshakePayload:(NSMutableData*)value;
- (void) setHandshakeType:(int)value;
- (void) setLength:(int)value;
- (void) setPayload:(NSMutableData*)value;
- (void) setProtocolVersionMajor:(int)value;
- (void) setProtocolVersionMinor:(int)value;
- (void) setRaw:(NSMutableData*)value;
- (void) setSequenceNumber:(long long)value;
- (NSString*) toString;
- (NSString*) description;

@end


@class FMIceLinkICEMediaFormat;
@class FMIceLinkICEMediaStream;
@class FMIceLinkRTPPacket;

#pragma clang diagnostic ignored "-Wshorten-64-to-32"
#pragma clang diagnostic ignored "-Wint-to-pointer-cast"

@interface FMIceLinkICEAgentSendRTPArgs : FMDynamic 

+ (FMIceLinkICEAgentSendRTPArgs*) iceAgentSendRTPArgs;
- (id) init;
- (FMIceLinkICEMediaFormat*) mediaFormat;
- (int) mediaIndex;
- (FMIceLinkICEMediaStream*) mediaStream;
- (FMIceLinkRTPPacket*) packet;
- (void) setMediaFormat:(FMIceLinkICEMediaFormat*)value;
- (void) setMediaIndex:(int)value;
- (void) setMediaStream:(FMIceLinkICEMediaStream*)value;
- (void) setPacket:(FMIceLinkRTPPacket*)value;
- (void) setStreamIndex:(int)value;
- (int) streamIndex;

@end


@class FMIceLinkICEMediaStream;
@class NSMutableArrayFMExtensions;

#pragma clang diagnostic ignored "-Wshorten-64-to-32"
#pragma clang diagnostic ignored "-Wint-to-pointer-cast"

@interface FMIceLinkICEAgentSendRTCPArgs : FMDynamic 

+ (FMIceLinkICEAgentSendRTCPArgs*) iceAgentSendRTCPArgs;
- (id) init;
- (int) mediaIndex;
- (FMIceLinkICEMediaStream*) mediaStream;
- (NSMutableArray*) packets;
- (void) setMediaIndex:(int)value;
- (void) setMediaStream:(FMIceLinkICEMediaStream*)value;
- (void) setPackets:(NSMutableArray*)value;
- (void) setStreamIndex:(int)value;
- (int) streamIndex;

@end


@class NSMutableArrayFMExtensions;

#pragma clang diagnostic ignored "-Wshorten-64-to-32"
#pragma clang diagnostic ignored "-Wint-to-pointer-cast"

@interface FMIceLinkICEAgentLocalAddressesArgs : FMDynamic 

+ (FMIceLinkICEAgentLocalAddressesArgs*) iceAgentLocalAddressesArgs;
- (id) init;
- (NSMutableArray*) localAddresses;
- (void) setLocalAddresses:(NSMutableArray*)value;

@end


@class FMIceLinkICERefreshSuccessArgs;
@class FMIceLinkICERefreshFailureArgs;
@class FMIceLinkICERefreshCompleteArgs;
@class FMCallback;

#pragma clang diagnostic ignored "-Wshorten-64-to-32"
#pragma clang diagnostic ignored "-Wint-to-pointer-cast"

@interface FMIceLinkICERefreshArgs : FMDynamic 

+ (FMIceLinkICERefreshArgs*) iceRefreshArgs;
- (id) init;
- (FMCallback*) onComplete;
- (FMCallback*) onFailure;
- (FMCallback*) onSuccess;
- (void) setOnComplete:(FMCallback*)value;
- (void) setOnCompleteBlock:(void (^) (FMIceLinkICERefreshCompleteArgs*))valueBlock;
- (void) setOnFailure:(FMCallback*)value;
- (void) setOnFailureBlock:(void (^) (FMIceLinkICERefreshFailureArgs*))valueBlock;
- (void) setOnSuccess:(FMCallback*)value;
- (void) setOnSuccessBlock:(void (^) (FMIceLinkICERefreshSuccessArgs*))valueBlock;

@end



#pragma clang diagnostic ignored "-Wshorten-64-to-32"
#pragma clang diagnostic ignored "-Wint-to-pointer-cast"

@interface FMIceLinkICERefreshCompleteArgs : FMDynamic 

+ (FMIceLinkICERefreshCompleteArgs*) iceRefreshCompleteArgs;
- (id) init;

@end


@class NSExceptionFMExtensions;

#pragma clang diagnostic ignored "-Wshorten-64-to-32"
#pragma clang diagnostic ignored "-Wint-to-pointer-cast"

@interface FMIceLinkICERefreshFailureArgs : FMDynamic 

- (NSException*) exception;
+ (FMIceLinkICERefreshFailureArgs*) iceRefreshFailureArgs;
- (id) init;
- (void) setException:(NSException*)value;

@end



#pragma clang diagnostic ignored "-Wshorten-64-to-32"
#pragma clang diagnostic ignored "-Wint-to-pointer-cast"

@interface FMIceLinkICERefreshSuccessArgs : FMDynamic 

+ (FMIceLinkICERefreshSuccessArgs*) iceRefreshSuccessArgs;
- (id) init;

@end


@class FMIceLinkSCTPPacket;

#pragma clang diagnostic ignored "-Wshorten-64-to-32"
#pragma clang diagnostic ignored "-Wint-to-pointer-cast"

@interface FMIceLinkICESctpResendInitArgs : NSObject 

+ (FMIceLinkICESctpResendInitArgs*) iceSctpResendInitArgsWithPacket:(FMIceLinkSCTPPacket*)packet state:(int)state;
- (id) initWithPacket:(FMIceLinkSCTPPacket*)packet state:(int)state;
- (FMIceLinkSCTPPacket*) packet;
- (int) state;

@end


@class FMIceLinkSendSCTPSuccessArgs;
@class FMIceLinkSendSCTPFailureArgs;
@class FMIceLinkSendSCTPCompleteArgs;
@class FMIceLinkSCTPMessage;
@class FMCallback;
@class FMIceLinkStream;
@class FMIceLinkConference;
@class FMIceLinkLink;
@class NSExceptionFMExtensions;

/// <summary>
/// Arguments for the send SCTP function.
/// </summary>
#pragma clang diagnostic ignored "-Wshorten-64-to-32"
#pragma clang diagnostic ignored "-Wint-to-pointer-cast"

@interface FMIceLinkSendSCTPArgs : FMDynamic 

/// <summary>
/// Gets the channel index.
/// </summary>
- (int) channelIndex;
/// <summary>
/// Initializes a new instance of the <see cref="FMIceLinkSendSCTPArgs" /> class.
/// </summary>
/// <param name="stream">The stream.</param>
/// <param name="channelIndex">The channel index.</param>
/// <param name="message">The message.</param>
- (id) initWithStream:(FMIceLinkStream*)stream channelIndex:(int)channelIndex message:(FMIceLinkSCTPMessage*)message;
/// <summary>
/// Gets the message.
/// </summary>
- (FMIceLinkSCTPMessage*) message;
/// <summary>
/// Gets the callback to invoke after success or failure.
/// </summary>
- (FMCallback*) onComplete;
/// <summary>
/// Gets the callback to invoke if the connection fails before the message has been acknowledged.
/// </summary>
- (FMCallback*) onFailure;
/// <summary>
/// Gets the callback to invoke when delivery of the message has been acknowledged.
/// </summary>
- (FMCallback*) onSuccess;
- (void) raiseFailureWithConference:(FMIceLinkConference*)conference link:(FMIceLinkLink*)link exception:(NSException*)exception;
- (void) raiseSuccessWithConference:(FMIceLinkConference*)conference link:(FMIceLinkLink*)link;
/// <summary>
/// Initializes a new instance of the <see cref="FMIceLinkSendSCTPArgs" /> class.
/// </summary>
/// <param name="stream">The stream.</param>
/// <param name="channelIndex">The channel index.</param>
/// <param name="message">The message.</param>
+ (FMIceLinkSendSCTPArgs*) sendSCTPArgsWithStream:(FMIceLinkStream*)stream channelIndex:(int)channelIndex message:(FMIceLinkSCTPMessage*)message;
/// <summary>
/// Sets the channel index.
/// </summary>
- (void) setChannelIndex:(int)value;
/// <summary>
/// Sets the message.
/// </summary>
- (void) setMessage:(FMIceLinkSCTPMessage*)value;
/// <summary>
/// Sets the callback to invoke after success or failure.
/// </summary>
- (void) setOnComplete:(FMCallback*)value;
/// <summary>
/// Sets the callback to invoke after success or failure.
/// </summary>
- (void) setOnCompleteBlock:(void (^) (FMIceLinkSendSCTPCompleteArgs*))valueBlock;
/// <summary>
/// Sets the callback to invoke if the connection fails before the message has been acknowledged.
/// </summary>
- (void) setOnFailure:(FMCallback*)value;
/// <summary>
/// Sets the callback to invoke if the connection fails before the message has been acknowledged.
/// </summary>
- (void) setOnFailureBlock:(void (^) (FMIceLinkSendSCTPFailureArgs*))valueBlock;
/// <summary>
/// Sets the callback to invoke when delivery of the message has been acknowledged.
/// </summary>
- (void) setOnSuccess:(FMCallback*)value;
/// <summary>
/// Sets the callback to invoke when delivery of the message has been acknowledged.
/// </summary>
- (void) setOnSuccessBlock:(void (^) (FMIceLinkSendSCTPSuccessArgs*))valueBlock;
/// <summary>
/// Sets the stream.
/// </summary>
- (void) setStream:(FMIceLinkStream*)value;
/// <summary>
/// Gets the stream.
/// </summary>
- (FMIceLinkStream*) stream;

@end


@class NSExceptionFMExtensions;
@class FMIceLinkSCTPMessage;
@class FMIceLinkStream;

/// <summary>
/// Arguments for the send SCTP failure event.
/// </summary>
#pragma clang diagnostic ignored "-Wshorten-64-to-32"
#pragma clang diagnostic ignored "-Wint-to-pointer-cast"

@interface FMIceLinkSendSCTPFailureArgs : FMIceLinkBaseLinkArgs 

/// <summary>
/// Gets the original channel index.
/// </summary>
- (int) channelIndex;
/// <summary>
/// Gets the exception.
/// </summary>
- (NSException*) exception;
- (id) init;
/// <summary>
/// Gets the original message.
/// </summary>
- (FMIceLinkSCTPMessage*) message;
+ (FMIceLinkSendSCTPFailureArgs*) sendSCTPFailureArgs;
- (void) setChannelIndex:(int)value;
- (void) setException:(NSException*)value;
- (void) setMessage:(FMIceLinkSCTPMessage*)value;
- (void) setStream:(FMIceLinkStream*)value;
/// <summary>
/// Gets the oritinal stream.
/// </summary>
- (FMIceLinkStream*) stream;

@end


@class FMIceLinkSCTPMessage;
@class FMIceLinkStream;

/// <summary>
/// Arguments for the send SCTP success event.
/// </summary>
#pragma clang diagnostic ignored "-Wshorten-64-to-32"
#pragma clang diagnostic ignored "-Wint-to-pointer-cast"

@interface FMIceLinkSendSCTPSuccessArgs : FMIceLinkBaseLinkArgs 

/// <summary>
/// Gets the original channel index.
/// </summary>
- (int) channelIndex;
- (id) init;
/// <summary>
/// Gets the original message.
/// </summary>
- (FMIceLinkSCTPMessage*) message;
+ (FMIceLinkSendSCTPSuccessArgs*) sendSCTPSuccessArgs;
- (void) setChannelIndex:(int)value;
- (void) setMessage:(FMIceLinkSCTPMessage*)value;
- (void) setStream:(FMIceLinkStream*)value;
/// <summary>
/// Gets the oritinal stream.
/// </summary>
- (FMIceLinkStream*) stream;

@end



/// <summary>
/// Arguments for the stream receive RTP event.
/// </summary>
#pragma clang diagnostic ignored "-Wshorten-64-to-32"
#pragma clang diagnostic ignored "-Wint-to-pointer-cast"

@interface FMIceLinkStreamLinkReceiveSCTPArgs : FMIceLinkLinkReceiveSCTPArgs 

- (id) init;
+ (FMIceLinkStreamLinkReceiveSCTPArgs*) streamLinkReceiveSCTPArgs;

@end


@class NSExceptionFMExtensions;

/// <summary>
/// Arguments for an unhandled exception.
/// </summary>
#pragma clang diagnostic ignored "-Wshorten-64-to-32"
#pragma clang diagnostic ignored "-Wint-to-pointer-cast"

@interface FMIceLinkUnhandledExceptionArgs : NSObject 

/// <summary>
/// Gets the unhandled exception.
/// </summary>
- (NSException*) exception;
/// <summary>
/// Gets whether the exception has been
/// appropriately handled. If set to <c>true</c>,
/// then the exception will not be thrown.
/// </summary>
- (bool) handled;
- (id) init;
/// <summary>
/// Sets the unhandled exception.
/// </summary>
- (void) setException:(NSException*)value;
/// <summary>
/// Sets whether the exception has been
/// appropriately handled. If set to <c>true</c>,
/// then the exception will not be thrown.
/// </summary>
- (void) setHandled:(bool)value;
+ (FMIceLinkUnhandledExceptionArgs*) unhandledExceptionArgs;

@end


@class NSMutableArrayFMExtensions;
@class NSStringFMExtensions;
@class FMIceLinkCertificate;

/// <summary>
/// Defines common base properties for conferences.
/// </summary>
#pragma clang diagnostic ignored "-Wshorten-64-to-32"
#pragma clang diagnostic ignored "-Wint-to-pointer-cast"

@interface FMIceLinkBaseConference : FMDynamic 

+ (FMIceLinkBaseConference*) baseConference;
/// <summary>
/// Gets the mode of operation for candidate gathering.
/// </summary>
- (FMIceLinkCandidateMode) candidateMode;
/// <summary>
/// Gets a value indicating whether any of the streams are marked
/// as capable of receiving media (SendReceive or ReceiveOnly).
/// </summary>
- (bool) canReceive;
/// <summary>
/// Gets a value indicating whether any of the streams are marked
/// as capable of sending media (SendReceive or SendOnly).
/// </summary>
- (bool) canSend;
/// <summary>
/// Gets the "cname" to use for SDP messages.
/// </summary>
- (NSString*) cname;
- (void) copyFromWithBaseLink:(FMIceLinkBaseConference*)baseLink;
/// <summary>
/// Gets a value indicating how many milliseconds must elapse with no receive activity before a stream is considered dead.
/// Defaults to 15000.
/// </summary>
- (int) deadStreamTimeout;
/// <summary>
/// Gets a value indicating whether to disable automatic RTCP sender/receiver reports.
/// </summary>
- (bool) disableAutomaticReports;
/// <summary>
/// Gets the certificate to use for DTLS key exchange.
/// </summary>
- (FMIceLinkCertificate*) dtlsCertificate;
/// <summary>
/// Gets the DTLS cipher suites to use.
/// Defaults to Aes128Sha, DhRsaAes128Sha,
/// EcdhRsaAes128Sha, DheRsaAes128Sha,
/// EcdheRsaAes128Sha, EcdheEcdsaAes128Sha,
/// Aes128GcmSha256, DhRsaAes128GcmSha256,
/// EcdhRsaAes128GcmSha256, DheRsaAes128GcmSha256,
/// EcdheRsaAes128GcmSha256, and EcdheEcdsaAes128GcmSha256.
/// </summary>
- (NSMutableArray*) dtlsCipherSuites;
/// <summary>
/// Gets the protocol version to use
/// when in the DTLS client role. Defaults
/// to <see cref="FMIceLinkProtocolVersionDtls10" />.
/// </summary>
- (FMIceLinkProtocolVersion) dtlsClientVersion;
/// <summary>
/// Gets the maximum protocol version to
/// allow when in the DTLS server role. Defaults
/// to <see cref="FMIceLinkProtocolVersionDtls12" />.
/// </summary>
- (FMIceLinkProtocolVersion) dtlsServerMaxVersion;
/// <summary>
/// Gets the minimum protocol version to
/// allow when in the DTLS server role. Defaults
/// to <see cref="FMIceLinkProtocolVersionDtls10" />.
/// </summary>
- (FMIceLinkProtocolVersion) dtlsServerMinVersion;
/// <summary>
/// Gets the amount of time (in milliseconds) to wait
/// before halting gathering efforts for early candidates.
/// Only applies when <see cref="FMIceLinkBaseConference#candidateMode" /> is set to
/// Early. Defaults to 500.
/// </summary>
- (int) earlyCandidatesTimeout;
/// <summary>
/// Gets the password to use for ICE connectivity checks.
/// </summary>
- (NSString*) icePassword;
/// <summary>
/// Gets the username fragment to use for ICE connectivity checks.
/// </summary>
- (NSString*) iceUsernameFragment;
/// <summary>
/// Gets an ID to identify this instance.
/// </summary>
- (NSString*) id;
- (id) init;
/// <summary>
/// Gets a value indicating how many milliseconds must elapse between STUN keep-alive binding requests.
/// Defaults to 1000.
/// </summary>
- (int) keepAliveInterval;
+ (bool) parseAddressWithAddress:(NSString*)address host:(NSString**)host port:(int*)port;
+ (bool) parseAddress:(NSString*)address host:(NSString**)host port:(int*)port;
/// <summary>
/// Gets the private IP address of this
/// device. If set, this will bypass the local
/// network discovery and use this as the sole
/// host candidate.
/// </summary>
- (NSString*) privateIPAddress;
/// <summary>
/// Gets the private IP address of this
/// device. If set, this will bypass the local
/// network discovery and use this as the sole
/// host candidate.
/// </summary>
- (NSMutableArray*) privateIPAddresses;
/// <summary>
/// Gets the public IP address of this
/// device, if the NAT is known to be 1:1 and
/// the IP address is known in advance. This
/// should only be used in controlled server
/// environments as an alternative to using
/// an external STUN server.
/// </summary>
- (NSString*) publicIPAddress;
/// <summary>
/// Gets the public IP address of this
/// device, if the NAT is known to be 1:1 and
/// the IP address is known in advance. This
/// should only be used in controlled server
/// environments as an alternative to using
/// an external STUN server.
/// </summary>
- (NSMutableArray*) publicIPAddresses;
/// <summary>
/// Gets the long-term password used to authenticate relay requests.
/// </summary>
- (NSString*) relayPassword;
/// <summary>
/// Gets the long-term passwords used to authenticate relay requests.
/// </summary>
- (NSMutableArray*) relayPasswords;
/// <summary>
/// Gets the long-term realm used to authenticate relay requests.
/// </summary>
- (NSString*) relayRealm;
/// <summary>
/// Gets the long-term realms used to authenticate relay requests.
/// </summary>
- (NSMutableArray*) relayRealms;
/// <summary>
/// Gets the long-term username used to authenticate relay requests.
/// </summary>
- (NSString*) relayUsername;
/// <summary>
/// Gets the long-term usernames used to authenticate relay requests.
/// </summary>
- (NSMutableArray*) relayUsernames;
/// <summary>
/// Gets the maximum even-numbered port IceLink will use
/// when creating sockets for UDP RTP packet transfer.
/// </summary>
- (int) rtpPortMax;
/// <summary>
/// Gets the minimum even-numbered port IceLink will use
/// when creating sockets for UDP RTP packet transfer.
/// </summary>
- (int) rtpPortMin;
/// <summary>
/// Gets the maximum port IceLink will use
/// when creating sockets for UDP SCTP packet transfer.
/// </summary>
- (int) sctpPortMax;
/// <summary>
/// Gets the minimum port IceLink will use
/// when creating sockets for UDP SCTP packet transfer.
/// </summary>
- (int) sctpPortMin;
/// <summary>
/// Gets the IceLink server address.
/// Server addresses are formatted as {address}
/// or {address}:{port}. If the port is not
/// specified, it will default to 3478.
/// </summary>
- (NSString*) serverAddress;
/// <summary>
/// Gets the IceLink server addresses.
/// Server addresses are formatted as {address}
/// or {address}:{port}. If the port is not
/// specified, it will default to 3478.
/// </summary>
- (NSMutableArray*) serverAddresses;
/// <summary>
/// Gets the IceLink server address.
/// Overload for <see cref="FMIceLinkBaseConference#serverAddress" />.
/// Use <see cref="FMIceLinkBaseConference#serverAddress" /> instead.
/// </summary>
- (NSString*) serverIPAddress;
/// <summary>
/// Gets the IceLink server port.
/// </summary>
- (int) serverPort;
/// <summary>
/// Sets the mode of operation for candidate gathering.
/// </summary>
- (void) setCandidateMode:(FMIceLinkCandidateMode)value;
/// <summary>
/// Sets the "cname" to use for SDP messages.
/// </summary>
- (void) setCname:(NSString*)value;
/// <summary>
/// Sets a value indicating how many milliseconds must elapse with no receive activity before a stream is considered dead.
/// Defaults to 15000.
/// </summary>
- (void) setDeadStreamTimeout:(int)value;
/// <summary>
/// Sets a value indicating whether to disable automatic RTCP sender/receiver reports.
/// </summary>
- (void) setDisableAutomaticReports:(bool)value;
/// <summary>
/// Sets the certificate to use for DTLS key exchange.
/// </summary>
- (void) setDtlsCertificate:(FMIceLinkCertificate*)value;
/// <summary>
/// Sets the DTLS cipher suites to use.
/// Defaults to Aes128Sha, DhRsaAes128Sha,
/// EcdhRsaAes128Sha, DheRsaAes128Sha,
/// EcdheRsaAes128Sha, EcdheEcdsaAes128Sha,
/// Aes128GcmSha256, DhRsaAes128GcmSha256,
/// EcdhRsaAes128GcmSha256, DheRsaAes128GcmSha256,
/// EcdheRsaAes128GcmSha256, and EcdheEcdsaAes128GcmSha256.
/// </summary>
- (void) setDtlsCipherSuites:(NSMutableArray*)value;
/// <summary>
/// Sets the protocol version to use
/// when in the DTLS client role. Defaults
/// to <see cref="FMIceLinkProtocolVersionDtls10" />.
/// </summary>
- (void) setDtlsClientVersion:(FMIceLinkProtocolVersion)value;
/// <summary>
/// Sets the maximum protocol version to
/// allow when in the DTLS server role. Defaults
/// to <see cref="FMIceLinkProtocolVersionDtls12" />.
/// </summary>
- (void) setDtlsServerMaxVersion:(FMIceLinkProtocolVersion)value;
/// <summary>
/// Sets the minimum protocol version to
/// allow when in the DTLS server role. Defaults
/// to <see cref="FMIceLinkProtocolVersionDtls10" />.
/// </summary>
- (void) setDtlsServerMinVersion:(FMIceLinkProtocolVersion)value;
/// <summary>
/// Sets the amount of time (in milliseconds) to wait
/// before halting gathering efforts for early candidates.
/// Only applies when <see cref="FMIceLinkBaseConference#candidateMode" /> is set to
/// Early. Defaults to 500.
/// </summary>
- (void) setEarlyCandidatesTimeout:(int)value;
/// <summary>
/// Sets the password to use for ICE connectivity checks.
/// </summary>
- (void) setIcePassword:(NSString*)value;
/// <summary>
/// Sets the username fragment to use for ICE connectivity checks.
/// </summary>
- (void) setIceUsernameFragment:(NSString*)value;
/// <summary>
/// Sets an ID to identify this instance.
/// </summary>
- (void) setId:(NSString*)value;
/// <summary>
/// Sets a value indicating how many milliseconds must elapse between STUN keep-alive binding requests.
/// Defaults to 1000.
/// </summary>
- (void) setKeepAliveInterval:(int)value;
/// <summary>
/// Sets the private IP address of this
/// device. If set, this will bypass the local
/// network discovery and use this as the sole
/// host candidate.
/// </summary>
- (void) setPrivateIPAddress:(NSString*)value;
/// <summary>
/// Sets the private IP address of this
/// device. If set, this will bypass the local
/// network discovery and use this as the sole
/// host candidate.
/// </summary>
- (void) setPrivateIPAddresses:(NSMutableArray*)value;
/// <summary>
/// Sets the public IP address of this
/// device, if the NAT is known to be 1:1 and
/// the IP address is known in advance. This
/// should only be used in controlled server
/// environments as an alternative to using
/// an external STUN server.
/// </summary>
- (void) setPublicIPAddress:(NSString*)value;
/// <summary>
/// Sets the public IP address of this
/// device, if the NAT is known to be 1:1 and
/// the IP address is known in advance. This
/// should only be used in controlled server
/// environments as an alternative to using
/// an external STUN server.
/// </summary>
- (void) setPublicIPAddresses:(NSMutableArray*)value;
/// <summary>
/// Sets the long-term password used to authenticate relay requests.
/// </summary>
- (void) setRelayPassword:(NSString*)value;
/// <summary>
/// Sets the long-term passwords used to authenticate relay requests.
/// </summary>
- (void) setRelayPasswords:(NSMutableArray*)value;
/// <summary>
/// Sets the long-term realm used to authenticate relay requests.
/// </summary>
- (void) setRelayRealm:(NSString*)value;
/// <summary>
/// Sets the long-term realms used to authenticate relay requests.
/// </summary>
- (void) setRelayRealms:(NSMutableArray*)value;
/// <summary>
/// Sets the long-term username used to authenticate relay requests.
/// </summary>
- (void) setRelayUsername:(NSString*)value;
/// <summary>
/// Sets the long-term usernames used to authenticate relay requests.
/// </summary>
- (void) setRelayUsernames:(NSMutableArray*)value;
/// <summary>
/// Sets the maximum even-numbered port IceLink will use
/// when creating sockets for UDP RTP packet transfer.
/// </summary>
- (void) setRtpPortMax:(int)value;
/// <summary>
/// Sets the minimum even-numbered port IceLink will use
/// when creating sockets for UDP RTP packet transfer.
/// </summary>
- (void) setRtpPortMin:(int)value;
/// <summary>
/// Sets the maximum port IceLink will use
/// when creating sockets for UDP SCTP packet transfer.
/// </summary>
- (void) setSctpPortMax:(int)value;
/// <summary>
/// Sets the minimum port IceLink will use
/// when creating sockets for UDP SCTP packet transfer.
/// </summary>
- (void) setSctpPortMin:(int)value;
/// <summary>
/// Sets the IceLink server address.
/// Server addresses are formatted as {address}
/// or {address}:{port}. If the port is not
/// specified, it will default to 3478.
/// </summary>
- (void) setServerAddress:(NSString*)value;
/// <summary>
/// Sets the IceLink server addresses.
/// Server addresses are formatted as {address}
/// or {address}:{port}. If the port is not
/// specified, it will default to 3478.
/// </summary>
- (void) setServerAddresses:(NSMutableArray*)value;
/// <summary>
/// Sets the IceLink server address.
/// Overload for <see cref="FMIceLinkBaseConference#serverAddress" />.
/// Use <see cref="FMIceLinkBaseConference#serverAddress" /> instead.
/// </summary>
- (void) setServerIPAddress:(NSString*)value;
/// <summary>
/// Sets the IceLink server port.
/// </summary>
- (void) setServerPort:(int)value;
/// <summary>
/// Sets the IceLink streams.
/// </summary>
- (void) setStreams:(NSMutableArray*)value;
/// <summary>
/// Sets a value that indicates whether private (local/host) candidates should be suppressed.
/// </summary>
- (void) setSuppressPrivateCandidates:(bool)value;
/// <summary>
/// Sets a value that indicates whether public (NAT/reflexive) candidates should be suppressed.
/// </summary>
- (void) setSuppressPublicCandidates:(bool)value;
/// <summary>
/// Sets a value that indicates whether relay candidates should be suppressed.
/// </summary>
- (void) setSuppressRelayCandidates:(bool)value;
/// <summary>
/// Sets the virtual adapters to use
/// instead of the local device adapters.
/// </summary>
- (void) setVirtualAdapters:(NSMutableArray*)value;
/// <summary>
/// Gets the IceLink streams.
/// </summary>
- (NSMutableArray*) streams;
/// <summary>
/// Gets a value that indicates whether private (local/host) candidates should be suppressed.
/// </summary>
- (bool) suppressPrivateCandidates;
/// <summary>
/// Gets a value that indicates whether public (NAT/reflexive) candidates should be suppressed.
/// </summary>
- (bool) suppressPublicCandidates;
/// <summary>
/// Gets a value that indicates whether relay candidates should be suppressed.
/// </summary>
- (bool) suppressRelayCandidates;
/// <summary>
/// Gets the virtual adapters to use
/// instead of the local device adapters.
/// </summary>
- (NSMutableArray*) virtualAdapters;

@end


@class FMIceLinkUnhandledExceptionArgs;
@class FMIceLinkLinkInitArgs;
@class FMIceLinkLinkUpArgs;
@class FMIceLinkLinkOfferAnswerArgs;
@class FMIceLinkLinkCandidateArgs;
@class FMIceLinkLinkDownArgs;
@class FMIceLinkLinkReceiveRTPArgs;
@class FMIceLinkLinkReceiveSCTPArgs;
@class FMIceLinkLinkReceiveRTCPArgs;
@class FMIceLinkLinkSendRTPArgs;
@class FMIceLinkLinkSendRTCPArgs;
@class FMIceLinkLinkLocalAddressesArgs;
@class FMIceLinkLink;
@class FMIceLinkOfferAnswer;
@class NSExceptionFMExtensions;
@class NSMutableArrayFMExtensions;
@class NSStringFMExtensions;
@class FMIceLinkAcceptArgs;
@class FMIceLinkCloseArgs;
@class FMIceLinkConference;
@class FMIceLinkCreateArgs;
@class FMCallback;
@class FMIceLinkCandidate;
@class FMIceLinkStream;
@class FMIceLinkRTPPacket;
@class FMIceLinkStreamFormat;
@class FMIceLinkSCTPMessage;
@class FMIceLinkRTCPPacket;
@class FMIceLinkSendSCTPArgs;

/// <summary>
/// Defines common base properties for links.
/// </summary>
#pragma clang diagnostic ignored "-Wshorten-64-to-32"
#pragma clang diagnostic ignored "-Wint-to-pointer-cast"

@interface FMIceLinkBaseLink : FMIceLinkBaseConference 

- (void) acceptInternalWithAcceptArgs:(FMIceLinkAcceptArgs*)acceptArgs success:(FMCallback*)success failure:(FMCallback*)failure;
- (void) acceptInternalWithAcceptArgs:(FMIceLinkAcceptArgs*)acceptArgs successBlock:(void (^) ())successBlock failureBlock:(void (^) (NSException*))failureBlock;
/// <summary>
/// Accepts an offer or answer.
/// </summary>
/// <param name="acceptArgs">The arguments.</param>
- (void) acceptWithAcceptArgs:(FMIceLinkAcceptArgs*)acceptArgs;
/// <summary>
/// Accepts an offer or answer.
/// </summary>
/// <param name="acceptArgs">The arguments.</param>
- (void) acceptWithArgs:(FMIceLinkAcceptArgs*)acceptArgs;
/// <summary>
/// Adds a handler that is raised when a local candidate is created.
/// The candidate should be sent via signalling to the remote peer.
/// </summary>
- (FMCallback*) addOnCandidateWithValue:(FMCallback*)value;
/// <summary>
/// Adds a handler that is raised when a local candidate is created.
/// The candidate should be sent via signalling to the remote peer.
/// </summary>
- (FMCallback*) addOnCandidate:(FMCallback*)value;
/// <summary>
/// Adds a handler that is raised when a local candidate is created.
/// The candidate should be sent via signalling to the remote peer.
/// </summary>
- (FMCallback*) addOnCandidateWithValueBlock:(void (^) (FMIceLinkLinkCandidateArgs*))valueBlock;
/// <summary>
/// Adds a handler that is raised when a local candidate is created.
/// The candidate should be sent via signalling to the remote peer.
/// </summary>
- (FMCallback*) addOnCandidateBlock:(void (^) (FMIceLinkLinkCandidateArgs*))valueBlock;
/// <summary>
/// Adds a handler that is raised when a link is down.
/// </summary>
- (FMCallback*) addOnDownWithValue:(FMCallback*)value;
/// <summary>
/// Adds a handler that is raised when a link is down.
/// </summary>
- (FMCallback*) addOnDown:(FMCallback*)value;
/// <summary>
/// Adds a handler that is raised when a link is down.
/// </summary>
- (FMCallback*) addOnDownWithValueBlock:(void (^) (FMIceLinkLinkDownArgs*))valueBlock;
/// <summary>
/// Adds a handler that is raised when a link is down.
/// </summary>
- (FMCallback*) addOnDownBlock:(void (^) (FMIceLinkLinkDownArgs*))valueBlock;
/// <summary>
/// Adds a handler that is raised when a link is initializing.
/// </summary>
- (FMCallback*) addOnInitWithValue:(FMCallback*)value;
/// <summary>
/// Adds a handler that is raised when a link is initializing.
/// </summary>
- (FMCallback*) addOnInit:(FMCallback*)value;
/// <summary>
/// Adds a handler that is raised when a link is initializing.
/// </summary>
- (FMCallback*) addOnInitWithValueBlock:(void (^) (FMIceLinkLinkInitArgs*))valueBlock;
/// <summary>
/// Adds a handler that is raised when a link is initializing.
/// </summary>
- (FMCallback*) addOnInitBlock:(void (^) (FMIceLinkLinkInitArgs*))valueBlock;
/// <summary>
/// Adds a handler that is raised when local IP addresses are discovered.
/// </summary>
- (FMCallback*) addOnLocalAddressesWithValue:(FMCallback*)value;
/// <summary>
/// Adds a handler that is raised when local IP addresses are discovered.
/// </summary>
- (FMCallback*) addOnLocalAddresses:(FMCallback*)value;
/// <summary>
/// Adds a handler that is raised when local IP addresses are discovered.
/// </summary>
- (FMCallback*) addOnLocalAddressesWithValueBlock:(void (^) (FMIceLinkLinkLocalAddressesArgs*))valueBlock;
/// <summary>
/// Adds a handler that is raised when local IP addresses are discovered.
/// </summary>
- (FMCallback*) addOnLocalAddressesBlock:(void (^) (FMIceLinkLinkLocalAddressesArgs*))valueBlock;
/// <summary>
/// Adds a handler that is raised when a local offer or answer is created.
/// The offer/answer should be sent via signalling to the remote peer.
/// </summary>
- (FMCallback*) addOnOfferAnswerWithValue:(FMCallback*)value;
/// <summary>
/// Adds a handler that is raised when a local offer or answer is created.
/// The offer/answer should be sent via signalling to the remote peer.
/// </summary>
- (FMCallback*) addOnOfferAnswer:(FMCallback*)value;
/// <summary>
/// Adds a handler that is raised when a local offer or answer is created.
/// The offer/answer should be sent via signalling to the remote peer.
/// </summary>
- (FMCallback*) addOnOfferAnswerWithValueBlock:(void (^) (FMIceLinkLinkOfferAnswerArgs*))valueBlock;
/// <summary>
/// Adds a handler that is raised when a local offer or answer is created.
/// The offer/answer should be sent via signalling to the remote peer.
/// </summary>
- (FMCallback*) addOnOfferAnswerBlock:(void (^) (FMIceLinkLinkOfferAnswerArgs*))valueBlock;
/// <summary>
/// Adds a handler that is raised when RTCP packets are received.
/// </summary>
- (FMCallback*) addOnReceiveRTCPWithValue:(FMCallback*)value;
/// <summary>
/// Adds a handler that is raised when RTCP packets are received.
/// </summary>
- (FMCallback*) addOnReceiveRTCP:(FMCallback*)value;
/// <summary>
/// Adds a handler that is raised when RTCP packets are received.
/// </summary>
- (FMCallback*) addOnReceiveRTCPWithValueBlock:(void (^) (FMIceLinkLinkReceiveRTCPArgs*))valueBlock;
/// <summary>
/// Adds a handler that is raised when RTCP packets are received.
/// </summary>
- (FMCallback*) addOnReceiveRTCPBlock:(void (^) (FMIceLinkLinkReceiveRTCPArgs*))valueBlock;
/// <summary>
/// Adds a handler that is raised when an RTP packet is received.
/// </summary>
- (FMCallback*) addOnReceiveRTPWithValue:(FMCallback*)value;
/// <summary>
/// Adds a handler that is raised when an RTP packet is received.
/// </summary>
- (FMCallback*) addOnReceiveRTP:(FMCallback*)value;
/// <summary>
/// Adds a handler that is raised when an RTP packet is received.
/// </summary>
- (FMCallback*) addOnReceiveRTPWithValueBlock:(void (^) (FMIceLinkLinkReceiveRTPArgs*))valueBlock;
/// <summary>
/// Adds a handler that is raised when an RTP packet is received.
/// </summary>
- (FMCallback*) addOnReceiveRTPBlock:(void (^) (FMIceLinkLinkReceiveRTPArgs*))valueBlock;
/// <summary>
/// Adds a handler that is raised when an SCTP packet is received.
/// </summary>
- (FMCallback*) addOnReceiveSCTPWithValue:(FMCallback*)value;
/// <summary>
/// Adds a handler that is raised when an SCTP packet is received.
/// </summary>
- (FMCallback*) addOnReceiveSCTP:(FMCallback*)value;
/// <summary>
/// Adds a handler that is raised when an SCTP packet is received.
/// </summary>
- (FMCallback*) addOnReceiveSCTPWithValueBlock:(void (^) (FMIceLinkLinkReceiveSCTPArgs*))valueBlock;
/// <summary>
/// Adds a handler that is raised when an SCTP packet is received.
/// </summary>
- (FMCallback*) addOnReceiveSCTPBlock:(void (^) (FMIceLinkLinkReceiveSCTPArgs*))valueBlock;
/// <summary>
/// Adds a handler that is raised when a remote candidate is received.
/// </summary>
- (FMCallback*) addOnRemoteCandidateWithValue:(FMCallback*)value;
/// <summary>
/// Adds a handler that is raised when a remote candidate is received.
/// </summary>
- (FMCallback*) addOnRemoteCandidate:(FMCallback*)value;
/// <summary>
/// Adds a handler that is raised when a remote candidate is received.
/// </summary>
- (FMCallback*) addOnRemoteCandidateWithValueBlock:(void (^) (FMIceLinkLinkCandidateArgs*))valueBlock;
/// <summary>
/// Adds a handler that is raised when a remote candidate is received.
/// </summary>
- (FMCallback*) addOnRemoteCandidateBlock:(void (^) (FMIceLinkLinkCandidateArgs*))valueBlock;
/// <summary>
/// Adds a handler that is raised when a remote offer or answer is received.
/// </summary>
- (FMCallback*) addOnRemoteOfferAnswerWithValue:(FMCallback*)value;
/// <summary>
/// Adds a handler that is raised when a remote offer or answer is received.
/// </summary>
- (FMCallback*) addOnRemoteOfferAnswer:(FMCallback*)value;
/// <summary>
/// Adds a handler that is raised when a remote offer or answer is received.
/// </summary>
- (FMCallback*) addOnRemoteOfferAnswerWithValueBlock:(void (^) (FMIceLinkLinkOfferAnswerArgs*))valueBlock;
/// <summary>
/// Adds a handler that is raised when a remote offer or answer is received.
/// </summary>
- (FMCallback*) addOnRemoteOfferAnswerBlock:(void (^) (FMIceLinkLinkOfferAnswerArgs*))valueBlock;
/// <summary>
/// Adds a handler that is raised when RTCP packets are sent.
/// </summary>
- (FMCallback*) addOnSendRTCPWithValue:(FMCallback*)value;
/// <summary>
/// Adds a handler that is raised when RTCP packets are sent.
/// </summary>
- (FMCallback*) addOnSendRTCP:(FMCallback*)value;
/// <summary>
/// Adds a handler that is raised when RTCP packets are sent.
/// </summary>
- (FMCallback*) addOnSendRTCPWithValueBlock:(void (^) (FMIceLinkLinkSendRTCPArgs*))valueBlock;
/// <summary>
/// Adds a handler that is raised when RTCP packets are sent.
/// </summary>
- (FMCallback*) addOnSendRTCPBlock:(void (^) (FMIceLinkLinkSendRTCPArgs*))valueBlock;
/// <summary>
/// Adds a handler that is raised when an RTP packet is sent.
/// </summary>
- (FMCallback*) addOnSendRTPWithValue:(FMCallback*)value;
/// <summary>
/// Adds a handler that is raised when an RTP packet is sent.
/// </summary>
- (FMCallback*) addOnSendRTP:(FMCallback*)value;
/// <summary>
/// Adds a handler that is raised when an RTP packet is sent.
/// </summary>
- (FMCallback*) addOnSendRTPWithValueBlock:(void (^) (FMIceLinkLinkSendRTPArgs*))valueBlock;
/// <summary>
/// Adds a handler that is raised when an RTP packet is sent.
/// </summary>
- (FMCallback*) addOnSendRTPBlock:(void (^) (FMIceLinkLinkSendRTPArgs*))valueBlock;
/// <summary>
/// Adds a handler that is raised when an exception is thrown in user code and not handled,
/// typically in a callback or event handler.
/// </summary>
- (FMCallback*) addOnUnhandledExceptionWithValue:(FMCallback*)value;
/// <summary>
/// Adds a handler that is raised when an exception is thrown in user code and not handled,
/// typically in a callback or event handler.
/// </summary>
- (FMCallback*) addOnUnhandledException:(FMCallback*)value;
/// <summary>
/// Adds a handler that is raised when an exception is thrown in user code and not handled,
/// typically in a callback or event handler.
/// </summary>
- (FMCallback*) addOnUnhandledExceptionWithValueBlock:(void (^) (FMIceLinkUnhandledExceptionArgs*))valueBlock;
/// <summary>
/// Adds a handler that is raised when an exception is thrown in user code and not handled,
/// typically in a callback or event handler.
/// </summary>
- (FMCallback*) addOnUnhandledExceptionBlock:(void (^) (FMIceLinkUnhandledExceptionArgs*))valueBlock;
/// <summary>
/// Adds a handler that is raised when a link is up.
/// </summary>
- (FMCallback*) addOnUpWithValue:(FMCallback*)value;
/// <summary>
/// Adds a handler that is raised when a link is up.
/// </summary>
- (FMCallback*) addOnUp:(FMCallback*)value;
/// <summary>
/// Adds a handler that is raised when a link is up.
/// </summary>
- (FMCallback*) addOnUpWithValueBlock:(void (^) (FMIceLinkLinkUpArgs*))valueBlock;
/// <summary>
/// Adds a handler that is raised when a link is up.
/// </summary>
- (FMCallback*) addOnUpBlock:(void (^) (FMIceLinkLinkUpArgs*))valueBlock;
- (void) addRemoteCandidateInternalWithCandidate:(FMIceLinkCandidate*)candidate;
/// <summary>
/// Adds a peer candidate for consideration in path discovery.
/// </summary>
/// <param name="candidate">The peer candidate.</param>
- (void) addRemoteCandidateWithCandidate:(FMIceLinkCandidate*)candidate;
/// <summary>
/// Adds a peer candidate for consideration in path discovery.
/// </summary>
/// <param name="candidate">The peer candidate.</param>
- (void) addRemoteCandidate:(FMIceLinkCandidate*)candidate;
/// <summary>
/// Gets the active and inactive local candidates.
/// </summary>
- (NSMutableArray*) allLocalCandidates;
/// <summary>
/// Gets the active and inactive local candidate types.
/// </summary>
- (NSMutableArray*) allLocalCandidateTypes;
/// <summary>
/// Gets the active and inactive remote candidates.
/// </summary>
- (NSMutableArray*) allRemoteCandidates;
/// <summary>
/// Gets the active and inactive remote candidate types.
/// </summary>
- (NSMutableArray*) allRemoteCandidateTypes;
+ (FMIceLinkBaseLink*) baseLink;
/// <summary>
/// Closes the link.
/// </summary>
- (void) close;
- (void) closeInternalWithCloseArgs:(FMIceLinkCloseArgs*)closeArgs complete:(FMCallback*)complete;
- (void) closeInternalWithCloseArgs:(FMIceLinkCloseArgs*)closeArgs completeBlock:(void (^) (NSException*))completeBlock;
/// <summary>
/// Closes the link.
/// </summary>
/// <param name="closeArgs">The close arguments.</param>
- (void) closeWithCloseArgs:(FMIceLinkCloseArgs*)closeArgs;
/// <summary>
/// Closes the link.
/// </summary>
/// <param name="closeArgs">The close arguments.</param>
- (void) closeWithArgs:(FMIceLinkCloseArgs*)closeArgs;
/// <summary>
/// Gets the conference that owns this link.
/// </summary>
- (FMIceLinkConference*) conference;
/// <summary>
/// Gets whether this end of the link is controlling.
/// </summary>
- (bool) controlling;
/// <summary>
/// Creates an answer.
/// </summary>
/// <param name="createArgs">The arguments.</param>
- (void) createAnswerWithCreateArgs:(FMIceLinkCreateArgs*)createArgs;
- (void) createInternalWithCreateArgs:(FMIceLinkCreateArgs*)createArgs success:(FMCallback*)success failure:(FMCallback*)failure;
- (void) createInternalWithCreateArgs:(FMIceLinkCreateArgs*)createArgs successBlock:(void (^) (FMIceLinkOfferAnswer*))successBlock failureBlock:(void (^) (NSException*))failureBlock;
/// <summary>
/// Creates an offer.
/// </summary>
/// <param name="createArgs">The arguments.</param>
- (void) createOfferWithCreateArgs:(FMIceLinkCreateArgs*)createArgs;
/// <summary>
/// Gets whether an offer/answer has been accepted.
/// </summary>
- (bool) hasAccepted;
/// <summary>
/// Gets whether the link has closed.
/// </summary>
- (bool) hasClosed;
/// <summary>
/// Gets whether an offer/answer has been created.
/// </summary>
- (bool) hasCreated;
/// <summary>
/// Gets whether the link has opened.
/// </summary>
- (bool) hasOpened;
- (id) init;
- (void) initializeInternalWithComplete:(FMCallback*)complete;
- (void) initializeInternalWithCompleteBlock:(void (^) (FMIceLinkLink*))completeBlock;
/// <summary>
/// Initializes the link.
/// </summary>
/// <param name="serverAddresses">The IceLink server addresses.</param>
/// <param name="relayUsernames">The relay usernames.</param>
/// <param name="relayPasswords">The relay passwords.</param>
/// <param name="relayRealms">The relay realms.</param>
/// <param name="streams">The streams to establish.</param>
/// <param name="callback">The callback to invoke when the link is initialized.</param>
- (void) initializeWithServerAddresses:(NSMutableArray*)serverAddresses relayUsernames:(NSMutableArray*)relayUsernames relayPasswords:(NSMutableArray*)relayPasswords relayRealms:(NSMutableArray*)relayRealms streams:(NSMutableArray*)streams callback:(FMCallback*)callback;
/// <summary>
/// Initializes the link.
/// </summary>
/// <param name="serverAddresses">The IceLink server addresses.</param>
/// <param name="relayUsernames">The relay usernames.</param>
/// <param name="relayPasswords">The relay passwords.</param>
/// <param name="relayRealms">The relay realms.</param>
/// <param name="streams">The streams to establish.</param>
/// <param name="callback">The callback to invoke when the link is initialized.</param>
- (void) initializeWithServerAddresses:(NSMutableArray*)serverAddresses relayUsernames:(NSMutableArray*)relayUsernames relayPasswords:(NSMutableArray*)relayPasswords relayRealms:(NSMutableArray*)relayRealms streams:(NSMutableArray*)streams callbackBlock:(void (^) (FMIceLinkLink*))callbackBlock;
/// <summary>
/// Gets whether an offer/answer is being accepted.
/// </summary>
- (bool) isAccepting;
/// <summary>
/// Gets whether the link is closing.
/// </summary>
- (bool) isClosing;
/// <summary>
/// Gets whether an offer/answer is being created.
/// </summary>
- (bool) isCreating;
/// <summary>
/// Gets whether the link is opened.
/// </summary>
- (bool) isOpened;
/// <summary>
/// Gets whether the link is opening.
/// </summary>
- (bool) isOpening;
/// <summary>
/// Gets the local offer/answer.
/// </summary>
- (FMIceLinkOfferAnswer*) localOfferAnswer;
/// <summary>
/// Gets the negotiated streams when the link is up.
/// </summary>
- (NSMutableArray*) negotiatedStreams;
/// <summary>
/// Gets the peer ID.
/// </summary>
- (NSString*) peerId;
/// <summary>
/// Gets custom state data to associate with the peer.
/// </summary>
- (NSObject*) peerState;
- (void) raiseCandidateWithCandidate:(FMIceLinkCandidate*)candidate;
- (void) raiseCandidate:(FMIceLinkCandidate*)candidate;
- (bool) raiseDownWithException:(NSException*)exception reason:(NSString*)reason timedOut:(bool)timedOut switchingRoles:(bool)switchingRoles deadStreamDetected:(bool)deadStreamDetected relayFailureDetected:(bool)relayFailureDetected newOfferReceived:(bool)newOfferReceived;
- (bool) raiseInitWithInitiator:(bool)initiator;
- (NSMutableArray*) raiseLocalAddressesWithLocalAddresses:(NSMutableArray*)localAddresses;
- (NSMutableArray*) raiseLocalAddresses:(NSMutableArray*)localAddresses;
- (void) raiseOfferAnswerWithOfferAnswer:(FMIceLinkOfferAnswer*)offerAnswer;
- (void) raiseOfferAnswer:(FMIceLinkOfferAnswer*)offerAnswer;
- (void) raiseReceiveRTCPWithPackets:(NSMutableArray*)packets stream:(FMIceLinkStream*)stream streamIndex:(int)streamIndex mediaIndex:(int)mediaIndex negotiatedStream:(FMIceLinkStream*)negotiatedStream;
- (void) raiseReceiveRTPWithPacket:(FMIceLinkRTPPacket*)packet stream:(FMIceLinkStream*)stream streamIndex:(int)streamIndex mediaIndex:(int)mediaIndex negotiatedStream:(FMIceLinkStream*)negotiatedStream streamFormat:(FMIceLinkStreamFormat*)streamFormat;
- (void) raiseReceiveSCTPWithMessage:(FMIceLinkSCTPMessage*)message channelIndex:(int)channelIndex stream:(FMIceLinkStream*)stream streamIndex:(int)streamIndex mediaIndex:(int)mediaIndex negotiatedStream:(FMIceLinkStream*)negotiatedStream;
- (void) raiseSendRTCPWithPackets:(NSMutableArray*)packets stream:(FMIceLinkStream*)stream streamIndex:(int)streamIndex mediaIndex:(int)mediaIndex negotiatedStream:(FMIceLinkStream*)negotiatedStream;
- (void) raiseSendRTPWithPacket:(FMIceLinkRTPPacket*)packet stream:(FMIceLinkStream*)stream mediaIndex:(int)mediaIndex negotiatedStream:(FMIceLinkStream*)negotiatedStream streamFormat:(FMIceLinkStreamFormat*)streamFormat;
- (bool) raiseUnhandledExceptionWithException:(NSException*)exception;
- (bool) raiseUnhandledException:(NSException*)exception;
- (bool) raiseUp;
/// <summary>
/// Gets whether the peer has been reached.
/// </summary>
- (bool) reachedPeer;
/// <summary>
/// Gets whether the server has been reached.
/// </summary>
- (bool) reachedServer;
/// <summary>
/// Gets the remote offer/answer.
/// </summary>
- (FMIceLinkOfferAnswer*) remoteOfferAnswer;
/// <summary>
/// Removes a handler that is raised when a local candidate is created.
/// The candidate should be sent via signalling to the remote peer.
/// </summary>
- (void) removeOnCandidateWithValue:(FMCallback*)value;
/// <summary>
/// Removes a handler that is raised when a local candidate is created.
/// The candidate should be sent via signalling to the remote peer.
/// </summary>
- (void) removeOnCandidate:(FMCallback*)value;
/// <summary>
/// Removes a handler that is raised when a link is down.
/// </summary>
- (void) removeOnDownWithValue:(FMCallback*)value;
/// <summary>
/// Removes a handler that is raised when a link is down.
/// </summary>
- (void) removeOnDown:(FMCallback*)value;
/// <summary>
/// Removes a handler that is raised when a link is initializing.
/// </summary>
- (void) removeOnInitWithValue:(FMCallback*)value;
/// <summary>
/// Removes a handler that is raised when a link is initializing.
/// </summary>
- (void) removeOnInit:(FMCallback*)value;
/// <summary>
/// Removes a handler that is raised when local IP addresses are discovered.
/// </summary>
- (void) removeOnLocalAddressesWithValue:(FMCallback*)value;
/// <summary>
/// Removes a handler that is raised when local IP addresses are discovered.
/// </summary>
- (void) removeOnLocalAddresses:(FMCallback*)value;
/// <summary>
/// Removes a handler that is raised when a local offer or answer is created.
/// The offer/answer should be sent via signalling to the remote peer.
/// </summary>
- (void) removeOnOfferAnswerWithValue:(FMCallback*)value;
/// <summary>
/// Removes a handler that is raised when a local offer or answer is created.
/// The offer/answer should be sent via signalling to the remote peer.
/// </summary>
- (void) removeOnOfferAnswer:(FMCallback*)value;
/// <summary>
/// Removes a handler that is raised when RTCP packets are received.
/// </summary>
- (void) removeOnReceiveRTCPWithValue:(FMCallback*)value;
/// <summary>
/// Removes a handler that is raised when RTCP packets are received.
/// </summary>
- (void) removeOnReceiveRTCP:(FMCallback*)value;
/// <summary>
/// Removes a handler that is raised when an RTP packet is received.
/// </summary>
- (void) removeOnReceiveRTPWithValue:(FMCallback*)value;
/// <summary>
/// Removes a handler that is raised when an RTP packet is received.
/// </summary>
- (void) removeOnReceiveRTP:(FMCallback*)value;
/// <summary>
/// Removes a handler that is raised when an SCTP packet is received.
/// </summary>
- (void) removeOnReceiveSCTPWithValue:(FMCallback*)value;
/// <summary>
/// Removes a handler that is raised when an SCTP packet is received.
/// </summary>
- (void) removeOnReceiveSCTP:(FMCallback*)value;
/// <summary>
/// Removes a handler that is raised when a remote candidate is received.
/// </summary>
- (void) removeOnRemoteCandidateWithValue:(FMCallback*)value;
/// <summary>
/// Removes a handler that is raised when a remote candidate is received.
/// </summary>
- (void) removeOnRemoteCandidate:(FMCallback*)value;
/// <summary>
/// Removes a handler that is raised when a remote offer or answer is received.
/// </summary>
- (void) removeOnRemoteOfferAnswerWithValue:(FMCallback*)value;
/// <summary>
/// Removes a handler that is raised when a remote offer or answer is received.
/// </summary>
- (void) removeOnRemoteOfferAnswer:(FMCallback*)value;
/// <summary>
/// Removes a handler that is raised when RTCP packets are sent.
/// </summary>
- (void) removeOnSendRTCPWithValue:(FMCallback*)value;
/// <summary>
/// Removes a handler that is raised when RTCP packets are sent.
/// </summary>
- (void) removeOnSendRTCP:(FMCallback*)value;
/// <summary>
/// Removes a handler that is raised when an RTP packet is sent.
/// </summary>
- (void) removeOnSendRTPWithValue:(FMCallback*)value;
/// <summary>
/// Removes a handler that is raised when an RTP packet is sent.
/// </summary>
- (void) removeOnSendRTP:(FMCallback*)value;
/// <summary>
/// Removes a handler that is raised when an exception is thrown in user code and not handled,
/// typically in a callback or event handler.
/// </summary>
- (void) removeOnUnhandledExceptionWithValue:(FMCallback*)value;
/// <summary>
/// Removes a handler that is raised when an exception is thrown in user code and not handled,
/// typically in a callback or event handler.
/// </summary>
- (void) removeOnUnhandledException:(FMCallback*)value;
/// <summary>
/// Removes a handler that is raised when a link is up.
/// </summary>
- (void) removeOnUpWithValue:(FMCallback*)value;
/// <summary>
/// Removes a handler that is raised when a link is up.
/// </summary>
- (void) removeOnUp:(FMCallback*)value;
- (int) sendRTCPInternalWithPackets:(NSMutableArray*)packets mediaIndex:(int)mediaIndex;
/// <summary>
/// Sends an RTCP packet to the peer.
/// </summary>
/// <param name="stream">The stream.</param>
/// <param name="packet">The RTCP packet to send.</param>
/// <returns>The number of bytes sent, or -1 if the send operation failed.</returns>
- (int) sendRTCPWithStream:(FMIceLinkStream*)stream packet:(FMIceLinkRTCPPacket*)packet;
/// <summary>
/// Sends RTCP packets to the peer.
/// </summary>
/// <param name="stream">The stream.</param>
/// <param name="packets">The RTCP packets to send.</param>
/// <returns>The number of bytes sent, or -1 if the send operation failed.</returns>
- (int) sendRTCPWithStream:(FMIceLinkStream*)stream packets:(NSMutableArray*)packets;
- (int) sendRTPInternalWithPacket:(FMIceLinkRTPPacket*)packet payloadType:(int)payloadType mediaIndex:(int)mediaIndex;
/// <summary>
/// Sends an RTP packet to the peer.
/// </summary>
/// <param name="stream">The stream.</param>
/// <param name="format">The stream format.</param>
/// <param name="packet">The RTP packet to send.</param>
/// <returns>The number of bytes sent, or -1 if the send operation failed.</returns>
- (int) sendRTPWithStream:(FMIceLinkStream*)stream format:(FMIceLinkStreamFormat*)format packet:(FMIceLinkRTPPacket*)packet;
- (void) sendSCTPInternalWithSendArgs:(FMIceLinkSendSCTPArgs*)sendArgs mediaIndex:(int)mediaIndex;
/// <summary>
/// Sends an SCTP packet to the peer.
/// </summary>
/// <param name="sendArgs">The send arguments.</param>
- (void) sendSCTPWithSendArgs:(FMIceLinkSendSCTPArgs*)sendArgs;
- (void) setConference:(FMIceLinkConference*)value;
/// <summary>
/// Sets the peer ID.
/// </summary>
- (void) setPeerId:(NSString*)value;
/// <summary>
/// Sets custom state data to associate with the peer.
/// </summary>
- (void) setPeerState:(NSObject*)value;
/// <summary>
/// Gets the tie-breaker to use in cases of role conflict.
/// </summary>
- (NSString*) tieBreaker;
/// <summary>
/// Gets whether the link was ever up.
/// </summary>
- (bool) wasUp;

@end


@class FMIceLinkUnhandledExceptionArgs;
@class FMIceLinkStreamLinkInitArgs;
@class FMIceLinkStreamLinkUpArgs;
@class FMIceLinkStreamLinkDownArgs;
@class FMIceLinkStreamLinkReceiveRTPArgs;
@class FMIceLinkStreamLinkReceiveRTCPArgs;
@class FMIceLinkStreamLinkReceiveSCTPArgs;
@class FMCallback;
@class FMIceLinkLinkDownArgs;
@class FMIceLinkLinkInitArgs;
@class NSExceptionFMExtensions;
@class FMIceLinkLinkUpArgs;

/// <summary>
/// Defines common base properties for streams.
/// </summary>
#pragma clang diagnostic ignored "-Wshorten-64-to-32"
#pragma clang diagnostic ignored "-Wint-to-pointer-cast"

@interface FMIceLinkBaseStream : FMDynamic 

/// <summary>
/// Adds a handler that is raised when a link is closed with this stream.
/// </summary>
- (FMCallback*) addOnLinkDownWithValue:(FMCallback*)value;
/// <summary>
/// Adds a handler that is raised when a link is closed with this stream.
/// </summary>
- (FMCallback*) addOnLinkDown:(FMCallback*)value;
/// <summary>
/// Adds a handler that is raised when a link is closed with this stream.
/// </summary>
- (FMCallback*) addOnLinkDownWithValueBlock:(void (^) (FMIceLinkStreamLinkDownArgs*))valueBlock;
/// <summary>
/// Adds a handler that is raised when a link is closed with this stream.
/// </summary>
- (FMCallback*) addOnLinkDownBlock:(void (^) (FMIceLinkStreamLinkDownArgs*))valueBlock;
/// <summary>
/// Adds a handler that is raised when a new link is initializing with this stream.
/// </summary>
- (FMCallback*) addOnLinkInitWithValue:(FMCallback*)value;
/// <summary>
/// Adds a handler that is raised when a new link is initializing with this stream.
/// </summary>
- (FMCallback*) addOnLinkInit:(FMCallback*)value;
/// <summary>
/// Adds a handler that is raised when a new link is initializing with this stream.
/// </summary>
- (FMCallback*) addOnLinkInitWithValueBlock:(void (^) (FMIceLinkStreamLinkInitArgs*))valueBlock;
/// <summary>
/// Adds a handler that is raised when a new link is initializing with this stream.
/// </summary>
- (FMCallback*) addOnLinkInitBlock:(void (^) (FMIceLinkStreamLinkInitArgs*))valueBlock;
/// <summary>
/// Adds a handler that is raised when an RTCP packet is received.
/// </summary>
- (FMCallback*) addOnLinkReceiveRTCPWithValue:(FMCallback*)value;
/// <summary>
/// Adds a handler that is raised when an RTCP packet is received.
/// </summary>
- (FMCallback*) addOnLinkReceiveRTCP:(FMCallback*)value;
/// <summary>
/// Adds a handler that is raised when an RTCP packet is received.
/// </summary>
- (FMCallback*) addOnLinkReceiveRTCPWithValueBlock:(void (^) (FMIceLinkStreamLinkReceiveRTCPArgs*))valueBlock;
/// <summary>
/// Adds a handler that is raised when an RTCP packet is received.
/// </summary>
- (FMCallback*) addOnLinkReceiveRTCPBlock:(void (^) (FMIceLinkStreamLinkReceiveRTCPArgs*))valueBlock;
/// <summary>
/// Adds a handler that is raised when an RTP packet is received.
/// </summary>
- (FMCallback*) addOnLinkReceiveRTPWithValue:(FMCallback*)value;
/// <summary>
/// Adds a handler that is raised when an RTP packet is received.
/// </summary>
- (FMCallback*) addOnLinkReceiveRTP:(FMCallback*)value;
/// <summary>
/// Adds a handler that is raised when an RTP packet is received.
/// </summary>
- (FMCallback*) addOnLinkReceiveRTPWithValueBlock:(void (^) (FMIceLinkStreamLinkReceiveRTPArgs*))valueBlock;
/// <summary>
/// Adds a handler that is raised when an RTP packet is received.
/// </summary>
- (FMCallback*) addOnLinkReceiveRTPBlock:(void (^) (FMIceLinkStreamLinkReceiveRTPArgs*))valueBlock;
/// <summary>
/// Adds a handler that is raised when an SCTP packet is received.
/// </summary>
- (FMCallback*) addOnLinkReceiveSCTPWithValue:(FMCallback*)value;
/// <summary>
/// Adds a handler that is raised when an SCTP packet is received.
/// </summary>
- (FMCallback*) addOnLinkReceiveSCTP:(FMCallback*)value;
/// <summary>
/// Adds a handler that is raised when an SCTP packet is received.
/// </summary>
- (FMCallback*) addOnLinkReceiveSCTPWithValueBlock:(void (^) (FMIceLinkStreamLinkReceiveSCTPArgs*))valueBlock;
/// <summary>
/// Adds a handler that is raised when an SCTP packet is received.
/// </summary>
- (FMCallback*) addOnLinkReceiveSCTPBlock:(void (^) (FMIceLinkStreamLinkReceiveSCTPArgs*))valueBlock;
/// <summary>
/// Adds a handler that is raised when a link is open with this stream.
/// </summary>
- (FMCallback*) addOnLinkUpWithValue:(FMCallback*)value;
/// <summary>
/// Adds a handler that is raised when a link is open with this stream.
/// </summary>
- (FMCallback*) addOnLinkUp:(FMCallback*)value;
/// <summary>
/// Adds a handler that is raised when a link is open with this stream.
/// </summary>
- (FMCallback*) addOnLinkUpWithValueBlock:(void (^) (FMIceLinkStreamLinkUpArgs*))valueBlock;
/// <summary>
/// Adds a handler that is raised when a link is open with this stream.
/// </summary>
- (FMCallback*) addOnLinkUpBlock:(void (^) (FMIceLinkStreamLinkUpArgs*))valueBlock;
/// <summary>
/// Adds a handler that is raised when an exception is thrown in user code and not handled,
/// typically in a callback or event handler.
/// </summary>
- (FMCallback*) addOnUnhandledExceptionWithValue:(FMCallback*)value;
/// <summary>
/// Adds a handler that is raised when an exception is thrown in user code and not handled,
/// typically in a callback or event handler.
/// </summary>
- (FMCallback*) addOnUnhandledException:(FMCallback*)value;
/// <summary>
/// Adds a handler that is raised when an exception is thrown in user code and not handled,
/// typically in a callback or event handler.
/// </summary>
- (FMCallback*) addOnUnhandledExceptionWithValueBlock:(void (^) (FMIceLinkUnhandledExceptionArgs*))valueBlock;
/// <summary>
/// Adds a handler that is raised when an exception is thrown in user code and not handled,
/// typically in a callback or event handler.
/// </summary>
- (FMCallback*) addOnUnhandledExceptionBlock:(void (^) (FMIceLinkUnhandledExceptionArgs*))valueBlock;
/// <summary>
/// Initializes a new instance of the <see cref="FMIceLinkBaseStream" /> class.
/// </summary>
/// <param name="type">The stream type.</param>
/// <param name="protocol">The stream protocol.</param>
+ (FMIceLinkBaseStream*) baseStreamWithType:(FMIceLinkStreamType)type protocol:(FMIceLinkStreamProtocol)protocol;
/// <summary>
/// Gets the direction of media flow.
/// </summary>
- (FMIceLinkDirection) direction;
/// <summary>
/// Initializes a new instance of the <see cref="FMIceLinkBaseStream" /> class.
/// </summary>
/// <param name="type">The stream type.</param>
/// <param name="protocol">The stream protocol.</param>
- (id) initWithType:(FMIceLinkStreamType)type protocol:(FMIceLinkStreamProtocol)protocol;
/// <summary>
/// Gets whether to multiplex RTP and RTCP packets on a single socket.
/// </summary>
- (bool) multiplexRtpRtcp;
/// <summary>
/// Gets whether to offer to exchange SRTP keys using DTLS.
/// </summary>
- (bool) offerDtls;
/// <summary>
/// Gets the stream protocol.
/// </summary>
- (FMIceLinkStreamProtocol) protocol;
- (void) raiseDownWithE:(FMIceLinkLinkDownArgs*)e streamIndex:(int)streamIndex mediaIndex:(int)mediaIndex;
- (void) raiseInitWithE:(FMIceLinkLinkInitArgs*)e streamIndex:(int)streamIndex mediaIndex:(int)mediaIndex;
- (void) raiseReceiveRTCPWithArgs:(FMIceLinkStreamLinkReceiveRTCPArgs*)args;
- (void) raiseReceiveRTPWithArgs:(FMIceLinkStreamLinkReceiveRTPArgs*)args;
- (void) raiseReceiveSCTPWithArgs:(FMIceLinkStreamLinkReceiveSCTPArgs*)args;
- (bool) raiseUnhandledExceptionWithException:(NSException*)exception;
- (bool) raiseUnhandledException:(NSException*)exception;
- (void) raiseUpWithE:(FMIceLinkLinkUpArgs*)e streamIndex:(int)streamIndex mediaIndex:(int)mediaIndex;
/// <summary>
/// Removes a handler that is raised when a link is closed with this stream.
/// </summary>
- (void) removeOnLinkDownWithValue:(FMCallback*)value;
/// <summary>
/// Removes a handler that is raised when a link is closed with this stream.
/// </summary>
- (void) removeOnLinkDown:(FMCallback*)value;
/// <summary>
/// Removes a handler that is raised when a new link is initializing with this stream.
/// </summary>
- (void) removeOnLinkInitWithValue:(FMCallback*)value;
/// <summary>
/// Removes a handler that is raised when a new link is initializing with this stream.
/// </summary>
- (void) removeOnLinkInit:(FMCallback*)value;
/// <summary>
/// Removes a handler that is raised when an RTCP packet is received.
/// </summary>
- (void) removeOnLinkReceiveRTCPWithValue:(FMCallback*)value;
/// <summary>
/// Removes a handler that is raised when an RTCP packet is received.
/// </summary>
- (void) removeOnLinkReceiveRTCP:(FMCallback*)value;
/// <summary>
/// Removes a handler that is raised when an RTP packet is received.
/// </summary>
- (void) removeOnLinkReceiveRTPWithValue:(FMCallback*)value;
/// <summary>
/// Removes a handler that is raised when an RTP packet is received.
/// </summary>
- (void) removeOnLinkReceiveRTP:(FMCallback*)value;
/// <summary>
/// Removes a handler that is raised when an SCTP packet is received.
/// </summary>
- (void) removeOnLinkReceiveSCTPWithValue:(FMCallback*)value;
/// <summary>
/// Removes a handler that is raised when an SCTP packet is received.
/// </summary>
- (void) removeOnLinkReceiveSCTP:(FMCallback*)value;
/// <summary>
/// Removes a handler that is raised when a link is open with this stream.
/// </summary>
- (void) removeOnLinkUpWithValue:(FMCallback*)value;
/// <summary>
/// Removes a handler that is raised when a link is open with this stream.
/// </summary>
- (void) removeOnLinkUp:(FMCallback*)value;
/// <summary>
/// Removes a handler that is raised when an exception is thrown in user code and not handled,
/// typically in a callback or event handler.
/// </summary>
- (void) removeOnUnhandledExceptionWithValue:(FMCallback*)value;
/// <summary>
/// Removes a handler that is raised when an exception is thrown in user code and not handled,
/// typically in a callback or event handler.
/// </summary>
- (void) removeOnUnhandledException:(FMCallback*)value;
/// <summary>
/// Sets the direction of media flow.
/// </summary>
- (void) setDirection:(FMIceLinkDirection)value;
/// <summary>
/// Sets whether to multiplex RTP and RTCP packets on a single socket.
/// </summary>
- (void) setMultiplexRtpRtcp:(bool)value;
/// <summary>
/// Sets whether to offer to exchange SRTP keys using DTLS.
/// </summary>
- (void) setOfferDtls:(bool)value;
- (void) setProtocol:(FMIceLinkStreamProtocol)value;
- (void) setType:(FMIceLinkStreamType)value;
/// <summary>
/// Gets the stream type.
/// </summary>
- (FMIceLinkStreamType) type;

@end



#pragma clang diagnostic ignored "-Wshorten-64-to-32"
#pragma clang diagnostic ignored "-Wint-to-pointer-cast"

@interface FMIceLinkBlockCipher : NSObject 

+ (FMIceLinkBlockCipher*) blockCipher;
- (id) init;

@end


@class FMIceLinkASN1Sequence;
@class NSMutableDataFMExtensions;
@class NSDateFMExtensions;
@class NSStringFMExtensions;
@class FMIceLinkRSAKey;
@class FMIceLinkX509AlgorithmIdentifier;
@class FMIceLinkX509Certificate;
@class FMIceLinkASN1Any;

/// <summary>
/// An X.509/RSA-based certificate.
/// </summary>
#pragma clang diagnostic ignored "-Wshorten-64-to-32"
#pragma clang diagnostic ignored "-Wint-to-pointer-cast"

@interface FMIceLinkCertificate : NSObject 

/// <summary>
/// Gets whether IceLink should automatically
/// regenerate the certificate's cryptography data when
/// it is about to expire. Defaults to <code>true</code>.
/// </summary>
- (bool) autoRegenerate;
+ (FMIceLinkCertificate*) certificate;
/// <summary>
/// Clones this instance.
/// </summary>
/// <returns></returns>
- (FMIceLinkCertificate*) clone;
/// <summary>
/// Gets the effective date.
/// </summary>
- (NSDate*) effectiveDate;
/// <summary>
/// Gets the expiration date.
/// </summary>
- (NSDate*) expirationDate;
+ (FMIceLinkCertificate*) fromAsn1WithAny:(FMIceLinkASN1Any*)any;
+ (FMIceLinkCertificate*) fromX509WithX509Certificate:(FMIceLinkX509Certificate*)x509Certificate;
+ (FMIceLinkCertificate*) fromX509WithCertificate:(FMIceLinkX509Certificate*)x509Certificate;
/// <summary>
/// Generates a certificate with an issuer/subject name of "IceLink" and
/// an expiration date of 10 days from now.
/// </summary>
/// <returns></returns>
+ (FMIceLinkCertificate*) generateCertificate;
/// <summary>
/// Generates a certificate using the issuer/subject name from an
/// old certificate and an expiration date of 10 days from now.
/// </summary>
/// <param name="oldCertificate">The old certificate.</param>
/// <returns></returns>
+ (FMIceLinkCertificate*) generateCertificateFromOldCertificateWithOldCertificate:(FMIceLinkCertificate*)oldCertificate;
/// <summary>
/// Generates a certificate using the issuer/subject name from an
/// old certificate and an expiration date of 10 days from now.
/// </summary>
/// <param name="oldCertificate">The old certificate.</param>
/// <returns></returns>
+ (FMIceLinkCertificate*) generateCertificateFromOldCertificate:(FMIceLinkCertificate*)oldCertificate;
/// <summary>
/// Generates a certificate using the issuer/subject name from an
/// old certificate and the given expiration date.
/// </summary>
/// <param name="oldCertificate">The old certificate.</param>
/// <param name="expirationDate">The expiration date.</param>
/// <returns></returns>
+ (FMIceLinkCertificate*) generateCertificateFromOldCertificateWithOldCertificate:(FMIceLinkCertificate*)oldCertificate expirationDate:(NSDate*)expirationDate;
/// <summary>
/// Generates a certificate using the issuer/subject name from an
/// old certificate and the given expiration date.
/// </summary>
/// <param name="oldCertificate">The old certificate.</param>
/// <param name="expirationDate">The expiration date.</param>
/// <returns></returns>
+ (FMIceLinkCertificate*) generateCertificateFromOldCertificate:(FMIceLinkCertificate*)oldCertificate expirationDate:(NSDate*)expirationDate;
/// <summary>
/// Generates a certificate with the given issuer name, subject name, and
/// an expiration date of 10 days from now.
/// </summary>
/// <param name="issuerName">The name of the issuer.</param>
/// <param name="subjectName">The name of the subject.</param>
/// <returns></returns>
+ (FMIceLinkCertificate*) generateCertificateWithIssuerName:(NSString*)issuerName subjectName:(NSString*)subjectName;
/// <summary>
/// Generates a certificate with the given issuer name, subject name, and expiration date.
/// </summary>
/// <param name="issuerName">The name of the issuer.</param>
/// <param name="subjectName">The name of the subject.</param>
/// <param name="expirationDate">The expiration date.</param>
/// <returns></returns>
+ (FMIceLinkCertificate*) generateCertificateWithIssuerName:(NSString*)issuerName subjectName:(NSString*)subjectName expirationDate:(NSDate*)expirationDate;
/// <summary>
/// Generates a certificate with the given issuer name, subject name, expiration date, and RSA key.
/// </summary>
/// <param name="issuerName">The name of the issuer.</param>
/// <param name="subjectName">The name of the subject.</param>
/// <param name="expirationDate">The expiration date.</param>
/// <param name="key">The RSA key (with public and private details).</param>
/// <returns></returns>
+ (FMIceLinkCertificate*) generateCertificateWithIssuerName:(NSString*)issuerName subjectName:(NSString*)subjectName expirationDate:(NSDate*)expirationDate key:(FMIceLinkRSAKey*)key;
/// <summary>
/// Generates a certificate with the given issuer/subject name and an
/// expiration date of 10 days from now.
/// </summary>
/// <param name="name">The name of the issuer/subject.</param>
/// <returns></returns>
+ (FMIceLinkCertificate*) generateCertificateWithName:(NSString*)name;
/// <summary>
/// Serializes this certificate to binary.
/// </summary>
/// <returns></returns>
- (NSMutableData*) getBytes;
/// <summary>
/// Gets the SHA-1 fingerprint for this certificate.
/// </summary>
- (NSMutableData*) getSha1Fingerprint;
/// <summary>
/// Gets the SHA-256 fingerprint for this certificate.
/// </summary>
- (NSMutableData*) getSha256Fingerprint;
- (id) init;
/// <summary>
/// Gets whether the certificate is expired.
/// </summary>
- (bool) isExpired;
/// <summary>
/// Gets whether the certificate is expiring within 24 hours.
/// </summary>
- (bool) isExpiring;
/// <summary>
/// Gets the name of the issuer.
/// </summary>
- (NSString*) issuerName;
/// <summary>
/// Gets the RSA key.
/// </summary>
- (FMIceLinkRSAKey*) key;
/// <summary>
/// Deserializes a certificate from binary.
/// </summary>
/// <param name="bytes">The bytes.</param>
/// <returns></returns>
+ (FMIceLinkCertificate*) parseBytesWithBytes:(NSMutableData*)bytes;
/// <summary>
/// Deserializes a certificate from binary.
/// </summary>
/// <param name="bytes">The bytes.</param>
/// <returns></returns>
+ (FMIceLinkCertificate*) parseBytes:(NSMutableData*)bytes;
/// <summary>
/// Regenerates the certificate's cryptography data using an
/// expiration date of 10 days from now.
/// </summary>
- (void) regenerate;
/// <summary>
/// Regenerates the certificate's cryptography data using the
/// given expiration date.
/// </summary>
/// <param name="expirationDate">The expiration date.</param>
- (void) regenerateWithExpirationDate:(NSDate*)expirationDate;
- (NSMutableData*) serialNumber;
/// <summary>
/// Sets whether IceLink should automatically
/// regenerate the certificate's cryptography data when
/// it is about to expire. Defaults to <code>true</code>.
/// </summary>
- (void) setAutoRegenerate:(bool)value;
/// <summary>
/// Sets the RSA key.
/// </summary>
- (void) setKey:(FMIceLinkRSAKey*)value;
- (FMIceLinkX509AlgorithmIdentifier*) signatureAlgorithm;
/// <summary>
/// Gets the name of the subject.
/// </summary>
- (NSString*) subjectName;
- (FMIceLinkASN1Sequence*) toAsn1;
- (FMIceLinkX509Certificate*) toX509;

@end



/// <summary>
/// An asymmetric key.
/// </summary>
#pragma clang diagnostic ignored "-Wshorten-64-to-32"
#pragma clang diagnostic ignored "-Wint-to-pointer-cast"

@interface FMIceLinkAsymmetricKey : NSObject 

+ (FMIceLinkAsymmetricKey*) asymmetricKey;
/// <summary>
/// Returns <c>true</c> if the key contains
/// private information.
/// </summary>
/// <returns></returns>
- (bool) hasPrivate;
/// <summary>
/// Returns <c>true</c> if the key contains
/// public information.
/// </summary>
/// <returns></returns>
- (bool) hasPublic;
- (id) init;

@end


@class FMIceLinkSTUNMessage;
@class FMIceLinkTransportAddress;

/// <summary>
/// Details about a TURN connect request or response.
/// </summary>
#pragma clang diagnostic ignored "-Wshorten-64-to-32"
#pragma clang diagnostic ignored "-Wint-to-pointer-cast"

@interface FMIceLinkConnectInfo : NSObject 

+ (FMIceLinkConnectInfo*) connectInfoWithRequest:(FMIceLinkSTUNMessage*)request;
+ (FMIceLinkConnectInfo*) connectInfoWithRequest:(FMIceLinkSTUNMessage*)request response:(FMIceLinkSTUNMessage*)response;
/// <summary>
/// Gets the connection ID
/// if the request was processed successfully.
/// </summary>
- (long long) connectionId;
- (id) initWithRequest:(FMIceLinkSTUNMessage*)request;
- (id) initWithRequest:(FMIceLinkSTUNMessage*)request response:(FMIceLinkSTUNMessage*)response;
/// <summary>
/// Gets the peer address.
/// </summary>
- (FMIceLinkTransportAddress*) peerAddress;
/// <summary>
/// Sets the peer address.
/// </summary>
- (void) setPeerAddress:(FMIceLinkTransportAddress*)value;
/// <summary>
/// Gets whether or not the
/// response indicates success.
/// </summary>
- (bool) success;

@end


@class FMIceLinkSTUNMessage;

/// <summary>
/// Details about a TURN connection-bind request or response.
/// </summary>
#pragma clang diagnostic ignored "-Wshorten-64-to-32"
#pragma clang diagnostic ignored "-Wint-to-pointer-cast"

@interface FMIceLinkConnectionBindInfo : NSObject 

+ (FMIceLinkConnectionBindInfo*) connectionBindInfoWithRequest:(FMIceLinkSTUNMessage*)request;
+ (FMIceLinkConnectionBindInfo*) connectionBindInfoWithRequest:(FMIceLinkSTUNMessage*)request response:(FMIceLinkSTUNMessage*)response;
/// <summary>
/// Gets the connection ID.
/// </summary>
- (long long) connectionId;
- (id) initWithRequest:(FMIceLinkSTUNMessage*)request;
- (id) initWithRequest:(FMIceLinkSTUNMessage*)request response:(FMIceLinkSTUNMessage*)response;
/// <summary>
/// Sets the connection ID.
/// </summary>
- (void) setConnectionId:(long long)value;
/// <summary>
/// Gets whether or not the
/// response indicates success.
/// </summary>
- (bool) success;

@end


@class FMIceLinkICEMediaStream;
@class FMIceLinkSCTPMessage;

#pragma clang diagnostic ignored "-Wshorten-64-to-32"
#pragma clang diagnostic ignored "-Wint-to-pointer-cast"

@interface FMIceLinkICEAgentReceiveSCTPArgs : FMDynamic 

- (int) channelIndex;
+ (FMIceLinkICEAgentReceiveSCTPArgs*) iceAgentReceiveSCTPArgs;
- (id) init;
- (int) mediaIndex;
- (FMIceLinkICEMediaStream*) mediaStream;
- (FMIceLinkSCTPMessage*) message;
- (void) setChannelIndex:(int)value;
- (void) setMediaIndex:(int)value;
- (void) setMediaStream:(FMIceLinkICEMediaStream*)value;
- (void) setMessage:(FMIceLinkSCTPMessage*)value;
- (void) setStreamIndex:(int)value;
- (int) streamIndex;

@end


@class FMIceLinkICEMediaStream;
@class FMIceLinkSCTPMessage;

#pragma clang diagnostic ignored "-Wshorten-64-to-32"
#pragma clang diagnostic ignored "-Wint-to-pointer-cast"

@interface FMIceLinkICEPeerSCTPMessageArgs : NSObject 

- (int) channelIndex;
+ (FMIceLinkICEPeerSCTPMessageArgs*) icePeerSCTPMessageArgs;
- (id) init;
- (FMIceLinkICEMediaStream*) mediaStream;
- (FMIceLinkSCTPMessage*) message;
- (void) setChannelIndex:(int)value;
- (void) setMediaStream:(FMIceLinkICEMediaStream*)value;
- (void) setMessage:(FMIceLinkSCTPMessage*)value;

@end



#pragma clang diagnostic ignored "-Wshorten-64-to-32"
#pragma clang diagnostic ignored "-Wint-to-pointer-cast"

@interface FMIceLinkICEMessageBroker : NSObject 

+ (FMIceLinkICEMessageBroker*) iceMessageBroker;
- (id) init;
- (int) localPreference;
- (void) setLocalPreference:(int)value;

@end


@class FMIceLinkSCTPMessage;
@class FMManagedCondition;
@class FMIceLinkSCTPAssociationState;
@class FMIceLinkICEComponent;
@class FMCallback;
@class FMIceLinkSCTPErrorChunk;
@class FMIceLinkSCTPDataChunk;
@class FMManagedThread;
@class FMIceLinkSCTPDataQueue;
@class FMIceLinkSCTPSendControlChunkQueue;
@class NSMutableDataFMExtensions;
@class FMIceLinkSendSCTPArgs;

#pragma clang diagnostic ignored "-Wshorten-64-to-32"
#pragma clang diagnostic ignored "-Wint-to-pointer-cast"

@interface FMIceLinkICESctpManager : NSObject 

- (void) close;
- (FMIceLinkICEComponent*) component;
+ (FMIceLinkICESctpManager*) iceSctpManagerWithComponent:(FMIceLinkICEComponent*)component requestedOutboundChannels:(int)requestedOutboundChannels maxIncomingChannels:(int)maxIncomingChannels advertisedReceiverWindow:(long long)advertisedReceiverWindow onAssociationSuccess:(FMCallback*)onAssociationSuccess onAssociationFailure:(FMCallback*)onAssociationFailure;
- (void) initiate;
- (id) initWithComponent:(FMIceLinkICEComponent*)component requestedOutboundChannels:(int)requestedOutboundChannels maxIncomingChannels:(int)maxIncomingChannels advertisedReceiverWindow:(long long)advertisedReceiverWindow onAssociationSuccess:(FMCallback*)onAssociationSuccess onAssociationFailure:(FMCallback*)onAssociationFailure;
- (FMCallback*) onSCTPMessage;
- (bool) open;
- (void) processIncomingSCTPPacketWithBytes:(NSMutableData*)bytes len:(int)len;
- (void) sendDataWithSendArgs:(FMIceLinkSendSCTPArgs*)sendArgs;
- (void) setComponent:(FMIceLinkICEComponent*)value;
- (void) setOnSCTPMessage:(FMCallback*)value;
- (void) setOnSCTPMessageBlock:(void (^) (FMIceLinkSCTPMessage*, int))valueBlock;

@end


@class FMIceLinkICESendRequestArgs;
@class FMIceLinkICESendResponseArgs;
@class FMTcpReceiveArgs;
@class FMCallback;
@class NSMutableDictionaryFMExtensions;
@class FMTcpSocket;
@class FMIceLinkVirtualTcpSocket;
@class NSMutableDataFMExtensions;
@class FMIceLinkTransportAddress;

#pragma clang diagnostic ignored "-Wshorten-64-to-32"
#pragma clang diagnostic ignored "-Wint-to-pointer-cast"

@interface FMIceLinkICETcpMessageBroker : FMIceLinkICEMessageBroker 

+ (FMIceLinkICETcpMessageBroker*) iceTcpMessageBrokerWithSocket:(FMTcpSocket*)socket virtualSocket:(FMIceLinkVirtualTcpSocket*)virtualSocket protocol:(FMIceLinkStreamProtocol)protocol;
- (id) initWithSocket:(FMTcpSocket*)socket virtualSocket:(FMIceLinkVirtualTcpSocket*)virtualSocket protocol:(FMIceLinkStreamProtocol)protocol;
- (bool) isClosed;
- (FMCallback*) onData;
- (FMCallback*) onSendRequest;
- (FMCallback*) onSendResponse;
- (FMCallback*) onSTUNRequest;
- (FMCallback*) onSTUNResponse;
- (FMIceLinkStreamProtocol) protocol;
- (int) sendDataWithBuffer:(NSMutableData*)buffer address:(FMIceLinkTransportAddress*)address relay:(FMIceLinkTransportAddress*)relay;
- (void) sendRequestWithSendRequestArgs:(FMIceLinkICESendRequestArgs*)sendRequestArgs;
- (void) sendRequestWithArgs:(FMIceLinkICESendRequestArgs*)sendRequestArgs;
- (void) sendResponseWithSendResponseArgs:(FMIceLinkICESendResponseArgs*)sendResponseArgs;
- (void) sendResponseWithArgs:(FMIceLinkICESendResponseArgs*)sendResponseArgs;
- (void) setOnData:(FMCallback*)value;
- (void) setOnSendRequest:(FMCallback*)value;
- (void) setOnSendRequestBlock:(void (^) (FMIceLinkICESendRequestArgs*))valueBlock;
- (void) setOnSendResponse:(FMCallback*)value;
- (void) setOnSendResponseBlock:(void (^) (FMIceLinkICESendResponseArgs*))valueBlock;
- (void) setOnSTUNRequest:(FMCallback*)value;
- (void) setOnSTUNResponse:(FMCallback*)value;
- (FMTcpSocket*) socket;
- (void) startListening;
- (FMIceLinkVirtualTcpSocket*) virtualSocket;

@end


@class NSStringFMExtensions;

/// <summary>
/// The combination of an IP address and transport
/// protocol (such as UDP or TCP) port.
/// </summary>
#pragma clang diagnostic ignored "-Wshorten-64-to-32"
#pragma clang diagnostic ignored "-Wint-to-pointer-cast"

@interface FMIceLinkTransportAddress : NSObject 

/// <summary>
/// Compares two addresses to see if they are on
/// the same subnet.
/// </summary>
/// <param name="address1">The first address.</param>
/// <param name="address2">The second address.</param>
/// <param name="mask">The subnet mask.</param>
/// <returns></returns>
+ (bool) checkMaskWithAddress1:(NSString*)address1 address2:(NSString*)address2 mask:(NSString*)mask;
/// <summary>
/// Returns a hash code for this instance.
/// </summary>
/// <returns>
/// A hash code for this instance, suitable for use in hashing algorithms and data structures like a hash table.
/// </returns>
- (int) hash;
/// <summary>
/// Initializes a new instance of the <see cref="FMIceLinkTransportAddress" /> class.
/// </summary>
/// <param name="ipAddress">The IP address.</param>
/// <param name="port">The port.</param>
- (id) initWithIPAddress:(NSString*)ipAddress port:(int)port;
/// <summary>
/// Gets the IP address.
/// </summary>
- (NSString*) ipAddress;
/// <summary>
/// Determines whether the specified IP address is all zeros
/// and represents "any" IP address.
/// </summary>
/// <param name="ipAddress">The IP address.</param>
+ (bool) isAnyWithIPAddress:(NSString*)ipAddress;
/// <summary>
/// Determines whether the specified object is equal to this instance.
/// </summary>
/// <param name="obj">The object to compare with this instance.</param>
/// <returns></returns>
- (bool) isEqualWithObj:(NSObject*)obj;
/// <summary>
/// Determines whether a string is a valid IPv4 or IPv6 address
/// </summary>
/// <param name="address">The address.</param>
/// <returns></returns>
+ (bool) isIPAddressWithAddress:(NSString*)address;
/// <summary>
/// Determines whether a string is a valid IPv4 or IPv6 address
/// </summary>
/// <param name="address">The address.</param>
/// <returns></returns>
+ (bool) isIPAddress:(NSString*)address;
/// <summary>
/// Determines whether the specified IP address is link-local.
/// </summary>
/// <param name="ipAddress">The IP address.</param>
/// <returns></returns>
+ (bool) isLinkLocalWithIPAddress:(NSString*)ipAddress;
/// <summary>
/// Determines whether the specified IP address is loopback.
/// </summary>
/// <param name="ipAddress">The IP address.</param>
/// <returns></returns>
+ (bool) isLoopbackWithIPAddress:(NSString*)ipAddress;
/// <summary>
/// Determines whether the specified IP address is private.
/// </summary>
/// <param name="ipAddress">The IP address.</param>
/// <returns></returns>
+ (bool) isPrivateWithIPAddress:(NSString*)ipAddress;
/// <summary>
/// Gets a subnet mask from a prefix length (0-32).
/// </summary>
/// <param name="prefixLength">The prefix length.</param>
/// <returns></returns>
+ (NSString*) maskFromPrefixLengthWithPrefixLength:(int)prefixLength;
/// <summary>
/// Gets a subnet mask from a prefix length (0-32).
/// </summary>
/// <param name="prefixLength">The prefix length.</param>
/// <returns></returns>
+ (NSString*) maskFromPrefixLength:(int)prefixLength;
/// <summary>
/// Gets the port.
/// </summary>
- (int) port;
/// <summary>
/// Sanitizes the IP address, removing any local information.
/// </summary>
/// <param name="ipAddress">The IP address to sanitize.</param>
/// <returns></returns>
+ (NSString*) sanitizeIPAddressWithIPAddress:(NSString*)ipAddress;
/// <summary>
/// Sanitizes the IP address, removing any local information.
/// </summary>
/// <param name="ipAddress">The IP address to sanitize.</param>
/// <returns></returns>
+ (NSString*) sanitizeIPAddress:(NSString*)ipAddress;
/// <summary>
/// Returns a string that represents this instance.
/// </summary>
/// <returns>
/// A string that represents this instance.
/// </returns>
- (NSString*) toString;
/// <summary>
/// Returns a string that represents this instance.
/// </summary>
/// <returns>
/// A string that represents this instance.
/// </returns>
- (NSString*) description;
/// <summary>
/// Initializes a new instance of the <see cref="FMIceLinkTransportAddress" /> class.
/// </summary>
/// <param name="ipAddress">The IP address.</param>
/// <param name="port">The port.</param>
+ (FMIceLinkTransportAddress*) transportAddressWithIPAddress:(NSString*)ipAddress port:(int)port;

@end


@class NSStringFMExtensions;
@class FMIceLinkICECandidatePair;
@class FMIceLinkICESendRequestArgs;
@class FMIceLinkICESendResponseArgs;
@class FMCallback;
@class FMIceLinkSDPCandidateAttribute;
@class FMIceLinkICEComponent;
@class FMIceLinkTransportAddress;
@class FMIceLinkCandidate;

#pragma clang diagnostic ignored "-Wshorten-64-to-32"
#pragma clang diagnostic ignored "-Wint-to-pointer-cast"

@interface FMIceLinkICECandidate : FMIceLinkTransportAddress 

- (NSString*) baseCandidateIPAddress;
- (int) baseCandidatePort;
- (NSString*) baseCandidateString;
+ (long long) calculatePriorityWithTypePreference:(uint8_t)typePreference localPreference:(int)localPreference componentId:(int)componentId;
- (bool) closing;
- (NSString*) cname;
- (int) componentId;
- (bool) disableKeepAliveThread;
- (FMCallback*) findMatchingCandidatePair;
- (FMCallback*) findMatchingLocalCandidate;
- (NSString*) foundation;
+ (FMIceLinkICECandidate*) fromSDPCandidateAttributeWithCandidateAttribute:(FMIceLinkSDPCandidateAttribute*)candidateAttribute component:(FMIceLinkICEComponent*)component;
+ (FMIceLinkICECandidate*) fromSDPCandidateAttribute:(FMIceLinkSDPCandidateAttribute*)candidateAttribute component:(FMIceLinkICEComponent*)component;
- (FMIceLinkTransportAddress*) getServerAddress;
+ (FMIceLinkICECandidate*) iceCandidateWithIPAddress:(NSString*)ipAddress port:(int)port componentId:(int)componentId sdpMediaType:(NSString*)sdpMediaType mediaStreamIndex:(int)mediaStreamIndex;
- (id) initWithIPAddress:(NSString*)ipAddress port:(int)port componentId:(int)componentId sdpMediaType:(NSString*)sdpMediaType mediaStreamIndex:(int)mediaStreamIndex;
- (int) mediaStreamIndex;
- (FMCallback*) onData;
- (FMCallback*) onLearnedCandidate;
- (FMCallback*) onNominatedPairFound;
- (FMCallback*) onRelayFailure;
- (FMCallback*) onSendRequest;
- (FMCallback*) onSendResponse;
- (FMCallback*) onSTUNRequest;
- (FMCallback*) onSTUNResponse;
- (FMCallback*) onValidPairFound;
- (NSString*) password;
- (long long) priority;
- (void) raiseLearnedCandidateWithCandidate:(FMIceLinkICECandidate*)candidate;
- (void) raiseLearnedCandidate:(FMIceLinkICECandidate*)candidate;
- (NSString*) redundancyKey;
- (FMIceLinkICEAgentRole) role;
- (NSString*) sdpMediaType;
- (void) setClosing:(bool)value;
- (void) setCname:(NSString*)value;
- (void) setDisableKeepAliveThread:(bool)value;
- (void) setFindMatchingCandidatePair:(FMCallback*)value;
- (void) setFindMatchingCandidatePairBlock:(FMIceLinkICECandidatePair* (^) (FMIceLinkICECandidatePair*))valueBlock;
- (void) setFindMatchingLocalCandidate:(FMCallback*)value;
- (void) setFindMatchingLocalCandidateBlock:(FMIceLinkICECandidate* (^) (NSString*, int))valueBlock;
- (void) setOnData:(FMCallback*)value;
- (void) setOnLearnedCandidate:(FMCallback*)value;
- (void) setOnLearnedCandidateBlock:(void (^) (FMIceLinkICECandidate*))valueBlock;
- (void) setOnNominatedPairFound:(FMCallback*)value;
- (void) setOnRelayFailure:(FMCallback*)value;
- (void) setOnRelayFailureBlock:(void (^) (FMIceLinkICECandidatePair*))valueBlock;
- (void) setOnSendRequest:(FMCallback*)value;
- (void) setOnSendRequestBlock:(void (^) (FMIceLinkICESendRequestArgs*))valueBlock;
- (void) setOnSendResponse:(FMCallback*)value;
- (void) setOnSendResponseBlock:(void (^) (FMIceLinkICESendResponseArgs*))valueBlock;
- (void) setOnSTUNRequest:(FMCallback*)value;
- (void) setOnSTUNResponse:(FMCallback*)value;
- (void) setOnValidPairFound:(FMCallback*)value;
- (void) setOnValidPairFoundBlock:(void (^) (FMIceLinkICECandidatePair*))valueBlock;
- (void) setPassword:(NSString*)value;
- (void) setPriority:(long long)value;
- (void) setPriorityWithTypePreference:(uint8_t)typePreference localPreference:(int)localPreference;
- (void) setRole:(FMIceLinkICEAgentRole)value;
- (void) setTieBreaker:(long long)value;
- (void) setUsername:(NSString*)value;
- (long long) tieBreaker;
- (FMIceLinkCandidate*) toCandidate;
- (FMIceLinkSDPCandidateAttribute*) toSDPCandidateAttribute;
+ (FMIceLinkSDPCandidateAttribute*) toSDPCandidateAttributeWithCandidate:(FMIceLinkICECandidate*)candidate;
- (NSString*) toString;
- (NSString*) description;
- (void) updateFromBaseCandidateWithBaseCandidate:(FMIceLinkICECandidate*)baseCandidate;
- (void) updateFromBaseCandidate:(FMIceLinkICECandidate*)baseCandidate;
- (NSString*) username;

@end


@class FMIceLinkICETcpMessageBroker;
@class NSStringFMExtensions;

#pragma clang diagnostic ignored "-Wshorten-64-to-32"
#pragma clang diagnostic ignored "-Wint-to-pointer-cast"

@interface FMIceLinkICETcpCandidate : FMIceLinkICECandidate 

+ (FMIceLinkICETcpCandidate*) iceTcpCandidateWithIPAddress:(NSString*)ipAddress port:(int)port componentId:(int)componentId sdpMediaType:(NSString*)sdpMediaType mediaStreamIndex:(int)mediaStreamIndex;
- (id) initWithIPAddress:(NSString*)ipAddress port:(int)port componentId:(int)componentId sdpMediaType:(NSString*)sdpMediaType mediaStreamIndex:(int)mediaStreamIndex;
- (FMIceLinkICETcpMessageBroker*) messageBroker;
- (void) setMessageBroker:(FMIceLinkICETcpMessageBroker*)value;

@end


@class FMIceLinkICETcpRelayedCandidate;
@class FMTcpSocket;
@class FMIceLinkVirtualTcpSocket;
@class FMIceLinkTransportAddress;
@class NSStringFMExtensions;

#pragma clang diagnostic ignored "-Wshorten-64-to-32"
#pragma clang diagnostic ignored "-Wint-to-pointer-cast"

@interface FMIceLinkICETcpHostCandidate : FMIceLinkICETcpCandidate 

- (long long) adapterSpeed;
- (FMIceLinkTransportAddress*) getServerAddress;
+ (FMIceLinkICETcpHostCandidate*) iceTcpHostCandidateWithIPAddress:(NSString*)ipAddress port:(int)port componentId:(int)componentId sdpMediaType:(NSString*)sdpMediaType mediaStreamIndex:(int)mediaStreamIndex;
+ (FMIceLinkICETcpHostCandidate*) iceTcpHostCandidateWithSocket:(FMTcpSocket*)socket virtualSocket:(FMIceLinkVirtualTcpSocket*)virtualSocket componentId:(int)componentId sdpMediaType:(NSString*)sdpMediaType mediaStreamIndex:(int)mediaStreamIndex adapterSpeed:(long long)adapterSpeed protocol:(FMIceLinkStreamProtocol)protocol;
- (id) initWithIPAddress:(NSString*)ipAddress port:(int)port componentId:(int)componentId sdpMediaType:(NSString*)sdpMediaType mediaStreamIndex:(int)mediaStreamIndex;
- (id) initWithSocket:(FMTcpSocket*)socket virtualSocket:(FMIceLinkVirtualTcpSocket*)virtualSocket componentId:(int)componentId sdpMediaType:(NSString*)sdpMediaType mediaStreamIndex:(int)mediaStreamIndex adapterSpeed:(long long)adapterSpeed protocol:(FMIceLinkStreamProtocol)protocol;
- (int) localPreference;
- (FMIceLinkStreamProtocol) protocol;
- (FMIceLinkICETcpRelayedCandidate*) relayedCandidate;
- (void) setAdapterSpeed:(long long)value;
- (void) setLocalPreference:(int)value;
- (void) setRelayedCandidate:(FMIceLinkICETcpRelayedCandidate*)value;
- (FMTcpSocket*) socket;
- (FMIceLinkVirtualTcpSocket*) virtualSocket;

@end


@class NSStringFMExtensions;
@class NSDateFMExtensions;
@class FMIceLinkTransportAddress;
@class FMIceLinkICECreatePermissionArgs;
@class FMCallbackState;
@class FMIceLinkICETcpCandidate;

#pragma clang diagnostic ignored "-Wshorten-64-to-32"
#pragma clang diagnostic ignored "-Wint-to-pointer-cast"

@interface FMIceLinkICETcpRelayedCandidate : FMIceLinkICETcpCandidate 

- (void) createPermissionWithCreatePermissionArgs:(FMIceLinkICECreatePermissionArgs*)createPermissionArgs;
- (void) createPermissionWithArgs:(FMIceLinkICECreatePermissionArgs*)createPermissionArgs;
- (void) deallocateWithCallbackState:(FMCallbackState*)callbackState;
- (FMIceLinkTransportAddress*) getServerAddress;
+ (FMIceLinkICETcpRelayedCandidate*) iceTcpRelayedCandidateWithIPAddress:(NSString*)ipAddress port:(int)port componentId:(int)componentId sdpMediaType:(NSString*)sdpMediaType mediaStreamIndex:(int)mediaStreamIndex baseCandidate:(FMIceLinkICETcpCandidate*)baseCandidate mappedAddress:(FMIceLinkTransportAddress*)mappedAddress serverAddress:(FMIceLinkTransportAddress*)serverAddress lifetime:(int)lifetime turnUsername:(NSString*)turnUsername turnRealm:(NSString*)turnRealm turnPassword:(NSString*)turnPassword nonce:(NSString*)nonce;
- (id) initWithIPAddress:(NSString*)ipAddress port:(int)port componentId:(int)componentId sdpMediaType:(NSString*)sdpMediaType mediaStreamIndex:(int)mediaStreamIndex baseCandidate:(FMIceLinkICETcpCandidate*)baseCandidate mappedAddress:(FMIceLinkTransportAddress*)mappedAddress serverAddress:(FMIceLinkTransportAddress*)serverAddress lifetime:(int)lifetime turnUsername:(NSString*)turnUsername turnRealm:(NSString*)turnRealm turnPassword:(NSString*)turnPassword nonce:(NSString*)nonce;
- (FMIceLinkTransportAddress*) mappedAddress;
- (bool) refresh;
- (FMIceLinkTransportAddress*) serverAddress;
- (NSString*) turnPassword;
- (NSString*) turnRealm;
- (NSString*) turnUsername;

@end


@class NSMutableDataFMExtensions;
@class NSMutableArrayFMExtensions;

/// <summary>
/// An RTCP packet.
/// </summary>
#pragma clang diagnostic ignored "-Wshorten-64-to-32"
#pragma clang diagnostic ignored "-Wint-to-pointer-cast"

@interface FMIceLinkRTCPPacket : NSObject 

/// <summary>
/// Deserializes the packet data from the first byte and payload.
/// </summary>
/// <returns>This packet instance.</returns>
- (void) deserialize;
/// <summary>
/// Gets the first byte.
/// </summary>
- (uint8_t) firstByte;
/// <summary>
/// Converts this packet to a byte array.
/// </summary>
/// <returns></returns>
- (NSMutableData*) getBytes;
/// <summary>
/// Converts an array of packets to a byte array.
/// </summary>
/// <param name="packets">The packets.</param>
/// <returns></returns>
+ (NSMutableData*) getBytesMultipleWithPackets:(NSMutableArray*)packets;
/// <summary>
/// Converts a packet to a byte array.
/// </summary>
/// <param name="packet">The packet.</param>
/// <returns></returns>
+ (NSMutableData*) getBytesWithPacket:(FMIceLinkRTCPPacket*)packet;
- (id) init;
/// <summary>
/// Converts a byte array to an array of packets.
/// </summary>
/// <param name="bytes">The byte array.</param>
/// <returns></returns>
+ (NSMutableArray*) parseBytesWithBytes:(NSMutableData*)bytes;
/// <summary>
/// Converts a byte array to an array of packets.
/// </summary>
/// <param name="bytes">The byte array.</param>
/// <returns></returns>
+ (NSMutableArray*) parseBytes:(NSMutableData*)bytes;
/// <summary>
/// Gets the data payload.
/// </summary>
- (NSMutableData*) payload;
+ (FMIceLinkRTCPPacket*) rtcpPacket;
/// <summary>
/// Serializes the packet data to the first byte and payload.
/// </summary>
- (void) serialize;
/// <summary>
/// Sets the first byte.
/// </summary>
- (void) setFirstByte:(uint8_t)value;
/// <summary>
/// Sets the data payload.
/// </summary>
- (void) setPayload:(NSMutableData*)value;

@end


@class NSMutableDataFMExtensions;

/// <summary>
/// An RTCP Feedback packet.
/// </summary>
#pragma clang diagnostic ignored "-Wshorten-64-to-32"
#pragma clang diagnostic ignored "-Wint-to-pointer-cast"

@interface FMIceLinkRTCPFeedbackPacket : FMIceLinkRTCPPacket 

/// <summary>
/// Deserializes the packet data from the first byte and payload.
/// </summary>
- (void) deserialize;
/// <summary>
/// Deserializes the feedback control information from the FCI payload.
/// </summary>
- (void) deserializeFCI;
/// <summary>
/// Gets the Feedback Control Information payload.
/// </summary>
- (NSMutableData*) fciPayload;
/// <summary>
/// Gets the feedback message type.
/// </summary>
- (uint8_t) feedbackMessageType;
/// <summary>
/// Initializes a new instance of the <see cref="FMIceLinkRTCPFeedbackPacket" /> class.
/// </summary>
/// <param name="feedbackMessageType">The feedback message type.</param>
- (id) initWithFeedbackMessageType:(uint8_t)feedbackMessageType;
/// <summary>
/// Gets the SSRC of the media source that this
/// piece of feedback information is related to.
/// </summary>
- (long long) mediaSourceSynchronizationSource;
/// <summary>
/// Gets the SSRC of the packet sender.
/// </summary>
- (long long) packetSenderSynchronizationSource;
/// <summary>
/// Initializes a new instance of the <see cref="FMIceLinkRTCPFeedbackPacket" /> class.
/// </summary>
/// <param name="feedbackMessageType">The feedback message type.</param>
+ (FMIceLinkRTCPFeedbackPacket*) rtcpFeedbackPacketWithFeedbackMessageType:(uint8_t)feedbackMessageType;
/// <summary>
/// Serializes the packet data to the first byte and payload.
/// </summary>
- (void) serialize;
/// <summary>
/// Serializes the feedback control information to the FCI payload.
/// </summary>
- (void) serializeFCI;
/// <summary>
/// Sets the Feedback Control Information payload.
/// </summary>
- (void) setFCIPayload:(NSMutableData*)value;
/// <summary>
/// Sets the feedback message type.
/// </summary>
- (void) setFeedbackMessageType:(uint8_t)value;
/// <summary>
/// Sets the SSRC of the media source that this
/// piece of feedback information is related to.
/// </summary>
- (void) setMediaSourceSynchronizationSource:(long long)value;
/// <summary>
/// Sets the SSRC of the packet sender.
/// </summary>
- (void) setPacketSenderSynchronizationSource:(long long)value;

@end



/// <summary>
/// An RTCP Feedback PS packet.
/// </summary>
#pragma clang diagnostic ignored "-Wshorten-64-to-32"
#pragma clang diagnostic ignored "-Wint-to-pointer-cast"

@interface FMIceLinkRTCPPsPacket : FMIceLinkRTCPFeedbackPacket 

/// <summary>
/// Creates a packet given the first byte.
/// </summary>
/// <param name="firstByte">The first byte.</param>
/// <returns></returns>
+ (FMIceLinkRTCPPsPacket*) createPacketWithFirstByte:(uint8_t)firstByte;
/// <summary>
/// Initializes a new instance of the <see cref="FMIceLinkRTCPPsPacket" /> class.
/// </summary>
/// <param name="feedbackMessageType">The feedback message type.</param>
- (id) initWithFeedbackMessageType:(uint8_t)feedbackMessageType;
/// <summary>
/// Initializes a new instance of the <see cref="FMIceLinkRTCPPsPacket" /> class.
/// </summary>
/// <param name="feedbackMessageType">The feedback message type.</param>
+ (FMIceLinkRTCPPsPacket*) rtcpPsPacketWithFeedbackMessageType:(uint8_t)feedbackMessageType;

@end


@class FMIceLinkRTCPReferencePictureSelectionIndication;

/// <summary>
/// An RTCP Feedback PS-RPSI packet.
/// </summary>
#pragma clang diagnostic ignored "-Wshorten-64-to-32"
#pragma clang diagnostic ignored "-Wint-to-pointer-cast"

@interface FMIceLinkRTCPRpsiPacket : FMIceLinkRTCPPsPacket 

/// <summary>
/// Deserializes the feedback control information from the FCI payload.
/// </summary>
- (void) deserializeFCI;
/// <summary>
/// Gets the feedback message type byte.
/// </summary>
+ (uint8_t) feedbackMessageTypeByte;
/// <summary>
/// Initializes a new instance of the <see cref="FMIceLinkRTCPRpsiPacket" /> class.
/// </summary>
- (id) init;
/// <summary>
/// Gets the reference picture selection indication.
/// </summary>
- (FMIceLinkRTCPReferencePictureSelectionIndication*) referencePictureSelectionIndication;
/// <summary>
/// Initializes a new instance of the <see cref="FMIceLinkRTCPRpsiPacket" /> class.
/// </summary>
+ (FMIceLinkRTCPRpsiPacket*) rtcpRpsiPacket;
/// <summary>
/// Serializes the feedback control information to the FCI payload.
/// </summary>
- (void) serializeFCI;
/// <summary>
/// Sets the reference picture selection indication.
/// </summary>
- (void) setReferencePictureSelectionIndication:(FMIceLinkRTCPReferencePictureSelectionIndication*)value;

@end


@class NSMutableDataFMExtensions;

/// <summary>
/// An RTCP reference picture selection indication.
/// </summary>
#pragma clang diagnostic ignored "-Wshorten-64-to-32"
#pragma clang diagnostic ignored "-Wint-to-pointer-cast"

@interface FMIceLinkRTCPReferencePictureSelectionIndication : NSObject 

/// <summary>
/// Converts this instance to a byte array.
/// </summary>
/// <returns></returns>
- (NSMutableData*) getBytes;
/// <summary>
/// Converts an instance to a byte array.
/// </summary>
/// <param name="rpsi">The reference picture selection indication.</param>
/// <returns></returns>
+ (NSMutableData*) getBytesWithRpsi:(FMIceLinkRTCPReferencePictureSelectionIndication*)rpsi;
- (id) init;
/// <summary>
/// Converts a byte array to an instance.
/// </summary>
/// <param name="rpsiBytes">The reference picture selection indication bytes.</param>
/// <returns></returns>
+ (FMIceLinkRTCPReferencePictureSelectionIndication*) parseBytesWithRpsiBytes:(NSMutableData*)rpsiBytes;
+ (FMIceLinkRTCPReferencePictureSelectionIndication*) rtcpReferencePictureSelectionIndication;

@end


@class NSMutableArrayFMExtensions;

/// <summary>
/// An RTCP Feedback PS-SLI packet.
/// </summary>
#pragma clang diagnostic ignored "-Wshorten-64-to-32"
#pragma clang diagnostic ignored "-Wint-to-pointer-cast"

@interface FMIceLinkRTCPSliPacket : FMIceLinkRTCPPsPacket 

/// <summary>
/// Deserializes the feedback control information from the FCI payload.
/// </summary>
- (void) deserializeFCI;
/// <summary>
/// Gets the feedback message type byte.
/// </summary>
+ (uint8_t) feedbackMessageTypeByte;
/// <summary>
/// Initializes a new instance of the <see cref="FMIceLinkRTCPSliPacket" /> class.
/// </summary>
- (id) init;
/// <summary>
/// Initializes a new instance of the <see cref="FMIceLinkRTCPSliPacket" /> class.
/// </summary>
+ (FMIceLinkRTCPSliPacket*) rtcpSliPacket;
/// <summary>
/// Serializes the feedback control information to the FCI payload.
/// </summary>
- (void) serializeFCI;
/// <summary>
/// Sets the slice loss indications.
/// </summary>
- (void) setSliceLossIndications:(NSMutableArray*)value;
/// <summary>
/// Gets the slice loss indications.
/// </summary>
- (NSMutableArray*) sliceLossIndications;

@end


@class NSMutableDataFMExtensions;

/// <summary>
/// An RTCP slice loss indication.
/// </summary>
#pragma clang diagnostic ignored "-Wshorten-64-to-32"
#pragma clang diagnostic ignored "-Wint-to-pointer-cast"

@interface FMIceLinkRTCPSliceLossIndication : NSObject 

/// <summary>
/// Converts this instance to a byte array.
/// </summary>
/// <returns></returns>
- (NSMutableData*) getBytes;
/// <summary>
/// Converts an instance to a byte array.
/// </summary>
/// <param name="sli">The slice loss indication.</param>
/// <returns></returns>
+ (NSMutableData*) getBytesWithSli:(FMIceLinkRTCPSliceLossIndication*)sli;
- (id) init;
/// <summary>
/// Converts a byte array to an instance.
/// </summary>
/// <param name="sliBytes">The slice loss indication bytes.</param>
/// <returns></returns>
+ (FMIceLinkRTCPSliceLossIndication*) parseBytesWithSliBytes:(NSMutableData*)sliBytes;
+ (FMIceLinkRTCPSliceLossIndication*) rtcpSliceLossIndication;

@end


@class NSMutableArrayFMExtensions;
@class FMIceLinkRTCPReportBlock;

/// <summary>
/// An RTCP SR or RR packet.
/// </summary>
#pragma clang diagnostic ignored "-Wshorten-64-to-32"
#pragma clang diagnostic ignored "-Wint-to-pointer-cast"

@interface FMIceLinkRTCPReportPacket : FMIceLinkRTCPPacket 

- (id) init;
/// <summary>
/// Gets the report block.
/// </summary>
- (FMIceLinkRTCPReportBlock*) reportBlock;
/// <summary>
/// Gets the report blocks.
/// </summary>
- (NSMutableArray*) reportBlocks;
+ (FMIceLinkRTCPReportPacket*) rtcpReportPacket;
/// <summary>
/// Sets the report block.
/// </summary>
- (void) setReportBlock:(FMIceLinkRTCPReportBlock*)value;
/// <summary>
/// Sets the report blocks.
/// </summary>
- (void) setReportBlocks:(NSMutableArray*)value;
/// <summary>
/// Sets the synchronization source.
/// </summary>
- (void) setSynchronizationSource:(long long)value;
/// <summary>
/// Gets the synchronization source.
/// </summary>
- (long long) synchronizationSource;

@end


@class FMCallback;
@class NSMutableArrayFMExtensions;

#pragma clang diagnostic ignored "-Wshorten-64-to-32"
#pragma clang diagnostic ignored "-Wint-to-pointer-cast"

@interface FMIceLinkPriorityQueue : NSObject 

- (int) count;
- (NSObject*) dequeue;
- (void) enqueueWithItem:(NSObject*)item;
- (bool) existsWithItem:(NSObject*)item;
- (id) initWithComparer:(FMCallback*)comparer;
- (bool) isConsistent;
- (NSObject*) peek;
+ (FMIceLinkPriorityQueue*) priorityQueueWithComparer:(FMCallback*)comparer;

@end


@class NSStringFMExtensions;
@class FMIceLinkPriorityQueue;
@class FMIceLinkJitterBufferPacket;

#pragma clang diagnostic ignored "-Wshorten-64-to-32"
#pragma clang diagnostic ignored "-Wint-to-pointer-cast"

@interface FMIceLinkJitterBuffer : NSObject 

- (bool) addPacketWithPacket:(FMIceLinkJitterBufferPacket*)packet;
- (bool) addPacket:(FMIceLinkJitterBufferPacket*)packet;
+ (FMIceLinkCompareResult) comparePacketsWithPacket1:(FMIceLinkJitterBufferPacket*)packet1 packet2:(FMIceLinkJitterBufferPacket*)packet2;
+ (int) getSequenceNumberDeltaWithSequenceNumber:(int)sequenceNumber lastSequenceNumber:(int)lastSequenceNumber;
- (id) initWithMaxDepth:(int)maxDepth;
+ (FMIceLinkJitterBuffer*) jitterBufferWithMaxDepth:(int)maxDepth;
- (int) maxDepth;
- (NSString*) name;
- (FMIceLinkJitterBufferPacket*) removePacket;
- (void) setName:(NSString*)value;

@end


@class FMIceLinkICEMediaFormat;
@class FMIceLinkICEMediaStream;
@class FMIceLinkRTPPacket;

#pragma clang diagnostic ignored "-Wshorten-64-to-32"
#pragma clang diagnostic ignored "-Wint-to-pointer-cast"

@interface FMIceLinkJitterBufferPacket : NSObject 

- (id) init;
+ (FMIceLinkJitterBufferPacket*) jitterBufferPacket;
- (FMIceLinkICEMediaFormat*) mediaFormat;
- (int) mediaIndex;
- (FMIceLinkICEMediaStream*) mediaStream;
- (FMIceLinkRTPPacket*) packet;
- (void) setMediaFormat:(FMIceLinkICEMediaFormat*)value;
- (void) setMediaIndex:(int)value;
- (void) setMediaStream:(FMIceLinkICEMediaStream*)value;
- (void) setPacket:(FMIceLinkRTPPacket*)value;
- (void) setStreamIndex:(int)value;
- (void) setTimestamp:(long long)value;
- (int) streamIndex;
- (long long) timestamp;

@end


@class FMIceLinkASN1Sequence;
@class NSMutableDataFMExtensions;
@class FMIceLinkX509RsaPrivateKey;
@class FMIceLinkASN1Any;

/// <summary>
/// An RSA key.
/// </summary>
#pragma clang diagnostic ignored "-Wshorten-64-to-32"
#pragma clang diagnostic ignored "-Wint-to-pointer-cast"

@interface FMIceLinkRSAKey : FMIceLinkAsymmetricKey 

/// <summary>
/// Gets the private value inverse-Q.
/// </summary>
- (NSMutableData*) coefficient;
/// <summary>
/// Gets the private value DP.
/// </summary>
- (NSMutableData*) exponent1;
/// <summary>
/// Gets the private value DQ.
/// </summary>
- (NSMutableData*) exponent2;
+ (FMIceLinkRSAKey*) fromAsn1WithAny:(FMIceLinkASN1Any*)any;
+ (FMIceLinkRSAKey*) fromX509WithX509RsaPrivateKey:(FMIceLinkX509RsaPrivateKey*)x509RsaPrivateKey;
+ (FMIceLinkRSAKey*) fromX509WithRsaPrivateKey:(FMIceLinkX509RsaPrivateKey*)x509RsaPrivateKey;
/// <summary>
/// Serializes this key to binary.
/// </summary>
/// <returns></returns>
- (NSMutableData*) getBytes;
/// <summary>
/// Returns <c>true</c> if the key contains
/// private information.
/// </summary>
/// <returns></returns>
- (bool) hasPrivate;
/// <summary>
/// Returns <c>true</c> if the key contains
/// public information.
/// </summary>
/// <returns></returns>
- (bool) hasPublic;
- (id) init;
/// <summary>
/// Gets the public value N.
/// </summary>
- (NSMutableData*) modulus;
/// <summary>
/// Deserializes a key from binary.
/// </summary>
/// <param name="bytes">The bytes.</param>
/// <returns></returns>
+ (FMIceLinkRSAKey*) parseBytesWithBytes:(NSMutableData*)bytes;
/// <summary>
/// Deserializes a key from binary.
/// </summary>
/// <param name="bytes">The bytes.</param>
/// <returns></returns>
+ (FMIceLinkRSAKey*) parseBytes:(NSMutableData*)bytes;
/// <summary>
/// Gets the private value P.
/// </summary>
- (NSMutableData*) prime1;
/// <summary>
/// Gets the private value Q.
/// </summary>
- (NSMutableData*) prime2;
/// <summary>
/// Gets the private value D.
/// </summary>
- (NSMutableData*) privateExponent;
/// <summary>
/// Gets the public value E.
/// </summary>
- (NSMutableData*) publicExponent;
+ (FMIceLinkRSAKey*) rsaKey;
/// <summary>
/// Sets the private value inverse-Q.
/// </summary>
- (void) setCoefficient:(NSMutableData*)value;
/// <summary>
/// Sets the private value DP.
/// </summary>
- (void) setExponent1:(NSMutableData*)value;
/// <summary>
/// Sets the private value DQ.
/// </summary>
- (void) setExponent2:(NSMutableData*)value;
/// <summary>
/// Sets the public value N.
/// </summary>
- (void) setModulus:(NSMutableData*)value;
/// <summary>
/// Sets the private value P.
/// </summary>
- (void) setPrime1:(NSMutableData*)value;
/// <summary>
/// Sets the private value Q.
/// </summary>
- (void) setPrime2:(NSMutableData*)value;
/// <summary>
/// Sets the private value D.
/// </summary>
- (void) setPrivateExponent:(NSMutableData*)value;
/// <summary>
/// Sets the public value E.
/// </summary>
- (void) setPublicExponent:(NSMutableData*)value;
- (FMIceLinkASN1Sequence*) toAsn1;
- (FMIceLinkX509RsaPrivateKey*) toX509;

@end


@class FMIceLinkSCTPLinkedListNode;
@class FMIceLinkSCTPDataChunk;
@class NSStringFMExtensions;

#pragma clang diagnostic ignored "-Wshorten-64-to-32"
#pragma clang diagnostic ignored "-Wint-to-pointer-cast"

@interface FMIceLinkSCTPLinkedList : NSObject 

- (FMIceLinkSCTPLinkedListNode*) addAfterWithNode:(FMIceLinkSCTPLinkedListNode*)node value:(FMIceLinkSCTPDataChunk*)value;
- (FMIceLinkSCTPLinkedListNode*) addFirstWithValue:(FMIceLinkSCTPDataChunk*)value;
- (FMIceLinkSCTPLinkedListNode*) addFirst:(FMIceLinkSCTPDataChunk*)value;
- (FMIceLinkSCTPLinkedListNode*) addLastWithValue:(FMIceLinkSCTPDataChunk*)value;
- (FMIceLinkSCTPLinkedListNode*) addLast:(FMIceLinkSCTPDataChunk*)value;
- (void) clear;
- (long long) count;
- (FMIceLinkSCTPLinkedListNode*) first;
- (id) init;
- (FMIceLinkSCTPLinkedListNode*) last;
- (void) removeWithNode:(FMIceLinkSCTPLinkedListNode*)node;
+ (FMIceLinkSCTPLinkedList*) sctpLinkedList;
- (NSString*) toString;
- (NSString*) description;

@end


@class FMIceLinkSCTPDataChunk;

#pragma clang diagnostic ignored "-Wshorten-64-to-32"
#pragma clang diagnostic ignored "-Wint-to-pointer-cast"

@interface FMIceLinkSCTPLinkedListNode : NSObject 

- (id) initWithValue:(FMIceLinkSCTPDataChunk*)value;
- (FMIceLinkSCTPLinkedListNode*) next;
- (FMIceLinkSCTPLinkedListNode*) previous;
+ (FMIceLinkSCTPLinkedListNode*) sctpLinkedListNodeWithValue:(FMIceLinkSCTPDataChunk*)value;
- (void) setNext:(FMIceLinkSCTPLinkedListNode*)value;
- (void) setPrevious:(FMIceLinkSCTPLinkedListNode*)value;
- (void) setValue:(FMIceLinkSCTPDataChunk*)value;
- (FMIceLinkSCTPDataChunk*) value;

@end


@class NSStringFMExtensions;
@class FMCallback;

/// <summary>
/// An SDP attribute.
/// </summary>
#pragma clang diagnostic ignored "-Wshorten-64-to-32"
#pragma clang diagnostic ignored "-Wint-to-pointer-cast"

@interface FMIceLinkSDPAttribute : NSObject 

/// <summary>
/// Creates an attribute.
/// </summary>
/// <param name="name">The name.</param>
/// <param name="value">The value.</param>
/// <returns></returns>
+ (FMIceLinkSDPAttribute*) createAttributeWithName:(NSString*)name value:(NSString*)value;
/// <summary>
/// Gets the name of the attribute type.
/// </summary>
/// <param name="type">The attribute type.</param>
/// <returns></returns>
+ (NSString*) getTypeNameWithType:(Class)type;
- (NSString*) getValue;
- (id) init;
/// <summary>
/// Determines whether the type applies to media streams.
/// </summary>
/// <param name="type">The type.</param>
+ (bool) isMediaLevelWithType:(Class)type;
/// <summary>
/// Determines whether the type applies to sessions.
/// </summary>
/// <param name="type">The type.</param>
+ (bool) isSessionLevelWithType:(Class)type;
/// <summary>
/// Creates an <see cref="FMIceLinkSDPConnectionData" /> instance from a string.
/// </summary>
/// <param name="s">The string to parse.</param>
/// <returns></returns>
+ (FMIceLinkSDPAttribute*) parseWithS:(NSString*)s;
+ (void) registerAttributeWithType:(Class)type name:(NSString*)name sessionLevel:(bool)sessionLevel mediaLevel:(bool)mediaLevel creationDelegate:(FMCallback*)creationDelegate;
+ (FMIceLinkSDPAttribute*) sdpAttribute;
/// <summary>
/// Converts this instance to a string.
/// </summary>
/// <returns></returns>
- (NSString*) toString;
/// <summary>
/// Converts this instance to a string.
/// </summary>
/// <returns></returns>
- (NSString*) description;
+ (bool) unregisterAttributeWithType:(Class)type;

@end


@class NSStringFMExtensions;

/// <summary>
/// This attribute is used to indicate the capability of
/// using RTCP feedback.
/// </summary>
#pragma clang diagnostic ignored "-Wshorten-64-to-32"
#pragma clang diagnostic ignored "-Wint-to-pointer-cast"

@interface FMIceLinkSDPRtcpFeedbackAttribute : FMIceLinkSDPAttribute 

/// <summary>
/// Initializes a new instance of the <see cref="FMIceLinkSDPRtcpFeedbackAttribute" /> class.
/// </summary>
/// <param name="value">The attribute value.</param>
+ (FMIceLinkSDPRtcpFeedbackAttribute*) fromValueWithValue:(NSString*)value;
/// <summary>
/// Initializes a new instance of the <see cref="FMIceLinkSDPRtcpFeedbackAttribute" /> class.
/// </summary>
/// <param name="value">The attribute value.</param>
+ (FMIceLinkSDPRtcpFeedbackAttribute*) fromValue:(NSString*)value;
- (NSString*) getValue;
/// <summary>
/// Initializes a new instance of the <see cref="FMIceLinkSDPRtcpFeedbackAttribute" /> class.
/// </summary>
/// <param name="payloadType">The payload type.</param>
/// <param name="type">The type.</param>
- (id) initWithPayloadType:(int)payloadType type:(NSString*)type;
/// <summary>
/// Initializes a new instance of the <see cref="FMIceLinkSDPRtcpFeedbackAttribute" /> class.
/// </summary>
/// <param name="payloadType">The payload type.</param>
/// <param name="type">The type.</param>
/// <param name="subtype">The subtype.</param>
- (id) initWithPayloadType:(int)payloadType type:(NSString*)type subtype:(NSString*)subtype;
/// <summary>
/// Gets the payload type.
/// </summary>
- (int) payloadType;
/// <summary>
/// Initializes a new instance of the <see cref="FMIceLinkSDPRtcpFeedbackAttribute" /> class.
/// </summary>
/// <param name="payloadType">The payload type.</param>
/// <param name="type">The type.</param>
+ (FMIceLinkSDPRtcpFeedbackAttribute*) sdpRtcpFeedbackAttributeWithPayloadType:(int)payloadType type:(NSString*)type;
/// <summary>
/// Initializes a new instance of the <see cref="FMIceLinkSDPRtcpFeedbackAttribute" /> class.
/// </summary>
/// <param name="payloadType">The payload type.</param>
/// <param name="type">The type.</param>
/// <param name="subtype">The subtype.</param>
+ (FMIceLinkSDPRtcpFeedbackAttribute*) sdpRtcpFeedbackAttributeWithPayloadType:(int)payloadType type:(NSString*)type subtype:(NSString*)subtype;
/// <summary>
/// Sets the payload type.
/// </summary>
- (void) setPayloadType:(int)value;
/// <summary>
/// Sets the sub-type.
/// </summary>
- (void) setSubType:(NSString*)value;
/// <summary>
/// Sets the type.
/// </summary>
- (void) setType:(NSString*)value;
/// <summary>
/// Gets the sub-type.
/// </summary>
- (NSString*) subType;
/// <summary>
/// Gets the type.
/// </summary>
- (NSString*) type;

@end


@class NSStringFMExtensions;

/// <summary>
/// AB: Legacy attribute. To be removed when Firefox and Chrome stop using it.
/// The sctpmap attribute maps from a port number (as used in an "m="
/// line) to an encoding name denoting the payload format to be used on
/// top of the SCTP association or the actual protocol running on top of it.
/// Last appears in https://tools.ietf.org/html/draft-ietf-mmusic-sctp-sdp-06#page-6
/// Has been replaced in subsequent drafts but is used in Firefox and Chrome for now.
/// </summary>
#pragma clang diagnostic ignored "-Wshorten-64-to-32"
#pragma clang diagnostic ignored "-Wint-to-pointer-cast"

@interface FMIceLinkSDPSctpMapAttribute : FMIceLinkSDPAttribute 

/// <summary>
/// Initializes a new instance of the <see cref="FMIceLinkSDPSctpPortAttribute" /> class.
/// </summary>
/// <param name="value">The attribute value.</param>
+ (FMIceLinkSDPSctpMapAttribute*) fromValueWithValue:(NSString*)value;
/// <summary>
/// Initializes a new instance of the <see cref="FMIceLinkSDPSctpPortAttribute" /> class.
/// </summary>
/// <param name="value">The attribute value.</param>
+ (FMIceLinkSDPSctpMapAttribute*) fromValue:(NSString*)value;
- (NSString*) getValue;
/// <summary>
/// Initializes a new instance of the <see cref="FMIceLinkSDPSctpPortAttribute" /> class.
/// </summary>
/// <param name="port">The SCTP port.</param>
/// <param name="protocol">The protocol.</param>
/// <param name="streams">The streams.</param>
- (id) initWithPort:(int)port protocol:(NSString*)protocol streams:(int)streams;
/// <summary>
/// Gets the SCTP port.
/// </summary>
- (int) port;
/// <summary>
/// Gets the SCTP sub-protocol (association usage).
/// </summary>
- (NSString*) sctpProtocol;
/// <summary>
/// Initializes a new instance of the <see cref="FMIceLinkSDPSctpPortAttribute" /> class.
/// </summary>
/// <param name="port">The SCTP port.</param>
/// <param name="protocol">The protocol.</param>
/// <param name="streams">The streams.</param>
+ (FMIceLinkSDPSctpMapAttribute*) sdpSctpMapAttributeWithPort:(int)port protocol:(NSString*)protocol streams:(int)streams;
/// <summary>
/// Gets the number of incoming streams.
/// </summary>
- (int) streams;

@end



#pragma clang diagnostic ignored "-Wshorten-64-to-32"
#pragma clang diagnostic ignored "-Wint-to-pointer-cast"

@interface FMIceLinkSRTPProtectionProfile : NSObject 

- (id) init;
+ (int) srtp_aes128_cm_hmac_sha1_32;
+ (int) srtp_aes128_cm_hmac_sha1_80;
+ (int) srtp_null_hmac_sha1_32;
+ (int) srtp_null_hmac_sha1_80;
+ (FMIceLinkSRTPProtectionProfile*) srtpProtectionProfile;

@end


@class FMIceLinkSCTPAuthenticatedChunksParameters;
@class FMIceLinkSCTPSackChunk;
@class FMIceLinkSCTPChannels;
@class NSDateFMExtensions;
@class FMCallback;
@class FMIceLinkSCTPPartialReliabilitySupportParameters;
@class FMIceLinkSCTPDynamicAddressReconfigurationSupportParameters;
@class NSMutableDataFMExtensions;
@class FMIceLinkSCTPStateCookie;

#pragma clang diagnostic ignored "-Wshorten-64-to-32"
#pragma clang diagnostic ignored "-Wint-to-pointer-cast"

@interface FMIceLinkSCTPAssociationState : NSObject 

- (long long) arwnd;
- (int) associationPMTU;
- (FMIceLinkSCTPAuthenticatedChunksParameters*) authenticatedChunksSupport;
- (long long) cwnd;
- (bool) dontHaltSctpSendLoop;
- (long long) earliestAllowedRetransmissionTime;
- (long long) earliestAllowedSACKSendTime;
- (bool) extraPacketInFlight;
- (FMIceLinkSCTPSackChunk*) freshestReceivedSACK;
- (FMIceLinkSCTPStateCookie*) getNewCookie;
- (long long) greatestCumulativeTSNReceived;
- (long long) greatestReceivedTSN;
- (void) importSCTPAssociationStateArgsParametersWithTcb:(FMIceLinkSCTPAssociationState*)tcb;
- (FMIceLinkSCTPChannels*) inboundChannels;
- (int) initRetransmitsRemaining;
- (id) initWithCookie:(FMIceLinkSCTPStateCookie*)cookie;
- (id) initWithMyVerificationTag:(long long)myVerificationTag peerVerificationTag:(long long)peerVerificationTag peerRWND:(long long)peerRWND lastReceivedTSNFromPeer:(long long)lastReceivedTSNFromPeer numOutboundChannels:(int)numOutboundChannels secretKey:(NSMutableData*)secretKey;
- (id) initWithOc:(int)oc ic:(int)ic a_rwnd:(long long)a_rwnd;
- (NSDate*) lastSentTime;
- (long long) maximumStaticCWND;
- (long long) myVerificationTag;
- (long long) nextTSNToSend;
- (FMCallback*) onAssociationInitiationFailure;
- (FMCallback*) onAssociationInitiationSuccess;
- (FMIceLinkSCTPChannels*) outboundChannels;
- (int) overallErrorCount;
- (int) overallErrorThreshold;
- (long long) partialBytesACKed;
- (FMIceLinkSCTPPartialReliabilitySupportParameters*) partialReliabilitySupport;
- (long long) peerRWND;
- (long long) peerVerificationTag;
+ (bool) processIncomingSACK;
- (void) resetAssociationState;
- (long long) rto;
- (int) rtoPending;
- (long long) rttvar;
- (int) sackCounter;
- (FMIceLinkSCTPSackChunk*) sackOnReceivedDATA;
+ (FMIceLinkSCTPAssociationState*) sctpAssociationStateWithCookie:(FMIceLinkSCTPStateCookie*)cookie;
+ (FMIceLinkSCTPAssociationState*) sctpAssociationStateWithMyVerificationTag:(long long)myVerificationTag peerVerificationTag:(long long)peerVerificationTag peerRWND:(long long)peerRWND lastReceivedTSNFromPeer:(long long)lastReceivedTSNFromPeer numOutboundChannels:(int)numOutboundChannels secretKey:(NSMutableData*)secretKey;
+ (FMIceLinkSCTPAssociationState*) sctpAssociationStateWithOc:(int)oc ic:(int)ic a_rwnd:(long long)a_rwnd;
- (FMIceLinkSCTPDynamicAddressReconfigurationSupportParameters*) sctpDynamicAddressReconfigurationSupport;
- (NSMutableData*) secretKeyForSCTPCookie;
- (void) setARWND:(long long)value;
- (void) setAssociationPMTU:(int)value;
- (void) setAuthenticatedChunksSupport:(FMIceLinkSCTPAuthenticatedChunksParameters*)value;
- (void) setCWND:(long long)value;
- (void) setDontHaltSctpSendLoop:(bool)value;
- (void) setEarliestAllowedRetransmissionTime:(long long)value;
- (void) setEarliestAllowedSACKSendTime:(long long)value;
- (void) setExtraPacketInFlight:(bool)value;
- (void) setFreshestReceivedSACK:(FMIceLinkSCTPSackChunk*)value;
- (void) setGreatestCumulativeTSNReceived:(long long)value;
- (void) setGreatestReceivedTSN:(long long)value;
- (void) setInboundChannels:(FMIceLinkSCTPChannels*)value;
- (void) setInitRetransmitsRemaining:(int)value;
- (void) setLastSentTime:(NSDate*)value;
- (void) setMaximumStaticCWND:(long long)value;
- (void) setMyVerificationTag:(long long)value;
- (void) setNextTSNToSend:(long long)value;
- (void) setOnAssociationInitiationFailure:(FMCallback*)value;
- (void) setOnAssociationInitiationSuccess:(FMCallback*)value;
- (void) setOutboundChannels:(FMIceLinkSCTPChannels*)value;
- (void) setOverallErrorCount:(int)value;
- (void) setOverallErrorThreshold:(int)value;
- (void) setPartialBytesACKed:(long long)value;
- (void) setPartialReliabilitySupport:(FMIceLinkSCTPPartialReliabilitySupportParameters*)value;
- (void) setPeerRWND:(long long)value;
- (void) setPeerVerificationTag:(long long)value;
+ (void) setProcessIncomingSACK:(bool)value;
- (void) setRTO:(long long)value;
- (void) setRTOPending:(int)value;
- (void) setRTTVAR:(long long)value;
- (void) setSACKCounter:(int)value;
- (void) setSACKOnReceivedDATA:(FMIceLinkSCTPSackChunk*)value;
- (void) setSCTPDynamicAddressReconfigurationSupport:(FMIceLinkSCTPDynamicAddressReconfigurationSupportParameters*)value;
- (void) setSRTT:(long long)value;
- (void) setSSThresh:(long long)value;
- (void) setState:(int)value;
- (long long) srtt;
- (long long) ssThresh;
- (int) state;

@end


@class NSMutableDataFMExtensions;
@class NSMutableArrayFMExtensions;

#pragma clang diagnostic ignored "-Wshorten-64-to-32"
#pragma clang diagnostic ignored "-Wint-to-pointer-cast"

@interface FMIceLinkSCTPAuthenticatedChunksParameters : NSObject 

- (NSMutableData*) chunksToBeAuthenticated;
- (NSMutableArray*) hmacIdentifiers;
- (id) initWithAuthenticatedChunksSupportedByThisEndpoint:(bool)authenticatedChunksSupportedByThisEndpoint random:(NSMutableData*)random hmacIds:(NSMutableArray*)hmacIds chunksToBeAuthenticated:(NSMutableData*)chunksToBeAuthenticated;
- (NSMutableData*) random;
+ (FMIceLinkSCTPAuthenticatedChunksParameters*) sctpAuthenticatedChunksParametersWithAuthenticatedChunksSupportedByThisEndpoint:(bool)authenticatedChunksSupportedByThisEndpoint random:(NSMutableData*)random hmacIds:(NSMutableArray*)hmacIds chunksToBeAuthenticated:(NSMutableData*)chunksToBeAuthenticated;
- (bool) sctpAuthenticatedChunksSupportedByThisEndpoint;
- (bool) sctpAuthenticatedChunksUsedInThisAssociation;
- (void) setChunksToBeAuthenticated:(NSMutableData*)value;
- (void) setHMACIdentifiers:(NSMutableArray*)value;
- (void) setRandom:(NSMutableData*)value;
- (void) setSCTPAuthenticatedChunksSupportedByThisEndpoint:(bool)value;
- (void) setSCTPAuthenticatedChunksUsedInThisAssociation:(bool)value;

@end



#pragma clang diagnostic ignored "-Wshorten-64-to-32"
#pragma clang diagnostic ignored "-Wint-to-pointer-cast"

@interface FMIceLinkSCTPDynamicAddressReconfigurationSupportParameters : NSObject 

- (id) initWithDynamicAddressReconfigurationSupportedByThisEndpoint:(bool)dynamicAddressReconfigurationSupportedByThisEndpoint;
- (bool) sctpDynamicAddressReconfigurationSupportedByThisEndpoint;
+ (FMIceLinkSCTPDynamicAddressReconfigurationSupportParameters*) sctpDynamicAddressReconfigurationSupportParametersWithDynamicAddressReconfigurationSupportedByThisEndpoint:(bool)dynamicAddressReconfigurationSupportedByThisEndpoint;
- (bool) sctpDynamicAddressReconfigurationUsedInThisAssociation;
- (void) setSCTPDynamicAddressReconfigurationSupportedByThisEndpoint:(bool)value;
- (void) setSCTPDynamicAddressReconfigurationUsedInThisAssociation:(bool)value;

@end



#pragma clang diagnostic ignored "-Wshorten-64-to-32"
#pragma clang diagnostic ignored "-Wint-to-pointer-cast"

@interface FMIceLinkSCTPPartialReliabilitySupportParameters : NSObject 

- (id) initWithPartialReliabilitySupportedByThisEndpoint:(bool)partialReliabilitySupportedByThisEndpoint;
- (bool) sctpPartialReliabilitySupportedByThisEndpoint;
+ (FMIceLinkSCTPPartialReliabilitySupportParameters*) sctpPartialReliabilitySupportParametersWithPartialReliabilitySupportedByThisEndpoint:(bool)partialReliabilitySupportedByThisEndpoint;
- (bool) sctpPartialReliabilityUsedInThisAssociation;
- (void) setSCTPPartialReliabilitySupportedByThisEndpoint:(bool)value;
- (void) setSCTPPartialReliabilityUsedInThisAssociation:(bool)value;

@end



#pragma clang diagnostic ignored "-Wshorten-64-to-32"
#pragma clang diagnostic ignored "-Wint-to-pointer-cast"

@interface FMIceLinkSCTPConstants : NSObject 

- (id) init;
+ (FMIceLinkSCTPConstants*) sctpConstants;

@end


@class FMByteCollection;
@class NSMutableDataFMExtensions;

#pragma clang diagnostic ignored "-Wshorten-64-to-32"
#pragma clang diagnostic ignored "-Wint-to-pointer-cast"

@interface FMIceLinkSCTPAuxilary : NSObject 

+ (void) addPaddingWithBytes:(FMByteCollection*)bytes;
+ (int) calculatePaddingBytesWithLen:(int)len;
+ (int) compareTSNsWithTsnA:(long long)tsnA tsnB:(long long)tsnB;
+ (long long) computeCRC32cForSCTPWithBytes:(NSMutableData*)bytes offset:(int)offset len:(int)len;
+ (long long) decrementTSNWithTsn:(long long)tsn;
+ (long long) decrementTSN:(long long)tsn;
+ (long long) getCurrentTimestampInMilliSeconds;
+ (int) incrementSSNWithSsn:(int)ssn;
+ (int) incrementSSN:(int)ssn;
+ (long long) incrementTSNWithTsn:(long long)tsn;
+ (long long) incrementTSN:(long long)tsn;
- (id) init;
+ (FMIceLinkSCTPAuxilary*) sctpAuxilary;
+ (long long) subtractTSNWithTsnA:(long long)tsnA tsnB:(long long)tsnB;
+ (long long) subtractTSNWithA:(long long)tsnA tsnB:(long long)tsnB;

@end



#pragma clang diagnostic ignored "-Wshorten-64-to-32"
#pragma clang diagnostic ignored "-Wint-to-pointer-cast"

@interface FMIceLinkSCTPChunkType : NSObject 

+ (uint8_t) abort;
+ (uint8_t) asConf;
+ (uint8_t) asConfAck;
+ (uint8_t) auth;
+ (uint8_t) cookieAck;
+ (uint8_t) cookieEcho;
+ (uint8_t) cwr;
+ (uint8_t) data;
+ (uint8_t) ecne;
+ (uint8_t) error;
+ (uint8_t) forwardCumulativeTSN;
+ (uint8_t) heartbeat;
+ (uint8_t) heartbeatAck;
+ (uint8_t) init;
- (id) init;
+ (uint8_t) initAck;
+ (uint8_t) pad;
+ (uint8_t) reConfig;
+ (uint8_t) sack;
+ (FMIceLinkSCTPChunkType*) sctpChunkType;
+ (uint8_t) shutdown;
+ (uint8_t) shutdownAck;
+ (uint8_t) shutdownComplete;

@end



#pragma clang diagnostic ignored "-Wshorten-64-to-32"
#pragma clang diagnostic ignored "-Wint-to-pointer-cast"

@interface FMIceLinkSCTPHMACIdentifier : NSObject 

- (id) init;
+ (FMIceLinkSCTPHMACIdentifier*) sctphmacIdentifier;
+ (int) sha1;
+ (int) sha256;

@end



#pragma clang diagnostic ignored "-Wshorten-64-to-32"
#pragma clang diagnostic ignored "-Wint-to-pointer-cast"

@interface FMIceLinkSCTPParameterType : NSObject 

- (id) init;
+ (FMIceLinkSCTPParameterType*) sctpParameterType;

@end



#pragma clang diagnostic ignored "-Wshorten-64-to-32"
#pragma clang diagnostic ignored "-Wint-to-pointer-cast"

@interface FMIceLinkSCTPErrorCauseCode : NSObject 

- (id) init;
+ (FMIceLinkSCTPErrorCauseCode*) sctpErrorCauseCode;

@end



#pragma clang diagnostic ignored "-Wshorten-64-to-32"
#pragma clang diagnostic ignored "-Wint-to-pointer-cast"

@interface FMIceLinkSCTPChannel : NSObject 

- (int) id;
- (id) initWithId:(int)idValue;
- (int) nextSSN;
+ (FMIceLinkSCTPChannel*) sctpChannelWithId:(int)idValue;
- (void) setNextSSN:(int)value;

@end


@class NSMutableDictionaryFMExtensions;
@class FMIceLinkSCTPChannel;

#pragma clang diagnostic ignored "-Wshorten-64-to-32"
#pragma clang diagnostic ignored "-Wint-to-pointer-cast"

@interface FMIceLinkSCTPChannels : NSObject 

- (int) count;
- (FMIceLinkSCTPChannel*) getChannelWithChannelID:(int)channelID;
- (FMIceLinkSCTPChannel*) getChannelWithID:(int)channelID;
- (id) initWithNumChannels:(int)numChannels;
+ (FMIceLinkSCTPChannels*) sctpChannelsWithNumChannels:(int)numChannels;

@end


@class NSMutableDataFMExtensions;

#pragma clang diagnostic ignored "-Wshorten-64-to-32"
#pragma clang diagnostic ignored "-Wint-to-pointer-cast"

@interface FMIceLinkSCTPChunk : NSObject 

- (bool) doNotProcessFurtherChunksIfItIsNotRecognized;
- (NSMutableData*) getBytes;
- (id) init;
+ (FMIceLinkSCTPChunk*) parseBytesWithValue:(NSMutableData*)value startIndex:(int)startIndex offsetPlus:(int*)offsetPlus;
- (bool) reportToSenderIfItIsNotRecognized;
+ (FMIceLinkSCTPChunk*) sctpChunk;
- (void) setUnrecognized:(bool)value;
- (int) type;
- (bool) unrecognized;

@end


@class FMManagedThread;
@class FMCallback;

#pragma clang diagnostic ignored "-Wshorten-64-to-32"
#pragma clang diagnostic ignored "-Wint-to-pointer-cast"

@interface FMIceLinkSCTPControlChunk : FMIceLinkSCTPChunk 

- (bool) canBundleWithDataAndSACKChunks;
- (id) init;
+ (FMIceLinkSCTPControlChunk*) sctpControlChunk;
- (void) setCanBundleWithDataAndSACKChunks:(bool)value;
- (void) setTimeoutTimerThread:(FMCallback*)value;
- (void) setTimeoutTimerThreadBlock:(void (^) (FMManagedThread*))valueBlock;
- (FMCallback*) timeoutTimerThread;

@end


@class NSMutableArrayFMExtensions;
@class NSMutableDataFMExtensions;

#pragma clang diagnostic ignored "-Wshorten-64-to-32"
#pragma clang diagnostic ignored "-Wint-to-pointer-cast"

@interface FMIceLinkSCTPAbortChunk : FMIceLinkSCTPControlChunk 

- (NSMutableArray*) errorCauses;
- (NSMutableData*) getBytes;
+ (NSMutableData*) getBytesWithChunk:(FMIceLinkSCTPAbortChunk*)chunk;
- (id) initWithVerificationTagReflected:(bool)verificationTagReflected;
- (id) initWithVerificationTagReflected:(bool)verificationTagReflected errorCauses:(NSMutableArray*)errorCauses;
+ (FMIceLinkSCTPAbortChunk*) parseBytesWithBytes:(NSMutableData*)bytes offsetPlus:(int*)offsetPlus;
+ (FMIceLinkSCTPAbortChunk*) parseBytes:(NSMutableData*)bytes offsetPlus:(int*)offsetPlus;
+ (FMIceLinkSCTPAbortChunk*) sctpAbortChunkWithVerificationTagReflected:(bool)verificationTagReflected;
+ (FMIceLinkSCTPAbortChunk*) sctpAbortChunkWithVerificationTagReflected:(bool)verificationTagReflected errorCauses:(NSMutableArray*)errorCauses;
- (void) setErrorCauses:(NSMutableArray*)value;
- (void) setVerificationTagReflected:(bool)value;
- (bool) verificationTagReflected;

@end


@class NSMutableDataFMExtensions;

#pragma clang diagnostic ignored "-Wshorten-64-to-32"
#pragma clang diagnostic ignored "-Wint-to-pointer-cast"

@interface FMIceLinkSCTPCookieAckChunk : FMIceLinkSCTPControlChunk 

- (NSMutableData*) getBytes;
+ (NSMutableData*) getBytesWithChunk:(FMIceLinkSCTPCookieAckChunk*)chunk;
- (id) init;
+ (FMIceLinkSCTPCookieAckChunk*) parseBytesWithBytes:(NSMutableData*)bytes offsetPlus:(int*)offsetPlus;
+ (FMIceLinkSCTPCookieAckChunk*) parseBytes:(NSMutableData*)bytes offsetPlus:(int*)offsetPlus;
+ (FMIceLinkSCTPCookieAckChunk*) sctpCookieAckChunk;

@end


@class NSMutableDataFMExtensions;
@class FMIceLinkSCTPStateCookie;

#pragma clang diagnostic ignored "-Wshorten-64-to-32"
#pragma clang diagnostic ignored "-Wint-to-pointer-cast"

@interface FMIceLinkSCTPCookieEchoChunk : FMIceLinkSCTPControlChunk 

- (NSMutableData*) cookieBytes;
- (NSMutableData*) getBytes;
+ (NSMutableData*) getBytesWithChunk:(FMIceLinkSCTPCookieEchoChunk*)chunk;
- (id) initWithCookie:(FMIceLinkSCTPStateCookie*)cookie;
- (id) initWithCookieBytes:(NSMutableData*)cookieBytes;
+ (FMIceLinkSCTPCookieEchoChunk*) parseBytesWithBytes:(NSMutableData*)bytes offsetPlus:(int*)offsetPlus;
+ (FMIceLinkSCTPCookieEchoChunk*) parseBytes:(NSMutableData*)bytes offsetPlus:(int*)offsetPlus;
+ (FMIceLinkSCTPCookieEchoChunk*) sctpCookieEchoChunkWithCookie:(FMIceLinkSCTPStateCookie*)cookie;
+ (FMIceLinkSCTPCookieEchoChunk*) sctpCookieEchoChunkWithCookieBytes:(NSMutableData*)cookieBytes;
- (void) setCookieBytes:(NSMutableData*)value;

@end


@class FMIceLinkSendSCTPArgs;
@class NSMutableDataFMExtensions;
@class NSStringFMExtensions;

#pragma clang diagnostic ignored "-Wshorten-64-to-32"
#pragma clang diagnostic ignored "-Wint-to-pointer-cast"

@interface FMIceLinkSCTPDataChunk : FMIceLinkSCTPChunk 

- (bool) acked;
- (bool) beginning;
- (bool) ending;
- (NSMutableData*) getBytes;
+ (NSMutableData*) getBytesWithChunk:(FMIceLinkSCTPDataChunk*)chunk;
- (int) hash;
- (id) initWithUnordered:(bool)unordered beginning:(bool)beginning ending:(bool)ending tsn:(long long)tsn streamID:(int)streamID ssn:(int)ssn ppi:(long long)ppi userData:(NSMutableData*)userData;
- (bool) isEqualWithOther:(NSObject*)other;
+ (FMIceLinkSCTPDataChunk*) parseBytesWithBytes:(NSMutableData*)bytes offsetPlus:(int*)offsetPlus;
+ (FMIceLinkSCTPDataChunk*) parseBytes:(NSMutableData*)bytes offsetPlus:(int*)offsetPlus;
- (long long) payloadProtocolIdentifier;
- (bool) raised;
+ (FMIceLinkSCTPDataChunk*) sctpDataChunkWithUnordered:(bool)unordered beginning:(bool)beginning ending:(bool)ending tsn:(long long)tsn streamID:(int)streamID ssn:(int)ssn ppi:(long long)ppi userData:(NSMutableData*)userData;
- (FMIceLinkSendSCTPArgs*) sendArgs;
- (void) setAcked:(bool)value;
- (void) setBeginning:(bool)value;
- (void) setEnding:(bool)value;
- (void) setPayloadProtocolIdentifier:(long long)value;
- (void) setRaised:(bool)value;
- (void) setSendArgs:(FMIceLinkSendSCTPArgs*)value;
- (void) setStreamIdentifier:(int)value;
- (void) setStreamSequenceNumber:(int)value;
- (void) setTransmissionTime:(long long)value;
- (void) setTSN:(long long)value;
- (void) setUnordered:(bool)value;
- (void) setUserData:(NSMutableData*)value;
- (int) streamIdentifier;
- (int) streamSequenceNumber;
- (NSString*) toString;
- (NSString*) description;
- (long long) transmissionTime;
- (long long) tsn;
- (bool) unordered;
- (NSMutableData*) userData;

@end


@class NSMutableArrayFMExtensions;
@class NSMutableDataFMExtensions;

#pragma clang diagnostic ignored "-Wshorten-64-to-32"
#pragma clang diagnostic ignored "-Wint-to-pointer-cast"

@interface FMIceLinkSCTPErrorChunk : FMIceLinkSCTPControlChunk 

- (NSMutableArray*) errorCauses;
- (NSMutableData*) getBytes;
+ (NSMutableData*) getBytesWithChunk:(FMIceLinkSCTPErrorChunk*)chunk;
- (id) initWithErrorCauses:(NSMutableArray*)errorCauses;
+ (FMIceLinkSCTPErrorChunk*) parseBytesWithBytes:(NSMutableData*)bytes offsetPlus:(int*)offsetPlus;
+ (FMIceLinkSCTPErrorChunk*) parseBytes:(NSMutableData*)bytes offsetPlus:(int*)offsetPlus;
+ (FMIceLinkSCTPErrorChunk*) sctpErrorChunkWithErrorCauses:(NSMutableArray*)errorCauses;
- (void) setErrorCauses:(NSMutableArray*)value;

@end


@class NSMutableDataFMExtensions;

#pragma clang diagnostic ignored "-Wshorten-64-to-32"
#pragma clang diagnostic ignored "-Wint-to-pointer-cast"

@interface FMIceLinkSCTPErrorCause : NSObject 

- (int) causeCode;
- (NSMutableData*) getBytes;
- (id) init;
+ (FMIceLinkSCTPErrorCause*) parseBytesWithValue:(NSMutableData*)value startIndex:(int)startIndex offsetPlus:(int*)offsetPlus;
+ (FMIceLinkSCTPErrorCause*) sctpErrorCause;

@end


@class NSMutableDataFMExtensions;

#pragma clang diagnostic ignored "-Wshorten-64-to-32"
#pragma clang diagnostic ignored "-Wint-to-pointer-cast"

@interface FMIceLinkSCTPInvalidStreamIdentifier : FMIceLinkSCTPErrorCause 

- (NSMutableData*) getBytes;
+ (NSMutableData*) getBytesWithCause:(FMIceLinkSCTPInvalidStreamIdentifier*)cause;
- (id) initWithStreamIdentifier:(int)streamIdentifier;
+ (FMIceLinkSCTPInvalidStreamIdentifier*) parseBytesWithBytes:(NSMutableData*)bytes offsetPlus:(int*)offsetPlus;
+ (FMIceLinkSCTPInvalidStreamIdentifier*) parseBytes:(NSMutableData*)bytes offsetPlus:(int*)offsetPlus;
+ (FMIceLinkSCTPInvalidStreamIdentifier*) sctpInvalidStreamIdentifierWithStreamIdentifier:(int)streamIdentifier;
+ (FMIceLinkSCTPInvalidStreamIdentifier*) sctpInvalidStreamIdentifier:(int)streamIdentifier;
- (void) setStreamIdentifier:(int)value;
- (int) streamIdentifier;

@end


@class NSMutableArrayFMExtensions;
@class NSMutableDataFMExtensions;

#pragma clang diagnostic ignored "-Wshorten-64-to-32"
#pragma clang diagnostic ignored "-Wint-to-pointer-cast"

@interface FMIceLinkSCTPMissingMandatoryParameter : FMIceLinkSCTPErrorCause 

- (NSMutableData*) getBytes;
+ (NSMutableData*) getBytesWithCause:(FMIceLinkSCTPMissingMandatoryParameter*)cause;
- (id) initWithMissingParameters:(NSMutableArray*)missingParameters;
- (NSMutableArray*) missingParameters;
+ (FMIceLinkSCTPMissingMandatoryParameter*) parseBytesWithBytes:(NSMutableData*)bytes offsetPlus:(int*)offsetPlus;
+ (FMIceLinkSCTPMissingMandatoryParameter*) parseBytes:(NSMutableData*)bytes offsetPlus:(int*)offsetPlus;
+ (FMIceLinkSCTPMissingMandatoryParameter*) sctpMissingMandatoryParameterWithMissingParameters:(NSMutableArray*)missingParameters;
- (void) setMissingParameters:(NSMutableArray*)value;

@end


@class NSMutableDataFMExtensions;
@class FMNullableLong;

#pragma clang diagnostic ignored "-Wshorten-64-to-32"
#pragma clang diagnostic ignored "-Wint-to-pointer-cast"

@interface FMIceLinkSCTPStaleCookieError : FMIceLinkSCTPErrorCause 

- (NSMutableData*) getBytes;
+ (NSMutableData*) getBytesWithCause:(FMIceLinkSCTPStaleCookieError*)cause;
- (id) initWithStaleTime:(FMNullableLong*)staleTime;
- (long long) measureOfStaleness;
+ (FMIceLinkSCTPStaleCookieError*) parseBytesWithBytes:(NSMutableData*)bytes offsetPlus:(int*)offsetPlus;
+ (FMIceLinkSCTPStaleCookieError*) parseBytes:(NSMutableData*)bytes offsetPlus:(int*)offsetPlus;
+ (FMIceLinkSCTPStaleCookieError*) sctpStaleCookieErrorWithStaleTime:(FMNullableLong*)staleTime;
- (void) setMeasureOfStaleness:(long long)value;

@end


@class NSMutableDataFMExtensions;

#pragma clang diagnostic ignored "-Wshorten-64-to-32"
#pragma clang diagnostic ignored "-Wint-to-pointer-cast"

@interface FMIceLinkSCTPOutOfResource : FMIceLinkSCTPErrorCause 

- (NSMutableData*) getBytes;
+ (NSMutableData*) getBytesWithCause:(FMIceLinkSCTPOutOfResource*)cause;
- (id) init;
+ (FMIceLinkSCTPOutOfResource*) parseBytesWithBytes:(NSMutableData*)bytes offsetPlus:(int*)offsetPlus;
+ (FMIceLinkSCTPOutOfResource*) parseBytes:(NSMutableData*)bytes offsetPlus:(int*)offsetPlus;
+ (FMIceLinkSCTPOutOfResource*) sctpOutOfResource;

@end


@class FMIceLinkSCTPTLVParameter;
@class NSMutableDataFMExtensions;

#pragma clang diagnostic ignored "-Wshorten-64-to-32"
#pragma clang diagnostic ignored "-Wint-to-pointer-cast"

@interface FMIceLinkSCTPUnresolvableAddress : FMIceLinkSCTPErrorCause 

- (FMIceLinkSCTPTLVParameter*) address;
- (NSMutableData*) getBytes;
+ (NSMutableData*) getBytesWithCause:(FMIceLinkSCTPUnresolvableAddress*)cause;
- (id) initWithAddress:(FMIceLinkSCTPTLVParameter*)address;
+ (FMIceLinkSCTPUnresolvableAddress*) parseBytesWithBytes:(NSMutableData*)bytes offsetPlus:(int*)offsetPlus;
+ (FMIceLinkSCTPUnresolvableAddress*) parseBytes:(NSMutableData*)bytes offsetPlus:(int*)offsetPlus;
+ (FMIceLinkSCTPUnresolvableAddress*) sctpUnresolvableAddressWithAddress:(FMIceLinkSCTPTLVParameter*)address;
+ (FMIceLinkSCTPUnresolvableAddress*) sctpUnresolvableAddress:(FMIceLinkSCTPTLVParameter*)address;
- (void) setAddress:(FMIceLinkSCTPTLVParameter*)value;

@end


@class FMIceLinkSCTPChunk;
@class NSMutableDataFMExtensions;

#pragma clang diagnostic ignored "-Wshorten-64-to-32"
#pragma clang diagnostic ignored "-Wint-to-pointer-cast"

@interface FMIceLinkSCTPUnrecognizedChunkType : FMIceLinkSCTPErrorCause 

- (NSMutableData*) getBytes;
+ (NSMutableData*) getBytesWithCause:(FMIceLinkSCTPUnrecognizedChunkType*)cause;
- (id) initWithUnrecognizedChunk:(FMIceLinkSCTPChunk*)unrecognizedChunk;
+ (FMIceLinkSCTPUnrecognizedChunkType*) parseBytesWithBytes:(NSMutableData*)bytes offsetPlus:(int*)offsetPlus;
+ (FMIceLinkSCTPUnrecognizedChunkType*) parseBytes:(NSMutableData*)bytes offsetPlus:(int*)offsetPlus;
+ (FMIceLinkSCTPUnrecognizedChunkType*) sctpUnrecognizedChunkTypeWithUnrecognizedChunk:(FMIceLinkSCTPChunk*)unrecognizedChunk;
- (void) setUnrecognizedChunk:(FMIceLinkSCTPChunk*)value;
- (FMIceLinkSCTPChunk*) unrecognizedChunk;

@end


@class NSMutableDataFMExtensions;

#pragma clang diagnostic ignored "-Wshorten-64-to-32"
#pragma clang diagnostic ignored "-Wint-to-pointer-cast"

@interface FMIceLinkSCTPInvalidMandatoryParameter : FMIceLinkSCTPErrorCause 

- (NSMutableData*) getBytes;
+ (NSMutableData*) getBytesWithCause:(FMIceLinkSCTPInvalidMandatoryParameter*)cause;
- (id) init;
+ (FMIceLinkSCTPInvalidMandatoryParameter*) parseBytesWithBytes:(NSMutableData*)bytes offsetPlus:(int*)offsetPlus;
+ (FMIceLinkSCTPInvalidMandatoryParameter*) parseBytes:(NSMutableData*)bytes offsetPlus:(int*)offsetPlus;
+ (FMIceLinkSCTPInvalidMandatoryParameter*) sctpInvalidMandatoryParameter;

@end


@class NSMutableArrayFMExtensions;
@class NSMutableDataFMExtensions;

#pragma clang diagnostic ignored "-Wshorten-64-to-32"
#pragma clang diagnostic ignored "-Wint-to-pointer-cast"

@interface FMIceLinkSCTPUnrecognizedParameters : FMIceLinkSCTPErrorCause 

- (NSMutableData*) getBytes;
+ (NSMutableData*) getBytesWithCause:(FMIceLinkSCTPUnrecognizedParameters*)cause;
- (id) initWithParameters:(NSMutableArray*)parameters;
- (NSMutableArray*) parameters;
+ (FMIceLinkSCTPUnrecognizedParameters*) parseBytesWithBytes:(NSMutableData*)bytes offsetPlus:(int*)offsetPlus;
+ (FMIceLinkSCTPUnrecognizedParameters*) parseBytes:(NSMutableData*)bytes offsetPlus:(int*)offsetPlus;
+ (FMIceLinkSCTPUnrecognizedParameters*) sctpUnrecognizedParametersWithParameters:(NSMutableArray*)parameters;
+ (FMIceLinkSCTPUnrecognizedParameters*) sctpUnrecognizedParameters:(NSMutableArray*)parameters;
- (void) setParameters:(NSMutableArray*)value;

@end


@class NSMutableDataFMExtensions;

#pragma clang diagnostic ignored "-Wshorten-64-to-32"
#pragma clang diagnostic ignored "-Wint-to-pointer-cast"

@interface FMIceLinkSCTPNoUserData : FMIceLinkSCTPErrorCause 

- (NSMutableData*) getBytes;
+ (NSMutableData*) getBytesWithCause:(FMIceLinkSCTPNoUserData*)cause;
- (id) initWithTsn:(long long)tsn;
+ (FMIceLinkSCTPNoUserData*) parseBytesWithBytes:(NSMutableData*)bytes offsetPlus:(int*)offsetPlus;
+ (FMIceLinkSCTPNoUserData*) parseBytes:(NSMutableData*)bytes offsetPlus:(int*)offsetPlus;
+ (FMIceLinkSCTPNoUserData*) sctpNoUserDataWithTsn:(long long)tsn;
- (void) setTSN:(long long)value;
- (long long) tsn;

@end


@class NSMutableDataFMExtensions;

#pragma clang diagnostic ignored "-Wshorten-64-to-32"
#pragma clang diagnostic ignored "-Wint-to-pointer-cast"

@interface FMIceLinkSCTPCookieReceivedWhileShuttingDown : FMIceLinkSCTPErrorCause 

- (NSMutableData*) getBytes;
+ (NSMutableData*) getBytesWithCause:(FMIceLinkSCTPCookieReceivedWhileShuttingDown*)cause;
- (id) init;
+ (FMIceLinkSCTPCookieReceivedWhileShuttingDown*) parseBytesWithBytes:(NSMutableData*)bytes offsetPlus:(int*)offsetPlus;
+ (FMIceLinkSCTPCookieReceivedWhileShuttingDown*) parseBytes:(NSMutableData*)bytes offsetPlus:(int*)offsetPlus;
+ (FMIceLinkSCTPCookieReceivedWhileShuttingDown*) sctpCookieReceivedWhileShuttingDown;

@end


@class NSMutableArrayFMExtensions;
@class NSMutableDataFMExtensions;

#pragma clang diagnostic ignored "-Wshorten-64-to-32"
#pragma clang diagnostic ignored "-Wint-to-pointer-cast"

@interface FMIceLinkSCTPRestartOfAnAssociationWithNewAddresses : FMIceLinkSCTPErrorCause 

- (NSMutableArray*) addresses;
- (NSMutableData*) getBytes;
+ (NSMutableData*) getBytesWithCause:(FMIceLinkSCTPRestartOfAnAssociationWithNewAddresses*)cause;
- (id) initWithAddresses:(NSMutableArray*)addresses;
+ (FMIceLinkSCTPRestartOfAnAssociationWithNewAddresses*) parseBytesWithBytes:(NSMutableData*)bytes offsetPlus:(int*)offsetPlus;
+ (FMIceLinkSCTPRestartOfAnAssociationWithNewAddresses*) parseBytes:(NSMutableData*)bytes offsetPlus:(int*)offsetPlus;
+ (FMIceLinkSCTPRestartOfAnAssociationWithNewAddresses*) sctpRestartOfAnAssociationWithNewAddressesWithAddresses:(NSMutableArray*)addresses;
- (void) setAddresses:(NSMutableArray*)value;

@end


@class NSMutableDataFMExtensions;

#pragma clang diagnostic ignored "-Wshorten-64-to-32"
#pragma clang diagnostic ignored "-Wint-to-pointer-cast"

@interface FMIceLinkSCTPUserInitiatedAbort : FMIceLinkSCTPErrorCause 

- (NSMutableData*) getBytes;
+ (NSMutableData*) getBytesWithCause:(FMIceLinkSCTPUserInitiatedAbort*)cause;
- (id) init;
- (id) initWithAbortReason:(NSMutableData*)abortReason;
+ (FMIceLinkSCTPUserInitiatedAbort*) parseBytesWithBytes:(NSMutableData*)bytes offsetPlus:(int*)offsetPlus;
+ (FMIceLinkSCTPUserInitiatedAbort*) parseBytes:(NSMutableData*)bytes offsetPlus:(int*)offsetPlus;
+ (FMIceLinkSCTPUserInitiatedAbort*) sctpUserInitiatedAbort;
+ (FMIceLinkSCTPUserInitiatedAbort*) sctpUserInitiatedAbortWithAbortReason:(NSMutableData*)abortReason;
+ (FMIceLinkSCTPUserInitiatedAbort*) sctpUserInitiatedAbortWithReason:(NSMutableData*)abortReason;
- (void) setUpperLayerAbortReason:(NSMutableData*)value;
- (NSMutableData*) upperLayerAbortReason;

@end


@class NSMutableDataFMExtensions;

#pragma clang diagnostic ignored "-Wshorten-64-to-32"
#pragma clang diagnostic ignored "-Wint-to-pointer-cast"

@interface FMIceLinkSCTPProtocolViolation : FMIceLinkSCTPErrorCause 

- (NSMutableData*) additionalInfo;
- (NSMutableData*) getBytes;
+ (NSMutableData*) getBytesWithCause:(FMIceLinkSCTPProtocolViolation*)cause;
- (id) init;
- (id) initWithAdditionalInfo:(NSMutableData*)additionalInfo;
+ (FMIceLinkSCTPProtocolViolation*) parseBytesWithBytes:(NSMutableData*)bytes offsetPlus:(int*)offsetPlus;
+ (FMIceLinkSCTPProtocolViolation*) parseBytes:(NSMutableData*)bytes offsetPlus:(int*)offsetPlus;
+ (FMIceLinkSCTPProtocolViolation*) sctpProtocolViolation;
+ (FMIceLinkSCTPProtocolViolation*) sctpProtocolViolationWithAdditionalInfo:(NSMutableData*)additionalInfo;
- (void) setAdditionalInfo:(NSMutableData*)value;

@end


@class FMIceLinkSCTPTLVParameter;
@class NSMutableDataFMExtensions;

#pragma clang diagnostic ignored "-Wshorten-64-to-32"
#pragma clang diagnostic ignored "-Wint-to-pointer-cast"

@interface FMIceLinkSCTPHeartbeatChunk : FMIceLinkSCTPControlChunk 

- (NSMutableData*) getBytes;
+ (NSMutableData*) getBytesWithChunk:(FMIceLinkSCTPHeartbeatChunk*)chunk;
- (FMIceLinkSCTPTLVParameter*) heartbeatInfo;
- (id) initWithHeartbeatInfo:(FMIceLinkSCTPTLVParameter*)heartbeatInfo;
+ (FMIceLinkSCTPHeartbeatChunk*) parseBytesWithBytes:(NSMutableData*)bytes offsetPlus:(int*)offsetPlus;
+ (FMIceLinkSCTPHeartbeatChunk*) parseBytes:(NSMutableData*)bytes offsetPlus:(int*)offsetPlus;
+ (FMIceLinkSCTPHeartbeatChunk*) sctpHeartbeatChunkWithHeartbeatInfo:(FMIceLinkSCTPTLVParameter*)heartbeatInfo;
- (void) setHeartbeatInfo:(FMIceLinkSCTPTLVParameter*)value;

@end


@class FMIceLinkSCTPTLVParameter;
@class NSMutableDataFMExtensions;

#pragma clang diagnostic ignored "-Wshorten-64-to-32"
#pragma clang diagnostic ignored "-Wint-to-pointer-cast"

@interface FMIceLinkSCTPHeartbeatAckChunk : FMIceLinkSCTPControlChunk 

- (NSMutableData*) getBytes;
+ (NSMutableData*) getBytesWithChunk:(FMIceLinkSCTPHeartbeatAckChunk*)chunk;
- (FMIceLinkSCTPTLVParameter*) heartbeatInfo;
- (id) initWithHeartbeatInfo:(FMIceLinkSCTPTLVParameter*)heartbeatInfo;
+ (FMIceLinkSCTPHeartbeatAckChunk*) parseBytesWithBytes:(NSMutableData*)bytes offsetPlus:(int*)offsetPlus;
+ (FMIceLinkSCTPHeartbeatAckChunk*) parseBytes:(NSMutableData*)bytes offsetPlus:(int*)offsetPlus;
+ (FMIceLinkSCTPHeartbeatAckChunk*) sctpHeartbeatAckChunkWithHeartbeatInfo:(FMIceLinkSCTPTLVParameter*)heartbeatInfo;
- (void) setHeartbeatInfo:(FMIceLinkSCTPTLVParameter*)value;

@end


@class FMIceLinkSCTPAuthenticatedChunksParameters;
@class FMIceLinkSCTPHostNameAddressChunkParameter;
@class NSMutableArrayFMExtensions;
@class FMIceLinkSCTPDynamicAddressReconfigurationSupportParameters;
@class FMIceLinkSCTPPartialReliabilitySupportParameters;
@class FMIceLinkSCTPCookiePreservativeChunkParameter;
@class FMIceLinkSCTPSupportedAddressTypesChunkParameter;
@class NSMutableDataFMExtensions;

#pragma clang diagnostic ignored "-Wshorten-64-to-32"
#pragma clang diagnostic ignored "-Wint-to-pointer-cast"

@interface FMIceLinkSCTPInitChunk : FMIceLinkSCTPControlChunk 

- (long long) a_rwnd;
- (FMIceLinkSCTPAuthenticatedChunksParameters*) authenticatedChunksParameters;
- (NSMutableData*) getBytes;
+ (NSMutableData*) getBytesWithChunk:(FMIceLinkSCTPInitChunk*)chunk;
- (FMIceLinkSCTPHostNameAddressChunkParameter*) hostNameAddress;
- (long long) initiateTag;
- (id) initWithInitiateTag:(long long)initiateTag a_rwnd:(long long)a_rwnd os:(int)os mis:(int)mis itsn:(long long)itsn;
- (id) initWithInitiateTag:(long long)initiateTag a_rwnd:(long long)a_rwnd os:(int)os mis:(int)mis itsn:(long long)itsn ipv4Addresses:(NSMutableArray*)ipv4Addresses partialReliabilityParameters:(FMIceLinkSCTPPartialReliabilitySupportParameters*)partialReliabilityParameters authenticatedChunksParameters:(FMIceLinkSCTPAuthenticatedChunksParameters*)authenticatedChunksParameters addressReconfigParameters:(FMIceLinkSCTPDynamicAddressReconfigurationSupportParameters*)addressReconfigParameters suggestedCookieLifeSpanIncrement:(FMIceLinkSCTPCookiePreservativeChunkParameter*)suggestedCookieLifeSpanIncrement hostNameAddress:(FMIceLinkSCTPHostNameAddressChunkParameter*)hostNameAddress supportedAddressTypes:(FMIceLinkSCTPSupportedAddressTypesChunkParameter*)supportedAddressTypes;
- (NSMutableArray*) ipv4Addresses;
- (long long) itsn;
- (int) mis;
- (int) os;
+ (FMIceLinkSCTPInitChunk*) parseBytesWithBytes:(NSMutableData*)bytes offsetPlus:(int*)offsetPlus;
+ (FMIceLinkSCTPInitChunk*) parseBytes:(NSMutableData*)bytes offsetPlus:(int*)offsetPlus;
- (FMIceLinkSCTPDynamicAddressReconfigurationSupportParameters*) sctpDynamicAddressReconfigurationParameters;
+ (FMIceLinkSCTPInitChunk*) sctpInitChunkWithInitiateTag:(long long)initiateTag a_rwnd:(long long)a_rwnd os:(int)os mis:(int)mis itsn:(long long)itsn;
+ (FMIceLinkSCTPInitChunk*) sctpInitChunkWithInitiateTag:(long long)initiateTag a_rwnd:(long long)a_rwnd os:(int)os mis:(int)mis itsn:(long long)itsn ipv4Addresses:(NSMutableArray*)ipv4Addresses partialReliabilityParameters:(FMIceLinkSCTPPartialReliabilitySupportParameters*)partialReliabilityParameters authenticatedChunksParameters:(FMIceLinkSCTPAuthenticatedChunksParameters*)authenticatedChunksParameters addressReconfigParameters:(FMIceLinkSCTPDynamicAddressReconfigurationSupportParameters*)addressReconfigParameters suggestedCookieLifeSpanIncrement:(FMIceLinkSCTPCookiePreservativeChunkParameter*)suggestedCookieLifeSpanIncrement hostNameAddress:(FMIceLinkSCTPHostNameAddressChunkParameter*)hostNameAddress supportedAddressTypes:(FMIceLinkSCTPSupportedAddressTypesChunkParameter*)supportedAddressTypes;
- (FMIceLinkSCTPPartialReliabilitySupportParameters*) sctpPartialReliabilityParameters;
- (void) setA_RWND:(long long)value;
- (void) setAuthenticatedChunksParameters:(FMIceLinkSCTPAuthenticatedChunksParameters*)value;
- (void) setHostNameAddress:(FMIceLinkSCTPHostNameAddressChunkParameter*)value;
- (void) setInitiateTag:(long long)value;
- (void) setIPv4Addresses:(NSMutableArray*)value;
- (void) setITSN:(long long)value;
- (void) setMIS:(int)value;
- (void) setOS:(int)value;
- (void) setSCTPDynamicAddressReconfigurationParameters:(FMIceLinkSCTPDynamicAddressReconfigurationSupportParameters*)value;
- (void) setSCTPPartialReliabilityParameters:(FMIceLinkSCTPPartialReliabilitySupportParameters*)value;
- (void) setSuggestedCookieLifeSpanIncrement:(FMIceLinkSCTPCookiePreservativeChunkParameter*)value;
- (void) setSupportedAddressTypes:(FMIceLinkSCTPSupportedAddressTypesChunkParameter*)value;
- (void) setUnrecognizedParametersThatNeedToBeReportedBackToSender:(NSMutableArray*)value;
- (FMIceLinkSCTPCookiePreservativeChunkParameter*) suggestedCookieLifeSpanIncrement;
- (FMIceLinkSCTPSupportedAddressTypesChunkParameter*) supportedAddressTypes;
- (NSMutableData*) supportedExtensionsChunks;
- (NSMutableArray*) unrecognizedParametersThatNeedToBeReportedBackToSender;

@end


@class FMIceLinkSCTPAuthenticatedChunksParameters;
@class FMIceLinkSCTPHostNameAddressChunkParameter;
@class NSMutableArrayFMExtensions;
@class FMIceLinkSCTPDynamicAddressReconfigurationSupportParameters;
@class FMIceLinkSCTPPartialReliabilitySupportParameters;
@class FMIceLinkSCTPStateCookieChunkParameter;
@class NSMutableDataFMExtensions;
@class FMIceLinkSCTPUnrecognizedParameterChunkParameter;

#pragma clang diagnostic ignored "-Wshorten-64-to-32"
#pragma clang diagnostic ignored "-Wint-to-pointer-cast"

@interface FMIceLinkSCTPInitAckChunk : FMIceLinkSCTPControlChunk 

- (long long) a_rwnd;
- (FMIceLinkSCTPAuthenticatedChunksParameters*) authenticatedChunksParameters;
- (NSMutableData*) getBytes;
+ (NSMutableData*) getBytesWithChunk:(FMIceLinkSCTPInitAckChunk*)chunk;
- (FMIceLinkSCTPHostNameAddressChunkParameter*) hostNameAddress;
- (long long) initiateTag;
- (id) initWithInitiateTag:(long long)initiateTag a_rnwd:(long long)a_rnwd os:(int)os mis:(int)mis itsn:(long long)itsn stateCookie:(FMIceLinkSCTPStateCookieChunkParameter*)stateCookie ipv4Addresses:(NSMutableArray*)ipv4Addresses hostNameAddress:(FMIceLinkSCTPHostNameAddressChunkParameter*)hostNameAddress unrecognizedParameter:(FMIceLinkSCTPUnrecognizedParameterChunkParameter*)unrecognizedParameter;
- (NSMutableArray*) ipv4Addresses;
- (long long) itsn;
- (int) mis;
- (int) os;
+ (FMIceLinkSCTPInitAckChunk*) parseBytesWithBytes:(NSMutableData*)bytes offsetPlus:(int*)offsetPlus;
+ (FMIceLinkSCTPInitAckChunk*) parseBytes:(NSMutableData*)bytes offsetPlus:(int*)offsetPlus;
- (FMIceLinkSCTPDynamicAddressReconfigurationSupportParameters*) sctpDynamicAddressReconfigurationParameters;
+ (FMIceLinkSCTPInitAckChunk*) sctpInitAckChunkWithInitiateTag:(long long)initiateTag a_rnwd:(long long)a_rnwd os:(int)os mis:(int)mis itsn:(long long)itsn stateCookie:(FMIceLinkSCTPStateCookieChunkParameter*)stateCookie ipv4Addresses:(NSMutableArray*)ipv4Addresses hostNameAddress:(FMIceLinkSCTPHostNameAddressChunkParameter*)hostNameAddress unrecognizedParameter:(FMIceLinkSCTPUnrecognizedParameterChunkParameter*)unrecognizedParameter;
- (FMIceLinkSCTPPartialReliabilitySupportParameters*) sctpPartialReliabilityParameters;
- (void) setA_RWND:(long long)value;
- (void) setAuthenticatedChunksParameters:(FMIceLinkSCTPAuthenticatedChunksParameters*)value;
- (void) setHostNameAddress:(FMIceLinkSCTPHostNameAddressChunkParameter*)value;
- (void) setInitiateTag:(long long)value;
- (void) setIPv4Addresses:(NSMutableArray*)value;
- (void) setITSN:(long long)value;
- (void) setMIS:(int)value;
- (void) setOS:(int)value;
- (void) setSCTPDynamicAddressReconfigurationParameters:(FMIceLinkSCTPDynamicAddressReconfigurationSupportParameters*)value;
- (void) setSCTPPartialReliabilityParameters:(FMIceLinkSCTPPartialReliabilitySupportParameters*)value;
- (void) setStateCookieChunk:(FMIceLinkSCTPStateCookieChunkParameter*)value;
- (void) setUnrecognizedParameter:(FMIceLinkSCTPUnrecognizedParameterChunkParameter*)value;
- (void) setUnrecognizedParametersThatNeedToBeReportedBackToSender:(NSMutableArray*)value;
- (FMIceLinkSCTPStateCookieChunkParameter*) stateCookieChunk;
- (NSMutableData*) supportedExtensionsChunks;
- (FMIceLinkSCTPUnrecognizedParameterChunkParameter*) unrecognizedParameter;
- (NSMutableArray*) unrecognizedParametersThatNeedToBeReportedBackToSender;

@end


@class NSMutableDataFMExtensions;

#pragma clang diagnostic ignored "-Wshorten-64-to-32"
#pragma clang diagnostic ignored "-Wint-to-pointer-cast"

@interface FMIceLinkSCTPPadChunk : FMIceLinkSCTPChunk 

- (NSMutableData*) getBytes;
+ (NSMutableData*) getBytesWithChunk:(FMIceLinkSCTPPadChunk*)chunk;
- (id) initWithLength:(int)length;
+ (FMIceLinkSCTPPadChunk*) parseBytesWithBytes:(NSMutableData*)bytes offsetPlus:(int*)offsetPlus;
+ (FMIceLinkSCTPPadChunk*) parseBytes:(NSMutableData*)bytes offsetPlus:(int*)offsetPlus;
+ (FMIceLinkSCTPPadChunk*) sctpPadChunkWithLength:(int)length;

@end


@class NSMutableArrayFMExtensions;
@class NSMutableDataFMExtensions;

#pragma clang diagnostic ignored "-Wshorten-64-to-32"
#pragma clang diagnostic ignored "-Wint-to-pointer-cast"

@interface FMIceLinkSCTPSackChunk : FMIceLinkSCTPControlChunk 

- (long long) a_rwnd;
- (long long) cumulativeTSNACK;
- (NSMutableArray*) duplicateTSNs;
- (NSMutableArray*) gapAckBlocks;
- (NSMutableData*) getBytes;
+ (NSMutableData*) getBytesWithChunk:(FMIceLinkSCTPSackChunk*)chunk sizeLimit:(int)sizeLimit;
- (NSMutableData*) getBytesWithSizeLimit:(int)sizeLimit;
- (id) initWithCumulativeTSNACK:(long long)cumulativeTSNACK a_rnwd:(long long)a_rnwd gapAckBlocks:(NSMutableArray*)gapAckBlocks duplicateTSNs:(NSMutableArray*)duplicateTSNs;
- (int) numberOfDuplicateTSNs;
- (int) numberOfGapAckBlocks;
+ (FMIceLinkSCTPSackChunk*) parseBytesWithBytes:(NSMutableData*)bytes offsetPlus:(int*)offsetPlus;
+ (FMIceLinkSCTPSackChunk*) parseBytes:(NSMutableData*)bytes offsetPlus:(int*)offsetPlus;
+ (FMIceLinkSCTPSackChunk*) sctpSackChunkWithCumulativeTSNACK:(long long)cumulativeTSNACK a_rnwd:(long long)a_rnwd gapAckBlocks:(NSMutableArray*)gapAckBlocks duplicateTSNs:(NSMutableArray*)duplicateTSNs;
- (void) setA_RWND:(long long)value;
- (void) setCumulativeTSNACK:(long long)value;
- (void) setDuplicateTSNs:(NSMutableArray*)value;
- (void) setGapAckBlocks:(NSMutableArray*)value;

@end


@class NSMutableDataFMExtensions;

#pragma clang diagnostic ignored "-Wshorten-64-to-32"
#pragma clang diagnostic ignored "-Wint-to-pointer-cast"

@interface FMIceLinkSCTPGapAckBlock : NSObject 

- (int) gapAckBlockEnd;
- (int) gapAckBlockStart;
- (NSMutableData*) getBytes;
+ (NSMutableData*) getBytesWithChunk:(FMIceLinkSCTPGapAckBlock*)chunk;
- (id) initWithStart:(int)start end:(int)end;
+ (FMIceLinkSCTPGapAckBlock*) parseBytesWithValue:(NSMutableData*)value startIndex:(int)startIndex offsetPlus:(int*)offsetPlus;
+ (FMIceLinkSCTPGapAckBlock*) sctpGapAckBlockWithStart:(int)start end:(int)end;
- (void) setGapAckBlockEnd:(int)value;
- (void) setGapAckBlockStart:(int)value;

@end


@class NSMutableDataFMExtensions;

#pragma clang diagnostic ignored "-Wshorten-64-to-32"
#pragma clang diagnostic ignored "-Wint-to-pointer-cast"

@interface FMIceLinkSCTPGenericChunk : FMIceLinkSCTPChunk 

- (NSMutableData*) chunkBytes;
- (NSMutableData*) getBytes;
+ (NSMutableData*) getBytesWithChunk:(FMIceLinkSCTPGenericChunk*)chunk;
- (id) initWithChunkBytes:(NSMutableData*)chunkBytes;
+ (FMIceLinkSCTPGenericChunk*) parseBytesWithBytes:(NSMutableData*)bytes offsetPlus:(int*)offsetPlus;
+ (FMIceLinkSCTPGenericChunk*) parseBytes:(NSMutableData*)bytes offsetPlus:(int*)offsetPlus;
+ (FMIceLinkSCTPGenericChunk*) sctpGenericChunkWithChunkBytes:(NSMutableData*)chunkBytes;
+ (FMIceLinkSCTPGenericChunk*) sctpGenericChunkWithBytes:(NSMutableData*)chunkBytes;
- (void) setChunkBytes:(NSMutableData*)value;

@end


@class NSMutableDataFMExtensions;

#pragma clang diagnostic ignored "-Wshorten-64-to-32"
#pragma clang diagnostic ignored "-Wint-to-pointer-cast"

@interface FMIceLinkSCTPTLVParameter : NSObject 

- (bool) doNotProcessFurtherParametersIfItIsNotRecognized;
- (NSMutableData*) getBytes;
- (id) init;
+ (bool) isInManualListOfUnrecognizedChunkParameterThatMustBeReportedWithParameter:(int)parameter;
+ (FMIceLinkSCTPTLVParameter*) parseBytesWithValue:(NSMutableData*)value startIndex:(int)startIndex offsetPlus:(int*)offsetPlus;
- (bool) reportToSenderIfItIsNotRecognized;
+ (FMIceLinkSCTPTLVParameter*) sctptlvParameter;
- (int) type;

@end


@class NSMutableDataFMExtensions;

#pragma clang diagnostic ignored "-Wshorten-64-to-32"
#pragma clang diagnostic ignored "-Wint-to-pointer-cast"

@interface FMIceLinkSCTPHeartbeatInfoChunkParameter : FMIceLinkSCTPTLVParameter 

- (NSMutableData*) getBytes;
+ (NSMutableData*) getBytesWithParameter:(FMIceLinkSCTPHeartbeatInfoChunkParameter*)parameter;
- (id) initWithSenderSpecificHeartbeatInfo:(NSMutableData*)senderSpecificHeartbeatInfo;
+ (FMIceLinkSCTPHeartbeatInfoChunkParameter*) parseBytesWithBytes:(NSMutableData*)bytes offsetPlus:(int*)offsetPlus;
+ (FMIceLinkSCTPHeartbeatInfoChunkParameter*) parseBytes:(NSMutableData*)bytes offsetPlus:(int*)offsetPlus;
+ (FMIceLinkSCTPHeartbeatInfoChunkParameter*) sctpHeartbeatInfoChunkParameterWithSenderSpecificHeartbeatInfo:(NSMutableData*)senderSpecificHeartbeatInfo;
- (NSMutableData*) senderSpecificHeartbeatInfo;
- (void) setSenderSpecificHeartbeatInfo:(NSMutableData*)value;

@end


@class NSStringFMExtensions;
@class NSMutableDataFMExtensions;

#pragma clang diagnostic ignored "-Wshorten-64-to-32"
#pragma clang diagnostic ignored "-Wint-to-pointer-cast"

@interface FMIceLinkSCTPIPv4ChunkParameter : FMIceLinkSCTPTLVParameter 

- (NSMutableData*) getBytes;
+ (NSMutableData*) getBytesWithParameter:(FMIceLinkSCTPIPv4ChunkParameter*)parameter;
- (id) initWithIPv4Address:(NSString*)ipv4Address;
- (NSString*) ipv4Address;
+ (FMIceLinkSCTPIPv4ChunkParameter*) parseBytesWithBytes:(NSMutableData*)bytes offsetPlus:(int*)offsetPlus;
+ (FMIceLinkSCTPIPv4ChunkParameter*) parseBytes:(NSMutableData*)bytes offsetPlus:(int*)offsetPlus;
+ (FMIceLinkSCTPIPv4ChunkParameter*) sctpiPv4ChunkParameterWithIPv4Address:(NSString*)ipv4Address;
- (void) setIPv4Address:(NSString*)value;

@end


@class NSMutableDataFMExtensions;

#pragma clang diagnostic ignored "-Wshorten-64-to-32"
#pragma clang diagnostic ignored "-Wint-to-pointer-cast"

@interface FMIceLinkSCTPRandomChunkParameter : FMIceLinkSCTPTLVParameter 

- (NSMutableData*) getBytes;
+ (NSMutableData*) getBytesWithParameter:(FMIceLinkSCTPRandomChunkParameter*)parameter;
- (id) initWithRandomNumber:(NSMutableData*)randomNumber;
+ (FMIceLinkSCTPRandomChunkParameter*) parseBytesWithBytes:(NSMutableData*)bytes offsetPlus:(int*)offsetPlus;
+ (FMIceLinkSCTPRandomChunkParameter*) parseBytes:(NSMutableData*)bytes offsetPlus:(int*)offsetPlus;
- (NSMutableData*) randomNumber;
+ (FMIceLinkSCTPRandomChunkParameter*) sctpRandomChunkParameterWithRandomNumber:(NSMutableData*)randomNumber;
- (void) setRandomNumber:(NSMutableData*)value;

@end


@class NSMutableArrayFMExtensions;
@class NSMutableDataFMExtensions;

#pragma clang diagnostic ignored "-Wshorten-64-to-32"
#pragma clang diagnostic ignored "-Wint-to-pointer-cast"

@interface FMIceLinkSCTPRequestedHMACAlgorithmChunkParameter : FMIceLinkSCTPTLVParameter 

- (NSMutableData*) getBytes;
+ (NSMutableData*) getBytesWithParameter:(FMIceLinkSCTPRequestedHMACAlgorithmChunkParameter*)parameter;
- (NSMutableArray*) hmacIdentifiers;
- (id) initWithHmacIdentifiers:(NSMutableArray*)hmacIdentifiers;
+ (FMIceLinkSCTPRequestedHMACAlgorithmChunkParameter*) parseBytesWithBytes:(NSMutableData*)bytes offsetPlus:(int*)offsetPlus;
+ (FMIceLinkSCTPRequestedHMACAlgorithmChunkParameter*) parseBytes:(NSMutableData*)bytes offsetPlus:(int*)offsetPlus;
+ (FMIceLinkSCTPRequestedHMACAlgorithmChunkParameter*) sctpRequestedHMACAlgorithmChunkParameterWithHmacIdentifiers:(NSMutableArray*)hmacIdentifiers;
- (void) setHMACIdentifiers:(NSMutableArray*)value;

@end


@class NSMutableDataFMExtensions;

#pragma clang diagnostic ignored "-Wshorten-64-to-32"
#pragma clang diagnostic ignored "-Wint-to-pointer-cast"

@interface FMIceLinkSCTPChunkListChunkParameter : FMIceLinkSCTPTLVParameter 

- (NSMutableData*) chunkList;
- (NSMutableData*) getBytes;
+ (NSMutableData*) getBytesWithParameter:(FMIceLinkSCTPChunkListChunkParameter*)parameter;
- (id) initWithChunkList:(NSMutableData*)chunkList;
+ (FMIceLinkSCTPChunkListChunkParameter*) parseBytesWithBytes:(NSMutableData*)bytes offsetPlus:(int*)offsetPlus;
+ (FMIceLinkSCTPChunkListChunkParameter*) parseBytes:(NSMutableData*)bytes offsetPlus:(int*)offsetPlus;
+ (FMIceLinkSCTPChunkListChunkParameter*) sctpChunkListChunkParameterWithChunkList:(NSMutableData*)chunkList;
- (void) setChunkList:(NSMutableData*)value;

@end


@class NSMutableDataFMExtensions;

#pragma clang diagnostic ignored "-Wshorten-64-to-32"
#pragma clang diagnostic ignored "-Wint-to-pointer-cast"

@interface FMIceLinkSCTPPADChunkParameter : FMIceLinkSCTPTLVParameter 

- (NSMutableData*) getBytes;
+ (NSMutableData*) getBytesWithParameter:(FMIceLinkSCTPPADChunkParameter*)parameter;
- (id) initWithLength:(int)length;
+ (FMIceLinkSCTPPADChunkParameter*) parseBytesWithBytes:(NSMutableData*)bytes offsetPlus:(int*)offsetPlus;
+ (FMIceLinkSCTPPADChunkParameter*) parseBytes:(NSMutableData*)bytes offsetPlus:(int*)offsetPlus;
+ (FMIceLinkSCTPPADChunkParameter*) sctppadChunkParameterWithLength:(int)length;

@end


@class NSMutableDataFMExtensions;

#pragma clang diagnostic ignored "-Wshorten-64-to-32"
#pragma clang diagnostic ignored "-Wint-to-pointer-cast"

@interface FMIceLinkSCTPForwardTSNSupportedChunkParameter : FMIceLinkSCTPTLVParameter 

- (NSMutableData*) getBytes;
+ (NSMutableData*) getBytesWithParameter:(FMIceLinkSCTPForwardTSNSupportedChunkParameter*)parameter;
- (id) init;
+ (FMIceLinkSCTPForwardTSNSupportedChunkParameter*) parseBytesWithBytes:(NSMutableData*)bytes offsetPlus:(int*)offsetPlus;
+ (FMIceLinkSCTPForwardTSNSupportedChunkParameter*) parseBytes:(NSMutableData*)bytes offsetPlus:(int*)offsetPlus;
+ (FMIceLinkSCTPForwardTSNSupportedChunkParameter*) sctpForwardTSNSupportedChunkParameter;

@end


@class NSMutableDataFMExtensions;

#pragma clang diagnostic ignored "-Wshorten-64-to-32"
#pragma clang diagnostic ignored "-Wint-to-pointer-cast"

@interface FMIceLinkSCTPSupportedExtensionsChunkParameter : FMIceLinkSCTPTLVParameter 

- (NSMutableData*) getBytes;
+ (NSMutableData*) getBytesWithParameter:(FMIceLinkSCTPSupportedExtensionsChunkParameter*)parameter;
- (id) initWithExtensions:(NSMutableData*)extensions;
+ (FMIceLinkSCTPSupportedExtensionsChunkParameter*) parseBytesWithBytes:(NSMutableData*)bytes offsetPlus:(int*)offsetPlus;
+ (FMIceLinkSCTPSupportedExtensionsChunkParameter*) parseBytes:(NSMutableData*)bytes offsetPlus:(int*)offsetPlus;
+ (FMIceLinkSCTPSupportedExtensionsChunkParameter*) sctpSupportedExtensionsChunkParameterWithExtensions:(NSMutableData*)extensions;
- (void) setSupportedChunkExtensions:(NSMutableData*)value;
- (NSMutableData*) supportedChunkExtensions;

@end


@class NSMutableDataFMExtensions;

#pragma clang diagnostic ignored "-Wshorten-64-to-32"
#pragma clang diagnostic ignored "-Wint-to-pointer-cast"

@interface FMIceLinkSCTPCookiePreservativeChunkParameter : FMIceLinkSCTPTLVParameter 

- (NSMutableData*) getBytes;
+ (NSMutableData*) getBytesWithParameter:(FMIceLinkSCTPCookiePreservativeChunkParameter*)parameter;
- (id) initWithCookieIncrement:(long long)cookieIncrement;
+ (FMIceLinkSCTPCookiePreservativeChunkParameter*) parseBytesWithBytes:(NSMutableData*)bytes offsetPlus:(int*)offsetPlus;
+ (FMIceLinkSCTPCookiePreservativeChunkParameter*) parseBytes:(NSMutableData*)bytes offsetPlus:(int*)offsetPlus;
+ (FMIceLinkSCTPCookiePreservativeChunkParameter*) sctpCookiePreservativeChunkParameterWithCookieIncrement:(long long)cookieIncrement;
- (void) setSuggestedCookieLifeSpanIncrement:(long long)value;
- (long long) suggestedCookieLifeSpanIncrement;

@end


@class NSStringFMExtensions;
@class NSMutableDataFMExtensions;

#pragma clang diagnostic ignored "-Wshorten-64-to-32"
#pragma clang diagnostic ignored "-Wint-to-pointer-cast"

@interface FMIceLinkSCTPHostNameAddressChunkParameter : FMIceLinkSCTPTLVParameter 

- (NSMutableData*) getBytes;
+ (NSMutableData*) getBytesWithParameter:(FMIceLinkSCTPHostNameAddressChunkParameter*)parameter;
- (NSString*) hostName;
- (id) initWithHostName:(NSString*)hostName;
+ (FMIceLinkSCTPHostNameAddressChunkParameter*) parseBytesWithBytes:(NSMutableData*)bytes offsetPlus:(int*)offsetPlus;
+ (FMIceLinkSCTPHostNameAddressChunkParameter*) parseBytes:(NSMutableData*)bytes offsetPlus:(int*)offsetPlus;
+ (FMIceLinkSCTPHostNameAddressChunkParameter*) sctpHostNameAddressChunkParameterWithHostName:(NSString*)hostName;
- (void) setHostName:(NSString*)value;

@end


@class NSMutableArrayFMExtensions;
@class NSMutableDataFMExtensions;

#pragma clang diagnostic ignored "-Wshorten-64-to-32"
#pragma clang diagnostic ignored "-Wint-to-pointer-cast"

@interface FMIceLinkSCTPSupportedAddressTypesChunkParameter : FMIceLinkSCTPTLVParameter 

- (NSMutableArray*) addressTypes;
- (NSMutableData*) getBytes;
+ (NSMutableData*) getBytesWithParameter:(FMIceLinkSCTPSupportedAddressTypesChunkParameter*)parameter;
- (id) initWithAddressTypes:(NSMutableArray*)addressTypes;
+ (FMIceLinkSCTPSupportedAddressTypesChunkParameter*) parseBytesWithBytes:(NSMutableData*)bytes offsetPlus:(int*)offsetPlus;
+ (FMIceLinkSCTPSupportedAddressTypesChunkParameter*) parseBytes:(NSMutableData*)bytes offsetPlus:(int*)offsetPlus;
+ (FMIceLinkSCTPSupportedAddressTypesChunkParameter*) sctpSupportedAddressTypesChunkParameterWithAddressTypes:(NSMutableArray*)addressTypes;
- (void) setAddressTypes:(NSMutableArray*)value;

@end


@class FMIceLinkSCTPStateCookie;
@class NSMutableDataFMExtensions;

#pragma clang diagnostic ignored "-Wshorten-64-to-32"
#pragma clang diagnostic ignored "-Wint-to-pointer-cast"

@interface FMIceLinkSCTPStateCookieChunkParameter : FMIceLinkSCTPTLVParameter 

- (NSMutableData*) getBytes;
+ (NSMutableData*) getBytesWithParameter:(FMIceLinkSCTPStateCookieChunkParameter*)parameter;
- (id) initWithStateCookie:(FMIceLinkSCTPStateCookie*)stateCookie;
- (id) initWithStateCookieBytes:(NSMutableData*)stateCookieBytes;
+ (FMIceLinkSCTPStateCookieChunkParameter*) parseBytesWithBytes:(NSMutableData*)bytes offsetPlus:(int*)offsetPlus;
+ (FMIceLinkSCTPStateCookieChunkParameter*) parseBytes:(NSMutableData*)bytes offsetPlus:(int*)offsetPlus;
+ (FMIceLinkSCTPStateCookieChunkParameter*) parseBytesWithValue:(NSMutableData*)value startIndex:(int)startIndex offsetPlus:(int*)offsetPlus;
+ (FMIceLinkSCTPStateCookieChunkParameter*) sctpStateCookieChunkParameterWithStateCookie:(FMIceLinkSCTPStateCookie*)stateCookie;
+ (FMIceLinkSCTPStateCookieChunkParameter*) sctpStateCookieChunkParameterWithStateCookieBytes:(NSMutableData*)stateCookieBytes;
- (void) setStateCookie:(FMIceLinkSCTPStateCookie*)value;
- (void) setStateCookieBytes:(NSMutableData*)value;
- (FMIceLinkSCTPStateCookie*) stateCookie;
- (NSMutableData*) stateCookieBytes;

@end


@class NSMutableDataFMExtensions;
@class FMIceLinkSCTPTLVParameter;

#pragma clang diagnostic ignored "-Wshorten-64-to-32"
#pragma clang diagnostic ignored "-Wint-to-pointer-cast"

@interface FMIceLinkSCTPGenericChunkParameter : FMIceLinkSCTPTLVParameter 

- (NSMutableData*) getBytes;
+ (NSMutableData*) getBytesWithParameter:(FMIceLinkSCTPGenericChunkParameter*)parameter;
- (id) initWithBytes:(NSMutableData*)bytes;
- (NSMutableData*) meaningfulData;
+ (FMIceLinkSCTPGenericChunkParameter*) parseBytesWithBytes:(NSMutableData*)bytes offsetPlus:(int*)offsetPlus;
+ (FMIceLinkSCTPGenericChunkParameter*) parseBytes:(NSMutableData*)bytes offsetPlus:(int*)offsetPlus;
+ (FMIceLinkSCTPGenericChunkParameter*) sctpGenericChunkParameterWithBytes:(NSMutableData*)bytes;
- (void) setMeaningfulData:(NSMutableData*)value;
+ (FMIceLinkSCTPGenericChunkParameter*) toGenericParameterWithParameter:(FMIceLinkSCTPTLVParameter*)parameter;
+ (FMIceLinkSCTPGenericChunkParameter*) toGenericParameter:(FMIceLinkSCTPTLVParameter*)parameter;

@end


@class NSMutableArrayFMExtensions;
@class NSMutableDataFMExtensions;

#pragma clang diagnostic ignored "-Wshorten-64-to-32"
#pragma clang diagnostic ignored "-Wint-to-pointer-cast"

@interface FMIceLinkSCTPUnrecognizedParameterChunkParameter : FMIceLinkSCTPTLVParameter 

- (NSMutableData*) getBytes;
+ (NSMutableData*) getBytesWithParameter:(FMIceLinkSCTPUnrecognizedParameterChunkParameter*)parameter;
- (id) initWithChunkParameter:(NSMutableArray*)chunkParameter;
+ (FMIceLinkSCTPUnrecognizedParameterChunkParameter*) parseBytesWithBytes:(NSMutableData*)bytes offsetPlus:(int*)offsetPlus;
+ (FMIceLinkSCTPUnrecognizedParameterChunkParameter*) parseBytes:(NSMutableData*)bytes offsetPlus:(int*)offsetPlus;
+ (FMIceLinkSCTPUnrecognizedParameterChunkParameter*) sctpUnrecognizedParameterChunkParameterWithChunkParameter:(NSMutableArray*)chunkParameter;
+ (FMIceLinkSCTPUnrecognizedParameterChunkParameter*) sctpUnrecognizedParameterChunkParameter:(NSMutableArray*)chunkParameter;
- (void) setUnrecognizedParameters:(NSMutableArray*)value;
- (NSMutableArray*) unrecognizedParameters;

@end


@class NSMutableDataFMExtensions;

#pragma clang diagnostic ignored "-Wshorten-64-to-32"
#pragma clang diagnostic ignored "-Wint-to-pointer-cast"

@interface FMIceLinkSCTPShutdownChunk : FMIceLinkSCTPControlChunk 

- (long long) cumulativeTSNAck;
- (NSMutableData*) getBytes;
+ (NSMutableData*) getBytesWithChunk:(FMIceLinkSCTPShutdownChunk*)chunk;
- (id) initWithCumulativeTSNAck:(long long)cumulativeTSNAck;
+ (FMIceLinkSCTPShutdownChunk*) parseBytesWithBytes:(NSMutableData*)bytes offsetPlus:(int*)offsetPlus;
+ (FMIceLinkSCTPShutdownChunk*) parseBytes:(NSMutableData*)bytes offsetPlus:(int*)offsetPlus;
+ (FMIceLinkSCTPShutdownChunk*) sctpShutdownChunkWithCumulativeTSNAck:(long long)cumulativeTSNAck;
- (void) setCumulativeTSNAck:(long long)value;

@end


@class NSMutableDataFMExtensions;

#pragma clang diagnostic ignored "-Wshorten-64-to-32"
#pragma clang diagnostic ignored "-Wint-to-pointer-cast"

@interface FMIceLinkSCTPShutdownAckChunk : FMIceLinkSCTPControlChunk 

- (NSMutableData*) getBytes;
+ (NSMutableData*) getBytesWithChunk:(FMIceLinkSCTPShutdownAckChunk*)chunk;
- (id) init;
+ (FMIceLinkSCTPShutdownAckChunk*) parseBytesWithBytes:(NSMutableData*)bytes offsetPlus:(int*)offsetPlus;
+ (FMIceLinkSCTPShutdownAckChunk*) parseBytes:(NSMutableData*)bytes offsetPlus:(int*)offsetPlus;
+ (FMIceLinkSCTPShutdownAckChunk*) sctpShutdownAckChunk;

@end


@class NSMutableDataFMExtensions;

#pragma clang diagnostic ignored "-Wshorten-64-to-32"
#pragma clang diagnostic ignored "-Wint-to-pointer-cast"

@interface FMIceLinkSCTPShutdownCompleteChunk : FMIceLinkSCTPControlChunk 

- (NSMutableData*) getBytes;
+ (NSMutableData*) getBytesWithChunk:(FMIceLinkSCTPShutdownCompleteChunk*)chunk;
- (id) initWithVerificationTagReflected:(bool)verificationTagReflected;
+ (FMIceLinkSCTPShutdownCompleteChunk*) parseBytesWithBytes:(NSMutableData*)bytes offsetPlus:(int*)offsetPlus;
+ (FMIceLinkSCTPShutdownCompleteChunk*) parseBytes:(NSMutableData*)bytes offsetPlus:(int*)offsetPlus;
+ (FMIceLinkSCTPShutdownCompleteChunk*) sctpShutdownCompleteChunkWithVerificationTagReflected:(bool)verificationTagReflected;
- (void) setVerificationTagReflected:(bool)value;
- (bool) verificationTagReflected;

@end


@class NSMutableDataFMExtensions;

#pragma clang diagnostic ignored "-Wshorten-64-to-32"
#pragma clang diagnostic ignored "-Wint-to-pointer-cast"

@interface FMIceLinkSCTPCommonHeader : NSObject 

- (long long) checksum;
- (int) destinationPortNumber;
- (NSMutableData*) getBytes;
+ (NSMutableData*) getBytesWithHeader:(FMIceLinkSCTPCommonHeader*)header;
- (id) initWithSourcePort:(int)sourcePort destionationPort:(int)destionationPort vTag:(long long)vTag;
- (id) initWithSourcePort:(int)sourcePort destionationPort:(int)destionationPort vTag:(long long)vTag checksum:(long long)checksum;
+ (FMIceLinkSCTPCommonHeader*) parseBytesWithBytes:(NSMutableData*)bytes offsetPlus:(int*)offsetPlus;
+ (FMIceLinkSCTPCommonHeader*) parseBytes:(NSMutableData*)bytes offsetPlus:(int*)offsetPlus;
+ (FMIceLinkSCTPCommonHeader*) sctpCommonHeaderWithSourcePort:(int)sourcePort destionationPort:(int)destionationPort vTag:(long long)vTag;
+ (FMIceLinkSCTPCommonHeader*) sctpCommonHeaderWithSourcePort:(int)sourcePort destionationPort:(int)destionationPort vTag:(long long)vTag checksum:(long long)checksum;
- (void) setChecksum:(long long)value;
- (void) setDestinationPortNumber:(int)value;
- (void) setSourcePortNumber:(int)value;
- (void) setVerificationTag:(long long)value;
- (int) sourcePortNumber;
- (long long) verificationTag;

@end


@class NSMutableDictionaryFMExtensions;
@class FMIceLinkSCTPLinkedList;
@class FMIceLinkSCTPDataChunk;
@class NSMutableArrayFMExtensions;

#pragma clang diagnostic ignored "-Wshorten-64-to-32"
#pragma clang diagnostic ignored "-Wint-to-pointer-cast"

@interface FMIceLinkSCTPDataQueue : NSObject 

- (void) addWithDataChunk:(FMIceLinkSCTPDataChunk*)dataChunk;
- (long long) allAckedUpTo;
- (bool) chunkExistsWithTsn:(long long)tsn;
- (int) count;
- (long long) earliestTSN;
- (FMIceLinkSCTPDataChunk*) getChunkWithTsn:(long long)tsn;
- (FMIceLinkSCTPDataChunk*) getFirstUnACKed;
- (FMIceLinkSCTPDataChunk*) getNextChunkWithTsn:(long long)tsn;
- (FMIceLinkSCTPDataChunk*) getPreviousChunkWithTsn:(long long)tsn;
- (id) init;
- (long long) notAckedPast;
- (void) purgeWithTsn:(long long)tsn;
- (void) removeAll;
- (bool) removeWithTsn:(long long)tsn;
+ (FMIceLinkSCTPDataQueue*) sctpDataQueue;
- (void) setAllAckedUpTo:(long long)value;
- (void) setNotAckedPast:(long long)value;
- (NSMutableArray*) tsNs;

@end


@class NSMutableDataFMExtensions;

/// <summary>
/// An SCTP message.
/// </summary>
#pragma clang diagnostic ignored "-Wshorten-64-to-32"
#pragma clang diagnostic ignored "-Wint-to-pointer-cast"

@interface FMIceLinkSCTPMessage : NSObject 

/// <summary>
/// Initializes a new instance of the <see cref="FMIceLinkSCTPMessage" /> class.
/// </summary>
/// <param name="payload">The data payload.</param>
- (id) initWithPayload:(NSMutableData*)payload;
/// <summary>
/// Gets the data payload.
/// </summary>
- (NSMutableData*) payload;
/// <summary>
/// Gets the type of the payload.
/// </summary>
- (long long) payloadType;
/// <summary>
/// Initializes a new instance of the <see cref="FMIceLinkSCTPMessage" /> class.
/// </summary>
/// <param name="payload">The data payload.</param>
+ (FMIceLinkSCTPMessage*) sctpMessageWithPayload:(NSMutableData*)payload;
/// <summary>
/// Sets the data payload.
/// </summary>
- (void) setPayload:(NSMutableData*)value;
/// <summary>
/// Sets the type of the payload.
/// </summary>
- (void) setPayloadType:(long long)value;
/// <summary>
/// Sets a value indicating whether out-of-order delivery is acceptable.
/// </summary>
- (void) setUnordered:(bool)value;
/// <summary>
/// Gets a value indicating whether out-of-order delivery is acceptable.
/// </summary>
- (bool) unordered;

@end


@class NSMutableArrayFMExtensions;
@class FMIceLinkSCTPCommonHeader;
@class NSMutableDataFMExtensions;

#pragma clang diagnostic ignored "-Wshorten-64-to-32"
#pragma clang diagnostic ignored "-Wint-to-pointer-cast"

@interface FMIceLinkSCTPPacket : NSObject 

- (NSMutableArray*) chunks;
- (NSMutableData*) getBytes;
- (FMIceLinkSCTPCommonHeader*) header;
- (id) initWithHeader:(FMIceLinkSCTPCommonHeader*)header chunks:(NSMutableArray*)chunks;
+ (FMIceLinkSCTPPacket*) parseBytesWithValue:(NSMutableData*)value;
+ (FMIceLinkSCTPPacket*) parseBytesWithValue:(NSMutableData*)value startIndex:(int)startIndex length:(int)length;
+ (FMIceLinkSCTPPacket*) sctpPacketWithHeader:(FMIceLinkSCTPCommonHeader*)header chunks:(NSMutableArray*)chunks;
- (void) setChunks:(NSMutableArray*)value;
- (void) setHeader:(FMIceLinkSCTPCommonHeader*)value;
- (NSMutableArray*) unrecognizedChunksThatShouldBeReportedToSender;
+ (bool) verifyCRC32cChecksumWithSctpBytes:(NSMutableData*)sctpBytes offset:(int)offset len:(int)len;

@end


@class NSMutableArrayFMExtensions;
@class FMIceLinkSCTPControlChunk;

#pragma clang diagnostic ignored "-Wshorten-64-to-32"
#pragma clang diagnostic ignored "-Wint-to-pointer-cast"

@interface FMIceLinkSCTPSendControlChunkQueue : NSObject 

- (int) count;
- (FMIceLinkSCTPControlChunk*) dequeue;
- (void) enqueueWithControlChunk:(FMIceLinkSCTPControlChunk*)controlChunk;
- (id) init;
- (FMIceLinkSCTPControlChunk*) peek;
+ (FMIceLinkSCTPSendControlChunkQueue*) sctpSendControlChunkQueue;

@end


@class NSMutableDataFMExtensions;

#pragma clang diagnostic ignored "-Wshorten-64-to-32"
#pragma clang diagnostic ignored "-Wint-to-pointer-cast"

@interface FMIceLinkSCTPStateCookie : NSObject 

- (NSMutableData*) getBytes;
+ (NSMutableData*) getBytesWithCookie:(FMIceLinkSCTPStateCookie*)cookie;
- (id) initWithMyVTag:(long long)myVTag peerVTag:(long long)peerVTag peerRWND:(long long)peerRWND lastReceivedTSNFromPeer:(long long)lastReceivedTSNFromPeer outboundChannels:(int)outboundChannels timestamp:(long long)timestamp secretKey:(NSMutableData*)secretKey;
- (long long) lastReceivedTSNFromPeer;
- (long long) myVerificationTag;
- (int) numberOfOutboundChannels;
+ (FMIceLinkSCTPStateCookie*) parseBytesWithBytes:(NSMutableData*)bytes offsetPlus:(int*)offsetPlus secretKey:(NSMutableData*)secretKey;
+ (FMIceLinkSCTPStateCookie*) parseBytes:(NSMutableData*)bytes offsetPlus:(int*)offsetPlus secretKey:(NSMutableData*)secretKey;
+ (FMIceLinkSCTPStateCookie*) parseBytesWithValue:(NSMutableData*)value startIndex:(int)startIndex offsetPlus:(int*)offsetPlus secretKey:(NSMutableData*)secretKey;
- (long long) peerRWND;
- (long long) peerVerificationTag;
+ (FMIceLinkSCTPStateCookie*) sctpStateCookieWithMyVTag:(long long)myVTag peerVTag:(long long)peerVTag peerRWND:(long long)peerRWND lastReceivedTSNFromPeer:(long long)lastReceivedTSNFromPeer outboundChannels:(int)outboundChannels timestamp:(long long)timestamp secretKey:(NSMutableData*)secretKey;
- (NSMutableData*) secretKey;
- (void) setLastReceivedTSNFromPeer:(long long)value;
- (void) setMyVerificationTag:(long long)value;
- (void) setNumberOfOutboundChannels:(int)value;
- (void) setPeerRWND:(long long)value;
- (void) setPeerVerificationTag:(long long)value;
- (void) setSecretKey:(NSMutableData*)value;
- (void) setTimestamp:(long long)value;
- (long long) timestamp;

@end



#pragma clang diagnostic ignored "-Wshorten-64-to-32"
#pragma clang diagnostic ignored "-Wint-to-pointer-cast"

@interface FMIceLinkSCTPStates : NSObject 

+ (bool) canSendDataChunksInStateWithState:(int)state;
+ (bool) canSendDataChunksInState:(int)state;
- (id) init;
+ (FMIceLinkSCTPStates*) sctpStates;

@end


@class NSStringFMExtensions;

/// <summary>
/// The attribute can be associated with an m- line to indicate
/// the maximum message size (indicated in bytes) that an SCTP endpoint
/// is willing to receive on the SCTP association associated with the m-
/// line. Different attribute values can be used in each direction.
/// </summary>
#pragma clang diagnostic ignored "-Wshorten-64-to-32"
#pragma clang diagnostic ignored "-Wint-to-pointer-cast"

@interface FMIceLinkSDPSctpMaxMessageSizeAttribute : FMIceLinkSDPAttribute 

/// <summary>
/// Initializes a new instance of the <see cref="FMIceLinkSDPSctpMaxMessageSizeAttribute" /> class.
/// </summary>
/// <param name="value">The attribute value.</param>
+ (FMIceLinkSDPSctpMaxMessageSizeAttribute*) fromValueWithValue:(NSString*)value;
/// <summary>
/// Initializes a new instance of the <see cref="FMIceLinkSDPSctpMaxMessageSizeAttribute" /> class.
/// </summary>
/// <param name="value">The attribute value.</param>
+ (FMIceLinkSDPSctpMaxMessageSizeAttribute*) fromValue:(NSString*)value;
- (NSString*) getValue;
/// <summary>
/// Initializes a new instance of the <see cref="FMIceLinkSDPSctpMaxMessageSizeAttribute" /> class.
/// </summary>
/// <param name="maxMessageSize">The maximum message size in bytes.</param>
- (id) initWithMaxMessageSize:(long long)maxMessageSize;
/// <summary>
/// Gets the maximum message size in bytes.
/// </summary>
- (long long) maxMessageSize;
/// <summary>
/// Initializes a new instance of the <see cref="FMIceLinkSDPSctpMaxMessageSizeAttribute" /> class.
/// </summary>
/// <param name="maxMessageSize">The maximum message size in bytes.</param>
+ (FMIceLinkSDPSctpMaxMessageSizeAttribute*) sdpSctpMaxMessageSizeAttributeWithMaxMessageSize:(long long)maxMessageSize;

@end


@class NSStringFMExtensions;

/// <summary>
/// An SDP media element.
/// </summary>
#pragma clang diagnostic ignored "-Wshorten-64-to-32"
#pragma clang diagnostic ignored "-Wint-to-pointer-cast"

@interface FMIceLinkSDPMedia : NSObject 

/// <summary>
/// Gets the format description.
/// </summary>
- (NSString*) formatDescription;
/// <summary>
/// Initializes a new instance of the <see cref="FMIceLinkSDPMedia" /> class.
/// </summary>
/// <param name="mediaType">The media type. See <see cref="FMIceLinkSDPMediaType" /> for possible values.</param>
/// <param name="transportPort">The transport port.</param>
/// <param name="transportProtocol">The transport protocol.</param>
- (id) initWithMediaType:(NSString*)mediaType transportPort:(int)transportPort transportProtocol:(NSString*)transportProtocol;
/// <summary>
/// Initializes a new instance of the <see cref="FMIceLinkSDPMedia" /> class.
/// </summary>
/// <param name="mediaType">The media type. See <see cref="FMIceLinkSDPMediaType" /> for possible values.</param>
/// <param name="transportPort">The transport port.</param>
/// <param name="transportProtocol">The transport protocol.</param>
/// <param name="formatDescription">The format description.</param>
- (id) initWithMediaType:(NSString*)mediaType transportPort:(int)transportPort transportProtocol:(NSString*)transportProtocol formatDescription:(NSString*)formatDescription;
/// <summary>
/// Gets the media type. See <see cref="FMIceLinkSDPMediaType" /> for possible values.
/// </summary>
- (NSString*) mediaType;
/// <summary>
/// Gets the number of ports.
/// </summary>
- (short) numberOfPorts;
/// <summary>
/// Creates an <see cref="FMIceLinkSDPMedia" /> instance from a string.
/// </summary>
/// <param name="s">The string to parse.</param>
/// <returns></returns>
+ (FMIceLinkSDPMedia*) parseWithS:(NSString*)s;
/// <summary>
/// Gets the SCTP port.
/// </summary>
/// <value>
/// The SCTP port.
/// </value>
- (int) sctpPort;
/// <summary>
/// Initializes a new instance of the <see cref="FMIceLinkSDPMedia" /> class.
/// </summary>
/// <param name="mediaType">The media type. See <see cref="FMIceLinkSDPMediaType" /> for possible values.</param>
/// <param name="transportPort">The transport port.</param>
/// <param name="transportProtocol">The transport protocol.</param>
+ (FMIceLinkSDPMedia*) sdpMediaWithMediaType:(NSString*)mediaType transportPort:(int)transportPort transportProtocol:(NSString*)transportProtocol;
/// <summary>
/// Initializes a new instance of the <see cref="FMIceLinkSDPMedia" /> class.
/// </summary>
/// <param name="mediaType">The media type. See <see cref="FMIceLinkSDPMediaType" /> for possible values.</param>
/// <param name="transportPort">The transport port.</param>
/// <param name="transportProtocol">The transport protocol.</param>
+ (FMIceLinkSDPMedia*) sdpMediaWithType:(NSString*)mediaType transportPort:(int)transportPort transportProtocol:(NSString*)transportProtocol;
/// <summary>
/// Initializes a new instance of the <see cref="FMIceLinkSDPMedia" /> class.
/// </summary>
/// <param name="mediaType">The media type. See <see cref="FMIceLinkSDPMediaType" /> for possible values.</param>
/// <param name="transportPort">The transport port.</param>
/// <param name="transportProtocol">The transport protocol.</param>
/// <param name="formatDescription">The format description.</param>
+ (FMIceLinkSDPMedia*) sdpMediaWithMediaType:(NSString*)mediaType transportPort:(int)transportPort transportProtocol:(NSString*)transportProtocol formatDescription:(NSString*)formatDescription;
/// <summary>
/// Initializes a new instance of the <see cref="FMIceLinkSDPMedia" /> class.
/// </summary>
/// <param name="mediaType">The media type. See <see cref="FMIceLinkSDPMediaType" /> for possible values.</param>
/// <param name="transportPort">The transport port.</param>
/// <param name="transportProtocol">The transport protocol.</param>
/// <param name="formatDescription">The format description.</param>
+ (FMIceLinkSDPMedia*) sdpMediaWithType:(NSString*)mediaType transportPort:(int)transportPort transportProtocol:(NSString*)transportProtocol formatDescription:(NSString*)formatDescription;
/// <summary>
/// Sets the format description.
/// </summary>
- (void) setFormatDescription:(NSString*)value;
/// <summary>
/// Sets the media type. See <see cref="FMIceLinkSDPMediaType" /> for possible values.
/// </summary>
- (void) setMediaType:(NSString*)value;
/// <summary>
/// Sets the number of ports.
/// </summary>
- (void) setNumberOfPorts:(short)value;
/// <summary>
/// Sets the SCTP port.
/// </summary>
/// <value>
/// The SCTP port.
/// </value>
- (void) setSctpPort:(int)value;
/// <summary>
/// Sets the transport port.
/// </summary>
- (void) setTransportPort:(int)value;
/// <summary>
/// Converts this instance to a string.
/// </summary>
/// <returns></returns>
- (NSString*) toString;
/// <summary>
/// Converts this instance to a string.
/// </summary>
/// <returns></returns>
- (NSString*) description;
/// <summary>
/// Gets the transport port.
/// </summary>
- (int) transportPort;
/// <summary>
/// Gets the transport protocol.
/// </summary>
- (NSString*) transportProtocol;

@end


@class NSStringFMExtensions;

/// <summary>
/// An SDP media description with a transport protocol of "RTP/AVP" or "RTP/SAVP".
/// </summary>
#pragma clang diagnostic ignored "-Wshorten-64-to-32"
#pragma clang diagnostic ignored "-Wint-to-pointer-cast"

@interface FMIceLinkSDPSctpMedia : FMIceLinkSDPMedia 

/// <summary>
/// Gets the protocol keyword for the SCTP over DTLS data profile.
/// </summary>
+ (NSString*) dtlsSctpTransportProtocol;
/// <summary>
/// Initializes a new instance of the <see cref="FMIceLinkSDPSctpMedia" /> class.
/// </summary>
/// <param name="mediaType">The media type. See <see cref="FMIceLinkSDPMediaType" /> for possible values.</param>
/// <param name="transportPort">The transport port.</param>
/// <param name="transportProtocol">The transport protocol.</param>
/// <param name="associationUsage">The association usage.</param>
- (id) initWithMediaType:(NSString*)mediaType transportPort:(int)transportPort transportProtocol:(NSString*)transportProtocol associationUsage:(NSString*)associationUsage;
/// <summary>
/// Gets the protocol keyword for the DTLS over SCTP data profile.
/// </summary>
+ (NSString*) sctpDtlsTransportProtocol;
/// <summary>
/// Gets the protocol keyword for the SCTP data profile.
/// </summary>
+ (NSString*) sctpTransportProtocol;
/// <summary>
/// Initializes a new instance of the <see cref="FMIceLinkSDPSctpMedia" /> class.
/// </summary>
/// <param name="mediaType">The media type. See <see cref="FMIceLinkSDPMediaType" /> for possible values.</param>
/// <param name="transportPort">The transport port.</param>
/// <param name="transportProtocol">The transport protocol.</param>
/// <param name="associationUsage">The association usage.</param>
+ (FMIceLinkSDPSctpMedia*) sdpSctpMediaWithMediaType:(NSString*)mediaType transportPort:(int)transportPort transportProtocol:(NSString*)transportProtocol associationUsage:(NSString*)associationUsage;
/// <summary>
/// Initializes a new instance of the <see cref="FMIceLinkSDPSctpMedia" /> class.
/// </summary>
/// <param name="mediaType">The media type. See <see cref="FMIceLinkSDPMediaType" /> for possible values.</param>
/// <param name="transportPort">The transport port.</param>
/// <param name="transportProtocol">The transport protocol.</param>
/// <param name="associationUsage">The association usage.</param>
+ (FMIceLinkSDPSctpMedia*) sdpSctpMediaWithType:(NSString*)mediaType transportPort:(int)transportPort transportProtocol:(NSString*)transportProtocol associationUsage:(NSString*)associationUsage;
/// <summary>
/// Gets the protocol keyword for the SCTP over DTLS over TCP data profile.
/// </summary>
+ (NSString*) tcpDtlsSctpTransportProtocol;
/// <summary>
/// Gets the protocol keyword for the SCTP over DTLS over UDP data profile.
/// </summary>
+ (NSString*) udpDtlsSctpTransportProtocol;

@end


@class NSStringFMExtensions;

/// <summary>
/// The attribute can be associated with an SDP media description (m-
/// line) with a 'UDP/DTLS/SCTP' or a 'TCP/DTLS/SCTP' proto value, in
/// which case the m- line port value indicates the port of the
/// underlying transport-layer protocol (UDP or TCP), on which SCTP is
/// carried, and the 'sctp-port' value indicates the SCTP port.
/// </summary>
#pragma clang diagnostic ignored "-Wshorten-64-to-32"
#pragma clang diagnostic ignored "-Wint-to-pointer-cast"

@interface FMIceLinkSDPSctpPortAttribute : FMIceLinkSDPAttribute 

/// <summary>
/// Initializes a new instance of the <see cref="FMIceLinkSDPSctpPortAttribute" /> class.
/// </summary>
/// <param name="value">The attribute value.</param>
+ (FMIceLinkSDPSctpPortAttribute*) fromValueWithValue:(NSString*)value;
/// <summary>
/// Initializes a new instance of the <see cref="FMIceLinkSDPSctpPortAttribute" /> class.
/// </summary>
/// <param name="value">The attribute value.</param>
+ (FMIceLinkSDPSctpPortAttribute*) fromValue:(NSString*)value;
- (NSString*) getValue;
/// <summary>
/// Initializes a new instance of the <see cref="FMIceLinkSDPSctpPortAttribute" /> class.
/// </summary>
/// <param name="port">The SCTP port.</param>
- (id) initWithPort:(int)port;
/// <summary>
/// Gets the SCTP port.
/// </summary>
- (int) port;
/// <summary>
/// Initializes a new instance of the <see cref="FMIceLinkSDPSctpPortAttribute" /> class.
/// </summary>
/// <param name="port">The SCTP port.</param>
+ (FMIceLinkSDPSctpPortAttribute*) sdpSctpPortAttributeWithPort:(int)port;

@end


@class NSStringFMExtensions;

/// <summary>
/// Defines valid SDP setups.
/// </summary>
#pragma clang diagnostic ignored "-Wshorten-64-to-32"
#pragma clang diagnostic ignored "-Wint-to-pointer-cast"

@interface FMIceLinkSDPSetup : NSObject 

/// <summary>
/// Gets the SDP setup meaning "Active".
/// </summary>
+ (NSString*) active;
/// <summary>
/// Gets the SDP setup meaning "Active or Passive".
/// </summary>
+ (NSString*) actPass;
/// <summary>
/// Gets the SDP setup meaning "Passive".
/// </summary>
+ (NSString*) passive;

@end


@class NSStringFMExtensions;

/// <summary>
/// The 'setup' attribute indicates which of the end points should
/// initiate the TCP connection establishment (i.e., send the initial TCP
/// SYN).  The 'setup' attribute is charset-independent and can be a
/// session-level or a media-level attribute.
/// </summary>
#pragma clang diagnostic ignored "-Wshorten-64-to-32"
#pragma clang diagnostic ignored "-Wint-to-pointer-cast"

@interface FMIceLinkSDPSetupAttribute : FMIceLinkSDPAttribute 

/// <summary>
/// Initializes a new instance of the <see cref="FMIceLinkSDPSetupAttribute" /> class.
/// </summary>
/// <param name="value">The attribute value.</param>
+ (FMIceLinkSDPSetupAttribute*) fromValueWithValue:(NSString*)value;
/// <summary>
/// Initializes a new instance of the <see cref="FMIceLinkSDPSetupAttribute" /> class.
/// </summary>
/// <param name="value">The attribute value.</param>
+ (FMIceLinkSDPSetupAttribute*) fromValue:(NSString*)value;
- (NSString*) getValue;
/// <summary>
/// Initializes a new instance of the <see cref="FMIceLinkSDPSetupAttribute" /> class.
/// </summary>
/// <param name="setup">Which end point should initiate the connection establishment. See <see cref="FMIceLinkSDPSetup" /> for possible values.</param>
- (id) initWithSetup:(NSString*)setup;
/// <summary>
/// Initializes a new instance of the <see cref="FMIceLinkSDPSetupAttribute" /> class.
/// </summary>
/// <param name="setup">Which end point should initiate the connection establishment. See <see cref="FMIceLinkSDPSetup" /> for possible values.</param>
+ (FMIceLinkSDPSetupAttribute*) sdpSetupAttributeWithSetup:(NSString*)setup;
/// <summary>
/// Gets which end point should initiate the connection establishment. See <see cref="FMIceLinkSDPSetup" /> for possible values.
/// </summary>
- (NSString*) setup;

@end


@class NSStringFMExtensions;
@class NSMutableArrayFMExtensions;

/// <summary>
/// An array of IceLink servers, capable of responding to STUN
/// requests and managing TURN relays.
/// </summary>
#pragma clang diagnostic ignored "-Wshorten-64-to-32"
#pragma clang diagnostic ignored "-Wint-to-pointer-cast"

@interface FMIceLinkServerArray : FMDynamic 

/// <summary>
/// Initializes a new instance of the <see cref="FMIceLinkServerArray" /> class.
/// </summary>
- (id) init;
/// <summary>
/// Initializes a new instance of the <see cref="FMIceLinkServerArray" /> class.
/// </summary>
/// <param name="tcpEnabled">Whether to enable TCP as an alternative to UDP.</param>
- (id) initWithTcpEnabled:(bool)tcpEnabled;
/// <summary>
/// Gets the public IP address of the server, if known.
/// This is to assist in cases where the server can only bind
/// to a private IP address, but a 1:1 NAT is in place. If
/// set, this address will be used in client responses instead
/// of the local private IP address.
/// </summary>
- (NSString*) publicIPAddress;
/// <summary>
/// Initializes a new instance of the <see cref="FMIceLinkServerArray" /> class.
/// </summary>
+ (FMIceLinkServerArray*) serverArray;
/// <summary>
/// Initializes a new instance of the <see cref="FMIceLinkServerArray" /> class.
/// </summary>
/// <param name="tcpEnabled">Whether to enable TCP as an alternative to UDP.</param>
+ (FMIceLinkServerArray*) serverArrayWithTcpEnabled:(bool)tcpEnabled;
/// <summary>
/// Gets the servers.
/// </summary>
- (NSMutableArray*) servers;
/// <summary>
/// Sets the public IP address of the server, if known.
/// This is to assist in cases where the server can only bind
/// to a private IP address, but a 1:1 NAT is in place. If
/// set, this address will be used in client responses instead
/// of the local private IP address.
/// </summary>
- (void) setPublicIPAddress:(NSString*)value;
/// <summary>
/// Starts the server array using all available local IP
/// addresses and the default port (3478).
/// </summary>
- (void) start;
/// <summary>
/// Starts the server array using the specified local IP
/// addresses and the default port (3478).
/// </summary>
/// <param name="ipAddresses">The local IP addresses.</param>
- (void) startWithIPAddresses:(NSMutableArray*)ipAddresses;
/// <summary>
/// Starts the server using the specified local IP
/// addresses and port.
/// </summary>
/// <param name="ipAddresses">The local IP addresses.</param>
/// <param name="port">The port.</param>
- (void) startWithIPAddresses:(NSMutableArray*)ipAddresses port:(int)port;
/// <summary>
/// Stops the servers.
/// </summary>
- (void) stop;
/// <summary>
/// Gets a value indicating whether TCP support is enabled.
/// </summary>
- (bool) tcpEnabled;

@end


@class FMIceLinkSignalProvider;

/// <summary>
/// Arguments for <see cref="FMIceLinkStartArgs#onSuccess" />.
/// </summary>
#pragma clang diagnostic ignored "-Wshorten-64-to-32"
#pragma clang diagnostic ignored "-Wint-to-pointer-cast"

@interface FMIceLinkStartSuccessArgs : FMDynamic 

- (id) init;
/// <summary>
/// Sets the signal provider.
/// </summary>
- (void) setSignalProvider:(FMIceLinkSignalProvider*)value;
/// <summary>
/// Gets the signal provider.
/// </summary>
- (FMIceLinkSignalProvider*) signalProvider;
+ (FMIceLinkStartSuccessArgs*) startSuccessArgs;

@end


@class NSExceptionFMExtensions;
@class FMIceLinkSignalProvider;

/// <summary>
/// Arguments for <see cref="FMIceLinkStartArgs#onFailure" />.
/// </summary>
#pragma clang diagnostic ignored "-Wshorten-64-to-32"
#pragma clang diagnostic ignored "-Wint-to-pointer-cast"

@interface FMIceLinkStartFailureArgs : FMDynamic 

/// <summary>
/// Gets the exception.
/// </summary>
- (NSException*) exception;
- (id) init;
/// <summary>
/// Sets the exception.
/// </summary>
- (void) setException:(NSException*)value;
/// <summary>
/// Sets the signal provider.
/// </summary>
- (void) setSignalProvider:(FMIceLinkSignalProvider*)value;
/// <summary>
/// Gets the signal provider.
/// </summary>
- (FMIceLinkSignalProvider*) signalProvider;
+ (FMIceLinkStartFailureArgs*) startFailureArgs;

@end


@class FMIceLinkSignalProvider;

/// <summary>
/// Arguments for <see cref="FMIceLinkStartArgs#onComplete" />.
/// </summary>
#pragma clang diagnostic ignored "-Wshorten-64-to-32"
#pragma clang diagnostic ignored "-Wint-to-pointer-cast"

@interface FMIceLinkStartCompleteArgs : FMDynamic 

- (id) init;
/// <summary>
/// Sets the signal provider.
/// </summary>
- (void) setSignalProvider:(FMIceLinkSignalProvider*)value;
/// <summary>
/// Gets the signal provider.
/// </summary>
- (FMIceLinkSignalProvider*) signalProvider;
+ (FMIceLinkStartCompleteArgs*) startCompleteArgs;

@end


@class FMIceLinkStartCompleteArgs;
@class FMIceLinkStartFailureArgs;
@class FMIceLinkStartSuccessArgs;
@class FMCallback;

/// <summary>
/// The arguments used when starting signalling.
/// </summary>
#pragma clang diagnostic ignored "-Wshorten-64-to-32"
#pragma clang diagnostic ignored "-Wint-to-pointer-cast"

@interface FMIceLinkStartArgs : FMDynamic 

- (id) init;
/// <summary>
/// Gets the callback to invoke after <see cref="FMIceLinkStartArgs#onSuccess" /> or <see cref="FMIceLinkStartArgs#onFailure" />.
/// </summary>
- (FMCallback*) onComplete;
/// <summary>
/// Gets the callback to invoke if the operation fails.
/// </summary>
- (FMCallback*) onFailure;
/// <summary>
/// Gets the callback to invoke if the operation succeeds.
/// </summary>
- (FMCallback*) onSuccess;
/// <summary>
/// Sets the callback to invoke after <see cref="FMIceLinkStartArgs#onSuccess" /> or <see cref="FMIceLinkStartArgs#onFailure" />.
/// </summary>
- (void) setOnComplete:(FMCallback*)value;
/// <summary>
/// Sets the callback to invoke after <see cref="FMIceLinkStartArgs#onSuccess" /> or <see cref="FMIceLinkStartArgs#onFailure" />.
/// </summary>
- (void) setOnCompleteBlock:(void (^) (FMIceLinkStartCompleteArgs*))valueBlock;
/// <summary>
/// Sets the callback to invoke if the operation fails.
/// </summary>
- (void) setOnFailure:(FMCallback*)value;
/// <summary>
/// Sets the callback to invoke if the operation fails.
/// </summary>
- (void) setOnFailureBlock:(void (^) (FMIceLinkStartFailureArgs*))valueBlock;
/// <summary>
/// Sets the callback to invoke if the operation succeeds.
/// </summary>
- (void) setOnSuccess:(FMCallback*)value;
/// <summary>
/// Sets the callback to invoke if the operation succeeds.
/// </summary>
- (void) setOnSuccessBlock:(void (^) (FMIceLinkStartSuccessArgs*))valueBlock;
+ (FMIceLinkStartArgs*) startArgs;

@end


@class FMIceLinkSignalProvider;

/// <summary>
/// Arguments for <see cref="FMIceLinkStopArgs#onSuccess" />.
/// </summary>
#pragma clang diagnostic ignored "-Wshorten-64-to-32"
#pragma clang diagnostic ignored "-Wint-to-pointer-cast"

@interface FMIceLinkStopSuccessArgs : FMDynamic 

- (id) init;
/// <summary>
/// Sets the signal provider.
/// </summary>
- (void) setSignalProvider:(FMIceLinkSignalProvider*)value;
/// <summary>
/// Gets the signal provider.
/// </summary>
- (FMIceLinkSignalProvider*) signalProvider;
+ (FMIceLinkStopSuccessArgs*) stopSuccessArgs;

@end


@class NSExceptionFMExtensions;
@class FMIceLinkSignalProvider;

/// <summary>
/// Arguments for <see cref="FMIceLinkStopArgs#onFailure" />.
/// </summary>
#pragma clang diagnostic ignored "-Wshorten-64-to-32"
#pragma clang diagnostic ignored "-Wint-to-pointer-cast"

@interface FMIceLinkStopFailureArgs : FMDynamic 

/// <summary>
/// Gets the exception.
/// </summary>
- (NSException*) exception;
- (id) init;
/// <summary>
/// Sets the exception.
/// </summary>
- (void) setException:(NSException*)value;
/// <summary>
/// Sets the signal provider.
/// </summary>
- (void) setSignalProvider:(FMIceLinkSignalProvider*)value;
/// <summary>
/// Gets the signal provider.
/// </summary>
- (FMIceLinkSignalProvider*) signalProvider;
+ (FMIceLinkStopFailureArgs*) stopFailureArgs;

@end


@class FMIceLinkSignalProvider;

/// <summary>
/// Arguments for <see cref="FMIceLinkStopArgs#onComplete" />.
/// </summary>
#pragma clang diagnostic ignored "-Wshorten-64-to-32"
#pragma clang diagnostic ignored "-Wint-to-pointer-cast"

@interface FMIceLinkStopCompleteArgs : FMDynamic 

- (id) init;
/// <summary>
/// Sets the signal provider.
/// </summary>
- (void) setSignalProvider:(FMIceLinkSignalProvider*)value;
/// <summary>
/// Gets the signal provider.
/// </summary>
- (FMIceLinkSignalProvider*) signalProvider;
+ (FMIceLinkStopCompleteArgs*) stopCompleteArgs;

@end


@class FMIceLinkStopCompleteArgs;
@class FMIceLinkStopFailureArgs;
@class FMIceLinkStopSuccessArgs;
@class FMCallback;

/// <summary>
/// The arguments used when stopping signalling.
/// </summary>
#pragma clang diagnostic ignored "-Wshorten-64-to-32"
#pragma clang diagnostic ignored "-Wint-to-pointer-cast"

@interface FMIceLinkStopArgs : FMDynamic 

- (id) init;
/// <summary>
/// Gets the callback to invoke after <see cref="FMIceLinkStopArgs#onSuccess" /> or <see cref="FMIceLinkStopArgs#onFailure" />.
/// </summary>
- (FMCallback*) onComplete;
/// <summary>
/// Gets the callback to invoke if the operation fails.
/// </summary>
- (FMCallback*) onFailure;
/// <summary>
/// Gets the callback to invoke if the operation succeeds.
/// </summary>
- (FMCallback*) onSuccess;
/// <summary>
/// Sets the callback to invoke after <see cref="FMIceLinkStopArgs#onSuccess" /> or <see cref="FMIceLinkStopArgs#onFailure" />.
/// </summary>
- (void) setOnComplete:(FMCallback*)value;
/// <summary>
/// Sets the callback to invoke after <see cref="FMIceLinkStopArgs#onSuccess" /> or <see cref="FMIceLinkStopArgs#onFailure" />.
/// </summary>
- (void) setOnCompleteBlock:(void (^) (FMIceLinkStopCompleteArgs*))valueBlock;
/// <summary>
/// Sets the callback to invoke if the operation fails.
/// </summary>
- (void) setOnFailure:(FMCallback*)value;
/// <summary>
/// Sets the callback to invoke if the operation fails.
/// </summary>
- (void) setOnFailureBlock:(void (^) (FMIceLinkStopFailureArgs*))valueBlock;
/// <summary>
/// Sets the callback to invoke if the operation succeeds.
/// </summary>
- (void) setOnSuccess:(FMCallback*)value;
/// <summary>
/// Sets the callback to invoke if the operation succeeds.
/// </summary>
- (void) setOnSuccessBlock:(void (^) (FMIceLinkStopSuccessArgs*))valueBlock;
+ (FMIceLinkStopArgs*) stopArgs;

@end


@class FMIceLinkOfferAnswer;
@class NSStringFMExtensions;

/// <summary>
/// The arguments used when sending an offer/answer to a remote peer.
/// </summary>
#pragma clang diagnostic ignored "-Wshorten-64-to-32"
#pragma clang diagnostic ignored "-Wint-to-pointer-cast"

@interface FMIceLinkSendOfferAnswerArgs : NSObject 

- (id) init;
/// <summary>
/// Gets the offer/answer.
/// </summary>
- (FMIceLinkOfferAnswer*) offerAnswer;
/// <summary>
/// Gets the ID of the remote peer.
/// </summary>
- (NSString*) peerId;
/// <summary>
/// Gets the custom state object associated with the remote peer.
/// </summary>
- (NSObject*) peerState;
+ (FMIceLinkSendOfferAnswerArgs*) sendOfferAnswerArgs;
/// <summary>
/// Sets the offer/answer.
/// </summary>
- (void) setOfferAnswer:(FMIceLinkOfferAnswer*)value;
/// <summary>
/// Sets the ID of the remote peer.
/// </summary>
- (void) setPeerId:(NSString*)value;
/// <summary>
/// Sets the custom state object associated with the remote peer.
/// </summary>
- (void) setPeerState:(NSObject*)value;

@end


@class FMIceLinkCandidate;
@class NSStringFMExtensions;

/// <summary>
/// The arguments used when sending a candidate to a remote peer.
/// </summary>
#pragma clang diagnostic ignored "-Wshorten-64-to-32"
#pragma clang diagnostic ignored "-Wint-to-pointer-cast"

@interface FMIceLinkSendCandidateArgs : NSObject 

/// <summary>
/// Gets the candidate.
/// </summary>
- (FMIceLinkCandidate*) candidate;
- (id) init;
/// <summary>
/// Gets the ID of the remote peer.
/// </summary>
- (NSString*) peerId;
/// <summary>
/// Gets the custom state object associated with the remote peer.
/// </summary>
- (NSObject*) peerState;
+ (FMIceLinkSendCandidateArgs*) sendCandidateArgs;
/// <summary>
/// Sets the candidate.
/// </summary>
- (void) setCandidate:(FMIceLinkCandidate*)value;
/// <summary>
/// Sets the ID of the remote peer.
/// </summary>
- (void) setPeerId:(NSString*)value;
/// <summary>
/// Sets the custom state object associated with the remote peer.
/// </summary>
- (void) setPeerState:(NSObject*)value;

@end


@class FMIceLinkOfferAnswer;
@class NSStringFMExtensions;

/// <summary>
/// The arguments used when receiving an offer/answer from a remote peer.
/// </summary>
#pragma clang diagnostic ignored "-Wshorten-64-to-32"
#pragma clang diagnostic ignored "-Wint-to-pointer-cast"

@interface FMIceLinkReceiveOfferAnswerArgs : NSObject 

/// <summary>
/// Initializes a new instance of the <see cref="FMIceLinkReceiveOfferAnswerArgs" /> class.
/// </summary>
/// <param name="offerAnswer">The offer/answer.</param>
/// <param name="peerId">The ID of the remote peer.</param>
- (id) initWithOfferAnswer:(FMIceLinkOfferAnswer*)offerAnswer peerId:(NSString*)peerId;
/// <summary>
/// Initializes a new instance of the <see cref="FMIceLinkReceiveOfferAnswerArgs" /> class.
/// </summary>
/// <param name="offerAnswer">The offer/answer.</param>
/// <param name="peerId">The ID of the remote peer.</param>
/// <param name="peerState">The custom state object associated with the remote peer.</param>
- (id) initWithOfferAnswer:(FMIceLinkOfferAnswer*)offerAnswer peerId:(NSString*)peerId peerState:(NSObject*)peerState;
/// <summary>
/// Gets the offer/answer.
/// </summary>
- (FMIceLinkOfferAnswer*) offerAnswer;
/// <summary>
/// Gets the ID of the remote peer.
/// </summary>
- (NSString*) peerId;
/// <summary>
/// Gets the custom state object associated with the remote peer.
/// </summary>
- (NSObject*) peerState;
/// <summary>
/// Initializes a new instance of the <see cref="FMIceLinkReceiveOfferAnswerArgs" /> class.
/// </summary>
/// <param name="offerAnswer">The offer/answer.</param>
/// <param name="peerId">The ID of the remote peer.</param>
+ (FMIceLinkReceiveOfferAnswerArgs*) receiveOfferAnswerArgsWithOfferAnswer:(FMIceLinkOfferAnswer*)offerAnswer peerId:(NSString*)peerId;
/// <summary>
/// Initializes a new instance of the <see cref="FMIceLinkReceiveOfferAnswerArgs" /> class.
/// </summary>
/// <param name="offerAnswer">The offer/answer.</param>
/// <param name="peerId">The ID of the remote peer.</param>
/// <param name="peerState">The custom state object associated with the remote peer.</param>
+ (FMIceLinkReceiveOfferAnswerArgs*) receiveOfferAnswerArgsWithOfferAnswer:(FMIceLinkOfferAnswer*)offerAnswer peerId:(NSString*)peerId peerState:(NSObject*)peerState;
/// <summary>
/// Sets the offer/answer.
/// </summary>
- (void) setOfferAnswer:(FMIceLinkOfferAnswer*)value;
/// <summary>
/// Sets the ID of the remote peer.
/// </summary>
- (void) setPeerId:(NSString*)value;
/// <summary>
/// Sets the custom state object associated with the remote peer.
/// </summary>
- (void) setPeerState:(NSObject*)value;

@end


@class FMIceLinkCandidate;
@class NSStringFMExtensions;

/// <summary>
/// The arguments used when receiving a candidate from a remote peer.
/// </summary>
#pragma clang diagnostic ignored "-Wshorten-64-to-32"
#pragma clang diagnostic ignored "-Wint-to-pointer-cast"

@interface FMIceLinkReceiveCandidateArgs : NSObject 

/// <summary>
/// Gets the candidate.
/// </summary>
- (FMIceLinkCandidate*) candidate;
/// <summary>
/// Initializes a new instance of the <see cref="FMIceLinkReceiveCandidateArgs" /> class.
/// </summary>
/// <param name="candidate">The candidate.</param>
/// <param name="peerId">The ID of the remote peer.</param>
- (id) initWithCandidate:(FMIceLinkCandidate*)candidate peerId:(NSString*)peerId;
/// <summary>
/// Gets the ID of the remote peer.
/// </summary>
- (NSString*) peerId;
/// <summary>
/// Initializes a new instance of the <see cref="FMIceLinkReceiveCandidateArgs" /> class.
/// </summary>
/// <param name="candidate">The candidate.</param>
/// <param name="peerId">The ID of the remote peer.</param>
+ (FMIceLinkReceiveCandidateArgs*) receiveCandidateArgsWithCandidate:(FMIceLinkCandidate*)candidate peerId:(NSString*)peerId;
/// <summary>
/// Sets the candidate.
/// </summary>
- (void) setCandidate:(FMIceLinkCandidate*)value;
/// <summary>
/// Sets the ID of the remote peer.
/// </summary>
- (void) setPeerId:(NSString*)value;

@end


@class FMIceLinkReceiveOfferAnswerArgs;
@class FMIceLinkReceiveCandidateArgs;
@class NSStringFMExtensions;
@class FMCallback;
@class FMIceLinkSendCandidateArgs;
@class FMIceLinkSendOfferAnswerArgs;
@class FMIceLinkStartArgs;
@class FMIceLinkStopArgs;

/// <summary>
/// A provider for signalling used during the peer-to-peer handshake process.
/// Requires the definition of two 'send' methods (SendOfferAnswer/SendCandidate).
/// Implementations must call RaiseOfferAnswer or RaiseCandidate when an offer/answer
/// or candidate is received from a peer.
/// </summary>
#pragma clang diagnostic ignored "-Wshorten-64-to-32"
#pragma clang diagnostic ignored "-Wint-to-pointer-cast"

@interface FMIceLinkSignalProvider : FMDynamic 

- (FMCallback*) addReceivedCandidateWithValue:(FMCallback*)value;
- (FMCallback*) addReceivedCandidate:(FMCallback*)value;
- (FMCallback*) addReceivedCandidateWithValueBlock:(void (^) (FMIceLinkReceiveCandidateArgs*))valueBlock;
- (FMCallback*) addReceivedCandidateBlock:(void (^) (FMIceLinkReceiveCandidateArgs*))valueBlock;
- (FMCallback*) addReceivedOfferAnswerWithValue:(FMCallback*)value;
- (FMCallback*) addReceivedOfferAnswer:(FMCallback*)value;
- (FMCallback*) addReceivedOfferAnswerWithValueBlock:(void (^) (FMIceLinkReceiveOfferAnswerArgs*))valueBlock;
- (FMCallback*) addReceivedOfferAnswerBlock:(void (^) (FMIceLinkReceiveOfferAnswerArgs*))valueBlock;
/// <summary>
/// Gets the conference ID.
/// </summary>
- (NSString*) conferenceId;
/// <summary>
/// Initializes a new instance of the <see cref="FMIceLinkSignalProvider" /> class.
/// </summary>
/// <param name="conferenceId">The conference ID.</param>
- (id) initWithConferenceId:(NSString*)conferenceId;
/// <summary>
/// Raises a candidate received from a peer.
/// </summary>
/// <param name="receiveCandidateArgs">The arguments.</param>
- (void) raiseCandidateWithReceiveCandidateArgs:(FMIceLinkReceiveCandidateArgs*)receiveCandidateArgs;
/// <summary>
/// Raises an offer/answer received from a peer.
/// </summary>
/// <param name="receiveOfferAnswerArgs">The arguments.</param>
- (void) raiseOfferAnswerWithReceiveOfferAnswerArgs:(FMIceLinkReceiveOfferAnswerArgs*)receiveOfferAnswerArgs;
- (void) removeReceivedCandidateWithValue:(FMCallback*)value;
- (void) removeReceivedCandidate:(FMCallback*)value;
- (void) removeReceivedOfferAnswerWithValue:(FMCallback*)value;
- (void) removeReceivedOfferAnswer:(FMCallback*)value;
/// <summary>
/// Sends a candidate to a peer.
/// </summary>
/// <param name="sendCandidateArgs">The arguments.</param>
- (void) sendCandidateWithSendCandidateArgs:(FMIceLinkSendCandidateArgs*)sendCandidateArgs;
/// <summary>
/// Sends a candidate to a peer.
/// </summary>
/// <param name="sendCandidateArgs">The arguments.</param>
- (void) sendCandidateWithArgs:(FMIceLinkSendCandidateArgs*)sendCandidateArgs;
/// <summary>
/// Sends an offer/answer to a peer.
/// </summary>
/// <param name="sendOfferAnswerArgs">The arguments.</param>
- (void) sendOfferAnswerWithSendOfferAnswerArgs:(FMIceLinkSendOfferAnswerArgs*)sendOfferAnswerArgs;
/// <summary>
/// Sends an offer/answer to a peer.
/// </summary>
/// <param name="sendOfferAnswerArgs">The arguments.</param>
- (void) sendOfferAnswerWithArgs:(FMIceLinkSendOfferAnswerArgs*)sendOfferAnswerArgs;
/// <summary>
/// Initializes a new instance of the <see cref="FMIceLinkSignalProvider" /> class.
/// </summary>
/// <param name="conferenceId">The conference ID.</param>
+ (FMIceLinkSignalProvider*) signalProviderWithConferenceId:(NSString*)conferenceId;
/// <summary>
/// Starts the provider.
/// </summary>
/// <param name="startArgs">The arguments.</param>
- (void) startWithStartArgs:(FMIceLinkStartArgs*)startArgs;
/// <summary>
/// Starts the provider.
/// </summary>
/// <param name="startArgs">The arguments.</param>
- (void) startWithArgs:(FMIceLinkStartArgs*)startArgs;
/// <summary>
/// Stops the provider.
/// </summary>
/// <param name="stopArgs">The arguments.</param>
- (void) stopWithStopArgs:(FMIceLinkStopArgs*)stopArgs;
/// <summary>
/// Stops the provider.
/// </summary>
/// <param name="stopArgs">The arguments.</param>
- (void) stopWithArgs:(FMIceLinkStopArgs*)stopArgs;

@end



/// <summary>
/// A STUN address family.
/// </summary>
#pragma clang diagnostic ignored "-Wshorten-64-to-32"
#pragma clang diagnostic ignored "-Wint-to-pointer-cast"

@interface FMIceLinkSTUNAddressFamily : NSObject 

- (id) init;
/// <summary>
/// Gets the value indicating the IPv4 address family.
/// </summary>
+ (uint8_t) ipv4;
/// <summary>
/// Gets the value indicating the IPv6 address family.
/// </summary>
+ (uint8_t) ipv6;
+ (FMIceLinkSTUNAddressFamily*) stunAddressFamily;

@end


@class NSMutableArrayFMExtensions;
@class NSMutableDataFMExtensions;
@class FMIceLinkSTUNAlternateServerAttribute;
@class FMIceLinkSTUNAttribute;
@class FMIceLinkSTUNChannelNumberAttribute;
@class FMIceLinkSTUNConnectionIdAttribute;
@class FMIceLinkSTUNDataAttribute;
@class FMIceLinkSTUNDontFragmentAttribute;
@class FMIceLinkSTUNErrorCodeAttribute;
@class FMIceLinkSTUNEvenPortAttribute;
@class FMIceLinkSTUNFingerprintAttribute;
@class FMIceLinkSTUNIceControlledAttribute;
@class FMIceLinkSTUNIceControllingAttribute;
@class FMIceLinkSTUNLifetimeAttribute;
@class FMIceLinkSTUNMappedAddressAttribute;
@class FMIceLinkSTUNMessageIntegrityAttribute;
@class FMIceLinkSTUNNonceAttribute;
@class FMIceLinkSTUNPriorityAttribute;
@class FMIceLinkSTUNRealmAttribute;
@class FMIceLinkSTUNRequestedAddressFamilyAttribute;
@class FMIceLinkSTUNRequestedTransportAttribute;
@class FMIceLinkSTUNReservationTokenAttribute;
@class FMIceLinkSTUNSoftwareAttribute;
@class FMIceLinkSTUNUnknownAttributesAttribute;
@class FMIceLinkSTUNUseCandidateAttribute;
@class FMIceLinkSTUNUsernameAttribute;
@class FMIceLinkSTUNXorMappedAddressAttribute;
@class FMIceLinkSTUNXorPeerAddressAttribute;
@class FMIceLinkSTUNXorRelayedAddressAttribute;
@class FMCallback;

/// <summary>
/// A STUN message.
/// </summary>
#pragma clang diagnostic ignored "-Wshorten-64-to-32"
#pragma clang diagnostic ignored "-Wint-to-pointer-cast"

@interface FMIceLinkSTUNMessage : NSObject 

/// <summary>
/// Gets the message attributes.
/// </summary>
- (NSMutableArray*) attributes;
/// <summary>
/// Creates a message.
/// </summary>
/// <param name="method">The method.</param>
/// <param name="messageType">Type of the message.</param>
/// <param name="transactionId">The transaction ID.</param>
/// <returns></returns>
+ (FMIceLinkSTUNMessage*) createMessageWithMethod:(uint8_t)method messageType:(FMIceLinkSTUNMessageType)messageType transactionId:(NSMutableData*)transactionId;
/// <summary>
/// Creates a sibling message.
/// </summary>
/// <param name="type">The message type.</param>
/// <param name="messageType">Type of the message.</param>
/// <param name="transactionId">The transaction ID.</param>
/// <returns></returns>
+ (FMIceLinkSTUNMessage*) createSiblingMessageWithType:(Class)type messageType:(FMIceLinkSTUNMessageType)messageType transactionId:(NSMutableData*)transactionId;
+ (NSMutableData*) generateTransactionId;
/// <summary>
/// Gets the alternate-server attribute.
/// </summary>
/// <returns></returns>
- (FMIceLinkSTUNAlternateServerAttribute*) getAlternateServer;
- (FMIceLinkSTUNAttribute*) getAttributeWithAttributeType:(Class)attributeType;
- (FMIceLinkSTUNAttribute*) getAttributeWithType:(Class)attributeType;
/// <summary>
/// Converts this instance to a byte array.
/// </summary>
/// <returns></returns>
- (NSMutableData*) getBytes;
/// <summary>
/// Gets the channel-number attribute.
/// </summary>
/// <returns></returns>
- (FMIceLinkSTUNChannelNumberAttribute*) getChannelNumber;
/// <summary>
/// Gets the connection-id attribute.
/// </summary>
/// <returns></returns>
- (FMIceLinkSTUNConnectionIdAttribute*) getConnectionId;
/// <summary>
/// Gets the data attribute.
/// </summary>
/// <returns></returns>
- (FMIceLinkSTUNDataAttribute*) getData;
/// <summary>
/// Gets the don't-fragment attribute.
/// </summary>
/// <returns></returns>
- (FMIceLinkSTUNDontFragmentAttribute*) getDontFragment;
/// <summary>
/// Gets the error-code attribute.
/// </summary>
/// <returns></returns>
- (FMIceLinkSTUNErrorCodeAttribute*) getErrorCode;
/// <summary>
/// Gets the even-port attribute.
/// </summary>
/// <returns></returns>
- (FMIceLinkSTUNEvenPortAttribute*) getEvenPort;
/// <summary>
/// Gets the fingerprint attribute.
/// </summary>
/// <returns></returns>
- (FMIceLinkSTUNFingerprintAttribute*) getFingerprint;
/// <summary>
/// Gets the ICE-controlled attribute.
/// </summary>
/// <returns></returns>
- (FMIceLinkSTUNIceControlledAttribute*) getIceControlled;
/// <summary>
/// Gets the ICE-controlling attribute.
/// </summary>
/// <returns></returns>
- (FMIceLinkSTUNIceControllingAttribute*) getIceControlling;
/// <summary>
/// Gets the lifetime attribute.
/// </summary>
/// <returns></returns>
- (FMIceLinkSTUNLifetimeAttribute*) getLifetime;
/// <summary>
/// Gets the mapped-address attribute.
/// </summary>
/// <returns></returns>
- (FMIceLinkSTUNMappedAddressAttribute*) getMappedAddress;
/// <summary>
/// Gets the message-integrity attribute.
/// </summary>
/// <returns></returns>
- (FMIceLinkSTUNMessageIntegrityAttribute*) getMessageIntegrity;
/// <summary>
/// Gets the message method.
/// </summary>
/// <param name="type">The message type.</param>
/// <returns></returns>
+ (uint8_t) getMethodWithType:(Class)type;
/// <summary>
/// Gets the nonce attribute.
/// </summary>
/// <returns></returns>
- (FMIceLinkSTUNNonceAttribute*) getNonce;
/// <summary>
/// Gets the priority attribute.
/// </summary>
/// <returns></returns>
- (FMIceLinkSTUNPriorityAttribute*) getPriority;
/// <summary>
/// Gets the realm attribute.
/// </summary>
/// <returns></returns>
- (FMIceLinkSTUNRealmAttribute*) getRealm;
/// <summary>
/// Gets the requested-address-family attribute.
/// </summary>
/// <returns></returns>
- (FMIceLinkSTUNRequestedAddressFamilyAttribute*) getRequestedAddressFamily;
/// <summary>
/// Gets the requested-transport attribute.
/// </summary>
/// <returns></returns>
- (FMIceLinkSTUNRequestedTransportAttribute*) getRequestedTransport;
/// <summary>
/// Gets the reservation-token attribute.
/// </summary>
/// <returns></returns>
- (FMIceLinkSTUNReservationTokenAttribute*) getReservationToken;
/// <summary>
/// Gets the software attribute.
/// </summary>
/// <returns></returns>
- (FMIceLinkSTUNSoftwareAttribute*) getSoftware;
/// <summary>
/// Gets the unknown-attributes attribute.
/// </summary>
/// <returns></returns>
- (FMIceLinkSTUNUnknownAttributesAttribute*) getUnknownAttributes;
/// <summary>
/// Gets the use-candidate attribute.
/// </summary>
/// <returns></returns>
- (FMIceLinkSTUNUseCandidateAttribute*) getUseCandidate;
/// <summary>
/// Gets the username attribute.
/// </summary>
/// <returns></returns>
- (FMIceLinkSTUNUsernameAttribute*) getUsername;
/// <summary>
/// Gets the XOR-mapped-address attribute.
/// </summary>
/// <returns></returns>
- (FMIceLinkSTUNXorMappedAddressAttribute*) getXorMappedAddress;
/// <summary>
/// Gets the XOR-peer-address attribute.
/// </summary>
/// <returns></returns>
- (FMIceLinkSTUNXorPeerAddressAttribute*) getXorPeerAddress;
/// <summary>
/// Gets the XOR-relayed-address attribute.
/// </summary>
/// <returns></returns>
- (FMIceLinkSTUNXorRelayedAddressAttribute*) getXorRelayedAddress;
/// <summary>
/// Initializes a new instance of the <see cref="FMIceLinkSTUNMessage" /> class.
/// </summary>
/// <param name="messageType">The type of the message.</param>
/// <param name="transactionId">The transaction ID.</param>
- (id) initWithMessageType:(FMIceLinkSTUNMessageType)messageType transactionId:(NSMutableData*)transactionId;
+ (NSMutableData*) magicCookie;
/// <summary>
/// Gets the type of the message.
/// </summary>
- (FMIceLinkSTUNMessageType) messageType;
/// <summary>
/// Creates a new <see cref="FMIceLinkSTUNMessage" /> instance from a byte array.
/// </summary>
/// <param name="bytes">The byte array.</param>
/// <returns></returns>
+ (FMIceLinkSTUNMessage*) parseBytesWithBytes:(NSMutableData*)bytes;
/// <summary>
/// Creates a new <see cref="FMIceLinkSTUNMessage" /> instance from a byte array.
/// </summary>
/// <param name="bytes">The byte array.</param>
/// <returns></returns>
+ (FMIceLinkSTUNMessage*) parseBytes:(NSMutableData*)bytes;
/// <summary>
/// Creates a new <see cref="FMIceLinkSTUNMessage" /> instance from a byte array.
/// </summary>
/// <param name="bytes">The byte array.</param>
/// <param name="length">The length of the parsed segment.</param>
/// <returns></returns>
+ (FMIceLinkSTUNMessage*) parseBytesWithBytes:(NSMutableData*)bytes length:(int*)length;
/// <summary>
/// Creates a new <see cref="FMIceLinkSTUNMessage" /> instance from a byte array.
/// </summary>
/// <param name="bytes">The byte array.</param>
/// <param name="length">The length of the parsed segment.</param>
/// <returns></returns>
+ (FMIceLinkSTUNMessage*) parseBytes:(NSMutableData*)bytes length:(int*)length;
+ (void) registerMessageWithType:(Class)type method:(uint8_t)method creationDelegate:(FMCallback*)creationDelegate;
/// <summary>
/// Set the alternate-server attribute.
/// </summary>
/// <param name="attribute">The alternate-server attribute.</param>
- (void) setAlternateServerWithAttribute:(FMIceLinkSTUNAlternateServerAttribute*)attribute;
- (void) setAttributeWithAttribute:(FMIceLinkSTUNAttribute*)attribute;
- (void) setAttribute:(FMIceLinkSTUNAttribute*)attribute;
/// <summary>
/// Sets the channel-number attribute.
/// </summary>
/// <param name="attribute">The channel-number attribute.</param>
- (void) setChannelNumberWithAttribute:(FMIceLinkSTUNChannelNumberAttribute*)attribute;
/// <summary>
/// Sets the connection-id attribute.
/// </summary>
/// <param name="attribute">The connection-id attribute.</param>
- (void) setConnectionIdWithAttribute:(FMIceLinkSTUNConnectionIdAttribute*)attribute;
/// <summary>
/// Sets the data attribute.
/// </summary>
/// <param name="attribute">The data attribute.</param>
- (void) setDataWithAttribute:(FMIceLinkSTUNDataAttribute*)attribute;
/// <summary>
/// Sets the don't-fragment attribute.
/// </summary>
/// <param name="attribute">The don't-fragment attribute.</param>
- (void) setDontFragmentWithAttribute:(FMIceLinkSTUNDontFragmentAttribute*)attribute;
/// <summary>
/// Set the error-code attribute.
/// </summary>
/// <param name="attribute">The error-code attribute.</param>
- (void) setErrorCodeWithAttribute:(FMIceLinkSTUNErrorCodeAttribute*)attribute;
/// <summary>
/// Sets the even-port attribute.
/// </summary>
/// <param name="attribute">The even-port attribute.</param>
- (void) setEvenPortWithAttribute:(FMIceLinkSTUNEvenPortAttribute*)attribute;
/// <summary>
/// Set the fingerprint attribute.
/// </summary>
/// <param name="attribute">The fingerprint attribute.</param>
- (void) setFingerprintWithAttribute:(FMIceLinkSTUNFingerprintAttribute*)attribute;
/// <summary>
/// Sets the ICE-controlled attribute.
/// </summary>
/// <param name="attribute">The ICE-controlled attribute.</param>
- (void) setIceControlledWithAttribute:(FMIceLinkSTUNIceControlledAttribute*)attribute;
/// <summary>
/// Sets the ICE-controlling attribute.
/// </summary>
/// <param name="attribute">The ICE-controlling attribute.</param>
- (void) setIceControllingWithAttribute:(FMIceLinkSTUNIceControllingAttribute*)attribute;
/// <summary>
/// Sets the lifetime attribute.
/// </summary>
/// <param name="attribute">The lifetime attribute.</param>
- (void) setLifetimeWithAttribute:(FMIceLinkSTUNLifetimeAttribute*)attribute;
/// <summary>
/// Set the mapped-address attribute.
/// </summary>
/// <param name="attribute">The mapped-address attribute.</param>
- (void) setMappedAddressWithAttribute:(FMIceLinkSTUNMappedAddressAttribute*)attribute;
/// <summary>
/// Set the message-integrity attribute.
/// </summary>
/// <param name="attribute">The message-integrity attribute.</param>
- (void) setMessageIntegrityWithAttribute:(FMIceLinkSTUNMessageIntegrityAttribute*)attribute;
/// <summary>
/// Set the nonce attribute.
/// </summary>
/// <param name="attribute">The nonce attribute.</param>
- (void) setNonceWithAttribute:(FMIceLinkSTUNNonceAttribute*)attribute;
/// <summary>
/// Sets the priority attribute.
/// </summary>
/// <param name="attribute">The priority attribute.</param>
- (void) setPriorityWithAttribute:(FMIceLinkSTUNPriorityAttribute*)attribute;
/// <summary>
/// Set the realm attribute.
/// </summary>
/// <param name="attribute">The realm attribute.</param>
- (void) setRealmWithAttribute:(FMIceLinkSTUNRealmAttribute*)attribute;
/// <summary>
/// Sets the requested-address-family attribute.
/// </summary>
/// <param name="attribute">The requested-address-family attribute.</param>
- (void) setRequestedAddressFamilyWithAttribute:(FMIceLinkSTUNRequestedAddressFamilyAttribute*)attribute;
/// <summary>
/// Sets the requested-transport attribute.
/// </summary>
/// <param name="attribute">The requested-transport attribute.</param>
- (void) setRequestedTransportWithAttribute:(FMIceLinkSTUNRequestedTransportAttribute*)attribute;
/// <summary>
/// Sets the reservation-token attribute.
/// </summary>
/// <param name="attribute">The reservation-token attribute.</param>
- (void) setReservationTokenWithAttribute:(FMIceLinkSTUNReservationTokenAttribute*)attribute;
/// <summary>
/// Set the software attribute.
/// </summary>
/// <param name="attribute">The software attribute.</param>
- (void) setSoftwareWithAttribute:(FMIceLinkSTUNSoftwareAttribute*)attribute;
/// <summary>
/// Set the unknown-attributes attribute.
/// </summary>
/// <param name="attribute">The unknown-attributes attribute.</param>
- (void) setUnknownAttributesWithAttribute:(FMIceLinkSTUNUnknownAttributesAttribute*)attribute;
/// <summary>
/// Sets the use-candidate attribute.
/// </summary>
/// <param name="attribute">The use-candidate attribute.</param>
- (void) setUseCandidateWithAttribute:(FMIceLinkSTUNUseCandidateAttribute*)attribute;
/// <summary>
/// Set the username attribute.
/// </summary>
/// <param name="attribute">The username attribute.</param>
- (void) setUsernameWithAttribute:(FMIceLinkSTUNUsernameAttribute*)attribute;
/// <summary>
/// Set the XOR-mapped-address attribute.
/// </summary>
/// <param name="attribute">The XOR-mapped-address attribute.</param>
- (void) setXorMappedAddressWithAttribute:(FMIceLinkSTUNXorMappedAddressAttribute*)attribute;
/// <summary>
/// Sets the XOR-peer-address attribute.
/// </summary>
/// <param name="attribute">The XOR-peer-address attribute.</param>
- (void) setXorPeerAddressWithAttribute:(FMIceLinkSTUNXorPeerAddressAttribute*)attribute;
/// <summary>
/// Sets the XOR-relayed-address attribute.
/// </summary>
/// <param name="attribute">The XOR-relayed-address attribute.</param>
- (void) setXorRelayedAddressWithAttribute:(FMIceLinkSTUNXorRelayedAddressAttribute*)attribute;
/// <summary>
/// Initializes a new instance of the <see cref="FMIceLinkSTUNMessage" /> class.
/// </summary>
/// <param name="messageType">The type of the message.</param>
/// <param name="transactionId">The transaction ID.</param>
+ (FMIceLinkSTUNMessage*) stunMessageWithMessageType:(FMIceLinkSTUNMessageType)messageType transactionId:(NSMutableData*)transactionId;
/// <summary>
/// Initializes a new instance of the <see cref="FMIceLinkSTUNMessage" /> class.
/// </summary>
/// <param name="messageType">The type of the message.</param>
/// <param name="transactionId">The transaction ID.</param>
+ (FMIceLinkSTUNMessage*) stunMessageWithType:(FMIceLinkSTUNMessageType)messageType transactionId:(NSMutableData*)transactionId;
/// <summary>
/// Gets the transaction ID.
/// </summary>
- (NSMutableData*) transactionId;
+ (bool) unregisterMessageWithType:(Class)type;

@end


@class NSMutableDataFMExtensions;

/// <summary>
/// A generic STUN data message.
/// </summary>
#pragma clang diagnostic ignored "-Wshorten-64-to-32"
#pragma clang diagnostic ignored "-Wint-to-pointer-cast"

@interface FMIceLinkSTUNDataMessage : FMIceLinkSTUNMessage 

/// <summary>
/// Initializes a new instance of the <see cref="FMIceLinkSTUNDataMessage" /> class.
/// </summary>
/// <param name="messageType">The type of the message.</param>
/// <param name="transactionId">The transaction ID.</param>
- (id) initWithMessageType:(FMIceLinkSTUNMessageType)messageType transactionId:(NSMutableData*)transactionId;
/// <summary>
/// Initializes a new instance of the <see cref="FMIceLinkSTUNDataMessage" /> class.
/// </summary>
/// <param name="messageType">The type of the message.</param>
/// <param name="transactionId">The transaction ID.</param>
+ (FMIceLinkSTUNDataMessage*) stunDataMessageWithMessageType:(FMIceLinkSTUNMessageType)messageType transactionId:(NSMutableData*)transactionId;
/// <summary>
/// Initializes a new instance of the <see cref="FMIceLinkSTUNDataMessage" /> class.
/// </summary>
/// <param name="messageType">The type of the message.</param>
/// <param name="transactionId">The transaction ID.</param>
+ (FMIceLinkSTUNDataMessage*) stunDataMessageWithType:(FMIceLinkSTUNMessageType)messageType transactionId:(NSMutableData*)transactionId;

@end



/// <summary>
/// A STUN connection-attempt indication.
/// </summary>
#pragma clang diagnostic ignored "-Wshorten-64-to-32"
#pragma clang diagnostic ignored "-Wint-to-pointer-cast"

@interface FMIceLinkSTUNConnectionAttemptIndication : FMIceLinkSTUNDataMessage 

/// <summary>
/// Initializes a new instance of the <see cref="FMIceLinkSTUNConnectionAttemptIndication" /> class.
/// </summary>
- (id) init;
/// <summary>
/// Initializes a new instance of the <see cref="FMIceLinkSTUNConnectionAttemptIndication" /> class.
/// </summary>
+ (FMIceLinkSTUNConnectionAttemptIndication*) stunConnectionAttemptIndication;

@end


@class FMIceLinkSTUNMessage;
@class NSStringFMExtensions;
@class FMCallback;

/// <summary>
/// A STUN exception.
/// </summary>
#pragma clang diagnostic ignored "-Wshorten-64-to-32"
#pragma clang diagnostic ignored "-Wint-to-pointer-cast"

@interface FMIceLinkSTUNException : NSException 

/// <summary>
/// Creates an exception.
/// </summary>
/// <param name="code">The code.</param>
/// <param name="response">The response.</param>
/// <returns></returns>
+ (FMIceLinkSTUNException*) createExceptionWithCode:(int)code response:(FMIceLinkSTUNMessage*)response;
/// <summary>
/// Gets the exception code.
/// </summary>
/// <param name="type">The exception type.</param>
/// <returns></returns>
+ (int) getCodeWithType:(Class)type;
/// <summary>
/// Initializes a new instance of the <see cref="FMIceLinkSTUNException" /> class.
/// </summary>
/// <param name="message">The message.</param>
- (id) initWithMessage:(NSString*)message;
+ (void) registerExceptionWithType:(Class)type code:(int)code creationDelegate:(FMCallback*)creationDelegate;
/// <summary>
/// Initializes a new instance of the <see cref="FMIceLinkSTUNException" /> class.
/// </summary>
/// <param name="message">The message.</param>
+ (FMIceLinkSTUNException*) stunExceptionWithMessage:(NSString*)message;
+ (bool) unregisterExceptionWithType:(Class)type;

@end


@class NSStringFMExtensions;

/// <summary>
/// The connection attempt failed or timed out.
/// </summary>
#pragma clang diagnostic ignored "-Wshorten-64-to-32"
#pragma clang diagnostic ignored "-Wint-to-pointer-cast"

@interface FMIceLinkSTUNConnectionTimeoutOrFailureException : FMIceLinkSTUNException 

/// <summary>
/// Initializes a new instance of the <see cref="FMIceLinkSTUNConnectionTimeoutOrFailureException" /> class.
/// </summary>
- (id) init;
/// <summary>
/// Initializes a new instance of the <see cref="FMIceLinkSTUNConnectionTimeoutOrFailureException" /> class.
/// </summary>
/// <param name="message">The message.</param>
- (id) initWithMessage:(NSString*)message;
/// <summary>
/// Initializes a new instance of the <see cref="FMIceLinkSTUNConnectionTimeoutOrFailureException" /> class.
/// </summary>
+ (FMIceLinkSTUNConnectionTimeoutOrFailureException*) stunConnectionTimeoutOrFailureException;
/// <summary>
/// Initializes a new instance of the <see cref="FMIceLinkSTUNConnectionTimeoutOrFailureException" /> class.
/// </summary>
/// <param name="message">The message.</param>
+ (FMIceLinkSTUNConnectionTimeoutOrFailureException*) stunConnectionTimeoutOrFailureExceptionWithMessage:(NSString*)message;

@end


@class NSStringFMExtensions;

/// <summary>
/// The server is currently processing a Connect request for this
/// allocation with the same XOR-PEER-ADDRESS; or the server has
/// already successfully processed a Connect request for this
/// allocation with the same XOR-PEER-ADDRESS, and the resulting
/// client and peer data connections are either pending or active.
/// </summary>
#pragma clang diagnostic ignored "-Wshorten-64-to-32"
#pragma clang diagnostic ignored "-Wint-to-pointer-cast"

@interface FMIceLinkSTUNConnectionAlreadyExistsException : FMIceLinkSTUNException 

/// <summary>
/// Initializes a new instance of the <see cref="FMIceLinkSTUNConnectionAlreadyExistsException" /> class.
/// </summary>
- (id) init;
/// <summary>
/// Initializes a new instance of the <see cref="FMIceLinkSTUNConnectionAlreadyExistsException" /> class.
/// </summary>
/// <param name="message">The message.</param>
- (id) initWithMessage:(NSString*)message;
/// <summary>
/// Initializes a new instance of the <see cref="FMIceLinkSTUNConnectionAlreadyExistsException" /> class.
/// </summary>
+ (FMIceLinkSTUNConnectionAlreadyExistsException*) stunConnectionAlreadyExistsException;
/// <summary>
/// Initializes a new instance of the <see cref="FMIceLinkSTUNConnectionAlreadyExistsException" /> class.
/// </summary>
/// <param name="message">The message.</param>
+ (FMIceLinkSTUNConnectionAlreadyExistsException*) stunConnectionAlreadyExistsExceptionWithMessage:(NSString*)message;

@end


@class NSStringFMExtensions;
@class NSMutableDataFMExtensions;
@class FMCallback;

/// <summary>
/// A STUN attribute.
/// </summary>
#pragma clang diagnostic ignored "-Wshorten-64-to-32"
#pragma clang diagnostic ignored "-Wint-to-pointer-cast"

@interface FMIceLinkSTUNAttribute : NSObject 

/// <summary>
/// Gets the blank IPv4 address ("0.0.0.0").
/// </summary>
+ (NSString*) blankIPv4Address;
/// <summary>
/// Gets the IPv4 address bytes for "0.0.0.0".
/// </summary>
+ (NSMutableData*) blankIPv4AddressBytes;
/// <summary>
/// Gets the blank IPv6 address ("00:0:0:0:0:0:0:0").
/// </summary>
+ (NSString*) blankIPv6Address;
/// <summary>
/// Gets the IPv6 address bytes for "00:00:00:00:00:00:00:00".
/// </summary>
+ (NSMutableData*) blankIPv6AddressBytes;
/// <summary>
/// Creates an attribute.
/// </summary>
/// <param name="byte1">The first type byte.</param>
/// <param name="byte2">The second type byte.</param>
/// <param name="valueBytes">The value bytes.</param>
/// <param name="transactionId">The transaction ID.</param>
/// <param name="messageBytes">The message bytes thus far.</param>
/// <returns></returns>
+ (FMIceLinkSTUNAttribute*) createAttributeWithByte1:(uint8_t)byte1 byte2:(uint8_t)byte2 valueBytes:(NSMutableData*)valueBytes transactionId:(NSMutableData*)transactionId messageBytes:(NSMutableData*)messageBytes;
/// <summary>
/// Converts this instance to a byte array.
/// </summary>
/// <returns></returns>
- (NSMutableData*) getBytes;
+ (short) getLengthWithBytes:(NSMutableData*)bytes;
/// <summary>
/// Gets the attribute type bytes.
/// </summary>
/// <param name="type">The attribute type.</param>
/// <returns></returns>
+ (NSMutableData*) getTypeBytesWithType:(Class)type;
- (NSMutableData*) getValueBytes;
- (id) init;
/// <summary>
/// Creates a new <see cref="FMIceLinkSTUNAttribute" /> from a byte array.
/// </summary>
/// <param name="bytes">The byte array.</param>
/// <param name="transactionId">The STUN message transaction ID.</param>
/// <param name="messageBytes">The STUN message thus far as a byte array.</param>
/// <returns></returns>
+ (FMIceLinkSTUNAttribute*) parseBytesWithBytes:(NSMutableData*)bytes transactionId:(NSMutableData*)transactionId messageBytes:(NSMutableData*)messageBytes;
/// <summary>
/// Creates a new <see cref="FMIceLinkSTUNAttribute" /> from a byte array.
/// </summary>
/// <param name="bytes">The byte array.</param>
/// <param name="transactionId">The STUN message transaction ID.</param>
/// <param name="messageBytes">The STUN message thus far as a byte array.</param>
/// <returns></returns>
+ (FMIceLinkSTUNAttribute*) parseBytes:(NSMutableData*)bytes transactionId:(NSMutableData*)transactionId messageBytes:(NSMutableData*)messageBytes;
+ (void) registerAttributeWithType:(Class)type comprehensionRequired:(bool)comprehensionRequired typeByte:(uint8_t)typeByte creationDelegate:(FMCallback*)creationDelegate;
+ (FMIceLinkSTUNAttribute*) stunAttribute;
+ (bool) unregisterAttributeWithType:(Class)type;
+ (void) xorIPAddressWithIPAddressBytes:(NSMutableData*)ipAddressBytes transactionId:(NSMutableData*)transactionId;
+ (void) xorIPAddressWithBytes:(NSMutableData*)ipAddressBytes transactionId:(NSMutableData*)transactionId;
+ (void) xorPortWithPortBytes:(NSMutableData*)portBytes transactionId:(NSMutableData*)transactionId;
+ (void) xorPortWithBytes:(NSMutableData*)portBytes transactionId:(NSMutableData*)transactionId;

@end


@class NSMutableDataFMExtensions;
@class NSStringFMExtensions;

/// <summary>
/// The CONNECTION-ID attribute uniquely identifies a peer data connection.
/// </summary>
#pragma clang diagnostic ignored "-Wshorten-64-to-32"
#pragma clang diagnostic ignored "-Wint-to-pointer-cast"

@interface FMIceLinkSTUNConnectionIdAttribute : FMIceLinkSTUNAttribute 

/// <summary>
/// Gets the connection ID.
/// </summary>
- (long long) connectionId;
/// <summary>
/// Initializes a new instance of the <see cref="FMIceLinkSTUNChannelNumberAttribute" /> class.
/// </summary>
/// <param name="valueBytes">The attribute value as a byte array.</param>
+ (FMIceLinkSTUNConnectionIdAttribute*) fromValueBytesWithValueBytes:(NSMutableData*)valueBytes;
/// <summary>
/// Initializes a new instance of the <see cref="FMIceLinkSTUNChannelNumberAttribute" /> class.
/// </summary>
/// <param name="valueBytes">The attribute value as a byte array.</param>
+ (FMIceLinkSTUNConnectionIdAttribute*) fromValueBytes:(NSMutableData*)valueBytes;
- (NSMutableData*) getValueBytes;
/// <summary>
/// Initializes a new instance of the <see cref="FMIceLinkSTUNConnectionIdAttribute" /> class.
/// </summary>
/// <param name="connectionId">The connection ID.</param>
- (id) initWithConnectionId:(long long)connectionId;
/// <summary>
/// Sets the connection ID.
/// </summary>
- (void) setConnectionId:(long long)value;
/// <summary>
/// Initializes a new instance of the <see cref="FMIceLinkSTUNConnectionIdAttribute" /> class.
/// </summary>
/// <param name="connectionId">The connection ID.</param>
+ (FMIceLinkSTUNConnectionIdAttribute*) stunConnectionIdAttributeWithConnectionId:(long long)connectionId;
/// <summary>
/// Returns a string that represents this instance.
/// </summary>
/// <returns>
/// A string that represents this instance.
/// </returns>
- (NSString*) toString;
/// <summary>
/// Returns a string that represents this instance.
/// </summary>
/// <returns>
/// A string that represents this instance.
/// </returns>
- (NSString*) description;

@end


@class NSMutableDataFMExtensions;

/// <summary>
/// A generic STUN connection-attempt message.
/// </summary>
#pragma clang diagnostic ignored "-Wshorten-64-to-32"
#pragma clang diagnostic ignored "-Wint-to-pointer-cast"

@interface FMIceLinkSTUNConnectionAttemptMessage : FMIceLinkSTUNMessage 

/// <summary>
/// Initializes a new instance of the <see cref="FMIceLinkSTUNConnectionAttemptMessage" /> class.
/// </summary>
/// <param name="messageType">The type of the message.</param>
/// <param name="transactionId">The transaction ID.</param>
- (id) initWithMessageType:(FMIceLinkSTUNMessageType)messageType transactionId:(NSMutableData*)transactionId;
/// <summary>
/// Initializes a new instance of the <see cref="FMIceLinkSTUNConnectionAttemptMessage" /> class.
/// </summary>
/// <param name="messageType">The type of the message.</param>
/// <param name="transactionId">The transaction ID.</param>
+ (FMIceLinkSTUNConnectionAttemptMessage*) stunConnectionAttemptMessageWithMessageType:(FMIceLinkSTUNMessageType)messageType transactionId:(NSMutableData*)transactionId;
/// <summary>
/// Initializes a new instance of the <see cref="FMIceLinkSTUNConnectionAttemptMessage" /> class.
/// </summary>
/// <param name="messageType">The type of the message.</param>
/// <param name="transactionId">The transaction ID.</param>
+ (FMIceLinkSTUNConnectionAttemptMessage*) stunConnectionAttemptMessageWithType:(FMIceLinkSTUNMessageType)messageType transactionId:(NSMutableData*)transactionId;

@end


@class NSMutableDataFMExtensions;

/// <summary>
/// A generic STUN connection-bind message.
/// </summary>
#pragma clang diagnostic ignored "-Wshorten-64-to-32"
#pragma clang diagnostic ignored "-Wint-to-pointer-cast"

@interface FMIceLinkSTUNConnectionBindMessage : FMIceLinkSTUNMessage 

/// <summary>
/// Initializes a new instance of the <see cref="FMIceLinkSTUNConnectionBindMessage" /> class.
/// </summary>
/// <param name="messageType">The type of the message.</param>
/// <param name="transactionId">The transaction ID.</param>
- (id) initWithMessageType:(FMIceLinkSTUNMessageType)messageType transactionId:(NSMutableData*)transactionId;
/// <summary>
/// Initializes a new instance of the <see cref="FMIceLinkSTUNConnectionBindMessage" /> class.
/// </summary>
/// <param name="messageType">The type of the message.</param>
/// <param name="transactionId">The transaction ID.</param>
+ (FMIceLinkSTUNConnectionBindMessage*) stunConnectionBindMessageWithMessageType:(FMIceLinkSTUNMessageType)messageType transactionId:(NSMutableData*)transactionId;
/// <summary>
/// Initializes a new instance of the <see cref="FMIceLinkSTUNConnectionBindMessage" /> class.
/// </summary>
/// <param name="messageType">The type of the message.</param>
/// <param name="transactionId">The transaction ID.</param>
+ (FMIceLinkSTUNConnectionBindMessage*) stunConnectionBindMessageWithType:(FMIceLinkSTUNMessageType)messageType transactionId:(NSMutableData*)transactionId;

@end



/// <summary>
/// A STUN connection-bind request.
/// </summary>
#pragma clang diagnostic ignored "-Wshorten-64-to-32"
#pragma clang diagnostic ignored "-Wint-to-pointer-cast"

@interface FMIceLinkSTUNConnectionBindRequest : FMIceLinkSTUNConnectionBindMessage 

/// <summary>
/// Initializes a new instance of the <see cref="FMIceLinkSTUNConnectionBindRequest" /> class.
/// </summary>
- (id) init;
/// <summary>
/// Initializes a new instance of the <see cref="FMIceLinkSTUNConnectionBindRequest" /> class.
/// </summary>
+ (FMIceLinkSTUNConnectionBindRequest*) stunConnectionBindRequest;

@end


@class NSMutableDataFMExtensions;

/// <summary>
/// A STUN connection-bind response.
/// </summary>
#pragma clang diagnostic ignored "-Wshorten-64-to-32"
#pragma clang diagnostic ignored "-Wint-to-pointer-cast"

@interface FMIceLinkSTUNConnectionBindResponse : FMIceLinkSTUNConnectionBindMessage 

/// <summary>
/// Initializes a new instance of the <see cref="FMIceLinkSTUNConnectionBindResponse" /> class.
/// </summary>
/// <param name="transactionId">The transaction ID.</param>
/// <param name="success">Whether the request was successful.</param>
- (id) initWithTransactionId:(NSMutableData*)transactionId success:(bool)success;
/// <summary>
/// Initializes a new instance of the <see cref="FMIceLinkSTUNConnectionBindResponse" /> class.
/// </summary>
/// <param name="transactionId">The transaction ID.</param>
/// <param name="success">Whether the request was successful.</param>
+ (FMIceLinkSTUNConnectionBindResponse*) stunConnectionBindResponseWithTransactionId:(NSMutableData*)transactionId success:(bool)success;

@end


@class NSMutableDataFMExtensions;

/// <summary>
/// A generic STUN connect message.
/// </summary>
#pragma clang diagnostic ignored "-Wshorten-64-to-32"
#pragma clang diagnostic ignored "-Wint-to-pointer-cast"

@interface FMIceLinkSTUNConnectMessage : FMIceLinkSTUNMessage 

/// <summary>
/// Initializes a new instance of the <see cref="FMIceLinkSTUNConnectMessage" /> class.
/// </summary>
/// <param name="messageType">The type of the message.</param>
/// <param name="transactionId">The transaction ID.</param>
- (id) initWithMessageType:(FMIceLinkSTUNMessageType)messageType transactionId:(NSMutableData*)transactionId;
/// <summary>
/// Initializes a new instance of the <see cref="FMIceLinkSTUNConnectMessage" /> class.
/// </summary>
/// <param name="messageType">The type of the message.</param>
/// <param name="transactionId">The transaction ID.</param>
+ (FMIceLinkSTUNConnectMessage*) stunConnectMessageWithMessageType:(FMIceLinkSTUNMessageType)messageType transactionId:(NSMutableData*)transactionId;
/// <summary>
/// Initializes a new instance of the <see cref="FMIceLinkSTUNConnectMessage" /> class.
/// </summary>
/// <param name="messageType">The type of the message.</param>
/// <param name="transactionId">The transaction ID.</param>
+ (FMIceLinkSTUNConnectMessage*) stunConnectMessageWithType:(FMIceLinkSTUNMessageType)messageType transactionId:(NSMutableData*)transactionId;

@end


@class NSMutableDataFMExtensions;

/// <summary>
/// A STUN connect response.
/// </summary>
#pragma clang diagnostic ignored "-Wshorten-64-to-32"
#pragma clang diagnostic ignored "-Wint-to-pointer-cast"

@interface FMIceLinkSTUNConnectResponse : FMIceLinkSTUNConnectMessage 

/// <summary>
/// Initializes a new instance of the <see cref="FMIceLinkSTUNConnectResponse" /> class.
/// </summary>
/// <param name="transactionId">The transaction ID.</param>
/// <param name="success">Whether the request was successful.</param>
- (id) initWithTransactionId:(NSMutableData*)transactionId success:(bool)success;
/// <summary>
/// Initializes a new instance of the <see cref="FMIceLinkSTUNConnectResponse" /> class.
/// </summary>
/// <param name="transactionId">The transaction ID.</param>
/// <param name="success">Whether the request was successful.</param>
+ (FMIceLinkSTUNConnectResponse*) stunConnectResponseWithTransactionId:(NSMutableData*)transactionId success:(bool)success;

@end



/// <summary>
/// A STUN connect request.
/// </summary>
#pragma clang diagnostic ignored "-Wshorten-64-to-32"
#pragma clang diagnostic ignored "-Wint-to-pointer-cast"

@interface FMIceLinkSTUNConnectRequest : FMIceLinkSTUNConnectMessage 

/// <summary>
/// Initializes a new instance of the <see cref="FMIceLinkSTUNConnectRequest" /> class.
/// </summary>
- (id) init;
/// <summary>
/// Initializes a new instance of the <see cref="FMIceLinkSTUNConnectRequest" /> class.
/// </summary>
+ (FMIceLinkSTUNConnectRequest*) stunConnectRequest;

@end


@class FMIceLinkTURNAllocation;
@class FMIceLinkSTUNMessage;
@class FMIceLinkTransportAddress;
@class NSMutableDataFMExtensions;

/// <summary>
/// Details about a TURN receive operation.
/// </summary>
#pragma clang diagnostic ignored "-Wshorten-64-to-32"
#pragma clang diagnostic ignored "-Wint-to-pointer-cast"

@interface FMIceLinkReceiveInfo : NSObject 

/// <summary>
/// Gets the address of the allocated socket that received the data.
/// </summary>
- (FMIceLinkTransportAddress*) allocationAddress;
/// <summary>
/// Gets the data being received.
/// </summary>
- (NSMutableData*) data;
- (id) initWithIndication:(FMIceLinkSTUNMessage*)indication allocation:(FMIceLinkTURNAllocation*)allocation;
/// <summary>
/// Gets the peer address to which the data is being sent.
/// </summary>
- (FMIceLinkTransportAddress*) peerAddress;
+ (FMIceLinkReceiveInfo*) receiveInfoWithIndication:(FMIceLinkSTUNMessage*)indication allocation:(FMIceLinkTURNAllocation*)allocation;
/// <summary>
/// Sets the data being received.
/// </summary>
- (void) setData:(NSMutableData*)value;

@end


@class FMIceLinkTURNAllocation;
@class FMIceLinkSTUNMessage;
@class FMIceLinkTransportAddress;
@class NSMutableDataFMExtensions;

/// <summary>
/// Details about a TURN send operation.
/// </summary>
#pragma clang diagnostic ignored "-Wshorten-64-to-32"
#pragma clang diagnostic ignored "-Wint-to-pointer-cast"

@interface FMIceLinkSendInfo : NSObject 

/// <summary>
/// Gets the address of the allocated socket that sent the data
/// if the operation was successful.
/// </summary>
- (FMIceLinkTransportAddress*) allocationAddress;
/// <summary>
/// Gets the data being sent.
/// </summary>
- (NSMutableData*) data;
- (id) initWithIndication:(FMIceLinkSTUNMessage*)indication;
- (id) initWithIndication:(FMIceLinkSTUNMessage*)indication allocation:(FMIceLinkTURNAllocation*)allocation;
/// <summary>
/// Gets the peer address to which the data is being sent.
/// </summary>
- (FMIceLinkTransportAddress*) peerAddress;
+ (FMIceLinkSendInfo*) sendInfoWithIndication:(FMIceLinkSTUNMessage*)indication;
+ (FMIceLinkSendInfo*) sendInfoWithIndication:(FMIceLinkSTUNMessage*)indication allocation:(FMIceLinkTURNAllocation*)allocation;
/// <summary>
/// Sets the data being sent.
/// </summary>
- (void) setData:(NSMutableData*)value;

@end


@class FMIceLinkSTUNMessage;
@class NSStringFMExtensions;

/// <summary>
/// Details about a TURN refresh request or response.
/// </summary>
#pragma clang diagnostic ignored "-Wshorten-64-to-32"
#pragma clang diagnostic ignored "-Wint-to-pointer-cast"

@interface FMIceLinkRefreshInfo : NSObject 

- (id) initWithRequest:(FMIceLinkSTUNMessage*)request;
- (id) initWithRequest:(FMIceLinkSTUNMessage*)request response:(FMIceLinkSTUNMessage*)response;
/// <summary>
/// Gets the number of seconds to extend
/// the allocation. A zero indicates a deallocation,
/// and a negative number indicates the default
/// server extension time.
/// </summary>
- (int) lifetime;
/// <summary>
/// Gets the nonce used when nonce-based
/// security is enabled on the server.
/// </summary>
- (NSString*) nonce;
/// <summary>
/// Gets the realm credential.
/// </summary>
- (NSString*) realm;
+ (FMIceLinkRefreshInfo*) refreshInfoWithRequest:(FMIceLinkSTUNMessage*)request;
+ (FMIceLinkRefreshInfo*) refreshInfoWithRequest:(FMIceLinkSTUNMessage*)request response:(FMIceLinkSTUNMessage*)response;
/// <summary>
/// Sets the number of seconds to extend
/// the allocation. A zero indicates a deallocation,
/// and a negative number indicates the default
/// server extension time.
/// </summary>
- (void) setLifetime:(int)value;
/// <summary>
/// Sets the nonce used when nonce-based
/// security is enabled on the server.
/// </summary>
- (void) setNonce:(NSString*)value;
/// <summary>
/// Sets the realm credential.
/// </summary>
- (void) setRealm:(NSString*)value;
/// <summary>
/// Sets the username credential.
/// </summary>
- (void) setUsername:(NSString*)value;
/// <summary>
/// Gets whether or not the
/// response indicates success.
/// </summary>
- (bool) success;
/// <summary>
/// Gets the time-to-expiry of the allocation
/// if the request was processed successfully.
/// </summary>
- (int) timeToExpiry;
/// <summary>
/// Gets the username credential.
/// </summary>
- (NSString*) username;

@end


@class FMIceLinkSTUNMessage;
@class NSStringFMExtensions;
@class FMIceLinkTransportAddress;

/// <summary>
/// Details about a TURN create-permission request or response.
/// </summary>
#pragma clang diagnostic ignored "-Wshorten-64-to-32"
#pragma clang diagnostic ignored "-Wint-to-pointer-cast"

@interface FMIceLinkCreatePermissionInfo : NSObject 

+ (FMIceLinkCreatePermissionInfo*) createPermissionInfoWithRequest:(FMIceLinkSTUNMessage*)request;
+ (FMIceLinkCreatePermissionInfo*) createPermissionInfoWithRequest:(FMIceLinkSTUNMessage*)request response:(FMIceLinkSTUNMessage*)response;
- (id) initWithRequest:(FMIceLinkSTUNMessage*)request;
- (id) initWithRequest:(FMIceLinkSTUNMessage*)request response:(FMIceLinkSTUNMessage*)response;
/// <summary>
/// Gets the nonce used when nonce-based
/// security is enabled on the server.
/// </summary>
- (NSString*) nonce;
/// <summary>
/// Gets the peer address for which permission is being created.
/// </summary>
- (FMIceLinkTransportAddress*) peerAddress;
/// <summary>
/// Gets the realm credential.
/// </summary>
- (NSString*) realm;
/// <summary>
/// Sets the nonce used when nonce-based
/// security is enabled on the server.
/// </summary>
- (void) setNonce:(NSString*)value;
/// <summary>
/// Sets the realm credential.
/// </summary>
- (void) setRealm:(NSString*)value;
/// <summary>
/// Sets the username credential.
/// </summary>
- (void) setUsername:(NSString*)value;
/// <summary>
/// Gets whether or not the
/// response indicates success.
/// </summary>
- (bool) success;
/// <summary>
/// Gets the username credential.
/// </summary>
- (NSString*) username;

@end


@class FMIceLinkAllocateInfo;
@class NSStringFMExtensions;
@class FMIceLinkChannelBindInfo;
@class FMIceLinkConnectInfo;
@class FMIceLinkConnectionBindInfo;
@class FMIceLinkCreatePermissionInfo;
@class FMIceLinkReceiveInfo;
@class FMIceLinkRefreshInfo;
@class FMIceLinkTransportAddress;
@class FMIceLinkSendInfo;
@class FMIceLinkServer;

/// <summary>
/// Arguments for IceLink server events.
/// </summary>
#pragma clang diagnostic ignored "-Wshorten-64-to-32"
#pragma clang diagnostic ignored "-Wint-to-pointer-cast"

@interface FMIceLinkServerEventArgs : NSObject 

/// <summary>
/// Gets allocate-specific details for TURN allocate requests/responses.
/// </summary>
- (FMIceLinkAllocateInfo*) allocateInfo;
- (bool) cancelled;
- (NSString*) cancelledError;
/// <summary>
/// In "before" operations, cancels the event so it the request or
/// indication is not processed by the server.
/// </summary>
/// <param name="error">The error to send back to the client.</param>
- (void) cancelWithError:(NSString*)error;
/// <summary>
/// Gets channel-bind-specific details for TURN channel-bind requests/responses.
/// </summary>
- (FMIceLinkChannelBindInfo*) channelBindInfo;
/// <summary>
/// Gets connect-specific details for TURN connect requests/responses.
/// </summary>
- (FMIceLinkConnectInfo*) connectInfo;
/// <summary>
/// Gets connect-specific details for TURN connection-bind requests/responses.
/// </summary>
- (FMIceLinkConnectionBindInfo*) connectionBindInfo;
/// <summary>
/// Gets create-permission-specific details for TURN create-permission requests/responses.
/// </summary>
- (FMIceLinkCreatePermissionInfo*) createPermissionInfo;
/// <summary>
/// Gets the event type.
/// </summary>
- (FMIceLinkEventType) eventType;
- (id) initWithServer:(FMIceLinkServer*)server remoteAddress:(FMIceLinkTransportAddress*)remoteAddress;
/// <summary>
/// Gets the protocol type.
/// </summary>
- (FMIceLinkProtocolType) protocolType;
/// <summary>
/// Gets receive-specific details when data is being received by a TURN allocation.
/// </summary>
- (FMIceLinkReceiveInfo*) receiveInfo;
/// <summary>
/// Gets refresh-specific details for TURN refresh requests/responses.
/// </summary>
- (FMIceLinkRefreshInfo*) refreshInfo;
/// <summary>
/// Gets the remote address.
/// </summary>
- (FMIceLinkTransportAddress*) remoteAddress;
/// <summary>
/// Gets send-specific details when data is being sent by a TURN allocation.
/// </summary>
- (FMIceLinkSendInfo*) sendInfo;
/// <summary>
/// Gets the server.
/// </summary>
- (FMIceLinkServer*) server;
+ (FMIceLinkServerEventArgs*) serverEventArgsWithServer:(FMIceLinkServer*)server remoteAddress:(FMIceLinkTransportAddress*)remoteAddress;
- (void) setAllocateInfo:(FMIceLinkAllocateInfo*)value;
- (void) setCancelled:(bool)value;
- (void) setCancelledError:(NSString*)value;
- (void) setChannelBindInfo:(FMIceLinkChannelBindInfo*)value;
- (void) setConnectInfo:(FMIceLinkConnectInfo*)value;
- (void) setConnectionBindInfo:(FMIceLinkConnectionBindInfo*)value;
- (void) setCreatePermissionInfo:(FMIceLinkCreatePermissionInfo*)value;
- (void) setEventType:(FMIceLinkEventType)value;
- (void) setProtocolType:(FMIceLinkProtocolType)value;
- (void) setReceiveInfo:(FMIceLinkReceiveInfo*)value;
- (void) setRefreshInfo:(FMIceLinkRefreshInfo*)value;
- (void) setRemoteAddress:(FMIceLinkTransportAddress*)value;
- (void) setSendInfo:(FMIceLinkSendInfo*)value;
- (void) setServer:(FMIceLinkServer*)value;

@end


@class NSExceptionFMExtensions;
@class NSStringFMExtensions;

/// <summary>
/// Arguments for the link down event.
/// </summary>
#pragma clang diagnostic ignored "-Wshorten-64-to-32"
#pragma clang diagnostic ignored "-Wint-to-pointer-cast"

@interface FMIceLinkLinkDownArgs : FMIceLinkBaseLinkArgs 

/// <summary>
/// Gets whether a dead stream was detected.
/// </summary>
- (bool) deadStreamDetected;
/// <summary>
/// Gets the exception that occurred.
/// </summary>
- (NSException*) exception;
/// <summary>
/// Deserializes an instance from JSON.
/// </summary>
/// <param name="linkDownArgsJson">The JSON to deserialize.</param>
/// <returns>The deserialized link down arguments.</returns>
+ (FMIceLinkLinkDownArgs*) fromJsonWithLinkDownArgsJson:(NSString*)linkDownArgsJson;
- (id) init;
/// <summary>
/// Gets whether the link is switching roles.
/// </summary>
- (bool) isSwitchingRoles;
+ (FMIceLinkLinkDownArgs*) linkDownArgs;
/// <summary>
/// Gets whether a new offer was received from the peer.
/// </summary>
- (bool) newOfferReceived;
/// <summary>
/// Gets the reason, if specified.
/// </summary>
- (NSString*) reason;
/// <summary>
/// Gets whether a relay failure was detected.
/// </summary>
- (bool) relayFailureDetected;
/// <summary>
/// Gets whether to retry the connection.
/// </summary>
- (bool) retry;
- (void) setDeadStreamDetected:(bool)value;
- (void) setException:(NSException*)value;
- (void) setIsSwitchingRoles:(bool)value;
- (void) setNewOfferReceived:(bool)value;
- (void) setReason:(NSString*)value;
- (void) setRelayFailureDetected:(bool)value;
/// <summary>
/// Sets whether to retry the connection.
/// </summary>
- (void) setRetry:(bool)value;
- (void) setTimedOut:(bool)value;
/// <summary>
/// Gets whether the link timed out.
/// </summary>
- (bool) timedOut;
/// <summary>
/// Serializes this instance to JSON.
/// </summary>
/// <returns></returns>
- (NSString*) toJson;
/// <summary>
/// Serializes an instance to JSON.
/// </summary>
/// <param name="linkDownArgs">The link down arguments to serialize.</param>
/// <returns>The serialized JSON.</returns>
+ (NSString*) toJsonWithLinkDownArgs:(FMIceLinkLinkDownArgs*)linkDownArgs;

@end


@class FMIceLinkStream;

/// <summary>
/// Arguments for the stream down event.
/// </summary>
#pragma clang diagnostic ignored "-Wshorten-64-to-32"
#pragma clang diagnostic ignored "-Wint-to-pointer-cast"

@interface FMIceLinkStreamLinkDownArgs : FMIceLinkLinkDownArgs 

- (id) init;
- (void) setStream:(FMIceLinkStream*)value;
- (void) setStreamIndex:(int)value;
/// <summary>
/// Gets the source stream.
/// </summary>
- (FMIceLinkStream*) stream;
/// <summary>
/// Gets the source stream index.
/// </summary>
- (int) streamIndex;
+ (FMIceLinkStreamLinkDownArgs*) streamLinkDownArgs;

@end


@class NSStringFMExtensions;

/// <summary>
/// Arguments for the link init event.
/// </summary>
#pragma clang diagnostic ignored "-Wshorten-64-to-32"
#pragma clang diagnostic ignored "-Wint-to-pointer-cast"

@interface FMIceLinkLinkInitArgs : FMIceLinkBaseLinkArgs 

/// <summary>
/// Deserializes an instance from JSON.
/// </summary>
/// <param name="linkInitArgsJson">The JSON to deserialize.</param>
/// <returns>The deserialized link init arguments.</returns>
+ (FMIceLinkLinkInitArgs*) fromJsonWithLinkInitArgsJson:(NSString*)linkInitArgsJson;
- (id) init;
/// <summary>
/// Gets whether the current process is the initiator.
/// </summary>
- (bool) initiator;
+ (FMIceLinkLinkInitArgs*) linkInitArgs;
- (void) setInitiator:(bool)value;
/// <summary>
/// Serializes this instance to JSON.
/// </summary>
/// <returns></returns>
- (NSString*) toJson;
/// <summary>
/// Serializes an instance to JSON.
/// </summary>
/// <param name="linkInitArgs">The link init arguments to serialize.</param>
/// <returns>The serialized JSON.</returns>
+ (NSString*) toJsonWithLinkInitArgs:(FMIceLinkLinkInitArgs*)linkInitArgs;

@end


@class FMIceLinkStream;

/// <summary>
/// Arguments for the stream init event.
/// </summary>
#pragma clang diagnostic ignored "-Wshorten-64-to-32"
#pragma clang diagnostic ignored "-Wint-to-pointer-cast"

@interface FMIceLinkStreamLinkInitArgs : FMIceLinkLinkInitArgs 

- (id) init;
- (void) setStream:(FMIceLinkStream*)value;
- (void) setStreamIndex:(int)value;
/// <summary>
/// Gets the source stream.
/// </summary>
- (FMIceLinkStream*) stream;
/// <summary>
/// Gets the source stream index.
/// </summary>
- (int) streamIndex;
+ (FMIceLinkStreamLinkInitArgs*) streamLinkInitArgs;

@end


@class NSMutableArrayFMExtensions;
@class NSStringFMExtensions;

/// <summary>
/// Arguments for the link up event.
/// </summary>
#pragma clang diagnostic ignored "-Wshorten-64-to-32"
#pragma clang diagnostic ignored "-Wint-to-pointer-cast"

@interface FMIceLinkLinkUpArgs : FMIceLinkBaseLinkArgs 

/// <summary>
/// Deserializes an instance from JSON.
/// </summary>
/// <param name="linkUpArgsJson">The JSON to deserialize.</param>
/// <returns>The deserialized link up arguments.</returns>
+ (FMIceLinkLinkUpArgs*) fromJsonWithLinkUpArgsJson:(NSString*)linkUpArgsJson;
- (id) init;
+ (FMIceLinkLinkUpArgs*) linkUpArgs;
/// <summary>
/// Gets the negotiated streams.
/// </summary>
- (NSMutableArray*) negotiatedStreams;
- (void) setNegotiatedStreams:(NSMutableArray*)value;
/// <summary>
/// Serializes this instance to JSON.
/// </summary>
/// <returns></returns>
- (NSString*) toJson;
/// <summary>
/// Serializes an instance to JSON.
/// </summary>
/// <param name="linkUpArgs">The link up arguments to serialize.</param>
/// <returns>The serialized JSON.</returns>
+ (NSString*) toJsonWithLinkUpArgs:(FMIceLinkLinkUpArgs*)linkUpArgs;

@end


@class FMIceLinkStream;

/// <summary>
/// Arguments for the stream up event.
/// </summary>
#pragma clang diagnostic ignored "-Wshorten-64-to-32"
#pragma clang diagnostic ignored "-Wint-to-pointer-cast"

@interface FMIceLinkStreamLinkUpArgs : FMIceLinkLinkUpArgs 

- (id) init;
/// <summary>
/// Gets the negotiated stream.
/// </summary>
- (FMIceLinkStream*) negotiatedStream;
- (void) setNegotiatedStream:(FMIceLinkStream*)value;
- (void) setStream:(FMIceLinkStream*)value;
- (void) setStreamIndex:(int)value;
/// <summary>
/// Gets the source stream.
/// </summary>
- (FMIceLinkStream*) stream;
/// <summary>
/// Gets the source stream index.
/// </summary>
- (int) streamIndex;
+ (FMIceLinkStreamLinkUpArgs*) streamLinkUpArgs;

@end


@class FMIceLinkOfferAnswer;
@class NSStringFMExtensions;

/// <summary>
/// Arguments for the link offer/answer event.
/// </summary>
#pragma clang diagnostic ignored "-Wshorten-64-to-32"
#pragma clang diagnostic ignored "-Wint-to-pointer-cast"

@interface FMIceLinkLinkOfferAnswerArgs : FMIceLinkBaseLinkArgs 

/// <summary>
/// Deserializes an instance from JSON.
/// </summary>
/// <param name="linkOfferAnswerArgsJson">The JSON to deserialize.</param>
/// <returns>The deserialized link offer/answer arguments.</returns>
+ (FMIceLinkLinkOfferAnswerArgs*) fromJsonWithLinkOfferAnswerArgsJson:(NSString*)linkOfferAnswerArgsJson;
- (id) init;
+ (FMIceLinkLinkOfferAnswerArgs*) linkOfferAnswerArgs;
/// <summary>
/// Gets the created offer/answer.
/// </summary>
- (FMIceLinkOfferAnswer*) offerAnswer;
- (void) setOfferAnswer:(FMIceLinkOfferAnswer*)value;
/// <summary>
/// Serializes this instance to JSON.
/// </summary>
/// <returns></returns>
- (NSString*) toJson;
/// <summary>
/// Serializes an instance to JSON.
/// </summary>
/// <param name="linkOfferAnswerArgs">The link offer/answer arguments to serialize.</param>
/// <returns>The serialized JSON.</returns>
+ (NSString*) toJsonWithLinkOfferAnswerArgs:(FMIceLinkLinkOfferAnswerArgs*)linkOfferAnswerArgs;

@end



/// <summary>
/// Arguments for the stream receive-RTCP event.
/// </summary>
#pragma clang diagnostic ignored "-Wshorten-64-to-32"
#pragma clang diagnostic ignored "-Wint-to-pointer-cast"

@interface FMIceLinkStreamLinkReceiveRTCPArgs : FMIceLinkLinkReceiveRTCPArgs 

- (id) init;
+ (FMIceLinkStreamLinkReceiveRTCPArgs*) streamLinkReceiveRTCPArgs;

@end


@class NSStringFMExtensions;

/// <summary>
/// Arguments for the IceLink server's relay-authenticate event.
/// </summary>
#pragma clang diagnostic ignored "-Wshorten-64-to-32"
#pragma clang diagnostic ignored "-Wint-to-pointer-cast"

@interface FMIceLinkRelayAuthenticateArgs : NSObject 

/// <summary>
/// Initializes a new instance of the <see cref="FMIceLinkRelayAuthenticateArgs" /> class.
/// </summary>
/// <param name="username">The username from the request.</param>
/// <param name="realm">The realm from the request.</param>
/// <param name="operation">The operation.</param>
- (id) initWithUsername:(NSString*)username realm:(NSString*)realm operation:(FMIceLinkRelayOperation)operation;
/// <summary>
/// Gets the operation.
/// </summary>
- (FMIceLinkRelayOperation) operation;
/// <summary>
/// Gets the realm from the request.
/// </summary>
- (NSString*) realm;
/// <summary>
/// Initializes a new instance of the <see cref="FMIceLinkRelayAuthenticateArgs" /> class.
/// </summary>
/// <param name="username">The username from the request.</param>
/// <param name="realm">The realm from the request.</param>
/// <param name="operation">The operation.</param>
+ (FMIceLinkRelayAuthenticateArgs*) relayAuthenticateArgsWithUsername:(NSString*)username realm:(NSString*)realm operation:(FMIceLinkRelayOperation)operation;
/// <summary>
/// Gets the username from the request.
/// </summary>
- (NSString*) username;

@end


@class NSMutableDataFMExtensions;
@class NSStringFMExtensions;

/// <summary>
/// The result of attempting to authenticate a relay request.
/// </summary>
#pragma clang diagnostic ignored "-Wshorten-64-to-32"
#pragma clang diagnostic ignored "-Wint-to-pointer-cast"

@interface FMIceLinkRelayAuthenticateResult : NSObject 

/// <summary>
/// Initializes a new instance of the <see cref="FMIceLinkRelayAuthenticateResult" /> class
/// using a long-term key.
/// </summary>
/// <param name="longTermKeyBytes">The long-term key bytes, calculated as the MD5 hash
/// of the following UTF8-encoded input: "username:realm:password".</param>
+ (FMIceLinkRelayAuthenticateResult*) fromLongTermKeyBytesWithLongTermKeyBytes:(NSMutableData*)longTermKeyBytes;
/// <summary>
/// Initializes a new instance of the <see cref="FMIceLinkRelayAuthenticateResult" /> class
/// using a long-term key.
/// </summary>
/// <param name="longTermKeyBytes">The long-term key bytes, calculated as the MD5 hash
/// of the following UTF8-encoded input: "username:realm:password".</param>
+ (FMIceLinkRelayAuthenticateResult*) fromLongTermKeyBytes:(NSMutableData*)longTermKeyBytes;
/// <summary>
/// Initializes a new instance of the <see cref="FMIceLinkRelayAuthenticateResult" /> class
/// using a plaintext password.
/// </summary>
/// <param name="password">The user's password in plain text.</param>
+ (FMIceLinkRelayAuthenticateResult*) fromPasswordWithPassword:(NSString*)password;
/// <summary>
/// Initializes a new instance of the <see cref="FMIceLinkRelayAuthenticateResult" /> class
/// using a plaintext password.
/// </summary>
/// <param name="password">The user's password in plain text.</param>
+ (FMIceLinkRelayAuthenticateResult*) fromPassword:(NSString*)password;
/// <summary>
/// Gets the long-term key bytes, calculated as the MD5 hash of the
/// following UTF8-encoded input: "username:realm:password" (for convenience,
/// use STUN.CreateLongTermKey to calculate).
/// </summary>
- (NSMutableData*) longTermKeyBytes;
/// <summary>
/// Gets the user's password in plain text.
/// </summary>
- (NSString*) password;

@end



/// <summary>
/// Arguments for the stream receive RTP event.
/// </summary>
#pragma clang diagnostic ignored "-Wshorten-64-to-32"
#pragma clang diagnostic ignored "-Wint-to-pointer-cast"

@interface FMIceLinkStreamLinkReceiveRTPArgs : FMIceLinkLinkReceiveRTPArgs 

- (id) init;
+ (FMIceLinkStreamLinkReceiveRTPArgs*) streamLinkReceiveRTPArgs;

@end


@class NSMutableDataFMExtensions;
@class NSDateFMExtensions;
@class NSStringFMExtensions;

#pragma clang diagnostic ignored "-Wshorten-64-to-32"
#pragma clang diagnostic ignored "-Wint-to-pointer-cast"

@interface FMIceLinkASN1Any : NSObject 

+ (FMIceLinkASN1Any*) asn1Any;
+ (int) decode128IntegerWithBytes:(NSMutableData*)bytes;
+ (int) decode128IntegerWithBytes:(NSMutableData*)bytes offset:(int)offset length:(int)length;
+ (long long) decode128LongWithBytes:(NSMutableData*)bytes;
+ (long long) decode128LongWithBytes:(NSMutableData*)bytes offset:(int)offset length:(int)length;
+ (short) decode128ShortWithBytes:(NSMutableData*)bytes;
+ (short) decode128ShortWithBytes:(NSMutableData*)bytes offset:(int)offset length:(int)length;
+ (NSMutableData*) decode128WithEncoded:(NSMutableData*)encoded;
+ (NSMutableData*) decode128WithEncoded:(NSMutableData*)encoded offset:(int)offset length:(int)length;
+ (NSDate*) deserializeTimestampWithTimestampString:(NSString*)timestampString;
+ (NSDate*) deserializeTimestampWithString:(NSString*)timestampString;
+ (NSMutableData*) encode128IntegerWithValue:(int)value;
+ (NSMutableData*) encode128LongWithValue:(long long)value;
+ (NSMutableData*) encode128ShortWithValue:(short)value;
+ (NSMutableData*) encode128WithValue:(NSMutableData*)value;
- (NSMutableData*) getBytes;
+ (NSMutableData*) getBytesWithAny:(FMIceLinkASN1Any*)any;
- (NSMutableData*) getContents;
- (void) getPropertiesWithTag:(int*)tag klass:(int*)klass isConstructed:(bool*)isConstructed isIndefinite:(bool*)isIndefinite;
- (id) init;
+ (int) length128WithEncoded:(NSMutableData*)encoded offset:(int)offset;
+ (NSMutableData*) padWithBytes:(NSMutableData*)bytes length:(int)length;
+ (NSMutableData*) padWithBytes:(NSMutableData*)bytes length:(int)length value:(int)value;
+ (FMIceLinkASN1Any*) parseBytesWithBytes:(NSMutableData*)bytes;
+ (FMIceLinkASN1Any*) parseBytes:(NSMutableData*)bytes;
+ (FMIceLinkASN1Any*) parseBytesWithBytes:(NSMutableData*)bytes offset:(int)offset byteCount:(int*)byteCount;
+ (FMIceLinkASN1Any*) parseBytes:(NSMutableData*)bytes offset:(int)offset byteCount:(int*)byteCount;
+ (NSString*) serializeTimestampWithTimestamp:(NSDate*)timestamp yearLength:(int)yearLength monthLength:(int)monthLength dayLength:(int)dayLength hourLength:(int)hourLength minuteLength:(int)minuteLength secondLength:(int)secondLength;
+ (NSString*) serializeTimestamp:(NSDate*)timestamp yearLength:(int)yearLength monthLength:(int)monthLength dayLength:(int)dayLength hourLength:(int)hourLength minuteLength:(int)minuteLength secondLength:(int)secondLength;
- (NSMutableData*) sourceData;
+ (NSMutableData*) trimWithBytes:(NSMutableData*)bytes;
+ (NSMutableData*) trimWithBytes:(NSMutableData*)bytes minLength:(int)minLength;
+ (NSMutableData*) trimWithBytes:(NSMutableData*)bytes minLength:(int)minLength maxLength:(int)maxLength;

@end


@class NSMutableArrayFMExtensions;

#pragma clang diagnostic ignored "-Wshorten-64-to-32"
#pragma clang diagnostic ignored "-Wint-to-pointer-cast"

@interface FMIceLinkASN1ArrayOf : FMIceLinkASN1Any 

+ (FMIceLinkASN1ArrayOf*) asn1ArrayOf;
- (id) init;
- (void) setValues:(NSMutableArray*)value;
- (NSMutableArray*) values;

@end


@class NSMutableArrayFMExtensions;

#pragma clang diagnostic ignored "-Wshorten-64-to-32"
#pragma clang diagnostic ignored "-Wint-to-pointer-cast"

@interface FMIceLinkASN1Array : FMIceLinkASN1Any 

+ (FMIceLinkASN1Array*) asn1Array;
- (id) init;
- (void) setValues:(NSMutableArray*)value;
- (NSMutableArray*) values;

@end


@class NSMutableDataFMExtensions;

#pragma clang diagnostic ignored "-Wshorten-64-to-32"
#pragma clang diagnostic ignored "-Wint-to-pointer-cast"

@interface FMIceLinkASN1ArrayElement : NSObject 

+ (FMIceLinkASN1ArrayElement*) asn1ArrayElementWithType:(Class)type;
+ (FMIceLinkASN1ArrayElement*) asn1ArrayElementWithType:(Class)type defaultt:(NSMutableData*)defaultt;
+ (FMIceLinkASN1ArrayElement*) asn1ArrayElementWithType:(Class)type defaultt:(NSMutableData*)defaultt optional:(bool)optional;
- (NSMutableData*) default;
- (id) initWithType:(Class)type;
- (id) initWithType:(Class)type defaultt:(NSMutableData*)defaultt;
- (id) initWithType:(Class)type defaultt:(NSMutableData*)defaultt optional:(bool)optional;
- (bool) optional;
- (void) setDefault:(NSMutableData*)value;
- (void) setOptional:(bool)value;
- (void) setType:(Class)value;
- (Class) type;

@end


@class NSStringFMExtensions;
@class NSMutableDataFMExtensions;

#pragma clang diagnostic ignored "-Wshorten-64-to-32"
#pragma clang diagnostic ignored "-Wint-to-pointer-cast"

@interface FMIceLinkASN1BitString : FMIceLinkASN1Any 

+ (FMIceLinkASN1BitString*) asn1BitString;
+ (FMIceLinkASN1BitString*) asn1BitStringWithValue:(NSString*)value;
+ (FMIceLinkASN1BitString*) fromValueBytesWithValueBytes:(NSMutableData*)valueBytes;
+ (FMIceLinkASN1BitString*) fromValueBytes:(NSMutableData*)valueBytes;
- (NSMutableData*) getContents;
- (void) getPropertiesWithTag:(int*)tag klass:(int*)klass isConstructed:(bool*)isConstructed isIndefinite:(bool*)isIndefinite;
- (id) init;
- (id) initWithValue:(NSString*)value;
+ (FMIceLinkASN1BitString*) parseContentsWithContents:(NSMutableData*)contents;
+ (FMIceLinkASN1BitString*) parseContents:(NSMutableData*)contents;
- (void) setValue:(NSString*)value;
- (void) setValueBytes:(NSMutableData*)value;
- (NSString*) value;
- (NSMutableData*) valueBytes;

@end


@class NSStringFMExtensions;
@class NSMutableDataFMExtensions;

#pragma clang diagnostic ignored "-Wshorten-64-to-32"
#pragma clang diagnostic ignored "-Wint-to-pointer-cast"

@interface FMIceLinkASN1BmpString : FMIceLinkASN1Any 

+ (FMIceLinkASN1BmpString*) asn1BmpString;
+ (FMIceLinkASN1BmpString*) asn1BmpStringWithValue:(NSString*)value;
- (NSMutableData*) getContents;
- (void) getPropertiesWithTag:(int*)tag klass:(int*)klass isConstructed:(bool*)isConstructed isIndefinite:(bool*)isIndefinite;
- (id) init;
- (id) initWithValue:(NSString*)value;
+ (FMIceLinkASN1BmpString*) parseContentsWithContents:(NSMutableData*)contents;
+ (FMIceLinkASN1BmpString*) parseContents:(NSMutableData*)contents;
- (void) setValue:(NSString*)value;
- (NSString*) value;

@end


@class NSMutableDataFMExtensions;

#pragma clang diagnostic ignored "-Wshorten-64-to-32"
#pragma clang diagnostic ignored "-Wint-to-pointer-cast"

@interface FMIceLinkASN1Boolean : FMIceLinkASN1Any 

+ (FMIceLinkASN1Boolean*) asn1Boolean;
+ (FMIceLinkASN1Boolean*) asn1BooleanWithValue:(bool)value;
- (NSMutableData*) getContents;
- (void) getPropertiesWithTag:(int*)tag klass:(int*)klass isConstructed:(bool*)isConstructed isIndefinite:(bool*)isIndefinite;
- (id) init;
- (id) initWithValue:(bool)value;
+ (FMIceLinkASN1Boolean*) parseContentsWithContents:(NSMutableData*)contents;
+ (FMIceLinkASN1Boolean*) parseContents:(NSMutableData*)contents;
- (void) setValue:(bool)value;
- (bool) value;

@end



#pragma clang diagnostic ignored "-Wshorten-64-to-32"
#pragma clang diagnostic ignored "-Wint-to-pointer-cast"

@interface FMIceLinkASN1Class : NSObject 

+ (FMIceLinkASN1Class*) asn1Class;
- (id) init;

@end


@class FMIceLinkASN1Any;
@class NSMutableDataFMExtensions;

#pragma clang diagnostic ignored "-Wshorten-64-to-32"
#pragma clang diagnostic ignored "-Wint-to-pointer-cast"

@interface FMIceLinkASN1Explicit : FMIceLinkASN1Any 

+ (FMIceLinkASN1Explicit*) asn1Explicit;
+ (FMIceLinkASN1Explicit*) asn1ExplicitWithTag:(int)tag klass:(int)klass value:(FMIceLinkASN1Any*)value;
- (NSMutableData*) getContents;
- (void) getPropertiesWithTag:(int*)tag klass:(int*)klass isConstructed:(bool*)isConstructed isIndefinite:(bool*)isIndefinite;
- (id) init;
- (id) initWithTag:(int)tag klass:(int)klass value:(FMIceLinkASN1Any*)value;
- (int) klass;
- (void) setKlass:(int)value;
- (void) setTag:(int)value;
- (void) setValue:(FMIceLinkASN1Any*)value;
- (int) tag;
- (FMIceLinkASN1Any*) value;

@end


@class NSDateFMExtensions;
@class NSMutableDataFMExtensions;

#pragma clang diagnostic ignored "-Wshorten-64-to-32"
#pragma clang diagnostic ignored "-Wint-to-pointer-cast"

@interface FMIceLinkASN1GeneralizedTime : FMIceLinkASN1Any 

+ (FMIceLinkASN1GeneralizedTime*) asn1GeneralizedTime;
+ (FMIceLinkASN1GeneralizedTime*) asn1GeneralizedTimeWithValue:(NSDate*)value;
- (NSMutableData*) getContents;
- (void) getPropertiesWithTag:(int*)tag klass:(int*)klass isConstructed:(bool*)isConstructed isIndefinite:(bool*)isIndefinite;
- (id) init;
- (id) initWithValue:(NSDate*)value;
+ (FMIceLinkASN1GeneralizedTime*) parseContentsWithContents:(NSMutableData*)contents;
+ (FMIceLinkASN1GeneralizedTime*) parseContents:(NSMutableData*)contents;
- (void) setValue:(NSDate*)value;
- (NSDate*) value;

@end


@class NSStringFMExtensions;
@class NSMutableDataFMExtensions;

#pragma clang diagnostic ignored "-Wshorten-64-to-32"
#pragma clang diagnostic ignored "-Wint-to-pointer-cast"

@interface FMIceLinkASN1GeneralString : FMIceLinkASN1Any 

+ (FMIceLinkASN1GeneralString*) asn1GeneralString;
+ (FMIceLinkASN1GeneralString*) asn1GeneralStringWithValue:(NSString*)value;
- (NSMutableData*) getContents;
- (void) getPropertiesWithTag:(int*)tag klass:(int*)klass isConstructed:(bool*)isConstructed isIndefinite:(bool*)isIndefinite;
- (id) init;
- (id) initWithValue:(NSString*)value;
+ (FMIceLinkASN1GeneralString*) parseContentsWithContents:(NSMutableData*)contents;
+ (FMIceLinkASN1GeneralString*) parseContents:(NSMutableData*)contents;
- (void) setValue:(NSString*)value;
- (NSString*) value;

@end


@class NSStringFMExtensions;
@class NSMutableDataFMExtensions;

#pragma clang diagnostic ignored "-Wshorten-64-to-32"
#pragma clang diagnostic ignored "-Wint-to-pointer-cast"

@interface FMIceLinkASN1GraphicString : FMIceLinkASN1Any 

+ (FMIceLinkASN1GraphicString*) asn1GraphicString;
+ (FMIceLinkASN1GraphicString*) asn1GraphicStringWithValue:(NSString*)value;
- (NSMutableData*) getContents;
- (void) getPropertiesWithTag:(int*)tag klass:(int*)klass isConstructed:(bool*)isConstructed isIndefinite:(bool*)isIndefinite;
- (id) init;
- (id) initWithValue:(NSString*)value;
+ (FMIceLinkASN1GraphicString*) parseContentsWithContents:(NSMutableData*)contents;
+ (FMIceLinkASN1GraphicString*) parseContents:(NSMutableData*)contents;
- (void) setValue:(NSString*)value;
- (NSString*) value;

@end


@class NSStringFMExtensions;
@class NSMutableDataFMExtensions;

#pragma clang diagnostic ignored "-Wshorten-64-to-32"
#pragma clang diagnostic ignored "-Wint-to-pointer-cast"

@interface FMIceLinkASN1Ia5String : FMIceLinkASN1Any 

+ (FMIceLinkASN1Ia5String*) asn1Ia5String;
+ (FMIceLinkASN1Ia5String*) asn1Ia5StringWithValue:(NSString*)value;
- (NSMutableData*) getContents;
- (void) getPropertiesWithTag:(int*)tag klass:(int*)klass isConstructed:(bool*)isConstructed isIndefinite:(bool*)isIndefinite;
- (id) init;
- (id) initWithValue:(NSString*)value;
+ (FMIceLinkASN1Ia5String*) parseContentsWithContents:(NSMutableData*)contents;
+ (FMIceLinkASN1Ia5String*) parseContents:(NSMutableData*)contents;
- (void) setValue:(NSString*)value;
- (NSString*) value;

@end


@class FMIceLinkASN1Any;
@class NSMutableDataFMExtensions;

#pragma clang diagnostic ignored "-Wshorten-64-to-32"
#pragma clang diagnostic ignored "-Wint-to-pointer-cast"

@interface FMIceLinkASN1Implicit : FMIceLinkASN1Any 

+ (FMIceLinkASN1Implicit*) asn1Implicit;
+ (FMIceLinkASN1Implicit*) asn1ImplicitWithTag:(int)tag klass:(int)klass value:(FMIceLinkASN1Any*)value;
- (NSMutableData*) getContents;
- (void) getPropertiesWithTag:(int*)tag klass:(int*)klass isConstructed:(bool*)isConstructed isIndefinite:(bool*)isIndefinite;
- (id) init;
- (id) initWithTag:(int)tag klass:(int)klass value:(FMIceLinkASN1Any*)value;
- (int) klass;
- (void) setKlass:(int)value;
- (void) setTag:(int)value;
- (void) setValue:(FMIceLinkASN1Any*)value;
- (int) tag;
- (FMIceLinkASN1Any*) value;

@end


@class NSMutableDataFMExtensions;

#pragma clang diagnostic ignored "-Wshorten-64-to-32"
#pragma clang diagnostic ignored "-Wint-to-pointer-cast"

@interface FMIceLinkASN1Integer : FMIceLinkASN1Any 

+ (FMIceLinkASN1Integer*) asn1Integer;
+ (FMIceLinkASN1Integer*) asn1IntegerWithValue:(NSMutableData*)value;
+ (FMIceLinkASN1Integer*) fromLongValueWithLongValue:(long long)longValue;
+ (FMIceLinkASN1Integer*) fromLongValue:(long long)longValue;
- (NSMutableData*) getContents;
- (void) getPropertiesWithTag:(int*)tag klass:(int*)klass isConstructed:(bool*)isConstructed isIndefinite:(bool*)isIndefinite;
- (id) init;
- (id) initWithValue:(NSMutableData*)value;
- (long long) longValue;
+ (FMIceLinkASN1Integer*) parseContentsWithContents:(NSMutableData*)contents;
+ (FMIceLinkASN1Integer*) parseContents:(NSMutableData*)contents;
- (void) setLongValue:(long long)value;
- (void) setValue:(NSMutableData*)value;
- (NSMutableData*) value;

@end


@class NSMutableDataFMExtensions;

#pragma clang diagnostic ignored "-Wshorten-64-to-32"
#pragma clang diagnostic ignored "-Wint-to-pointer-cast"

@interface FMIceLinkASN1Null : FMIceLinkASN1Any 

+ (FMIceLinkASN1Null*) asn1Null;
- (NSMutableData*) getContents;
- (void) getPropertiesWithTag:(int*)tag klass:(int*)klass isConstructed:(bool*)isConstructed isIndefinite:(bool*)isIndefinite;
- (id) init;
+ (FMIceLinkASN1Null*) parseContentsWithContents:(NSMutableData*)contents;
+ (FMIceLinkASN1Null*) parseContents:(NSMutableData*)contents;

@end


@class NSStringFMExtensions;
@class NSMutableDataFMExtensions;

#pragma clang diagnostic ignored "-Wshorten-64-to-32"
#pragma clang diagnostic ignored "-Wint-to-pointer-cast"

@interface FMIceLinkASN1NumericString : FMIceLinkASN1Any 

+ (FMIceLinkASN1NumericString*) asn1NumericString;
+ (FMIceLinkASN1NumericString*) asn1NumericStringWithValue:(NSString*)value;
- (NSMutableData*) getContents;
- (void) getPropertiesWithTag:(int*)tag klass:(int*)klass isConstructed:(bool*)isConstructed isIndefinite:(bool*)isIndefinite;
- (id) init;
- (id) initWithValue:(NSString*)value;
+ (FMIceLinkASN1NumericString*) parseContentsWithContents:(NSMutableData*)contents;
+ (FMIceLinkASN1NumericString*) parseContents:(NSMutableData*)contents;
- (void) setValue:(NSString*)value;
- (NSString*) value;

@end


@class NSMutableArrayFMExtensions;
@class NSMutableDataFMExtensions;

#pragma clang diagnostic ignored "-Wshorten-64-to-32"
#pragma clang diagnostic ignored "-Wint-to-pointer-cast"

@interface FMIceLinkASN1ObjectIdentifier : FMIceLinkASN1Any 

+ (bool) areEqualWithValues1:(NSMutableArray*)values1 values2:(NSMutableArray*)values2;
+ (FMIceLinkASN1ObjectIdentifier*) asn1ObjectIdentifier;
+ (FMIceLinkASN1ObjectIdentifier*) asn1ObjectIdentifierWithValues:(NSMutableArray*)values;
- (NSMutableData*) getContents;
- (void) getPropertiesWithTag:(int*)tag klass:(int*)klass isConstructed:(bool*)isConstructed isIndefinite:(bool*)isIndefinite;
- (id) init;
- (id) initWithValues:(NSMutableArray*)values;
+ (FMIceLinkASN1ObjectIdentifier*) parseContentsWithContents:(NSMutableData*)contents;
+ (FMIceLinkASN1ObjectIdentifier*) parseContents:(NSMutableData*)contents;
- (void) setValues:(NSMutableArray*)value;
- (NSMutableArray*) values;

@end


@class NSStringFMExtensions;
@class NSMutableDataFMExtensions;

#pragma clang diagnostic ignored "-Wshorten-64-to-32"
#pragma clang diagnostic ignored "-Wint-to-pointer-cast"

@interface FMIceLinkASN1OctetString : FMIceLinkASN1Any 

+ (FMIceLinkASN1OctetString*) asn1OctetString;
+ (FMIceLinkASN1OctetString*) asn1OctetStringWithValue:(NSString*)value;
+ (FMIceLinkASN1OctetString*) fromValueBytesWithValueBytes:(NSMutableData*)valueBytes;
+ (FMIceLinkASN1OctetString*) fromValueBytes:(NSMutableData*)valueBytes;
- (NSMutableData*) getContents;
- (void) getPropertiesWithTag:(int*)tag klass:(int*)klass isConstructed:(bool*)isConstructed isIndefinite:(bool*)isIndefinite;
- (id) init;
- (id) initWithValue:(NSString*)value;
+ (FMIceLinkASN1OctetString*) parseContentsWithContents:(NSMutableData*)contents;
+ (FMIceLinkASN1OctetString*) parseContents:(NSMutableData*)contents;
- (void) setValue:(NSString*)value;
- (void) setValueBytes:(NSMutableData*)value;
- (NSString*) value;
- (NSMutableData*) valueBytes;

@end


@class NSStringFMExtensions;
@class NSMutableDataFMExtensions;

#pragma clang diagnostic ignored "-Wshorten-64-to-32"
#pragma clang diagnostic ignored "-Wint-to-pointer-cast"

@interface FMIceLinkASN1PrintableString : FMIceLinkASN1Any 

+ (FMIceLinkASN1PrintableString*) asn1PrintableString;
+ (FMIceLinkASN1PrintableString*) asn1PrintableStringWithValue:(NSString*)value;
- (NSMutableData*) getContents;
- (void) getPropertiesWithTag:(int*)tag klass:(int*)klass isConstructed:(bool*)isConstructed isIndefinite:(bool*)isIndefinite;
- (id) init;
- (id) initWithValue:(NSString*)value;
+ (FMIceLinkASN1PrintableString*) parseContentsWithContents:(NSMutableData*)contents;
+ (FMIceLinkASN1PrintableString*) parseContents:(NSMutableData*)contents;
- (void) setValue:(NSString*)value;
- (NSString*) value;

@end


@class NSMutableArrayFMExtensions;
@class NSMutableDataFMExtensions;

#pragma clang diagnostic ignored "-Wshorten-64-to-32"
#pragma clang diagnostic ignored "-Wint-to-pointer-cast"

@interface FMIceLinkASN1Sequence : FMIceLinkASN1Array 

+ (FMIceLinkASN1Sequence*) asn1Sequence;
+ (FMIceLinkASN1Sequence*) asn1SequenceWithValues:(NSMutableArray*)values;
- (NSMutableData*) getContents;
- (void) getPropertiesWithTag:(int*)tag klass:(int*)klass isConstructed:(bool*)isConstructed isIndefinite:(bool*)isIndefinite;
- (id) init;
- (id) initWithValues:(NSMutableArray*)values;
+ (FMIceLinkASN1Sequence*) parseContentsWithContents:(NSMutableData*)contents;
+ (FMIceLinkASN1Sequence*) parseContents:(NSMutableData*)contents;

@end


@class NSMutableDataFMExtensions;
@class FMIceLinkASN1Any;

#pragma clang diagnostic ignored "-Wshorten-64-to-32"
#pragma clang diagnostic ignored "-Wint-to-pointer-cast"

@interface FMIceLinkASN1SequenceElement : NSObject 

+ (FMIceLinkASN1SequenceElement*) asn1SequenceElementWithValue:(FMIceLinkASN1Any*)value;
+ (FMIceLinkASN1SequenceElement*) asn1SequenceElementWithValue:(FMIceLinkASN1Any*)value defaultt:(NSMutableData*)defaultt;
+ (FMIceLinkASN1SequenceElement*) asn1SequenceElementWithValue:(FMIceLinkASN1Any*)value defaultt:(NSMutableData*)defaultt optional:(bool)optional;
- (NSMutableData*) default;
- (id) initWithValue:(FMIceLinkASN1Any*)value;
- (id) initWithValue:(FMIceLinkASN1Any*)value defaultt:(NSMutableData*)defaultt;
- (id) initWithValue:(FMIceLinkASN1Any*)value defaultt:(NSMutableData*)defaultt optional:(bool)optional;
- (bool) optional;
- (void) setDefault:(NSMutableData*)value;
- (void) setOptional:(bool)value;
- (void) setValue:(FMIceLinkASN1Any*)value;
- (FMIceLinkASN1Any*) value;

@end


@class NSMutableArrayFMExtensions;
@class NSMutableDataFMExtensions;

#pragma clang diagnostic ignored "-Wshorten-64-to-32"
#pragma clang diagnostic ignored "-Wint-to-pointer-cast"

@interface FMIceLinkASN1SequenceOf : FMIceLinkASN1ArrayOf 

+ (FMIceLinkASN1SequenceOf*) asn1SequenceOf;
+ (FMIceLinkASN1SequenceOf*) asn1SequenceOfWithValues:(NSMutableArray*)values;
- (NSMutableData*) getContents;
- (void) getPropertiesWithTag:(int*)tag klass:(int*)klass isConstructed:(bool*)isConstructed isIndefinite:(bool*)isIndefinite;
- (id) init;
- (id) initWithValues:(NSMutableArray*)values;

@end


@class NSMutableArrayFMExtensions;
@class NSMutableDataFMExtensions;

#pragma clang diagnostic ignored "-Wshorten-64-to-32"
#pragma clang diagnostic ignored "-Wint-to-pointer-cast"

@interface FMIceLinkASN1Set : FMIceLinkASN1Array 

+ (FMIceLinkASN1Set*) asn1Set;
+ (FMIceLinkASN1Set*) asn1SetWithValues:(NSMutableArray*)values;
- (NSMutableData*) getContents;
- (void) getPropertiesWithTag:(int*)tag klass:(int*)klass isConstructed:(bool*)isConstructed isIndefinite:(bool*)isIndefinite;
- (id) init;
- (id) initWithValues:(NSMutableArray*)values;
+ (FMIceLinkASN1Set*) parseContentsWithContents:(NSMutableData*)contents;
+ (FMIceLinkASN1Set*) parseContents:(NSMutableData*)contents;

@end


@class NSMutableDataFMExtensions;
@class FMIceLinkASN1Any;

#pragma clang diagnostic ignored "-Wshorten-64-to-32"
#pragma clang diagnostic ignored "-Wint-to-pointer-cast"

@interface FMIceLinkASN1SetElement : NSObject 

+ (FMIceLinkASN1SetElement*) asn1SetElementWithValue:(FMIceLinkASN1Any*)value;
+ (FMIceLinkASN1SetElement*) asn1SetElementWithValue:(FMIceLinkASN1Any*)value defaultt:(NSMutableData*)defaultt;
+ (FMIceLinkASN1SetElement*) asn1SetElementWithValue:(FMIceLinkASN1Any*)value defaultt:(NSMutableData*)defaultt optional:(bool)optional;
- (NSMutableData*) default;
- (id) initWithValue:(FMIceLinkASN1Any*)value;
- (id) initWithValue:(FMIceLinkASN1Any*)value defaultt:(NSMutableData*)defaultt;
- (id) initWithValue:(FMIceLinkASN1Any*)value defaultt:(NSMutableData*)defaultt optional:(bool)optional;
- (bool) optional;
- (void) setDefault:(NSMutableData*)value;
- (void) setOptional:(bool)value;
- (void) setValue:(FMIceLinkASN1Any*)value;
- (FMIceLinkASN1Any*) value;

@end


@class NSMutableArrayFMExtensions;
@class NSMutableDataFMExtensions;

#pragma clang diagnostic ignored "-Wshorten-64-to-32"
#pragma clang diagnostic ignored "-Wint-to-pointer-cast"

@interface FMIceLinkASN1SetOf : FMIceLinkASN1ArrayOf 

+ (FMIceLinkASN1SetOf*) asn1SetOf;
+ (FMIceLinkASN1SetOf*) asn1SetOfWithValues:(NSMutableArray*)values;
- (NSMutableData*) getContents;
- (void) getPropertiesWithTag:(int*)tag klass:(int*)klass isConstructed:(bool*)isConstructed isIndefinite:(bool*)isIndefinite;
- (id) init;
- (id) initWithValues:(NSMutableArray*)values;

@end


@class NSStringFMExtensions;
@class NSMutableDataFMExtensions;

#pragma clang diagnostic ignored "-Wshorten-64-to-32"
#pragma clang diagnostic ignored "-Wint-to-pointer-cast"

@interface FMIceLinkASN1UniversalString : FMIceLinkASN1Any 

+ (FMIceLinkASN1UniversalString*) asn1UniversalString;
+ (FMIceLinkASN1UniversalString*) asn1UniversalStringWithValue:(NSString*)value;
- (NSMutableData*) getContents;
- (void) getPropertiesWithTag:(int*)tag klass:(int*)klass isConstructed:(bool*)isConstructed isIndefinite:(bool*)isIndefinite;
- (id) init;
- (id) initWithValue:(NSString*)value;
+ (FMIceLinkASN1UniversalString*) parseContentsWithContents:(NSMutableData*)contents;
+ (FMIceLinkASN1UniversalString*) parseContents:(NSMutableData*)contents;
- (void) setValue:(NSString*)value;
- (NSString*) value;

@end



#pragma clang diagnostic ignored "-Wshorten-64-to-32"
#pragma clang diagnostic ignored "-Wint-to-pointer-cast"

@interface FMIceLinkASN1UniversalTag : NSObject 

+ (FMIceLinkASN1UniversalTag*) asn1UniversalTag;
- (id) init;

@end


@class NSMutableDataFMExtensions;

#pragma clang diagnostic ignored "-Wshorten-64-to-32"
#pragma clang diagnostic ignored "-Wint-to-pointer-cast"

@interface FMIceLinkASN1Unknown : FMIceLinkASN1Any 

+ (FMIceLinkASN1Unknown*) asn1UnknownWithTag:(int)tag klass:(int)klass isConstructed:(bool)isConstructed isIndefinite:(bool)isIndefinite;
+ (FMIceLinkASN1Unknown*) asn1UnknownWithTag:(int)tag klass:(int)klass isConstructed:(bool)isConstructed isIndefinite:(bool)isIndefinite value:(NSMutableData*)value;
- (NSMutableData*) getContents;
- (void) getPropertiesWithTag:(int*)tag klass:(int*)klass isConstructed:(bool*)isConstructed isIndefinite:(bool*)isIndefinite;
- (id) initWithTag:(int)tag klass:(int)klass isConstructed:(bool)isConstructed isIndefinite:(bool)isIndefinite;
- (id) initWithTag:(int)tag klass:(int)klass isConstructed:(bool)isConstructed isIndefinite:(bool)isIndefinite value:(NSMutableData*)value;
- (bool) isConstructed;
- (bool) isIndefinite;
- (int) klass;
+ (FMIceLinkASN1Unknown*) parseContentsWithTag:(int)tag klass:(int)klass isConstructed:(bool)isConstructed isIndefinite:(bool)isIndefinite contents:(NSMutableData*)contents;
- (void) setIsConstructed:(bool)value;
- (void) setIsIndefinite:(bool)value;
- (void) setKlass:(int)value;
- (void) setTag:(int)value;
- (void) setValue:(NSMutableData*)value;
- (int) tag;
- (NSMutableData*) value;

@end


@class NSDateFMExtensions;
@class NSMutableDataFMExtensions;

#pragma clang diagnostic ignored "-Wshorten-64-to-32"
#pragma clang diagnostic ignored "-Wint-to-pointer-cast"

@interface FMIceLinkASN1UtcTime : FMIceLinkASN1Any 

+ (FMIceLinkASN1UtcTime*) asn1UtcTime;
+ (FMIceLinkASN1UtcTime*) asn1UtcTimeWithValue:(NSDate*)value;
- (NSMutableData*) getContents;
- (void) getPropertiesWithTag:(int*)tag klass:(int*)klass isConstructed:(bool*)isConstructed isIndefinite:(bool*)isIndefinite;
- (id) init;
- (id) initWithValue:(NSDate*)value;
+ (FMIceLinkASN1UtcTime*) parseContentsWithContents:(NSMutableData*)contents;
+ (FMIceLinkASN1UtcTime*) parseContents:(NSMutableData*)contents;
- (void) setValue:(NSDate*)value;
- (NSDate*) value;

@end


@class NSStringFMExtensions;
@class NSMutableDataFMExtensions;

#pragma clang diagnostic ignored "-Wshorten-64-to-32"
#pragma clang diagnostic ignored "-Wint-to-pointer-cast"

@interface FMIceLinkASN1Utf8String : FMIceLinkASN1Any 

+ (FMIceLinkASN1Utf8String*) asn1Utf8String;
+ (FMIceLinkASN1Utf8String*) asn1Utf8StringWithValue:(NSString*)value;
- (NSMutableData*) getContents;
- (void) getPropertiesWithTag:(int*)tag klass:(int*)klass isConstructed:(bool*)isConstructed isIndefinite:(bool*)isIndefinite;
- (id) init;
- (id) initWithValue:(NSString*)value;
+ (FMIceLinkASN1Utf8String*) parseContentsWithContents:(NSMutableData*)contents;
+ (FMIceLinkASN1Utf8String*) parseContents:(NSMutableData*)contents;
- (void) setValue:(NSString*)value;
- (NSString*) value;

@end


@class NSStringFMExtensions;
@class NSMutableDataFMExtensions;

#pragma clang diagnostic ignored "-Wshorten-64-to-32"
#pragma clang diagnostic ignored "-Wint-to-pointer-cast"

@interface FMIceLinkASN1VisibleString : FMIceLinkASN1Any 

+ (FMIceLinkASN1VisibleString*) asn1VisibleString;
+ (FMIceLinkASN1VisibleString*) asn1VisibleStringWithValue:(NSString*)value;
- (NSMutableData*) getContents;
- (void) getPropertiesWithTag:(int*)tag klass:(int*)klass isConstructed:(bool*)isConstructed isIndefinite:(bool*)isIndefinite;
- (id) init;
- (id) initWithValue:(NSString*)value;
+ (FMIceLinkASN1VisibleString*) parseContentsWithContents:(NSMutableData*)contents;
+ (FMIceLinkASN1VisibleString*) parseContents:(NSMutableData*)contents;
- (void) setValue:(NSString*)value;
- (NSString*) value;

@end


@class FMIceLinkUnhandledExceptionArgs;
@class FMIceLinkLinkInitArgs;
@class FMIceLinkLinkUpArgs;
@class FMIceLinkLinkOfferAnswerArgs;
@class FMIceLinkLinkCandidateArgs;
@class FMIceLinkLinkDownArgs;
@class FMIceLinkLinkReceiveRTPArgs;
@class FMIceLinkLinkReceiveSCTPArgs;
@class FMIceLinkLinkReceiveRTCPArgs;
@class FMIceLinkLinkSendRTPArgs;
@class FMIceLinkLinkSendRTCPArgs;
@class FMIceLinkLinkLocalAddressesArgs;
@class FMIceLinkAcceptSuccessArgs;
@class FMIceLinkLink;
@class FMIceLinkSignalProvider;
@class NSMutableDictionaryFMExtensions;
@class FMCallback;
@class NSMutableArrayFMExtensions;
@class NSStringFMExtensions;
@class FMIceLinkStream;
@class FMIceLinkCandidate;
@class FMIceLinkOfferAnswer;
@class FMIceLinkRTCPPacket;
@class FMIceLinkStreamFormat;
@class FMIceLinkRTPPacket;
@class FMIceLinkSendSCTPArgs;

/// <summary>
/// A link manager that keeps track of a group of
/// peer-to-peer links using a non-peer-to-peer library
/// for session negotiation.
/// </summary>
#pragma clang diagnostic ignored "-Wshorten-64-to-32"
#pragma clang diagnostic ignored "-Wint-to-pointer-cast"

@interface FMIceLinkConference : FMIceLinkBaseConference 

/// <summary>
/// Adds a handler that is raised when a local candidate is created.
/// The candidate should be sent via signalling to the remote peer.
/// </summary>
- (FMCallback*) addOnLinkCandidateWithValue:(FMCallback*)value;
/// <summary>
/// Adds a handler that is raised when a local candidate is created.
/// The candidate should be sent via signalling to the remote peer.
/// </summary>
- (FMCallback*) addOnLinkCandidate:(FMCallback*)value;
/// <summary>
/// Adds a handler that is raised when a local candidate is created.
/// The candidate should be sent via signalling to the remote peer.
/// </summary>
- (FMCallback*) addOnLinkCandidateWithValueBlock:(void (^) (FMIceLinkLinkCandidateArgs*))valueBlock;
/// <summary>
/// Adds a handler that is raised when a local candidate is created.
/// The candidate should be sent via signalling to the remote peer.
/// </summary>
- (FMCallback*) addOnLinkCandidateBlock:(void (^) (FMIceLinkLinkCandidateArgs*))valueBlock;
/// <summary>
/// Adds a handler that is raised when a link is down.
/// </summary>
- (FMCallback*) addOnLinkDownWithValue:(FMCallback*)value;
/// <summary>
/// Adds a handler that is raised when a link is down.
/// </summary>
- (FMCallback*) addOnLinkDown:(FMCallback*)value;
/// <summary>
/// Adds a handler that is raised when a link is down.
/// </summary>
- (FMCallback*) addOnLinkDownWithValueBlock:(void (^) (FMIceLinkLinkDownArgs*))valueBlock;
/// <summary>
/// Adds a handler that is raised when a link is down.
/// </summary>
- (FMCallback*) addOnLinkDownBlock:(void (^) (FMIceLinkLinkDownArgs*))valueBlock;
/// <summary>
/// Adds a handler that is raised when a link is initializing.
/// </summary>
- (FMCallback*) addOnLinkInitWithValue:(FMCallback*)value;
/// <summary>
/// Adds a handler that is raised when a link is initializing.
/// </summary>
- (FMCallback*) addOnLinkInit:(FMCallback*)value;
/// <summary>
/// Adds a handler that is raised when a link is initializing.
/// </summary>
- (FMCallback*) addOnLinkInitWithValueBlock:(void (^) (FMIceLinkLinkInitArgs*))valueBlock;
/// <summary>
/// Adds a handler that is raised when a link is initializing.
/// </summary>
- (FMCallback*) addOnLinkInitBlock:(void (^) (FMIceLinkLinkInitArgs*))valueBlock;
/// <summary>
/// Adds a handler that is raised when local IP addresses are discovered.
/// </summary>
- (FMCallback*) addOnLinkLocalAddressesWithValue:(FMCallback*)value;
/// <summary>
/// Adds a handler that is raised when local IP addresses are discovered.
/// </summary>
- (FMCallback*) addOnLinkLocalAddresses:(FMCallback*)value;
/// <summary>
/// Adds a handler that is raised when local IP addresses are discovered.
/// </summary>
- (FMCallback*) addOnLinkLocalAddressesWithValueBlock:(void (^) (FMIceLinkLinkLocalAddressesArgs*))valueBlock;
/// <summary>
/// Adds a handler that is raised when local IP addresses are discovered.
/// </summary>
- (FMCallback*) addOnLinkLocalAddressesBlock:(void (^) (FMIceLinkLinkLocalAddressesArgs*))valueBlock;
/// <summary>
/// Adds a handler that is raised when a local offer or answer is created.
/// The offer/answer should be sent via signalling to the remote peer.
/// </summary>
- (FMCallback*) addOnLinkOfferAnswerWithValue:(FMCallback*)value;
/// <summary>
/// Adds a handler that is raised when a local offer or answer is created.
/// The offer/answer should be sent via signalling to the remote peer.
/// </summary>
- (FMCallback*) addOnLinkOfferAnswer:(FMCallback*)value;
/// <summary>
/// Adds a handler that is raised when a local offer or answer is created.
/// The offer/answer should be sent via signalling to the remote peer.
/// </summary>
- (FMCallback*) addOnLinkOfferAnswerWithValueBlock:(void (^) (FMIceLinkLinkOfferAnswerArgs*))valueBlock;
/// <summary>
/// Adds a handler that is raised when a local offer or answer is created.
/// The offer/answer should be sent via signalling to the remote peer.
/// </summary>
- (FMCallback*) addOnLinkOfferAnswerBlock:(void (^) (FMIceLinkLinkOfferAnswerArgs*))valueBlock;
/// <summary>
/// Adds a handler that is raised when RTCP packets are received.
/// </summary>
- (FMCallback*) addOnLinkReceiveRTCPWithValue:(FMCallback*)value;
/// <summary>
/// Adds a handler that is raised when RTCP packets are received.
/// </summary>
- (FMCallback*) addOnLinkReceiveRTCP:(FMCallback*)value;
/// <summary>
/// Adds a handler that is raised when RTCP packets are received.
/// </summary>
- (FMCallback*) addOnLinkReceiveRTCPWithValueBlock:(void (^) (FMIceLinkLinkReceiveRTCPArgs*))valueBlock;
/// <summary>
/// Adds a handler that is raised when RTCP packets are received.
/// </summary>
- (FMCallback*) addOnLinkReceiveRTCPBlock:(void (^) (FMIceLinkLinkReceiveRTCPArgs*))valueBlock;
/// <summary>
/// Adds a handler that is raised when an RTP packet is received.
/// </summary>
- (FMCallback*) addOnLinkReceiveRTPWithValue:(FMCallback*)value;
/// <summary>
/// Adds a handler that is raised when an RTP packet is received.
/// </summary>
- (FMCallback*) addOnLinkReceiveRTP:(FMCallback*)value;
/// <summary>
/// Adds a handler that is raised when an RTP packet is received.
/// </summary>
- (FMCallback*) addOnLinkReceiveRTPWithValueBlock:(void (^) (FMIceLinkLinkReceiveRTPArgs*))valueBlock;
/// <summary>
/// Adds a handler that is raised when an RTP packet is received.
/// </summary>
- (FMCallback*) addOnLinkReceiveRTPBlock:(void (^) (FMIceLinkLinkReceiveRTPArgs*))valueBlock;
/// <summary>
/// Adds a handler that is raised when an SCTP packet is received.
/// </summary>
- (FMCallback*) addOnLinkReceiveSCTPWithValue:(FMCallback*)value;
/// <summary>
/// Adds a handler that is raised when an SCTP packet is received.
/// </summary>
- (FMCallback*) addOnLinkReceiveSCTP:(FMCallback*)value;
/// <summary>
/// Adds a handler that is raised when an SCTP packet is received.
/// </summary>
- (FMCallback*) addOnLinkReceiveSCTPWithValueBlock:(void (^) (FMIceLinkLinkReceiveSCTPArgs*))valueBlock;
/// <summary>
/// Adds a handler that is raised when an SCTP packet is received.
/// </summary>
- (FMCallback*) addOnLinkReceiveSCTPBlock:(void (^) (FMIceLinkLinkReceiveSCTPArgs*))valueBlock;
/// <summary>
/// Adds a handler that is raised when a remote candidate is received.
/// </summary>
- (FMCallback*) addOnLinkRemoteCandidateWithValue:(FMCallback*)value;
/// <summary>
/// Adds a handler that is raised when a remote candidate is received.
/// </summary>
- (FMCallback*) addOnLinkRemoteCandidate:(FMCallback*)value;
/// <summary>
/// Adds a handler that is raised when a remote candidate is received.
/// </summary>
- (FMCallback*) addOnLinkRemoteCandidateWithValueBlock:(void (^) (FMIceLinkLinkCandidateArgs*))valueBlock;
/// <summary>
/// Adds a handler that is raised when a remote candidate is received.
/// </summary>
- (FMCallback*) addOnLinkRemoteCandidateBlock:(void (^) (FMIceLinkLinkCandidateArgs*))valueBlock;
/// <summary>
/// Adds a handler that is raised when a remote offer or answer is received.
/// </summary>
- (FMCallback*) addOnLinkRemoteOfferAnswerWithValue:(FMCallback*)value;
/// <summary>
/// Adds a handler that is raised when a remote offer or answer is received.
/// </summary>
- (FMCallback*) addOnLinkRemoteOfferAnswer:(FMCallback*)value;
/// <summary>
/// Adds a handler that is raised when a remote offer or answer is received.
/// </summary>
- (FMCallback*) addOnLinkRemoteOfferAnswerWithValueBlock:(void (^) (FMIceLinkLinkOfferAnswerArgs*))valueBlock;
/// <summary>
/// Adds a handler that is raised when a remote offer or answer is received.
/// </summary>
- (FMCallback*) addOnLinkRemoteOfferAnswerBlock:(void (^) (FMIceLinkLinkOfferAnswerArgs*))valueBlock;
/// <summary>
/// Adds a handler that is raised when RTCP packets are sent.
/// </summary>
- (FMCallback*) addOnLinkSendRTCPWithValue:(FMCallback*)value;
/// <summary>
/// Adds a handler that is raised when RTCP packets are sent.
/// </summary>
- (FMCallback*) addOnLinkSendRTCP:(FMCallback*)value;
/// <summary>
/// Adds a handler that is raised when RTCP packets are sent.
/// </summary>
- (FMCallback*) addOnLinkSendRTCPWithValueBlock:(void (^) (FMIceLinkLinkSendRTCPArgs*))valueBlock;
/// <summary>
/// Adds a handler that is raised when RTCP packets are sent.
/// </summary>
- (FMCallback*) addOnLinkSendRTCPBlock:(void (^) (FMIceLinkLinkSendRTCPArgs*))valueBlock;
/// <summary>
/// Adds a handler that is raised when an RTP packet is sent.
/// </summary>
- (FMCallback*) addOnLinkSendRTPWithValue:(FMCallback*)value;
/// <summary>
/// Adds a handler that is raised when an RTP packet is sent.
/// </summary>
- (FMCallback*) addOnLinkSendRTP:(FMCallback*)value;
/// <summary>
/// Adds a handler that is raised when an RTP packet is sent.
/// </summary>
- (FMCallback*) addOnLinkSendRTPWithValueBlock:(void (^) (FMIceLinkLinkSendRTPArgs*))valueBlock;
/// <summary>
/// Adds a handler that is raised when an RTP packet is sent.
/// </summary>
- (FMCallback*) addOnLinkSendRTPBlock:(void (^) (FMIceLinkLinkSendRTPArgs*))valueBlock;
/// <summary>
/// Adds a handler that is raised when a link is up.
/// </summary>
- (FMCallback*) addOnLinkUpWithValue:(FMCallback*)value;
/// <summary>
/// Adds a handler that is raised when a link is up.
/// </summary>
- (FMCallback*) addOnLinkUp:(FMCallback*)value;
/// <summary>
/// Adds a handler that is raised when a link is up.
/// </summary>
- (FMCallback*) addOnLinkUpWithValueBlock:(void (^) (FMIceLinkLinkUpArgs*))valueBlock;
/// <summary>
/// Adds a handler that is raised when a link is up.
/// </summary>
- (FMCallback*) addOnLinkUpBlock:(void (^) (FMIceLinkLinkUpArgs*))valueBlock;
/// <summary>
/// Adds a handler that is raised when an exception is thrown in user code and not handled,
/// typically in a callback or event handler.
/// </summary>
- (FMCallback*) addOnUnhandledExceptionWithValue:(FMCallback*)value;
/// <summary>
/// Adds a handler that is raised when an exception is thrown in user code and not handled,
/// typically in a callback or event handler.
/// </summary>
- (FMCallback*) addOnUnhandledException:(FMCallback*)value;
/// <summary>
/// Adds a handler that is raised when an exception is thrown in user code and not handled,
/// typically in a callback or event handler.
/// </summary>
- (FMCallback*) addOnUnhandledExceptionWithValueBlock:(void (^) (FMIceLinkUnhandledExceptionArgs*))valueBlock;
/// <summary>
/// Adds a handler that is raised when an exception is thrown in user code and not handled,
/// typically in a callback or event handler.
/// </summary>
- (FMCallback*) addOnUnhandledExceptionBlock:(void (^) (FMIceLinkUnhandledExceptionArgs*))valueBlock;
/// <summary>
/// Initializes a new instance of the <see cref="FMIceLinkConference" /> class.
/// </summary>
/// <param name="stream">The stream to establish.</param>
/// <param name="serverAddress">The IceLink server address.</param>
/// <param name="serverPort">The IceLink server port.</param>
+ (FMIceLinkConference*) conferenceWithServerAddress:(NSString*)serverAddress serverPort:(int)serverPort stream:(FMIceLinkStream*)stream;
/// <summary>
/// Initializes a new instance of the <see cref="FMIceLinkConference" /> class.
/// </summary>
/// <param name="streams">The streams to establish.</param>
/// <param name="serverAddress">The IceLink server address.</param>
/// <param name="serverPort">The IceLink server port.</param>
+ (FMIceLinkConference*) conferenceWithServerAddress:(NSString*)serverAddress serverPort:(int)serverPort streams:(NSMutableArray*)streams;
/// <summary>
/// Initializes a new instance of the <see cref="FMIceLinkConference" /> class.
/// </summary>
/// <param name="serverAddress">The IceLink server address.</param>
/// <param name="stream">The stream to establish.</param>
+ (FMIceLinkConference*) conferenceWithServerAddress:(NSString*)serverAddress stream:(FMIceLinkStream*)stream;
/// <summary>
/// Initializes a new instance of the <see cref="FMIceLinkConference" /> class.
/// </summary>
/// <param name="serverAddress">The IceLink server address.</param>
/// <param name="streams">The streams to establish.</param>
+ (FMIceLinkConference*) conferenceWithServerAddress:(NSString*)serverAddress streams:(NSMutableArray*)streams;
/// <summary>
/// Initializes a new instance of the <see cref="FMIceLinkConference" /> class.
/// </summary>
/// <param name="serverAddresses">The IceLink server addresses.</param>
/// <param name="stream">The stream to establish.</param>
+ (FMIceLinkConference*) conferenceWithServerAddresses:(NSMutableArray*)serverAddresses stream:(FMIceLinkStream*)stream;
/// <summary>
/// Initializes a new instance of the <see cref="FMIceLinkConference" /> class.
/// </summary>
/// <param name="serverAddresses">The IceLink server addresses.</param>
/// <param name="streams">The streams to establish.</param>
+ (FMIceLinkConference*) conferenceWithServerAddresses:(NSMutableArray*)serverAddresses streams:(NSMutableArray*)streams;
/// <summary>
/// Initializes a new instance of the <see cref="FMIceLinkConference" /> class using the default port (3478).
/// </summary>
/// <param name="stream">The stream to establish.</param>
+ (FMIceLinkConference*) conferenceWithStream:(FMIceLinkStream*)stream;
/// <summary>
/// Initializes a new instance of the <see cref="FMIceLinkConference" /> class.
/// </summary>
/// <param name="streams">The streams to establish.</param>
+ (FMIceLinkConference*) conferenceWithStreams:(NSMutableArray*)streams;
/// <summary>
/// Gets a list of links currently managed by this conference.
/// </summary>
/// <returns></returns>
- (NSMutableArray*) getLinks;
/// <summary>
/// Gets an individual link from the conference.
/// </summary>
/// <param name="peerId">The peer ID.</param>
/// <returns>The link to the peer, or <c>null</c> if there is no link to the peer.</returns>
- (FMIceLinkLink*) getLinkWithPeerId:(NSString*)peerId;
/// <summary>
/// Gets a list of the IDs of peers who have links
/// managed by this conference.
/// </summary>
/// <returns></returns>
- (NSMutableArray*) getPeerIds;
/// <summary>
/// Gets a hashtable of peer states keyed by the IDs of
/// peers who have links managed by this conference.
/// </summary>
/// <returns></returns>
- (NSMutableDictionary*) getPeerStates;
/// <summary>
/// Gets the state of a peer given the peer ID, or
/// <c>null</c> if the peer does not have a link
/// that is managed by this conference.
/// </summary>
/// <returns></returns>
- (NSObject*) getPeerStateWithPeerId:(NSString*)peerId;
/// <summary>
/// Initializes a new instance of the <see cref="FMIceLinkConference" /> class.
/// </summary>
/// <param name="stream">The stream to establish.</param>
/// <param name="serverAddress">The IceLink server address.</param>
/// <param name="serverPort">The IceLink server port.</param>
- (id) initWithServerAddress:(NSString*)serverAddress serverPort:(int)serverPort stream:(FMIceLinkStream*)stream;
/// <summary>
/// Initializes a new instance of the <see cref="FMIceLinkConference" /> class.
/// </summary>
/// <param name="streams">The streams to establish.</param>
/// <param name="serverAddress">The IceLink server address.</param>
/// <param name="serverPort">The IceLink server port.</param>
- (id) initWithServerAddress:(NSString*)serverAddress serverPort:(int)serverPort streams:(NSMutableArray*)streams;
/// <summary>
/// Initializes a new instance of the <see cref="FMIceLinkConference" /> class.
/// </summary>
/// <param name="serverAddress">The IceLink server address.</param>
/// <param name="stream">The stream to establish.</param>
- (id) initWithServerAddress:(NSString*)serverAddress stream:(FMIceLinkStream*)stream;
/// <summary>
/// Initializes a new instance of the <see cref="FMIceLinkConference" /> class.
/// </summary>
/// <param name="serverAddress">The IceLink server address.</param>
/// <param name="streams">The streams to establish.</param>
- (id) initWithServerAddress:(NSString*)serverAddress streams:(NSMutableArray*)streams;
/// <summary>
/// Initializes a new instance of the <see cref="FMIceLinkConference" /> class.
/// </summary>
/// <param name="serverAddresses">The IceLink server addresses.</param>
/// <param name="stream">The stream to establish.</param>
- (id) initWithServerAddresses:(NSMutableArray*)serverAddresses stream:(FMIceLinkStream*)stream;
/// <summary>
/// Initializes a new instance of the <see cref="FMIceLinkConference" /> class.
/// </summary>
/// <param name="serverAddresses">The IceLink server addresses.</param>
/// <param name="streams">The streams to establish.</param>
- (id) initWithServerAddresses:(NSMutableArray*)serverAddresses streams:(NSMutableArray*)streams;
/// <summary>
/// Initializes a new instance of the <see cref="FMIceLinkConference" /> class using the default port (3478).
/// </summary>
/// <param name="stream">The stream to establish.</param>
- (id) initWithStream:(FMIceLinkStream*)stream;
/// <summary>
/// Initializes a new instance of the <see cref="FMIceLinkConference" /> class.
/// </summary>
/// <param name="streams">The streams to establish.</param>
- (id) initWithStreams:(NSMutableArray*)streams;
/// <summary>
/// Checks if an individual link exists in the conference.
/// </summary>
/// <param name="peerId">The peer ID.</param>
/// <returns><c>true</c> if a link to the peer exists; otherwise, <c>false</c>.</returns>
- (bool) isLinkedWithPeerId:(NSString*)peerId;
/// <summary>
/// Creates a link to the specified peer.
/// </summary>
/// <param name="peerId">The peer ID.</param>
/// <returns><c>true</c> if a new link was created; otherwise, <c>false</c>.</returns>
- (bool) linkWithPeerId:(NSString*)peerId;
/// <summary>
/// Creates a link to the specified peer.
/// </summary>
/// <param name="peerId">The peer ID.</param>
/// <param name="peerState">Custom state to associate with the peer.</param>
/// <returns><c>true</c> if a new link was created; otherwise, <c>false</c>.</returns>
- (bool) linkWithPeerId:(NSString*)peerId peerState:(NSObject*)peerState;
/// <summary>
/// Creates a link to the specified peer.
/// </summary>
/// <param name="peerId">The peer ID.</param>
/// <param name="peerState">Custom state to associate with the peer.</param>
/// <param name="unlinkExisting">Whether to unlink the existing connection if one exists.
/// If set to <c>false</c> and a link already exists, a new link will not be created.</param>
/// <returns><c>true</c> if a new link was created; otherwise, <c>false</c>.</returns>
- (bool) linkWithPeerId:(NSString*)peerId peerState:(NSObject*)peerState unlinkExisting:(bool)unlinkExisting;
/// <summary>
/// Gets the maximum number of links allowed on this conference. Defaults to 0 (no maximum).
/// </summary>
- (int) maxLinks;
/// <summary>
/// Gets whether to randomize the server
/// array to automatically distribute load.
/// </summary>
- (bool) randomizeServers;
/// <summary>
/// Receives a candidate from the specified peer.
/// </summary>
/// <param name="peerId">The peer ID.</param>
/// <param name="candidate">The candidate.</param>
- (void) receiveCandidateWithCandidate:(FMIceLinkCandidate*)candidate peerId:(NSString*)peerId;
/// <summary>
/// Receives a candidate from the specified peer.
/// </summary>
/// <param name="peerId">The peer ID.</param>
/// <param name="candidate">The candidate.</param>
- (void) receiveCandidate:(FMIceLinkCandidate*)candidate peerId:(NSString*)peerId;
/// <summary>
/// Receives an offer or answer from the specified peer.
/// </summary>
/// <param name="offerAnswer">The offer or answer.</param>
/// <param name="peerId">The peer ID.</param>
- (void) receiveOfferAnswerWithOfferAnswer:(FMIceLinkOfferAnswer*)offerAnswer peerId:(NSString*)peerId;
/// <summary>
/// Receives an offer or answer from the specified peer.
/// </summary>
/// <param name="offerAnswer">The offer or answer.</param>
/// <param name="peerId">The peer ID.</param>
- (void) receiveOfferAnswer:(FMIceLinkOfferAnswer*)offerAnswer peerId:(NSString*)peerId;
/// <summary>
/// Receives an offer or answer from the specified peer.
/// </summary>
/// <param name="offerAnswer">The offer or answer.</param>
/// <param name="peerId">The peer ID.</param>
/// <param name="peerState">Custom state to associate with the peer.</param>
- (bool) receiveOfferAnswerWithOfferAnswer:(FMIceLinkOfferAnswer*)offerAnswer peerId:(NSString*)peerId peerState:(NSObject*)peerState;
/// <summary>
/// Receives an offer or answer from the specified peer.
/// </summary>
/// <param name="offerAnswer">The offer or answer.</param>
/// <param name="peerId">The peer ID.</param>
/// <param name="peerState">Custom state to associate with the peer.</param>
- (bool) receiveOfferAnswer:(FMIceLinkOfferAnswer*)offerAnswer peerId:(NSString*)peerId peerState:(NSObject*)peerState;
/// <summary>
/// Removes a handler that is raised when a local candidate is created.
/// The candidate should be sent via signalling to the remote peer.
/// </summary>
- (void) removeOnLinkCandidateWithValue:(FMCallback*)value;
/// <summary>
/// Removes a handler that is raised when a local candidate is created.
/// The candidate should be sent via signalling to the remote peer.
/// </summary>
- (void) removeOnLinkCandidate:(FMCallback*)value;
/// <summary>
/// Removes a handler that is raised when a link is down.
/// </summary>
- (void) removeOnLinkDownWithValue:(FMCallback*)value;
/// <summary>
/// Removes a handler that is raised when a link is down.
/// </summary>
- (void) removeOnLinkDown:(FMCallback*)value;
/// <summary>
/// Removes a handler that is raised when a link is initializing.
/// </summary>
- (void) removeOnLinkInitWithValue:(FMCallback*)value;
/// <summary>
/// Removes a handler that is raised when a link is initializing.
/// </summary>
- (void) removeOnLinkInit:(FMCallback*)value;
/// <summary>
/// Removes a handler that is raised when local IP addresses are discovered.
/// </summary>
- (void) removeOnLinkLocalAddressesWithValue:(FMCallback*)value;
/// <summary>
/// Removes a handler that is raised when local IP addresses are discovered.
/// </summary>
- (void) removeOnLinkLocalAddresses:(FMCallback*)value;
/// <summary>
/// Removes a handler that is raised when a local offer or answer is created.
/// The offer/answer should be sent via signalling to the remote peer.
/// </summary>
- (void) removeOnLinkOfferAnswerWithValue:(FMCallback*)value;
/// <summary>
/// Removes a handler that is raised when a local offer or answer is created.
/// The offer/answer should be sent via signalling to the remote peer.
/// </summary>
- (void) removeOnLinkOfferAnswer:(FMCallback*)value;
/// <summary>
/// Removes a handler that is raised when RTCP packets are received.
/// </summary>
- (void) removeOnLinkReceiveRTCPWithValue:(FMCallback*)value;
/// <summary>
/// Removes a handler that is raised when RTCP packets are received.
/// </summary>
- (void) removeOnLinkReceiveRTCP:(FMCallback*)value;
/// <summary>
/// Removes a handler that is raised when an RTP packet is received.
/// </summary>
- (void) removeOnLinkReceiveRTPWithValue:(FMCallback*)value;
/// <summary>
/// Removes a handler that is raised when an RTP packet is received.
/// </summary>
- (void) removeOnLinkReceiveRTP:(FMCallback*)value;
/// <summary>
/// Removes a handler that is raised when an SCTP packet is received.
/// </summary>
- (void) removeOnLinkReceiveSCTPWithValue:(FMCallback*)value;
/// <summary>
/// Removes a handler that is raised when an SCTP packet is received.
/// </summary>
- (void) removeOnLinkReceiveSCTP:(FMCallback*)value;
/// <summary>
/// Removes a handler that is raised when a remote candidate is received.
/// </summary>
- (void) removeOnLinkRemoteCandidateWithValue:(FMCallback*)value;
/// <summary>
/// Removes a handler that is raised when a remote candidate is received.
/// </summary>
- (void) removeOnLinkRemoteCandidate:(FMCallback*)value;
/// <summary>
/// Removes a handler that is raised when a remote offer or answer is received.
/// </summary>
- (void) removeOnLinkRemoteOfferAnswerWithValue:(FMCallback*)value;
/// <summary>
/// Removes a handler that is raised when a remote offer or answer is received.
/// </summary>
- (void) removeOnLinkRemoteOfferAnswer:(FMCallback*)value;
/// <summary>
/// Removes a handler that is raised when RTCP packets are sent.
/// </summary>
- (void) removeOnLinkSendRTCPWithValue:(FMCallback*)value;
/// <summary>
/// Removes a handler that is raised when RTCP packets are sent.
/// </summary>
- (void) removeOnLinkSendRTCP:(FMCallback*)value;
/// <summary>
/// Removes a handler that is raised when an RTP packet is sent.
/// </summary>
- (void) removeOnLinkSendRTPWithValue:(FMCallback*)value;
/// <summary>
/// Removes a handler that is raised when an RTP packet is sent.
/// </summary>
- (void) removeOnLinkSendRTP:(FMCallback*)value;
/// <summary>
/// Removes a handler that is raised when a link is up.
/// </summary>
- (void) removeOnLinkUpWithValue:(FMCallback*)value;
/// <summary>
/// Removes a handler that is raised when a link is up.
/// </summary>
- (void) removeOnLinkUp:(FMCallback*)value;
/// <summary>
/// Removes a handler that is raised when an exception is thrown in user code and not handled,
/// typically in a callback or event handler.
/// </summary>
- (void) removeOnUnhandledExceptionWithValue:(FMCallback*)value;
/// <summary>
/// Removes a handler that is raised when an exception is thrown in user code and not handled,
/// typically in a callback or event handler.
/// </summary>
- (void) removeOnUnhandledException:(FMCallback*)value;
/// <summary>
/// Sends an RTCP packet to the conference's connected peers.
/// </summary>
/// <param name="stream">The stream.</param>
/// <param name="packet">The RTCP packet to send.</param>
/// <returns>The number of bytes sent for each peer ID, or -1 if the send operation failed.</returns>
- (NSMutableDictionary*) sendRTCPWithStream:(FMIceLinkStream*)stream packet:(FMIceLinkRTCPPacket*)packet;
/// <summary>
/// Sends an RTCP packet to one of the conference's connected peers.
/// </summary>
/// <param name="stream">The stream.</param>
/// <param name="packet">The RTCP packet to send.</param>
/// <param name="peerId">The peer ID to target.</param>
/// <returns>The number of bytes sent, or -1 if the send operation failed.</returns>
- (int) sendRTCPWithStream:(FMIceLinkStream*)stream packet:(FMIceLinkRTCPPacket*)packet peerId:(NSString*)peerId;
/// <summary>
/// Sends RTCP packets to the conference's connected peers.
/// </summary>
/// <param name="stream">The stream.</param>
/// <param name="packets">The RTCP packets to send.</param>
/// <returns>The number of bytes sent for each peer ID, or -1 if the send operation failed.</returns>
- (NSMutableDictionary*) sendRTCPWithStream:(FMIceLinkStream*)stream packets:(NSMutableArray*)packets;
/// <summary>
/// Sends RTCP packets to one of the conference's connected peers.
/// </summary>
/// <param name="stream">The stream.</param>
/// <param name="packets">The RTCP packets to send.</param>
/// <param name="peerId">The peer ID to target.</param>
/// <returns>The number of bytes sent, or -1 if the send operation failed.</returns>
- (int) sendRTCPWithStream:(FMIceLinkStream*)stream packets:(NSMutableArray*)packets peerId:(NSString*)peerId;
/// <summary>
/// Sends an RTP packet to the conference's connected peers.
/// </summary>
/// <param name="stream">The stream.</param>
/// <param name="format">The stream format.</param>
/// <param name="packet">The RTP packet to send.</param>
/// <returns>The number of bytes sent for each peer ID, or -1 if the send operation failed.</returns>
- (NSMutableDictionary*) sendRTPWithStream:(FMIceLinkStream*)stream format:(FMIceLinkStreamFormat*)format packet:(FMIceLinkRTPPacket*)packet;
/// <summary>
/// Sends an RTP packet to one of the conference's connected peers.
/// </summary>
/// <param name="stream">The stream.</param>
/// <param name="format">The stream format.</param>
/// <param name="packet">The RTP packet to send.</param>
/// <param name="peerId">The peer ID to target.</param>
/// <returns>The number of bytes sent, or -1 if the send operation failed.</returns>
- (int) sendRTPWithStream:(FMIceLinkStream*)stream format:(FMIceLinkStreamFormat*)format packet:(FMIceLinkRTPPacket*)packet peerId:(NSString*)peerId;
/// <summary>
/// Sends an SCTP packet to the conference's connected peers.
/// </summary>
/// <param name="sendArgs">The send arguments.</param>
/// <returns>
/// Whether or not the data was sent for each peer ID.
/// </returns>
- (void) sendSCTPWithSendArgs:(FMIceLinkSendSCTPArgs*)sendArgs;
/// <summary>
/// Sends an SCTP packet to one of the conference's connected peers.
/// </summary>
/// <param name="sendArgs">The send arguments.</param>
/// <param name="peerId">The peer ID to target.</param>
/// <returns>
/// <c>true</c> if a link with the peer ID exists; otherwise, <c>false</c>.
/// </returns>
- (bool) sendSCTPWithSendArgs:(FMIceLinkSendSCTPArgs*)sendArgs peerId:(NSString*)peerId;
/// <summary>
/// Sets the maximum number of links allowed on this conference. Defaults to 0 (no maximum).
/// </summary>
- (void) setMaxLinks:(int)value;
/// <summary>
/// Sets whether to randomize the server
/// array to automatically distribute load.
/// </summary>
- (void) setRandomizeServers:(bool)value;
/// <summary>
/// Sets the signal provider. A signal provider allows the conference
/// to do its own signalling without the need for application-level interaction.
/// </summary>
- (void) setSignalProvider:(FMIceLinkSignalProvider*)value;
/// <summary>
/// Sets the time allowed for link establishment, in milliseconds.
/// Defaults to 30000 (30 seconds).
/// </summary>
- (void) setTimeout:(int)value;
/// <summary>
/// Gets the signal provider. A signal provider allows the conference
/// to do its own signalling without the need for application-level interaction.
/// </summary>
- (FMIceLinkSignalProvider*) signalProvider;
/// <summary>
/// Gets the time allowed for link establishment, in milliseconds.
/// Defaults to 30000 (30 seconds).
/// </summary>
- (int) timeout;
/// <summary>
/// Destroys links to all connected peers.
/// </summary>
- (void) unlinkAll;
/// <summary>
/// Destroys links to all connected peers for the specified reason.
/// </summary>
/// <param name="reason">The reason.</param>
- (void) unlinkAllWithReason:(NSString*)reason;
/// <summary>
/// Destroys the link to the specified peer.
/// </summary>
/// <param name="peerId">The peer ID.</param>
/// <returns><c>false</c> if a link with the specified peer ID does not exist; otherwise, <c>true</c>.</returns>
- (bool) unlinkWithPeerId:(NSString*)peerId;
/// <summary>
/// Destroys the link to the specified peer for the specified reason.
/// </summary>
/// <param name="peerId">The peer ID.</param>
/// <param name="reason">The reason.</param>
/// <returns><c>false</c> if a link with the specified peer ID does not exist; otherwise, <c>true</c>.</returns>
- (bool) unlinkWithPeerId:(NSString*)peerId reason:(NSString*)reason;

@end


@class FMIceLinkAcceptSuccessArgs;
@class FMIceLinkAcceptFailureArgs;
@class FMIceLinkAcceptCompleteArgs;
@class FMIceLinkOfferAnswer;
@class FMCallback;
@class NSStringFMExtensions;

/// <summary>
/// Arguments for link accept invocations.
/// </summary>
#pragma clang diagnostic ignored "-Wshorten-64-to-32"
#pragma clang diagnostic ignored "-Wint-to-pointer-cast"

@interface FMIceLinkAcceptArgs : FMDynamic 

/// <summary>
/// Initializes a new instance of the <see cref="FMIceLinkAcceptArgs" /> class.
/// </summary>
/// <param name="offerAnswer">The offer/answer to accept.</param>
+ (FMIceLinkAcceptArgs*) acceptArgsWithOfferAnswer:(FMIceLinkOfferAnswer*)offerAnswer;
/// <summary>
/// Deserializes an instance from JSON.
/// </summary>
/// <param name="acceptArgsJson">The JSON to deserialize.</param>
/// <returns>The deserialized accept arguments.</returns>
+ (FMIceLinkAcceptArgs*) fromJsonWithAcceptArgsJson:(NSString*)acceptArgsJson;
/// <summary>
/// Initializes a new instance of the <see cref="FMIceLinkAcceptArgs" /> class.
/// </summary>
/// <param name="offerAnswer">The offer/answer to accept.</param>
- (id) initWithOfferAnswer:(FMIceLinkOfferAnswer*)offerAnswer;
/// <summary>
/// Gets the offer/answer to accept.
/// </summary>
- (FMIceLinkOfferAnswer*) offerAnswer;
/// <summary>
/// Gets the callback to invoke when the accept operation completes.
/// </summary>
- (FMCallback*) onComplete;
/// <summary>
/// Gets the callback to invoke if the accept operation fails.
/// </summary>
- (FMCallback*) onFailure;
/// <summary>
/// Gets the callback to invoke if the accept operation completes successfully.
/// </summary>
- (FMCallback*) onSuccess;
/// <summary>
/// Sets the offer/answer to accept.
/// </summary>
- (void) setOfferAnswer:(FMIceLinkOfferAnswer*)value;
/// <summary>
/// Sets the callback to invoke when the accept operation completes.
/// </summary>
- (void) setOnComplete:(FMCallback*)value;
/// <summary>
/// Sets the callback to invoke when the accept operation completes.
/// </summary>
- (void) setOnCompleteBlock:(void (^) (FMIceLinkAcceptCompleteArgs*))valueBlock;
/// <summary>
/// Sets the callback to invoke if the accept operation fails.
/// </summary>
- (void) setOnFailure:(FMCallback*)value;
/// <summary>
/// Sets the callback to invoke if the accept operation fails.
/// </summary>
- (void) setOnFailureBlock:(void (^) (FMIceLinkAcceptFailureArgs*))valueBlock;
/// <summary>
/// Sets the callback to invoke if the accept operation completes successfully.
/// </summary>
- (void) setOnSuccess:(FMCallback*)value;
/// <summary>
/// Sets the callback to invoke if the accept operation completes successfully.
/// </summary>
- (void) setOnSuccessBlock:(void (^) (FMIceLinkAcceptSuccessArgs*))valueBlock;
/// <summary>
/// Serializes this instance to JSON.
/// </summary>
/// <returns></returns>
- (NSString*) toJson;
/// <summary>
/// Serializes an instance to JSON.
/// </summary>
/// <param name="acceptArgs">The accept arguments to serialize.</param>
/// <returns>The serialized JSON.</returns>
+ (NSString*) toJsonWithAcceptArgs:(FMIceLinkAcceptArgs*)acceptArgs;

@end


@class FMIceLinkLink;
@class FMIceLinkOfferAnswer;
@class NSStringFMExtensions;

/// <summary>
/// Arguments for the accept complete event.
/// </summary>
#pragma clang diagnostic ignored "-Wshorten-64-to-32"
#pragma clang diagnostic ignored "-Wint-to-pointer-cast"

@interface FMIceLinkAcceptCompleteArgs : FMDynamic 

+ (FMIceLinkAcceptCompleteArgs*) acceptCompleteArgs;
/// <summary>
/// Deserializes an instance from JSON.
/// </summary>
/// <param name="acceptCompleteArgsJson">The JSON to deserialize.</param>
/// <returns>The deserialized accept complete arguments.</returns>
+ (FMIceLinkAcceptCompleteArgs*) fromJsonWithAcceptCompleteArgsJson:(NSString*)acceptCompleteArgsJson;
- (id) init;
/// <summary>
/// Gets the active link.
/// </summary>
- (FMIceLinkLink*) link;
/// <summary>
/// Gets the original offer/answer to accept.
/// </summary>
- (FMIceLinkOfferAnswer*) offerAnswer;
- (void) setLink:(FMIceLinkLink*)value;
- (void) setOfferAnswer:(FMIceLinkOfferAnswer*)value;
/// <summary>
/// Serializes this instance to JSON.
/// </summary>
/// <returns></returns>
- (NSString*) toJson;
/// <summary>
/// Serializes an instance to JSON.
/// </summary>
/// <param name="acceptCompleteArgs">The accept complete arguments to serialize.</param>
/// <returns>The serialized JSON.</returns>
+ (NSString*) toJsonWithAcceptCompleteArgs:(FMIceLinkAcceptCompleteArgs*)acceptCompleteArgs;

@end


@class NSExceptionFMExtensions;
@class FMIceLinkLink;
@class FMIceLinkOfferAnswer;
@class NSStringFMExtensions;

/// <summary>
/// Arguments for the accept failure event.
/// </summary>
#pragma clang diagnostic ignored "-Wshorten-64-to-32"
#pragma clang diagnostic ignored "-Wint-to-pointer-cast"

@interface FMIceLinkAcceptFailureArgs : FMDynamic 

+ (FMIceLinkAcceptFailureArgs*) acceptFailureArgs;
/// <summary>
/// Gets the exception that occurred.
/// </summary>
- (NSException*) exception;
/// <summary>
/// Deserializes an instance from JSON.
/// </summary>
/// <param name="acceptFailureArgsJson">The JSON to deserialize.</param>
/// <returns>The deserialized accept failure arguments.</returns>
+ (FMIceLinkAcceptFailureArgs*) fromJsonWithAcceptFailureArgsJson:(NSString*)acceptFailureArgsJson;
- (id) init;
/// <summary>
/// Gets the active link.
/// </summary>
- (FMIceLinkLink*) link;
/// <summary>
/// Gets the original offer/answer to accept.
/// </summary>
- (FMIceLinkOfferAnswer*) offerAnswer;
- (void) setException:(NSException*)value;
- (void) setLink:(FMIceLinkLink*)value;
- (void) setOfferAnswer:(FMIceLinkOfferAnswer*)value;
/// <summary>
/// Serializes this instance to JSON.
/// </summary>
/// <returns></returns>
- (NSString*) toJson;
/// <summary>
/// Serializes an instance to JSON.
/// </summary>
/// <param name="acceptFailureArgs">The accept failure arguments to serialize.</param>
/// <returns>The serialized JSON.</returns>
+ (NSString*) toJsonWithAcceptFailureArgs:(FMIceLinkAcceptFailureArgs*)acceptFailureArgs;

@end


@class FMIceLinkLink;
@class FMIceLinkOfferAnswer;
@class NSStringFMExtensions;

/// <summary>
/// Arguments for the accept success event.
/// </summary>
#pragma clang diagnostic ignored "-Wshorten-64-to-32"
#pragma clang diagnostic ignored "-Wint-to-pointer-cast"

@interface FMIceLinkAcceptSuccessArgs : FMDynamic 

+ (FMIceLinkAcceptSuccessArgs*) acceptSuccessArgs;
/// <summary>
/// Deserializes an instance from JSON.
/// </summary>
/// <param name="acceptSuccessArgsJson">The JSON to deserialize.</param>
/// <returns>The deserialized accept success arguments.</returns>
+ (FMIceLinkAcceptSuccessArgs*) fromJsonWithAcceptSuccessArgsJson:(NSString*)acceptSuccessArgsJson;
- (id) init;
/// <summary>
/// Gets the active link.
/// </summary>
- (FMIceLinkLink*) link;
/// <summary>
/// Gets the original offer/answer to accept.
/// </summary>
- (FMIceLinkOfferAnswer*) offerAnswer;
- (void) setLink:(FMIceLinkLink*)value;
- (void) setOfferAnswer:(FMIceLinkOfferAnswer*)value;
/// <summary>
/// Serializes this instance to JSON.
/// </summary>
/// <returns></returns>
- (NSString*) toJson;
/// <summary>
/// Serializes an instance to JSON.
/// </summary>
/// <param name="acceptSuccessArgs">The accept success arguments to serialize.</param>
/// <returns>The serialized JSON.</returns>
+ (NSString*) toJsonWithAcceptSuccessArgs:(FMIceLinkAcceptSuccessArgs*)acceptSuccessArgs;

@end


@class FMIceLinkLink;
@class NSStringFMExtensions;

/// <summary>
/// Arguments for the create complete event.
/// </summary>
#pragma clang diagnostic ignored "-Wshorten-64-to-32"
#pragma clang diagnostic ignored "-Wint-to-pointer-cast"

@interface FMIceLinkCreateCompleteArgs : FMDynamic 

+ (FMIceLinkCreateCompleteArgs*) createCompleteArgs;
/// <summary>
/// Deserializes an instance from JSON.
/// </summary>
/// <param name="createCompleteArgsJson">The JSON to deserialize.</param>
/// <returns>The deserialized create complete arguments.</returns>
+ (FMIceLinkCreateCompleteArgs*) fromJsonWithCreateCompleteArgsJson:(NSString*)createCompleteArgsJson;
- (id) init;
/// <summary>
/// Gets the active link.
/// </summary>
- (FMIceLinkLink*) link;
- (void) setLink:(FMIceLinkLink*)value;
/// <summary>
/// Serializes this instance to JSON.
/// </summary>
/// <returns></returns>
- (NSString*) toJson;
/// <summary>
/// Serializes an instance to JSON.
/// </summary>
/// <param name="createCompleteArgs">The create complete arguments to serialize.</param>
/// <returns>The serialized JSON.</returns>
+ (NSString*) toJsonWithCreateCompleteArgs:(FMIceLinkCreateCompleteArgs*)createCompleteArgs;

@end


@class NSExceptionFMExtensions;
@class FMIceLinkLink;
@class NSStringFMExtensions;

/// <summary>
/// Arguments for the create failure event.
/// </summary>
#pragma clang diagnostic ignored "-Wshorten-64-to-32"
#pragma clang diagnostic ignored "-Wint-to-pointer-cast"

@interface FMIceLinkCreateFailureArgs : FMDynamic 

+ (FMIceLinkCreateFailureArgs*) createFailureArgs;
/// <summary>
/// Gets the exception that occurred.
/// </summary>
- (NSException*) exception;
/// <summary>
/// Deserializes an instance from JSON.
/// </summary>
/// <param name="createFailureArgsJson">The JSON to deserialize.</param>
/// <returns>The deserialized create failure arguments.</returns>
+ (FMIceLinkCreateFailureArgs*) fromJsonWithCreateFailureArgsJson:(NSString*)createFailureArgsJson;
- (id) init;
/// <summary>
/// Gets the active link.
/// </summary>
- (FMIceLinkLink*) link;
- (void) setException:(NSException*)value;
- (void) setLink:(FMIceLinkLink*)value;
/// <summary>
/// Serializes this instance to JSON.
/// </summary>
/// <returns></returns>
- (NSString*) toJson;
/// <summary>
/// Serializes an instance to JSON.
/// </summary>
/// <param name="createFailureArgs">The create failure arguments to serialize.</param>
/// <returns>The serialized JSON.</returns>
+ (NSString*) toJsonWithCreateFailureArgs:(FMIceLinkCreateFailureArgs*)createFailureArgs;

@end


@class FMIceLinkLink;
@class FMIceLinkOfferAnswer;
@class NSStringFMExtensions;

/// <summary>
/// Arguments for the create success event.
/// </summary>
#pragma clang diagnostic ignored "-Wshorten-64-to-32"
#pragma clang diagnostic ignored "-Wint-to-pointer-cast"

@interface FMIceLinkCreateSuccessArgs : FMDynamic 

+ (FMIceLinkCreateSuccessArgs*) createSuccessArgs;
/// <summary>
/// Deserializes an instance from JSON.
/// </summary>
/// <param name="createSuccessArgsJson">The JSON to deserialize.</param>
/// <returns>The deserialized create success arguments.</returns>
+ (FMIceLinkCreateSuccessArgs*) fromJsonWithCreateSuccessArgsJson:(NSString*)createSuccessArgsJson;
- (id) init;
/// <summary>
/// Gets the active link.
/// </summary>
- (FMIceLinkLink*) link;
/// <summary>
/// Gets the generated offer/answer. Must be sent using a third-party signalling
/// mechanism to the relevant peer.
/// </summary>
- (FMIceLinkOfferAnswer*) offerAnswer;
- (void) setLink:(FMIceLinkLink*)value;
- (void) setOfferAnswer:(FMIceLinkOfferAnswer*)value;
/// <summary>
/// Serializes this instance to JSON.
/// </summary>
/// <returns></returns>
- (NSString*) toJson;
/// <summary>
/// Serializes an instance to JSON.
/// </summary>
/// <param name="createSuccessArgs">The create success arguments to serialize.</param>
/// <returns>The serialized JSON.</returns>
+ (NSString*) toJsonWithCreateSuccessArgs:(FMIceLinkCreateSuccessArgs*)createSuccessArgs;

@end


@class NSStringFMExtensions;
@class FMNullableInt;
@class NSMutableArrayFMExtensions;

/// <summary>
/// Information about a discovered candidate.
/// </summary>
#pragma clang diagnostic ignored "-Wshorten-64-to-32"
#pragma clang diagnostic ignored "-Wint-to-pointer-cast"

@interface FMIceLinkCandidate : NSObject 

+ (FMIceLinkCandidate*) candidate;
/// <summary>
/// Deserializes an array of instances from JSON.
/// </summary>
/// <param name="candidatesJson">The JSON to deserialize.</param>
/// <returns>The deserialized candidates.</returns>
+ (NSMutableArray*) fromJsonMultipleWithCandidatesJson:(NSString*)candidatesJson;
/// <summary>
/// Deserializes an instance from JSON.
/// </summary>
/// <param name="candidateJson">The JSON to deserialize.</param>
/// <returns>The deserialized candidate.</returns>
+ (FMIceLinkCandidate*) fromJsonWithCandidateJson:(NSString*)candidateJson;
/// <summary>
/// Gets the default type preference for a
/// host candidate. Defaults to 126.
/// </summary>
+ (uint8_t) hostTypePreference;
- (id) init;
/// <summary>
/// Deserializes a candidate mode from JSON.
/// </summary>
/// <param name="candidateModeJson">The JSON to deserialize.</param>
/// <returns>The deserialized candidate mode.</returns>
+ (FMIceLinkCandidateMode) modeFromJsonWithCandidateModeJson:(NSString*)candidateModeJson;
/// <summary>
/// Deserializes an array of candidate modes from JSON.
/// </summary>
/// <param name="candidateModesJson">The JSON to deserialize.</param>
/// <returns>The deserialized candidate modes.</returns>
+ (NSMutableArray*) modesFromJsonMultipleWithCandidateModesJson:(NSString*)candidateModesJson;
/// <summary>
/// Serializes an array of candidate modes to JSON.
/// </summary>
/// <param name="candidateModes">The candidate modes to serialize.</param>
/// <returns>The serialized JSON.</returns>
+ (NSString*) modesToJsonMultipleWithCandidateModes:(NSMutableArray*)candidateModes;
/// <summary>
/// Serializes a candidate mode to JSON.
/// </summary>
/// <param name="candidateMode">The candidate mode to serialize.</param>
/// <returns>The serialized JSON.</returns>
+ (NSString*) modeToJsonWithCandidateMode:(FMIceLinkCandidateMode)candidateMode;
/// <summary>
/// Gets the default type preference for a
/// host candidate. Defaults to 110.
/// </summary>
+ (uint8_t) peerReflexiveTypePreference;
/// <summary>
/// Gets the default type preference for a
/// host candidate. Defaults to 0.
/// </summary>
+ (uint8_t) relayTypePreference;
/// <summary>
/// Gets the SDP attribute describing the discovered candidate.
/// </summary>
- (NSString*) sdpCandidateAttribute;
/// <summary>
/// Gets the index of the media stream for which this candidate is valid.
/// </summary>
- (FMNullableInt*) sdpMediaIndex;
/// <summary>
/// Gets the default type preference for a
/// host candidate. Defaults to 100.
/// </summary>
+ (uint8_t) serverReflexiveTypePreference;
/// <summary>
/// Sets the default type preference for a
/// host candidate. Defaults to 126.
/// </summary>
+ (void) setHostTypePreference:(uint8_t)value;
/// <summary>
/// Sets the default type preference for a
/// host candidate. Defaults to 110.
/// </summary>
+ (void) setPeerReflexiveTypePreference:(uint8_t)value;
/// <summary>
/// Sets the default type preference for a
/// host candidate. Defaults to 0.
/// </summary>
+ (void) setRelayTypePreference:(uint8_t)value;
/// <summary>
/// Sets the SDP attribute describing the discovered candidate.
/// </summary>
- (void) setSdpCandidateAttribute:(NSString*)value;
/// <summary>
/// Sets the index of the media stream for which this candidate is valid.
/// </summary>
- (void) setSdpMediaIndex:(FMNullableInt*)value;
/// <summary>
/// Sets the default type preference for a
/// host candidate. Defaults to 100.
/// </summary>
+ (void) setServerReflexiveTypePreference:(uint8_t)value;
/// <summary>
/// Serializes this instance to JSON.
/// </summary>
/// <returns></returns>
- (NSString*) toJson;
/// <summary>
/// Serializes an array of instances to JSON.
/// </summary>
/// <param name="candidates">The candidates to serialize.</param>
/// <returns>The serialized JSON.</returns>
+ (NSString*) toJsonMultipleWithCandidates:(NSMutableArray*)candidates;
/// <summary>
/// Serializes an instance to JSON.
/// </summary>
/// <param name="candidate">The candidate to serialize.</param>
/// <returns>The serialized JSON.</returns>
+ (NSString*) toJsonWithCandidate:(FMIceLinkCandidate*)candidate;
/// <summary>
/// Gets the candidate type.
/// </summary>
- (FMIceLinkCandidateType) type;
/// <summary>
/// Deserializes a candidate type from JSON.
/// </summary>
/// <param name="candidateTypeJson">The JSON to deserialize.</param>
/// <returns>The deserialized candidate type.</returns>
+ (FMIceLinkCandidateType) typeFromJsonWithCandidateTypeJson:(NSString*)candidateTypeJson;
/// <summary>
/// Deserializes an array of candidate types from JSON.
/// </summary>
/// <param name="candidateTypesJson">The JSON to deserialize.</param>
/// <returns>The deserialized candidate types.</returns>
+ (NSMutableArray*) typesFromJsonMultipleWithCandidateTypesJson:(NSString*)candidateTypesJson;
/// <summary>
/// Serializes an array of candidate types to JSON.
/// </summary>
/// <param name="candidateTypes">The candidate types to serialize.</param>
/// <returns>The serialized JSON.</returns>
+ (NSString*) typesToJsonMultipleWithCandidateTypes:(NSMutableArray*)candidateTypes;
/// <summary>
/// Serializes a candidate type to JSON.
/// </summary>
/// <param name="candidateType">The candidate type to serialize.</param>
/// <returns>The serialized JSON.</returns>
+ (NSString*) typeToJsonWithCandidateType:(FMIceLinkCandidateType)candidateType;

@end


@class FMIceLinkICEMediaStream;

#pragma clang diagnostic ignored "-Wshorten-64-to-32"
#pragma clang diagnostic ignored "-Wint-to-pointer-cast"

@interface FMIceLinkBaseMediaStreamOutputArgs : FMDynamic 

+ (FMIceLinkBaseMediaStreamOutputArgs*) baseMediaStreamOutputArgs;
- (id) init;
- (FMIceLinkICEMediaStream*) mediaStream;
- (void) setMediaStream:(FMIceLinkICEMediaStream*)value;

@end


@class FMIceLinkICEMediaFormat;
@class FMIceLinkICEMediaStream;
@class FMIceLinkRTPPacket;

#pragma clang diagnostic ignored "-Wshorten-64-to-32"
#pragma clang diagnostic ignored "-Wint-to-pointer-cast"

@interface FMIceLinkICEAgentReceiveRTPArgs : FMDynamic 

+ (FMIceLinkICEAgentReceiveRTPArgs*) iceAgentReceiveRTPArgs;
- (id) init;
- (FMIceLinkICEMediaFormat*) mediaFormat;
- (int) mediaIndex;
- (FMIceLinkICEMediaStream*) mediaStream;
- (FMIceLinkRTPPacket*) packet;
- (void) setMediaFormat:(FMIceLinkICEMediaFormat*)value;
- (void) setMediaIndex:(int)value;
- (void) setMediaStream:(FMIceLinkICEMediaStream*)value;
- (void) setPacket:(FMIceLinkRTPPacket*)value;
- (void) setStreamIndex:(int)value;
- (int) streamIndex;

@end


@class FMIceLinkICEMediaStream;
@class NSMutableArrayFMExtensions;

#pragma clang diagnostic ignored "-Wshorten-64-to-32"
#pragma clang diagnostic ignored "-Wint-to-pointer-cast"

@interface FMIceLinkICEAgentReceiveRTCPArgs : FMDynamic 

+ (FMIceLinkICEAgentReceiveRTCPArgs*) iceAgentReceiveRTCPArgs;
- (id) init;
- (int) mediaIndex;
- (FMIceLinkICEMediaStream*) mediaStream;
- (NSMutableArray*) packets;
- (void) setMediaIndex:(int)value;
- (void) setMediaStream:(FMIceLinkICEMediaStream*)value;
- (void) setPackets:(NSMutableArray*)value;
- (void) setStreamIndex:(int)value;
- (int) streamIndex;

@end


@class FMIceLinkICECandidate;

#pragma clang diagnostic ignored "-Wshorten-64-to-32"
#pragma clang diagnostic ignored "-Wint-to-pointer-cast"

@interface FMIceLinkICELocalCandidateArgs : NSObject 

- (FMIceLinkICECandidate*) candidate;
+ (FMIceLinkICELocalCandidateArgs*) iceLocalCandidateArgs;
- (id) init;
- (void) setCandidate:(FMIceLinkICECandidate*)value;

@end


@class NSStringFMExtensions;

#pragma clang diagnostic ignored "-Wshorten-64-to-32"
#pragma clang diagnostic ignored "-Wint-to-pointer-cast"

@interface FMIceLinkICEPeerCloseArgs : NSObject 

+ (FMIceLinkICEPeerCloseArgs*) icePeerCloseArgs;
- (id) init;
- (NSString*) reason;
- (void) setReason:(NSString*)value;

@end


@class FMIceLinkICECandidate;
@class FMIceLinkICEMediaFormat;
@class FMIceLinkICEMediaStream;
@class FMIceLinkRTPPacket;
@class FMIceLinkTransportAddress;

#pragma clang diagnostic ignored "-Wshorten-64-to-32"
#pragma clang diagnostic ignored "-Wint-to-pointer-cast"

@interface FMIceLinkICEPeerRTPPacketArgs : NSObject 

+ (FMIceLinkICEPeerRTPPacketArgs*) icePeerRTPPacketArgs;
- (id) init;
- (FMIceLinkICECandidate*) localCandidate;
- (FMIceLinkICEMediaFormat*) mediaFormat;
- (FMIceLinkICEMediaStream*) mediaStream;
- (FMIceLinkRTPPacket*) packet;
- (FMIceLinkTransportAddress*) remoteAddress;
- (void) setLocalCandidate:(FMIceLinkICECandidate*)value;
- (void) setMediaFormat:(FMIceLinkICEMediaFormat*)value;
- (void) setMediaStream:(FMIceLinkICEMediaStream*)value;
- (void) setPacket:(FMIceLinkRTPPacket*)value;
- (void) setRemoteAddress:(FMIceLinkTransportAddress*)value;

@end


@class FMIceLinkICECandidate;
@class FMIceLinkICEMediaStream;
@class NSMutableArrayFMExtensions;
@class FMIceLinkTransportAddress;

#pragma clang diagnostic ignored "-Wshorten-64-to-32"
#pragma clang diagnostic ignored "-Wint-to-pointer-cast"

@interface FMIceLinkICEPeerRTCPPacketsArgs : NSObject 

+ (FMIceLinkICEPeerRTCPPacketsArgs*) icePeerRTCPPacketsArgs;
- (id) init;
- (FMIceLinkICECandidate*) localCandidate;
- (FMIceLinkICEMediaStream*) mediaStream;
- (NSMutableArray*) packets;
- (FMIceLinkTransportAddress*) remoteAddress;
- (void) setLocalCandidate:(FMIceLinkICECandidate*)value;
- (void) setMediaStream:(FMIceLinkICEMediaStream*)value;
- (void) setPackets:(NSMutableArray*)value;
- (void) setRemoteAddress:(FMIceLinkTransportAddress*)value;

@end


@class FMIceLinkTransportAddress;
@class FMIceLinkICEMessageBroker;
@class FMIceLinkSTUNMessage;

#pragma clang diagnostic ignored "-Wshorten-64-to-32"
#pragma clang diagnostic ignored "-Wint-to-pointer-cast"

@interface FMIceLinkICESendRequestBeforeSendArgs : FMDynamic 

- (FMIceLinkTransportAddress*) address;
- (int) attempt;
- (bool) cancel;
+ (FMIceLinkICESendRequestBeforeSendArgs*) iceSendRequestBeforeSendArgs;
- (id) init;
- (FMIceLinkICEMessageBroker*) messageBroker;
- (FMIceLinkSTUNMessage*) request;
- (void) setAddress:(FMIceLinkTransportAddress*)value;
- (void) setAttempt:(int)value;
- (void) setCancel:(bool)value;
- (void) setMessageBroker:(FMIceLinkICEMessageBroker*)value;
- (void) setRequest:(FMIceLinkSTUNMessage*)value;
- (void) setTurnRelay:(FMIceLinkTransportAddress*)value;
- (FMIceLinkTransportAddress*) turnRelay;

@end



#pragma clang diagnostic ignored "-Wshorten-64-to-32"
#pragma clang diagnostic ignored "-Wint-to-pointer-cast"

@interface FMIceLinkICEAgentInitArgs : FMDynamic 

+ (FMIceLinkICEAgentInitArgs*) iceAgentInitArgs;
- (id) init;
- (bool) initiator;
- (void) setInitiator:(bool)value;

@end


@class NSMutableArrayFMExtensions;

#pragma clang diagnostic ignored "-Wshorten-64-to-32"
#pragma clang diagnostic ignored "-Wint-to-pointer-cast"

@interface FMIceLinkICEAgentUpArgs : FMDynamic 

+ (FMIceLinkICEAgentUpArgs*) iceAgentUpArgs;
- (id) init;
- (bool) initiator;
- (NSMutableArray*) mediaStreams;
- (void) setInitiator:(bool)value;
- (void) setMediaStreams:(NSMutableArray*)value;

@end


@class FMIceLinkICEDisconnectCompleteArgs;
@class FMCallback;
@class NSStringFMExtensions;

#pragma clang diagnostic ignored "-Wshorten-64-to-32"
#pragma clang diagnostic ignored "-Wint-to-pointer-cast"

@interface FMIceLinkICEDisconnectArgs : FMDynamic 

+ (FMIceLinkICEDisconnectArgs*) iceDisconnectArgsWithReason:(NSString*)reason;
- (id) initWithReason:(NSString*)reason;
- (FMCallback*) onComplete;
- (NSString*) reason;
- (void) setOnComplete:(FMCallback*)value;
- (void) setOnCompleteBlock:(void (^) (FMIceLinkICEDisconnectCompleteArgs*))valueBlock;
- (void) setReason:(NSString*)value;

@end


@class NSExceptionFMExtensions;
@class NSStringFMExtensions;

#pragma clang diagnostic ignored "-Wshorten-64-to-32"
#pragma clang diagnostic ignored "-Wint-to-pointer-cast"

@interface FMIceLinkICEDisconnectCompleteArgs : FMDynamic 

- (NSException*) exception;
+ (FMIceLinkICEDisconnectCompleteArgs*) iceDisconnectCompleteArgs;
- (id) init;
- (NSString*) reason;
- (void) setException:(NSException*)value;
- (void) setReason:(NSString*)value;

@end


@class NSStringFMExtensions;

#pragma clang diagnostic ignored "-Wshorten-64-to-32"
#pragma clang diagnostic ignored "-Wint-to-pointer-cast"

@interface FMIceLinkICEAgentDownArgs : FMDynamic 

- (bool) deadStreamDetected;
+ (FMIceLinkICEAgentDownArgs*) iceAgentDownArgs;
- (id) init;
- (NSString*) reason;
- (bool) relayFailureDetected;
- (void) setDeadStreamDetected:(bool)value;
- (void) setReason:(NSString*)value;
- (void) setRelayFailureDetected:(bool)value;

@end


@class FMIceLinkCandidate;

#pragma clang diagnostic ignored "-Wshorten-64-to-32"
#pragma clang diagnostic ignored "-Wint-to-pointer-cast"

@interface FMIceLinkICEAgentCandidateArgs : FMDynamic 

- (FMIceLinkCandidate*) candidate;
+ (FMIceLinkICEAgentCandidateArgs*) iceAgentCandidateArgs;
- (id) init;
- (void) setCandidate:(FMIceLinkCandidate*)value;

@end


@class FMIceLinkICECreatePermissionSuccessArgs;
@class FMIceLinkICECreatePermissionFailureArgs;
@class FMIceLinkICECreatePermissionCompleteArgs;
@class FMCallback;
@class FMIceLinkTransportAddress;

#pragma clang diagnostic ignored "-Wshorten-64-to-32"
#pragma clang diagnostic ignored "-Wint-to-pointer-cast"

@interface FMIceLinkICECreatePermissionArgs : FMDynamic 

+ (FMIceLinkICECreatePermissionArgs*) iceCreatePermissionArgsWithRemoteAddress:(FMIceLinkTransportAddress*)remoteAddress;
- (id) initWithRemoteAddress:(FMIceLinkTransportAddress*)remoteAddress;
- (FMCallback*) onComplete;
- (FMCallback*) onFailure;
- (FMCallback*) onSuccess;
- (FMIceLinkTransportAddress*) remoteAddress;
- (void) setOnComplete:(FMCallback*)value;
- (void) setOnCompleteBlock:(void (^) (FMIceLinkICECreatePermissionCompleteArgs*))valueBlock;
- (void) setOnFailure:(FMCallback*)value;
- (void) setOnFailureBlock:(void (^) (FMIceLinkICECreatePermissionFailureArgs*))valueBlock;
- (void) setOnSuccess:(FMCallback*)value;
- (void) setOnSuccessBlock:(void (^) (FMIceLinkICECreatePermissionSuccessArgs*))valueBlock;
- (void) setRemoteAddress:(FMIceLinkTransportAddress*)value;

@end


@class FMIceLinkTransportAddress;

#pragma clang diagnostic ignored "-Wshorten-64-to-32"
#pragma clang diagnostic ignored "-Wint-to-pointer-cast"

@interface FMIceLinkICECreatePermissionCompleteArgs : FMDynamic 

+ (FMIceLinkICECreatePermissionCompleteArgs*) iceCreatePermissionCompleteArgs;
- (id) init;
- (FMIceLinkTransportAddress*) remoteAddress;
- (void) setRemoteAddress:(FMIceLinkTransportAddress*)value;

@end


@class NSExceptionFMExtensions;
@class FMIceLinkTransportAddress;

#pragma clang diagnostic ignored "-Wshorten-64-to-32"
#pragma clang diagnostic ignored "-Wint-to-pointer-cast"

@interface FMIceLinkICECreatePermissionFailureArgs : FMDynamic 

- (NSException*) exception;
+ (FMIceLinkICECreatePermissionFailureArgs*) iceCreatePermissionFailureArgs;
- (id) init;
- (FMIceLinkTransportAddress*) remoteAddress;
- (void) setException:(NSException*)value;
- (void) setRemoteAddress:(FMIceLinkTransportAddress*)value;

@end


@class FMIceLinkTransportAddress;

#pragma clang diagnostic ignored "-Wshorten-64-to-32"
#pragma clang diagnostic ignored "-Wint-to-pointer-cast"

@interface FMIceLinkICECreatePermissionSuccessArgs : FMDynamic 

+ (FMIceLinkICECreatePermissionSuccessArgs*) iceCreatePermissionSuccessArgs;
- (id) init;
- (FMIceLinkTransportAddress*) remoteAddress;
- (void) setRemoteAddress:(FMIceLinkTransportAddress*)value;

@end


@class FMIceLinkICECandidatePair;
@class FMIceLinkICEMediaStream;

#pragma clang diagnostic ignored "-Wshorten-64-to-32"
#pragma clang diagnostic ignored "-Wint-to-pointer-cast"

@interface FMIceLinkICESelectedValidCandidatePairArgs : FMDynamic 

- (FMIceLinkICECandidatePair*) candidatePair;
+ (FMIceLinkICESelectedValidCandidatePairArgs*) iceSelectedValidCandidatePairArgs;
- (id) init;
- (FMIceLinkICEMediaStream*) mediaStream;
- (void) setCandidatePair:(FMIceLinkICECandidatePair*)value;
- (void) setMediaStream:(FMIceLinkICEMediaStream*)value;

@end


@class FMIceLinkICESendResponseSuccessArgs;
@class FMIceLinkICESendResponseFailureArgs;
@class FMIceLinkICESendResponseCompleteArgs;
@class FMIceLinkTransportAddress;
@class FMCallback;
@class FMIceLinkSTUNMessage;

#pragma clang diagnostic ignored "-Wshorten-64-to-32"
#pragma clang diagnostic ignored "-Wint-to-pointer-cast"

@interface FMIceLinkICESendResponseArgs : FMDynamic 

- (FMIceLinkTransportAddress*) address;
+ (FMIceLinkICESendResponseArgs*) iceSendResponseArgsWithResponse:(FMIceLinkSTUNMessage*)response address:(FMIceLinkTransportAddress*)address;
- (id) initWithResponse:(FMIceLinkSTUNMessage*)response address:(FMIceLinkTransportAddress*)address;
- (FMCallback*) onComplete;
- (FMCallback*) onFailure;
- (FMCallback*) onSuccess;
- (FMIceLinkSTUNMessage*) response;
- (void) setAddress:(FMIceLinkTransportAddress*)value;
- (void) setOnComplete:(FMCallback*)value;
- (void) setOnCompleteBlock:(void (^) (FMIceLinkICESendResponseCompleteArgs*))valueBlock;
- (void) setOnFailure:(FMCallback*)value;
- (void) setOnFailureBlock:(void (^) (FMIceLinkICESendResponseFailureArgs*))valueBlock;
- (void) setOnSuccess:(FMCallback*)value;
- (void) setOnSuccessBlock:(void (^) (FMIceLinkICESendResponseSuccessArgs*))valueBlock;
- (void) setResponse:(FMIceLinkSTUNMessage*)value;
- (void) setTurnRelay:(FMIceLinkTransportAddress*)value;
- (FMIceLinkTransportAddress*) turnRelay;

@end


@class FMIceLinkTransportAddress;
@class FMIceLinkSTUNMessage;

#pragma clang diagnostic ignored "-Wshorten-64-to-32"
#pragma clang diagnostic ignored "-Wint-to-pointer-cast"

@interface FMIceLinkICESendResponseCompleteArgs : FMIceLinkBaseMediaStreamOutputArgs 

- (FMIceLinkTransportAddress*) address;
+ (FMIceLinkICESendResponseCompleteArgs*) iceSendResponseCompleteArgs;
- (id) init;
- (FMIceLinkSTUNMessage*) response;
- (void) setAddress:(FMIceLinkTransportAddress*)value;
- (void) setResponse:(FMIceLinkSTUNMessage*)value;
- (void) setTurnRelay:(FMIceLinkTransportAddress*)value;
- (FMIceLinkTransportAddress*) turnRelay;

@end


@class FMIceLinkTransportAddress;
@class NSExceptionFMExtensions;
@class FMIceLinkSTUNMessage;

#pragma clang diagnostic ignored "-Wshorten-64-to-32"
#pragma clang diagnostic ignored "-Wint-to-pointer-cast"

@interface FMIceLinkICESendResponseFailureArgs : FMDynamic 

- (FMIceLinkTransportAddress*) address;
- (NSException*) exception;
+ (FMIceLinkICESendResponseFailureArgs*) iceSendResponseFailureArgs;
- (id) init;
- (FMIceLinkSTUNMessage*) response;
- (void) setAddress:(FMIceLinkTransportAddress*)value;
- (void) setException:(NSException*)value;
- (void) setResponse:(FMIceLinkSTUNMessage*)value;
- (void) setTurnRelay:(FMIceLinkTransportAddress*)value;
- (FMIceLinkTransportAddress*) turnRelay;

@end


@class FMIceLinkTransportAddress;
@class FMIceLinkSTUNMessage;

#pragma clang diagnostic ignored "-Wshorten-64-to-32"
#pragma clang diagnostic ignored "-Wint-to-pointer-cast"

@interface FMIceLinkICESendResponseSuccessArgs : FMDynamic 

- (FMIceLinkTransportAddress*) address;
+ (FMIceLinkICESendResponseSuccessArgs*) iceSendResponseSuccessArgs;
- (id) init;
- (FMIceLinkSTUNMessage*) response;
- (void) setAddress:(FMIceLinkTransportAddress*)value;
- (void) setResponse:(FMIceLinkSTUNMessage*)value;
- (void) setTurnRelay:(FMIceLinkTransportAddress*)value;
- (FMIceLinkTransportAddress*) turnRelay;

@end


@class FMIceLinkICESendRequestSuccessArgs;
@class FMIceLinkICESendRequestFailureArgs;
@class FMIceLinkICESendRequestCompleteArgs;
@class FMIceLinkICESendRequestBeforeSendArgs;
@class FMIceLinkTransportAddress;
@class FMCallback;
@class FMIceLinkSTUNMessage;

#pragma clang diagnostic ignored "-Wshorten-64-to-32"
#pragma clang diagnostic ignored "-Wint-to-pointer-cast"

@interface FMIceLinkICESendRequestArgs : FMDynamic 

- (FMIceLinkTransportAddress*) address;
- (int) attempt;
- (long long) earliestTimeToSend;
+ (FMIceLinkICESendRequestArgs*) iceSendRequestArgsWithRequest:(FMIceLinkSTUNMessage*)request address:(FMIceLinkTransportAddress*)address;
- (id) initWithRequest:(FMIceLinkSTUNMessage*)request address:(FMIceLinkTransportAddress*)address;
- (int) maxAttempts;
- (FMCallback*) onBeforeSend;
- (FMCallback*) onComplete;
- (FMCallback*) onFailure;
- (FMCallback*) onSuccess;
- (FMIceLinkSTUNMessage*) request;
- (void) setAddress:(FMIceLinkTransportAddress*)value;
- (void) setAttempt:(int)value;
- (void) setEarliestTimeToSend:(long long)value;
- (void) setMaxAttempts:(int)value;
- (void) setOnBeforeSend:(FMCallback*)value;
- (void) setOnBeforeSendBlock:(void (^) (FMIceLinkICESendRequestBeforeSendArgs*))valueBlock;
- (void) setOnComplete:(FMCallback*)value;
- (void) setOnCompleteBlock:(void (^) (FMIceLinkICESendRequestCompleteArgs*))valueBlock;
- (void) setOnFailure:(FMCallback*)value;
- (void) setOnFailureBlock:(void (^) (FMIceLinkICESendRequestFailureArgs*))valueBlock;
- (void) setOnSuccess:(FMCallback*)value;
- (void) setOnSuccessBlock:(void (^) (FMIceLinkICESendRequestSuccessArgs*))valueBlock;
- (void) setRequest:(FMIceLinkSTUNMessage*)value;
- (void) setTurnRelay:(FMIceLinkTransportAddress*)value;
- (FMIceLinkTransportAddress*) turnRelay;

@end


@class FMIceLinkTransportAddress;
@class FMIceLinkICEMessageBroker;
@class FMIceLinkSTUNMessage;

#pragma clang diagnostic ignored "-Wshorten-64-to-32"
#pragma clang diagnostic ignored "-Wint-to-pointer-cast"

@interface FMIceLinkICESendRequestCompleteArgs : FMDynamic 

- (FMIceLinkTransportAddress*) address;
- (int) attempt;
+ (FMIceLinkICESendRequestCompleteArgs*) iceSendRequestCompleteArgs;
- (id) init;
- (int) maxAttempts;
- (FMIceLinkICEMessageBroker*) messageBroker;
- (FMIceLinkSTUNMessage*) request;
- (void) setAddress:(FMIceLinkTransportAddress*)value;
- (void) setAttempt:(int)value;
- (void) setMaxAttempts:(int)value;
- (void) setMessageBroker:(FMIceLinkICEMessageBroker*)value;
- (void) setRequest:(FMIceLinkSTUNMessage*)value;
- (void) setTurnRelay:(FMIceLinkTransportAddress*)value;
- (FMIceLinkTransportAddress*) turnRelay;

@end


@class FMIceLinkTransportAddress;
@class NSExceptionFMExtensions;
@class FMIceLinkICEMessageBroker;
@class FMIceLinkSTUNMessage;

#pragma clang diagnostic ignored "-Wshorten-64-to-32"
#pragma clang diagnostic ignored "-Wint-to-pointer-cast"

@interface FMIceLinkICESendRequestFailureArgs : FMDynamic 

- (FMIceLinkTransportAddress*) address;
- (int) attempt;
- (NSException*) exception;
+ (FMIceLinkICESendRequestFailureArgs*) iceSendRequestFailureArgs;
- (id) init;
- (int) maxAttempts;
- (FMIceLinkICEMessageBroker*) messageBroker;
- (FMIceLinkSTUNMessage*) request;
- (void) setAddress:(FMIceLinkTransportAddress*)value;
- (void) setAttempt:(int)value;
- (void) setException:(NSException*)value;
- (void) setMaxAttempts:(int)value;
- (void) setMessageBroker:(FMIceLinkICEMessageBroker*)value;
- (void) setRequest:(FMIceLinkSTUNMessage*)value;
- (void) setStopped:(bool)value;
- (void) setTurnRelay:(FMIceLinkTransportAddress*)value;
- (bool) stopped;
- (FMIceLinkTransportAddress*) turnRelay;

@end


@class FMIceLinkTransportAddress;
@class FMIceLinkICEMessageBroker;
@class FMIceLinkSTUNMessage;

#pragma clang diagnostic ignored "-Wshorten-64-to-32"
#pragma clang diagnostic ignored "-Wint-to-pointer-cast"

@interface FMIceLinkICESendRequestSuccessArgs : FMDynamic 

- (FMIceLinkTransportAddress*) address;
- (int) attempt;
- (int) discardedPacketCount;
+ (FMIceLinkICESendRequestSuccessArgs*) iceSendRequestSuccessArgs;
- (id) init;
- (int) maxAttempts;
- (FMIceLinkICEMessageBroker*) messageBroker;
- (bool) relayed;
- (FMIceLinkTransportAddress*) remoteAddress;
- (FMIceLinkSTUNMessage*) request;
- (FMIceLinkSTUNMessage*) response;
- (void) setAddress:(FMIceLinkTransportAddress*)value;
- (void) setAttempt:(int)value;
- (void) setDiscardedPacketCount:(int)value;
- (void) setMaxAttempts:(int)value;
- (void) setMessageBroker:(FMIceLinkICEMessageBroker*)value;
- (void) setRelayed:(bool)value;
- (void) setRemoteAddress:(FMIceLinkTransportAddress*)value;
- (void) setRequest:(FMIceLinkSTUNMessage*)value;
- (void) setResponse:(FMIceLinkSTUNMessage*)value;
- (void) setTurnRelay:(FMIceLinkTransportAddress*)value;
- (FMIceLinkTransportAddress*) turnRelay;

@end


@class FMIceLinkICEServerBindSuccessArgs;
@class FMIceLinkICEServerBindFailureArgs;
@class FMIceLinkICEServerBindCompleteArgs;
@class FMIceLinkICEUdpHostCandidate;
@class FMCallback;
@class NSMutableArrayFMExtensions;
@class FMIceLinkTransportAddress;

#pragma clang diagnostic ignored "-Wshorten-64-to-32"
#pragma clang diagnostic ignored "-Wint-to-pointer-cast"

@interface FMIceLinkICEServerBindArgs : FMDynamic 

- (FMIceLinkICEUdpHostCandidate*) hostCandidate;
+ (FMIceLinkICEServerBindArgs*) iceServerBindArgsWithHostCandidate:(FMIceLinkICEUdpHostCandidate*)hostCandidate serverAddresses:(NSMutableArray*)serverAddresses;
- (int) index;
- (id) initWithHostCandidate:(FMIceLinkICEUdpHostCandidate*)hostCandidate serverAddresses:(NSMutableArray*)serverAddresses;
- (FMCallback*) onComplete;
- (FMCallback*) onFailure;
- (FMCallback*) onSuccess;
- (FMIceLinkTransportAddress*) serverAddress;
- (NSMutableArray*) serverAddresses;
- (void) setHostCandidate:(FMIceLinkICEUdpHostCandidate*)value;
- (void) setIndex:(int)value;
- (void) setOnComplete:(FMCallback*)value;
- (void) setOnCompleteBlock:(void (^) (FMIceLinkICEServerBindCompleteArgs*))valueBlock;
- (void) setOnFailure:(FMCallback*)value;
- (void) setOnFailureBlock:(void (^) (FMIceLinkICEServerBindFailureArgs*))valueBlock;
- (void) setOnSuccess:(FMCallback*)value;
- (void) setOnSuccessBlock:(void (^) (FMIceLinkICEServerBindSuccessArgs*))valueBlock;
- (void) setServerAddresses:(NSMutableArray*)value;

@end


@class FMIceLinkICEUdpHostCandidate;
@class FMIceLinkTransportAddress;

#pragma clang diagnostic ignored "-Wshorten-64-to-32"
#pragma clang diagnostic ignored "-Wint-to-pointer-cast"

@interface FMIceLinkICEServerBindCompleteArgs : FMIceLinkBaseMediaStreamOutputArgs 

- (FMIceLinkICEUdpHostCandidate*) hostCandidate;
+ (FMIceLinkICEServerBindCompleteArgs*) iceServerBindCompleteArgs;
- (id) init;
- (FMIceLinkTransportAddress*) serverAddress;
- (void) setHostCandidate:(FMIceLinkICEUdpHostCandidate*)value;
- (void) setServerAddress:(FMIceLinkTransportAddress*)value;

@end


@class NSExceptionFMExtensions;
@class FMIceLinkICEUdpHostCandidate;
@class FMIceLinkTransportAddress;

#pragma clang diagnostic ignored "-Wshorten-64-to-32"
#pragma clang diagnostic ignored "-Wint-to-pointer-cast"

@interface FMIceLinkICEServerBindFailureArgs : FMIceLinkBaseMediaStreamOutputArgs 

- (NSException*) exception;
- (FMIceLinkICEUdpHostCandidate*) hostCandidate;
+ (FMIceLinkICEServerBindFailureArgs*) iceServerBindFailureArgs;
- (id) init;
- (FMIceLinkTransportAddress*) serverAddress;
- (void) setException:(NSException*)value;
- (void) setHostCandidate:(FMIceLinkICEUdpHostCandidate*)value;
- (void) setServerAddress:(FMIceLinkTransportAddress*)value;

@end


@class FMIceLinkICEUdpHostCandidate;
@class FMIceLinkTransportAddress;
@class FMIceLinkICEUdpServerReflexiveCandidate;

#pragma clang diagnostic ignored "-Wshorten-64-to-32"
#pragma clang diagnostic ignored "-Wint-to-pointer-cast"

@interface FMIceLinkICEServerBindSuccessArgs : FMIceLinkBaseMediaStreamOutputArgs 

- (FMIceLinkICEUdpHostCandidate*) hostCandidate;
+ (FMIceLinkICEServerBindSuccessArgs*) iceServerBindSuccessArgs;
- (id) init;
- (FMIceLinkTransportAddress*) serverAddress;
- (FMIceLinkICEUdpServerReflexiveCandidate*) serverReflexiveCandidate;
- (void) setHostCandidate:(FMIceLinkICEUdpHostCandidate*)value;
- (void) setServerAddress:(FMIceLinkTransportAddress*)value;
- (void) setServerReflexiveCandidate:(FMIceLinkICEUdpServerReflexiveCandidate*)value;

@end


@class FMIceLinkICEUdpHostCandidate;
@class NSStringFMExtensions;
@class FMIceLinkTransportAddress;

#pragma clang diagnostic ignored "-Wshorten-64-to-32"
#pragma clang diagnostic ignored "-Wint-to-pointer-cast"

@interface FMIceLinkICEServerAllocateCompleteArgs : FMIceLinkBaseMediaStreamOutputArgs 

- (FMIceLinkICEUdpHostCandidate*) hostCandidate;
+ (FMIceLinkICEServerAllocateCompleteArgs*) iceServerAllocateCompleteArgs;
- (id) init;
- (NSString*) password;
- (NSString*) realm;
- (FMIceLinkTransportAddress*) serverAddress;
- (void) setHostCandidate:(FMIceLinkICEUdpHostCandidate*)value;
- (void) setPassword:(NSString*)value;
- (void) setRealm:(NSString*)value;
- (void) setServerAddress:(FMIceLinkTransportAddress*)value;
- (void) setUsername:(NSString*)value;
- (NSString*) username;

@end


@class NSExceptionFMExtensions;
@class FMIceLinkICEUdpHostCandidate;
@class NSStringFMExtensions;
@class FMIceLinkTransportAddress;

#pragma clang diagnostic ignored "-Wshorten-64-to-32"
#pragma clang diagnostic ignored "-Wint-to-pointer-cast"

@interface FMIceLinkICEServerAllocateFailureArgs : FMIceLinkBaseMediaStreamOutputArgs 

- (NSException*) exception;
- (FMIceLinkICEUdpHostCandidate*) hostCandidate;
+ (FMIceLinkICEServerAllocateFailureArgs*) iceServerAllocateFailureArgs;
- (id) init;
- (NSString*) password;
- (NSString*) realm;
- (FMIceLinkTransportAddress*) serverAddress;
- (void) setException:(NSException*)value;
- (void) setHostCandidate:(FMIceLinkICEUdpHostCandidate*)value;
- (void) setPassword:(NSString*)value;
- (void) setRealm:(NSString*)value;
- (void) setServerAddress:(FMIceLinkTransportAddress*)value;
- (void) setUsername:(NSString*)value;
- (NSString*) username;

@end


@class FMIceLinkICEUdpHostCandidate;
@class NSStringFMExtensions;
@class FMIceLinkICEUdpRelayedCandidate;
@class FMIceLinkTransportAddress;
@class FMIceLinkICEUdpServerReflexiveCandidate;

#pragma clang diagnostic ignored "-Wshorten-64-to-32"
#pragma clang diagnostic ignored "-Wint-to-pointer-cast"

@interface FMIceLinkICEServerAllocateSuccessArgs : FMIceLinkBaseMediaStreamOutputArgs 

- (FMIceLinkICEUdpHostCandidate*) hostCandidate;
+ (FMIceLinkICEServerAllocateSuccessArgs*) iceServerAllocateSuccessArgs;
- (id) init;
- (NSString*) password;
- (NSString*) realm;
- (FMIceLinkICEUdpRelayedCandidate*) relayedCandidate;
- (FMIceLinkTransportAddress*) serverAddress;
- (FMIceLinkICEUdpServerReflexiveCandidate*) serverReflexiveCandidate;
- (void) setHostCandidate:(FMIceLinkICEUdpHostCandidate*)value;
- (void) setPassword:(NSString*)value;
- (void) setRealm:(NSString*)value;
- (void) setRelayedCandidate:(FMIceLinkICEUdpRelayedCandidate*)value;
- (void) setServerAddress:(FMIceLinkTransportAddress*)value;
- (void) setServerReflexiveCandidate:(FMIceLinkICEUdpServerReflexiveCandidate*)value;
- (void) setUsername:(NSString*)value;
- (NSString*) username;

@end


@class FMIceLinkICEAcceptSuccessArgs;
@class FMIceLinkICEAcceptFailureArgs;
@class FMIceLinkICEAcceptCompleteArgs;
@class FMIceLinkOfferAnswer;
@class FMCallback;

#pragma clang diagnostic ignored "-Wshorten-64-to-32"
#pragma clang diagnostic ignored "-Wint-to-pointer-cast"

@interface FMIceLinkICEAcceptArgs : FMDynamic 

+ (FMIceLinkICEAcceptArgs*) iceAcceptArgsWithOfferAnswer:(FMIceLinkOfferAnswer*)offerAnswer;
- (id) initWithOfferAnswer:(FMIceLinkOfferAnswer*)offerAnswer;
- (FMIceLinkOfferAnswer*) offerAnswer;
- (FMCallback*) onComplete;
- (FMCallback*) onFailure;
- (FMCallback*) onSuccess;
- (void) setOfferAnswer:(FMIceLinkOfferAnswer*)value;
- (void) setOnComplete:(FMCallback*)value;
- (void) setOnCompleteBlock:(void (^) (FMIceLinkICEAcceptCompleteArgs*))valueBlock;
- (void) setOnFailure:(FMCallback*)value;
- (void) setOnFailureBlock:(void (^) (FMIceLinkICEAcceptFailureArgs*))valueBlock;
- (void) setOnSuccess:(FMCallback*)value;
- (void) setOnSuccessBlock:(void (^) (FMIceLinkICEAcceptSuccessArgs*))valueBlock;

@end


@class FMIceLinkOfferAnswer;

#pragma clang diagnostic ignored "-Wshorten-64-to-32"
#pragma clang diagnostic ignored "-Wint-to-pointer-cast"

@interface FMIceLinkICEAcceptCompleteArgs : FMDynamic 

+ (FMIceLinkICEAcceptCompleteArgs*) iceAcceptCompleteArgs;
- (id) init;
- (FMIceLinkOfferAnswer*) offerAnswer;
- (void) setOfferAnswer:(FMIceLinkOfferAnswer*)value;

@end


@class NSExceptionFMExtensions;
@class FMIceLinkOfferAnswer;

#pragma clang diagnostic ignored "-Wshorten-64-to-32"
#pragma clang diagnostic ignored "-Wint-to-pointer-cast"

@interface FMIceLinkICEAcceptFailureArgs : FMDynamic 

- (NSException*) exception;
+ (FMIceLinkICEAcceptFailureArgs*) iceAcceptFailureArgs;
- (id) init;
- (FMIceLinkOfferAnswer*) offerAnswer;
- (void) setException:(NSException*)value;
- (void) setOfferAnswer:(FMIceLinkOfferAnswer*)value;

@end


@class NSMutableArrayFMExtensions;
@class FMIceLinkOfferAnswer;

#pragma clang diagnostic ignored "-Wshorten-64-to-32"
#pragma clang diagnostic ignored "-Wint-to-pointer-cast"

@interface FMIceLinkICEAcceptSuccessArgs : FMDynamic 

+ (FMIceLinkICEAcceptSuccessArgs*) iceAcceptSuccessArgs;
- (id) init;
- (NSMutableArray*) mediaStreams;
- (FMIceLinkOfferAnswer*) offerAnswer;
- (void) setMediaStreams:(NSMutableArray*)value;
- (void) setOfferAnswer:(FMIceLinkOfferAnswer*)value;

@end


@class FMIceLinkICEServerAllocateSuccessArgs;
@class FMIceLinkICEServerAllocateFailureArgs;
@class FMIceLinkICEServerAllocateCompleteArgs;
@class FMIceLinkICEUdpHostCandidate;
@class FMCallback;
@class NSMutableArrayFMExtensions;
@class NSStringFMExtensions;
@class FMIceLinkTransportAddress;

#pragma clang diagnostic ignored "-Wshorten-64-to-32"
#pragma clang diagnostic ignored "-Wint-to-pointer-cast"

@interface FMIceLinkICEServerAllocateArgs : FMDynamic 

- (FMIceLinkICEUdpHostCandidate*) hostCandidate;
+ (FMIceLinkICEServerAllocateArgs*) iceServerAllocateArgsWithHostCandidate:(FMIceLinkICEUdpHostCandidate*)hostCandidate serverAddresses:(NSMutableArray*)serverAddresses usernames:(NSMutableArray*)usernames realms:(NSMutableArray*)realms passwords:(NSMutableArray*)passwords;
- (int) index;
- (id) initWithHostCandidate:(FMIceLinkICEUdpHostCandidate*)hostCandidate serverAddresses:(NSMutableArray*)serverAddresses usernames:(NSMutableArray*)usernames realms:(NSMutableArray*)realms passwords:(NSMutableArray*)passwords;
- (FMCallback*) onComplete;
- (FMCallback*) onFailure;
- (FMCallback*) onSuccess;
- (NSString*) password;
- (NSMutableArray*) passwords;
- (NSString*) realm;
- (NSMutableArray*) realms;
- (FMIceLinkTransportAddress*) serverAddress;
- (NSMutableArray*) serverAddresses;
- (void) setHostCandidate:(FMIceLinkICEUdpHostCandidate*)value;
- (void) setIndex:(int)value;
- (void) setOnComplete:(FMCallback*)value;
- (void) setOnCompleteBlock:(void (^) (FMIceLinkICEServerAllocateCompleteArgs*))valueBlock;
- (void) setOnFailure:(FMCallback*)value;
- (void) setOnFailureBlock:(void (^) (FMIceLinkICEServerAllocateFailureArgs*))valueBlock;
- (void) setOnSuccess:(FMCallback*)value;
- (void) setOnSuccessBlock:(void (^) (FMIceLinkICEServerAllocateSuccessArgs*))valueBlock;
- (void) setPasswords:(NSMutableArray*)value;
- (void) setRealms:(NSMutableArray*)value;
- (void) setServerAddresses:(NSMutableArray*)value;
- (void) setUsernames:(NSMutableArray*)value;
- (NSString*) username;
- (NSMutableArray*) usernames;

@end


@class FMIceLinkICECandidatePair;
@class NSStringFMExtensions;
@class FMCallback;
@class FMManagedThread;

#pragma clang diagnostic ignored "-Wshorten-64-to-32"
#pragma clang diagnostic ignored "-Wint-to-pointer-cast"

@interface FMIceLinkICECheckThread : NSObject 

+ (FMIceLinkICECheckThread*) iceCheckThreadWithRole:(FMIceLinkICEAgentRole)role keepAliveInterval:(int)keepAliveInterval getWaitingCandidatePair:(FMCallback*)getWaitingCandidatePair concludeProcessing:(FMCallback*)concludeProcessing;
+ (FMIceLinkICECheckThread*) iceCheckThreadWithRole:(FMIceLinkICEAgentRole)role keepAliveInterval:(int)keepAliveInterval getWaitingCandidatePairBlock:(FMIceLinkICECandidatePair* (^) ())getWaitingCandidatePairBlock concludeProcessingBlock:(void (^) ())concludeProcessingBlock;
- (id) initWithRole:(FMIceLinkICEAgentRole)role keepAliveInterval:(int)keepAliveInterval getWaitingCandidatePair:(FMCallback*)getWaitingCandidatePair concludeProcessing:(FMCallback*)concludeProcessing;
- (id) initWithRole:(FMIceLinkICEAgentRole)role keepAliveInterval:(int)keepAliveInterval getWaitingCandidatePairBlock:(FMIceLinkICECandidatePair* (^) ())getWaitingCandidatePairBlock concludeProcessingBlock:(void (^) ())concludeProcessingBlock;
- (bool) isRunning;
- (void) start;
- (void) stop;

@end


@class NSStringFMExtensions;

/// <summary>
/// An offer/answer for distribution to a peer client.
/// </summary>
#pragma clang diagnostic ignored "-Wshorten-64-to-32"
#pragma clang diagnostic ignored "-Wint-to-pointer-cast"

@interface FMIceLinkOfferAnswer : NSObject 

/// <summary>
/// Deserializes an instance from JSON.
/// </summary>
/// <param name="offerAnswerJson">The JSON to deserialize.</param>
/// <returns>The deserialized offer/answer.</returns>
+ (FMIceLinkOfferAnswer*) fromJsonWithOfferAnswerJson:(NSString*)offerAnswerJson;
- (id) init;
/// <summary>
/// Gets whether this is an offer.
/// </summary>
- (bool) isOffer;
+ (FMIceLinkOfferAnswer*) offerAnswer;
/// <summary>
/// Gets the SDP message describing the session.
/// </summary>
- (NSString*) sdpMessage;
/// <summary>
/// Sets whether this is an offer.
/// </summary>
- (void) setIsOffer:(bool)value;
/// <summary>
/// Sets the SDP message describing the session.
/// </summary>
- (void) setSdpMessage:(NSString*)value;
/// <summary>
/// Sets the tie breaker in case of a role conflict.
/// </summary>
- (void) setTieBreaker:(NSString*)value;
/// <summary>
/// Gets the tie breaker in case of a role conflict.
/// </summary>
- (NSString*) tieBreaker;
/// <summary>
/// Serializes this instance to JSON.
/// </summary>
/// <returns></returns>
- (NSString*) toJson;
/// <summary>
/// Serializes an instance to JSON.
/// </summary>
/// <param name="offerAnswer">The offer/answer to serialize.</param>
/// <returns>The serialized JSON.</returns>
+ (NSString*) toJsonWithOfferAnswer:(FMIceLinkOfferAnswer*)offerAnswer;

@end


@class NSMutableDataFMExtensions;

/// <summary>
/// An RTCP Feedback PS-AFB packet.
/// </summary>
#pragma clang diagnostic ignored "-Wshorten-64-to-32"
#pragma clang diagnostic ignored "-Wint-to-pointer-cast"

@interface FMIceLinkRTCPAfbPacket : FMIceLinkRTCPPsPacket 

/// <summary>
/// Gets the Application-Layer Feedback payload (AFB).
/// </summary>
- (NSMutableData*) afbPayload;
/// <summary>
/// Deserializes the feedback control information from the FCI payload.
/// </summary>
- (void) deserializeFCI;
/// <summary>
/// Gets the feedback message type byte.
/// </summary>
+ (uint8_t) feedbackMessageTypeByte;
/// <summary>
/// Initializes a new instance of the <see cref="FMIceLinkRTCPAfbPacket" /> class.
/// </summary>
- (id) init;
/// <summary>
/// Initializes a new instance of the <see cref="FMIceLinkRTCPAfbPacket" /> class.
/// </summary>
+ (FMIceLinkRTCPAfbPacket*) rtcpAfbPacket;
/// <summary>
/// Serializes the feedback control information to the FCI payload.
/// </summary>
- (void) serializeFCI;
/// <summary>
/// Sets the Application-Layer Feedback payload (AFB).
/// </summary>
- (void) setAFBPayload:(NSMutableData*)value;

@end



/// <summary>
/// An RTCP Feedback PS-PLI packet.
/// </summary>
#pragma clang diagnostic ignored "-Wshorten-64-to-32"
#pragma clang diagnostic ignored "-Wint-to-pointer-cast"

@interface FMIceLinkRTCPPliPacket : FMIceLinkRTCPPsPacket 

/// <summary>
/// Deserializes the feedback control information from the FCI payload.
/// </summary>
- (void) deserializeFCI;
/// <summary>
/// Gets the feedback message type byte.
/// </summary>
+ (uint8_t) feedbackMessageTypeByte;
/// <summary>
/// Initializes a new instance of the <see cref="FMIceLinkRTCPPliPacket" /> class.
/// </summary>
- (id) init;
/// <summary>
/// Initializes a new instance of the <see cref="FMIceLinkRTCPPliPacket" /> class.
/// </summary>
+ (FMIceLinkRTCPPliPacket*) rtcpPliPacket;
/// <summary>
/// Serializes the feedback control information to the FCI payload.
/// </summary>
- (void) serializeFCI;

@end


@class NSMutableDataFMExtensions;

/// <summary>
/// An Application-Layer Feedback message (AFB).
/// </summary>
#pragma clang diagnostic ignored "-Wshorten-64-to-32"
#pragma clang diagnostic ignored "-Wint-to-pointer-cast"

@interface FMIceLinkRTCPFbApplicationLayerFeedback : NSObject 

- (id) init;
/// <summary>
/// Gets the payload.
/// </summary>
- (NSMutableData*) payload;
+ (FMIceLinkRTCPFbApplicationLayerFeedback*) rtcpFbApplicationLayerFeedback;
/// <summary>
/// Sets the payload.
/// </summary>
- (void) setPayload:(NSMutableData*)value;

@end


@class NSMutableDataFMExtensions;

/// <summary>
/// A Generic NACK feedback message.
/// </summary>
#pragma clang diagnostic ignored "-Wshorten-64-to-32"
#pragma clang diagnostic ignored "-Wint-to-pointer-cast"

@interface FMIceLinkRTCPFbGenericNack : NSObject 

/// <summary>
/// Updates this instance to reflect only the lost packets that
/// were not retransmitted.
/// </summary>
- (void) flush;
/// <summary>
/// Gets a 4-byte payload from this instance.
/// </summary>
/// <returns></returns>
- (NSMutableData*) getBytes;
/// <summary>
/// Gets whether the packet with ID <see cref="FMIceLinkRTCPFbGenericNack#packetId" /> + value was retransmitted.
/// </summary>
/// <param name="value">The value.</param>
/// <returns>Whether the packet was retransmitted.</returns>
- (bool) getLostPacketIdPlusHandledWithValue:(int)value;
/// <summary>
/// Gets whether the packet with ID <see cref="FMIceLinkRTCPFbGenericNack#packetId" /> + value was retransmitted.
/// </summary>
/// <param name="value">The value.</param>
/// <returns>Whether the packet was retransmitted.</returns>
- (bool) getLostPacketIdPlusHandled:(int)value;
/// <summary>
/// Gets whether the packet with ID <see cref="FMIceLinkRTCPFbGenericNack#packetId" /> + value was lost.
/// </summary>
/// <param name="value">The value.</param>
/// <returns>Whether the packet was lost.</returns>
- (bool) getLostPacketIdPlusWithValue:(int)value;
/// <summary>
/// Gets whether the packet with ID <see cref="FMIceLinkRTCPFbGenericNack#packetId" /> + value was lost.
/// </summary>
/// <param name="value">The value.</param>
/// <returns>Whether the packet was lost.</returns>
- (bool) getLostPacketIdPlus:(int)value;
/// <summary>
/// Gets a value indicating whether all lost packets were retransmitted.
/// </summary>
- (bool) handled;
- (id) init;
/// <summary>
/// Gets whether the packet with ID <see cref="FMIceLinkRTCPFbGenericNack#packetId" /> + 1 was lost.
/// </summary>
- (bool) lostPacketIdPlus1;
/// <summary>
/// Gets whether the packet with ID <see cref="FMIceLinkRTCPFbGenericNack#packetId" /> + 10 was lost.
/// </summary>
- (bool) lostPacketIdPlus10;
/// <summary>
/// Gets whether the packet with ID <see cref="FMIceLinkRTCPFbGenericNack#packetId" /> + 10 was retransmitted.
/// </summary>
- (bool) lostPacketIdPlus10Handled;
/// <summary>
/// Gets whether the packet with ID <see cref="FMIceLinkRTCPFbGenericNack#packetId" /> + 11 was lost.
/// </summary>
- (bool) lostPacketIdPlus11;
/// <summary>
/// Gets whether the packet with ID <see cref="FMIceLinkRTCPFbGenericNack#packetId" /> + 11 was retransmitted.
/// </summary>
- (bool) lostPacketIdPlus11Handled;
/// <summary>
/// Gets whether the packet with ID <see cref="FMIceLinkRTCPFbGenericNack#packetId" /> + 12 was lost.
/// </summary>
- (bool) lostPacketIdPlus12;
/// <summary>
/// Gets whether the packet with ID <see cref="FMIceLinkRTCPFbGenericNack#packetId" /> + 12 was retransmitted.
/// </summary>
- (bool) lostPacketIdPlus12Handled;
/// <summary>
/// Gets whether the packet with ID <see cref="FMIceLinkRTCPFbGenericNack#packetId" /> + 13 was lost.
/// </summary>
- (bool) lostPacketIdPlus13;
/// <summary>
/// Gets whether the packet with ID <see cref="FMIceLinkRTCPFbGenericNack#packetId" /> + 13 was retransmitted.
/// </summary>
- (bool) lostPacketIdPlus13Handled;
/// <summary>
/// Gets whether the packet with ID <see cref="FMIceLinkRTCPFbGenericNack#packetId" /> + 14 was lost.
/// </summary>
- (bool) lostPacketIdPlus14;
/// <summary>
/// Gets whether the packet with ID <see cref="FMIceLinkRTCPFbGenericNack#packetId" /> + 14 was retransmitted.
/// </summary>
- (bool) lostPacketIdPlus14Handled;
/// <summary>
/// Gets whether the packet with ID <see cref="FMIceLinkRTCPFbGenericNack#packetId" /> + 15 was lost.
/// </summary>
- (bool) lostPacketIdPlus15;
/// <summary>
/// Gets whether the packet with ID <see cref="FMIceLinkRTCPFbGenericNack#packetId" /> + 15 was retransmitted.
/// </summary>
- (bool) lostPacketIdPlus15Handled;
/// <summary>
/// Gets whether the packet with ID <see cref="FMIceLinkRTCPFbGenericNack#packetId" /> + 16 was lost.
/// </summary>
- (bool) lostPacketIdPlus16;
/// <summary>
/// Gets whether the packet with ID <see cref="FMIceLinkRTCPFbGenericNack#packetId" /> + 16 was retransmitted.
/// </summary>
- (bool) lostPacketIdPlus16Handled;
/// <summary>
/// Gets whether the packet with ID <see cref="FMIceLinkRTCPFbGenericNack#packetId" /> + 1 was retransmitted.
/// </summary>
- (bool) lostPacketIdPlus1Handled;
/// <summary>
/// Gets whether the packet with ID <see cref="FMIceLinkRTCPFbGenericNack#packetId" /> + 2 was lost.
/// </summary>
- (bool) lostPacketIdPlus2;
/// <summary>
/// Gets whether the packet with ID <see cref="FMIceLinkRTCPFbGenericNack#packetId" /> + 2 was retransmitted.
/// </summary>
- (bool) lostPacketIdPlus2Handled;
/// <summary>
/// Gets whether the packet with ID <see cref="FMIceLinkRTCPFbGenericNack#packetId" /> + 3 was lost.
/// </summary>
- (bool) lostPacketIdPlus3;
/// <summary>
/// Gets whether the packet with ID <see cref="FMIceLinkRTCPFbGenericNack#packetId" /> + 3 was retransmitted.
/// </summary>
- (bool) lostPacketIdPlus3Handled;
/// <summary>
/// Gets whether the packet with ID <see cref="FMIceLinkRTCPFbGenericNack#packetId" /> + 4 was lost.
/// </summary>
- (bool) lostPacketIdPlus4;
/// <summary>
/// Gets whether the packet with ID <see cref="FMIceLinkRTCPFbGenericNack#packetId" /> + 4 was retransmitted.
/// </summary>
- (bool) lostPacketIdPlus4Handled;
/// <summary>
/// Gets whether the packet with ID <see cref="FMIceLinkRTCPFbGenericNack#packetId" /> + 5 was lost.
/// </summary>
- (bool) lostPacketIdPlus5;
/// <summary>
/// Gets whether the packet with ID <see cref="FMIceLinkRTCPFbGenericNack#packetId" /> + 5 was retransmitted.
/// </summary>
- (bool) lostPacketIdPlus5Handled;
/// <summary>
/// Gets whether the packet with ID <see cref="FMIceLinkRTCPFbGenericNack#packetId" /> + 6 was lost.
/// </summary>
- (bool) lostPacketIdPlus6;
/// <summary>
/// Gets whether the packet with ID <see cref="FMIceLinkRTCPFbGenericNack#packetId" /> + 6 was retransmitted.
/// </summary>
- (bool) lostPacketIdPlus6Handled;
/// <summary>
/// Gets whether the packet with ID <see cref="FMIceLinkRTCPFbGenericNack#packetId" /> + 7 was lost.
/// </summary>
- (bool) lostPacketIdPlus7;
/// <summary>
/// Gets whether the packet with ID <see cref="FMIceLinkRTCPFbGenericNack#packetId" /> + 7 was retransmitted.
/// </summary>
- (bool) lostPacketIdPlus7Handled;
/// <summary>
/// Gets whether the packet with ID <see cref="FMIceLinkRTCPFbGenericNack#packetId" /> + 8 was lost.
/// </summary>
- (bool) lostPacketIdPlus8;
/// <summary>
/// Gets whether the packet with ID <see cref="FMIceLinkRTCPFbGenericNack#packetId" /> + 8 was retransmitted.
/// </summary>
- (bool) lostPacketIdPlus8Handled;
/// <summary>
/// Gets whether the packet with ID <see cref="FMIceLinkRTCPFbGenericNack#packetId" /> + 9 was lost.
/// </summary>
- (bool) lostPacketIdPlus9;
/// <summary>
/// Gets whether the packet with ID <see cref="FMIceLinkRTCPFbGenericNack#packetId" /> + 9 was retransmitted.
/// </summary>
- (bool) lostPacketIdPlus9Handled;
/// <summary>
/// Gets the RTP sequence number of the lost packet.
/// </summary>
- (int) packetId;
/// <summary>
/// Gets whether the packet with ID <see cref="FMIceLinkRTCPFbGenericNack#packetId" /> was retransmitted.
/// </summary>
- (bool) packetIdHandled;
/// <summary>
/// Parses a 4-byte payload into a Generic NACK message.
/// </summary>
/// <param name="genericNACKBytes">The bytes to parse.</param>
/// <returns></returns>
+ (FMIceLinkRTCPFbGenericNack*) parseBytesWithGenericNACKBytes:(NSMutableData*)genericNACKBytes;
+ (FMIceLinkRTCPFbGenericNack*) rtcpFbGenericNack;
/// <summary>
/// Sets whether the packet with ID <see cref="FMIceLinkRTCPFbGenericNack#packetId" /> + 1 was lost.
/// </summary>
- (void) setLostPacketIdPlus1:(bool)value;
/// <summary>
/// Sets whether the packet with ID <see cref="FMIceLinkRTCPFbGenericNack#packetId" /> + 10 was lost.
/// </summary>
- (void) setLostPacketIdPlus10:(bool)value;
/// <summary>
/// Sets whether the packet with ID <see cref="FMIceLinkRTCPFbGenericNack#packetId" /> + 10 was retransmitted.
/// </summary>
- (void) setLostPacketIdPlus10Handled:(bool)value;
/// <summary>
/// Sets whether the packet with ID <see cref="FMIceLinkRTCPFbGenericNack#packetId" /> + 11 was lost.
/// </summary>
- (void) setLostPacketIdPlus11:(bool)value;
/// <summary>
/// Sets whether the packet with ID <see cref="FMIceLinkRTCPFbGenericNack#packetId" /> + 11 was retransmitted.
/// </summary>
- (void) setLostPacketIdPlus11Handled:(bool)value;
/// <summary>
/// Sets whether the packet with ID <see cref="FMIceLinkRTCPFbGenericNack#packetId" /> + 12 was lost.
/// </summary>
- (void) setLostPacketIdPlus12:(bool)value;
/// <summary>
/// Sets whether the packet with ID <see cref="FMIceLinkRTCPFbGenericNack#packetId" /> + 12 was retransmitted.
/// </summary>
- (void) setLostPacketIdPlus12Handled:(bool)value;
/// <summary>
/// Sets whether the packet with ID <see cref="FMIceLinkRTCPFbGenericNack#packetId" /> + 13 was lost.
/// </summary>
- (void) setLostPacketIdPlus13:(bool)value;
/// <summary>
/// Sets whether the packet with ID <see cref="FMIceLinkRTCPFbGenericNack#packetId" /> + 13 was retransmitted.
/// </summary>
- (void) setLostPacketIdPlus13Handled:(bool)value;
/// <summary>
/// Sets whether the packet with ID <see cref="FMIceLinkRTCPFbGenericNack#packetId" /> + 14 was lost.
/// </summary>
- (void) setLostPacketIdPlus14:(bool)value;
/// <summary>
/// Sets whether the packet with ID <see cref="FMIceLinkRTCPFbGenericNack#packetId" /> + 14 was retransmitted.
/// </summary>
- (void) setLostPacketIdPlus14Handled:(bool)value;
/// <summary>
/// Sets whether the packet with ID <see cref="FMIceLinkRTCPFbGenericNack#packetId" /> + 15 was lost.
/// </summary>
- (void) setLostPacketIdPlus15:(bool)value;
/// <summary>
/// Sets whether the packet with ID <see cref="FMIceLinkRTCPFbGenericNack#packetId" /> + 15 was retransmitted.
/// </summary>
- (void) setLostPacketIdPlus15Handled:(bool)value;
/// <summary>
/// Sets whether the packet with ID <see cref="FMIceLinkRTCPFbGenericNack#packetId" /> + 16 was lost.
/// </summary>
- (void) setLostPacketIdPlus16:(bool)value;
/// <summary>
/// Sets whether the packet with ID <see cref="FMIceLinkRTCPFbGenericNack#packetId" /> + 16 was retransmitted.
/// </summary>
- (void) setLostPacketIdPlus16Handled:(bool)value;
/// <summary>
/// Sets whether the packet with ID <see cref="FMIceLinkRTCPFbGenericNack#packetId" /> + 1 was retransmitted.
/// </summary>
- (void) setLostPacketIdPlus1Handled:(bool)value;
/// <summary>
/// Sets whether the packet with ID <see cref="FMIceLinkRTCPFbGenericNack#packetId" /> + 2 was lost.
/// </summary>
- (void) setLostPacketIdPlus2:(bool)value;
/// <summary>
/// Sets whether the packet with ID <see cref="FMIceLinkRTCPFbGenericNack#packetId" /> + 2 was retransmitted.
/// </summary>
- (void) setLostPacketIdPlus2Handled:(bool)value;
/// <summary>
/// Sets whether the packet with ID <see cref="FMIceLinkRTCPFbGenericNack#packetId" /> + 3 was lost.
/// </summary>
- (void) setLostPacketIdPlus3:(bool)value;
/// <summary>
/// Sets whether the packet with ID <see cref="FMIceLinkRTCPFbGenericNack#packetId" /> + 3 was retransmitted.
/// </summary>
- (void) setLostPacketIdPlus3Handled:(bool)value;
/// <summary>
/// Sets whether the packet with ID <see cref="FMIceLinkRTCPFbGenericNack#packetId" /> + 4 was lost.
/// </summary>
- (void) setLostPacketIdPlus4:(bool)value;
/// <summary>
/// Sets whether the packet with ID <see cref="FMIceLinkRTCPFbGenericNack#packetId" /> + 4 was retransmitted.
/// </summary>
- (void) setLostPacketIdPlus4Handled:(bool)value;
/// <summary>
/// Sets whether the packet with ID <see cref="FMIceLinkRTCPFbGenericNack#packetId" /> + 5 was lost.
/// </summary>
- (void) setLostPacketIdPlus5:(bool)value;
/// <summary>
/// Sets whether the packet with ID <see cref="FMIceLinkRTCPFbGenericNack#packetId" /> + 5 was retransmitted.
/// </summary>
- (void) setLostPacketIdPlus5Handled:(bool)value;
/// <summary>
/// Sets whether the packet with ID <see cref="FMIceLinkRTCPFbGenericNack#packetId" /> + 6 was lost.
/// </summary>
- (void) setLostPacketIdPlus6:(bool)value;
/// <summary>
/// Sets whether the packet with ID <see cref="FMIceLinkRTCPFbGenericNack#packetId" /> + 6 was retransmitted.
/// </summary>
- (void) setLostPacketIdPlus6Handled:(bool)value;
/// <summary>
/// Sets whether the packet with ID <see cref="FMIceLinkRTCPFbGenericNack#packetId" /> + 7 was lost.
/// </summary>
- (void) setLostPacketIdPlus7:(bool)value;
/// <summary>
/// Sets whether the packet with ID <see cref="FMIceLinkRTCPFbGenericNack#packetId" /> + 7 was retransmitted.
/// </summary>
- (void) setLostPacketIdPlus7Handled:(bool)value;
/// <summary>
/// Sets whether the packet with ID <see cref="FMIceLinkRTCPFbGenericNack#packetId" /> + 8 was lost.
/// </summary>
- (void) setLostPacketIdPlus8:(bool)value;
/// <summary>
/// Sets whether the packet with ID <see cref="FMIceLinkRTCPFbGenericNack#packetId" /> + 8 was retransmitted.
/// </summary>
- (void) setLostPacketIdPlus8Handled:(bool)value;
/// <summary>
/// Sets whether the packet with ID <see cref="FMIceLinkRTCPFbGenericNack#packetId" /> + 9 was lost.
/// </summary>
- (void) setLostPacketIdPlus9:(bool)value;
/// <summary>
/// Sets whether the packet with ID <see cref="FMIceLinkRTCPFbGenericNack#packetId" /> + 9 was retransmitted.
/// </summary>
- (void) setLostPacketIdPlus9Handled:(bool)value;
/// <summary>
/// Sets whether the packet with ID <see cref="FMIceLinkRTCPFbGenericNack#packetId" /> + value was retransmitted.
/// </summary>
/// <param name="value">The value.</param>
/// <param name="handled">Whether the packet was retransmitted.</param>
- (void) setLostPacketIdPlusHandledWithValue:(int)value handled:(bool)handled;
/// <summary>
/// Sets whether the packet with ID <see cref="FMIceLinkRTCPFbGenericNack#packetId" /> + value was retransmitted.
/// </summary>
/// <param name="value">The value.</param>
/// <param name="handled">Whether the packet was retransmitted.</param>
- (void) setLostPacketIdPlusHandled:(int)value handled:(bool)handled;
/// <summary>
/// Sets whether the packet with ID <see cref="FMIceLinkRTCPFbGenericNack#packetId" /> + value was lost.
/// </summary>
/// <param name="value">The value.</param>
/// <param name="lost">Whether the packet was lost.</param>
- (void) setLostPacketIdPlusWithValue:(int)value lost:(bool)lost;
/// <summary>
/// Sets whether the packet with ID <see cref="FMIceLinkRTCPFbGenericNack#packetId" /> + value was lost.
/// </summary>
/// <param name="value">The value.</param>
/// <param name="lost">Whether the packet was lost.</param>
- (void) setLostPacketIdPlus:(int)value lost:(bool)lost;
/// <summary>
/// Sets the RTP sequence number of the lost packet.
/// </summary>
- (void) setPacketId:(int)value;
/// <summary>
/// Sets whether the packet with ID <see cref="FMIceLinkRTCPFbGenericNack#packetId" /> was retransmitted.
/// </summary>
- (void) setPacketIdHandled:(bool)value;

@end



/// <summary>
/// An RTCP Feedback RTP packet.
/// </summary>
#pragma clang diagnostic ignored "-Wshorten-64-to-32"
#pragma clang diagnostic ignored "-Wint-to-pointer-cast"

@interface FMIceLinkRTCPRtpPacket : FMIceLinkRTCPFeedbackPacket 

/// <summary>
/// Creates a packet given the first byte.
/// </summary>
/// <param name="firstByte">The first byte.</param>
/// <returns></returns>
+ (FMIceLinkRTCPRtpPacket*) createPacketWithFirstByte:(uint8_t)firstByte;
/// <summary>
/// Initializes a new instance of the <see cref="FMIceLinkRTCPRtpPacket" /> class.
/// </summary>
/// <param name="feedbackMessageType">The feedback message type.</param>
- (id) initWithFeedbackMessageType:(uint8_t)feedbackMessageType;
/// <summary>
/// Initializes a new instance of the <see cref="FMIceLinkRTCPRtpPacket" /> class.
/// </summary>
/// <param name="feedbackMessageType">The feedback message type.</param>
+ (FMIceLinkRTCPRtpPacket*) rtcpRtpPacketWithFeedbackMessageType:(uint8_t)feedbackMessageType;

@end


@class NSMutableArrayFMExtensions;
@class FMIceLinkRTCPFbGenericNack;

/// <summary>
/// An RTCP Feedback RTP-Generic NACK packet.
/// </summary>
#pragma clang diagnostic ignored "-Wshorten-64-to-32"
#pragma clang diagnostic ignored "-Wint-to-pointer-cast"

@interface FMIceLinkRTCPGenericNackPacket : FMIceLinkRTCPRtpPacket 

/// <summary>
/// Adds a generic NACK.
/// </summary>
/// <param name="genericNACK">The generic NACK to add.</param>
- (void) addGenericNACKWithGenericNACK:(FMIceLinkRTCPFbGenericNack*)genericNACK;
/// <summary>
/// Adds a generic NACK.
/// </summary>
/// <param name="genericNACK">The generic NACK to add.</param>
- (void) addGenericNACK:(FMIceLinkRTCPFbGenericNack*)genericNACK;
/// <summary>
/// Deserializes the feedback control information from the FCI payload.
/// </summary>
- (void) deserializeFCI;
/// <summary>
/// Gets the set of generic NACKs.
/// </summary>
- (NSMutableArray*) genericNACKs;
/// <summary>
/// Initializes a new instance of the <see cref="FMIceLinkRTCPRtpPacket" /> class.
/// </summary>
- (id) init;
/// <summary>
/// Removes a generic NACK.
/// </summary>
/// <param name="genericNACK">The generic NACK to remove.</param>
/// <returns><c>true</c> if the generic NACK was removed; otherwise, <c>false</c>.</returns>
- (bool) removeGenericNACKWithGenericNACK:(FMIceLinkRTCPFbGenericNack*)genericNACK;
/// <summary>
/// Removes a generic NACK.
/// </summary>
/// <param name="genericNACK">The generic NACK to remove.</param>
/// <returns><c>true</c> if the generic NACK was removed; otherwise, <c>false</c>.</returns>
- (bool) removeGenericNACK:(FMIceLinkRTCPFbGenericNack*)genericNACK;
/// <summary>
/// Initializes a new instance of the <see cref="FMIceLinkRTCPRtpPacket" /> class.
/// </summary>
+ (FMIceLinkRTCPGenericNackPacket*) rtcpGenericNackPacket;
/// <summary>
/// Serializes the feedback control information to the FCI payload.
/// </summary>
- (void) serializeFCI;

@end


@class NSMutableDataFMExtensions;

/// <summary>
/// An RTCP APP packet.
/// </summary>
#pragma clang diagnostic ignored "-Wshorten-64-to-32"
#pragma clang diagnostic ignored "-Wint-to-pointer-cast"

@interface FMIceLinkRTCPAppPacket : FMIceLinkRTCPPacket 

/// <summary>
/// Gets optional application-dependent data.
/// </summary>
- (NSMutableData*) data;
/// <summary>
/// Deserializes the packet data from the first byte and payload.
/// </summary>
- (void) deserialize;
- (id) init;
/// <summary>
/// Initializes a new instance of the <see cref="FMIceLinkRTCPAppPacket" /> class.
/// </summary>
/// <param name="synchronizationSource">The synchronization source.</param>
- (id) initWithSynchronizationSource:(long long)synchronizationSource;
/// <summary>
/// Gets a name chosen by the person defining the set of APP packets
/// to be unique with respect to other APP packets this application might receive.
/// </summary>
- (NSMutableData*) name;
+ (FMIceLinkRTCPAppPacket*) rtcpAppPacket;
/// <summary>
/// Initializes a new instance of the <see cref="FMIceLinkRTCPAppPacket" /> class.
/// </summary>
/// <param name="synchronizationSource">The synchronization source.</param>
+ (FMIceLinkRTCPAppPacket*) rtcpAppPacketWithSynchronizationSource:(long long)synchronizationSource;
/// <summary>
/// Serializes the packet data to the first byte and payload.
/// </summary>
- (void) serialize;
/// <summary>
/// Sets optional application-dependent data.
/// </summary>
- (void) setData:(NSMutableData*)value;
/// <summary>
/// Sets a name chosen by the person defining the set of APP packets
/// to be unique with respect to other APP packets this application might receive.
/// </summary>
- (void) setName:(NSMutableData*)value;
/// <summary>
/// Sets the subtype to allow a set of APP packets to be defined
/// under one unique name, or for any application-dependent data.
/// </summary>
- (void) setSubType:(uint8_t)value;
/// <summary>
/// Sets the synchronization source.
/// </summary>
- (void) setSynchronizationSource:(long long)value;
/// <summary>
/// Gets the subtype to allow a set of APP packets to be defined
/// under one unique name, or for any application-dependent data.
/// </summary>
- (uint8_t) subType;
/// <summary>
/// Gets the synchronization source.
/// </summary>
- (long long) synchronizationSource;

@end


@class NSStringFMExtensions;
@class NSMutableArrayFMExtensions;

/// <summary>
/// An RTCP BYE packet.
/// </summary>
#pragma clang diagnostic ignored "-Wshorten-64-to-32"
#pragma clang diagnostic ignored "-Wint-to-pointer-cast"

@interface FMIceLinkRTCPByePacket : FMIceLinkRTCPPacket 

/// <summary>
/// Deserializes the packet data from the first byte and payload.
/// </summary>
- (void) deserialize;
/// <summary>
/// Initializes a new instance of the <see cref="FMIceLinkRTCPByePacket" /> class.
/// </summary>
- (id) init;
/// <summary>
/// Initializes a new instance of the <see cref="FMIceLinkRTCPByePacket" /> class.
/// </summary>
/// <param name="synchronizationAndContributingSources">The synchronization and contributing sources.</param>
- (id) initWithSynchronizationAndContributingSources:(NSMutableArray*)synchronizationAndContributingSources;
/// <summary>
/// Gets the reason for leaving.
/// </summary>
- (NSString*) reasonForLeaving;
/// <summary>
/// Initializes a new instance of the <see cref="FMIceLinkRTCPByePacket" /> class.
/// </summary>
+ (FMIceLinkRTCPByePacket*) rtcpByePacket;
/// <summary>
/// Initializes a new instance of the <see cref="FMIceLinkRTCPByePacket" /> class.
/// </summary>
/// <param name="synchronizationAndContributingSources">The synchronization and contributing sources.</param>
+ (FMIceLinkRTCPByePacket*) rtcpByePacketWithSynchronizationAndContributingSources:(NSMutableArray*)synchronizationAndContributingSources;
/// <summary>
/// Serializes the packet data to the first byte and payload.
/// </summary>
- (void) serialize;
/// <summary>
/// Sets the reason for leaving.
/// </summary>
- (void) setReasonForLeaving:(NSString*)value;
/// <summary>
/// Sets the synchronization and contributing sources.
/// </summary>
- (void) setSynchronizationAndContributingSources:(NSMutableArray*)value;
/// <summary>
/// Gets the synchronization and contributing sources.
/// </summary>
- (NSMutableArray*) synchronizationAndContributingSources;

@end


@class NSMutableDataFMExtensions;
@class NSStringFMExtensions;

/// <summary>
/// An RTCP report block.
/// </summary>
#pragma clang diagnostic ignored "-Wshorten-64-to-32"
#pragma clang diagnostic ignored "-Wint-to-pointer-cast"

@interface FMIceLinkRTCPReportBlock : NSObject 

/// <summary>
/// Gets the cumulative number of packets lost.
/// </summary>
- (int) cumulativeNumberOfPacketsLost;
/// <summary>
/// Gets the delay since last sender report.
/// </summary>
- (long long) delaySinceLastSenderReport;
/// <summary>
/// Gets the extended highest sequence number received.
/// </summary>
- (long long) extendedHighestSequenceNumberReceived;
/// <summary>
/// Gets the fraction lost according to RFC 1889.
/// The value has a range of 0 (no packet loss) to 255 (all packets lost).
/// </summary>
- (int) fractionLost;
/// <summary>
/// Converts this instance to a byte array.
/// </summary>
/// <returns></returns>
- (NSMutableData*) getBytes;
/// <summary>
/// Converts an instance to a byte array.
/// </summary>
/// <param name="reportBlock">The report block.</param>
/// <returns></returns>
+ (NSMutableData*) getBytesWithReportBlock:(FMIceLinkRTCPReportBlock*)reportBlock;
/// <summary>
/// Initializes a new instance of the <see cref="FMIceLinkRTCPReportBlock" /> class.
/// </summary>
- (id) init;
/// <summary>
/// Initializes a new instance of the <see cref="FMIceLinkRTCPReportBlock" /> class.
/// </summary>
/// <param name="fractionLost">The fraction lost.</param>
/// <param name="cumulativeNumberOfPacketsLost">The cumulative number of packets lost.</param>
/// <param name="extendedHighestSequenceNumberReceived">The extended highest sequence number received.</param>
/// <param name="interarrivalJitter">The interarrival jitter.</param>
/// <param name="lastSenderReportTimestamp">The last sender report timestamp.</param>
/// <param name="delaySinceLastSenderReport">The delay since last sender report.</param>
- (id) initWithFractionLost:(int)fractionLost cumulativeNumberOfPacketsLost:(int)cumulativeNumberOfPacketsLost extendedHighestSequenceNumberReceived:(long long)extendedHighestSequenceNumberReceived interarrivalJitter:(long long)interarrivalJitter lastSenderReportTimestamp:(long long)lastSenderReportTimestamp delaySinceLastSenderReport:(long long)delaySinceLastSenderReport;
/// <summary>
/// Initializes a new instance of the <see cref="FMIceLinkRTCPReportBlock" /> class.
/// </summary>
/// <param name="synchronizationSource">The synchronization source.</param>
/// <param name="fractionLost">The fraction lost.</param>
/// <param name="cumulativeNumberOfPacketsLost">The cumulative number of packets lost.</param>
/// <param name="extendedHighestSequenceNumberReceived">The extended highest sequence number received.</param>
/// <param name="interarrivalJitter">The interarrival jitter.</param>
/// <param name="lastSenderReportTimestamp">The last sender report timestamp.</param>
/// <param name="delaySinceLastSenderReport">The delay since last sender report.</param>
- (id) initWithSynchronizationSource:(long long)synchronizationSource fractionLost:(int)fractionLost cumulativeNumberOfPacketsLost:(int)cumulativeNumberOfPacketsLost extendedHighestSequenceNumberReceived:(long long)extendedHighestSequenceNumberReceived interarrivalJitter:(long long)interarrivalJitter lastSenderReportTimestamp:(long long)lastSenderReportTimestamp delaySinceLastSenderReport:(long long)delaySinceLastSenderReport;
/// <summary>
/// Gets the interarrival jitter.
/// </summary>
- (long long) interarrivalJitter;
/// <summary>
/// Gets the last sender report timestamp.
/// </summary>
- (long long) lastSenderReportTimestamp;
/// <summary>
/// Converts a byte array to an instance.
/// </summary>
/// <param name="reportBlockBytes">The report block bytes.</param>
/// <returns></returns>
+ (FMIceLinkRTCPReportBlock*) parseBytesWithReportBlockBytes:(NSMutableData*)reportBlockBytes;
/// <summary>
/// Gets the percentage of lost packets.
/// The value has a range of 0.0 (no packet loss) to 1.0 (all packets lost).
/// </summary>
- (double) percentLost;
/// <summary>
/// Initializes a new instance of the <see cref="FMIceLinkRTCPReportBlock" /> class.
/// </summary>
+ (FMIceLinkRTCPReportBlock*) rtcpReportBlock;
/// <summary>
/// Initializes a new instance of the <see cref="FMIceLinkRTCPReportBlock" /> class.
/// </summary>
/// <param name="fractionLost">The fraction lost.</param>
/// <param name="cumulativeNumberOfPacketsLost">The cumulative number of packets lost.</param>
/// <param name="extendedHighestSequenceNumberReceived">The extended highest sequence number received.</param>
/// <param name="interarrivalJitter">The interarrival jitter.</param>
/// <param name="lastSenderReportTimestamp">The last sender report timestamp.</param>
/// <param name="delaySinceLastSenderReport">The delay since last sender report.</param>
+ (FMIceLinkRTCPReportBlock*) rtcpReportBlockWithFractionLost:(int)fractionLost cumulativeNumberOfPacketsLost:(int)cumulativeNumberOfPacketsLost extendedHighestSequenceNumberReceived:(long long)extendedHighestSequenceNumberReceived interarrivalJitter:(long long)interarrivalJitter lastSenderReportTimestamp:(long long)lastSenderReportTimestamp delaySinceLastSenderReport:(long long)delaySinceLastSenderReport;
/// <summary>
/// Initializes a new instance of the <see cref="FMIceLinkRTCPReportBlock" /> class.
/// </summary>
/// <param name="synchronizationSource">The synchronization source.</param>
/// <param name="fractionLost">The fraction lost.</param>
/// <param name="cumulativeNumberOfPacketsLost">The cumulative number of packets lost.</param>
/// <param name="extendedHighestSequenceNumberReceived">The extended highest sequence number received.</param>
/// <param name="interarrivalJitter">The interarrival jitter.</param>
/// <param name="lastSenderReportTimestamp">The last sender report timestamp.</param>
/// <param name="delaySinceLastSenderReport">The delay since last sender report.</param>
+ (FMIceLinkRTCPReportBlock*) rtcpReportBlockWithSynchronizationSource:(long long)synchronizationSource fractionLost:(int)fractionLost cumulativeNumberOfPacketsLost:(int)cumulativeNumberOfPacketsLost extendedHighestSequenceNumberReceived:(long long)extendedHighestSequenceNumberReceived interarrivalJitter:(long long)interarrivalJitter lastSenderReportTimestamp:(long long)lastSenderReportTimestamp delaySinceLastSenderReport:(long long)delaySinceLastSenderReport;
/// <summary>
/// Sets the cumulative number of packets lost.
/// </summary>
- (void) setCumulativeNumberOfPacketsLost:(int)value;
/// <summary>
/// Sets the delay since last sender report.
/// </summary>
- (void) setDelaySinceLastSenderReport:(long long)value;
/// <summary>
/// Sets the extended highest sequence number received.
/// </summary>
- (void) setExtendedHighestSequenceNumberReceived:(long long)value;
/// <summary>
/// Sets the fraction lost according to RFC 1889.
/// The value has a range of 0 (no packet loss) to 255 (all packets lost).
/// </summary>
- (void) setFractionLost:(int)value;
/// <summary>
/// Sets the interarrival jitter.
/// </summary>
- (void) setInterarrivalJitter:(long long)value;
/// <summary>
/// Sets the last sender report timestamp.
/// </summary>
- (void) setLastSenderReportTimestamp:(long long)value;
/// <summary>
/// Sets the synchronization source.
/// </summary>
- (void) setSynchronizationSource:(long long)value;
/// <summary>
/// Gets the synchronization source.
/// </summary>
- (long long) synchronizationSource;
/// <summary>
/// Returns a string that represents this instance.
/// </summary>
- (NSString*) toString;
/// <summary>
/// Returns a string that represents this instance.
/// </summary>
- (NSString*) description;

@end


@class NSMutableArrayFMExtensions;

/// <summary>
/// An RTCP SDES packet.
/// </summary>
#pragma clang diagnostic ignored "-Wshorten-64-to-32"
#pragma clang diagnostic ignored "-Wint-to-pointer-cast"

@interface FMIceLinkRTCPSdesPacket : FMIceLinkRTCPPacket 

/// <summary>
/// Deserializes the packet data from the first byte and payload.
/// </summary>
- (void) deserialize;
- (id) init;
+ (FMIceLinkRTCPSdesPacket*) rtcpSdesPacket;
/// <summary>
/// Serializes the packet data to the first byte and payload.
/// </summary>
- (void) serialize;
/// <summary>
/// Sets the source description chunks.
/// </summary>
- (void) setSourceDescriptionChunks:(NSMutableArray*)value;
/// <summary>
/// Gets the source description chunks.
/// </summary>
- (NSMutableArray*) sourceDescriptionChunks;

@end


@class NSMutableArrayFMExtensions;
@class NSMutableDataFMExtensions;

/// <summary>
/// An RTCP source description chunk.
/// </summary>
#pragma clang diagnostic ignored "-Wshorten-64-to-32"
#pragma clang diagnostic ignored "-Wint-to-pointer-cast"

@interface FMIceLinkRTCPSourceDescriptionChunk : NSObject 

/// <summary>
/// Converts this instance to a byte array.
/// </summary>
/// <returns></returns>
- (NSMutableData*) getBytes;
/// <summary>
/// Converts an instance to a byte array.
/// </summary>
/// <param name="chunk">The source description chunk.</param>
/// <returns></returns>
+ (NSMutableData*) getBytesWithChunk:(FMIceLinkRTCPSourceDescriptionChunk*)chunk;
- (id) init;
/// <summary>
/// Converts a byte array to an instance.
/// </summary>
/// <param name="data">The source data.</param>
/// <param name="offset">The offset.</param>
/// <param name="offsetPlus">The offset after parsing.</param>
/// <returns></returns>
+ (FMIceLinkRTCPSourceDescriptionChunk*) parseBytesWithData:(NSMutableData*)data offset:(int)offset offsetPlus:(int*)offsetPlus;
+ (FMIceLinkRTCPSourceDescriptionChunk*) rtcpSourceDescriptionChunk;
/// <summary>
/// Sets the source description items.
/// </summary>
- (void) setSourceDescriptionItems:(NSMutableArray*)value;
/// <summary>
/// Sets the SSRC/CSRC identifier.
/// </summary>
- (void) setSynchronizationSource:(long long)value;
/// <summary>
/// Gets the source description items.
/// </summary>
- (NSMutableArray*) sourceDescriptionItems;
/// <summary>
/// Gets the SSRC/CSRC identifier.
/// </summary>
- (long long) synchronizationSource;

@end


@class NSStringFMExtensions;
@class NSMutableDataFMExtensions;

/// <summary>
/// An RTCP source description item.
/// </summary>
#pragma clang diagnostic ignored "-Wshorten-64-to-32"
#pragma clang diagnostic ignored "-Wint-to-pointer-cast"

@interface FMIceLinkRTCPSourceDescriptionItem : NSObject 

/// <summary>
/// Converts this instance to a byte array.
/// </summary>
/// <returns></returns>
- (NSMutableData*) getBytes;
/// <summary>
/// Converts an instance to a byte array.
/// </summary>
/// <param name="item">The source description item.</param>
/// <returns></returns>
+ (NSMutableData*) getBytesWithItem:(FMIceLinkRTCPSourceDescriptionItem*)item;
- (id) init;
/// <summary>
/// Converts a byte array to an instance.
/// </summary>
/// <param name="data">The source data.</param>
/// <param name="offset">The offset.</param>
/// <param name="offsetPlus">The offset after parsing.</param>
/// <returns></returns>
+ (FMIceLinkRTCPSourceDescriptionItem*) parseBytesWithData:(NSMutableData*)data offset:(int)offset offsetPlus:(int*)offsetPlus;
+ (FMIceLinkRTCPSourceDescriptionItem*) rtcpSourceDescriptionItem;
/// <summary>
/// Sets the text.
/// </summary>
- (void) setText:(NSString*)value;
/// <summary>
/// Sets the type.
/// </summary>
- (void) setType:(uint8_t)value;
/// <summary>
/// Gets the text.
/// </summary>
- (NSString*) text;
/// <summary>
/// Gets the type.
/// </summary>
- (uint8_t) type;

@end



/// <summary>
/// An RTCP RR packet.
/// </summary>
#pragma clang diagnostic ignored "-Wshorten-64-to-32"
#pragma clang diagnostic ignored "-Wint-to-pointer-cast"

@interface FMIceLinkRTCPRrPacket : FMIceLinkRTCPReportPacket 

/// <summary>
/// Deserializes the packet data from the first byte and payload.
/// </summary>
- (void) deserialize;
/// <summary>
/// Initializes a new instance of the <see cref="FMIceLinkRTCPRrPacket" /> class.
/// </summary>
- (id) init;
/// <summary>
/// Initializes a new instance of the <see cref="FMIceLinkRTCPRrPacket" /> class.
/// </summary>
/// <param name="synchronizationSource">The synchronization source.</param>
- (id) initWithSynchronizationSource:(long long)synchronizationSource;
/// <summary>
/// Initializes a new instance of the <see cref="FMIceLinkRTCPRrPacket" /> class.
/// </summary>
+ (FMIceLinkRTCPRrPacket*) rtcpRrPacket;
/// <summary>
/// Initializes a new instance of the <see cref="FMIceLinkRTCPRrPacket" /> class.
/// </summary>
/// <param name="synchronizationSource">The synchronization source.</param>
+ (FMIceLinkRTCPRrPacket*) rtcpRrPacketWithSynchronizationSource:(long long)synchronizationSource;
/// <summary>
/// Serializes the packet data to the first byte and payload.
/// </summary>
- (void) serialize;

@end


@class NSStringFMExtensions;

/// <summary>
/// The SDP session attribute "fingerprint" provides an encryption
/// certificate fingerprint to a remote peer for use with DTLS.
/// </summary>
#pragma clang diagnostic ignored "-Wshorten-64-to-32"
#pragma clang diagnostic ignored "-Wint-to-pointer-cast"

@interface FMIceLinkSDPFingerprintAttribute : FMIceLinkSDPAttribute 

/// <summary>
/// Gets the fingerprint.
/// </summary>
- (NSString*) fingerprint;
/// <summary>
/// Initializes a new instance of the <see cref="FMIceLinkSDPFingerprintAttribute" /> class.
/// </summary>
/// <param name="value">The attribute as a string.</param>
+ (FMIceLinkSDPFingerprintAttribute*) fromValueWithValue:(NSString*)value;
/// <summary>
/// Initializes a new instance of the <see cref="FMIceLinkSDPFingerprintAttribute" /> class.
/// </summary>
/// <param name="value">The attribute as a string.</param>
+ (FMIceLinkSDPFingerprintAttribute*) fromValue:(NSString*)value;
- (NSString*) getValue;
/// <summary>
/// Gets the hash function (i.e. sha-256).
/// </summary>
- (NSString*) hashFunction;
/// <summary>
/// Initializes a new instance of the <see cref="FMIceLinkSDPFingerprintAttribute" /> class.
/// </summary>
/// <param name="hashFunction">The hash function.</param>
/// <param name="fingerprint">The fingerprint.</param>
- (id) initWithHashFunction:(NSString*)hashFunction fingerprint:(NSString*)fingerprint;
/// <summary>
/// Initializes a new instance of the <see cref="FMIceLinkSDPFingerprintAttribute" /> class.
/// </summary>
/// <param name="hashFunction">The hash function.</param>
/// <param name="fingerprint">The fingerprint.</param>
+ (FMIceLinkSDPFingerprintAttribute*) sdpFingerprintAttributeWithHashFunction:(NSString*)hashFunction fingerprint:(NSString*)fingerprint;

@end


@class NSStringFMExtensions;

/// <summary>
/// This attribute is used to signal that RTP and RTCP traffic should be
/// multiplexed on a single port.  It is a property attribute, which does
/// not take a value.
/// </summary>
#pragma clang diagnostic ignored "-Wshorten-64-to-32"
#pragma clang diagnostic ignored "-Wint-to-pointer-cast"

@interface FMIceLinkSDPRtcpMuxAttribute : FMIceLinkSDPAttribute 

/// <summary>
/// Initializes a new instance of the <see cref="FMIceLinkSDPRtcpMuxAttribute" /> class.
/// </summary>
/// <param name="value">The attribute value.</param>
+ (FMIceLinkSDPRtcpMuxAttribute*) fromValueWithValue:(NSString*)value;
/// <summary>
/// Initializes a new instance of the <see cref="FMIceLinkSDPRtcpMuxAttribute" /> class.
/// </summary>
/// <param name="value">The attribute value.</param>
+ (FMIceLinkSDPRtcpMuxAttribute*) fromValue:(NSString*)value;
- (NSString*) getValue;
/// <summary>
/// Initializes a new instance of the <see cref="FMIceLinkSDPRtcpMuxAttribute" /> class.
/// </summary>
- (id) init;
/// <summary>
/// Initializes a new instance of the <see cref="FMIceLinkSDPRtcpMuxAttribute" /> class.
/// </summary>
+ (FMIceLinkSDPRtcpMuxAttribute*) sdpRtcpMuxAttribute;

@end



/// <summary>
/// An unknown RTCP packet.
/// </summary>
#pragma clang diagnostic ignored "-Wshorten-64-to-32"
#pragma clang diagnostic ignored "-Wint-to-pointer-cast"

@interface FMIceLinkRTCPUnknownPacket : FMIceLinkRTCPPacket 

/// <summary>
/// Deserializes the packet data from the first byte and payload.
/// </summary>
- (void) deserialize;
- (id) init;
+ (FMIceLinkRTCPUnknownPacket*) rtcpUnknownPacket;
/// <summary>
/// Serializes the packet data to the first byte and payload.
/// </summary>
- (void) serialize;

@end


@class NSDateFMExtensions;
@class NSStringFMExtensions;

/// <summary>
/// An RTCP SR packet.
/// </summary>
#pragma clang diagnostic ignored "-Wshorten-64-to-32"
#pragma clang diagnostic ignored "-Wint-to-pointer-cast"

@interface FMIceLinkRTCPSrPacket : FMIceLinkRTCPReportPacket 

/// <summary>
/// Deserializes the packet data from the first byte and payload.
/// </summary>
- (void) deserialize;
/// <summary>
/// Initializes a new instance of the <see cref="FMIceLinkRTCPSrPacket" /> class.
/// </summary>
- (id) init;
/// <summary>
/// Initializes a new instance of the <see cref="FMIceLinkRTCPSrPacket" /> class.
/// </summary>
/// <param name="synchronizationSource">The synchronization source.</param>
/// <param name="ntpTimestamp">The time when this report was sent (NTP-style).</param>
/// <param name="rtpTimestamp">The time when this report was sent (RTP-style).</param>
/// <param name="packetCount">The sender's packet count.</param>
/// <param name="octetCount">The sender's octet count.</param>
- (id) initWithSynchronizationSource:(long long)synchronizationSource ntpTimestamp:(long long)ntpTimestamp rtpTimestamp:(long long)rtpTimestamp packetCount:(long long)packetCount octetCount:(long long)octetCount;
/// <summary>
/// Gets the time when this report was sent (NTP-style).
/// </summary>
- (long long) ntpTimestamp;
/// <summary>
/// Gets the sender's octet count.
/// </summary>
- (long long) octetCount;
/// <summary>
/// Gets the sender's packet count.
/// </summary>
- (long long) packetCount;
/// <summary>
/// Initializes a new instance of the <see cref="FMIceLinkRTCPSrPacket" /> class.
/// </summary>
+ (FMIceLinkRTCPSrPacket*) rtcpSrPacket;
/// <summary>
/// Initializes a new instance of the <see cref="FMIceLinkRTCPSrPacket" /> class.
/// </summary>
/// <param name="synchronizationSource">The synchronization source.</param>
/// <param name="ntpTimestamp">The time when this report was sent (NTP-style).</param>
/// <param name="rtpTimestamp">The time when this report was sent (RTP-style).</param>
/// <param name="packetCount">The sender's packet count.</param>
/// <param name="octetCount">The sender's octet count.</param>
+ (FMIceLinkRTCPSrPacket*) rtcpSrPacketWithSynchronizationSource:(long long)synchronizationSource ntpTimestamp:(long long)ntpTimestamp rtpTimestamp:(long long)rtpTimestamp packetCount:(long long)packetCount octetCount:(long long)octetCount;
/// <summary>
/// Gets the time when this report was sent (RTP-style).
/// </summary>
- (long long) rtpTimestamp;
/// <summary>
/// Serializes the packet data to the first byte and payload.
/// </summary>
- (void) serialize;
/// <summary>
/// Sets the time when this report was sent (NTP-style).
/// </summary>
- (void) setNTPTimestamp:(long long)value;
/// <summary>
/// Sets the sender's octet count.
/// </summary>
- (void) setOctetCount:(long long)value;
/// <summary>
/// Sets the sender's packet count.
/// </summary>
- (void) setPacketCount:(long long)value;
/// <summary>
/// Sets the time when this report was sent (RTP-style).
/// </summary>
- (void) setRTPTimestamp:(long long)value;
/// <summary>
/// Gets the time when this report was sent (wallclock-style).
/// </summary>
- (NSDate*) timestamp;
/// <summary>
/// Returns a string that represents this instance.
/// </summary>
- (NSString*) toString;
/// <summary>
/// Returns a string that represents this instance.
/// </summary>
- (NSString*) description;

@end


@class NSMutableDataFMExtensions;
@class NSMutableArrayFMExtensions;

/// <summary>
/// An RTP packet.
/// </summary>
#pragma clang diagnostic ignored "-Wshorten-64-to-32"
#pragma clang diagnostic ignored "-Wint-to-pointer-cast"

@interface FMIceLinkRTPPacket : NSObject 

/// <summary>
/// Gets the contributing sources.
/// </summary>
- (NSMutableArray*) contributingSources;
/// <summary>
/// Gets the contributing sources count.
/// </summary>
- (uint8_t) contributingSourcesCount;
/// <summary>
/// Gets the extension.
/// </summary>
- (NSMutableArray*) extension;
/// <summary>
/// Gets the extension header.
/// </summary>
- (int) extensionHeader;
/// <summary>
/// Gets the extension bit.
/// </summary>
- (bool) extensionPresent;
/// <summary>
/// Converts this instance to a byte array.
/// </summary>
/// <returns></returns>
- (NSMutableData*) getBytes;
/// <summary>
/// Retrieves the difference between two sequence numbers
/// while accounting for overflow rollover.
/// </summary>
/// <param name="sequenceNumber">The current sequence number.</param>
/// <param name="lastSequenceNumber">The last (previous) sequence number.</param>
/// <returns>The difference between the two sequence numbers.</returns>
+ (int) getSequenceNumberDeltaWithSequenceNumber:(int)sequenceNumber lastSequenceNumber:(int)lastSequenceNumber;
/// <summary>
/// Gets the length of the header.
/// </summary>
+ (int) headerLength;
/// <summary>
/// Initializes a new instance of the <see cref="FMIceLinkRTPPacket" /> class.
/// </summary>
/// <param name="payload">The payload.</param>
- (id) initWithPayload:(NSMutableData*)payload;
/// <summary>
/// Gets the marker bit.
/// </summary>
- (bool) marker;
/// <summary>
/// Gets the padding bit.
/// </summary>
- (bool) padding;
/// <summary>
/// Converts a byte array to a packet.
/// </summary>
/// <param name="bytes">The byte array.</param>
/// <returns></returns>
+ (FMIceLinkRTPPacket*) parseBytesWithBytes:(NSMutableData*)bytes;
/// <summary>
/// Converts a byte array to a packet.
/// </summary>
/// <param name="bytes">The byte array.</param>
/// <returns></returns>
+ (FMIceLinkRTPPacket*) parseBytes:(NSMutableData*)bytes;
/// <summary>
/// Converts a byte array to a packet.
/// </summary>
/// <param name="bytes">The byte array.</param>
/// <param name="length">The length of the RTP packet.</param>
/// <returns></returns>
+ (FMIceLinkRTPPacket*) parseBytesWithBytes:(NSMutableData*)bytes length:(int)length;
/// <summary>
/// Converts a byte array to a packet.
/// </summary>
/// <param name="bytes">The byte array.</param>
/// <param name="length">The length of the RTP packet.</param>
/// <returns></returns>
+ (FMIceLinkRTPPacket*) parseBytes:(NSMutableData*)bytes length:(int)length;
/// <summary>
/// Gets the data payload.
/// </summary>
- (NSMutableData*) payload;
/// <summary>
/// Gets the type of the payload.
/// </summary>
- (uint8_t) payloadType;
/// <summary>
/// Initializes a new instance of the <see cref="FMIceLinkRTPPacket" /> class.
/// </summary>
/// <param name="payload">The payload.</param>
+ (FMIceLinkRTPPacket*) rtpPacketWithPayload:(NSMutableData*)payload;
/// <summary>
/// Gets the sequence number.
/// </summary>
- (int) sequenceNumber;
/// <summary>
/// Sets the contributing sources.
/// </summary>
- (void) setContributingSources:(NSMutableArray*)value;
/// <summary>
/// Sets the extension.
/// </summary>
- (void) setExtension:(NSMutableArray*)value;
/// <summary>
/// Sets the extension header.
/// </summary>
- (void) setExtensionHeader:(int)value;
/// <summary>
/// Sets the marker bit.
/// </summary>
- (void) setMarker:(bool)value;
/// <summary>
/// Sets the padding bit.
/// </summary>
- (void) setPadding:(bool)value;
/// <summary>
/// Sets the data payload.
/// </summary>
- (void) setPayload:(NSMutableData*)value;
/// <summary>
/// Sets the type of the payload.
/// </summary>
- (void) setPayloadType:(uint8_t)value;
/// <summary>
/// Sets the sequence number.
/// </summary>
- (void) setSequenceNumber:(int)value;
/// <summary>
/// Sets the synchronization source.
/// </summary>
- (void) setSynchronizationSource:(long long)value;
/// <summary>
/// Sets the timestamp.
/// </summary>
- (void) setTimestamp:(long long)value;
/// <summary>
/// Gets the synchronization source.
/// </summary>
- (long long) synchronizationSource;
/// <summary>
/// Gets the timestamp.
/// </summary>
- (long long) timestamp;

@end


@class NSStringFMExtensions;

/// <summary>
/// The SDP media attribute "ssrc" indicates a property (known as a
/// "source-level attribute") of a media source (RTP stream) within an
/// RTP session.
/// </summary>
#pragma clang diagnostic ignored "-Wshorten-64-to-32"
#pragma clang diagnostic ignored "-Wint-to-pointer-cast"

@interface FMIceLinkSDPSsrcAttribute : FMIceLinkSDPAttribute 

/// <summary>
/// Gets the name of the attribute.
/// </summary>
- (NSString*) attributeName;
/// <summary>
/// Gets the attribute value.
/// </summary>
- (NSString*) attributeValue;
/// <summary>
/// Initializes a new instance of the <see cref="FMIceLinkSDPSsrcAttribute" /> class.
/// </summary>
/// <param name="value">The attribute value.</param>
+ (FMIceLinkSDPSsrcAttribute*) fromValueWithValue:(NSString*)value;
/// <summary>
/// Initializes a new instance of the <see cref="FMIceLinkSDPSsrcAttribute" /> class.
/// </summary>
/// <param name="value">The attribute value.</param>
+ (FMIceLinkSDPSsrcAttribute*) fromValue:(NSString*)value;
- (NSString*) getValue;
/// <summary>
/// Initializes a new instance of the <see cref="FMIceLinkSDPSsrcAttribute" /> class.
/// </summary>
/// <param name="synchronizationSource">The synchronization source.</param>
/// <param name="attributeName">Name of the attribute.</param>
- (id) initWithSynchronizationSource:(long long)synchronizationSource attributeName:(NSString*)attributeName;
/// <summary>
/// Initializes a new instance of the <see cref="FMIceLinkSDPSsrcAttribute" /> class.
/// </summary>
/// <param name="synchronizationSource">The synchronization source.</param>
/// <param name="attributeName">Name of the attribute.</param>
/// <param name="attributeValue">The attribute value.</param>
- (id) initWithSynchronizationSource:(long long)synchronizationSource attributeName:(NSString*)attributeName attributeValue:(NSString*)attributeValue;
/// <summary>
/// Initializes a new instance of the <see cref="FMIceLinkSDPSsrcAttribute" /> class.
/// </summary>
/// <param name="synchronizationSource">The synchronization source.</param>
/// <param name="attributeName">Name of the attribute.</param>
+ (FMIceLinkSDPSsrcAttribute*) sdpSsrcAttributeWithSynchronizationSource:(long long)synchronizationSource attributeName:(NSString*)attributeName;
/// <summary>
/// Initializes a new instance of the <see cref="FMIceLinkSDPSsrcAttribute" /> class.
/// </summary>
/// <param name="synchronizationSource">The synchronization source.</param>
/// <param name="attributeName">Name of the attribute.</param>
/// <param name="attributeValue">The attribute value.</param>
+ (FMIceLinkSDPSsrcAttribute*) sdpSsrcAttributeWithSynchronizationSource:(long long)synchronizationSource attributeName:(NSString*)attributeName attributeValue:(NSString*)attributeValue;
/// <summary>
/// Gets the synchronization source.
/// </summary>
- (long long) synchronizationSource;

@end


@class NSStringFMExtensions;

/// <summary>
/// This attribute is used to encapsulate unrecognized SDP attributes.
/// </summary>
#pragma clang diagnostic ignored "-Wshorten-64-to-32"
#pragma clang diagnostic ignored "-Wint-to-pointer-cast"

@interface FMIceLinkSDPUnknownAttribute : FMIceLinkSDPAttribute 

- (NSString*) getValue;
/// <summary>
/// Initializes a new instance of the <see cref="FMIceLinkSDPUnknownAttribute" /> class.
/// </summary>
/// <param name="name">The name.</param>
/// <param name="value">The value.</param>
- (id) initWithName:(NSString*)name value:(NSString*)value;
/// <summary>
/// Gets the attribute name.
/// </summary>
- (NSString*) name;
/// <summary>
/// Initializes a new instance of the <see cref="FMIceLinkSDPUnknownAttribute" /> class.
/// </summary>
/// <param name="name">The name.</param>
/// <param name="value">The value.</param>
+ (FMIceLinkSDPUnknownAttribute*) sdpUnknownAttributeWithName:(NSString*)name value:(NSString*)value;
/// <summary>
/// Gets the attribute value.
/// </summary>
- (NSString*) value;

@end


@class NSStringFMExtensions;

/// <summary>
/// Defines valid SDP crypto session parameters.
/// </summary>
#pragma clang diagnostic ignored "-Wshorten-64-to-32"
#pragma clang diagnostic ignored "-Wint-to-pointer-cast"

@interface FMIceLinkSDPCryptoSessionParam : NSObject 

/// <summary>
/// Gets the SDP crypto session parameter meaning "unauthenticated SRTP".
/// </summary>
+ (NSString*) unauthenticatedSRTP;
/// <summary>
/// Gets the SDP crypto session parameter meaning "unencrypted SRTCP".
/// </summary>
+ (NSString*) unencryptedSRTCP;
/// <summary>
/// Gets the SDP crypto session parameter meaning "unencrypted SRTP".
/// </summary>
+ (NSString*) unencryptedSRTP;

@end


@class NSStringFMExtensions;

/// <summary>
/// Defines valid SDP crypto key methods.
/// </summary>
#pragma clang diagnostic ignored "-Wshorten-64-to-32"
#pragma clang diagnostic ignored "-Wint-to-pointer-cast"

@interface FMIceLinkSDPCryptoKeyMethod : NSObject 

/// <summary>
/// Gets the SDP crypto key method meaning "inline".
/// </summary>
+ (NSString*) inline;

@end


@class NSStringFMExtensions;

/// <summary>
/// Defines valid SDP crypto suites.
/// </summary>
#pragma clang diagnostic ignored "-Wshorten-64-to-32"
#pragma clang diagnostic ignored "-Wint-to-pointer-cast"

@interface FMIceLinkSDPCryptoSuite : NSObject 

/// <summary>
/// Gets the SDP crypto suite meaning "AES-CM 128-bit cipher and HMAC-SHA1 message authentication with a 32-bit authentication tag".
/// </summary>
+ (NSString*) aescm128hmacsha132;
/// <summary>
/// Gets the SDP crypto suite meaning "AES-CM 128-bit cipher and HMAC-SHA1 message authentication with an 80-bit authentication tag".
/// </summary>
+ (NSString*) aescm128hmacsha180;
/// <summary>
/// Converts an EncryptionMode enum to a crypto-suite string.
/// </summary>
/// <param name="encryptionMode">The EncryptionMode enum.</param>
/// <returns>The crypto-suite string.</returns>
+ (NSString*) getCryptoSuiteWithEncryptionMode:(FMIceLinkEncryptionMode)encryptionMode;
/// <summary>
/// Converts a crypto-suite string to an EncryptionMode enum.
/// </summary>
/// <param name="cryptoSuite">The crypto-suite string.</param>
/// <returns>The EncryptionMode enum.</returns>
+ (FMIceLinkEncryptionMode) getEncryptionModeWithCryptoSuite:(NSString*)cryptoSuite;
/// <summary>
/// Gets the SDP crypto suite meaning "NULL cipher and HMAC-SHA1 message authentication with a 32-bit authentication tag".
/// </summary>
+ (NSString*) nullhmacsha132;
/// <summary>
/// Gets the SDP crypto suite meaning "NULL cipher and HMAC-SHA1 message authentication with an 80-bit authentication tag".
/// </summary>
+ (NSString*) nullhmacsha180;

@end


@class NSStringFMExtensions;
@class NSMutableDictionaryFMExtensions;
@class NSMutableArrayFMExtensions;
@class NSMutableDataFMExtensions;

/// <summary>
/// This gives the maximum amount of media that can be encapsulated
/// in each packet, expressed as time in milliseconds.  The time
/// SHALL be calculated as the sum of the time the media present in
/// the packet represents.  For frame-based codecs, the time SHOULD
/// be an integer multiple of the frame size.  This attribute is
/// probably only meaningful for audio data, but may be used with
/// other media types if it makes sense.  It is a media-level
/// attribute, and it is not dependent on charset.  Note that this
/// attribute was introduced after RFC 2327, and non-updated
/// implementations will ignore this attribute.
/// </summary>
#pragma clang diagnostic ignored "-Wshorten-64-to-32"
#pragma clang diagnostic ignored "-Wint-to-pointer-cast"

@interface FMIceLinkSDPCryptoAttribute : FMIceLinkSDPAttribute 

/// <summary>
/// Gets the crypto suite. See <see cref="FMIceLinkSDPCryptoSuite" /> for possible values.
/// </summary>
- (NSString*) cryptoSuite;
/// <summary>
/// Initializes a new instance of the <see cref="FMIceLinkSDPCryptoAttribute" /> class.
/// </summary>
/// <param name="value">The attribute value.</param>
+ (FMIceLinkSDPCryptoAttribute*) fromValueWithValue:(NSString*)value;
/// <summary>
/// Initializes a new instance of the <see cref="FMIceLinkSDPCryptoAttribute" /> class.
/// </summary>
/// <param name="value">The attribute value.</param>
+ (FMIceLinkSDPCryptoAttribute*) fromValue:(NSString*)value;
/// <summary>
/// Gets the key from the "inline" key parameter.
/// </summary>
/// <returns></returns>
- (NSMutableData*) getKey;
/// <summary>
/// Gets the salt from the "inline" key parameter.
/// </summary>
/// <returns></returns>
- (NSMutableData*) getSalt;
- (NSString*) getValue;
/// <summary>
/// Initializes a new instance of the <see cref="FMIceLinkSDPCryptoAttribute" /> class.
/// </summary>
/// <param name="tag">The tag.</param>
/// <param name="cryptoSuite">The crypto suite.</param>
- (id) initWithTag:(int)tag cryptoSuite:(NSString*)cryptoSuite;
/// <summary>
/// Gets the key parameters.
/// </summary>
- (NSMutableDictionary*) keyParams;
/// <summary>
/// Initializes a new instance of the <see cref="FMIceLinkSDPCryptoAttribute" /> class.
/// </summary>
/// <param name="tag">The tag.</param>
/// <param name="cryptoSuite">The crypto suite.</param>
+ (FMIceLinkSDPCryptoAttribute*) sdpCryptoAttributeWithTag:(int)tag cryptoSuite:(NSString*)cryptoSuite;
/// <summary>
/// Gets the session parameters.
/// </summary>
- (NSMutableArray*) sessionParams;
/// <summary>
/// Sets the key and salt for the "inline" key parameter.
/// </summary>
/// <param name="key">The key.</param>
/// <param name="salt">The salt.</param>
- (FMIceLinkSDPCryptoAttribute*) setKeySaltWithKey:(NSMutableData*)key salt:(NSMutableData*)salt;
/// <summary>
/// Sets the tag.
/// </summary>
- (void) setTag:(int)value;
/// <summary>
/// Gets the tag.
/// </summary>
- (int) tag;

@end


@class FMIceLinkAcceptArgs;
@class FMIceLinkAcceptCompleteArgs;
@class FMIceLinkAcceptFailureArgs;
@class FMIceLinkAcceptSuccessArgs;
@class FMIceLinkCloseArgs;
@class FMIceLinkCloseCompleteArgs;
@class FMIceLinkCandidate;
@class FMIceLinkCreateCompleteArgs;
@class FMIceLinkCreateArgs;
@class FMIceLinkCreateFailureArgs;
@class FMIceLinkCreateSuccessArgs;
@class FMIceLinkLinkCandidateArgs;
@class FMIceLinkLinkDownArgs;
@class FMIceLinkLinkInitArgs;
@class FMIceLinkLinkOfferAnswerArgs;
@class FMIceLinkLinkUpArgs;
@class FMIceLinkOfferAnswer;
@class FMIceLinkStream;
@class FMIceLinkStreamFormat;
@class NSStringFMExtensions;
@class NSMutableArrayFMExtensions;
@class NSMutableDictionaryFMExtensions;

#pragma clang diagnostic ignored "-Wshorten-64-to-32"
#pragma clang diagnostic ignored "-Wint-to-pointer-cast"

@interface FMIceLinkSerializer : NSObject 

+ (FMIceLinkAcceptArgs*) acceptAcceptArgs;
+ (FMIceLinkAcceptCompleteArgs*) acceptAcceptCompleteArgs;
+ (FMIceLinkAcceptFailureArgs*) acceptAcceptFailureArgs;
+ (FMIceLinkAcceptSuccessArgs*) acceptAcceptSuccessArgs;
+ (FMIceLinkCloseArgs*) closeCloseArgs;
+ (FMIceLinkCloseCompleteArgs*) closeCloseCompleteArgs;
+ (FMIceLinkCandidate*) createCandidate;
+ (FMIceLinkCreateCompleteArgs*) createCompleteCreateCompleteArgs;
+ (FMIceLinkCreateArgs*) createCreateArgs;
+ (FMIceLinkCreateFailureArgs*) createCreateFailureArgs;
+ (FMIceLinkCreateSuccessArgs*) createCreateSuccessArgs;
+ (FMIceLinkLinkCandidateArgs*) createLinkCandidateArgs;
+ (FMIceLinkLinkDownArgs*) createLinkDownArgs;
+ (FMIceLinkLinkInitArgs*) createLinkInitArgs;
+ (FMIceLinkLinkOfferAnswerArgs*) createLinkOfferAnswerArgs;
+ (FMIceLinkLinkUpArgs*) createLinkUpArgs;
+ (FMIceLinkOfferAnswer*) createOfferAnswer;
+ (FMIceLinkStream*) createStream;
+ (FMIceLinkStreamFormat*) createStreamFormat;
+ (void) deserializeAcceptArgsCallbackWithAcceptArgs:(FMIceLinkAcceptArgs*)acceptArgs name:(NSString*)name valueJson:(NSString*)valueJson;
+ (FMIceLinkAcceptArgs*) deserializeAcceptArgsWithAcceptArgsJson:(NSString*)acceptArgsJson;
+ (FMIceLinkAcceptArgs*) deserializeAcceptArgsWithJson:(NSString*)acceptArgsJson;
+ (void) deserializeAcceptCompleteArgsCallbackWithAcceptCompleteArgs:(FMIceLinkAcceptCompleteArgs*)acceptCompleteArgs name:(NSString*)name valueJson:(NSString*)valueJson;
+ (FMIceLinkAcceptCompleteArgs*) deserializeAcceptCompleteArgsWithAcceptCompleteArgsJson:(NSString*)acceptCompleteArgsJson;
+ (FMIceLinkAcceptCompleteArgs*) deserializeAcceptCompleteArgsWithJson:(NSString*)acceptCompleteArgsJson;
+ (void) deserializeAcceptFailureArgsCallbackWithAcceptFailureArgs:(FMIceLinkAcceptFailureArgs*)acceptFailureArgs name:(NSString*)name valueJson:(NSString*)valueJson;
+ (FMIceLinkAcceptFailureArgs*) deserializeAcceptFailureArgsWithAcceptFailureArgsJson:(NSString*)acceptFailureArgsJson;
+ (FMIceLinkAcceptFailureArgs*) deserializeAcceptFailureArgsWithJson:(NSString*)acceptFailureArgsJson;
+ (void) deserializeAcceptSuccessArgsCallbackWithAcceptSuccessArgs:(FMIceLinkAcceptSuccessArgs*)acceptSuccessArgs name:(NSString*)name valueJson:(NSString*)valueJson;
+ (FMIceLinkAcceptSuccessArgs*) deserializeAcceptSuccessArgsWithAcceptSuccessArgsJson:(NSString*)acceptSuccessArgsJson;
+ (FMIceLinkAcceptSuccessArgs*) deserializeAcceptSuccessArgsWithJson:(NSString*)acceptSuccessArgsJson;
+ (NSMutableArray*) deserializeCandidateArrayWithCandidatesJson:(NSString*)candidatesJson;
+ (void) deserializeCandidateCallbackWithCandidate:(FMIceLinkCandidate*)candidate name:(NSString*)name valueJson:(NSString*)valueJson;
+ (NSMutableArray*) deserializeCandidateModeArrayWithCandidateModesJson:(NSString*)candidateModesJson;
+ (FMIceLinkCandidateMode) deserializeCandidateModeWithCandidateModeJson:(NSString*)candidateModeJson;
+ (FMIceLinkCandidateMode) deserializeCandidateModeWithJson:(NSString*)candidateModeJson;
+ (NSMutableArray*) deserializeCandidateTypeArrayWithCandidateTypesJson:(NSString*)candidateTypesJson;
+ (FMIceLinkCandidateType) deserializeCandidateTypeWithCandidateTypeJson:(NSString*)candidateTypeJson;
+ (FMIceLinkCandidateType) deserializeCandidateTypeWithJson:(NSString*)candidateTypeJson;
+ (FMIceLinkCandidate*) deserializeCandidateWithCandidateJson:(NSString*)candidateJson;
+ (FMIceLinkCandidate*) deserializeCandidateWithJson:(NSString*)candidateJson;
+ (void) deserializeCloseArgsCallbackWithCloseArgs:(FMIceLinkCloseArgs*)closeArgs name:(NSString*)name valueJson:(NSString*)valueJson;
+ (FMIceLinkCloseArgs*) deserializeCloseArgsWithCloseArgsJson:(NSString*)closeArgsJson;
+ (FMIceLinkCloseArgs*) deserializeCloseArgsWithJson:(NSString*)closeArgsJson;
+ (void) deserializeCloseCompleteArgsCallbackWithCloseCompleteArgs:(FMIceLinkCloseCompleteArgs*)closeCompleteArgs name:(NSString*)name valueJson:(NSString*)valueJson;
+ (FMIceLinkCloseCompleteArgs*) deserializeCloseCompleteArgsWithCloseCompleteArgsJson:(NSString*)closeCompleteArgsJson;
+ (FMIceLinkCloseCompleteArgs*) deserializeCloseCompleteArgsWithJson:(NSString*)closeCompleteArgsJson;
+ (void) deserializeCreateArgsCallbackWithCreateArgs:(FMIceLinkCreateArgs*)createArgs name:(NSString*)name valueJson:(NSString*)valueJson;
+ (FMIceLinkCreateArgs*) deserializeCreateArgsWithCreateArgsJson:(NSString*)createArgsJson;
+ (FMIceLinkCreateArgs*) deserializeCreateArgsWithJson:(NSString*)createArgsJson;
+ (void) deserializeCreateCompleteArgsCallbackWithCreateCompleteArgs:(FMIceLinkCreateCompleteArgs*)createCompleteArgs name:(NSString*)name valueJson:(NSString*)valueJson;
+ (FMIceLinkCreateCompleteArgs*) deserializeCreateCompleteArgsWithCreateCompleteArgsJson:(NSString*)createCompleteArgsJson;
+ (FMIceLinkCreateCompleteArgs*) deserializeCreateCompleteArgsWithJson:(NSString*)createCompleteArgsJson;
+ (void) deserializeCreateFailureArgsCallbackWithCreateFailureArgs:(FMIceLinkCreateFailureArgs*)createFailureArgs name:(NSString*)name valueJson:(NSString*)valueJson;
+ (FMIceLinkCreateFailureArgs*) deserializeCreateFailureArgsWithCreateFailureArgsJson:(NSString*)createFailureArgsJson;
+ (FMIceLinkCreateFailureArgs*) deserializeCreateFailureArgsWithJson:(NSString*)createFailureArgsJson;
+ (void) deserializeCreateSuccessArgsCallbackWithCreateSuccessArgs:(FMIceLinkCreateSuccessArgs*)createSuccessArgs name:(NSString*)name valueJson:(NSString*)valueJson;
+ (FMIceLinkCreateSuccessArgs*) deserializeCreateSuccessArgsWithCreateSuccessArgsJson:(NSString*)createSuccessArgsJson;
+ (FMIceLinkCreateSuccessArgs*) deserializeCreateSuccessArgsWithJson:(NSString*)createSuccessArgsJson;
+ (NSMutableArray*) deserializeEncryptionModeArrayWithEncryptionModesJson:(NSString*)encryptionModesJson;
+ (FMIceLinkEncryptionMode) deserializeEncryptionModeWithEncryptionModeJson:(NSString*)encryptionModeJson;
+ (FMIceLinkEncryptionMode) deserializeEncryptionModeWithJson:(NSString*)encryptionModeJson;
+ (NSMutableArray*) deserializeEncryptionRoleArrayWithEncryptionRolesJson:(NSString*)encryptionRolesJson;
+ (FMIceLinkEncryptionRole) deserializeEncryptionRoleWithEncryptionRoleJson:(NSString*)encryptionRoleJson;
+ (FMIceLinkEncryptionRole) deserializeEncryptionRoleWithJson:(NSString*)encryptionRoleJson;
+ (void) deserializeLinkCandidateArgsCallbackWithLinkCandidateArgs:(FMIceLinkLinkCandidateArgs*)linkCandidateArgs name:(NSString*)name valueJson:(NSString*)valueJson;
+ (FMIceLinkLinkCandidateArgs*) deserializeLinkCandidateArgsWithLinkCandidateArgsJson:(NSString*)linkCandidateArgsJson;
+ (FMIceLinkLinkCandidateArgs*) deserializeLinkCandidateArgsWithJson:(NSString*)linkCandidateArgsJson;
+ (void) deserializeLinkDownArgsCallbackWithLinkDownArgs:(FMIceLinkLinkDownArgs*)linkDownArgs name:(NSString*)name valueJson:(NSString*)valueJson;
+ (FMIceLinkLinkDownArgs*) deserializeLinkDownArgsWithLinkDownArgsJson:(NSString*)linkDownArgsJson;
+ (FMIceLinkLinkDownArgs*) deserializeLinkDownArgsWithJson:(NSString*)linkDownArgsJson;
+ (void) deserializeLinkInitArgsCallbackWithLinkInitArgs:(FMIceLinkLinkInitArgs*)linkInitArgs name:(NSString*)name valueJson:(NSString*)valueJson;
+ (FMIceLinkLinkInitArgs*) deserializeLinkInitArgsWithLinkInitArgsJson:(NSString*)linkInitArgsJson;
+ (FMIceLinkLinkInitArgs*) deserializeLinkInitArgsWithJson:(NSString*)linkInitArgsJson;
+ (void) deserializeLinkOfferAnswerArgsCallbackWithLinkOfferAnswerArgs:(FMIceLinkLinkOfferAnswerArgs*)linkOfferAnswerArgs name:(NSString*)name valueJson:(NSString*)valueJson;
+ (FMIceLinkLinkOfferAnswerArgs*) deserializeLinkOfferAnswerArgsWithLinkOfferAnswerArgsJson:(NSString*)linkOfferAnswerArgsJson;
+ (FMIceLinkLinkOfferAnswerArgs*) deserializeLinkOfferAnswerArgsWithJson:(NSString*)linkOfferAnswerArgsJson;
+ (void) deserializeLinkUpArgsCallbackWithLinkUpArgs:(FMIceLinkLinkUpArgs*)linkUpArgs name:(NSString*)name valueJson:(NSString*)valueJson;
+ (FMIceLinkLinkUpArgs*) deserializeLinkUpArgsWithLinkUpArgsJson:(NSString*)linkUpArgsJson;
+ (FMIceLinkLinkUpArgs*) deserializeLinkUpArgsWithJson:(NSString*)linkUpArgsJson;
+ (void) deserializeOfferAnswerCallbackWithOfferAnswer:(FMIceLinkOfferAnswer*)offerAnswer name:(NSString*)name valueJson:(NSString*)valueJson;
+ (FMIceLinkOfferAnswer*) deserializeOfferAnswerWithOfferAnswerJson:(NSString*)offerAnswerJson;
+ (FMIceLinkOfferAnswer*) deserializeOfferAnswerWithJson:(NSString*)offerAnswerJson;
+ (FMIceLinkStreamProtocol) deserializeProtocolWithProtocolJson:(NSString*)protocolJson;
+ (FMIceLinkStreamProtocol) deserializeProtocolWithJson:(NSString*)protocolJson;
+ (FMIceLinkRtpMode) deserializeRtpModeWithRtpModeJson:(NSString*)rtpModeJson;
+ (FMIceLinkRtpMode) deserializeRtpModeWithJson:(NSString*)rtpModeJson;
+ (NSMutableArray*) deserializeStreamArrayWithStreamsJson:(NSString*)streamsJson;
+ (void) deserializeStreamCallbackWithStream:(FMIceLinkStream*)stream name:(NSString*)name valueJson:(NSString*)valueJson;
+ (NSMutableArray*) deserializeStreamFormatArrayWithStreamFormatsJson:(NSString*)streamFormatsJson;
+ (void) deserializeStreamFormatCallbackWithStreamFormat:(FMIceLinkStreamFormat*)streamFormat name:(NSString*)name valueJson:(NSString*)valueJson;
+ (FMIceLinkStreamFormat*) deserializeStreamFormatWithStreamFormatJson:(NSString*)streamFormatJson;
+ (FMIceLinkStreamFormat*) deserializeStreamFormatWithJson:(NSString*)streamFormatJson;
+ (NSMutableArray*) deserializeStreamTypeArrayWithStreamTypesJson:(NSString*)streamTypesJson;
+ (FMIceLinkStreamType) deserializeStreamTypeWithStreamTypeJson:(NSString*)streamTypeJson;
+ (FMIceLinkStreamType) deserializeStreamTypeWithJson:(NSString*)streamTypeJson;
+ (FMIceLinkStream*) deserializeStreamWithStreamJson:(NSString*)streamJson;
+ (FMIceLinkStream*) deserializeStreamWithJson:(NSString*)streamJson;
- (id) init;
+ (void) serializeAcceptArgsCallbackWithAcceptArgs:(FMIceLinkAcceptArgs*)acceptArgs jsonObject:(NSMutableDictionary*)jsonObject;
+ (NSString*) serializeAcceptArgsWithAcceptArgs:(FMIceLinkAcceptArgs*)acceptArgs;
+ (NSString*) serializeAcceptArgs:(FMIceLinkAcceptArgs*)acceptArgs;
+ (void) serializeAcceptCompleteArgsCallbackWithAcceptCompleteArgs:(FMIceLinkAcceptCompleteArgs*)acceptCompleteArgs jsonObject:(NSMutableDictionary*)jsonObject;
+ (NSString*) serializeAcceptCompleteArgsWithAcceptCompleteArgs:(FMIceLinkAcceptCompleteArgs*)acceptCompleteArgs;
+ (NSString*) serializeAcceptCompleteArgs:(FMIceLinkAcceptCompleteArgs*)acceptCompleteArgs;
+ (void) serializeAcceptFailureArgsCallbackWithAcceptFailureArgs:(FMIceLinkAcceptFailureArgs*)acceptFailureArgs jsonObject:(NSMutableDictionary*)jsonObject;
+ (NSString*) serializeAcceptFailureArgsWithAcceptFailureArgs:(FMIceLinkAcceptFailureArgs*)acceptFailureArgs;
+ (NSString*) serializeAcceptFailureArgs:(FMIceLinkAcceptFailureArgs*)acceptFailureArgs;
+ (void) serializeAcceptSuccessArgsCallbackWithAcceptSuccessArgs:(FMIceLinkAcceptSuccessArgs*)acceptSuccessArgs jsonObject:(NSMutableDictionary*)jsonObject;
+ (NSString*) serializeAcceptSuccessArgsWithAcceptSuccessArgs:(FMIceLinkAcceptSuccessArgs*)acceptSuccessArgs;
+ (NSString*) serializeAcceptSuccessArgs:(FMIceLinkAcceptSuccessArgs*)acceptSuccessArgs;
+ (NSString*) serializeCandidateArrayWithCandidates:(NSMutableArray*)candidates;
+ (void) serializeCandidateCallbackWithCandidate:(FMIceLinkCandidate*)candidate jsonObject:(NSMutableDictionary*)jsonObject;
+ (NSString*) serializeCandidateModeArrayWithCandidateModes:(NSMutableArray*)candidateModes;
+ (NSString*) serializeCandidateModeWithCandidateMode:(FMIceLinkCandidateMode)candidateMode;
+ (NSString*) serializeCandidateMode:(FMIceLinkCandidateMode)candidateMode;
+ (NSString*) serializeCandidateTypeArrayWithCandidateTypes:(NSMutableArray*)candidateTypes;
+ (NSString*) serializeCandidateTypeWithCandidateType:(FMIceLinkCandidateType)candidateType;
+ (NSString*) serializeCandidateType:(FMIceLinkCandidateType)candidateType;
+ (NSString*) serializeCandidateWithCandidate:(FMIceLinkCandidate*)candidate;
+ (NSString*) serializeCandidate:(FMIceLinkCandidate*)candidate;
+ (void) serializeCloseArgsCallbackWithCloseArgs:(FMIceLinkCloseArgs*)closeArgs jsonObject:(NSMutableDictionary*)jsonObject;
+ (NSString*) serializeCloseArgsWithCloseArgs:(FMIceLinkCloseArgs*)closeArgs;
+ (NSString*) serializeCloseArgs:(FMIceLinkCloseArgs*)closeArgs;
+ (void) serializeCloseCompleteArgsCallbackWithCloseCompleteArgs:(FMIceLinkCloseCompleteArgs*)closeCompleteArgs jsonObject:(NSMutableDictionary*)jsonObject;
+ (NSString*) serializeCloseCompleteArgsWithCloseCompleteArgs:(FMIceLinkCloseCompleteArgs*)closeCompleteArgs;
+ (NSString*) serializeCloseCompleteArgs:(FMIceLinkCloseCompleteArgs*)closeCompleteArgs;
+ (void) serializeCreateArgsCallbackWithCreateArgs:(FMIceLinkCreateArgs*)createArgs jsonObject:(NSMutableDictionary*)jsonObject;
+ (NSString*) serializeCreateArgsWithCreateArgs:(FMIceLinkCreateArgs*)createArgs;
+ (NSString*) serializeCreateArgs:(FMIceLinkCreateArgs*)createArgs;
+ (void) serializeCreateCompleteArgsCallbackWithCreateCompleteArgs:(FMIceLinkCreateCompleteArgs*)createCompleteArgs jsonObject:(NSMutableDictionary*)jsonObject;
+ (NSString*) serializeCreateCompleteArgsWithCreateCompleteArgs:(FMIceLinkCreateCompleteArgs*)createCompleteArgs;
+ (NSString*) serializeCreateCompleteArgs:(FMIceLinkCreateCompleteArgs*)createCompleteArgs;
+ (void) serializeCreateFailureArgsCallbackWithCreateFailureArgs:(FMIceLinkCreateFailureArgs*)createFailureArgs jsonObject:(NSMutableDictionary*)jsonObject;
+ (NSString*) serializeCreateFailureArgsWithCreateFailureArgs:(FMIceLinkCreateFailureArgs*)createFailureArgs;
+ (NSString*) serializeCreateFailureArgs:(FMIceLinkCreateFailureArgs*)createFailureArgs;
+ (void) serializeCreateSuccessArgsCallbackWithCreateSuccessArgs:(FMIceLinkCreateSuccessArgs*)createSuccessArgs jsonObject:(NSMutableDictionary*)jsonObject;
+ (NSString*) serializeCreateSuccessArgsWithCreateSuccessArgs:(FMIceLinkCreateSuccessArgs*)createSuccessArgs;
+ (NSString*) serializeCreateSuccessArgs:(FMIceLinkCreateSuccessArgs*)createSuccessArgs;
+ (NSString*) serializeEncryptionModeArrayWithEncryptionModes:(NSMutableArray*)encryptionModes;
+ (NSString*) serializeEncryptionModeWithEncryptionMode:(FMIceLinkEncryptionMode)encryptionMode;
+ (NSString*) serializeEncryptionMode:(FMIceLinkEncryptionMode)encryptionMode;
+ (NSString*) serializeEncryptionRoleArrayWithEncryptionRoles:(NSMutableArray*)encryptionRoles;
+ (NSString*) serializeEncryptionRoleWithEncryptionRole:(FMIceLinkEncryptionRole)encryptionRole;
+ (NSString*) serializeEncryptionRole:(FMIceLinkEncryptionRole)encryptionRole;
+ (void) serializeLinkCandidateArgsCallbackWithLinkCandidateArgs:(FMIceLinkLinkCandidateArgs*)linkCandidateArgs jsonObject:(NSMutableDictionary*)jsonObject;
+ (NSString*) serializeLinkCandidateArgsWithLinkCandidateArgs:(FMIceLinkLinkCandidateArgs*)linkCandidateArgs;
+ (NSString*) serializeLinkCandidateArgs:(FMIceLinkLinkCandidateArgs*)linkCandidateArgs;
+ (void) serializeLinkDownArgsCallbackWithLinkDownArgs:(FMIceLinkLinkDownArgs*)linkDownArgs jsonObject:(NSMutableDictionary*)jsonObject;
+ (NSString*) serializeLinkDownArgsWithLinkDownArgs:(FMIceLinkLinkDownArgs*)linkDownArgs;
+ (NSString*) serializeLinkDownArgs:(FMIceLinkLinkDownArgs*)linkDownArgs;
+ (void) serializeLinkInitArgsCallbackWithLinkInitArgs:(FMIceLinkLinkInitArgs*)linkInitArgs jsonObject:(NSMutableDictionary*)jsonObject;
+ (NSString*) serializeLinkInitArgsWithLinkInitArgs:(FMIceLinkLinkInitArgs*)linkInitArgs;
+ (NSString*) serializeLinkInitArgs:(FMIceLinkLinkInitArgs*)linkInitArgs;
+ (void) serializeLinkOfferAnswerArgsCallbackWithLinkOfferAnswerArgs:(FMIceLinkLinkOfferAnswerArgs*)linkOfferAnswerArgs jsonObject:(NSMutableDictionary*)jsonObject;
+ (NSString*) serializeLinkOfferAnswerArgsWithLinkOfferAnswerArgs:(FMIceLinkLinkOfferAnswerArgs*)linkOfferAnswerArgs;
+ (NSString*) serializeLinkOfferAnswerArgs:(FMIceLinkLinkOfferAnswerArgs*)linkOfferAnswerArgs;
+ (void) serializeLinkUpArgsCallbackWithLinkUpArgs:(FMIceLinkLinkUpArgs*)linkUpArgs jsonObject:(NSMutableDictionary*)jsonObject;
+ (NSString*) serializeLinkUpArgsWithLinkUpArgs:(FMIceLinkLinkUpArgs*)linkUpArgs;
+ (NSString*) serializeLinkUpArgs:(FMIceLinkLinkUpArgs*)linkUpArgs;
+ (void) serializeOfferAnswerCallbackWithOfferAnswer:(FMIceLinkOfferAnswer*)offerAnswer jsonObject:(NSMutableDictionary*)jsonObject;
+ (NSString*) serializeOfferAnswerWithOfferAnswer:(FMIceLinkOfferAnswer*)offerAnswer;
+ (NSString*) serializeOfferAnswer:(FMIceLinkOfferAnswer*)offerAnswer;
+ (NSString*) serializeProtocolWithProtocol:(FMIceLinkStreamProtocol)protocol;
+ (NSString*) serializeProtocol:(FMIceLinkStreamProtocol)protocol;
+ (FMIceLinkSerializer*) serializer;
+ (NSString*) serializeRtpModeWithRtpMode:(FMIceLinkRtpMode)rtpMode;
+ (NSString*) serializeRtpMode:(FMIceLinkRtpMode)rtpMode;
+ (NSString*) serializeStreamArrayWithStreams:(NSMutableArray*)streams;
+ (void) serializeStreamCallbackWithStream:(FMIceLinkStream*)stream jsonObject:(NSMutableDictionary*)jsonObject;
+ (NSString*) serializeStreamFormatArrayWithStreamFormats:(NSMutableArray*)streamFormats;
+ (void) serializeStreamFormatCallbackWithStreamFormat:(FMIceLinkStreamFormat*)streamFormat jsonObject:(NSMutableDictionary*)jsonObject;
+ (NSString*) serializeStreamFormatWithStreamFormat:(FMIceLinkStreamFormat*)streamFormat;
+ (NSString*) serializeStreamFormat:(FMIceLinkStreamFormat*)streamFormat;
+ (NSString*) serializeStreamTypeArrayWithStreamTypes:(NSMutableArray*)streamTypes;
+ (NSString*) serializeStreamTypeWithStreamType:(FMIceLinkStreamType)streamType;
+ (NSString*) serializeStreamType:(FMIceLinkStreamType)streamType;
+ (NSString*) serializeStreamWithStream:(FMIceLinkStream*)stream;
+ (NSString*) serializeStream:(FMIceLinkStream*)stream;

@end


@class FMIceLinkSTUNMessage;
@class FMCallback;
@class FMIceLinkSTUNConnectRequest;
@class FMIceLinkServerEventArgs;

#pragma clang diagnostic ignored "-Wshorten-64-to-32"
#pragma clang diagnostic ignored "-Wint-to-pointer-cast"

@interface FMIceLinkTURNTcpConnectState : NSObject 

- (FMCallback*) callback;
- (id) init;
- (FMIceLinkSTUNConnectRequest*) request;
- (FMIceLinkSTUNMessage*) response;
- (FMIceLinkServerEventArgs*) serverArgs;
- (void) setCallback:(FMCallback*)value;
- (void) setCallbackBlock:(void (^) (FMIceLinkSTUNMessage*))valueBlock;
- (void) setRequest:(FMIceLinkSTUNConnectRequest*)value;
- (void) setResponse:(FMIceLinkSTUNMessage*)value;
- (void) setServerArgs:(FMIceLinkServerEventArgs*)value;
+ (FMIceLinkTURNTcpConnectState*) turnTcpConnectState;

@end


@class FMIceLinkSTUNMessage;
@class FMIceLinkTURNTcpAllocation;
@class FMIceLinkTransportAddress;
@class FMCallback;
@class FMByteCollection;
@class FMTimeoutTimer;
@class FMIceLinkServer;
@class FMTcpSocket;
@class FMTcpReceiveArgs;
@class FMIceLinkVirtualTcpSocket;

#pragma clang diagnostic ignored "-Wshorten-64-to-32"
#pragma clang diagnostic ignored "-Wint-to-pointer-cast"

@interface FMIceLinkTURNTcpConnection : FMDynamic 

- (FMIceLinkTransportAddress*) clientAddress;
- (long long) connectionId;
- (id) initWithServer:(FMIceLinkServer*)server socket:(FMTcpSocket*)socket virtualSocket:(FMIceLinkVirtualTcpSocket*)virtualSocket;
- (bool) isClosed;
- (FMIceLinkTransportAddress*) peerAddress;
- (FMIceLinkServer*) server;
- (FMIceLinkTransportAddress*) serverAddress;
- (FMTcpSocket*) socket;
- (void) startListening;
+ (FMIceLinkTURNTcpConnection*) turnTcpConnectionWithServer:(FMIceLinkServer*)server socket:(FMTcpSocket*)socket virtualSocket:(FMIceLinkVirtualTcpSocket*)virtualSocket;
- (FMIceLinkTURNTcpConnectionType) type;
- (void) updateWithClientDataCallbackWithClientDataCallback:(FMCallback*)clientDataCallback;
- (void) updateWithClientDataCallback:(FMCallback*)clientDataCallback;
- (bool) updateWithClientDataConnectionWithClientDataConnection:(FMIceLinkTURNTcpConnection*)clientDataConnection;
- (bool) updateWithClientDataConnection:(FMIceLinkTURNTcpConnection*)clientDataConnection;
- (FMIceLinkVirtualTcpSocket*) virtualSocket;

@end


@class FMIceLinkServerEventArgs;
@class FMIceLinkRelayAuthenticateArgs;
@class FMIceLinkRelayAuthenticateResult;
@class NSMutableDictionaryFMExtensions;
@class NSStringFMExtensions;
@class FMTimeoutTimer;
@class FMCallback;
@class FMTcpAcceptArgs;
@class NSMutableArrayFMExtensions;
@class FMUdpReceiveArgs;
@class FMIceLinkVirtualAdapter;
@class FMIceLinkTURNTcpConnection;
@class FMIceLinkSTUNMessage;
@class FMIceLinkTransportAddress;
@class NSExceptionFMExtensions;
@class FMIceLinkSTUNAllocateResponse;
@class FMIceLinkSTUNAllocateRequest;
@class FMUdpSocket;
@class FMIceLinkVirtualUdpSocket;
@class FMIceLinkTURNAllocation;
@class FMIceLinkSTUNChannelBindResponse;
@class FMIceLinkSTUNChannelBindRequest;
@class FMIceLinkSTUNCreatePermissionResponse;
@class FMIceLinkSTUNCreatePermissionRequest;
@class FMIceLinkSTUNRefreshResponse;
@class FMIceLinkSTUNRefreshRequest;

/// <summary>
/// An IceLink server, capable of responding to STUN
/// requests and managing a TURN relay.
/// </summary>
#pragma clang diagnostic ignored "-Wshorten-64-to-32"
#pragma clang diagnostic ignored "-Wint-to-pointer-cast"

@interface FMIceLinkServer : FMDynamic 

/// <summary>
/// Adds a handler that is raised when a request has been processed by the server.
/// </summary>
- (FMCallback*) addRequestProcessedWithValue:(FMCallback*)value;
/// <summary>
/// Adds a handler that is raised when a request has been processed by the server.
/// </summary>
- (FMCallback*) addRequestProcessed:(FMCallback*)value;
/// <summary>
/// Adds a handler that is raised when a request has been processed by the server.
/// </summary>
- (FMCallback*) addRequestProcessedWithValueBlock:(void (^) (FMIceLinkServerEventArgs*))valueBlock;
/// <summary>
/// Adds a handler that is raised when a request has been processed by the server.
/// </summary>
- (FMCallback*) addRequestProcessedBlock:(void (^) (FMIceLinkServerEventArgs*))valueBlock;
/// <summary>
/// Adds a handler that is raised when a request is received by the server.
/// </summary>
- (FMCallback*) addRequestReceivedWithValue:(FMCallback*)value;
/// <summary>
/// Adds a handler that is raised when a request is received by the server.
/// </summary>
- (FMCallback*) addRequestReceived:(FMCallback*)value;
/// <summary>
/// Adds a handler that is raised when a request is received by the server.
/// </summary>
- (FMCallback*) addRequestReceivedWithValueBlock:(void (^) (FMIceLinkServerEventArgs*))valueBlock;
/// <summary>
/// Adds a handler that is raised when a request is received by the server.
/// </summary>
- (FMCallback*) addRequestReceivedBlock:(void (^) (FMIceLinkServerEventArgs*))valueBlock;
- (void) addTcpConnectionWithConnection:(FMIceLinkTURNTcpConnection*)connection;
- (void) addTcpConnection:(FMIceLinkTURNTcpConnection*)connection;
- (void) authenticateWithRequest:(FMIceLinkSTUNMessage*)request remoteAddress:(FMIceLinkTransportAddress*)remoteAddress operation:(FMIceLinkRelayOperation)operation longTermKeyBytes:(NSMutableData**)longTermKeyBytes;
- (bool) checkNonceWithRequest:(FMIceLinkSTUNMessage*)request missingNonce:(bool*)missingNonce;
- (void) checkNonceWithRequest:(FMIceLinkSTUNMessage*)request remoteAddress:(FMIceLinkTransportAddress*)remoteAddress operation:(FMIceLinkRelayOperation)operation;
- (FMIceLinkSTUNMessage*) createErrorResponseWithRequest:(FMIceLinkSTUNMessage*)request remoteAddress:(FMIceLinkTransportAddress*)remoteAddress error:(NSString*)error;
- (FMIceLinkSTUNMessage*) createExceptionResponseWithRequest:(FMIceLinkSTUNMessage*)request remoteAddress:(FMIceLinkTransportAddress*)remoteAddress ex:(NSException*)ex;
/// <summary>
/// Gets the default lifetime for new allocations
/// in seconds. Defaults to 600 (10 minutes).
/// </summary>
- (int) defaultAllocateLifetime;
/// <summary>
/// Gets the default lifetime for refreshed allocations
/// in seconds. Defaults to 600 (10 minutes).
/// </summary>
- (int) defaultRefreshLifetime;
/// <summary>
/// Disables the TURN relay functionality of the server.
/// </summary>
- (void) disableRelay;
/// <summary>
/// Enables the TURN relay functionality of the server, allowing
/// the processing of TURN requests and socket allocation.
/// </summary>
/// <param name="relayAuthenticate">The callback function that will authenticate TURN allocation requests.</param>
- (void) enableRelayWithRelayAuthenticate:(FMCallback*)relayAuthenticate;
/// <summary>
/// Enables the TURN relay functionality of the server, allowing
/// the processing of TURN requests and socket allocation.
/// </summary>
/// <param name="relayAuthenticate">The callback function that will authenticate TURN allocation requests.</param>
- (void) enableRelayWithAuthenticate:(FMCallback*)relayAuthenticate;
/// <summary>
/// Enables the TURN relay functionality of the server, allowing
/// the processing of TURN requests and socket allocation.
/// </summary>
/// <param name="relayAuthenticate">The callback function that will authenticate TURN allocation requests.</param>
- (void) enableRelayWithRelayAuthenticateBlock:(FMIceLinkRelayAuthenticateResult* (^) (FMIceLinkRelayAuthenticateArgs*))relayAuthenticateBlock;
/// <summary>
/// Enables the TURN relay functionality of the server, allowing
/// the processing of TURN requests and socket allocation.
/// </summary>
/// <param name="relayAuthenticate">The callback function that will authenticate TURN allocation requests.</param>
- (void) enableRelayWithAuthenticateBlock:(FMIceLinkRelayAuthenticateResult* (^) (FMIceLinkRelayAuthenticateArgs*))relayAuthenticateBlock;
/// <summary>
/// Gets whether the server should force the
/// default lifetime for new allocations (true) or allow
/// clients to request their own lifetime within the
/// min/max range (false). Defaults to false.
/// </summary>
- (bool) forceDefaultAllocateLifetime;
/// <summary>
/// Gets whether the server should force the
/// default lifetime for refreshed allocations (true) or allow
/// clients to request their own lifetime within the
/// min/max range (false). Defaults to false.
/// </summary>
- (bool) forceDefaultRefreshLifetime;
/// <summary>
/// Initializes a new instance of the <see cref="FMIceLinkServer" /> class.
/// </summary>
- (id) init;
/// <summary>
/// Initializes a new instance of the <see cref="FMIceLinkServer" /> class.
/// </summary>
/// <param name="tcpEnabled">Whether to enable TCP as an alternative to UDP.</param>
- (id) initWithTcpEnabled:(bool)tcpEnabled;
/// <summary>
/// Gets the local IP address.
/// </summary>
- (NSString*) localIPAddress;
/// <summary>
/// Gets the local IP addresses.
/// </summary>
- (NSMutableArray*) localIPAddresses;
/// <summary>
/// Gets the local port.
/// </summary>
- (int) localPort;
/// <summary>
/// Gets the local ports.
/// </summary>
- (NSMutableArray*) localPorts;
/// <summary>
/// Gets the maximum lifetime for new
/// allocations in seconds. Defaults to 3600
/// (1 hour).
/// </summary>
- (int) maxAllocateLifetime;
/// <summary>
/// Gets the maximum lifetime for refreshed
/// allocations in seconds. Defaults to 3600
/// (1 hour).
/// </summary>
- (int) maxRefreshLifetime;
/// <summary>
/// Gets the minimum lifetime for new allocations
/// in seconds. Equal to 600 (10 minutes).
/// </summary>
- (int) minAllocateLifetime;
/// <summary>
/// Gets the minimum lifetime for refreshed allocations
/// in seconds. Equal to 600 (10 minutes).
/// </summary>
- (int) minRefreshLifetime;
- (FMIceLinkSTUNAllocateResponse*) processAllocateRequestWithRequest:(FMIceLinkSTUNAllocateRequest*)request protocolType:(FMIceLinkProtocolType)protocolType localAddress:(FMIceLinkTransportAddress*)localAddress udpServerSocket:(FMUdpSocket*)udpServerSocket virtualUdpServerSocket:(FMIceLinkVirtualUdpSocket*)virtualUdpServerSocket remoteAddress:(FMIceLinkTransportAddress*)remoteAddress longTermKeyBytes:(NSMutableData**)longTermKeyBytes;
- (FMIceLinkSTUNAllocateResponse*) processAllocateRequest:(FMIceLinkSTUNAllocateRequest*)request protocolType:(FMIceLinkProtocolType)protocolType localAddress:(FMIceLinkTransportAddress*)localAddress udpServerSocket:(FMUdpSocket*)udpServerSocket virtualUdpServerSocket:(FMIceLinkVirtualUdpSocket*)virtualUdpServerSocket remoteAddress:(FMIceLinkTransportAddress*)remoteAddress longTermKeyBytes:(NSMutableData**)longTermKeyBytes;
- (FMIceLinkSTUNAllocateResponse*) processAllocateRequestWithRequest:(FMIceLinkSTUNAllocateRequest*)request protocolType:(FMIceLinkProtocolType)protocolType localAddress:(FMIceLinkTransportAddress*)localAddress udpServerSocket:(FMUdpSocket*)udpServerSocket virtualUdpServerSocket:(FMIceLinkVirtualUdpSocket*)virtualUdpServerSocket remoteAddress:(FMIceLinkTransportAddress*)remoteAddress longTermKeyBytes:(NSMutableData**)longTermKeyBytes allocation:(FMIceLinkTURNAllocation**)allocation;
- (FMIceLinkSTUNAllocateResponse*) processAllocateRequest:(FMIceLinkSTUNAllocateRequest*)request protocolType:(FMIceLinkProtocolType)protocolType localAddress:(FMIceLinkTransportAddress*)localAddress udpServerSocket:(FMUdpSocket*)udpServerSocket virtualUdpServerSocket:(FMIceLinkVirtualUdpSocket*)virtualUdpServerSocket remoteAddress:(FMIceLinkTransportAddress*)remoteAddress longTermKeyBytes:(NSMutableData**)longTermKeyBytes allocation:(FMIceLinkTURNAllocation**)allocation;
- (FMIceLinkSTUNChannelBindResponse*) processChannelBindRequestWithRequest:(FMIceLinkSTUNChannelBindRequest*)request remoteAddress:(FMIceLinkTransportAddress*)remoteAddress longTermKeyBytes:(NSMutableData**)longTermKeyBytes;
- (FMIceLinkSTUNChannelBindResponse*) processChannelBindRequest:(FMIceLinkSTUNChannelBindRequest*)request remoteAddress:(FMIceLinkTransportAddress*)remoteAddress longTermKeyBytes:(NSMutableData**)longTermKeyBytes;
- (FMIceLinkSTUNCreatePermissionResponse*) processCreatePermissionRequestWithRequest:(FMIceLinkSTUNCreatePermissionRequest*)request remoteAddress:(FMIceLinkTransportAddress*)remoteAddress longTermKeyBytes:(NSMutableData**)longTermKeyBytes;
- (FMIceLinkSTUNCreatePermissionResponse*) processCreatePermissionRequest:(FMIceLinkSTUNCreatePermissionRequest*)request remoteAddress:(FMIceLinkTransportAddress*)remoteAddress longTermKeyBytes:(NSMutableData**)longTermKeyBytes;
- (FMIceLinkSTUNRefreshResponse*) processRefreshRequestWithRequest:(FMIceLinkSTUNRefreshRequest*)request remoteAddress:(FMIceLinkTransportAddress*)remoteAddress longTermKeyBytes:(NSMutableData**)longTermKeyBytes;
- (FMIceLinkSTUNRefreshResponse*) processRefreshRequest:(FMIceLinkSTUNRefreshRequest*)request remoteAddress:(FMIceLinkTransportAddress*)remoteAddress longTermKeyBytes:(NSMutableData**)longTermKeyBytes;
/// <summary>
/// Gets the public IP address of the server, if known.
/// This is to assist in cases where the server can only bind
/// to a private IP address, but a 1:1 NAT is in place. If
/// set, this address will be used in client responses instead
/// of the local private IP address.
/// </summary>
- (NSString*) publicIPAddress;
- (void) raiseAfterEventWithEventType:(FMIceLinkEventType)eventType protocolType:(FMIceLinkProtocolType)protocolType e:(FMIceLinkServerEventArgs*)e;
- (void) raiseAfterEventWithType:(FMIceLinkEventType)eventType protocolType:(FMIceLinkProtocolType)protocolType e:(FMIceLinkServerEventArgs*)e;
- (bool) raiseBeforeEventWithEventType:(FMIceLinkEventType)eventType protocolType:(FMIceLinkProtocolType)protocolType e:(FMIceLinkServerEventArgs*)e;
- (bool) raiseBeforeEventWithType:(FMIceLinkEventType)eventType protocolType:(FMIceLinkProtocolType)protocolType e:(FMIceLinkServerEventArgs*)e;
/// <summary>
/// Gets the realm used for this server.
/// </summary>
- (NSString*) realm;
/// <summary>
/// Gets the number of allocations on the TURN relay.
/// </summary>
- (int) relayAllocationCount;
/// <summary>
/// Gets whether the TURN relay is enabled.
/// </summary>
- (bool) relayEnabled;
/// <summary>
/// Gets the maximum allowed port to be
/// used when allocating sockets on the relay
/// The default value is 65535.
/// </summary>
- (int) relayPortMax;
/// <summary>
/// Gets the minimum allowed port to be
/// used when allocating sockets on the relay.
/// The default value is 49152, which is the
/// lowest port that cannot be registered with
/// IANA.
/// </summary>
- (int) relayPortMin;
/// <summary>
/// Removes a handler that is raised when a request has been processed by the server.
/// </summary>
- (void) removeRequestProcessedWithValue:(FMCallback*)value;
/// <summary>
/// Removes a handler that is raised when a request has been processed by the server.
/// </summary>
- (void) removeRequestProcessed:(FMCallback*)value;
/// <summary>
/// Removes a handler that is raised when a request is received by the server.
/// </summary>
- (void) removeRequestReceivedWithValue:(FMCallback*)value;
/// <summary>
/// Removes a handler that is raised when a request is received by the server.
/// </summary>
- (void) removeRequestReceived:(FMCallback*)value;
- (void) removeTcpConnectionWithConnectionId:(long long)connectionId;
- (void) removeTcpConnectionWithId:(long long)connectionId;
/// <summary>
/// Initializes a new instance of the <see cref="FMIceLinkServer" /> class.
/// </summary>
+ (FMIceLinkServer*) server;
/// <summary>
/// Initializes a new instance of the <see cref="FMIceLinkServer" /> class.
/// </summary>
/// <param name="tcpEnabled">Whether to enable TCP as an alternative to UDP.</param>
+ (FMIceLinkServer*) serverWithTcpEnabled:(bool)tcpEnabled;
/// <summary>
/// Sets the default lifetime for new allocations
/// in seconds. Defaults to 600 (10 minutes).
/// </summary>
- (void) setDefaultAllocateLifetime:(int)value;
/// <summary>
/// Sets the default lifetime for refreshed allocations
/// in seconds. Defaults to 600 (10 minutes).
/// </summary>
- (void) setDefaultRefreshLifetime:(int)value;
/// <summary>
/// Sets whether the server should force the
/// default lifetime for new allocations (true) or allow
/// clients to request their own lifetime within the
/// min/max range (false). Defaults to false.
/// </summary>
- (void) setForceDefaultAllocateLifetime:(bool)value;
/// <summary>
/// Sets whether the server should force the
/// default lifetime for refreshed allocations (true) or allow
/// clients to request their own lifetime within the
/// min/max range (false). Defaults to false.
/// </summary>
- (void) setForceDefaultRefreshLifetime:(bool)value;
/// <summary>
/// Sets the maximum lifetime for new
/// allocations in seconds. Defaults to 3600
/// (1 hour).
/// </summary>
- (void) setMaxAllocateLifetime:(int)value;
/// <summary>
/// Sets the maximum lifetime for refreshed
/// allocations in seconds. Defaults to 3600
/// (1 hour).
/// </summary>
- (void) setMaxRefreshLifetime:(int)value;
/// <summary>
/// Sets the public IP address of the server, if known.
/// This is to assist in cases where the server can only bind
/// to a private IP address, but a 1:1 NAT is in place. If
/// set, this address will be used in client responses instead
/// of the local private IP address.
/// </summary>
- (void) setPublicIPAddress:(NSString*)value;
/// <summary>
/// Sets the realm used for this server.
/// </summary>
- (void) setRealm:(NSString*)value;
/// <summary>
/// Sets the maximum allowed port to be
/// used when allocating sockets on the relay
/// The default value is 65535.
/// </summary>
- (void) setRelayPortMax:(int)value;
/// <summary>
/// Sets the minimum allowed port to be
/// used when allocating sockets on the relay.
/// The default value is 49152, which is the
/// lowest port that cannot be registered with
/// IANA.
/// </summary>
- (void) setRelayPortMin:(int)value;
/// <summary>
/// Sets whether the server should enforce
/// stale-nonce security by sending a 438 Stale Nonce
/// in response to allocate requests with a stale
/// or non-existent nonce.
/// </summary>
- (void) setStaleNonceSecurity:(bool)value;
/// <summary>
/// Sets the virtual adapter to use
/// instead of the local device adapter.
/// </summary>
- (void) setVirtualAdapter:(FMIceLinkVirtualAdapter*)value;
/// <summary>
/// Gets whether the server should enforce
/// stale-nonce security by sending a 438 Stale Nonce
/// in response to allocate requests with a stale
/// or non-existent nonce.
/// </summary>
- (bool) staleNonceSecurity;
/// <summary>
/// Starts the server using all available IP addresses
/// and the default port (3478).
/// </summary>
- (void) start;
/// <summary>
/// Starts the server using the specified IP address
/// and the default port (3478).
/// </summary>
/// <param name="ipAddress">The local IP address.</param>
- (void) startWithIPAddress:(NSString*)ipAddress;
/// <summary>
/// Starts the server using the specified IP address
/// and the specified port.
/// </summary>
/// <param name="ipAddress">The local IP address.</param>
/// <param name="port">The port.</param>
- (void) startWithIPAddress:(NSString*)ipAddress port:(int)port;
/// <summary>
/// Starts the server using the specified IP addresses
/// and the default port (3478).
/// </summary>
/// <param name="ipAddresses">The local IP addresses.</param>
- (void) startWithIPAddresses:(NSMutableArray*)ipAddresses;
/// <summary>
/// Starts the server using the specified IP addresses
/// and the specified port.
/// </summary>
/// <param name="ipAddresses">The local IP addresses.</param>
/// <param name="port">The port.</param>
- (void) startWithIPAddresses:(NSMutableArray*)ipAddresses port:(int)port;
/// <summary>
/// Starts the server using all available IP addresses
/// and the specified port.
/// </summary>
/// <param name="port">The port.</param>
- (void) startWithPort:(int)port;
/// <summary>
/// Stops the server.
/// </summary>
- (void) stop;
/// <summary>
/// Gets a value indicating whether TCP support is enabled.
/// </summary>
- (bool) tcpEnabled;
- (bool) tryAuthenticateWithRequest:(FMIceLinkSTUNMessage*)request operation:(FMIceLinkRelayOperation)operation missingCredentials:(bool*)missingCredentials longTermKeyBytes:(NSMutableData**)longTermKeyBytes;
- (bool) tryGetTcpConnectionWithConnectionId:(long long)connectionId connection:(FMIceLinkTURNTcpConnection**)connection;
- (bool) tryGetTcpConnectionWithId:(long long)connectionId connection:(FMIceLinkTURNTcpConnection**)connection;
/// <summary>
/// Gets the virtual adapter to use
/// instead of the local device adapter.
/// </summary>
- (FMIceLinkVirtualAdapter*) virtualAdapter;

@end


@class FMIceLinkCheckServerSuccessArgs;
@class FMIceLinkCheckServerFailureArgs;
@class FMCallback;
@class NSStringFMExtensions;

/// <summary>
/// Arguments for checking a server's accessibility.
/// </summary>
#pragma clang diagnostic ignored "-Wshorten-64-to-32"
#pragma clang diagnostic ignored "-Wint-to-pointer-cast"

@interface FMIceLinkCheckServerArgs : FMDynamic 

/// <summary>
/// Initializes a new instance of the <see cref="FMIceLinkCheckServerArgs" /> class.
/// </summary>
/// <param name="serverIPAddress">The server IP address.</param>
/// <param name="serverPort">The server port.</param>
+ (FMIceLinkCheckServerArgs*) checkServerArgsWithServerIPAddress:(NSString*)serverIPAddress serverPort:(int)serverPort;
/// <summary>
/// Initializes a new instance of the <see cref="FMIceLinkCheckServerArgs" /> class.
/// </summary>
/// <param name="serverIPAddress">The server IP address.</param>
/// <param name="serverPort">The server port.</param>
- (id) initWithServerIPAddress:(NSString*)serverIPAddress serverPort:(int)serverPort;
/// <summary>
/// Gets whether the server IP address uses IPv6.
/// </summary>
- (bool) ipv6;
/// <summary>
/// Gets the callback to invoke on failure.
/// </summary>
- (FMCallback*) onFailure;
/// <summary>
/// Gets the callback to invoke on success.
/// </summary>
- (FMCallback*) onSuccess;
/// <summary>
/// Gets the relay password.
/// </summary>
- (NSString*) relayPassword;
/// <summary>
/// Gets the relay realm.
/// </summary>
- (NSString*) relayRealm;
/// <summary>
/// Gets the relay username.
/// </summary>
- (NSString*) relayUsername;
/// <summary>
/// Gets the server IP address.
/// </summary>
- (NSString*) serverIPAddress;
/// <summary>
/// Gets the server port.
/// </summary>
- (int) serverPort;
/// <summary>
/// Sets the callback to invoke on failure.
/// </summary>
- (void) setOnFailure:(FMCallback*)value;
/// <summary>
/// Sets the callback to invoke on failure.
/// </summary>
- (void) setOnFailureBlock:(void (^) (FMIceLinkCheckServerFailureArgs*))valueBlock;
/// <summary>
/// Sets the callback to invoke on success.
/// </summary>
- (void) setOnSuccess:(FMCallback*)value;
/// <summary>
/// Sets the callback to invoke on success.
/// </summary>
- (void) setOnSuccessBlock:(void (^) (FMIceLinkCheckServerSuccessArgs*))valueBlock;
/// <summary>
/// Sets the relay password.
/// </summary>
- (void) setRelayPassword:(NSString*)value;
/// <summary>
/// Sets the relay realm.
/// </summary>
- (void) setRelayRealm:(NSString*)value;
/// <summary>
/// Sets the relay username.
/// </summary>
- (void) setRelayUsername:(NSString*)value;
/// <summary>
/// Sets the server IP address.
/// </summary>
- (void) setServerIPAddress:(NSString*)value;
/// <summary>
/// Sets the server port.
/// </summary>
- (void) setServerPort:(int)value;
/// <summary>
/// Sets the timeout period for the check.
/// Defaults to 5000ms.
/// </summary>
- (void) setTimeout:(int)value;
/// <summary>
/// Gets the timeout period for the check.
/// Defaults to 5000ms.
/// </summary>
- (int) timeout;

@end


@class NSStringFMExtensions;

/// <summary>
/// Arguments for the server-check success callback.
/// </summary>
#pragma clang diagnostic ignored "-Wshorten-64-to-32"
#pragma clang diagnostic ignored "-Wint-to-pointer-cast"

@interface FMIceLinkCheckServerSuccessArgs : FMDynamic 

+ (FMIceLinkCheckServerSuccessArgs*) checkServerSuccessArgs;
- (id) init;
/// <summary>
/// Gets the current device's public IP address
/// as returned by the server.
/// </summary>
- (NSString*) publicIPAddress;
/// <summary>
/// Gets the current device's public port as
/// returned by the server.
/// </summary>
- (int) publicPort;
/// <summary>
/// Gets the original relay password.
/// </summary>
- (NSString*) relayPassword;
/// <summary>
/// Gets the original relay realm.
/// </summary>
- (NSString*) relayRealm;
/// <summary>
/// Gets the original relay username.
/// </summary>
- (NSString*) relayUsername;
/// <summary>
/// Gets the original server IP address.
/// </summary>
- (NSString*) serverIPAddress;
/// <summary>
/// Gets the original server port.
/// </summary>
- (int) serverPort;
- (void) setPublicIPAddress:(NSString*)value;
- (void) setPublicPort:(int)value;
- (void) setRelayPassword:(NSString*)value;
- (void) setRelayRealm:(NSString*)value;
- (void) setRelayUsername:(NSString*)value;
- (void) setServerIPAddress:(NSString*)value;
- (void) setServerPort:(int)value;
- (void) setTimeout:(int)value;
/// <summary>
/// Gets the original timeout period for the check.
/// </summary>
- (int) timeout;

@end


@class NSExceptionFMExtensions;
@class NSStringFMExtensions;

/// <summary>
/// Arguments for the server-check failure callback.
/// </summary>
#pragma clang diagnostic ignored "-Wshorten-64-to-32"
#pragma clang diagnostic ignored "-Wint-to-pointer-cast"

@interface FMIceLinkCheckServerFailureArgs : FMDynamic 

+ (FMIceLinkCheckServerFailureArgs*) checkServerFailureArgs;
/// <summary>
/// Gets the exception that occurred.
/// </summary>
- (NSException*) exception;
- (id) init;
/// <summary>
/// Gets the original relay password.
/// </summary>
- (NSString*) relayPassword;
/// <summary>
/// Gets the original relay realm.
/// </summary>
- (NSString*) relayRealm;
/// <summary>
/// Gets the original relay username.
/// </summary>
- (NSString*) relayUsername;
/// <summary>
/// Gets the original server IP address.
/// </summary>
- (NSString*) serverIPAddress;
/// <summary>
/// Gets the original server port.
/// </summary>
- (int) serverPort;
- (void) setException:(NSException*)value;
- (void) setRelayPassword:(NSString*)value;
- (void) setRelayRealm:(NSString*)value;
- (void) setRelayUsername:(NSString*)value;
- (void) setServerIPAddress:(NSString*)value;
- (void) setServerPort:(int)value;
- (void) setTimeout:(int)value;
/// <summary>
/// Gets the original timeout period for the check.
/// </summary>
- (int) timeout;

@end


@class FMIceLinkCheckServerArgs;

/// <summary>
/// Utility class for checking a server's accessibility.
/// </summary>
#pragma clang diagnostic ignored "-Wshorten-64-to-32"
#pragma clang diagnostic ignored "-Wint-to-pointer-cast"

@interface FMIceLinkServerCheck : NSObject 

/// <summary>
/// Checks the server for STUN/TURN accessibility.
/// </summary>
- (void) check;
/// <summary>
/// Initializes a new instance of the <see cref="FMIceLinkServerCheck" /> class.
/// </summary>
/// <param name="checkArgs">The check arguments.</param>
- (id) initWithCheckArgs:(FMIceLinkCheckServerArgs*)checkArgs;
/// <summary>
/// Initializes a new instance of the <see cref="FMIceLinkServerCheck" /> class.
/// </summary>
/// <param name="checkArgs">The check arguments.</param>
+ (FMIceLinkServerCheck*) serverCheckWithCheckArgs:(FMIceLinkCheckServerArgs*)checkArgs;
/// <summary>
/// Initializes a new instance of the <see cref="FMIceLinkServerCheck" /> class.
/// </summary>
/// <param name="checkArgs">The check arguments.</param>
+ (FMIceLinkServerCheck*) serverCheckWithArgs:(FMIceLinkCheckServerArgs*)checkArgs;

@end


@class NSMutableArrayFMExtensions;
@class FMCallback;

/// <summary>
/// Encapsulates useful sorting utilities.
/// </summary>
#pragma clang diagnostic ignored "-Wshorten-64-to-32"
#pragma clang diagnostic ignored "-Wint-to-pointer-cast"

@interface FMIceLinkSort : NSObject 

- (id) init;
/// <summary>
/// Sorts an array using the in-place quick-sort algorithm.
/// </summary>
/// <typeparam name="T">The type of elements in the array.</typeparam>
/// <param name="array">The array of elements.</param>
/// <param name="comparer">The function used to compare elements in the array -
/// should return less than 0 if item 1 is less than item 2 (item 1 should appear
/// before item 2), 0 if the items are equal, or more than 0 is item 1 is greater
/// than item 2 (item 1 should appear after item 2).</param>
+ (void) quickSortWithArray:(NSMutableArray*)array comparer:(FMCallback*)comparer;
+ (FMIceLinkSort*) sort;

@end


@class NSMutableDataFMExtensions;
@class FMIceLinkAESCounter;
@class NSMutableArrayFMExtensions;
@class FMIceLinkRTPPacket;

/// <summary>
/// Implements AES encryption for RTP/RTCP data streams.
/// </summary>
#pragma clang diagnostic ignored "-Wshorten-64-to-32"
#pragma clang diagnostic ignored "-Wint-to-pointer-cast"

@interface FMIceLinkEncryptor : NSObject 

/// <summary>
/// Clears the associated RTP and RTCP decryption and encryption instances.
/// </summary>
- (void) clear;
/// <summary>
/// Transforms an encrypted byte sequence into an array of unencrypted RTCP packets.
/// </summary>
/// <param name="encryptedBytes">The encrypted byte sequence.</param>
/// <returns>
/// The unencrypted RTCP packets.
/// </returns>
- (NSMutableArray*) decryptRTCPWithEncryptedBytes:(NSMutableData*)encryptedBytes;
/// <summary>
/// Transforms an encrypted byte sequence into an unencrypted RTP packet.
/// </summary>
/// <param name="encryptedBytes">The encrypted byte sequence.</param>
/// <returns>
/// The unencrypted RTP packet.
/// </returns>
- (FMIceLinkRTPPacket*) decryptRTPWithEncryptedBytes:(NSMutableData*)encryptedBytes;
/// <summary>
/// Gets the encryption mode.
/// </summary>
- (FMIceLinkEncryptionMode) encryptionMode;
/// <summary>
/// Initializes a new instance of the <see cref="FMIceLinkEncryptor" /> class.
/// </summary>
/// <param name="protocol">The protocol.</param>
/// <param name="encryptionMode">The encryption mode.</param>
/// <param name="localKey">The local key.</param>
/// <param name="localSalt">The local salt.</param>
/// <param name="remoteKey">The remote key.</param>
/// <param name="remoteSalt">The remote salt.</param>
+ (FMIceLinkEncryptor*) encryptorWithProtocol:(FMIceLinkStreamProtocol)protocol encryptionMode:(FMIceLinkEncryptionMode)encryptionMode localKey:(NSMutableData*)localKey localSalt:(NSMutableData*)localSalt remoteKey:(NSMutableData*)remoteKey remoteSalt:(NSMutableData*)remoteSalt;
/// <summary>
/// Transforms an array of unencrypted RTCP packets into an encrypted byte sequence.
/// </summary>
/// <param name="packets">The unencrypted RTCP packets.</param>
/// <returns>
/// The encrypted byte sequence.
/// </returns>
- (NSMutableData*) encryptRTCPWithPackets:(NSMutableArray*)packets;
/// <summary>
/// Transforms an unencrypted RTP packet into an encrypted byte sequence.
/// </summary>
/// <param name="packet">The unencrypted RTP packet.</param>
/// <returns>
/// The encrypted byte sequence.
/// </returns>
- (NSMutableData*) encryptRTPWithPacket:(FMIceLinkRTPPacket*)packet;
/// <summary>
/// Initializes a new instance of the <see cref="FMIceLinkEncryptor" /> class.
/// </summary>
/// <param name="protocol">The protocol.</param>
/// <param name="encryptionMode">The encryption mode.</param>
/// <param name="localKey">The local key.</param>
/// <param name="localSalt">The local salt.</param>
/// <param name="remoteKey">The remote key.</param>
/// <param name="remoteSalt">The remote salt.</param>
- (id) initWithProtocol:(FMIceLinkStreamProtocol)protocol encryptionMode:(FMIceLinkEncryptionMode)encryptionMode localKey:(NSMutableData*)localKey localSalt:(NSMutableData*)localSalt remoteKey:(NSMutableData*)remoteKey remoteSalt:(NSMutableData*)remoteSalt;
/// <summary>
/// Gets the local key.
/// </summary>
- (NSMutableData*) localKey;
/// <summary>
/// Gets the local salt.
/// </summary>
- (NSMutableData*) localSalt;
/// <summary>
/// Gets the remote key.
/// </summary>
- (NSMutableData*) remoteKey;
/// <summary>
/// Gets the remote salt.
/// </summary>
- (NSMutableData*) remoteSalt;
/// <summary>
/// Tests the SRTP implementation.
/// </summary>
+ (void) testSRTP;

@end


@class NSMutableArrayFMExtensions;
@class NSStringFMExtensions;
@class FMIceLinkStreamFormat;
@class FMIceLinkLink;
@class FMIceLinkRTPPacket;
@class FMIceLinkSCTPMessage;
@class FMIceLinkICEMediaStream;
@class FMIceLinkSDPMediaDescription;

/// <summary>
/// Describes an RTP stream.
/// </summary>
#pragma clang diagnostic ignored "-Wshorten-64-to-32"
#pragma clang diagnostic ignored "-Wint-to-pointer-cast"

@interface FMIceLinkStream : FMIceLinkBaseStream 

/// <summary>
/// Creates an RTP stream.
/// </summary>
/// <param name="type">The type.</param>
/// <param name="format">The format.</param>
/// <returns></returns>
+ (FMIceLinkStream*) createRtpStreamWithType:(FMIceLinkStreamType)type format:(FMIceLinkStreamFormat*)format;
/// <summary>
/// Creates an RTP stream.
/// </summary>
/// <param name="type">The type.</param>
/// <param name="format">The format.</param>
/// <param name="encryptionMode">The encryption mode.</param>
/// <returns></returns>
+ (FMIceLinkStream*) createRtpStreamWithType:(FMIceLinkStreamType)type format:(FMIceLinkStreamFormat*)format encryptionMode:(FMIceLinkEncryptionMode)encryptionMode;
/// <summary>
/// Creates an RTP stream.
/// </summary>
/// <param name="type">The type.</param>
/// <param name="format">The format.</param>
/// <param name="encryptionModes">The encryption modes.</param>
/// <returns></returns>
+ (FMIceLinkStream*) createRtpStreamWithType:(FMIceLinkStreamType)type format:(FMIceLinkStreamFormat*)format encryptionModes:(NSMutableArray*)encryptionModes;
/// <summary>
/// Creates an RTP stream.
/// </summary>
/// <param name="type">The type.</param>
/// <param name="formats">The formats.</param>
/// <returns></returns>
+ (FMIceLinkStream*) createRtpStreamWithType:(FMIceLinkStreamType)type formats:(NSMutableArray*)formats;
/// <summary>
/// Creates an RTP stream.
/// </summary>
/// <param name="type">The type.</param>
/// <param name="formats">The formats.</param>
/// <param name="encryptionMode">The encryption mode.</param>
/// <returns></returns>
+ (FMIceLinkStream*) createRtpStreamWithType:(FMIceLinkStreamType)type formats:(NSMutableArray*)formats encryptionMode:(FMIceLinkEncryptionMode)encryptionMode;
/// <summary>
/// Creates an RTP stream.
/// </summary>
/// <param name="type">The type.</param>
/// <param name="formats">The formats.</param>
/// <param name="encryptionModes">The encryption modes.</param>
/// <returns></returns>
+ (FMIceLinkStream*) createRtpStreamWithType:(FMIceLinkStreamType)type formats:(NSMutableArray*)formats encryptionModes:(NSMutableArray*)encryptionModes;
/// <summary>
/// Creates an SCTP stream.
/// </summary>
/// <returns></returns>
+ (FMIceLinkStream*) createSctpStream;
/// <summary>
/// Creates an SCTP stream.
/// </summary>
/// <param name="protocol">The protocol.</param>
/// <returns></returns>
+ (FMIceLinkStream*) createSctpStreamWithProtocol:(NSString*)protocol;
/// <summary>
/// Gets a value indicating whether the keep-alive thread should be disabled.
/// If set to <c>true</c>, the overhead of a background thread can be avoided, but media
/// must flow regularly to avoid dead stream detection on the remote side and/or NAT path
/// closure by network devices. Defaults to <c>false</c>.
/// </summary>
- (bool) disableKeepAliveThread;
- (void) doRaiseReceiveRTCPWithLink:(FMIceLinkLink*)link packets:(NSMutableArray*)packets streamIndex:(int)streamIndex mediaIndex:(int)mediaIndex negotiatedStream:(FMIceLinkStream*)negotiatedStream;
- (void) doRaiseReceiveRTPWithLink:(FMIceLinkLink*)link packet:(FMIceLinkRTPPacket*)packet streamIndex:(int)streamIndex mediaIndex:(int)mediaIndex negotiatedStream:(FMIceLinkStream*)negotiatedStream streamFormat:(FMIceLinkStreamFormat*)streamFormat;
- (void) doRaiseReceiveSCTPWithLink:(FMIceLinkLink*)link message:(FMIceLinkSCTPMessage*)message channelIndex:(int)channelIndex streamIndex:(int)streamIndex mediaIndex:(int)mediaIndex negotiatedStream:(FMIceLinkStream*)negotiatedStream;
/// <summary>
/// Gets the preferred encryption mode.
/// </summary>
- (FMIceLinkEncryptionMode) encryptionMode;
/// <summary>
/// Gets the encryption modes.
/// </summary>
- (NSMutableArray*) encryptionModes;
/// <summary>
/// Gets the encryption role for
/// the stream.
/// </summary>
- (FMIceLinkEncryptionRole) encryptionRole;
/// <summary>
/// Finds the first stream format with the given encoding name (case-insensitive).
/// </summary>
/// <param name="encodingName">The encoding name.</param>
/// <returns>The matching stream format, or <c>null</c>.</returns>
- (FMIceLinkStreamFormat*) findFormatWithEncodingName:(NSString*)encodingName;
/// <summary>
/// Finds the first stream format with the given encoding name (case-insensitive) and clock rate.
/// </summary>
/// <param name="encodingName">The encoding name.</param>
/// <param name="clockRate">The clock rate.</param>
/// <returns>The matching stream format, or <c>null</c>.</returns>
- (FMIceLinkStreamFormat*) findFormatWithEncodingName:(NSString*)encodingName clockRate:(int)clockRate;
/// <summary>
/// Finds the first stream format with the given encoding name (case-insensitive), clock rate, and encoding parameters (case-insensitive).
/// </summary>
/// <param name="encodingName">The encoding name.</param>
/// <param name="clockRate">The clock rate.</param>
/// <param name="encodingParameters">The encoding parameters.</param>
/// <returns>The matching stream format, or <c>null</c>.</returns>
- (FMIceLinkStreamFormat*) findFormatWithEncodingName:(NSString*)encodingName clockRate:(int)clockRate encodingParameters:(NSString*)encodingParameters;
/// <summary>
/// Gets the first stream format.
/// </summary>
- (FMIceLinkStreamFormat*) format;
/// <summary>
/// Gets the stream formats.
/// </summary>
- (NSMutableArray*) formats;
+ (FMIceLinkStream*) fromICEMediaStreamWithMediaStream:(FMIceLinkICEMediaStream*)mediaStream;
+ (FMIceLinkStream*) fromICEMediaStream:(FMIceLinkICEMediaStream*)mediaStream;
/// <summary>
/// Deserializes an array of instances from JSON.
/// </summary>
/// <param name="streamsJson">The JSON to deserialize.</param>
/// <returns>The deserialized streams.</returns>
+ (NSMutableArray*) fromJsonMultipleWithStreamsJson:(NSString*)streamsJson;
/// <summary>
/// Deserializes an instance from JSON.
/// </summary>
/// <param name="streamJson">The JSON to deserialize.</param>
/// <returns>The deserialized stream.</returns>
+ (FMIceLinkStream*) fromJsonWithStreamJson:(NSString*)streamJson;
- (id) initWithType:(FMIceLinkStreamType)type;
/// <summary>
/// Initializes a new instance of the <see cref="FMIceLinkStream" /> class.
/// </summary>
/// <param name="type">The stream type.</param>
/// <param name="format">The stream format.</param>
- (id) initWithType:(FMIceLinkStreamType)type format:(FMIceLinkStreamFormat*)format;
/// <summary>
/// Initializes a new instance of the <see cref="FMIceLinkStream" /> class.
/// </summary>
/// <param name="type">The stream type.</param>
/// <param name="format">The stream format.</param>
/// <param name="encryptionMode">The encryption mode.</param>
- (id) initWithType:(FMIceLinkStreamType)type format:(FMIceLinkStreamFormat*)format encryptionMode:(FMIceLinkEncryptionMode)encryptionMode;
/// <summary>
/// Initializes a new instance of the <see cref="FMIceLinkStream" /> class.
/// </summary>
/// <param name="type">The stream type.</param>
/// <param name="format">The stream format.</param>
/// <param name="encryptionModes">The encryption modes.</param>
- (id) initWithType:(FMIceLinkStreamType)type format:(FMIceLinkStreamFormat*)format encryptionModes:(NSMutableArray*)encryptionModes;
/// <summary>
/// Initializes a new instance of the <see cref="FMIceLinkStream" /> class.
/// </summary>
/// <param name="type">The stream type.</param>
/// <param name="formats">The stream formats.</param>
- (id) initWithType:(FMIceLinkStreamType)type formats:(NSMutableArray*)formats;
/// <summary>
/// Initializes a new instance of the <see cref="FMIceLinkStream" /> class.
/// </summary>
/// <param name="type">The stream type.</param>
/// <param name="formats">The stream formats.</param>
/// <param name="encryptionMode">The encryption mode.</param>
- (id) initWithType:(FMIceLinkStreamType)type formats:(NSMutableArray*)formats encryptionMode:(FMIceLinkEncryptionMode)encryptionMode;
/// <summary>
/// Initializes a new instance of the <see cref="FMIceLinkStream" /> class.
/// </summary>
/// <param name="type">The stream type.</param>
/// <param name="formats">The stream formats.</param>
/// <param name="encryptionModes">The encryption modes.</param>
- (id) initWithType:(FMIceLinkStreamType)type formats:(NSMutableArray*)formats encryptionModes:(NSMutableArray*)encryptionModes;
/// <summary>
/// Initializes a new instance of the <see cref="FMIceLinkStream" /> class.
/// </summary>
/// <param name="type">The stream type.</param>
/// <param name="protocol">The stream protocol.</param>
/// <param name="format">The stream format.</param>
- (id) initWithType:(FMIceLinkStreamType)type protocol:(FMIceLinkStreamProtocol)protocol format:(FMIceLinkStreamFormat*)format;
/// <summary>
/// Initializes a new instance of the <see cref="FMIceLinkStream" /> class.
/// </summary>
/// <param name="type">The stream type.</param>
/// <param name="protocol">The stream protocol.</param>
/// <param name="format">The stream format.</param>
/// <param name="encryptionMode">The encryption mode.</param>
- (id) initWithType:(FMIceLinkStreamType)type protocol:(FMIceLinkStreamProtocol)protocol format:(FMIceLinkStreamFormat*)format encryptionMode:(FMIceLinkEncryptionMode)encryptionMode;
/// <summary>
/// Initializes a new instance of the <see cref="FMIceLinkStream" /> class.
/// </summary>
/// <param name="type">The stream type.</param>
/// <param name="protocol">The stream protocol.</param>
/// <param name="format">The stream format.</param>
/// <param name="encryptionModes">The encryption modes.</param>
- (id) initWithType:(FMIceLinkStreamType)type protocol:(FMIceLinkStreamProtocol)protocol format:(FMIceLinkStreamFormat*)format encryptionModes:(NSMutableArray*)encryptionModes;
/// <summary>
/// Initializes a new instance of the <see cref="FMIceLinkStream" /> class.
/// </summary>
/// <param name="type">The stream type.</param>
/// <param name="protocol">The stream protocol.</param>
/// <param name="formats">The stream formats.</param>
- (id) initWithType:(FMIceLinkStreamType)type protocol:(FMIceLinkStreamProtocol)protocol formats:(NSMutableArray*)formats;
/// <summary>
/// Initializes a new instance of the <see cref="FMIceLinkStream" /> class.
/// </summary>
/// <param name="type">The stream type.</param>
/// <param name="protocol">The stream protocol.</param>
/// <param name="formats">The stream formats.</param>
/// <param name="encryptionMode">The encryption mode.</param>
- (id) initWithType:(FMIceLinkStreamType)type protocol:(FMIceLinkStreamProtocol)protocol formats:(NSMutableArray*)formats encryptionMode:(FMIceLinkEncryptionMode)encryptionMode;
/// <summary>
/// Initializes a new instance of the <see cref="FMIceLinkStream" /> class.
/// </summary>
/// <param name="type">The stream type.</param>
/// <param name="protocol">The stream protocol.</param>
/// <param name="formats">The stream formats.</param>
/// <param name="encryptionModes">The encryption modes.</param>
- (id) initWithType:(FMIceLinkStreamType)type protocol:(FMIceLinkStreamProtocol)protocol formats:(NSMutableArray*)formats encryptionModes:(NSMutableArray*)encryptionModes;
/// <summary>
/// Gets the maximum number of queued
/// packets allowed for this stream. Defaults to
/// -1 (no maximum).
/// </summary>
- (int) maxQueuedPackets;
/// <summary>
/// Gets the RTP mode.
/// </summary>
- (FMIceLinkRtpMode) rtpMode;
/// <summary>
/// Gets the number of SCTP channels to set up within
/// the SCTP association.
/// </summary>
- (int) sctpChannelCount;
/// <summary>
/// Gets the maximum allowed size for incoming
/// SCTP messages in bytes. Defaults to 65536.
/// </summary>
- (long long) sctpMaxMessageSize;
/// <summary>
/// Gets the SCTP port. Defaults to 5000.
/// </summary>
- (int) sctpPort;
/// <summary>
/// Gets the SCTP sub-protocol (association usage).
/// </summary>
- (NSString*) sctpProtocol;
/// <summary>
/// Gets the number of packets to retain for
/// potential retransmission. Defaults to 100.
/// </summary>
- (int) sendNackBufferLength;
/// <summary>
/// Sets a value indicating whether the keep-alive thread should be disabled.
/// If set to <c>true</c>, the overhead of a background thread can be avoided, but media
/// must flow regularly to avoid dead stream detection on the remote side and/or NAT path
/// closure by network devices. Defaults to <c>false</c>.
/// </summary>
- (void) setDisableKeepAliveThread:(bool)value;
/// <summary>
/// Sets the preferred encryption mode.
/// </summary>
- (void) setEncryptionMode:(FMIceLinkEncryptionMode)value;
/// <summary>
/// Sets the encryption modes.
/// </summary>
- (void) setEncryptionModes:(NSMutableArray*)value;
/// <summary>
/// Sets the encryption role for
/// the stream.
/// </summary>
- (void) setEncryptionRole:(FMIceLinkEncryptionRole)value;
/// <summary>
/// Sets the first stream format.
/// </summary>
- (void) setFormat:(FMIceLinkStreamFormat*)value;
/// <summary>
/// Sets the stream formats.
/// </summary>
- (void) setFormats:(NSMutableArray*)value;
/// <summary>
/// Sets the maximum number of queued
/// packets allowed for this stream. Defaults to
/// -1 (no maximum).
/// </summary>
- (void) setMaxQueuedPackets:(int)value;
/// <summary>
/// Sets the RTP mode.
/// </summary>
- (void) setRtpMode:(FMIceLinkRtpMode)value;
/// <summary>
/// Sets the number of SCTP channels to set up within
/// the SCTP association.
/// </summary>
- (void) setSctpChannelCount:(int)value;
/// <summary>
/// Sets the maximum allowed size for incoming
/// SCTP messages in bytes. Defaults to 65536.
/// </summary>
- (void) setSctpMaxMessageSize:(long long)value;
/// <summary>
/// Sets the SCTP port. Defaults to 5000.
/// </summary>
- (void) setSctpPort:(int)value;
/// <summary>
/// Sets the SCTP sub-protocol (association usage).
/// </summary>
- (void) setSctpProtocol:(NSString*)value;
/// <summary>
/// Sets the number of packets to retain for
/// potential retransmission. Defaults to 100.
/// </summary>
- (void) setSendNackBufferLength:(int)value;
/// <summary>
/// Sets the synchronization source.
/// </summary>
- (void) setSynchronizationSource:(long long)value;
+ (FMIceLinkStream*) streamWithType:(FMIceLinkStreamType)type;
/// <summary>
/// Initializes a new instance of the <see cref="FMIceLinkStream" /> class.
/// </summary>
/// <param name="type">The stream type.</param>
/// <param name="format">The stream format.</param>
+ (FMIceLinkStream*) streamWithType:(FMIceLinkStreamType)type format:(FMIceLinkStreamFormat*)format;
/// <summary>
/// Initializes a new instance of the <see cref="FMIceLinkStream" /> class.
/// </summary>
/// <param name="type">The stream type.</param>
/// <param name="format">The stream format.</param>
/// <param name="encryptionMode">The encryption mode.</param>
+ (FMIceLinkStream*) streamWithType:(FMIceLinkStreamType)type format:(FMIceLinkStreamFormat*)format encryptionMode:(FMIceLinkEncryptionMode)encryptionMode;
/// <summary>
/// Initializes a new instance of the <see cref="FMIceLinkStream" /> class.
/// </summary>
/// <param name="type">The stream type.</param>
/// <param name="format">The stream format.</param>
/// <param name="encryptionModes">The encryption modes.</param>
+ (FMIceLinkStream*) streamWithType:(FMIceLinkStreamType)type format:(FMIceLinkStreamFormat*)format encryptionModes:(NSMutableArray*)encryptionModes;
/// <summary>
/// Initializes a new instance of the <see cref="FMIceLinkStream" /> class.
/// </summary>
/// <param name="type">The stream type.</param>
/// <param name="formats">The stream formats.</param>
+ (FMIceLinkStream*) streamWithType:(FMIceLinkStreamType)type formats:(NSMutableArray*)formats;
/// <summary>
/// Initializes a new instance of the <see cref="FMIceLinkStream" /> class.
/// </summary>
/// <param name="type">The stream type.</param>
/// <param name="formats">The stream formats.</param>
/// <param name="encryptionMode">The encryption mode.</param>
+ (FMIceLinkStream*) streamWithType:(FMIceLinkStreamType)type formats:(NSMutableArray*)formats encryptionMode:(FMIceLinkEncryptionMode)encryptionMode;
/// <summary>
/// Initializes a new instance of the <see cref="FMIceLinkStream" /> class.
/// </summary>
/// <param name="type">The stream type.</param>
/// <param name="formats">The stream formats.</param>
/// <param name="encryptionModes">The encryption modes.</param>
+ (FMIceLinkStream*) streamWithType:(FMIceLinkStreamType)type formats:(NSMutableArray*)formats encryptionModes:(NSMutableArray*)encryptionModes;
/// <summary>
/// Initializes a new instance of the <see cref="FMIceLinkStream" /> class.
/// </summary>
/// <param name="type">The stream type.</param>
/// <param name="protocol">The stream protocol.</param>
/// <param name="format">The stream format.</param>
+ (FMIceLinkStream*) streamWithType:(FMIceLinkStreamType)type protocol:(FMIceLinkStreamProtocol)protocol format:(FMIceLinkStreamFormat*)format;
/// <summary>
/// Initializes a new instance of the <see cref="FMIceLinkStream" /> class.
/// </summary>
/// <param name="type">The stream type.</param>
/// <param name="protocol">The stream protocol.</param>
/// <param name="format">The stream format.</param>
/// <param name="encryptionMode">The encryption mode.</param>
+ (FMIceLinkStream*) streamWithType:(FMIceLinkStreamType)type protocol:(FMIceLinkStreamProtocol)protocol format:(FMIceLinkStreamFormat*)format encryptionMode:(FMIceLinkEncryptionMode)encryptionMode;
/// <summary>
/// Initializes a new instance of the <see cref="FMIceLinkStream" /> class.
/// </summary>
/// <param name="type">The stream type.</param>
/// <param name="protocol">The stream protocol.</param>
/// <param name="format">The stream format.</param>
/// <param name="encryptionModes">The encryption modes.</param>
+ (FMIceLinkStream*) streamWithType:(FMIceLinkStreamType)type protocol:(FMIceLinkStreamProtocol)protocol format:(FMIceLinkStreamFormat*)format encryptionModes:(NSMutableArray*)encryptionModes;
/// <summary>
/// Initializes a new instance of the <see cref="FMIceLinkStream" /> class.
/// </summary>
/// <param name="type">The stream type.</param>
/// <param name="protocol">The stream protocol.</param>
/// <param name="formats">The stream formats.</param>
+ (FMIceLinkStream*) streamWithType:(FMIceLinkStreamType)type protocol:(FMIceLinkStreamProtocol)protocol formats:(NSMutableArray*)formats;
/// <summary>
/// Initializes a new instance of the <see cref="FMIceLinkStream" /> class.
/// </summary>
/// <param name="type">The stream type.</param>
/// <param name="protocol">The stream protocol.</param>
/// <param name="formats">The stream formats.</param>
/// <param name="encryptionMode">The encryption mode.</param>
+ (FMIceLinkStream*) streamWithType:(FMIceLinkStreamType)type protocol:(FMIceLinkStreamProtocol)protocol formats:(NSMutableArray*)formats encryptionMode:(FMIceLinkEncryptionMode)encryptionMode;
/// <summary>
/// Initializes a new instance of the <see cref="FMIceLinkStream" /> class.
/// </summary>
/// <param name="type">The stream type.</param>
/// <param name="protocol">The stream protocol.</param>
/// <param name="formats">The stream formats.</param>
/// <param name="encryptionModes">The encryption modes.</param>
+ (FMIceLinkStream*) streamWithType:(FMIceLinkStreamType)type protocol:(FMIceLinkStreamProtocol)protocol formats:(NSMutableArray*)formats encryptionModes:(NSMutableArray*)encryptionModes;
/// <summary>
/// Gets the synchronization source.
/// </summary>
- (long long) synchronizationSource;
- (FMIceLinkICEMediaStream*) toICEMediaStreamWithServerAddresses:(NSMutableArray*)serverAddresses index:(int)index;
+ (FMIceLinkICEMediaStream*) toICEMediaStreamWithStream:(FMIceLinkStream*)stream dynamicPayloadType:(int)dynamicPayloadType dynamicPayloadTypeNext:(int*)dynamicPayloadTypeNext serverAddresses:(NSMutableArray*)serverAddresses index:(int)index;
+ (FMIceLinkICEMediaStream*) toICEMediaStream:(FMIceLinkStream*)stream dynamicPayloadType:(int)dynamicPayloadType dynamicPayloadTypeNext:(int*)dynamicPayloadTypeNext serverAddresses:(NSMutableArray*)serverAddresses index:(int)index;
/// <summary>
/// Serializes this instance to JSON.
/// </summary>
/// <returns></returns>
- (NSString*) toJson;
/// <summary>
/// Serializes an array of instances to JSON.
/// </summary>
/// <param name="streams">The streams to serialize.</param>
/// <returns>The serialized JSON.</returns>
+ (NSString*) toJsonMultipleWithStreams:(NSMutableArray*)streams;
/// <summary>
/// Serializes an instance to JSON.
/// </summary>
/// <param name="stream">The stream to serialize.</param>
/// <returns>The serialized JSON.</returns>
+ (NSString*) toJsonWithStream:(FMIceLinkStream*)stream;
- (FMIceLinkSDPMediaDescription*) toSDPMediaDescription;
+ (FMIceLinkSDPMediaDescription*) toSDPMediaDescriptionWithStreamDescription:(FMIceLinkStream*)streamDescription;

@end


@class NSStringFMExtensions;
@class NSMutableArrayFMExtensions;

/// <summary>
/// Describes a stream format.
/// </summary>
#pragma clang diagnostic ignored "-Wshorten-64-to-32"
#pragma clang diagnostic ignored "-Wint-to-pointer-cast"

@interface FMIceLinkStreamFormat : FMDynamic 

/// <summary>
/// Gets the format's clock rate.
/// </summary>
- (int) clockRate;
/// <summary>
/// Gets the format's encoding name.
/// </summary>
- (NSString*) encodingName;
/// <summary>
/// Gets the format's encoding parameters.
/// </summary>
- (NSString*) encodingParameters;
/// <summary>
/// Deserializes an array of instances from JSON.
/// </summary>
/// <param name="streamFormatsJson">The JSON to deserialize.</param>
/// <returns>The deserialized stream formats.</returns>
+ (NSMutableArray*) fromJsonMultipleWithStreamFormatsJson:(NSString*)streamFormatsJson;
/// <summary>
/// Deserializes an instance from JSON.
/// </summary>
/// <param name="streamFormatJson">The JSON to deserialize.</param>
/// <returns>The deserialized stream format.</returns>
+ (FMIceLinkStreamFormat*) fromJsonWithStreamFormatJson:(NSString*)streamFormatJson;
- (FMIceLinkStreamFormat*) getMatchingNegotiatedFormatWithNegotiatedStreamFormats:(NSMutableArray*)negotiatedStreamFormats;
- (id) init;
/// <summary>
/// Initializes a new instance of the <see cref="FMIceLinkStreamFormat" /> class with a dynamically assigned payload type.
/// </summary>
/// <param name="encodingName">The format's encoding name.</param>
- (id) initWithEncodingName:(NSString*)encodingName;
/// <summary>
/// Initializes a new instance of the <see cref="FMIceLinkStreamFormat" /> class with a dynamically assigned payload type.
/// </summary>
/// <param name="encodingName">The format's encoding name.</param>
/// <param name="clockRate">The format's clock rate.</param>
- (id) initWithEncodingName:(NSString*)encodingName clockRate:(int)clockRate;
/// <summary>
/// Initializes a new instance of the <see cref="FMIceLinkStreamFormat" /> class with a dynamically assigned payload type.
/// </summary>
/// <param name="encodingName">The format's encoding name.</param>
/// <param name="clockRate">The format's clock rate.</param>
/// <param name="encodingParameters">The format's encoding parameters.</param>
- (id) initWithEncodingName:(NSString*)encodingName clockRate:(int)clockRate encodingParameters:(NSString*)encodingParameters;
/// <summary>
/// Initializes a new instance of the <see cref="FMIceLinkStreamFormat" /> class.
/// </summary>
/// <param name="payloadType">The payload type associated with the format.</param>
/// <param name="encodingName">The format's encoding name.</param>
- (id) initWithPayloadType:(int)payloadType encodingName:(NSString*)encodingName;
/// <summary>
/// Initializes a new instance of the <see cref="FMIceLinkStreamFormat" /> class.
/// </summary>
/// <param name="payloadType">The payload type associated with the format.</param>
/// <param name="encodingName">The format's encoding name.</param>
/// <param name="clockRate">The format's clock rate.</param>
- (id) initWithPayloadType:(int)payloadType encodingName:(NSString*)encodingName clockRate:(int)clockRate;
/// <summary>
/// Initializes a new instance of the <see cref="FMIceLinkStreamFormat" /> class.
/// </summary>
/// <param name="payloadType">The payload type associated with the format.</param>
/// <param name="encodingName">The format's encoding name.</param>
/// <param name="clockRate">The format's clock rate.</param>
/// <param name="encodingParameters">The format's encoding parameters.</param>
- (id) initWithPayloadType:(int)payloadType encodingName:(NSString*)encodingName clockRate:(int)clockRate encodingParameters:(NSString*)encodingParameters;
/// <summary>
/// Checks if the stream format is equivalent, ignoring the payload type.
/// </summary>
/// <param name="format">The format to compare.</param>
/// <returns><c>true</c> if the formats are equivalent; otherwise, <c>false</c>.</returns>
- (bool) isEquivalentWithFormat:(FMIceLinkStreamFormat*)format;
/// <summary>
/// Gets the payload type associated with the format.
/// </summary>
- (int) payloadType;
- (void) setClockRate:(int)value;
- (void) setEncodingName:(NSString*)value;
- (void) setEncodingParameters:(NSString*)value;
- (void) setPayloadType:(int)value;
+ (FMIceLinkStreamFormat*) streamFormat;
/// <summary>
/// Initializes a new instance of the <see cref="FMIceLinkStreamFormat" /> class with a dynamically assigned payload type.
/// </summary>
/// <param name="encodingName">The format's encoding name.</param>
+ (FMIceLinkStreamFormat*) streamFormatWithEncodingName:(NSString*)encodingName;
/// <summary>
/// Initializes a new instance of the <see cref="FMIceLinkStreamFormat" /> class with a dynamically assigned payload type.
/// </summary>
/// <param name="encodingName">The format's encoding name.</param>
/// <param name="clockRate">The format's clock rate.</param>
+ (FMIceLinkStreamFormat*) streamFormatWithEncodingName:(NSString*)encodingName clockRate:(int)clockRate;
/// <summary>
/// Initializes a new instance of the <see cref="FMIceLinkStreamFormat" /> class with a dynamically assigned payload type.
/// </summary>
/// <param name="encodingName">The format's encoding name.</param>
/// <param name="clockRate">The format's clock rate.</param>
/// <param name="encodingParameters">The format's encoding parameters.</param>
+ (FMIceLinkStreamFormat*) streamFormatWithEncodingName:(NSString*)encodingName clockRate:(int)clockRate encodingParameters:(NSString*)encodingParameters;
/// <summary>
/// Initializes a new instance of the <see cref="FMIceLinkStreamFormat" /> class.
/// </summary>
/// <param name="payloadType">The payload type associated with the format.</param>
/// <param name="encodingName">The format's encoding name.</param>
+ (FMIceLinkStreamFormat*) streamFormatWithPayloadType:(int)payloadType encodingName:(NSString*)encodingName;
/// <summary>
/// Initializes a new instance of the <see cref="FMIceLinkStreamFormat" /> class.
/// </summary>
/// <param name="payloadType">The payload type associated with the format.</param>
/// <param name="encodingName">The format's encoding name.</param>
/// <param name="clockRate">The format's clock rate.</param>
+ (FMIceLinkStreamFormat*) streamFormatWithPayloadType:(int)payloadType encodingName:(NSString*)encodingName clockRate:(int)clockRate;
/// <summary>
/// Initializes a new instance of the <see cref="FMIceLinkStreamFormat" /> class.
/// </summary>
/// <param name="payloadType">The payload type associated with the format.</param>
/// <param name="encodingName">The format's encoding name.</param>
/// <param name="clockRate">The format's clock rate.</param>
/// <param name="encodingParameters">The format's encoding parameters.</param>
+ (FMIceLinkStreamFormat*) streamFormatWithPayloadType:(int)payloadType encodingName:(NSString*)encodingName clockRate:(int)clockRate encodingParameters:(NSString*)encodingParameters;
/// <summary>
/// Serializes this instance to JSON.
/// </summary>
/// <returns></returns>
- (NSString*) toJson;
/// <summary>
/// Serializes an array of instances to JSON.
/// </summary>
/// <param name="streamFormats">The stream formats to serialize.</param>
/// <returns>The serialized JSON.</returns>
+ (NSString*) toJsonMultipleWithStreamFormats:(NSMutableArray*)streamFormats;
/// <summary>
/// Serializes an instance to JSON.
/// </summary>
/// <param name="streamFormat">The stream format to serialize.</param>
/// <returns>The serialized JSON.</returns>
+ (NSString*) toJsonWithStreamFormat:(FMIceLinkStreamFormat*)streamFormat;

@end


@class FMIceLinkICECreateSuccessArgs;
@class FMIceLinkICECreateFailureArgs;
@class FMIceLinkICECreateCompleteArgs;
@class FMCallback;

#pragma clang diagnostic ignored "-Wshorten-64-to-32"
#pragma clang diagnostic ignored "-Wint-to-pointer-cast"

@interface FMIceLinkICECreateArgs : FMDynamic 

+ (FMIceLinkICECreateArgs*) iceCreateArgs;
- (id) init;
- (FMCallback*) onComplete;
- (FMCallback*) onFailure;
- (FMCallback*) onSuccess;
- (void) setOnComplete:(FMCallback*)value;
- (void) setOnCompleteBlock:(void (^) (FMIceLinkICECreateCompleteArgs*))valueBlock;
- (void) setOnFailure:(FMCallback*)value;
- (void) setOnFailureBlock:(void (^) (FMIceLinkICECreateFailureArgs*))valueBlock;
- (void) setOnSuccess:(FMCallback*)value;
- (void) setOnSuccessBlock:(void (^) (FMIceLinkICECreateSuccessArgs*))valueBlock;

@end


@class NSMutableArrayFMExtensions;
@class NSStringFMExtensions;

#pragma clang diagnostic ignored "-Wshorten-64-to-32"
#pragma clang diagnostic ignored "-Wint-to-pointer-cast"

@interface FMIceLinkICECreateCompleteArgs : FMDynamic 

+ (FMIceLinkICECreateCompleteArgs*) iceCreateCompleteArgs;
- (id) init;
- (NSMutableArray*) mediaStreams;
- (void) setMediaStreams:(NSMutableArray*)value;
- (void) setTurnPassword:(NSString*)value;
- (void) setTurnRealm:(NSString*)value;
- (void) setTurnUsername:(NSString*)value;
- (NSString*) turnPassword;
- (NSString*) turnRealm;
- (NSString*) turnUsername;

@end


@class NSExceptionFMExtensions;
@class NSMutableArrayFMExtensions;
@class NSStringFMExtensions;

#pragma clang diagnostic ignored "-Wshorten-64-to-32"
#pragma clang diagnostic ignored "-Wint-to-pointer-cast"

@interface FMIceLinkICECreateFailureArgs : FMDynamic 

- (NSException*) exception;
+ (FMIceLinkICECreateFailureArgs*) iceCreateFailureArgs;
- (id) init;
- (NSMutableArray*) mediaStreams;
- (void) setException:(NSException*)value;
- (void) setMediaStreams:(NSMutableArray*)value;
- (void) setTurnPassword:(NSString*)value;
- (void) setTurnRealm:(NSString*)value;
- (void) setTurnUsername:(NSString*)value;
- (NSString*) turnPassword;
- (NSString*) turnRealm;
- (NSString*) turnUsername;

@end


@class NSMutableArrayFMExtensions;
@class FMIceLinkOfferAnswer;
@class NSStringFMExtensions;

#pragma clang diagnostic ignored "-Wshorten-64-to-32"
#pragma clang diagnostic ignored "-Wint-to-pointer-cast"

@interface FMIceLinkICECreateSuccessArgs : FMDynamic 

+ (FMIceLinkICECreateSuccessArgs*) iceCreateSuccessArgs;
- (id) init;
- (NSMutableArray*) mediaStreams;
- (FMIceLinkOfferAnswer*) offerAnswer;
- (void) setMediaStreams:(NSMutableArray*)value;
- (void) setOfferAnswer:(FMIceLinkOfferAnswer*)value;
- (void) setTurnPassword:(NSString*)value;
- (void) setTurnRealm:(NSString*)value;
- (void) setTurnUsername:(NSString*)value;
- (NSString*) turnPassword;
- (NSString*) turnRealm;
- (NSString*) turnUsername;

@end


@class NSMutableArrayFMExtensions;
@class FMIceLinkICECandidatePair;

#pragma clang diagnostic ignored "-Wshorten-64-to-32"
#pragma clang diagnostic ignored "-Wint-to-pointer-cast"

@interface FMIceLinkICEValidList : NSObject 

- (void) addCandidatePairWithCandidatePair:(FMIceLinkICECandidatePair*)candidatePair;
- (void) addCandidatePair:(FMIceLinkICECandidatePair*)candidatePair;
- (NSMutableArray*) candidatePairs;
- (bool) hasNominated;
+ (FMIceLinkICEValidList*) iceValidList;
- (id) init;
- (bool) removeCandidatePairWithCandidatePair:(FMIceLinkICECandidatePair*)candidatePair;
- (bool) removeCandidatePair:(FMIceLinkICECandidatePair*)candidatePair;

@end


@class NSMutableArrayFMExtensions;
@class FMIceLinkICECandidatePair;
@class FMIceLinkICECandidate;
@class NSStringFMExtensions;

#pragma clang diagnostic ignored "-Wshorten-64-to-32"
#pragma clang diagnostic ignored "-Wint-to-pointer-cast"

@interface FMIceLinkICECheckList : NSObject 

- (void) addCandidatePairWithCandidatePair:(FMIceLinkICECandidatePair*)candidatePair;
- (void) addCandidatePair:(FMIceLinkICECandidatePair*)candidatePair;
- (NSMutableArray*) candidatePairs;
- (FMIceLinkICECandidatePair*) findMatchingCandidatePairWithCp:(FMIceLinkICECandidatePair*)cp;
- (FMIceLinkICECandidate*) findMatchingLocalCandidateWithIPAddress:(NSString*)ipAddress port:(int)port;
- (FMIceLinkICECandidate*) findMatchingRemoteCandidateWithIPAddress:(NSString*)ipAddress port:(int)port;
+ (FMIceLinkICECheckList*) iceCheckList;
- (id) init;
- (void) setState:(FMIceLinkICECheckListState)value;
- (FMIceLinkICECheckListState) state;
- (NSString*) toString;
- (NSString*) description;

@end


@class FMIceLinkICESendRequestArgs;
@class FMIceLinkICESendResponseArgs;
@class NSMutableArrayFMExtensions;
@class NSMutableDictionaryFMExtensions;
@class FMUdpReceiveArgs;
@class FMCallback;
@class FMUdpSocket;
@class FMIceLinkVirtualUdpSocket;
@class NSMutableDataFMExtensions;
@class FMIceLinkTransportAddress;

#pragma clang diagnostic ignored "-Wshorten-64-to-32"
#pragma clang diagnostic ignored "-Wint-to-pointer-cast"

@interface FMIceLinkICEUdpMessageBroker : FMIceLinkICEMessageBroker 

+ (FMIceLinkICEUdpMessageBroker*) iceUdpMessageBrokerWithSocket:(FMUdpSocket*)socket virtualSocket:(FMIceLinkVirtualUdpSocket*)virtualSocket protocol:(FMIceLinkStreamProtocol)protocol;
- (id) initWithSocket:(FMUdpSocket*)socket virtualSocket:(FMIceLinkVirtualUdpSocket*)virtualSocket protocol:(FMIceLinkStreamProtocol)protocol;
- (bool) isClosed;
- (FMCallback*) onData;
- (FMCallback*) onSendRequest;
- (FMCallback*) onSendResponse;
- (FMCallback*) onSTUNRequest;
- (FMCallback*) onSTUNResponse;
- (FMIceLinkStreamProtocol) protocol;
- (int) sendDataWithBuffer:(NSMutableData*)buffer address:(FMIceLinkTransportAddress*)address relay:(FMIceLinkTransportAddress*)relay;
- (void) sendRequestWithSendRequestArgs:(FMIceLinkICESendRequestArgs*)sendRequestArgs;
- (void) sendRequestWithArgs:(FMIceLinkICESendRequestArgs*)sendRequestArgs;
- (void) sendResponseWithSendResponseArgs:(FMIceLinkICESendResponseArgs*)sendResponseArgs;
- (void) sendResponseWithArgs:(FMIceLinkICESendResponseArgs*)sendResponseArgs;
- (void) setOnData:(FMCallback*)value;
- (void) setOnSendRequest:(FMCallback*)value;
- (void) setOnSendRequestBlock:(void (^) (FMIceLinkICESendRequestArgs*))valueBlock;
- (void) setOnSendResponse:(FMCallback*)value;
- (void) setOnSendResponseBlock:(void (^) (FMIceLinkICESendResponseArgs*))valueBlock;
- (void) setOnSTUNRequest:(FMCallback*)value;
- (void) setOnSTUNResponse:(FMCallback*)value;
- (FMUdpSocket*) socket;
- (bool) start;
- (void) startListening;
- (bool) stop;
- (FMIceLinkVirtualUdpSocket*) virtualSocket;

@end


@class FMIceLinkLink;
@class FMCallback;
@class NSStringFMExtensions;

#pragma clang diagnostic ignored "-Wshorten-64-to-32"
#pragma clang diagnostic ignored "-Wint-to-pointer-cast"

@interface FMIceLinkLinkInitializeState : NSObject 

- (FMCallback*) complete;
- (NSString*) host;
- (int) index;
- (id) init;
+ (FMIceLinkLinkInitializeState*) linkInitializeState;
- (int) port;
- (void) setComplete:(FMCallback*)value;
- (void) setCompleteBlock:(void (^) (FMIceLinkLink*))valueBlock;
- (void) setHost:(NSString*)value;
- (void) setIndex:(int)value;
- (void) setPort:(int)value;

@end


@class FMIceLinkOfferAnswer;
@class NSExceptionFMExtensions;
@class NSMutableArrayFMExtensions;
@class FMIceLinkICEAgent;
@class FMIceLinkAcceptArgs;
@class FMCallback;
@class FMIceLinkCandidate;
@class FMIceLinkCloseArgs;
@class FMIceLinkCreateArgs;
@class NSMutableDataFMExtensions;
@class FMIceLinkRTPPacket;
@class FMIceLinkSendSCTPArgs;

/// <summary>
/// A peer link over which data can be streamed.
/// </summary>
#pragma clang diagnostic ignored "-Wshorten-64-to-32"
#pragma clang diagnostic ignored "-Wint-to-pointer-cast"

@interface FMIceLinkLink : FMIceLinkBaseLink 

- (void) acceptInternalWithAcceptArgs:(FMIceLinkAcceptArgs*)acceptArgs success:(FMCallback*)success failure:(FMCallback*)failure;
- (void) acceptInternalWithAcceptArgs:(FMIceLinkAcceptArgs*)acceptArgs successBlock:(void (^) ())successBlock failureBlock:(void (^) (NSException*))failureBlock;
- (void) addRemoteCandidateInternalWithCandidate:(FMIceLinkCandidate*)candidate;
/// <summary>
/// Gets an array of the number of RTCP packet bytes received,
/// indexed per media stream.
/// </summary>
- (NSMutableArray*) bytesReceivedRTCP;
/// <summary>
/// Gets an array of the number of RTP packet bytes received,
/// indexed per media stream.
/// </summary>
- (NSMutableArray*) bytesReceivedRTP;
/// <summary>
/// Gets an array of the number of RTCP packet bytes sent,
/// indexed per media stream.
/// </summary>
- (NSMutableArray*) bytesSentRTCP;
/// <summary>
/// Gets an array of the number of RTP packet bytes sent,
/// indexed per media stream.
/// </summary>
- (NSMutableArray*) bytesSentRTP;
- (void) closeInternalWithCloseArgs:(FMIceLinkCloseArgs*)closeArgs complete:(FMCallback*)complete;
- (void) closeInternalWithCloseArgs:(FMIceLinkCloseArgs*)closeArgs completeBlock:(void (^) (NSException*))completeBlock;
- (void) createInternalWithCreateArgs:(FMIceLinkCreateArgs*)createArgs success:(FMCallback*)success failure:(FMCallback*)failure;
- (void) createInternalWithCreateArgs:(FMIceLinkCreateArgs*)createArgs successBlock:(void (^) (FMIceLinkOfferAnswer*))successBlock failureBlock:(void (^) (NSException*))failureBlock;
/// <summary>
/// Gets an array of the number of inbound RTP packets lost,
/// indexed per media stream.
/// </summary>
- (NSMutableArray*) inboundPacketsLostRTP;
/// <summary>
/// Initializes a new instance of the <see cref="FMIceLinkLink" /> class.
/// </summary>
- (id) init;
- (void) initializeInternalWithComplete:(FMCallback*)complete;
- (void) initializeInternalWithCompleteBlock:(void (^) (FMIceLinkLink*))completeBlock;
/// <summary>
/// Gets whether or not any of the streams are relayed.
/// </summary>
- (bool) isRelayed;
/// <summary>
/// Gets whether or not the streams are relayed.
/// </summary>
- (NSMutableArray*) isStreamRelayed;
/// <summary>
/// Keeps the link alive.
/// </summary>
- (void) keepAlive;
/// <summary>
/// Initializes a new instance of the <see cref="FMIceLinkLink" /> class.
/// </summary>
+ (FMIceLinkLink*) link;
/// <summary>
/// Gets the active local candidates.
/// </summary>
- (NSMutableArray*) localCandidates;
/// <summary>
/// Gets the active local candidate types.
/// </summary>
- (NSMutableArray*) localCandidateTypes;
/// <summary>
/// Gets an array of the number of outbound RTP packets lost,
/// indexed per media stream.
/// </summary>
- (NSMutableArray*) outboundPacketsLostRTP;
/// <summary>
/// Gets an array of the number of RTCP packets received,
/// indexed per media stream.
/// </summary>
- (NSMutableArray*) packetsReceivedRTCP;
/// <summary>
/// Gets an array of the number of RTP packets received,
/// indexed per media stream.
/// </summary>
- (NSMutableArray*) packetsReceivedRTP;
/// <summary>
/// Gets an array of the number of RTCP packets sent,
/// indexed per media stream.
/// </summary>
- (NSMutableArray*) packetsSentRTCP;
/// <summary>
/// Gets an array of the number of RTP packets sent,
/// indexed per media stream.
/// </summary>
- (NSMutableArray*) packetsSentRTP;
/// <summary>
/// Gets the active remote candidates.
/// </summary>
- (NSMutableArray*) remoteCandidates;
/// <summary>
/// Gets the active remote candidate types.
/// </summary>
- (NSMutableArray*) remoteCandidateTypes;
/// <summary>
/// Gets the remote DTLS certificate.
/// </summary>
- (NSMutableData*) remoteDtlsCertificate;
/// <summary>
/// Gets the remote DTLS certificates.
/// </summary>
- (NSMutableArray*) remoteDtlsCertificates;
/// <summary>
/// Gets an array of the estimated round-trip times in seconds,
/// indexed per media stream.
/// </summary>
- (NSMutableArray*) roundTripTime;
- (int) sendRTCPInternalWithPackets:(NSMutableArray*)packets mediaIndex:(int)mediaIndex;
- (int) sendRTPInternalWithPacket:(FMIceLinkRTPPacket*)packet payloadType:(int)payloadType mediaIndex:(int)mediaIndex;
- (void) sendSCTPInternalWithSendArgs:(FMIceLinkSendSCTPArgs*)sendArgs mediaIndex:(int)mediaIndex;

@end


@class NSStringFMExtensions;

#pragma clang diagnostic ignored "-Wshorten-64-to-32"
#pragma clang diagnostic ignored "-Wint-to-pointer-cast"

@interface FMIceLinkICELocalAddress : NSObject 

- (long long) adapterSpeed;
+ (FMIceLinkICELocalAddress*) iceLocalAddressWithIPAddress:(NSString*)ipAddress mask:(NSString*)mask adapterSpeed:(long long)adapterSpeed;
- (id) initWithIPAddress:(NSString*)ipAddress mask:(NSString*)mask adapterSpeed:(long long)adapterSpeed;
- (NSString*) ipAddress;
- (bool) isLocalAddressWithAddress:(NSString*)address;
- (bool) isLocalAddress:(NSString*)address;
- (NSString*) mask;
- (void) setAdapterSpeed:(long long)value;
- (void) setIPAddress:(NSString*)value;
- (void) setMask:(NSString*)value;
- (NSString*) toString;
- (NSString*) description;

@end


@class NSStringFMExtensions;

#pragma clang diagnostic ignored "-Wshorten-64-to-32"
#pragma clang diagnostic ignored "-Wint-to-pointer-cast"

@interface FMIceLinkICEMediaFormat : NSObject 

- (long long) clockRate;
- (NSString*) encodingName;
- (NSString*) encodingParameters;
+ (FMIceLinkICEMediaFormat*) iceMediaFormatWithRtpPayloadType:(int)rtpPayloadType encodingName:(NSString*)encodingName;
+ (FMIceLinkICEMediaFormat*) iceMediaFormatWithRtpPayloadType:(int)rtpPayloadType encodingName:(NSString*)encodingName clockRate:(long long)clockRate;
+ (FMIceLinkICEMediaFormat*) iceMediaFormatWithRtpPayloadType:(int)rtpPayloadType encodingName:(NSString*)encodingName clockRate:(long long)clockRate encodingParameters:(NSString*)encodingParameters;
- (id) initWithRtpPayloadType:(int)rtpPayloadType encodingName:(NSString*)encodingName;
- (id) initWithRtpPayloadType:(int)rtpPayloadType encodingName:(NSString*)encodingName clockRate:(long long)clockRate;
- (id) initWithRtpPayloadType:(int)rtpPayloadType encodingName:(NSString*)encodingName clockRate:(long long)clockRate encodingParameters:(NSString*)encodingParameters;
- (int) rtpPayloadType;

@end


@class NSStringFMExtensions;
@class FMIceLinkICECandidate;

/// <summary>
/// Defines valid SDP candidate types.
/// </summary>
#pragma clang diagnostic ignored "-Wshorten-64-to-32"
#pragma clang diagnostic ignored "-Wint-to-pointer-cast"

@interface FMIceLinkSDPCandidateType : NSObject 

+ (NSString*) getCandidateTypeForCandidateWithCandidate:(FMIceLinkICECandidate*)candidate;
+ (NSString*) getCandidateTypeForCandidate:(FMIceLinkICECandidate*)candidate;
/// <summary>
/// Gets the SDP candidate type meaning "Host".
/// </summary>
+ (NSString*) host;
/// <summary>
/// Gets the SDP candidate type meaning "Peer Reflexive".
/// </summary>
+ (NSString*) peerReflexive;
/// <summary>
/// Gets the SDP candidate type meaning "Relayed".
/// </summary>
+ (NSString*) relayed;
/// <summary>
/// Gets the SDP candidate type meaning "Server Reflexive".
/// </summary>
+ (NSString*) serverReflexive;

@end


@class NSStringFMExtensions;

/// <summary>
/// An SDP remote candidate element.
/// </summary>
#pragma clang diagnostic ignored "-Wshorten-64-to-32"
#pragma clang diagnostic ignored "-Wint-to-pointer-cast"

@interface FMIceLinkSDPRemoteCandidate : NSObject 

/// <summary>
/// Gets the ID of the component for which this is a remote candidate.
/// </summary>
- (int) componentId;
/// <summary>
/// Gets the IP address of the remote candidate.
/// </summary>
- (NSString*) connectionAddress;
/// <summary>
/// Initializes a new instance of the <see cref="FMIceLinkSDPRemoteCandidate" /> class.
/// </summary>
/// <param name="componentId">The ID of the component for which this is a remote candidate.</param>
/// <param name="connectionAddress">The IP address of the remote candidate.</param>
/// <param name="port">The port of the remote candidate.</param>
- (id) initWithComponentId:(int)componentId connectionAddress:(NSString*)connectionAddress port:(int)port;
/// <summary>
/// Creates an <see cref="FMIceLinkSDPRemoteCandidate" /> instance from a string.
/// </summary>
/// <param name="s">The string to parse.</param>
/// <returns></returns>
+ (FMIceLinkSDPRemoteCandidate*) parseWithS:(NSString*)s;
/// <summary>
/// Gets the port of the remote candidate.
/// </summary>
- (int) port;
/// <summary>
/// Initializes a new instance of the <see cref="FMIceLinkSDPRemoteCandidate" /> class.
/// </summary>
/// <param name="componentId">The ID of the component for which this is a remote candidate.</param>
/// <param name="connectionAddress">The IP address of the remote candidate.</param>
/// <param name="port">The port of the remote candidate.</param>
+ (FMIceLinkSDPRemoteCandidate*) sdpRemoteCandidateWithComponentId:(int)componentId connectionAddress:(NSString*)connectionAddress port:(int)port;
/// <summary>
/// Converts this instance to a string.
/// </summary>
/// <returns></returns>
- (NSString*) toString;
/// <summary>
/// Converts this instance to a string.
/// </summary>
/// <returns></returns>
- (NSString*) description;

@end


@class FMIceLinkSTUNIceControlledAttribute;
@class FMIceLinkSTUNIceControllingAttribute;
@class NSStringFMExtensions;

/// <summary>
/// The Binding request contained either the ICE-
/// CONTROLLING or ICE-CONTROLLED attribute, indicating a role that
/// conflicted with the server.  The server ran a tie-breaker based on
/// the tie-breaker value in the request and determined that the
/// client needs to switch roles.
/// </summary>
#pragma clang diagnostic ignored "-Wshorten-64-to-32"
#pragma clang diagnostic ignored "-Wint-to-pointer-cast"

@interface FMIceLinkSTUNRoleConflictException : FMIceLinkSTUNException 

/// <summary>
/// Gets the ICE-controlled attribute.
/// </summary>
- (FMIceLinkSTUNIceControlledAttribute*) iceControlled;
/// <summary>
/// Gets the ICE-controlling attribute.
/// </summary>
- (FMIceLinkSTUNIceControllingAttribute*) iceControlling;
/// <summary>
/// Initializes a new instance of the <see cref="FMIceLinkSTUNRoleConflictException" /> class.
/// </summary>
/// <param name="iceControlled">The ICE-controlled attribute.</param>
/// <param name="iceControlling">The ICE-controlling attribute.</param>
- (id) initWithIceControlled:(FMIceLinkSTUNIceControlledAttribute*)iceControlled iceControlling:(FMIceLinkSTUNIceControllingAttribute*)iceControlling;
/// <summary>
/// Initializes a new instance of the <see cref="FMIceLinkSTUNRoleConflictException" /> class.
/// </summary>
/// <param name="message">The message.</param>
/// <param name="iceControlled">The ICE-controlled attribute.</param>
/// <param name="iceControlling">The ICE-controlling attribute.</param>
- (id) initWithMessage:(NSString*)message iceControlled:(FMIceLinkSTUNIceControlledAttribute*)iceControlled iceControlling:(FMIceLinkSTUNIceControllingAttribute*)iceControlling;
/// <summary>
/// Initializes a new instance of the <see cref="FMIceLinkSTUNRoleConflictException" /> class.
/// </summary>
/// <param name="iceControlled">The ICE-controlled attribute.</param>
/// <param name="iceControlling">The ICE-controlling attribute.</param>
+ (FMIceLinkSTUNRoleConflictException*) stunRoleConflictExceptionWithIceControlled:(FMIceLinkSTUNIceControlledAttribute*)iceControlled iceControlling:(FMIceLinkSTUNIceControllingAttribute*)iceControlling;
/// <summary>
/// Initializes a new instance of the <see cref="FMIceLinkSTUNRoleConflictException" /> class.
/// </summary>
/// <param name="message">The message.</param>
/// <param name="iceControlled">The ICE-controlled attribute.</param>
/// <param name="iceControlling">The ICE-controlling attribute.</param>
+ (FMIceLinkSTUNRoleConflictException*) stunRoleConflictExceptionWithMessage:(NSString*)message iceControlled:(FMIceLinkSTUNIceControlledAttribute*)iceControlled iceControlling:(FMIceLinkSTUNIceControllingAttribute*)iceControlling;

@end


@class NSMutableDataFMExtensions;
@class NSStringFMExtensions;

/// <summary>
/// The ICE-CONTROLLING attribute is present in a Binding request and
/// indicates that the client believes it is currently in the controlling
/// role.
/// </summary>
#pragma clang diagnostic ignored "-Wshorten-64-to-32"
#pragma clang diagnostic ignored "-Wint-to-pointer-cast"

@interface FMIceLinkSTUNIceControllingAttribute : FMIceLinkSTUNAttribute 

/// <summary>
/// Initializes a new instance of the <see cref="FMIceLinkSTUNIceControllingAttribute" /> class.
/// </summary>
/// <param name="valueBytes">The attribute value as a byte array.</param>
+ (FMIceLinkSTUNIceControllingAttribute*) fromValueBytesWithValueBytes:(NSMutableData*)valueBytes;
/// <summary>
/// Initializes a new instance of the <see cref="FMIceLinkSTUNIceControllingAttribute" /> class.
/// </summary>
/// <param name="valueBytes">The attribute value as a byte array.</param>
+ (FMIceLinkSTUNIceControllingAttribute*) fromValueBytes:(NSMutableData*)valueBytes;
- (NSMutableData*) getValueBytes;
/// <summary>
/// Initializes a new instance of the <see cref="FMIceLinkSTUNIceControllingAttribute" /> class.
/// </summary>
/// <param name="value">The tiebreaker value.</param>
- (id) initWithValue:(long long)value;
/// <summary>
/// Sets the tiebreaker value.
/// </summary>
- (void) setValue:(long long)value;
/// <summary>
/// Initializes a new instance of the <see cref="FMIceLinkSTUNIceControllingAttribute" /> class.
/// </summary>
/// <param name="value">The tiebreaker value.</param>
+ (FMIceLinkSTUNIceControllingAttribute*) stunIceControllingAttributeWithValue:(long long)value;
/// <summary>
/// Returns a string that represents this instance.
/// </summary>
/// <returns>
/// A string that represents this instance.
/// </returns>
- (NSString*) toString;
/// <summary>
/// Returns a string that represents this instance.
/// </summary>
/// <returns>
/// A string that represents this instance.
/// </returns>
- (NSString*) description;
/// <summary>
/// Gets the tiebreaker value.
/// </summary>
- (long long) value;

@end


@class NSMutableDataFMExtensions;
@class NSStringFMExtensions;

/// <summary>
/// The ICE-CONTROLLED attribute is present in a Binding request and
/// indicates that the client believes it is currently in the controlled
/// role.
/// </summary>
#pragma clang diagnostic ignored "-Wshorten-64-to-32"
#pragma clang diagnostic ignored "-Wint-to-pointer-cast"

@interface FMIceLinkSTUNIceControlledAttribute : FMIceLinkSTUNAttribute 

/// <summary>
/// Initializes a new instance of the <see cref="FMIceLinkSTUNIceControlledAttribute" /> class.
/// </summary>
/// <param name="valueBytes">The attribute value as a byte array.</param>
+ (FMIceLinkSTUNIceControlledAttribute*) fromValueBytesWithValueBytes:(NSMutableData*)valueBytes;
/// <summary>
/// Initializes a new instance of the <see cref="FMIceLinkSTUNIceControlledAttribute" /> class.
/// </summary>
/// <param name="valueBytes">The attribute value as a byte array.</param>
+ (FMIceLinkSTUNIceControlledAttribute*) fromValueBytes:(NSMutableData*)valueBytes;
- (NSMutableData*) getValueBytes;
/// <summary>
/// Initializes a new instance of the <see cref="FMIceLinkSTUNIceControlledAttribute" /> class.
/// </summary>
/// <param name="value">The tiebreaker value.</param>
- (id) initWithValue:(long long)value;
/// <summary>
/// Sets the tiebreaker value.
/// </summary>
- (void) setValue:(long long)value;
/// <summary>
/// Initializes a new instance of the <see cref="FMIceLinkSTUNIceControlledAttribute" /> class.
/// </summary>
/// <param name="value">The tiebreaker value.</param>
+ (FMIceLinkSTUNIceControlledAttribute*) stunIceControlledAttributeWithValue:(long long)value;
/// <summary>
/// Returns a string that represents this instance.
/// </summary>
/// <returns>
/// A string that represents this instance.
/// </returns>
- (NSString*) toString;
/// <summary>
/// Returns a string that represents this instance.
/// </summary>
/// <returns>
/// A string that represents this instance.
/// </returns>
- (NSString*) description;
/// <summary>
/// Gets the tiebreaker value.
/// </summary>
- (long long) value;

@end


@class NSMutableDataFMExtensions;
@class NSStringFMExtensions;

/// <summary>
/// The USE-CANDIDATE attribute indicates that the candidate pair
/// resulting from this check should be used for transmission of media.
/// </summary>
#pragma clang diagnostic ignored "-Wshorten-64-to-32"
#pragma clang diagnostic ignored "-Wint-to-pointer-cast"

@interface FMIceLinkSTUNUseCandidateAttribute : FMIceLinkSTUNAttribute 

/// <summary>
/// Initializes a new instance of the <see cref="FMIceLinkSTUNUseCandidateAttribute" /> class.
/// </summary>
/// <param name="valueBytes">The attribute value as a byte array.</param>
+ (FMIceLinkSTUNUseCandidateAttribute*) fromValueBytesWithValueBytes:(NSMutableData*)valueBytes;
/// <summary>
/// Initializes a new instance of the <see cref="FMIceLinkSTUNUseCandidateAttribute" /> class.
/// </summary>
/// <param name="valueBytes">The attribute value as a byte array.</param>
+ (FMIceLinkSTUNUseCandidateAttribute*) fromValueBytes:(NSMutableData*)valueBytes;
- (NSMutableData*) getValueBytes;
/// <summary>
/// Initializes a new instance of the <see cref="FMIceLinkSTUNUseCandidateAttribute" /> class.
/// </summary>
- (id) init;
/// <summary>
/// Initializes a new instance of the <see cref="FMIceLinkSTUNUseCandidateAttribute" /> class.
/// </summary>
+ (FMIceLinkSTUNUseCandidateAttribute*) stunUseCandidateAttribute;
/// <summary>
/// Returns a string that represents this instance.
/// </summary>
/// <returns>
/// A string that represents this instance.
/// </returns>
- (NSString*) toString;
/// <summary>
/// Returns a string that represents this instance.
/// </summary>
/// <returns>
/// A string that represents this instance.
/// </returns>
- (NSString*) description;

@end


@class NSStringFMExtensions;

/// <summary>
/// The "ice-ufrag" attribute conveys the username fragment
/// used by ICE for message integrity.
/// </summary>
#pragma clang diagnostic ignored "-Wshorten-64-to-32"
#pragma clang diagnostic ignored "-Wint-to-pointer-cast"

@interface FMIceLinkSDPIceUfragAttribute : FMIceLinkSDPAttribute 

/// <summary>
/// Initializes a new instance of the <see cref="FMIceLinkSDPIceUfragAttribute" /> class.
/// </summary>
/// <param name="value">The attribute value.</param>
+ (FMIceLinkSDPIceUfragAttribute*) fromValueWithValue:(NSString*)value;
/// <summary>
/// Initializes a new instance of the <see cref="FMIceLinkSDPIceUfragAttribute" /> class.
/// </summary>
/// <param name="value">The attribute value.</param>
+ (FMIceLinkSDPIceUfragAttribute*) fromValue:(NSString*)value;
/// <summary>
/// Generates a username fragment.
/// </summary>
/// <returns></returns>
+ (NSString*) generateUfrag;
- (NSString*) getValue;
/// <summary>
/// Initializes a new instance of the <see cref="FMIceLinkSDPIceUfragAttribute" /> class.
/// </summary>
- (id) init;
/// <summary>
/// Initializes a new instance of the <see cref="FMIceLinkSDPIceUfragAttribute" /> class.
/// </summary>
/// <param name="ufrag">The username fragment used by ICE for message integrity.</param>
- (id) initWithUfrag:(NSString*)ufrag;
/// <summary>
/// Initializes a new instance of the <see cref="FMIceLinkSDPIceUfragAttribute" /> class.
/// </summary>
+ (FMIceLinkSDPIceUfragAttribute*) sdpIceUfragAttribute;
/// <summary>
/// Initializes a new instance of the <see cref="FMIceLinkSDPIceUfragAttribute" /> class.
/// </summary>
/// <param name="ufrag">The username fragment used by ICE for message integrity.</param>
+ (FMIceLinkSDPIceUfragAttribute*) sdpIceUfragAttributeWithUfrag:(NSString*)ufrag;
/// <summary>
/// Gets the username fragment used by ICE for message integrity.
/// </summary>
- (NSString*) ufrag;

@end


@class NSMutableArrayFMExtensions;
@class NSStringFMExtensions;

/// <summary>
/// The "ice-options" attribute is a session-level attribute.  It
/// contains a series of tokens that identify the options supported by
/// the agent.
/// </summary>
#pragma clang diagnostic ignored "-Wshorten-64-to-32"
#pragma clang diagnostic ignored "-Wint-to-pointer-cast"

@interface FMIceLinkSDPIceOptionsAttribute : FMIceLinkSDPAttribute 

/// <summary>
/// Initializes a new instance of the <see cref="FMIceLinkSDPIceOptionsAttribute" /> class.
/// </summary>
/// <param name="value">The attribute value.</param>
+ (FMIceLinkSDPIceOptionsAttribute*) fromValueWithValue:(NSString*)value;
/// <summary>
/// Initializes a new instance of the <see cref="FMIceLinkSDPIceOptionsAttribute" /> class.
/// </summary>
/// <param name="value">The attribute value.</param>
+ (FMIceLinkSDPIceOptionsAttribute*) fromValue:(NSString*)value;
- (NSString*) getValue;
/// <summary>
/// Initializes a new instance of the <see cref="FMIceLinkSDPIceOptionsAttribute" /> class.
/// </summary>
/// <param name="tags">The tokens that identify options supported by the agent.</param>
- (id) initWithTags:(NSMutableArray*)tags;
/// <summary>
/// Initializes a new instance of the <see cref="FMIceLinkSDPIceOptionsAttribute" /> class.
/// </summary>
/// <param name="tags">The tokens that identify options supported by the agent.</param>
+ (FMIceLinkSDPIceOptionsAttribute*) sdpIceOptionsAttributeWithTags:(NSMutableArray*)tags;
/// <summary>
/// Gets the tokens that identify options supported by the agent.
/// </summary>
- (NSMutableArray*) tags;

@end


@class NSStringFMExtensions;

/// <summary>
/// The "ice-pwd" attribute conveys the password used by
/// ICE for message integrity.
/// </summary>
#pragma clang diagnostic ignored "-Wshorten-64-to-32"
#pragma clang diagnostic ignored "-Wint-to-pointer-cast"

@interface FMIceLinkSDPIcePasswordAttribute : FMIceLinkSDPAttribute 

/// <summary>
/// Initializes a new instance of the <see cref="FMIceLinkSDPIcePasswordAttribute" /> class.
/// </summary>
/// <param name="value">The attribute value.</param>
+ (FMIceLinkSDPIcePasswordAttribute*) fromValueWithValue:(NSString*)value;
/// <summary>
/// Initializes a new instance of the <see cref="FMIceLinkSDPIcePasswordAttribute" /> class.
/// </summary>
/// <param name="value">The attribute value.</param>
+ (FMIceLinkSDPIcePasswordAttribute*) fromValue:(NSString*)value;
/// <summary>
/// Generates a random password.
/// </summary>
/// <returns></returns>
+ (NSString*) generatePassword;
/// <summary>
/// Converts an ICE username fragment to a password (MD5 hash).
/// </summary>
/// <param name="ufrag">The username fragment to convert.</param>
/// <returns></returns>
+ (NSString*) generatePasswordWithUfrag:(NSString*)ufrag;
- (NSString*) getValue;
/// <summary>
/// Initializes a new instance of the <see cref="FMIceLinkSDPIcePasswordAttribute" /> class.
/// </summary>
- (id) init;
/// <summary>
/// Initializes a new instance of the <see cref="FMIceLinkSDPIcePasswordAttribute" /> class.
/// </summary>
/// <param name="password">The password used by ICE for message integrity.</param>
- (id) initWithPassword:(NSString*)password;
/// <summary>
/// Gets the password used by ICE for message integrity.
/// </summary>
- (NSString*) password;
/// <summary>
/// Initializes a new instance of the <see cref="FMIceLinkSDPIcePasswordAttribute" /> class.
/// </summary>
+ (FMIceLinkSDPIcePasswordAttribute*) sdpIcePasswordAttribute;
/// <summary>
/// Initializes a new instance of the <see cref="FMIceLinkSDPIcePasswordAttribute" /> class.
/// </summary>
/// <param name="password">The password used by ICE for message integrity.</param>
+ (FMIceLinkSDPIcePasswordAttribute*) sdpIcePasswordAttributeWithPassword:(NSString*)password;

@end


@class NSStringFMExtensions;

/// <summary>
/// "ice-mismatch" is a media-level
/// attribute only, and when present in an answer, indicates that the
/// offer arrived with a default destination for a media component that
/// didn't have a corresponding candidate attribute.
/// </summary>
#pragma clang diagnostic ignored "-Wshorten-64-to-32"
#pragma clang diagnostic ignored "-Wint-to-pointer-cast"

@interface FMIceLinkSDPIceMismatchAttribute : FMIceLinkSDPAttribute 

/// <summary>
/// Initializes a new instance of the <see cref="FMIceLinkSDPIceMismatchAttribute" /> class.
/// </summary>
/// <param name="value">The attribute value.</param>
+ (FMIceLinkSDPIceMismatchAttribute*) fromValueWithValue:(NSString*)value;
/// <summary>
/// Initializes a new instance of the <see cref="FMIceLinkSDPIceMismatchAttribute" /> class.
/// </summary>
/// <param name="value">The attribute value.</param>
+ (FMIceLinkSDPIceMismatchAttribute*) fromValue:(NSString*)value;
- (NSString*) getValue;
/// <summary>
/// Initializes a new instance of the <see cref="FMIceLinkSDPIceMismatchAttribute" /> class.
/// </summary>
- (id) init;
/// <summary>
/// Initializes a new instance of the <see cref="FMIceLinkSDPIceMismatchAttribute" /> class.
/// </summary>
+ (FMIceLinkSDPIceMismatchAttribute*) sdpIceMismatchAttribute;

@end


@class NSStringFMExtensions;

/// <summary>
/// "ice-lite" is a session-level attribute only, and indicates that an
/// agent is a lite implementation.
/// </summary>
#pragma clang diagnostic ignored "-Wshorten-64-to-32"
#pragma clang diagnostic ignored "-Wint-to-pointer-cast"

@interface FMIceLinkSDPIceLiteAttribute : FMIceLinkSDPAttribute 

/// <summary>
/// Initializes a new instance of the <see cref="FMIceLinkSDPIceLiteAttribute" /> class.
/// </summary>
/// <param name="value">The attribute value.</param>
+ (FMIceLinkSDPIceLiteAttribute*) fromValueWithValue:(NSString*)value;
/// <summary>
/// Initializes a new instance of the <see cref="FMIceLinkSDPIceLiteAttribute" /> class.
/// </summary>
/// <param name="value">The attribute value.</param>
+ (FMIceLinkSDPIceLiteAttribute*) fromValue:(NSString*)value;
- (NSString*) getValue;
/// <summary>
/// Initializes a new instance of the <see cref="FMIceLinkSDPIceLiteAttribute" /> class.
/// </summary>
- (id) init;
/// <summary>
/// Initializes a new instance of the <see cref="FMIceLinkSDPIceLiteAttribute" /> class.
/// </summary>
+ (FMIceLinkSDPIceLiteAttribute*) sdpIceLiteAttribute;

@end


@class NSMutableArrayFMExtensions;
@class NSStringFMExtensions;

/// <summary>
/// The attribute contains a connection-address and port for each
/// component.  The ordering of components is irrelevant.  However, a
/// value MUST be present for each component of a media stream.  This
/// attribute MUST be included in an offer by a controlling agent for a
/// media stream that is Completed, and MUST NOT be included in any other
/// case.
/// </summary>
#pragma clang diagnostic ignored "-Wshorten-64-to-32"
#pragma clang diagnostic ignored "-Wint-to-pointer-cast"

@interface FMIceLinkSDPRemoteCandidatesAttribute : FMIceLinkSDPAttribute 

/// <summary>
/// Gets the array of remote candidates.
/// </summary>
- (NSMutableArray*) candidates;
/// <summary>
/// Initializes a new instance of the <see cref="FMIceLinkSDPRemoteCandidatesAttribute" /> class.
/// </summary>
/// <param name="value">The attribute value.</param>
+ (FMIceLinkSDPRemoteCandidatesAttribute*) fromValueWithValue:(NSString*)value;
/// <summary>
/// Initializes a new instance of the <see cref="FMIceLinkSDPRemoteCandidatesAttribute" /> class.
/// </summary>
/// <param name="value">The attribute value.</param>
+ (FMIceLinkSDPRemoteCandidatesAttribute*) fromValue:(NSString*)value;
- (NSString*) getValue;
/// <summary>
/// Initializes a new instance of the <see cref="FMIceLinkSDPRemoteCandidatesAttribute" /> class.
/// </summary>
/// <param name="candidates">The array of remote candidates.</param>
- (id) initWithCandidates:(NSMutableArray*)candidates;
/// <summary>
/// Initializes a new instance of the <see cref="FMIceLinkSDPRemoteCandidatesAttribute" /> class.
/// </summary>
/// <param name="candidates">The array of remote candidates.</param>
+ (FMIceLinkSDPRemoteCandidatesAttribute*) sdpRemoteCandidatesAttributeWithCandidates:(NSMutableArray*)candidates;

@end


@class NSStringFMExtensions;
@class NSMutableDictionaryFMExtensions;

/// <summary>
/// The candidate attribute is a media-level attribute only.  It contains
/// a transport address for a candidate that can be used for connectivity
/// checks.
/// </summary>
#pragma clang diagnostic ignored "-Wshorten-64-to-32"
#pragma clang diagnostic ignored "-Wint-to-pointer-cast"

@interface FMIceLinkSDPCandidateAttribute : FMIceLinkSDPAttribute 

/// <summary>
/// Gets the type of the candidate. See <see cref="FMIceLinkSDPCandidateType" /> for possible values.
/// </summary>
- (NSString*) candidateType;
/// <summary>
/// Gets the ID of the component for which this is a candidate.
/// </summary>
- (int) componentId;
/// <summary>
/// Gets the IP address of the candidate.
/// </summary>
- (NSString*) connectionAddress;
/// <summary>
/// Gets the extensions.
/// </summary>
- (NSMutableDictionary*) extensions;
/// <summary>
/// Gets the candidate's foundation.
/// </summary>
- (NSString*) foundation;
/// <summary>
/// Initializes a new instance of the <see cref="FMIceLinkSDPCandidateAttribute" /> class.
/// </summary>
/// <param name="value">The attribute as a string.</param>
+ (FMIceLinkSDPCandidateAttribute*) fromValueWithValue:(NSString*)value;
/// <summary>
/// Initializes a new instance of the <see cref="FMIceLinkSDPCandidateAttribute" /> class.
/// </summary>
/// <param name="value">The attribute as a string.</param>
+ (FMIceLinkSDPCandidateAttribute*) fromValue:(NSString*)value;
- (NSString*) getValue;
/// <summary>
/// Initializes a new instance of the <see cref="FMIceLinkSDPCandidateAttribute" /> class.
/// </summary>
/// <param name="foundation">The candidate's foundation.</param>
/// <param name="componentId">The ID of the component for which this is a candidate.</param>
/// <param name="priority">The priority of the candidate.</param>
/// <param name="connectionAddress">The IP address of the candidate.</param>
/// <param name="port">The port of the candidate.</param>
/// <param name="candidateType">The type of the candidate. See <see cref="FMIceLinkSDPCandidateType" /> for possible values.</param>
- (id) initWithFoundation:(NSString*)foundation componentId:(int)componentId priority:(long long)priority connectionAddress:(NSString*)connectionAddress port:(int)port candidateType:(NSString*)candidateType;
/// <summary>
/// Initializes a new instance of the <see cref="FMIceLinkSDPCandidateAttribute" /> class.
/// </summary>
/// <param name="foundation">The candidate's foundation.</param>
/// <param name="componentId">The ID of the component for which this is a candidate.</param>
/// <param name="priority">The priority of the candidate.</param>
/// <param name="connectionAddress">The IP address of the candidate.</param>
/// <param name="port">The port of the candidate.</param>
/// <param name="candidateType">The type of the candidate. See <see cref="FMIceLinkSDPCandidateType" /> for possible values.</param>
/// <param name="relatedAddress">The IP address related to the candidate.</param>
/// <param name="relatedPort">The port related to the candidate.</param>
- (id) initWithFoundation:(NSString*)foundation componentId:(int)componentId priority:(long long)priority connectionAddress:(NSString*)connectionAddress port:(int)port candidateType:(NSString*)candidateType relatedAddress:(NSString*)relatedAddress relatedPort:(int)relatedPort;
/// <summary>
/// Gets the port of the candidate.
/// </summary>
- (int) port;
/// <summary>
/// Gets the priority of the candidate.
/// </summary>
- (long long) priority;
/// <summary>
/// Gets the protocol of this candidate.
/// </summary>
- (NSString*) protocol;
/// <summary>
/// Gets the IP address related to the candidate.
/// </summary>
- (NSString*) relatedAddress;
/// <summary>
/// Gets the port related to the candidate.
/// </summary>
- (int) relatedPort;
/// <summary>
/// Initializes a new instance of the <see cref="FMIceLinkSDPCandidateAttribute" /> class.
/// </summary>
/// <param name="foundation">The candidate's foundation.</param>
/// <param name="componentId">The ID of the component for which this is a candidate.</param>
/// <param name="priority">The priority of the candidate.</param>
/// <param name="connectionAddress">The IP address of the candidate.</param>
/// <param name="port">The port of the candidate.</param>
/// <param name="candidateType">The type of the candidate. See <see cref="FMIceLinkSDPCandidateType" /> for possible values.</param>
+ (FMIceLinkSDPCandidateAttribute*) sdpCandidateAttributeWithFoundation:(NSString*)foundation componentId:(int)componentId priority:(long long)priority connectionAddress:(NSString*)connectionAddress port:(int)port candidateType:(NSString*)candidateType;
/// <summary>
/// Initializes a new instance of the <see cref="FMIceLinkSDPCandidateAttribute" /> class.
/// </summary>
/// <param name="foundation">The candidate's foundation.</param>
/// <param name="componentId">The ID of the component for which this is a candidate.</param>
/// <param name="priority">The priority of the candidate.</param>
/// <param name="connectionAddress">The IP address of the candidate.</param>
/// <param name="port">The port of the candidate.</param>
/// <param name="candidateType">The type of the candidate. See <see cref="FMIceLinkSDPCandidateType" /> for possible values.</param>
/// <param name="relatedAddress">The IP address related to the candidate.</param>
/// <param name="relatedPort">The port related to the candidate.</param>
+ (FMIceLinkSDPCandidateAttribute*) sdpCandidateAttributeWithFoundation:(NSString*)foundation componentId:(int)componentId priority:(long long)priority connectionAddress:(NSString*)connectionAddress port:(int)port candidateType:(NSString*)candidateType relatedAddress:(NSString*)relatedAddress relatedPort:(int)relatedPort;

@end


@class NSMutableDataFMExtensions;
@class NSStringFMExtensions;

/// <summary>
/// The PRIORITY attribute indicates the priority that is to be
/// associated with a peer reflexive candidate, should one be discovered
/// by this check.
/// </summary>
#pragma clang diagnostic ignored "-Wshorten-64-to-32"
#pragma clang diagnostic ignored "-Wint-to-pointer-cast"

@interface FMIceLinkSTUNPriorityAttribute : FMIceLinkSTUNAttribute 

/// <summary>
/// Initializes a new instance of the <see cref="FMIceLinkSTUNPriorityAttribute" /> class.
/// </summary>
/// <param name="valueBytes">The attribute value as a byte array.</param>
+ (FMIceLinkSTUNPriorityAttribute*) fromValueBytesWithValueBytes:(NSMutableData*)valueBytes;
/// <summary>
/// Initializes a new instance of the <see cref="FMIceLinkSTUNPriorityAttribute" /> class.
/// </summary>
/// <param name="valueBytes">The attribute value as a byte array.</param>
+ (FMIceLinkSTUNPriorityAttribute*) fromValueBytes:(NSMutableData*)valueBytes;
- (NSMutableData*) getValueBytes;
/// <summary>
/// Initializes a new instance of the <see cref="FMIceLinkSTUNPriorityAttribute" /> class.
/// </summary>
/// <param name="priority">The priority.</param>
- (id) initWithPriority:(long long)priority;
/// <summary>
/// Gets the priority.
/// </summary>
- (long long) priority;
/// <summary>
/// Sets the priority.
/// </summary>
- (void) setPriority:(long long)value;
/// <summary>
/// Initializes a new instance of the <see cref="FMIceLinkSTUNPriorityAttribute" /> class.
/// </summary>
/// <param name="priority">The priority.</param>
+ (FMIceLinkSTUNPriorityAttribute*) stunPriorityAttributeWithPriority:(long long)priority;
/// <summary>
/// Returns a string that represents this instance.
/// </summary>
/// <returns>
/// A string that represents this instance.
/// </returns>
- (NSString*) toString;
/// <summary>
/// Returns a string that represents this instance.
/// </summary>
/// <returns>
/// A string that represents this instance.
/// </returns>
- (NSString*) description;

@end


@class FMIceLinkCreateSuccessArgs;
@class FMIceLinkCreateFailureArgs;
@class FMIceLinkCreateCompleteArgs;
@class FMCallback;
@class NSStringFMExtensions;

/// <summary>
/// Arguments for link create invocations.
/// </summary>
#pragma clang diagnostic ignored "-Wshorten-64-to-32"
#pragma clang diagnostic ignored "-Wint-to-pointer-cast"

@interface FMIceLinkCreateArgs : FMDynamic 

+ (FMIceLinkCreateArgs*) createArgs;
/// <summary>
/// Deserializes an instance from JSON.
/// </summary>
/// <param name="createArgsJson">The JSON to deserialize.</param>
/// <returns>The deserialized create arguments.</returns>
+ (FMIceLinkCreateArgs*) fromJsonWithCreateArgsJson:(NSString*)createArgsJson;
- (id) init;
/// <summary>
/// Gets the callback to invoke when the create operation completes.
/// </summary>
- (FMCallback*) onComplete;
/// <summary>
/// Gets the callback to invoke if the create operation fails.
/// </summary>
- (FMCallback*) onFailure;
/// <summary>
/// Gets the callback to invoke if the create operation completes successfully.
/// </summary>
- (FMCallback*) onSuccess;
/// <summary>
/// Sets the callback to invoke when the create operation completes.
/// </summary>
- (void) setOnComplete:(FMCallback*)value;
/// <summary>
/// Sets the callback to invoke when the create operation completes.
/// </summary>
- (void) setOnCompleteBlock:(void (^) (FMIceLinkCreateCompleteArgs*))valueBlock;
/// <summary>
/// Sets the callback to invoke if the create operation fails.
/// </summary>
- (void) setOnFailure:(FMCallback*)value;
/// <summary>
/// Sets the callback to invoke if the create operation fails.
/// </summary>
- (void) setOnFailureBlock:(void (^) (FMIceLinkCreateFailureArgs*))valueBlock;
/// <summary>
/// Sets the callback to invoke if the create operation completes successfully.
/// </summary>
- (void) setOnSuccess:(FMCallback*)value;
/// <summary>
/// Sets the callback to invoke if the create operation completes successfully.
/// </summary>
- (void) setOnSuccessBlock:(void (^) (FMIceLinkCreateSuccessArgs*))valueBlock;
/// <summary>
/// Serializes this instance to JSON.
/// </summary>
/// <returns></returns>
- (NSString*) toJson;
/// <summary>
/// Serializes an instance to JSON.
/// </summary>
/// <param name="createArgs">The create arguments to serialize.</param>
/// <returns>The serialized JSON.</returns>
+ (NSString*) toJsonWithCreateArgs:(FMIceLinkCreateArgs*)createArgs;

@end


@class NSDateFMExtensions;

/// <summary>
/// Utility class to assist with Network Time Protocol (NTP) conversions.
/// </summary>
#pragma clang diagnostic ignored "-Wshorten-64-to-32"
#pragma clang diagnostic ignored "-Wint-to-pointer-cast"

@interface FMIceLinkNetworkTimeProtocol : NSObject 

/// <summary>
/// Converts a compact NTP timestamp (32 bits) to a date.
/// </summary>
/// <param name="ntp">The NTP timestamp to convert.</param>
/// <returns>The equivalent date.</returns>
+ (NSDate*) compactNTPToDateTimeWithNtp:(long long)ntp;
/// <summary>
/// Converts a date to a compact NTP timestamp (32 bits).
/// </summary>
/// <param name="dateTime">The date to convert.</param>
/// <returns>The equivalent NTP timestamp.</returns>
+ (long long) dateTimeToCompactNTPWithDateTime:(NSDate*)dateTime;
/// <summary>
/// Converts a date to an NTP timestamp (double).
/// </summary>
/// <param name="dateTime">The date to convert.</param>
/// <returns>The equivalent NTP timestamp.</returns>
+ (double) dateTimeToNTPSecondsWithDateTime:(NSDate*)dateTime;
/// <summary>
/// Converts a date to an NTP timestamp (64 bits).
/// </summary>
/// <param name="dateTime">The date to convert.</param>
/// <returns>The equivalent NTP timestamp.</returns>
+ (long long) dateTimeToNTPWithDateTime:(NSDate*)dateTime;
- (id) init;
+ (FMIceLinkNetworkTimeProtocol*) networkTimeProtocol;
/// <summary>
/// Converts an NTP timestamp (double) to a date.
/// </summary>
/// <param name="ntpSeconds">The NTP timestamp to convert.</param>
/// <returns>The equivalent date.</returns>
+ (NSDate*) ntpSecondsToDateTimeWithNtpSeconds:(double)ntpSeconds;
/// <summary>
/// Converts an NTP timestamp (64 bits) to a date.
/// </summary>
/// <param name="ntp">The NTP timestamp to convert.</param>
/// <returns>The equivalent date.</returns>
+ (NSDate*) ntpToDateTimeWithNtp:(long long)ntp;
/// <summary>
/// Gets the current UTC time in NTP format.
/// </summary>
+ (long long) utcNow;

@end


@class NSStringFMExtensions;

/// <summary>
/// The RTCP attribute is used to document the RTCP port used for media
/// stream, when that port is not the next higher (odd) port number
/// following the RTP port described in the media line.
/// </summary>
#pragma clang diagnostic ignored "-Wshorten-64-to-32"
#pragma clang diagnostic ignored "-Wint-to-pointer-cast"

@interface FMIceLinkSDPRtcpAttribute : FMIceLinkSDPAttribute 

/// <summary>
/// Gets the type of the address. See <see cref="FMIceLinkSDPAddressType" /> for possible values.
/// </summary>
- (NSString*) addressType;
/// <summary>
/// Gets the RTCP connection address.
/// </summary>
- (NSString*) connectionAddress;
/// <summary>
/// Initializes a new instance of the <see cref="FMIceLinkSDPRtcpAttribute" /> class.
/// </summary>
/// <param name="value">The attribute value.</param>
+ (FMIceLinkSDPRtcpAttribute*) fromValueWithValue:(NSString*)value;
/// <summary>
/// Initializes a new instance of the <see cref="FMIceLinkSDPRtcpAttribute" /> class.
/// </summary>
/// <param name="value">The attribute value.</param>
+ (FMIceLinkSDPRtcpAttribute*) fromValue:(NSString*)value;
- (NSString*) getValue;
/// <summary>
/// Initializes a new instance of the <see cref="FMIceLinkSDPRtcpAttribute" /> class.
/// </summary>
/// <param name="port">The RTCP port number.</param>
/// <param name="connectionAddress">The RTCP connection address.</param>
- (id) initWithPort:(int)port connectionAddress:(NSString*)connectionAddress;
/// <summary>
/// Gets the type of network. See <see cref="FMIceLinkSDPNetworkType" /> for possible values.
/// </summary>
- (NSString*) networkType;
/// <summary>
/// Gets the RTCP port number.
/// </summary>
- (int) port;
/// <summary>
/// Initializes a new instance of the <see cref="FMIceLinkSDPRtcpAttribute" /> class.
/// </summary>
/// <param name="port">The RTCP port number.</param>
/// <param name="connectionAddress">The RTCP connection address.</param>
+ (FMIceLinkSDPRtcpAttribute*) sdpRtcpAttributeWithPort:(int)port connectionAddress:(NSString*)connectionAddress;
/// <summary>
/// Updates the port and connection address.
/// </summary>
/// <param name="port">The port.</param>
/// <param name="connectionAddress">The connection address.</param>
- (void) updateWithPort:(int)port connectionAddress:(NSString*)connectionAddress;

@end


@class NSStringFMExtensions;
@class NSMutableArrayFMExtensions;

/// <summary>
/// An SDP media description with a transport protocol of "RTP/AVP" or "RTP/SAVP".
/// </summary>
#pragma clang diagnostic ignored "-Wshorten-64-to-32"
#pragma clang diagnostic ignored "-Wint-to-pointer-cast"

@interface FMIceLinkSDPRtpAvpMedia : FMIceLinkSDPMedia 

/// <summary>
/// Gets the string value of an RTP mode from an enum.
/// </summary>
/// <param name="rtpMode">The RTP mode.</param>
/// <param name="encrypted">Whether the stream is encrypted.</param>
/// <returns></returns>
+ (NSString*) fromRtpModeWithRtpMode:(FMIceLinkRtpMode)rtpMode encrypted:(bool)encrypted;
/// <summary>
/// Gets the string value of an RTP mode from an enum.
/// </summary>
/// <param name="rtpMode">The RTP mode.</param>
/// <param name="encrypted">Whether the stream is encrypted.</param>
/// <returns></returns>
+ (NSString*) fromRtpMode:(FMIceLinkRtpMode)rtpMode encrypted:(bool)encrypted;
/// <summary>
/// Initializes a new instance of the <see cref="FMIceLinkSDPRtpAvpMedia" /> class.
/// </summary>
/// <param name="mediaType">The media type. See <see cref="FMIceLinkSDPMediaType" /> for possible values.</param>
/// <param name="transportPort">The transport port.</param>
/// <param name="transportProtocol">The transport protocol.</param>
/// <param name="rtpPayloadTypeNumbers">The RTP payload type numbers.</param>
- (id) initWithMediaType:(NSString*)mediaType transportPort:(int)transportPort transportProtocol:(NSString*)transportProtocol rtpPayloadTypeNumbers:(NSMutableArray*)rtpPayloadTypeNumbers;
/// <summary>
/// Gets the protocol keyword for the extended RTP audio/video profile.
/// </summary>
+ (NSString*) rtpAvpfTransportProtocol;
/// <summary>
/// Gets the protocol keyword for the RTP audio/video profile.
/// </summary>
+ (NSString*) rtpAvpTransportProtocol;
/// <summary>
/// Gets the protocol keyword for the extended Secure RTP audio/video profile.
/// </summary>
+ (NSString*) rtpSavpfTransportProtocol;
/// <summary>
/// Gets the protocol keyword for the Secure RTP audio/video profile.
/// </summary>
+ (NSString*) rtpSavpTransportProtocol;
/// <summary>
/// Initializes a new instance of the <see cref="FMIceLinkSDPRtpAvpMedia" /> class.
/// </summary>
/// <param name="mediaType">The media type. See <see cref="FMIceLinkSDPMediaType" /> for possible values.</param>
/// <param name="transportPort">The transport port.</param>
/// <param name="transportProtocol">The transport protocol.</param>
/// <param name="rtpPayloadTypeNumbers">The RTP payload type numbers.</param>
+ (FMIceLinkSDPRtpAvpMedia*) sdpRtpAvpMediaWithMediaType:(NSString*)mediaType transportPort:(int)transportPort transportProtocol:(NSString*)transportProtocol rtpPayloadTypeNumbers:(NSMutableArray*)rtpPayloadTypeNumbers;
/// <summary>
/// Initializes a new instance of the <see cref="FMIceLinkSDPRtpAvpMedia" /> class.
/// </summary>
/// <param name="mediaType">The media type. See <see cref="FMIceLinkSDPMediaType" /> for possible values.</param>
/// <param name="transportPort">The transport port.</param>
/// <param name="transportProtocol">The transport protocol.</param>
/// <param name="rtpPayloadTypeNumbers">The RTP payload type numbers.</param>
+ (FMIceLinkSDPRtpAvpMedia*) sdpRtpAvpMediaWithType:(NSString*)mediaType transportPort:(int)transportPort transportProtocol:(NSString*)transportProtocol rtpPayloadTypeNumbers:(NSMutableArray*)rtpPayloadTypeNumbers;
/// <summary>
/// Gets the enum value of an RTP mode from a string.
/// </summary>
/// <param name="rtpAvpMedia">The RTP mode.</param>
/// <returns></returns>
+ (FMIceLinkRtpMode) toRtpModeWithRtpAvpMedia:(NSString*)rtpAvpMedia;

@end


@class NSStringFMExtensions;

/// <summary>
/// An SDP media description with a transport protocol of "udp".
/// </summary>
#pragma clang diagnostic ignored "-Wshorten-64-to-32"
#pragma clang diagnostic ignored "-Wint-to-pointer-cast"

@interface FMIceLinkSDPUdpMedia : FMIceLinkSDPMedia 

/// <summary>
/// Initializes a new instance of the <see cref="FMIceLinkSDPUdpMedia" /> class.
/// </summary>
/// <param name="mediaType">The media type. See <see cref="FMIceLinkSDPMediaType" /> for possible values.</param>
/// <param name="transportPort">The transport port.</param>
/// <param name="formatDescription">The format description.</param>
- (id) initWithMediaType:(NSString*)mediaType transportPort:(int)transportPort formatDescription:(NSString*)formatDescription;
/// <summary>
/// Initializes a new instance of the <see cref="FMIceLinkSDPUdpMedia" /> class.
/// </summary>
/// <param name="mediaType">The media type. See <see cref="FMIceLinkSDPMediaType" /> for possible values.</param>
/// <param name="transportPort">The transport port.</param>
/// <param name="formatDescription">The format description.</param>
+ (FMIceLinkSDPUdpMedia*) sdpUdpMediaWithMediaType:(NSString*)mediaType transportPort:(int)transportPort formatDescription:(NSString*)formatDescription;
/// <summary>
/// Initializes a new instance of the <see cref="FMIceLinkSDPUdpMedia" /> class.
/// </summary>
/// <param name="mediaType">The media type. See <see cref="FMIceLinkSDPMediaType" /> for possible values.</param>
/// <param name="transportPort">The transport port.</param>
/// <param name="formatDescription">The format description.</param>
+ (FMIceLinkSDPUdpMedia*) sdpUdpMediaWithType:(NSString*)mediaType transportPort:(int)transportPort formatDescription:(NSString*)formatDescription;
/// <summary>
/// Gets the protocol keyword for UDP.
/// </summary>
+ (NSString*) udpTransportProtocol;

@end


@class NSStringFMExtensions;

/// <summary>
/// An SDP encryption key element.
/// </summary>
#pragma clang diagnostic ignored "-Wshorten-64-to-32"
#pragma clang diagnostic ignored "-Wint-to-pointer-cast"

@interface FMIceLinkSDPEncryptionKey : NSObject 

- (NSString*) getMethodAndValue;
- (id) init;
/// <summary>
/// Creates an <see cref="FMIceLinkSDPEncryptionKey" /> instance from a string.
/// </summary>
/// <param name="s">The string to parse.</param>
/// <returns></returns>
+ (FMIceLinkSDPEncryptionKey*) parseWithS:(NSString*)s;
+ (FMIceLinkSDPEncryptionKey*) sdpEncryptionKey;
/// <summary>
/// Converts this instance to a string.
/// </summary>
/// <returns></returns>
- (NSString*) toString;
/// <summary>
/// Converts this instance to a string.
/// </summary>
/// <returns></returns>
- (NSString*) description;

@end


@class NSStringFMExtensions;

/// <summary>
/// An SDP encryption key with a method of "prompt".
/// </summary>
#pragma clang diagnostic ignored "-Wshorten-64-to-32"
#pragma clang diagnostic ignored "-Wint-to-pointer-cast"

@interface FMIceLinkSDPPromptEncryptionKey : FMIceLinkSDPEncryptionKey 

- (NSString*) getMethodAndValue;
- (id) init;
+ (FMIceLinkSDPPromptEncryptionKey*) sdpPromptEncryptionKey;

@end


@class NSURLFMExtensions;
@class NSStringFMExtensions;

/// <summary>
/// An SDP encryption key with a method of "uri".
/// </summary>
#pragma clang diagnostic ignored "-Wshorten-64-to-32"
#pragma clang diagnostic ignored "-Wint-to-pointer-cast"

@interface FMIceLinkSDPUriEncryptionKey : FMIceLinkSDPEncryptionKey 

- (NSString*) getMethodAndValue;
/// <summary>
/// Initializes a new instance of the <see cref="FMIceLinkSDPUriEncryptionKey" /> class.
/// </summary>
/// <param name="uri">The URI referring to the data containing the key.</param>
- (id) initWithUri:(NSURL*)uri;
/// <summary>
/// Initializes a new instance of the <see cref="FMIceLinkSDPUriEncryptionKey" /> class.
/// </summary>
/// <param name="uri">The URI referring to the data containing the key.</param>
+ (FMIceLinkSDPUriEncryptionKey*) sdpUriEncryptionKeyWithUri:(NSURL*)uri;
/// <summary>
/// Gets the URI referring to the data containing the key.
/// </summary>
- (NSURL*) uri;

@end


@class NSStringFMExtensions;

/// <summary>
/// An SDP encryption key with a method of "base64".
/// </summary>
#pragma clang diagnostic ignored "-Wshorten-64-to-32"
#pragma clang diagnostic ignored "-Wint-to-pointer-cast"

@interface FMIceLinkSDPBase64EncryptionKey : FMIceLinkSDPEncryptionKey 

/// <summary>
/// Gets the base64-encoded encryption key.
/// </summary>
- (NSString*) encodedEncryptionKey;
- (NSString*) getMethodAndValue;
/// <summary>
/// Initializes a new instance of the <see cref="FMIceLinkSDPBase64EncryptionKey" /> class.
/// </summary>
/// <param name="encodedEncryptionKey">The base64-encoded encryption key.</param>
- (id) initWithEncodedEncryptionKey:(NSString*)encodedEncryptionKey;
/// <summary>
/// Initializes a new instance of the <see cref="FMIceLinkSDPBase64EncryptionKey" /> class.
/// </summary>
/// <param name="encodedEncryptionKey">The base64-encoded encryption key.</param>
+ (FMIceLinkSDPBase64EncryptionKey*) sdpBase64EncryptionKeyWithEncodedEncryptionKey:(NSString*)encodedEncryptionKey;

@end


@class NSStringFMExtensions;

/// <summary>
/// An SDP encryption key with a method of "clear".
/// </summary>
#pragma clang diagnostic ignored "-Wshorten-64-to-32"
#pragma clang diagnostic ignored "-Wint-to-pointer-cast"

@interface FMIceLinkSDPClearEncryptionKey : FMIceLinkSDPEncryptionKey 

/// <summary>
/// Gets the untransformed encryption key.
/// </summary>
- (NSString*) encryptionKey;
- (NSString*) getMethodAndValue;
/// <summary>
/// Initializes a new instance of the <see cref="FMIceLinkSDPClearEncryptionKey" /> class.
/// </summary>
/// <param name="encryptionKey">The untransformed encryption key.</param>
- (id) initWithEncryptionKey:(NSString*)encryptionKey;
/// <summary>
/// Initializes a new instance of the <see cref="FMIceLinkSDPClearEncryptionKey" /> class.
/// </summary>
/// <param name="encryptionKey">The untransformed encryption key.</param>
+ (FMIceLinkSDPClearEncryptionKey*) sdpClearEncryptionKeyWithEncryptionKey:(NSString*)encryptionKey;
/// <summary>
/// Initializes a new instance of the <see cref="FMIceLinkSDPClearEncryptionKey" /> class.
/// </summary>
/// <param name="encryptionKey">The untransformed encryption key.</param>
+ (FMIceLinkSDPClearEncryptionKey*) sdpClearEncryptionKey:(NSString*)encryptionKey;

@end


@class NSStringFMExtensions;

/// <summary>
/// Defines valid SDP conference types.
/// </summary>
#pragma clang diagnostic ignored "-Wshorten-64-to-32"
#pragma clang diagnostic ignored "-Wint-to-pointer-cast"

@interface FMIceLinkSDPConferenceType : NSObject 

/// <summary>
/// Gets the SDP conference type meaning "Broadcast", which should imply receive-only.
/// </summary>
+ (NSString*) broadcast;
/// <summary>
/// Gets the SDP conference type meaning "H332", which should imply receive-only and
/// indicate that this loosely coupled session is part of an H.332 session.
/// </summary>
+ (NSString*) h332;
/// <summary>
/// Gets the SDP conference type meaning "Meeting", which should imply send-receive.
/// </summary>
+ (NSString*) meeting;
/// <summary>
/// Gets the SDP conference type meaning "Moderated", which should indicate the use of
/// a floor control tool and that the media tools are started so as to mute
/// new sites joining the conference.
/// </summary>
+ (NSString*) moderated;
/// <summary>
/// Gets the SDP conference type meaning "Test", which should imply that unless
/// explicitly requested otherwise, receivers can safely avoid displaying
/// this session description to users.
/// </summary>
+ (NSString*) test;

@end


@class NSStringFMExtensions;

/// <summary>
/// Defines valid SDP orientations.
/// </summary>
#pragma clang diagnostic ignored "-Wshorten-64-to-32"
#pragma clang diagnostic ignored "-Wint-to-pointer-cast"

@interface FMIceLinkSDPOrientation : NSObject 

/// <summary>
/// Gets the SDP orientation meaning "Landscape".
/// </summary>
+ (NSString*) landscape;
/// <summary>
/// Gets the SDP orientation meaning "Portrait".
/// </summary>
+ (NSString*) portrait;
/// <summary>
/// Gets the SDP orientation meaning "Upside-Down Landscape".
/// </summary>
+ (NSString*) seascape;

@end


@class NSStringFMExtensions;

/// <summary>
/// This specifies that the tools should be started in receive-only
/// mode where applicable.  It can be either a session- or media-
/// level attribute, and it is not dependent on charset.  Note that
/// recvonly applies to the media only, not to any associated
/// control protocol (e.g., an RTP-based system in recvonly mode
/// SHOULD still send RTCP packets).
/// </summary>
#pragma clang diagnostic ignored "-Wshorten-64-to-32"
#pragma clang diagnostic ignored "-Wint-to-pointer-cast"

@interface FMIceLinkSDPReceiveOnlyAttribute : FMIceLinkSDPAttribute 

/// <summary>
/// Initializes a new instance of the <see cref="FMIceLinkSDPReceiveOnlyAttribute" /> class.
/// </summary>
/// <param name="value">The attribute value.</param>
+ (FMIceLinkSDPReceiveOnlyAttribute*) fromValueWithValue:(NSString*)value;
/// <summary>
/// Initializes a new instance of the <see cref="FMIceLinkSDPReceiveOnlyAttribute" /> class.
/// </summary>
/// <param name="value">The attribute value.</param>
+ (FMIceLinkSDPReceiveOnlyAttribute*) fromValue:(NSString*)value;
- (NSString*) getValue;
/// <summary>
/// Initializes a new instance of the <see cref="FMIceLinkSDPReceiveOnlyAttribute" /> class.
/// </summary>
- (id) init;
/// <summary>
/// Initializes a new instance of the <see cref="FMIceLinkSDPReceiveOnlyAttribute" /> class.
/// </summary>
+ (FMIceLinkSDPReceiveOnlyAttribute*) sdpReceiveOnlyAttribute;

@end


@class NSStringFMExtensions;

/// <summary>
/// This specifies that the tools should be started in send and
/// receive mode.  This is necessary for interactive conferences
/// with tools that default to receive-only mode.  It can be either
/// a session or media-level attribute, and it is not dependent on
/// charset.
/// </summary>
#pragma clang diagnostic ignored "-Wshorten-64-to-32"
#pragma clang diagnostic ignored "-Wint-to-pointer-cast"

@interface FMIceLinkSDPSendReceiveAttribute : FMIceLinkSDPAttribute 

/// <summary>
/// Initializes a new instance of the <see cref="FMIceLinkSDPSendReceiveAttribute" /> class.
/// </summary>
/// <param name="value">The attribute value.</param>
+ (FMIceLinkSDPSendReceiveAttribute*) fromValueWithValue:(NSString*)value;
/// <summary>
/// Initializes a new instance of the <see cref="FMIceLinkSDPSendReceiveAttribute" /> class.
/// </summary>
/// <param name="value">The attribute value.</param>
+ (FMIceLinkSDPSendReceiveAttribute*) fromValue:(NSString*)value;
- (NSString*) getValue;
/// <summary>
/// Initializes a new instance of the <see cref="FMIceLinkSDPSendReceiveAttribute" /> class.
/// </summary>
- (id) init;
/// <summary>
/// Initializes a new instance of the <see cref="FMIceLinkSDPSendReceiveAttribute" /> class.
/// </summary>
+ (FMIceLinkSDPSendReceiveAttribute*) sdpSendReceiveAttribute;

@end


@class NSStringFMExtensions;

/// <summary>
/// This specifies that the tools should be started in send-only
/// mode.  An example may be where a different unicast address is
/// to be used for a traffic destination than for a traffic source.
/// In such a case, two media descriptions may be used, one
/// sendonly and one recvonly.  It can be either a session- or
/// media-level attribute, but would normally only be used as a
/// media attribute.  It is not dependent on charset.  Note that
/// sendonly applies only to the media, and any associated control
/// protocol (e.g., RTCP) SHOULD still be received and processed as
/// normal.
/// </summary>
#pragma clang diagnostic ignored "-Wshorten-64-to-32"
#pragma clang diagnostic ignored "-Wint-to-pointer-cast"

@interface FMIceLinkSDPSendOnlyAttribute : FMIceLinkSDPAttribute 

/// <summary>
/// Initializes a new instance of the <see cref="FMIceLinkSDPSendOnlyAttribute" /> class.
/// </summary>
/// <param name="value">The attribute value.</param>
+ (FMIceLinkSDPSendOnlyAttribute*) fromValueWithValue:(NSString*)value;
/// <summary>
/// Initializes a new instance of the <see cref="FMIceLinkSDPSendOnlyAttribute" /> class.
/// </summary>
/// <param name="value">The attribute value.</param>
+ (FMIceLinkSDPSendOnlyAttribute*) fromValue:(NSString*)value;
- (NSString*) getValue;
/// <summary>
/// Initializes a new instance of the <see cref="FMIceLinkSDPSendOnlyAttribute" /> class.
/// </summary>
- (id) init;
/// <summary>
/// Initializes a new instance of the <see cref="FMIceLinkSDPSendOnlyAttribute" /> class.
/// </summary>
+ (FMIceLinkSDPSendOnlyAttribute*) sdpSendOnlyAttribute;

@end


@class NSStringFMExtensions;

/// <summary>
/// This specifies that the tools should be started in inactive
/// mode.  This is necessary for interactive conferences where
/// users can put other users on hold.  No media is sent over an
/// inactive media stream.  Note that an RTP-based system SHOULD
/// still send RTCP, even if started inactive.  It can be either a
/// session or media-level attribute, and it is not dependent on
/// charset.
/// </summary>
#pragma clang diagnostic ignored "-Wshorten-64-to-32"
#pragma clang diagnostic ignored "-Wint-to-pointer-cast"

@interface FMIceLinkSDPInactiveAttribute : FMIceLinkSDPAttribute 

/// <summary>
/// Initializes a new instance of the <see cref="FMIceLinkSDPInactiveAttribute" /> class.
/// </summary>
/// <param name="value">The attribute value.</param>
+ (FMIceLinkSDPInactiveAttribute*) fromValueWithValue:(NSString*)value;
/// <summary>
/// Initializes a new instance of the <see cref="FMIceLinkSDPInactiveAttribute" /> class.
/// </summary>
/// <param name="value">The attribute value.</param>
+ (FMIceLinkSDPInactiveAttribute*) fromValue:(NSString*)value;
- (NSString*) getValue;
/// <summary>
/// Initializes a new instance of the <see cref="FMIceLinkSDPInactiveAttribute" /> class.
/// </summary>
- (id) init;
/// <summary>
/// Initializes a new instance of the <see cref="FMIceLinkSDPInactiveAttribute" /> class.
/// </summary>
+ (FMIceLinkSDPInactiveAttribute*) sdpInactiveAttribute;

@end


@class NSStringFMExtensions;

/// <summary>
/// Normally this is only used for a whiteboard or presentation
/// tool.  It specifies the orientation of a the workspace on the
/// screen.  It is a media-level attribute.  Permitted values are
/// "portrait", "landscape", and "seascape" (upside-down
/// landscape).  It is not dependent on charset.
/// </summary>
#pragma clang diagnostic ignored "-Wshorten-64-to-32"
#pragma clang diagnostic ignored "-Wint-to-pointer-cast"

@interface FMIceLinkSDPOrientationAttribute : FMIceLinkSDPAttribute 

/// <summary>
/// Initializes a new instance of the <see cref="FMIceLinkSDPOrientationAttribute" /> class.
/// </summary>
/// <param name="value">The attribute value.</param>
+ (FMIceLinkSDPOrientationAttribute*) fromValueWithValue:(NSString*)value;
/// <summary>
/// Initializes a new instance of the <see cref="FMIceLinkSDPOrientationAttribute" /> class.
/// </summary>
/// <param name="value">The attribute value.</param>
+ (FMIceLinkSDPOrientationAttribute*) fromValue:(NSString*)value;
- (NSString*) getValue;
/// <summary>
/// Initializes a new instance of the <see cref="FMIceLinkSDPOrientationAttribute" /> class.
/// </summary>
/// <param name="orientation">The orientation of a workspace on the screen. See <see cref="FMIceLinkSDPOrientation" /> for possible values.</param>
- (id) initWithOrientation:(NSString*)orientation;
/// <summary>
/// Gets the orientation of a workspace on the screen. See <see cref="FMIceLinkSDPOrientation" /> for possible values.
/// </summary>
- (NSString*) orientation;
/// <summary>
/// Initializes a new instance of the <see cref="FMIceLinkSDPOrientationAttribute" /> class.
/// </summary>
/// <param name="orientation">The orientation of a workspace on the screen. See <see cref="FMIceLinkSDPOrientation" /> for possible values.</param>
+ (FMIceLinkSDPOrientationAttribute*) sdpOrientationAttributeWithOrientation:(NSString*)orientation;

@end


@class NSStringFMExtensions;

/// <summary>
/// This specifies the type of the conference.  Suggested values
/// are "broadcast", "meeting", "moderated", "test", and "H332".
/// "recvonly" should be the default for "type:broadcast" sessions,
/// "type:meeting" should imply "sendrecv", and "type:moderated"
/// should indicate the use of a floor control tool and that the
/// media tools are started so as to mute new sites joining the
/// conference.
/// </summary>
#pragma clang diagnostic ignored "-Wshorten-64-to-32"
#pragma clang diagnostic ignored "-Wint-to-pointer-cast"

@interface FMIceLinkSDPConferenceTypeAttribute : FMIceLinkSDPAttribute 

/// <summary>
/// Gets the type of the conference. See <see cref="FMIceLinkSDPConferenceType" /> for possible values.
/// </summary>
- (NSString*) conferenceType;
/// <summary>
/// Initializes a new instance of the <see cref="FMIceLinkSDPConferenceTypeAttribute" /> class.
/// </summary>
/// <param name="value">The attribute value.</param>
+ (FMIceLinkSDPConferenceTypeAttribute*) fromValueWithValue:(NSString*)value;
/// <summary>
/// Initializes a new instance of the <see cref="FMIceLinkSDPConferenceTypeAttribute" /> class.
/// </summary>
/// <param name="value">The attribute value.</param>
+ (FMIceLinkSDPConferenceTypeAttribute*) fromValue:(NSString*)value;
- (NSString*) getValue;
/// <summary>
/// Initializes a new instance of the <see cref="FMIceLinkSDPConferenceTypeAttribute" /> class.
/// </summary>
/// <param name="conferenceType">The type of the conference. See <see cref="FMIceLinkSDPConferenceType" /> for possible values.</param>
- (id) initWithConferenceType:(NSString*)conferenceType;
/// <summary>
/// Initializes a new instance of the <see cref="FMIceLinkSDPConferenceTypeAttribute" /> class.
/// </summary>
/// <param name="conferenceType">The type of the conference. See <see cref="FMIceLinkSDPConferenceType" /> for possible values.</param>
+ (FMIceLinkSDPConferenceTypeAttribute*) sdpConferenceTypeAttributeWithConferenceType:(NSString*)conferenceType;

@end


@class NSStringFMExtensions;

/// <summary>
/// This specifies the character set to be used to display the
/// session name and information data.  By default, the ISO-10646
/// character set in UTF-8 encoding is used.  If a more compact
/// representation is required, other character sets may be used.
/// For example, the ISO 8859-1 is specified with the following SDP
/// attribute:
/// 
/// a=charset:ISO-8859-1
/// </summary>
#pragma clang diagnostic ignored "-Wshorten-64-to-32"
#pragma clang diagnostic ignored "-Wint-to-pointer-cast"

@interface FMIceLinkSDPCharacterSetAttribute : FMIceLinkSDPAttribute 

/// <summary>
/// Gets the character set to be used to display the session name and information data.
/// </summary>
- (NSString*) characterSet;
/// <summary>
/// Initializes a new instance of the <see cref="FMIceLinkSDPCharacterSetAttribute" /> class.
/// </summary>
/// <param name="value">The attribute value.</param>
+ (FMIceLinkSDPCharacterSetAttribute*) fromValueWithValue:(NSString*)value;
/// <summary>
/// Initializes a new instance of the <see cref="FMIceLinkSDPCharacterSetAttribute" /> class.
/// </summary>
/// <param name="value">The attribute value.</param>
+ (FMIceLinkSDPCharacterSetAttribute*) fromValue:(NSString*)value;
- (NSString*) getValue;
/// <summary>
/// Initializes a new instance of the <see cref="FMIceLinkSDPCharacterSetAttribute" /> class.
/// </summary>
/// <param name="characterSet">The character set to be used to display the session name and information data.</param>
- (id) initWithCharacterSet:(NSString*)characterSet;
/// <summary>
/// Initializes a new instance of the <see cref="FMIceLinkSDPCharacterSetAttribute" /> class.
/// </summary>
/// <param name="characterSet">The character set to be used to display the session name and information data.</param>
+ (FMIceLinkSDPCharacterSetAttribute*) sdpCharacterSetAttributeWithCharacterSet:(NSString*)characterSet;

@end


@class NSStringFMExtensions;

/// <summary>
/// This can be a session-level attribute or a media-level
/// attribute.  As a session-level attribute, it specifies the
/// language for the session description.  As a media-level
/// attribute, it specifies the language for any media-level SDP
/// information field associated with that media.  Multiple sdplang
/// attributes can be provided either at session or media level if
/// multiple languages in the session description or media use
/// multiple languages, in which case the order of the attributes
/// indicates the order of importance of the various languages in
/// the session or media from most important to least important.
/// </summary>
#pragma clang diagnostic ignored "-Wshorten-64-to-32"
#pragma clang diagnostic ignored "-Wint-to-pointer-cast"

@interface FMIceLinkSDPSdpLanguageAttribute : FMIceLinkSDPAttribute 

/// <summary>
/// Initializes a new instance of the <see cref="FMIceLinkSDPSdpLanguageAttribute" /> class.
/// </summary>
/// <param name="value">The attribute value.</param>
+ (FMIceLinkSDPSdpLanguageAttribute*) fromValueWithValue:(NSString*)value;
/// <summary>
/// Initializes a new instance of the <see cref="FMIceLinkSDPSdpLanguageAttribute" /> class.
/// </summary>
/// <param name="value">The attribute value.</param>
+ (FMIceLinkSDPSdpLanguageAttribute*) fromValue:(NSString*)value;
- (NSString*) getValue;
/// <summary>
/// Initializes a new instance of the <see cref="FMIceLinkSDPSdpLanguageAttribute" /> class.
/// </summary>
/// <param name="languageTag">The language for either the session description
/// (if used as a session-level attribute) or any media-level SDP
/// information field associated with that media (if used as a
/// media-level attribute).</param>
- (id) initWithLanguageTag:(NSString*)languageTag;
/// <summary>
/// Gets the language for either the session description
/// (if used as a session-level attribute) or any media-level SDP
/// information field associated with that media (if used as a
/// media-level attribute).
/// </summary>
- (NSString*) languageTag;
/// <summary>
/// Initializes a new instance of the <see cref="FMIceLinkSDPSdpLanguageAttribute" /> class.
/// </summary>
/// <param name="languageTag">The language for either the session description
/// (if used as a session-level attribute) or any media-level SDP
/// information field associated with that media (if used as a
/// media-level attribute).</param>
+ (FMIceLinkSDPSdpLanguageAttribute*) sdpSdpLanguageAttributeWithLanguageTag:(NSString*)languageTag;

@end


@class NSStringFMExtensions;

/// <summary>
/// This can be a session-level attribute or a media-level
/// attribute.  As a session-level attribute, it specifies the
/// default language for the session being described.  As a media-
/// level attribute, it specifies the language for that media,
/// overriding any session-level language specified.  Multiple lang
/// attributes can be provided either at session or media level if
/// the session description or media use multiple languages, in
/// which case the order of the attributes indicates the order of
/// importance of the various languages in the session or media
/// from most important to least important.
/// </summary>
#pragma clang diagnostic ignored "-Wshorten-64-to-32"
#pragma clang diagnostic ignored "-Wint-to-pointer-cast"

@interface FMIceLinkSDPLanguageAttribute : FMIceLinkSDPAttribute 

/// <summary>
/// Initializes a new instance of the <see cref="FMIceLinkSDPLanguageAttribute" /> class.
/// </summary>
/// <param name="value">The attribute value.</param>
+ (FMIceLinkSDPLanguageAttribute*) fromValueWithValue:(NSString*)value;
/// <summary>
/// Initializes a new instance of the <see cref="FMIceLinkSDPLanguageAttribute" /> class.
/// </summary>
/// <param name="value">The attribute value.</param>
+ (FMIceLinkSDPLanguageAttribute*) fromValue:(NSString*)value;
- (NSString*) getValue;
/// <summary>
/// Initializes a new instance of the <see cref="FMIceLinkSDPLanguageAttribute" /> class.
/// </summary>
/// <param name="languageTag">The default language for the session being described
/// (if used as a session-level attribute) or the language for a media
/// stream (if used as a media-level attribute).</param>
- (id) initWithLanguageTag:(NSString*)languageTag;
/// <summary>
/// Gets the default language for the session being described
/// (if used as a session-level attribute) or the language for a media
/// stream (if used as a media-level attribute).
/// </summary>
- (NSString*) languageTag;
/// <summary>
/// Initializes a new instance of the <see cref="FMIceLinkSDPLanguageAttribute" /> class.
/// </summary>
/// <param name="languageTag">The default language for the session being described
/// (if used as a session-level attribute) or the language for a media
/// stream (if used as a media-level attribute).</param>
+ (FMIceLinkSDPLanguageAttribute*) sdpLanguageAttributeWithLanguageTag:(NSString*)languageTag;

@end


@class NSStringFMExtensions;

/// <summary>
/// This gives the maximum video frame rate in frames/sec.  It is
/// intended as a recommendation for the encoding of video data.
/// Decimal representations of fractional values using the notation
/// "integer.fraction" are allowed.  It is a media-level
/// attribute, defined only for video media, and it is not
/// dependent on charset.
/// </summary>
#pragma clang diagnostic ignored "-Wshorten-64-to-32"
#pragma clang diagnostic ignored "-Wint-to-pointer-cast"

@interface FMIceLinkSDPFrameRateAttribute : FMIceLinkSDPAttribute 

/// <summary>
/// Gets the maximum video frame rate in frames/second.
/// </summary>
- (NSString*) frameRate;
/// <summary>
/// Initializes a new instance of the <see cref="FMIceLinkSDPFrameRateAttribute" /> class.
/// </summary>
/// <param name="value">The attribute value.</param>
+ (FMIceLinkSDPFrameRateAttribute*) fromValueWithValue:(NSString*)value;
/// <summary>
/// Initializes a new instance of the <see cref="FMIceLinkSDPFrameRateAttribute" /> class.
/// </summary>
/// <param name="value">The attribute value.</param>
+ (FMIceLinkSDPFrameRateAttribute*) fromValue:(NSString*)value;
- (NSString*) getValue;
/// <summary>
/// Initializes a new instance of the <see cref="FMIceLinkSDPFrameRateAttribute" /> class.
/// </summary>
/// <param name="frameRate">The maximum video frame rate in frames/second.</param>
- (id) initWithFrameRate:(NSString*)frameRate;
/// <summary>
/// Initializes a new instance of the <see cref="FMIceLinkSDPFrameRateAttribute" /> class.
/// </summary>
/// <param name="frameRate">The maximum video frame rate in frames/second.</param>
+ (FMIceLinkSDPFrameRateAttribute*) sdpFrameRateAttributeWithFrameRate:(NSString*)frameRate;

@end


@class NSStringFMExtensions;

/// <summary>
/// This gives a suggestion for the quality of the encoding as an
/// integer value.  The intention of the quality attribute for
/// video is to specify a non-default trade-off between frame-rate
/// and still-image quality.  For video, the value is in the range
/// 0 to 10, with the following suggested meaning:
/// 
/// 10 - the best still-image quality the compression scheme can
/// give.
/// 5  - the default behaviour given no quality suggestion.
/// 0  - the worst still-image quality the codec designer thinks
/// is still usable.
/// 
/// It is a media-level attribute, and it is not dependent on
/// charset.
/// </summary>
#pragma clang diagnostic ignored "-Wshorten-64-to-32"
#pragma clang diagnostic ignored "-Wint-to-pointer-cast"

@interface FMIceLinkSDPQualityAttribute : FMIceLinkSDPAttribute 

/// <summary>
/// Initializes a new instance of the <see cref="FMIceLinkSDPQualityAttribute" /> class.
/// </summary>
/// <param name="value">The attribute value.</param>
+ (FMIceLinkSDPQualityAttribute*) fromValueWithValue:(NSString*)value;
/// <summary>
/// Initializes a new instance of the <see cref="FMIceLinkSDPQualityAttribute" /> class.
/// </summary>
/// <param name="value">The attribute value.</param>
+ (FMIceLinkSDPQualityAttribute*) fromValue:(NSString*)value;
- (NSString*) getValue;
/// <summary>
/// Initializes a new instance of the <see cref="FMIceLinkSDPQualityAttribute" /> class.
/// </summary>
/// <param name="quality">The suggested quality of the encoding as an integer value from 0-10.</param>
- (id) initWithQuality:(uint8_t)quality;
/// <summary>
/// Gets the suggested quality of the encoding as an integer value from 0-10.
/// </summary>
- (uint8_t) quality;
/// <summary>
/// Initializes a new instance of the <see cref="FMIceLinkSDPQualityAttribute" /> class.
/// </summary>
/// <param name="quality">The suggested quality of the encoding as an integer value from 0-10.</param>
+ (FMIceLinkSDPQualityAttribute*) sdpQualityAttributeWithQuality:(uint8_t)quality;

@end


@class NSStringFMExtensions;

/// <summary>
/// This attribute allows parameters that are specific to a
/// particular format to be conveyed in a way that SDP does not
/// have to understand them.  The format must be one of the formats
/// specified for the media.  Format-specific parameters may be any
/// set of parameters required to be conveyed by SDP and given
/// unchanged to the media tool that will use this format.  At most
/// one instance of this attribute is allowed for each format.
/// </summary>
#pragma clang diagnostic ignored "-Wshorten-64-to-32"
#pragma clang diagnostic ignored "-Wint-to-pointer-cast"

@interface FMIceLinkSDPFormatParametersAttribute : FMIceLinkSDPAttribute 

/// <summary>
/// Gets the format.
/// </summary>
- (NSString*) format;
/// <summary>
/// Gets the format-specific parameters.
/// </summary>
- (NSString*) formatSpecificParameters;
/// <summary>
/// Initializes a new instance of the <see cref="FMIceLinkSDPFormatParametersAttribute" /> class.
/// </summary>
/// <param name="value">The attribute value.</param>
+ (FMIceLinkSDPFormatParametersAttribute*) fromValueWithValue:(NSString*)value;
/// <summary>
/// Initializes a new instance of the <see cref="FMIceLinkSDPFormatParametersAttribute" /> class.
/// </summary>
/// <param name="value">The attribute value.</param>
+ (FMIceLinkSDPFormatParametersAttribute*) fromValue:(NSString*)value;
- (NSString*) getValue;
/// <summary>
/// Initializes a new instance of the <see cref="FMIceLinkSDPFormatParametersAttribute" /> class.
/// </summary>
/// <param name="format">The format.</param>
/// <param name="formatSpecificParameters">The format-specific parameters.</param>
- (id) initWithFormat:(NSString*)format formatSpecificParameters:(NSString*)formatSpecificParameters;
/// <summary>
/// Initializes a new instance of the <see cref="FMIceLinkSDPFormatParametersAttribute" /> class.
/// </summary>
/// <param name="format">The format.</param>
/// <param name="formatSpecificParameters">The format-specific parameters.</param>
+ (FMIceLinkSDPFormatParametersAttribute*) sdpFormatParametersAttributeWithFormat:(NSString*)format formatSpecificParameters:(NSString*)formatSpecificParameters;

@end


@class NSStringFMExtensions;

/// <summary>
/// This attribute maps from an RTP payload type number (as used in
/// an "m=" line) to an encoding name denoting the payload format
/// to be used.  It also provides information on the clock rate and
/// encoding parameters.  It is a media-level attribute that is not
/// dependent on charset.
/// </summary>
#pragma clang diagnostic ignored "-Wshorten-64-to-32"
#pragma clang diagnostic ignored "-Wint-to-pointer-cast"

@interface FMIceLinkSDPRtpMapAttribute : FMIceLinkSDPAttribute 

/// <summary>
/// Gets the payload clock rate.
/// </summary>
- (long long) clockRate;
/// <summary>
/// Gets the encoding name denoting the payload format to be used.
/// </summary>
- (NSString*) encodingName;
/// <summary>
/// Gets encoding parameters for the payload.
/// </summary>
- (NSString*) encodingParameters;
+ (FMIceLinkSDPRtpMapAttribute*) fromRegisteredPayloadTypeWithRtpPayloadType:(int)rtpPayloadType;
/// <summary>
/// Initializes a new instance of the <see cref="FMIceLinkSDPRtpMapAttribute" /> class.
/// </summary>
/// <param name="value">The attribute value.</param>
+ (FMIceLinkSDPRtpMapAttribute*) fromValueWithValue:(NSString*)value;
/// <summary>
/// Initializes a new instance of the <see cref="FMIceLinkSDPRtpMapAttribute" /> class.
/// </summary>
/// <param name="value">The attribute value.</param>
+ (FMIceLinkSDPRtpMapAttribute*) fromValue:(NSString*)value;
- (NSString*) getValue;
/// <summary>
/// Initializes a new instance of the <see cref="FMIceLinkSDPRtpMapAttribute" /> class.
/// </summary>
/// <param name="payloadType">The RTP payload type number.</param>
/// <param name="encodingName">The encoding name denoting the payload format to be used.</param>
/// <param name="clockRate">The payload clock rate.</param>
- (id) initWithPayloadType:(int)payloadType encodingName:(NSString*)encodingName clockRate:(long long)clockRate;
/// <summary>
/// Initializes a new instance of the <see cref="FMIceLinkSDPRtpMapAttribute" /> class.
/// </summary>
/// <param name="payloadType">The RTP payload type number.</param>
/// <param name="encodingName">The encoding name denoting the payload format to be used.</param>
/// <param name="clockRate">The payload clock rate.</param>
/// <param name="encodingParameters">The encoding parameters for the payload.</param>
- (id) initWithPayloadType:(int)payloadType encodingName:(NSString*)encodingName clockRate:(long long)clockRate encodingParameters:(NSString*)encodingParameters;
/// <summary>
/// Gets the RTP payload type number.
/// </summary>
- (int) payloadType;
/// <summary>
/// Initializes a new instance of the <see cref="FMIceLinkSDPRtpMapAttribute" /> class.
/// </summary>
/// <param name="payloadType">The RTP payload type number.</param>
/// <param name="encodingName">The encoding name denoting the payload format to be used.</param>
/// <param name="clockRate">The payload clock rate.</param>
+ (FMIceLinkSDPRtpMapAttribute*) sdpRtpMapAttributeWithPayloadType:(int)payloadType encodingName:(NSString*)encodingName clockRate:(long long)clockRate;
/// <summary>
/// Initializes a new instance of the <see cref="FMIceLinkSDPRtpMapAttribute" /> class.
/// </summary>
/// <param name="payloadType">The RTP payload type number.</param>
/// <param name="encodingName">The encoding name denoting the payload format to be used.</param>
/// <param name="clockRate">The payload clock rate.</param>
/// <param name="encodingParameters">The encoding parameters for the payload.</param>
+ (FMIceLinkSDPRtpMapAttribute*) sdpRtpMapAttributeWithPayloadType:(int)payloadType encodingName:(NSString*)encodingName clockRate:(long long)clockRate encodingParameters:(NSString*)encodingParameters;

@end


@class NSStringFMExtensions;

/// <summary>
/// This gives the maximum amount of media that can be encapsulated
/// in each packet, expressed as time in milliseconds.  The time
/// SHALL be calculated as the sum of the time the media present in
/// the packet represents.  For frame-based codecs, the time SHOULD
/// be an integer multiple of the frame size.  This attribute is
/// probably only meaningful for audio data, but may be used with
/// other media types if it makes sense.  It is a media-level
/// attribute, and it is not dependent on charset.  Note that this
/// attribute was introduced after RFC 2327, and non-updated
/// implementations will ignore this attribute.
/// </summary>
#pragma clang diagnostic ignored "-Wshorten-64-to-32"
#pragma clang diagnostic ignored "-Wint-to-pointer-cast"

@interface FMIceLinkSDPMaxPacketTimeAttribute : FMIceLinkSDPAttribute 

/// <summary>
/// Initializes a new instance of the <see cref="FMIceLinkSDPMaxPacketTimeAttribute" /> class.
/// </summary>
/// <param name="value">The attribute value.</param>
+ (FMIceLinkSDPMaxPacketTimeAttribute*) fromValueWithValue:(NSString*)value;
/// <summary>
/// Initializes a new instance of the <see cref="FMIceLinkSDPMaxPacketTimeAttribute" /> class.
/// </summary>
/// <param name="value">The attribute value.</param>
+ (FMIceLinkSDPMaxPacketTimeAttribute*) fromValue:(NSString*)value;
- (NSString*) getValue;
/// <summary>
/// Initializes a new instance of the <see cref="FMIceLinkSDPMaxPacketTimeAttribute" /> class.
/// </summary>
/// <param name="maxPacketTime">The maximum amount of media that can be encapsulated,
/// in each packet, expressed as time in milliseconds.</param>
- (id) initWithMaxPacketTime:(long long)maxPacketTime;
/// <summary>
/// Gets the maximum amount of media that can be encapsulated,
/// in each packet, expressed as time in milliseconds.
/// </summary>
- (long long) maxPacketTime;
/// <summary>
/// Initializes a new instance of the <see cref="FMIceLinkSDPMaxPacketTimeAttribute" /> class.
/// </summary>
/// <param name="maxPacketTime">The maximum amount of media that can be encapsulated,
/// in each packet, expressed as time in milliseconds.</param>
+ (FMIceLinkSDPMaxPacketTimeAttribute*) sdpMaxPacketTimeAttributeWithMaxPacketTime:(long long)maxPacketTime;

@end


@class NSStringFMExtensions;

/// <summary>
/// This gives the length of time in milliseconds represented by
/// the media in a packet.  This is probably only meaningful for
/// audio data, but may be used with other media types if it makes
/// sense.  It should not be necessary to know ptime to decode RTP
/// or vat audio, and it is intended as a recommendation for the
/// encoding/packetisation of audio.  It is a media-level
/// attribute, and it is not dependent on charset.
/// </summary>
#pragma clang diagnostic ignored "-Wshorten-64-to-32"
#pragma clang diagnostic ignored "-Wint-to-pointer-cast"

@interface FMIceLinkSDPPacketTimeAttribute : FMIceLinkSDPAttribute 

/// <summary>
/// Initializes a new instance of the <see cref="FMIceLinkSDPPacketTimeAttribute" /> class.
/// </summary>
/// <param name="value">The attribute value.</param>
+ (FMIceLinkSDPPacketTimeAttribute*) fromValueWithValue:(NSString*)value;
/// <summary>
/// Initializes a new instance of the <see cref="FMIceLinkSDPPacketTimeAttribute" /> class.
/// </summary>
/// <param name="value">The attribute value.</param>
+ (FMIceLinkSDPPacketTimeAttribute*) fromValue:(NSString*)value;
- (NSString*) getValue;
/// <summary>
/// Initializes a new instance of the <see cref="FMIceLinkSDPPacketTimeAttribute" /> class.
/// </summary>
/// <param name="packetTime">The length of time in milliseconds represented by
/// the media in a packet.</param>
- (id) initWithPacketTime:(long long)packetTime;
/// <summary>
/// Gets the length of time in milliseconds represented by
/// the media in a packet.
/// </summary>
- (long long) packetTime;
/// <summary>
/// Initializes a new instance of the <see cref="FMIceLinkSDPPacketTimeAttribute" /> class.
/// </summary>
/// <param name="packetTime">The length of time in milliseconds represented by
/// the media in a packet.</param>
+ (FMIceLinkSDPPacketTimeAttribute*) sdpPacketTimeAttributeWithPacketTime:(long long)packetTime;

@end


@class NSStringFMExtensions;

/// <summary>
/// This gives the name and version number of the tool used to
/// create the session description.  It is a session-level
/// attribute, and it is not dependent on charset.
/// </summary>
#pragma clang diagnostic ignored "-Wshorten-64-to-32"
#pragma clang diagnostic ignored "-Wint-to-pointer-cast"

@interface FMIceLinkSDPToolAttribute : FMIceLinkSDPAttribute 

/// <summary>
/// Initializes a new instance of the <see cref="FMIceLinkSDPToolAttribute" /> class.
/// </summary>
/// <param name="value">The attribute value.</param>
+ (FMIceLinkSDPToolAttribute*) fromValueWithValue:(NSString*)value;
/// <summary>
/// Initializes a new instance of the <see cref="FMIceLinkSDPToolAttribute" /> class.
/// </summary>
/// <param name="value">The attribute value.</param>
+ (FMIceLinkSDPToolAttribute*) fromValue:(NSString*)value;
- (NSString*) getValue;
/// <summary>
/// Initializes a new instance of the <see cref="FMIceLinkSDPToolAttribute" /> class.
/// </summary>
/// <param name="tool">The name and version number of the
/// tool used to create the session description.</param>
- (id) initWithTool:(NSString*)tool;
/// <summary>
/// Initializes a new instance of the <see cref="FMIceLinkSDPToolAttribute" /> class.
/// </summary>
/// <param name="tool">The name and version number of the
/// tool used to create the session description.</param>
+ (FMIceLinkSDPToolAttribute*) sdpToolAttributeWithTool:(NSString*)tool;
/// <summary>
/// Gets the name and version number of the
/// tool used to create the session description.
/// </summary>
- (NSString*) tool;

@end


@class NSStringFMExtensions;

/// <summary>
/// Like the cat attribute, this is to assist identifying wanted
/// sessions at the receiver.  This allows a receiver to select
/// interesting session based on keywords describing the purpose of
/// the session; there is no central registry of keywords.  It is a
/// session-level attribute.  It is a charset-dependent attribute,
/// meaning that its value should be interpreted in the charset
/// specified for the session description if one is specified, or
/// by default in ISO 10646/UTF-8.
/// </summary>
#pragma clang diagnostic ignored "-Wshorten-64-to-32"
#pragma clang diagnostic ignored "-Wint-to-pointer-cast"

@interface FMIceLinkSDPKeywordsAttribute : FMIceLinkSDPAttribute 

/// <summary>
/// Initializes a new instance of the <see cref="FMIceLinkSDPKeywordsAttribute" /> class.
/// </summary>
/// <param name="value">The attribute value.</param>
+ (FMIceLinkSDPKeywordsAttribute*) fromValueWithValue:(NSString*)value;
/// <summary>
/// Initializes a new instance of the <see cref="FMIceLinkSDPKeywordsAttribute" /> class.
/// </summary>
/// <param name="value">The attribute value.</param>
+ (FMIceLinkSDPKeywordsAttribute*) fromValue:(NSString*)value;
- (NSString*) getValue;
/// <summary>
/// Initializes a new instance of the <see cref="FMIceLinkSDPKeywordsAttribute" /> class.
/// </summary>
/// <param name="keywords">The keywords describing the purpose of the session.</param>
- (id) initWithKeywords:(NSString*)keywords;
/// <summary>
/// Gets the keywords describing the purpose of the session.
/// </summary>
- (NSString*) keywords;
/// <summary>
/// Initializes a new instance of the <see cref="FMIceLinkSDPKeywordsAttribute" /> class.
/// </summary>
/// <param name="keywords">The keywords describing the purpose of the session.</param>
+ (FMIceLinkSDPKeywordsAttribute*) sdpKeywordsAttributeWithKeywords:(NSString*)keywords;

@end


@class NSStringFMExtensions;

/// <summary>
/// This attribute gives the dot-separated hierarchical category of
/// the session.  This is to enable a receiver to filter unwanted
/// sessions by category.  There is no central registry of
/// categories.  It is a session-level attribute, and it is not
/// dependent on charset.
/// </summary>
#pragma clang diagnostic ignored "-Wshorten-64-to-32"
#pragma clang diagnostic ignored "-Wint-to-pointer-cast"

@interface FMIceLinkSDPCategoryAttribute : FMIceLinkSDPAttribute 

/// <summary>
/// Gets the dot-separated hierarchical category of the session.
/// </summary>
- (NSString*) category;
/// <summary>
/// Initializes a new instance of the <see cref="FMIceLinkSDPCategoryAttribute" /> class.
/// </summary>
/// <param name="value">The attribute value.</param>
+ (FMIceLinkSDPCategoryAttribute*) fromValueWithValue:(NSString*)value;
/// <summary>
/// Initializes a new instance of the <see cref="FMIceLinkSDPCategoryAttribute" /> class.
/// </summary>
/// <param name="value">The attribute value.</param>
+ (FMIceLinkSDPCategoryAttribute*) fromValue:(NSString*)value;
- (NSString*) getValue;
/// <summary>
/// Initializes a new instance of the <see cref="FMIceLinkSDPCategoryAttribute" /> class.
/// </summary>
/// <param name="category">The dot-separated hierarchical category of the session.</param>
- (id) initWithCategory:(NSString*)category;
/// <summary>
/// Initializes a new instance of the <see cref="FMIceLinkSDPCategoryAttribute" /> class.
/// </summary>
/// <param name="category">The dot-separated hierarchical category of the session.</param>
+ (FMIceLinkSDPCategoryAttribute*) sdpCategoryAttributeWithCategory:(NSString*)category;

@end


@class NSStringFMExtensions;

/// <summary>
/// Defines valid SDP media types.
/// </summary>
#pragma clang diagnostic ignored "-Wshorten-64-to-32"
#pragma clang diagnostic ignored "-Wint-to-pointer-cast"

@interface FMIceLinkSDPMediaType : NSObject 

/// <summary>
/// Gets the SDP media type meaning "Application".
/// </summary>
+ (NSString*) application;
/// <summary>
/// Gets the SDP media type meaning "Audio".
/// </summary>
+ (NSString*) audio;
/// <summary>
/// Converts an StreamType enum to a media-type string.
/// </summary>
/// <param name="streamType">The StreamType enum.</param>
/// <returns>The media-type string.</returns>
+ (NSString*) getMediaTypeWithStreamType:(FMIceLinkStreamType)streamType;
/// <summary>
/// Converts a media-type string to an StreamType enum.
/// </summary>
/// <param name="mediaType">The media-type string.</param>
/// <returns>The StreamType enum.</returns>
+ (FMIceLinkStreamType) getStreamTypeWithMediaType:(NSString*)mediaType;
/// <summary>
/// Gets the SDP media type meaning "Message".
/// </summary>
+ (NSString*) message;
/// <summary>
/// Gets the SDP media type meaning "Text".
/// </summary>
+ (NSString*) text;
/// <summary>
/// Gets the SDP media type meaning "Video".
/// </summary>
+ (NSString*) video;

@end


@class NSStringFMExtensions;

#pragma clang diagnostic ignored "-Wshorten-64-to-32"
#pragma clang diagnostic ignored "-Wint-to-pointer-cast"

@interface FMIceLinkSDPAttributeCreationArgs : NSObject 

- (id) initWithValue:(NSString*)value;
+ (FMIceLinkSDPAttributeCreationArgs*) sdpAttributeCreationArgsWithValue:(NSString*)value;
- (NSString*) value;

@end


@class FMCallback;
@class NSStringFMExtensions;

#pragma clang diagnostic ignored "-Wshorten-64-to-32"
#pragma clang diagnostic ignored "-Wint-to-pointer-cast"

@interface FMIceLinkSDPAttributeRegistration : NSObject 

- (FMCallback*) creationDelegate;
- (id) initWithName:(NSString*)name sessionLevel:(bool)sessionLevel mediaLevel:(bool)mediaLevel creationDelegate:(FMCallback*)creationDelegate;
- (bool) mediaLevel;
- (NSString*) name;
+ (FMIceLinkSDPAttributeRegistration*) sdpAttributeRegistrationWithName:(NSString*)name sessionLevel:(bool)sessionLevel mediaLevel:(bool)mediaLevel creationDelegate:(FMCallback*)creationDelegate;
- (bool) sessionLevel;
- (void) setCreationDelegate:(FMCallback*)value;
- (void) setMediaLevel:(bool)value;
- (void) setName:(NSString*)value;
- (void) setSessionLevel:(bool)value;

@end


@class NSMutableArrayFMExtensions;
@class FMIceLinkSDPTimeZone;
@class NSStringFMExtensions;

/// <summary>
/// An SDP time zones element.
/// </summary>
#pragma clang diagnostic ignored "-Wshorten-64-to-32"
#pragma clang diagnostic ignored "-Wint-to-pointer-cast"

@interface FMIceLinkSDPTimeZones : NSObject 

/// <summary>
/// Adds a time zone adjustment.
/// </summary>
/// <param name="timeZone">The time zone adjustment to add.</param>
- (void) addTimeZoneWithTimeZone:(FMIceLinkSDPTimeZone*)timeZone;
/// <summary>
/// Adds a time zone adjustment.
/// </summary>
/// <param name="timeZone">The time zone adjustment to add.</param>
- (void) addTimeZone:(FMIceLinkSDPTimeZone*)timeZone;
/// <summary>
/// Initializes a new instance of the <see cref="FMIceLinkSDPTimeZones" /> class.
/// </summary>
/// <param name="timeZones">The time zone adjustments.</param>
- (id) initWithTimeZones:(NSMutableArray*)timeZones;
/// <summary>
/// Creates an <see cref="FMIceLinkSDPTimeZones" /> instance from a string.
/// </summary>
/// <param name="s">The string to parse.</param>
/// <returns></returns>
+ (FMIceLinkSDPTimeZones*) parseWithS:(NSString*)s;
/// <summary>
/// Removes a time zone adjustment.
/// </summary>
/// <param name="timeZone">The time zone adjustment to remove.</param>
/// <returns></returns>
- (bool) removeTimeZoneWithTimeZone:(FMIceLinkSDPTimeZone*)timeZone;
/// <summary>
/// Removes a time zone adjustment.
/// </summary>
/// <param name="timeZone">The time zone adjustment to remove.</param>
/// <returns></returns>
- (bool) removeTimeZone:(FMIceLinkSDPTimeZone*)timeZone;
/// <summary>
/// Initializes a new instance of the <see cref="FMIceLinkSDPTimeZones" /> class.
/// </summary>
/// <param name="timeZones">The time zone adjustments.</param>
+ (FMIceLinkSDPTimeZones*) sdpTimeZonesWithTimeZones:(NSMutableArray*)timeZones;
/// <summary>
/// Initializes a new instance of the <see cref="FMIceLinkSDPTimeZones" /> class.
/// </summary>
/// <param name="timeZones">The time zone adjustments.</param>
+ (FMIceLinkSDPTimeZones*) sdpTimeZones:(NSMutableArray*)timeZones;
/// <summary>
/// Gets the array of time zone adjustments.
/// </summary>
- (NSMutableArray*) timeZones;
/// <summary>
/// Converts this instance to a string.
/// </summary>
/// <returns></returns>
- (NSString*) toString;
/// <summary>
/// Converts this instance to a string.
/// </summary>
/// <returns></returns>
- (NSString*) description;

@end


@class NSMutableArrayFMExtensions;
@class FMTimeSpan;
@class NSStringFMExtensions;

/// <summary>
/// An SDP repeat time element.
/// </summary>
#pragma clang diagnostic ignored "-Wshorten-64-to-32"
#pragma clang diagnostic ignored "-Wint-to-pointer-cast"

@interface FMIceLinkSDPRepeatTime : NSObject 

/// <summary>
/// Gets the active duration.
/// </summary>
- (FMTimeSpan*) activeDuration;
/// <summary>
/// Adds an offset from the start time.
/// </summary>
/// <param name="offset">The offset from the start time to add.</param>
- (void) addOffsetWithOffset:(FMTimeSpan*)offset;
/// <summary>
/// Adds an offset from the start time.
/// </summary>
/// <param name="offset">The offset from the start time to add.</param>
- (void) addOffset:(FMTimeSpan*)offset;
/// <summary>
/// Initializes a new instance of the <see cref="FMIceLinkSDPRepeatTime" /> class.
/// </summary>
/// <param name="repeatInterval">The repeat interval.</param>
/// <param name="activeDuration">The active duration.</param>
- (id) initWithRepeatInterval:(FMTimeSpan*)repeatInterval activeDuration:(FMTimeSpan*)activeDuration;
/// <summary>
/// Initializes a new instance of the <see cref="FMIceLinkSDPRepeatTime" /> class.
/// </summary>
/// <param name="repeatInterval">The repeat interval.</param>
/// <param name="activeDuration">The active duration.</param>
/// <param name="offsets">The offsets from the start time.</param>
- (id) initWithRepeatInterval:(FMTimeSpan*)repeatInterval activeDuration:(FMTimeSpan*)activeDuration offsets:(NSMutableArray*)offsets;
/// <summary>
/// Gets the array of offsets from the start time.
/// </summary>
- (NSMutableArray*) offsets;
/// <summary>
/// Creates an <see cref="FMIceLinkSDPRepeatTime" /> instance from a string.
/// </summary>
/// <param name="s">The string to parse.</param>
/// <returns></returns>
+ (FMIceLinkSDPRepeatTime*) parseWithS:(NSString*)s;
/// <summary>
/// Removes an offset from the start time.
/// </summary>
/// <param name="offset">The offset from the start time to remove.</param>
/// <returns></returns>
- (bool) removeOffsetWithOffset:(FMTimeSpan*)offset;
/// <summary>
/// Removes an offset from the start time.
/// </summary>
/// <param name="offset">The offset from the start time to remove.</param>
/// <returns></returns>
- (bool) removeOffset:(FMTimeSpan*)offset;
/// <summary>
/// Gets the repeat interval.
/// </summary>
- (FMTimeSpan*) repeatInterval;
/// <summary>
/// Initializes a new instance of the <see cref="FMIceLinkSDPRepeatTime" /> class.
/// </summary>
/// <param name="repeatInterval">The repeat interval.</param>
/// <param name="activeDuration">The active duration.</param>
+ (FMIceLinkSDPRepeatTime*) sdpRepeatTimeWithRepeatInterval:(FMTimeSpan*)repeatInterval activeDuration:(FMTimeSpan*)activeDuration;
/// <summary>
/// Initializes a new instance of the <see cref="FMIceLinkSDPRepeatTime" /> class.
/// </summary>
/// <param name="repeatInterval">The repeat interval.</param>
/// <param name="activeDuration">The active duration.</param>
/// <param name="offsets">The offsets from the start time.</param>
+ (FMIceLinkSDPRepeatTime*) sdpRepeatTimeWithRepeatInterval:(FMTimeSpan*)repeatInterval activeDuration:(FMTimeSpan*)activeDuration offsets:(NSMutableArray*)offsets;
/// <summary>
/// Converts this instance to a string.
/// </summary>
/// <returns></returns>
- (NSString*) toString;
/// <summary>
/// Converts this instance to a string.
/// </summary>
/// <returns></returns>
- (NSString*) description;

@end


@class NSStringFMExtensions;

/// <summary>
/// Defines valid SDP bandwidth types.
/// </summary>
#pragma clang diagnostic ignored "-Wshorten-64-to-32"
#pragma clang diagnostic ignored "-Wint-to-pointer-cast"

@interface FMIceLinkSDPBandwidthType : NSObject 

/// <summary>
/// Gets the SDP bandwidth type meaning "Application Specific".
/// </summary>
+ (NSString*) applicationSpecific;
/// <summary>
/// Gets the SDP bandwidth type meaning "Conference Total".
/// </summary>
+ (NSString*) conferenceTotal;
/// <summary>
/// Gets the SDP bandwidth type meaning "RTCP Receivers".
/// </summary>
+ (NSString*) rtcpReceivers;
/// <summary>
/// Gets the SDP bandwidth type meaning "RTCP Senders".
/// </summary>
+ (NSString*) rtcpSenders;
/// <summary>
/// Gets the SDP bandwidth type meaning "Transport Independent Application Specific Maximum".
/// </summary>
+ (NSString*) transportIndependentApplicationSpecificMaximum;

@end


@class NSStringFMExtensions;

/// <summary>
/// Defines valid SDP address types.
/// </summary>
#pragma clang diagnostic ignored "-Wshorten-64-to-32"
#pragma clang diagnostic ignored "-Wint-to-pointer-cast"

@interface FMIceLinkSDPAddressType : NSObject 

/// <summary>
/// Gets the SDP address type for the specified IP address.
/// </summary>
/// <param name="ipAddress">The IP address.</param>
/// <returns></returns>
+ (NSString*) getAddressTypeForAddressWithIPAddress:(NSString*)ipAddress;
/// <summary>
/// Gets the SDP address type meaning "IP version 4".
/// </summary>
+ (NSString*) ip4;
/// <summary>
/// Gets the SDP address type meaning "IP version 6".
/// </summary>
+ (NSString*) ip6;

@end


@class NSStringFMExtensions;

/// <summary>
/// An SDP bandwidth element.
/// </summary>
#pragma clang diagnostic ignored "-Wshorten-64-to-32"
#pragma clang diagnostic ignored "-Wint-to-pointer-cast"

@interface FMIceLinkSDPBandwidth : NSObject 

/// <summary>
/// Gets the bandwidth, typically in kilobits per second.
/// </summary>
- (long long) bandwidth;
/// <summary>
/// Gets the type of bandwidth. See <see cref="FMIceLinkSDPBandwidthType" /> for possible values.
/// </summary>
- (NSString*) bandwidthType;
/// <summary>
/// Initializes a new instance of the <see cref="FMIceLinkSDPBandwidth" /> class.
/// </summary>
/// <param name="bandwidthType">The type of bandwidth. See <see cref="FMIceLinkSDPBandwidthType" /> for possible values.</param>
/// <param name="bandwidth">The bandwidth, typically in kilobits per second.</param>
- (id) initWithBandwidthType:(NSString*)bandwidthType bandwidth:(long long)bandwidth;
/// <summary>
/// Creates an <see cref="FMIceLinkSDPBandwidth" /> instance from a string.
/// </summary>
/// <param name="s">The string to parse.</param>
/// <returns></returns>
+ (FMIceLinkSDPBandwidth*) parseWithS:(NSString*)s;
/// <summary>
/// Initializes a new instance of the <see cref="FMIceLinkSDPBandwidth" /> class.
/// </summary>
/// <param name="bandwidthType">The type of bandwidth. See <see cref="FMIceLinkSDPBandwidthType" /> for possible values.</param>
/// <param name="bandwidth">The bandwidth, typically in kilobits per second.</param>
+ (FMIceLinkSDPBandwidth*) sdpBandwidthWithBandwidthType:(NSString*)bandwidthType bandwidth:(long long)bandwidth;
/// <summary>
/// Initializes a new instance of the <see cref="FMIceLinkSDPBandwidth" /> class.
/// </summary>
/// <param name="bandwidthType">The type of bandwidth. See <see cref="FMIceLinkSDPBandwidthType" /> for possible values.</param>
/// <param name="bandwidth">The bandwidth, typically in kilobits per second.</param>
+ (FMIceLinkSDPBandwidth*) sdpBandwidthWithType:(NSString*)bandwidthType bandwidth:(long long)bandwidth;
/// <summary>
/// Converts this instance to a string.
/// </summary>
/// <returns></returns>
- (NSString*) toString;
/// <summary>
/// Converts this instance to a string.
/// </summary>
/// <returns></returns>
- (NSString*) description;

@end


@class NSStringFMExtensions;

/// <summary>
/// An SDP connection data element.
/// </summary>
#pragma clang diagnostic ignored "-Wshorten-64-to-32"
#pragma clang diagnostic ignored "-Wint-to-pointer-cast"

@interface FMIceLinkSDPConnectionData : NSObject 

/// <summary>
/// Gets the type of the address. See <see cref="FMIceLinkSDPAddressType" /> for possible values.
/// </summary>
- (NSString*) addressType;
/// <summary>
/// Gets the connection address.
/// </summary>
- (NSString*) connectionAddress;
/// <summary>
/// Initializes a new instance of the <see cref="FMIceLinkSDPConnectionData" /> class.
/// </summary>
/// <param name="connectionAddress">The connection address.</param>
- (id) initWithConnectionAddress:(NSString*)connectionAddress;
/// <summary>
/// Gets the type of network. See <see cref="FMIceLinkSDPNetworkType" /> for possible values.
/// </summary>
- (NSString*) networkType;
/// <summary>
/// Creates an <see cref="FMIceLinkSDPConnectionData" /> instance from a string.
/// </summary>
/// <param name="s">The string to parse.</param>
/// <returns></returns>
+ (FMIceLinkSDPConnectionData*) parseWithS:(NSString*)s;
/// <summary>
/// Initializes a new instance of the <see cref="FMIceLinkSDPConnectionData" /> class.
/// </summary>
/// <param name="connectionAddress">The connection address.</param>
+ (FMIceLinkSDPConnectionData*) sdpConnectionDataWithConnectionAddress:(NSString*)connectionAddress;
/// <summary>
/// Converts this instance to a string.
/// </summary>
/// <returns></returns>
- (NSString*) toString;
/// <summary>
/// Converts this instance to a string.
/// </summary>
/// <returns></returns>
- (NSString*) description;
/// <summary>
/// Updates the connection address.
/// </summary>
/// <param name="connectionAddress">The connection address.</param>
- (void) updateWithConnectionAddress:(NSString*)connectionAddress;

@end


@class NSMutableArrayFMExtensions;
@class FMIceLinkSDPConnectionData;
@class FMIceLinkSDPEncryptionKey;
@class FMIceLinkSDPMedia;
@class NSStringFMExtensions;
@class FMIceLinkSDPBandwidth;
@class FMIceLinkSDPAttribute;

/// <summary>
/// An SDP media description element.
/// </summary>
#pragma clang diagnostic ignored "-Wshorten-64-to-32"
#pragma clang diagnostic ignored "-Wint-to-pointer-cast"

@interface FMIceLinkSDPMediaDescription : NSObject 

/// <summary>
/// Adds a proposed bandwidth.
/// </summary>
/// <param name="bandwidth">The proposed bandwidth to add.</param>
- (void) addBandwidthWithBandwidth:(FMIceLinkSDPBandwidth*)bandwidth;
/// <summary>
/// Adds a proposed bandwidth.
/// </summary>
/// <param name="bandwidth">The proposed bandwidth to add.</param>
- (void) addBandwidth:(FMIceLinkSDPBandwidth*)bandwidth;
/// <summary>
/// Adds a media-level attribute.
/// </summary>
/// <param name="attribute">The session-level attribute to add.</param>
- (void) addMediaAttributeWithAttribute:(FMIceLinkSDPAttribute*)attribute;
/// <summary>
/// Adds a media-level attribute.
/// </summary>
/// <param name="attribute">The session-level attribute to add.</param>
- (void) addMediaAttribute:(FMIceLinkSDPAttribute*)attribute;
/// <summary>
/// Gets the array of proposed bandwidths to be used by the media.
/// </summary>
- (NSMutableArray*) bandwidths;
/// <summary>
/// Gets media-level connection data.
/// </summary>
- (FMIceLinkSDPConnectionData*) connectionData;
/// <summary>
/// Gets the media-level encryption key.
/// </summary>
- (FMIceLinkSDPEncryptionKey*) encryptionKey;
/// <summary>
/// Initializes a new instance of the <see cref="FMIceLinkSDPMediaDescription" /> class.
/// </summary>
/// <param name="media">The media name and transport address.</param>
- (id) initWithMedia:(FMIceLinkSDPMedia*)media;
/// <summary>
/// Gets the media name and transport address.
/// </summary>
- (FMIceLinkSDPMedia*) media;
/// <summary>
/// Gets the array of media-level attributes.
/// </summary>
- (NSMutableArray*) mediaAttributes;
/// <summary>
/// Gets the media title.
/// </summary>
- (NSString*) mediaTitle;
/// <summary>
/// Creates an <see cref="FMIceLinkSDPMediaDescription" /> instance from a string.
/// </summary>
/// <param name="s">The string to parse.</param>
/// <returns></returns>
+ (FMIceLinkSDPMediaDescription*) parseWithS:(NSString*)s;
/// <summary>
/// Removes a proposed bandwidth.
/// </summary>
/// <param name="bandwidth">The proposed bandwidth to remove.</param>
/// <returns></returns>
- (bool) removeBandwidthWithBandwidth:(FMIceLinkSDPBandwidth*)bandwidth;
/// <summary>
/// Removes a proposed bandwidth.
/// </summary>
/// <param name="bandwidth">The proposed bandwidth to remove.</param>
/// <returns></returns>
- (bool) removeBandwidth:(FMIceLinkSDPBandwidth*)bandwidth;
/// <summary>
/// Removes a media-level attribute.
/// </summary>
/// <param name="attribute">The session-level attribute to remove.</param>
/// <returns></returns>
- (bool) removeMediaAttributeWithAttribute:(FMIceLinkSDPAttribute*)attribute;
/// <summary>
/// Removes a media-level attribute.
/// </summary>
/// <param name="attribute">The session-level attribute to remove.</param>
/// <returns></returns>
- (bool) removeMediaAttribute:(FMIceLinkSDPAttribute*)attribute;
/// <summary>
/// Initializes a new instance of the <see cref="FMIceLinkSDPMediaDescription" /> class.
/// </summary>
/// <param name="media">The media name and transport address.</param>
+ (FMIceLinkSDPMediaDescription*) sdpMediaDescriptionWithMedia:(FMIceLinkSDPMedia*)media;
/// <summary>
/// Sets media-level connection data.
/// </summary>
- (void) setConnectionData:(FMIceLinkSDPConnectionData*)value;
/// <summary>
/// Sets the media-level encryption key.
/// </summary>
- (void) setEncryptionKey:(FMIceLinkSDPEncryptionKey*)value;
/// <summary>
/// Sets the media title.
/// </summary>
- (void) setMediaTitle:(NSString*)value;
/// <summary>
/// Converts this instance to a string.
/// </summary>
/// <returns></returns>
- (NSString*) toString;
/// <summary>
/// Converts this instance to a string.
/// </summary>
/// <returns></returns>
- (NSString*) description;

@end


@class NSMutableArrayFMExtensions;
@class FMIceLinkSDPConnectionData;
@class NSStringFMExtensions;
@class FMIceLinkSDPEncryptionKey;
@class FMIceLinkSDPOrigin;
@class FMIceLinkSDPTimeZones;
@class NSURLFMExtensions;
@class FMIceLinkSDPBandwidth;
@class FMIceLinkSDPMediaDescription;
@class FMIceLinkSDPAttribute;
@class FMIceLinkSDPTimeDescription;

/// <summary>
/// An SDP message.
/// </summary>
#pragma clang diagnostic ignored "-Wshorten-64-to-32"
#pragma clang diagnostic ignored "-Wint-to-pointer-cast"

@interface FMIceLinkSDPMessage : NSObject 

/// <summary>
/// Adds a proposed bandwidth.
/// </summary>
/// <param name="bandwidth">The proposed bandwidth to add.</param>
- (void) addBandwidthWithBandwidth:(FMIceLinkSDPBandwidth*)bandwidth;
/// <summary>
/// Adds a proposed bandwidth.
/// </summary>
/// <param name="bandwidth">The proposed bandwidth to add.</param>
- (void) addBandwidth:(FMIceLinkSDPBandwidth*)bandwidth;
/// <summary>
/// Adds a media description.
/// </summary>
/// <param name="mediaDescription">The media description to add.</param>
- (void) addMediaDescriptionWithMediaDescription:(FMIceLinkSDPMediaDescription*)mediaDescription;
/// <summary>
/// Adds a media description.
/// </summary>
/// <param name="mediaDescription">The media description to add.</param>
- (void) addMediaDescription:(FMIceLinkSDPMediaDescription*)mediaDescription;
/// <summary>
/// Adds a session-level attribute.
/// </summary>
/// <param name="attribute">The session-level attribute to add.</param>
- (void) addSessionAttributeWithAttribute:(FMIceLinkSDPAttribute*)attribute;
/// <summary>
/// Adds a session-level attribute.
/// </summary>
/// <param name="attribute">The session-level attribute to add.</param>
- (void) addSessionAttribute:(FMIceLinkSDPAttribute*)attribute;
/// <summary>
/// Adds a start, stop, and repeat time.
/// </summary>
/// <param name="timeDescription">The start, stop, and repeat time to add.</param>
- (void) addTimeDescriptionWithTimeDescription:(FMIceLinkSDPTimeDescription*)timeDescription;
/// <summary>
/// Adds a start, stop, and repeat time.
/// </summary>
/// <param name="timeDescription">The start, stop, and repeat time to add.</param>
- (void) addTimeDescription:(FMIceLinkSDPTimeDescription*)timeDescription;
/// <summary>
/// Gets the array of proposed bandwidths to be used by the session.
/// </summary>
- (NSMutableArray*) bandwidths;
/// <summary>
/// Gets session-level connection data.
/// </summary>
- (FMIceLinkSDPConnectionData*) connectionData;
/// <summary>
/// Gets the email address for the person responsible for the conference.
/// </summary>
- (NSString*) emailAddress;
/// <summary>
/// Gets the session-level encryption key.
/// </summary>
- (FMIceLinkSDPEncryptionKey*) encryptionKey;
/// <summary>
/// Initializes a new instance of the <see cref="FMIceLinkSDPMessage" /> class.
/// </summary>
/// <param name="origin">The originator of the session plus a session identifier and version number.</param>
- (id) initWithOrigin:(FMIceLinkSDPOrigin*)origin;
/// <summary>
/// Initializes a new instance of the <see cref="FMIceLinkSDPMessage" /> class.
/// </summary>
/// <param name="origin">The originator of the session plus a session identifier and version number.</param>
/// <param name="sessionName">The textual session name.</param>
- (id) initWithOrigin:(FMIceLinkSDPOrigin*)origin sessionName:(NSString*)sessionName;
/// <summary>
/// Initializes a new instance of the <see cref="FMIceLinkSDPMessage" /> class.
/// </summary>
/// <param name="origin">The originator of the session plus a session identifier and version number.</param>
/// <param name="sessionName">The textual session name.</param>
/// <param name="timeDescriptions">The array of start, stop, and repeat times for the session.</param>
- (id) initWithOrigin:(FMIceLinkSDPOrigin*)origin sessionName:(NSString*)sessionName timeDescriptions:(NSMutableArray*)timeDescriptions;
/// <summary>
/// Gets the array of media descriptions.
/// </summary>
- (NSMutableArray*) mediaDescriptions;
/// <summary>
/// Gets the originator of the session plus a session identifier and version number.
/// </summary>
- (FMIceLinkSDPOrigin*) origin;
/// <summary>
/// Creates an <see cref="FMIceLinkSDPMessage" /> instance from a string.
/// </summary>
/// <param name="s">The string to parse.</param>
/// <returns></returns>
+ (FMIceLinkSDPMessage*) parseWithS:(NSString*)s;
/// <summary>
/// Gets the phone number for the person responsible for the conference.
/// </summary>
- (NSString*) phoneNumber;
/// <summary>
/// Gets the version of the Session Description Protocol.
/// </summary>
- (NSString*) protocolVersion;
/// <summary>
/// Removes a proposed bandwidth.
/// </summary>
/// <param name="bandwidth">The proposed bandwidth to remove.</param>
/// <returns></returns>
- (bool) removeBandwidthWithBandwidth:(FMIceLinkSDPBandwidth*)bandwidth;
/// <summary>
/// Removes a proposed bandwidth.
/// </summary>
/// <param name="bandwidth">The proposed bandwidth to remove.</param>
/// <returns></returns>
- (bool) removeBandwidth:(FMIceLinkSDPBandwidth*)bandwidth;
/// <summary>
/// Removes a media description.
/// </summary>
/// <param name="mediaDescription">The media description to remove.</param>
/// <returns></returns>
- (bool) removeMediaDescriptionWithMediaDescription:(FMIceLinkSDPMediaDescription*)mediaDescription;
/// <summary>
/// Removes a media description.
/// </summary>
/// <param name="mediaDescription">The media description to remove.</param>
/// <returns></returns>
- (bool) removeMediaDescription:(FMIceLinkSDPMediaDescription*)mediaDescription;
/// <summary>
/// Removes a session-level attribute.
/// </summary>
/// <param name="attribute">The session-level attribute to remove.</param>
/// <returns></returns>
- (bool) removeSessionAttributeWithAttribute:(FMIceLinkSDPAttribute*)attribute;
/// <summary>
/// Removes a session-level attribute.
/// </summary>
/// <param name="attribute">The session-level attribute to remove.</param>
/// <returns></returns>
- (bool) removeSessionAttribute:(FMIceLinkSDPAttribute*)attribute;
/// <summary>
/// Removes all time descriptions.
/// </summary>
- (void) removeTimeDescriptions;
/// <summary>
/// Removes a start, stop, and repeat time.
/// </summary>
/// <param name="timeDescription">The start, stop, and repeat time to remove.</param>
/// <returns></returns>
- (bool) removeTimeDescriptionWithTimeDescription:(FMIceLinkSDPTimeDescription*)timeDescription;
/// <summary>
/// Removes a start, stop, and repeat time.
/// </summary>
/// <param name="timeDescription">The start, stop, and repeat time to remove.</param>
/// <returns></returns>
- (bool) removeTimeDescription:(FMIceLinkSDPTimeDescription*)timeDescription;
/// <summary>
/// Initializes a new instance of the <see cref="FMIceLinkSDPMessage" /> class.
/// </summary>
/// <param name="origin">The originator of the session plus a session identifier and version number.</param>
+ (FMIceLinkSDPMessage*) sdpMessageWithOrigin:(FMIceLinkSDPOrigin*)origin;
/// <summary>
/// Initializes a new instance of the <see cref="FMIceLinkSDPMessage" /> class.
/// </summary>
/// <param name="origin">The originator of the session plus a session identifier and version number.</param>
/// <param name="sessionName">The textual session name.</param>
+ (FMIceLinkSDPMessage*) sdpMessageWithOrigin:(FMIceLinkSDPOrigin*)origin sessionName:(NSString*)sessionName;
/// <summary>
/// Initializes a new instance of the <see cref="FMIceLinkSDPMessage" /> class.
/// </summary>
/// <param name="origin">The originator of the session plus a session identifier and version number.</param>
/// <param name="sessionName">The textual session name.</param>
/// <param name="timeDescriptions">The array of start, stop, and repeat times for the session.</param>
+ (FMIceLinkSDPMessage*) sdpMessageWithOrigin:(FMIceLinkSDPOrigin*)origin sessionName:(NSString*)sessionName timeDescriptions:(NSMutableArray*)timeDescriptions;
/// <summary>
/// Gets the array of session-level attributes.
/// </summary>
- (NSMutableArray*) sessionAttributes;
/// <summary>
/// Gets textual information about the session.
/// </summary>
- (NSString*) sessionInformation;
/// <summary>
/// Gets the textual session name.
/// </summary>
- (NSString*) sessionName;
/// <summary>
/// Sets session-level connection data.
/// </summary>
- (void) setConnectionData:(FMIceLinkSDPConnectionData*)value;
/// <summary>
/// Sets the email address for the person responsible for the conference.
/// </summary>
- (void) setEmailAddress:(NSString*)value;
/// <summary>
/// Sets the session-level encryption key.
/// </summary>
- (void) setEncryptionKey:(FMIceLinkSDPEncryptionKey*)value;
/// <summary>
/// Sets the phone number for the person responsible for the conference.
/// </summary>
- (void) setPhoneNumber:(NSString*)value;
/// <summary>
/// Sets textual information about the session.
/// </summary>
- (void) setSessionInformation:(NSString*)value;
/// <summary>
/// Sets the time zone adjustments.
/// </summary>
- (void) setTimeZoneAdjustments:(FMIceLinkSDPTimeZones*)value;
/// <summary>
/// Sets the pointer to additional information about the session.
/// </summary>
- (void) setUri:(NSURL*)value;
/// <summary>
/// Gets the array of start, stop, and repeat times for the session.
/// </summary>
- (NSMutableArray*) timeDescriptions;
/// <summary>
/// Gets the time zone adjustments.
/// </summary>
- (FMIceLinkSDPTimeZones*) timeZoneAdjustments;
/// <summary>
/// Converts this instance to a string.
/// </summary>
/// <returns></returns>
- (NSString*) toString;
/// <summary>
/// Converts this instance to a string.
/// </summary>
/// <returns></returns>
- (NSString*) description;
/// <summary>
/// Gets the pointer to additional information about the session.
/// </summary>
- (NSURL*) uri;

@end


@class NSStringFMExtensions;

/// <summary>
/// Defines valid SDP network types.
/// </summary>
#pragma clang diagnostic ignored "-Wshorten-64-to-32"
#pragma clang diagnostic ignored "-Wint-to-pointer-cast"

@interface FMIceLinkSDPNetworkType : NSObject 

/// <summary>
/// Gets the SDP network type meaning "Internet".
/// </summary>
+ (NSString*) internet;

@end


@class NSStringFMExtensions;

/// <summary>
/// An SDP origin element.
/// </summary>
#pragma clang diagnostic ignored "-Wshorten-64-to-32"
#pragma clang diagnostic ignored "-Wint-to-pointer-cast"

@interface FMIceLinkSDPOrigin : NSObject 

/// <summary>
/// Gets the type of the address. See <see cref="FMIceLinkSDPAddressType" /> for possible values.
/// </summary>
- (NSString*) addressType;
/// <summary>
/// Initializes a new instance of the <see cref="FMIceLinkSDPOrigin" /> class.
/// </summary>
/// <param name="unicastAddress">The address of the machine from which the session was created.</param>
- (id) initWithUnicastAddress:(NSString*)unicastAddress;
/// <summary>
/// Initializes a new instance of the <see cref="FMIceLinkSDPOrigin" /> class.
/// </summary>
/// <param name="unicastAddress">The address of the machine from which the session was created.</param>
/// <param name="username">The user's login on the originating host.</param>
- (id) initWithUnicastAddress:(NSString*)unicastAddress username:(NSString*)username;
/// <summary>
/// Gets the type of network. See <see cref="FMIceLinkSDPNetworkType" /> for possible values.
/// </summary>
- (NSString*) networkType;
/// <summary>
/// Creates an <see cref="FMIceLinkSDPOrigin" /> instance from a string.
/// </summary>
/// <param name="s">The string to parse.</param>
/// <returns></returns>
+ (FMIceLinkSDPOrigin*) parseWithS:(NSString*)s;
/// <summary>
/// Initializes a new instance of the <see cref="FMIceLinkSDPOrigin" /> class.
/// </summary>
/// <param name="unicastAddress">The address of the machine from which the session was created.</param>
+ (FMIceLinkSDPOrigin*) sdpOriginWithUnicastAddress:(NSString*)unicastAddress;
/// <summary>
/// Initializes a new instance of the <see cref="FMIceLinkSDPOrigin" /> class.
/// </summary>
/// <param name="unicastAddress">The address of the machine from which the session was created.</param>
/// <param name="username">The user's login on the originating host.</param>
+ (FMIceLinkSDPOrigin*) sdpOriginWithUnicastAddress:(NSString*)unicastAddress username:(NSString*)username;
/// <summary>
/// Gets the globally unique identifier for the session.
/// </summary>
- (long long) sessionId;
/// <summary>
/// Gets the version number for the session.
/// </summary>
- (long long) sessionVersion;
/// <summary>
/// Sets the user's login on the originating host.
/// </summary>
- (void) setUsername:(NSString*)value;
/// <summary>
/// Converts this instance to a string.
/// </summary>
/// <returns></returns>
- (NSString*) toString;
/// <summary>
/// Converts this instance to a string.
/// </summary>
/// <returns></returns>
- (NSString*) description;
/// <summary>
/// Gets the address of the machine from which the session was created.
/// </summary>
- (NSString*) unicastAddress;
/// <summary>
/// Updates the unicast address.
/// </summary>
/// <param name="unicastAddress">The unicast address.</param>
- (void) updateWithUnicastAddress:(NSString*)unicastAddress;
/// <summary>
/// Gets the user's login on the originating host.
/// </summary>
- (NSString*) username;

@end


@class NSMutableArrayFMExtensions;
@class FMIceLinkSDPTiming;
@class FMIceLinkSDPRepeatTime;
@class NSStringFMExtensions;

/// <summary>
/// An SDP time description element.
/// </summary>
#pragma clang diagnostic ignored "-Wshorten-64-to-32"
#pragma clang diagnostic ignored "-Wint-to-pointer-cast"

@interface FMIceLinkSDPTimeDescription : NSObject 

/// <summary>
/// Adds a repeat time.
/// </summary>
/// <param name="repeatTime">The repeat time to add.</param>
- (void) addRepeatTimeWithRepeatTime:(FMIceLinkSDPRepeatTime*)repeatTime;
/// <summary>
/// Adds a repeat time.
/// </summary>
/// <param name="repeatTime">The repeat time to add.</param>
- (void) addRepeatTime:(FMIceLinkSDPRepeatTime*)repeatTime;
/// <summary>
/// Initializes a new instance of the <see cref="FMIceLinkSDPTimeDescription" /> class.
/// </summary>
/// <param name="timing">The start and stop time.</param>
- (id) initWithTiming:(FMIceLinkSDPTiming*)timing;
/// <summary>
/// Creates an <see cref="FMIceLinkSDPTimeDescription" /> instance from a string.
/// </summary>
/// <param name="s">The string to parse.</param>
/// <returns></returns>
+ (FMIceLinkSDPTimeDescription*) parseWithS:(NSString*)s;
/// <summary>
/// Removes a repeat time.
/// </summary>
/// <param name="repeatTime">The repeat time to remove.</param>
/// <returns></returns>
- (bool) removeRepeatTimeWithRepeatTime:(FMIceLinkSDPRepeatTime*)repeatTime;
/// <summary>
/// Removes a repeat time.
/// </summary>
/// <param name="repeatTime">The repeat time to remove.</param>
/// <returns></returns>
- (bool) removeRepeatTime:(FMIceLinkSDPRepeatTime*)repeatTime;
/// <summary>
/// Gets the array of repeat times.
/// </summary>
- (NSMutableArray*) repeatTimes;
/// <summary>
/// Initializes a new instance of the <see cref="FMIceLinkSDPTimeDescription" /> class.
/// </summary>
/// <param name="timing">The start and stop time.</param>
+ (FMIceLinkSDPTimeDescription*) sdpTimeDescriptionWithTiming:(FMIceLinkSDPTiming*)timing;
/// <summary>
/// Gets the start and stop time.
/// </summary>
- (FMIceLinkSDPTiming*) timing;
/// <summary>
/// Converts this instance to a string.
/// </summary>
/// <returns></returns>
- (NSString*) toString;
/// <summary>
/// Converts this instance to a string.
/// </summary>
/// <returns></returns>
- (NSString*) description;

@end


@class NSDateFMExtensions;
@class FMTimeSpan;
@class NSStringFMExtensions;

/// <summary>
/// An SDP time zone element.
/// </summary>
#pragma clang diagnostic ignored "-Wshorten-64-to-32"
#pragma clang diagnostic ignored "-Wint-to-pointer-cast"

@interface FMIceLinkSDPTimeZone : NSObject 

/// <summary>
/// Gets the time that a time zone adjustment happens.
/// </summary>
- (NSDate*) adjustmentTime;
/// <summary>
/// Initializes a new instance of the <see cref="FMIceLinkSDPTimeZone" /> class.
/// </summary>
/// <param name="adjustmentTime">The time that a time zone adjustment happens.</param>
/// <param name="offset">The offset from the time when the session was first scheduled.</param>
- (id) initWithAdjustmentTime:(NSDate*)adjustmentTime offset:(FMTimeSpan*)offset;
/// <summary>
/// Gets the offset from the time when the session was first scheduled.
/// </summary>
- (FMTimeSpan*) offset;
/// <summary>
/// Creates an <see cref="FMIceLinkSDPTimeZone" /> instance from a string.
/// </summary>
/// <param name="s">The string to parse.</param>
/// <returns></returns>
+ (FMIceLinkSDPTimeZone*) parseWithS:(NSString*)s;
/// <summary>
/// Initializes a new instance of the <see cref="FMIceLinkSDPTimeZone" /> class.
/// </summary>
/// <param name="adjustmentTime">The time that a time zone adjustment happens.</param>
/// <param name="offset">The offset from the time when the session was first scheduled.</param>
+ (FMIceLinkSDPTimeZone*) sdpTimeZoneWithAdjustmentTime:(NSDate*)adjustmentTime offset:(FMTimeSpan*)offset;
/// <summary>
/// Converts this instance to a string.
/// </summary>
/// <returns></returns>
- (NSString*) toString;
/// <summary>
/// Converts this instance to a string.
/// </summary>
/// <returns></returns>
- (NSString*) description;

@end


@class FMNullableDate;
@class NSDateFMExtensions;
@class NSStringFMExtensions;

/// <summary>
/// An SDP timing element.
/// </summary>
#pragma clang diagnostic ignored "-Wshorten-64-to-32"
#pragma clang diagnostic ignored "-Wint-to-pointer-cast"

@interface FMIceLinkSDPTiming : NSObject 

/// <summary>
/// Initializes a new instance of the <see cref="FMIceLinkSDPTiming" /> class.
/// </summary>
- (id) init;
/// <summary>
/// Initializes a new instance of the <see cref="FMIceLinkSDPTiming" /> class.
/// </summary>
/// <param name="startTime">The start time.</param>
/// <param name="stopTime">The stop time.</param>
- (id) initWithStartTime:(NSDate*)startTime stopTime:(NSDate*)stopTime;
/// <summary>
/// Creates an <see cref="FMIceLinkSDPTiming" /> instance from a string.
/// </summary>
/// <param name="s">The string to parse.</param>
/// <returns></returns>
+ (FMIceLinkSDPTiming*) parseWithS:(NSString*)s;
/// <summary>
/// Initializes a new instance of the <see cref="FMIceLinkSDPTiming" /> class.
/// </summary>
+ (FMIceLinkSDPTiming*) sdpTiming;
/// <summary>
/// Initializes a new instance of the <see cref="FMIceLinkSDPTiming" /> class.
/// </summary>
/// <param name="startTime">The start time.</param>
/// <param name="stopTime">The stop time.</param>
+ (FMIceLinkSDPTiming*) sdpTimingWithStartTime:(NSDate*)startTime stopTime:(NSDate*)stopTime;
/// <summary>
/// Sets the start time.
/// </summary>
- (void) setStartTime:(FMNullableDate*)value;
/// <summary>
/// Sets the stop time.
/// </summary>
- (void) setStopTime:(FMNullableDate*)value;
/// <summary>
/// Gets the start time.
/// </summary>
- (FMNullableDate*) startTime;
/// <summary>
/// Gets the stop time.
/// </summary>
- (FMNullableDate*) stopTime;
/// <summary>
/// Converts this instance to a string.
/// </summary>
/// <returns></returns>
- (NSString*) toString;
/// <summary>
/// Converts this instance to a string.
/// </summary>
/// <returns></returns>
- (NSString*) description;

@end


@class NSMutableArrayFMExtensions;
@class NSStringFMExtensions;

#pragma clang diagnostic ignored "-Wshorten-64-to-32"
#pragma clang diagnostic ignored "-Wint-to-pointer-cast"

@interface FMIceLinkStringExtensions : NSObject 

- (id) init;
+ (NSMutableArray*) splitAndCleanWithS:(NSString*)s;
+ (FMIceLinkStringExtensions*) stringExtensions;

@end


@class NSMutableDataFMExtensions;
@class NSStringFMExtensions;

/// <summary>
/// STUN-wide methods.
/// </summary>
#pragma clang diagnostic ignored "-Wshorten-64-to-32"
#pragma clang diagnostic ignored "-Wint-to-pointer-cast"

@interface FMIceLinkSTUN : NSObject 

/// <summary>
/// Creates a long term key from the given username, realm, and password by calculating
/// the MD5 hash of their values concatenated as "username:realm:password".
/// </summary>
/// <param name="username">The username.</param>
/// <param name="realm">The realm.</param>
/// <param name="password">The password.</param>
/// <returns></returns>
+ (NSMutableData*) createLongTermKeyWithUsername:(NSString*)username realm:(NSString*)realm password:(NSString*)password;
/// <summary>
/// Creates a short term key from the given password by encoding it as a UTF-8 byte array.
/// </summary>
/// <param name="password">The password.</param>
/// <returns></returns>
+ (NSMutableData*) createShortTermKeyWithPassword:(NSString*)password;

@end


@class NSMutableDataFMExtensions;

/// <summary>
/// A generic STUN binding message.
/// </summary>
#pragma clang diagnostic ignored "-Wshorten-64-to-32"
#pragma clang diagnostic ignored "-Wint-to-pointer-cast"

@interface FMIceLinkSTUNBindingMessage : FMIceLinkSTUNMessage 

/// <summary>
/// Initializes a new instance of the <see cref="FMIceLinkSTUNBindingMessage" /> class.
/// </summary>
/// <param name="messageType">The type of the message.</param>
/// <param name="transactionId">The transaction ID.</param>
- (id) initWithMessageType:(FMIceLinkSTUNMessageType)messageType transactionId:(NSMutableData*)transactionId;
/// <summary>
/// Initializes a new instance of the <see cref="FMIceLinkSTUNBindingMessage" /> class.
/// </summary>
/// <param name="messageType">The type of the message.</param>
/// <param name="transactionId">The transaction ID.</param>
+ (FMIceLinkSTUNBindingMessage*) stunBindingMessageWithMessageType:(FMIceLinkSTUNMessageType)messageType transactionId:(NSMutableData*)transactionId;
/// <summary>
/// Initializes a new instance of the <see cref="FMIceLinkSTUNBindingMessage" /> class.
/// </summary>
/// <param name="messageType">The type of the message.</param>
/// <param name="transactionId">The transaction ID.</param>
+ (FMIceLinkSTUNBindingMessage*) stunBindingMessageWithType:(FMIceLinkSTUNMessageType)messageType transactionId:(NSMutableData*)transactionId;

@end



/// <summary>
/// A STUN binding indication.
/// </summary>
#pragma clang diagnostic ignored "-Wshorten-64-to-32"
#pragma clang diagnostic ignored "-Wint-to-pointer-cast"

@interface FMIceLinkSTUNBindingIndication : FMIceLinkSTUNBindingMessage 

/// <summary>
/// Initializes a new instance of the <see cref="FMIceLinkSTUNBindingIndication" /> class.
/// </summary>
- (id) init;
/// <summary>
/// Initializes a new instance of the <see cref="FMIceLinkSTUNBindingIndication" /> class.
/// </summary>
+ (FMIceLinkSTUNBindingIndication*) stunBindingIndication;

@end


@class NSStringFMExtensions;

/// <summary>
/// The request was malformed.  The client SHOULD NOT
/// retry the request without modification from the previous
/// attempt.  The server may not be able to generate a valid
/// MESSAGE-INTEGRITY for this error, so the client MUST NOT expect
/// a valid MESSAGE-INTEGRITY attribute on this response.
/// </summary>
#pragma clang diagnostic ignored "-Wshorten-64-to-32"
#pragma clang diagnostic ignored "-Wint-to-pointer-cast"

@interface FMIceLinkSTUNBadRequestException : FMIceLinkSTUNException 

/// <summary>
/// Initializes a new instance of the <see cref="FMIceLinkSTUNBadRequestException" /> class.
/// </summary>
- (id) init;
/// <summary>
/// Initializes a new instance of the <see cref="FMIceLinkSTUNBadRequestException" /> class.
/// </summary>
/// <param name="message">The message.</param>
- (id) initWithMessage:(NSString*)message;
/// <summary>
/// Initializes a new instance of the <see cref="FMIceLinkSTUNBadRequestException" /> class.
/// </summary>
+ (FMIceLinkSTUNBadRequestException*) stunBadRequestException;
/// <summary>
/// Initializes a new instance of the <see cref="FMIceLinkSTUNBadRequestException" /> class.
/// </summary>
/// <param name="message">The message.</param>
+ (FMIceLinkSTUNBadRequestException*) stunBadRequestExceptionWithMessage:(NSString*)message;

@end



/// <summary>
/// A STUN binding request.
/// </summary>
#pragma clang diagnostic ignored "-Wshorten-64-to-32"
#pragma clang diagnostic ignored "-Wint-to-pointer-cast"

@interface FMIceLinkSTUNBindingRequest : FMIceLinkSTUNBindingMessage 

/// <summary>
/// Initializes a new instance of the <see cref="FMIceLinkSTUNBindingRequest" /> class.
/// </summary>
- (id) init;
/// <summary>
/// Initializes a new instance of the <see cref="FMIceLinkSTUNBindingRequest" /> class.
/// </summary>
+ (FMIceLinkSTUNBindingRequest*) stunBindingRequest;

@end


@class NSMutableDataFMExtensions;

/// <summary>
/// A STUN binding response.
/// </summary>
#pragma clang diagnostic ignored "-Wshorten-64-to-32"
#pragma clang diagnostic ignored "-Wint-to-pointer-cast"

@interface FMIceLinkSTUNBindingResponse : FMIceLinkSTUNBindingMessage 

/// <summary>
/// Initializes a new instance of the <see cref="FMIceLinkSTUNBindingResponse" /> class.
/// </summary>
/// <param name="transactionId">The transaction ID.</param>
/// <param name="success">Whether the request was successful.</param>
- (id) initWithTransactionId:(NSMutableData*)transactionId success:(bool)success;
/// <summary>
/// Initializes a new instance of the <see cref="FMIceLinkSTUNBindingResponse" /> class.
/// </summary>
/// <param name="transactionId">The transaction ID.</param>
/// <param name="success">Whether the request was successful.</param>
+ (FMIceLinkSTUNBindingResponse*) stunBindingResponseWithTransactionId:(NSMutableData*)transactionId success:(bool)success;

@end


@class FMIceLinkSTUNMessage;

#pragma clang diagnostic ignored "-Wshorten-64-to-32"
#pragma clang diagnostic ignored "-Wint-to-pointer-cast"

@interface FMIceLinkSTUNExceptionCreationArgs : NSObject 

- (id) initWithResponse:(FMIceLinkSTUNMessage*)response;
- (FMIceLinkSTUNMessage*) response;
+ (FMIceLinkSTUNExceptionCreationArgs*) stunExceptionCreationArgsWithResponse:(FMIceLinkSTUNMessage*)response;

@end


@class FMCallback;

#pragma clang diagnostic ignored "-Wshorten-64-to-32"
#pragma clang diagnostic ignored "-Wint-to-pointer-cast"

@interface FMIceLinkSTUNExceptionRegistration : NSObject 

- (int) code;
- (FMCallback*) creationDelegate;
- (id) initWithCode:(int)code creationDelegate:(FMCallback*)creationDelegate;
- (void) setCode:(int)value;
- (void) setCreationDelegate:(FMCallback*)value;
+ (FMIceLinkSTUNExceptionRegistration*) stunExceptionRegistrationWithCode:(int)code creationDelegate:(FMCallback*)creationDelegate;

@end


@class NSStringFMExtensions;

/// <summary>
/// Exception raised when a failed response contains
/// an unknown error code.
/// </summary>
#pragma clang diagnostic ignored "-Wshorten-64-to-32"
#pragma clang diagnostic ignored "-Wint-to-pointer-cast"

@interface FMIceLinkSTUNUnknownErrorCodeException : FMIceLinkSTUNException 

/// <summary>
/// Gets the error code.
/// </summary>
- (int) errorCode;
/// <summary>
/// Initializes a new instance of the <see cref="FMIceLinkSTUNUnknownErrorCodeException" /> class.
/// </summary>
/// <param name="errorCode">The error code.</param>
- (id) initWithErrorCode:(int)errorCode;
/// <summary>
/// Initializes a new instance of the <see cref="FMIceLinkSTUNUnknownErrorCodeException" /> class.
/// </summary>
/// <param name="message">The message.</param>
/// <param name="errorCode">The error code.</param>
- (id) initWithMessage:(NSString*)message errorCode:(int)errorCode;
/// <summary>
/// Initializes a new instance of the <see cref="FMIceLinkSTUNUnknownErrorCodeException" /> class.
/// </summary>
/// <param name="errorCode">The error code.</param>
+ (FMIceLinkSTUNUnknownErrorCodeException*) stunUnknownErrorCodeExceptionWithErrorCode:(int)errorCode;
/// <summary>
/// Initializes a new instance of the <see cref="FMIceLinkSTUNUnknownErrorCodeException" /> class.
/// </summary>
/// <param name="message">The message.</param>
/// <param name="errorCode">The error code.</param>
+ (FMIceLinkSTUNUnknownErrorCodeException*) stunUnknownErrorCodeExceptionWithMessage:(NSString*)message errorCode:(int)errorCode;

@end


@class FMIceLinkSTUNAlternateServerAttribute;
@class NSStringFMExtensions;

/// <summary>
/// The client should contact an alternate server for
/// this request.  This error response MUST only be sent if the
/// request included a USERNAME attribute and a valid MESSAGE-
/// INTEGRITY attribute; otherwise, it MUST NOT be sent and error
/// code 400 (Bad Request) is suggested.  This error response MUST
/// be protected with the MESSAGE-INTEGRITY attribute, and receivers
/// MUST validate the MESSAGE-INTEGRITY of this response before
/// redirecting themselves to an alternate server.
/// 
/// Note: Failure to generate and validate message integrity
/// for a 300 response allows an on-path attacker to falsify a
/// 300 response thus causing subsequent STUN messages to be
/// sent to a victim.
/// </summary>
#pragma clang diagnostic ignored "-Wshorten-64-to-32"
#pragma clang diagnostic ignored "-Wint-to-pointer-cast"

@interface FMIceLinkSTUNTryAlternateException : FMIceLinkSTUNException 

/// <summary>
/// Gets the alternate server attribute.
/// </summary>
- (FMIceLinkSTUNAlternateServerAttribute*) alternateServer;
/// <summary>
/// Initializes a new instance of the <see cref="FMIceLinkSTUNTryAlternateException" /> class.
/// </summary>
/// <param name="alternateServer">The alternate server attribute.</param>
- (id) initWithAlternateServer:(FMIceLinkSTUNAlternateServerAttribute*)alternateServer;
/// <summary>
/// Initializes a new instance of the <see cref="FMIceLinkSTUNTryAlternateException" /> class.
/// </summary>
/// <param name="message">The message.</param>
/// <param name="alternateServer">The alternate server attribute.</param>
- (id) initWithMessage:(NSString*)message alternateServer:(FMIceLinkSTUNAlternateServerAttribute*)alternateServer;
/// <summary>
/// Initializes a new instance of the <see cref="FMIceLinkSTUNTryAlternateException" /> class.
/// </summary>
/// <param name="alternateServer">The alternate server attribute.</param>
+ (FMIceLinkSTUNTryAlternateException*) stunTryAlternateExceptionWithAlternateServer:(FMIceLinkSTUNAlternateServerAttribute*)alternateServer;
/// <summary>
/// Initializes a new instance of the <see cref="FMIceLinkSTUNTryAlternateException" /> class.
/// </summary>
/// <param name="message">The message.</param>
/// <param name="alternateServer">The alternate server attribute.</param>
+ (FMIceLinkSTUNTryAlternateException*) stunTryAlternateExceptionWithMessage:(NSString*)message alternateServer:(FMIceLinkSTUNAlternateServerAttribute*)alternateServer;

@end


@class NSStringFMExtensions;

/// <summary>
/// The server has suffered a temporary error.  The
/// client should try again.
/// </summary>
#pragma clang diagnostic ignored "-Wshorten-64-to-32"
#pragma clang diagnostic ignored "-Wint-to-pointer-cast"

@interface FMIceLinkSTUNServerErrorException : FMIceLinkSTUNException 

/// <summary>
/// Initializes a new instance of the <see cref="FMIceLinkSTUNServerErrorException" /> class.
/// </summary>
- (id) init;
/// <summary>
/// Initializes a new instance of the <see cref="FMIceLinkSTUNServerErrorException" /> class.
/// </summary>
/// <param name="message">The message.</param>
- (id) initWithMessage:(NSString*)message;
/// <summary>
/// Initializes a new instance of the <see cref="FMIceLinkSTUNServerErrorException" /> class.
/// </summary>
+ (FMIceLinkSTUNServerErrorException*) stunServerErrorException;
/// <summary>
/// Initializes a new instance of the <see cref="FMIceLinkSTUNServerErrorException" /> class.
/// </summary>
/// <param name="message">The message.</param>
+ (FMIceLinkSTUNServerErrorException*) stunServerErrorExceptionWithMessage:(NSString*)message;

@end


@class FMIceLinkSTUNNonceAttribute;
@class FMIceLinkSTUNRealmAttribute;
@class NSStringFMExtensions;

/// <summary>
/// The NONCE used by the client was no longer valid.
/// The client should retry, using the NONCE provided in the
/// response.
/// </summary>
#pragma clang diagnostic ignored "-Wshorten-64-to-32"
#pragma clang diagnostic ignored "-Wint-to-pointer-cast"

@interface FMIceLinkSTUNStaleNonceException : FMIceLinkSTUNException 

/// <summary>
/// Initializes a new instance of the <see cref="FMIceLinkSTUNStaleNonceException" /> class.
/// </summary>
- (id) init;
/// <summary>
/// Initializes a new instance of the <see cref="FMIceLinkSTUNStaleNonceException" /> class.
/// </summary>
/// <param name="message">The message.</param>
- (id) initWithMessage:(NSString*)message;
/// <summary>
/// Initializes a new instance of the <see cref="FMIceLinkSTUNStaleNonceException" /> class.
/// </summary>
/// <param name="message">The message.</param>
/// <param name="nonce">The nonce attribute.</param>
/// <param name="realm">The realm attribute.</param>
- (id) initWithMessage:(NSString*)message nonce:(FMIceLinkSTUNNonceAttribute*)nonce realm:(FMIceLinkSTUNRealmAttribute*)realm;
/// <summary>
/// Initializes a new instance of the <see cref="FMIceLinkSTUNStaleNonceException" /> class.
/// </summary>
/// <param name="nonce">The nonce attribute.</param>
/// <param name="realm">The realm attribute.</param>
- (id) initWithNonce:(FMIceLinkSTUNNonceAttribute*)nonce realm:(FMIceLinkSTUNRealmAttribute*)realm;
/// <summary>
/// Gets the nonce attribute.
/// </summary>
- (FMIceLinkSTUNNonceAttribute*) nonce;
/// <summary>
/// Gets the realm attribute.
/// </summary>
- (FMIceLinkSTUNRealmAttribute*) realm;
/// <summary>
/// Initializes a new instance of the <see cref="FMIceLinkSTUNStaleNonceException" /> class.
/// </summary>
+ (FMIceLinkSTUNStaleNonceException*) stunStaleNonceException;
/// <summary>
/// Initializes a new instance of the <see cref="FMIceLinkSTUNStaleNonceException" /> class.
/// </summary>
/// <param name="message">The message.</param>
+ (FMIceLinkSTUNStaleNonceException*) stunStaleNonceExceptionWithMessage:(NSString*)message;
/// <summary>
/// Initializes a new instance of the <see cref="FMIceLinkSTUNStaleNonceException" /> class.
/// </summary>
/// <param name="message">The message.</param>
/// <param name="nonce">The nonce attribute.</param>
/// <param name="realm">The realm attribute.</param>
+ (FMIceLinkSTUNStaleNonceException*) stunStaleNonceExceptionWithMessage:(NSString*)message nonce:(FMIceLinkSTUNNonceAttribute*)nonce realm:(FMIceLinkSTUNRealmAttribute*)realm;
/// <summary>
/// Initializes a new instance of the <see cref="FMIceLinkSTUNStaleNonceException" /> class.
/// </summary>
/// <param name="nonce">The nonce attribute.</param>
/// <param name="realm">The realm attribute.</param>
+ (FMIceLinkSTUNStaleNonceException*) stunStaleNonceExceptionWithNonce:(FMIceLinkSTUNNonceAttribute*)nonce realm:(FMIceLinkSTUNRealmAttribute*)realm;

@end


@class FMIceLinkSTUNNonceAttribute;
@class FMIceLinkSTUNRealmAttribute;
@class NSStringFMExtensions;

/// <summary>
/// The request did not contain the correct
/// credentials to proceed.  The client should retry the request
/// with proper credentials.
/// </summary>
#pragma clang diagnostic ignored "-Wshorten-64-to-32"
#pragma clang diagnostic ignored "-Wint-to-pointer-cast"

@interface FMIceLinkSTUNUnauthorizedException : FMIceLinkSTUNException 

/// <summary>
/// Initializes a new instance of the <see cref="FMIceLinkSTUNUnauthorizedException" /> class.
/// </summary>
- (id) init;
/// <summary>
/// Initializes a new instance of the <see cref="FMIceLinkSTUNUnauthorizedException" /> class.
/// </summary>
/// <param name="message">The message.</param>
- (id) initWithMessage:(NSString*)message;
/// <summary>
/// Initializes a new instance of the <see cref="FMIceLinkSTUNStaleNonceException" /> class.
/// </summary>
/// <param name="message">The message.</param>
/// <param name="nonce">The nonce attribute.</param>
/// <param name="realm">The realm attribute.</param>
- (id) initWithMessage:(NSString*)message nonce:(FMIceLinkSTUNNonceAttribute*)nonce realm:(FMIceLinkSTUNRealmAttribute*)realm;
/// <summary>
/// Initializes a new instance of the <see cref="FMIceLinkSTUNUnauthorizedException" /> class.
/// </summary>
/// <param name="nonce">The nonce attribute.</param>
/// <param name="realm">The realm attribute.</param>
- (id) initWithNonce:(FMIceLinkSTUNNonceAttribute*)nonce realm:(FMIceLinkSTUNRealmAttribute*)realm;
/// <summary>
/// Gets the nonce attribute.
/// </summary>
- (FMIceLinkSTUNNonceAttribute*) nonce;
/// <summary>
/// Gets the realm attribute.
/// </summary>
- (FMIceLinkSTUNRealmAttribute*) realm;
/// <summary>
/// Initializes a new instance of the <see cref="FMIceLinkSTUNUnauthorizedException" /> class.
/// </summary>
+ (FMIceLinkSTUNUnauthorizedException*) stunUnauthorizedException;
/// <summary>
/// Initializes a new instance of the <see cref="FMIceLinkSTUNUnauthorizedException" /> class.
/// </summary>
/// <param name="message">The message.</param>
+ (FMIceLinkSTUNUnauthorizedException*) stunUnauthorizedExceptionWithMessage:(NSString*)message;
/// <summary>
/// Initializes a new instance of the <see cref="FMIceLinkSTUNStaleNonceException" /> class.
/// </summary>
/// <param name="message">The message.</param>
/// <param name="nonce">The nonce attribute.</param>
/// <param name="realm">The realm attribute.</param>
+ (FMIceLinkSTUNUnauthorizedException*) stunUnauthorizedExceptionWithMessage:(NSString*)message nonce:(FMIceLinkSTUNNonceAttribute*)nonce realm:(FMIceLinkSTUNRealmAttribute*)realm;
/// <summary>
/// Initializes a new instance of the <see cref="FMIceLinkSTUNUnauthorizedException" /> class.
/// </summary>
/// <param name="nonce">The nonce attribute.</param>
/// <param name="realm">The realm attribute.</param>
+ (FMIceLinkSTUNUnauthorizedException*) stunUnauthorizedExceptionWithNonce:(FMIceLinkSTUNNonceAttribute*)nonce realm:(FMIceLinkSTUNRealmAttribute*)realm;

@end


@class NSStringFMExtensions;

/// <summary>
/// Exception raised when a failed response does not contain
/// an error code or when the error code is inconsistent with
/// the contents of the response.
/// </summary>
#pragma clang diagnostic ignored "-Wshorten-64-to-32"
#pragma clang diagnostic ignored "-Wint-to-pointer-cast"

@interface FMIceLinkSTUNInvalidErrorCodeException : FMIceLinkSTUNException 

/// <summary>
/// Initializes a new instance of the <see cref="FMIceLinkSTUNInvalidErrorCodeException" /> class.
/// </summary>
- (id) init;
/// <summary>
/// Initializes a new instance of the <see cref="FMIceLinkSTUNInvalidErrorCodeException" /> class.
/// </summary>
/// <param name="message">The message.</param>
- (id) initWithMessage:(NSString*)message;
/// <summary>
/// Initializes a new instance of the <see cref="FMIceLinkSTUNInvalidErrorCodeException" /> class.
/// </summary>
+ (FMIceLinkSTUNInvalidErrorCodeException*) stunInvalidErrorCodeException;
/// <summary>
/// Initializes a new instance of the <see cref="FMIceLinkSTUNInvalidErrorCodeException" /> class.
/// </summary>
/// <param name="message">The message.</param>
+ (FMIceLinkSTUNInvalidErrorCodeException*) stunInvalidErrorCodeExceptionWithMessage:(NSString*)message;

@end


@class FMIceLinkSTUNUnknownAttributesAttribute;
@class NSStringFMExtensions;

/// <summary>
/// The server received a STUN packet containing
/// a comprehension-required attribute that it did not understand.
/// The server MUST put this unknown attribute in the UNKNOWN-
/// ATTRIBUTE attribute of its error response.
/// </summary>
#pragma clang diagnostic ignored "-Wshorten-64-to-32"
#pragma clang diagnostic ignored "-Wint-to-pointer-cast"

@interface FMIceLinkSTUNUnknownAttributeException : FMIceLinkSTUNException 

/// <summary>
/// Initializes a new instance of the <see cref="FMIceLinkSTUNUnknownAttributeException" /> class.
/// </summary>
/// <param name="message">The message.</param>
/// <param name="unknownAttributes">The unknown attributes attribute.</param>
- (id) initWithMessage:(NSString*)message unknownAttributes:(FMIceLinkSTUNUnknownAttributesAttribute*)unknownAttributes;
/// <summary>
/// Initializes a new instance of the <see cref="FMIceLinkSTUNUnknownAttributeException" /> class.
/// </summary>
/// <param name="unknownAttributes">The unknown attributes attribute.</param>
- (id) initWithUnknownAttributes:(FMIceLinkSTUNUnknownAttributesAttribute*)unknownAttributes;
/// <summary>
/// Initializes a new instance of the <see cref="FMIceLinkSTUNUnknownAttributeException" /> class.
/// </summary>
/// <param name="message">The message.</param>
/// <param name="unknownAttributes">The unknown attributes attribute.</param>
+ (FMIceLinkSTUNUnknownAttributeException*) stunUnknownAttributeExceptionWithMessage:(NSString*)message unknownAttributes:(FMIceLinkSTUNUnknownAttributesAttribute*)unknownAttributes;
/// <summary>
/// Initializes a new instance of the <see cref="FMIceLinkSTUNUnknownAttributeException" /> class.
/// </summary>
/// <param name="unknownAttributes">The unknown attributes attribute.</param>
+ (FMIceLinkSTUNUnknownAttributeException*) stunUnknownAttributeExceptionWithUnknownAttributes:(FMIceLinkSTUNUnknownAttributesAttribute*)unknownAttributes;
/// <summary>
/// Gets the unknown attributes attribute.
/// </summary>
- (FMIceLinkSTUNUnknownAttributesAttribute*) unknownAttributes;

@end


@class FMIceLinkICEAgentInitArgs;
@class FMIceLinkICEAgentUpArgs;
@class FMIceLinkICEAgentCandidateArgs;
@class FMIceLinkICEAgentLocalAddressesArgs;
@class FMIceLinkICEAgentReceiveRTPArgs;
@class FMIceLinkICEAgentReceiveRTCPArgs;
@class FMIceLinkICEAgentReceiveSCTPArgs;
@class FMIceLinkICEAgentSendRTCPArgs;
@class FMIceLinkICEAgentDownArgs;
@class NSStringFMExtensions;
@class NSMutableArrayFMExtensions;
@class FMIceLinkICEAcceptArgs;
@class FMIceLinkSDPMessage;
@class FMIceLinkICECheckThread;
@class FMIceLinkICECreateArgs;
@class FMIceLinkICEDisconnectArgs;
@class FMIceLinkCertificate;
@class FMTimeoutTimer;
@class FMCallback;
@class FMIceLinkCandidate;
@class FMIceLinkICECandidatePair;
@class FMIceLinkICEMediaStream;
@class FMIceLinkICECandidate;
@class FMIceLinkTransportAddress;
@class FMIceLinkRTPPacket;
@class FMIceLinkICEMediaFormat;
@class FMIceLinkSCTPMessage;
@class NSMutableDataFMExtensions;
@class FMIceLinkSendSCTPArgs;
@class FMIceLinkSTUNMessage;

#pragma clang diagnostic ignored "-Wshorten-64-to-32"
#pragma clang diagnostic ignored "-Wint-to-pointer-cast"

@interface FMIceLinkICEAgent : FMDynamic 

- (void) acceptWithAcceptArgs:(FMIceLinkICEAcceptArgs*)acceptArgs;
- (void) acceptWithArgs:(FMIceLinkICEAcceptArgs*)acceptArgs;
- (FMCallback*) addOnCandidateWithValue:(FMCallback*)value;
- (FMCallback*) addOnCandidate:(FMCallback*)value;
- (FMCallback*) addOnCandidateWithValueBlock:(void (^) (FMIceLinkICEAgentCandidateArgs*))valueBlock;
- (FMCallback*) addOnCandidateBlock:(void (^) (FMIceLinkICEAgentCandidateArgs*))valueBlock;
- (FMCallback*) addOnDownWithValue:(FMCallback*)value;
- (FMCallback*) addOnDown:(FMCallback*)value;
- (FMCallback*) addOnDownWithValueBlock:(void (^) (FMIceLinkICEAgentDownArgs*))valueBlock;
- (FMCallback*) addOnDownBlock:(void (^) (FMIceLinkICEAgentDownArgs*))valueBlock;
- (FMCallback*) addOnInitWithValue:(FMCallback*)value;
- (FMCallback*) addOnInit:(FMCallback*)value;
- (FMCallback*) addOnInitWithValueBlock:(void (^) (FMIceLinkICEAgentInitArgs*))valueBlock;
- (FMCallback*) addOnInitBlock:(void (^) (FMIceLinkICEAgentInitArgs*))valueBlock;
- (FMCallback*) addOnLocalAddressesWithValue:(FMCallback*)value;
- (FMCallback*) addOnLocalAddresses:(FMCallback*)value;
- (FMCallback*) addOnLocalAddressesWithValueBlock:(void (^) (FMIceLinkICEAgentLocalAddressesArgs*))valueBlock;
- (FMCallback*) addOnLocalAddressesBlock:(void (^) (FMIceLinkICEAgentLocalAddressesArgs*))valueBlock;
- (FMCallback*) addOnReceiveRTCPWithValue:(FMCallback*)value;
- (FMCallback*) addOnReceiveRTCP:(FMCallback*)value;
- (FMCallback*) addOnReceiveRTCPWithValueBlock:(void (^) (FMIceLinkICEAgentReceiveRTCPArgs*))valueBlock;
- (FMCallback*) addOnReceiveRTCPBlock:(void (^) (FMIceLinkICEAgentReceiveRTCPArgs*))valueBlock;
- (FMCallback*) addOnReceiveRTPWithValue:(FMCallback*)value;
- (FMCallback*) addOnReceiveRTP:(FMCallback*)value;
- (FMCallback*) addOnReceiveRTPWithValueBlock:(void (^) (FMIceLinkICEAgentReceiveRTPArgs*))valueBlock;
- (FMCallback*) addOnReceiveRTPBlock:(void (^) (FMIceLinkICEAgentReceiveRTPArgs*))valueBlock;
- (FMCallback*) addOnReceiveSCTPWithValue:(FMCallback*)value;
- (FMCallback*) addOnReceiveSCTP:(FMCallback*)value;
- (FMCallback*) addOnReceiveSCTPWithValueBlock:(void (^) (FMIceLinkICEAgentReceiveSCTPArgs*))valueBlock;
- (FMCallback*) addOnReceiveSCTPBlock:(void (^) (FMIceLinkICEAgentReceiveSCTPArgs*))valueBlock;
- (FMCallback*) addOnRemoteCertificateWithValue:(FMCallback*)value;
- (FMCallback*) addOnRemoteCertificate:(FMCallback*)value;
- (FMCallback*) addOnSendRTCPWithValue:(FMCallback*)value;
- (FMCallback*) addOnSendRTCP:(FMCallback*)value;
- (FMCallback*) addOnSendRTCPWithValueBlock:(void (^) (FMIceLinkICEAgentSendRTCPArgs*))valueBlock;
- (FMCallback*) addOnSendRTCPBlock:(void (^) (FMIceLinkICEAgentSendRTCPArgs*))valueBlock;
- (FMCallback*) addOnUpWithValue:(FMCallback*)value;
- (FMCallback*) addOnUp:(FMCallback*)value;
- (FMCallback*) addOnUpWithValueBlock:(void (^) (FMIceLinkICEAgentUpArgs*))valueBlock;
- (FMCallback*) addOnUpBlock:(void (^) (FMIceLinkICEAgentUpArgs*))valueBlock;
- (bool) addRemoteCandidateWithCandidate:(FMIceLinkCandidate*)candidate;
- (bool) addRemoteCandidate:(FMIceLinkCandidate*)candidate;
- (void) concludeProcessing;
- (void) createWithCreateArgs:(FMIceLinkICECreateArgs*)createArgs;
- (void) createWithArgs:(FMIceLinkICECreateArgs*)createArgs;
- (int) deadStreamTimeout;
- (bool) disableAutomaticReports;
- (void) disconnectWithDisconnectArgs:(FMIceLinkICEDisconnectArgs*)disconnectArgs;
- (void) disconnectWithArgs:(FMIceLinkICEDisconnectArgs*)disconnectArgs;
- (void) disconnectWithDisconnectArgs:(FMIceLinkICEDisconnectArgs*)disconnectArgs deadStreamDetected:(bool)deadStreamDetected relayFailureDetected:(bool)relayFailureDetected peerClosed:(bool)peerClosed;
- (void) disconnectWithArgs:(FMIceLinkICEDisconnectArgs*)disconnectArgs deadStreamDetected:(bool)deadStreamDetected relayFailureDetected:(bool)relayFailureDetected peerClosed:(bool)peerClosed;
- (NSString*) generatedCname;
- (NSString*) generatedPassword;
- (NSString*) generatedUsername;
- (FMIceLinkICECandidatePair*) getWaitingCandidatePair;
+ (FMIceLinkICEAgent*) iceAgentWithInitiator:(bool)initiator role:(FMIceLinkICEAgentRole)role serverAddresses:(NSMutableArray*)serverAddresses mediaStreams:(NSMutableArray*)mediaStreams turnUsernames:(NSMutableArray*)turnUsernames turnRealms:(NSMutableArray*)turnRealms turnPasswords:(NSMutableArray*)turnPasswords dtlsCertificate:(FMIceLinkCertificate*)dtlsCertificate dtlsCipherSuites:(NSMutableArray*)dtlsCipherSuites dtlsServerMinVersion:(FMIceLinkProtocolVersion)dtlsServerMinVersion dtlsServerMaxVersion:(FMIceLinkProtocolVersion)dtlsServerMaxVersion dtlsClientVersion:(FMIceLinkProtocolVersion)dtlsClientVersion publicIPAddresses:(NSMutableArray*)publicIPAddresses privateIPAddresses:(NSMutableArray*)privateIPAddresses iceUsernameFragment:(NSString*)iceUsernameFragment icePassword:(NSString*)icePassword cname:(NSString*)cname earlyCandidates:(bool)earlyCandidates earlyCandidatesTimeout:(int)earlyCandidatesTimeout virtualAdapters:(NSMutableArray*)virtualAdapters suppressPrivateCandidates:(bool)suppressPrivateCandidates suppressPublicCandidates:(bool)suppressPublicCandidates suppressRelayCandidates:(bool)suppressRelayCandidates disableAutomaticReports:(bool)disableAutomaticReports keepAliveInterval:(int)keepAliveInterval deadStreamTimeout:(int)deadStreamTimeout;
- (bool) initiator;
- (id) initWithInitiator:(bool)initiator role:(FMIceLinkICEAgentRole)role serverAddresses:(NSMutableArray*)serverAddresses mediaStreams:(NSMutableArray*)mediaStreams turnUsernames:(NSMutableArray*)turnUsernames turnRealms:(NSMutableArray*)turnRealms turnPasswords:(NSMutableArray*)turnPasswords dtlsCertificate:(FMIceLinkCertificate*)dtlsCertificate dtlsCipherSuites:(NSMutableArray*)dtlsCipherSuites dtlsServerMinVersion:(FMIceLinkProtocolVersion)dtlsServerMinVersion dtlsServerMaxVersion:(FMIceLinkProtocolVersion)dtlsServerMaxVersion dtlsClientVersion:(FMIceLinkProtocolVersion)dtlsClientVersion publicIPAddresses:(NSMutableArray*)publicIPAddresses privateIPAddresses:(NSMutableArray*)privateIPAddresses iceUsernameFragment:(NSString*)iceUsernameFragment icePassword:(NSString*)icePassword cname:(NSString*)cname earlyCandidates:(bool)earlyCandidates earlyCandidatesTimeout:(int)earlyCandidatesTimeout virtualAdapters:(NSMutableArray*)virtualAdapters suppressPrivateCandidates:(bool)suppressPrivateCandidates suppressPublicCandidates:(bool)suppressPublicCandidates suppressRelayCandidates:(bool)suppressRelayCandidates disableAutomaticReports:(bool)disableAutomaticReports keepAliveInterval:(int)keepAliveInterval deadStreamTimeout:(int)deadStreamTimeout;
- (void) keepAlive;
- (int) keepAliveInterval;
- (NSMutableArray*) mediaStreams;
- (void) raiseDeadStreamWithMediaStream:(FMIceLinkICEMediaStream*)mediaStream;
- (void) raiseLocalCandidateWithCandidate:(FMIceLinkICECandidate*)candidate;
- (void) raiseLocalCandidate:(FMIceLinkICECandidate*)candidate;
- (void) raisePeerCloseWithReason:(NSString*)reason;
- (void) raisePeerRTCPPacketsWithPackets:(NSMutableArray*)packets localCandidate:(FMIceLinkICECandidate*)localCandidate remoteAddress:(FMIceLinkTransportAddress*)remoteAddress mediaStream:(FMIceLinkICEMediaStream*)mediaStream;
- (void) raisePeerRTCPPackets:(NSMutableArray*)packets localCandidate:(FMIceLinkICECandidate*)localCandidate remoteAddress:(FMIceLinkTransportAddress*)remoteAddress mediaStream:(FMIceLinkICEMediaStream*)mediaStream;
- (void) raisePeerRTPPacketWithPacket:(FMIceLinkRTPPacket*)packet localCandidate:(FMIceLinkICECandidate*)localCandidate remoteAddress:(FMIceLinkTransportAddress*)remoteAddress mediaFormat:(FMIceLinkICEMediaFormat*)mediaFormat mediaStream:(FMIceLinkICEMediaStream*)mediaStream;
- (void) raisePeerRTPPacket:(FMIceLinkRTPPacket*)packet localCandidate:(FMIceLinkICECandidate*)localCandidate remoteAddress:(FMIceLinkTransportAddress*)remoteAddress mediaFormat:(FMIceLinkICEMediaFormat*)mediaFormat mediaStream:(FMIceLinkICEMediaStream*)mediaStream;
- (void) raisePeerSCTPMessageWithMessage:(FMIceLinkSCTPMessage*)message channelIndex:(int)channelIndex mediaStream:(FMIceLinkICEMediaStream*)mediaStream;
- (void) raisePeerSCTPMessage:(FMIceLinkSCTPMessage*)message channelIndex:(int)channelIndex mediaStream:(FMIceLinkICEMediaStream*)mediaStream;
- (void) raiseRelayFailureWithMediaStream:(FMIceLinkICEMediaStream*)mediaStream;
- (void) raiseRemoteCertificateWithCertificate:(NSMutableData*)certificate;
- (void) raiseRemoteCertificate:(NSMutableData*)certificate;
- (void) removeOnCandidateWithValue:(FMCallback*)value;
- (void) removeOnCandidate:(FMCallback*)value;
- (void) removeOnDownWithValue:(FMCallback*)value;
- (void) removeOnDown:(FMCallback*)value;
- (void) removeOnInitWithValue:(FMCallback*)value;
- (void) removeOnInit:(FMCallback*)value;
- (void) removeOnLocalAddressesWithValue:(FMCallback*)value;
- (void) removeOnLocalAddresses:(FMCallback*)value;
- (void) removeOnReceiveRTCPWithValue:(FMCallback*)value;
- (void) removeOnReceiveRTCP:(FMCallback*)value;
- (void) removeOnReceiveRTPWithValue:(FMCallback*)value;
- (void) removeOnReceiveRTP:(FMCallback*)value;
- (void) removeOnReceiveSCTPWithValue:(FMCallback*)value;
- (void) removeOnReceiveSCTP:(FMCallback*)value;
- (void) removeOnRemoteCertificateWithValue:(FMCallback*)value;
- (void) removeOnRemoteCertificate:(FMCallback*)value;
- (void) removeOnSendRTCPWithValue:(FMCallback*)value;
- (void) removeOnSendRTCP:(FMCallback*)value;
- (void) removeOnUpWithValue:(FMCallback*)value;
- (void) removeOnUp:(FMCallback*)value;
- (FMIceLinkICEAgentRole) role;
- (int) sendRTCPWithPackets:(NSMutableArray*)packets mediaIndex:(int)mediaIndex;
- (int) sendRTPWithPacket:(FMIceLinkRTPPacket*)packet payloadType:(uint8_t)payloadType mediaIndex:(int)mediaIndex;
- (void) sendSCTPWithSendArgs:(FMIceLinkSendSCTPArgs*)sendArgs mediaIndex:(int)mediaIndex;
- (NSMutableArray*) serverAddresses;
- (void) setInitiator:(bool)value;
- (bool) suppressPrivateCandidates;
- (bool) suppressPublicCandidates;
- (bool) suppressRelayCandidates;
- (long long) tieBreaker;
- (void) updateCandidatePairWithRequest:(FMIceLinkSTUNMessage*)request localCandidate:(FMIceLinkICECandidate*)localCandidate remoteAddress:(FMIceLinkTransportAddress*)remoteAddress relayed:(bool)relayed;
- (NSMutableArray*) virtualAdapters;

@end


@class FMIceLinkICEUdpMessageBroker;
@class NSStringFMExtensions;

#pragma clang diagnostic ignored "-Wshorten-64-to-32"
#pragma clang diagnostic ignored "-Wint-to-pointer-cast"

@interface FMIceLinkICEUdpCandidate : FMIceLinkICECandidate 

+ (FMIceLinkICEUdpCandidate*) iceUdpCandidateWithIPAddress:(NSString*)ipAddress port:(int)port componentId:(int)componentId sdpMediaType:(NSString*)sdpMediaType mediaStreamIndex:(int)mediaStreamIndex;
- (id) initWithIPAddress:(NSString*)ipAddress port:(int)port componentId:(int)componentId sdpMediaType:(NSString*)sdpMediaType mediaStreamIndex:(int)mediaStreamIndex;
- (FMIceLinkICEUdpMessageBroker*) messageBroker;
- (void) setMessageBroker:(FMIceLinkICEUdpMessageBroker*)value;

@end


@class FMManagedCondition;
@class FMManagedThread;
@class FMIceLinkICECandidate;
@class FMCallbackState;
@class FMIceLinkSTUNBindingRequest;
@class NSStringFMExtensions;

#pragma clang diagnostic ignored "-Wshorten-64-to-32"
#pragma clang diagnostic ignored "-Wint-to-pointer-cast"

@interface FMIceLinkICECandidatePair : NSObject 

- (void) assignPriorityWithRole:(FMIceLinkICEAgentRole)role;
- (FMIceLinkSTUNBindingRequest*) createBindingRequest;
- (NSString*) foundation;
- (int) hash;
+ (FMIceLinkICECandidatePair*) iceCandidatePairWithLocalCandidate:(FMIceLinkICECandidate*)localCandidate remoteCandidate:(FMIceLinkICECandidate*)remoteCandidate;
- (id) initWithLocalCandidate:(FMIceLinkICECandidate*)localCandidate remoteCandidate:(FMIceLinkICECandidate*)remoteCandidate;
- (bool) isEqualWithObj:(NSObject*)obj;
- (void) keepAlive;
- (int) keepAliveInterval;
- (FMIceLinkICECandidate*) localCandidate;
- (bool) nominated;
- (void) notifyDataSent;
- (long long) priority;
- (FMIceLinkICECandidate*) remoteCandidate;
- (void) setKeepAliveInterval:(int)value;
- (void) setNominated:(bool)value;
- (void) setPriority:(long long)value;
- (void) setState:(FMIceLinkICECandidatePairState)value;
- (void) setUseCandidateReceived:(bool)value;
- (void) setValid:(bool)value;
- (void) setValidPair:(FMIceLinkICECandidatePair*)value;
- (bool) startKeepAlive;
- (FMIceLinkICECandidatePairState) state;
- (bool) stopKeepAliveWithCallbackState:(FMCallbackState*)callbackState;
- (NSString*) toString;
- (NSString*) description;
- (bool) useCandidateReceived;
- (bool) valid;
- (FMIceLinkICECandidatePair*) validPair;

@end


@class FMIceLinkSCTPMessage;
@class FMIceLinkICECandidatePair;
@class NSMutableArrayFMExtensions;
@class NSStringFMExtensions;
@class FMIceLinkDTLSClient;
@class FMIceLinkDTLSServer;
@class FMManagedThread;
@class FMIceLinkCertificate;
@class FMIceLinkICESctpManager;
@class FMIceLinkICECheckList;
@class FMIceLinkEncryptor;
@class NSMutableDataFMExtensions;
@class FMCallback;
@class FMIceLinkICEValidList;
@class FMIceLinkICECandidate;
@class FMCallbackState;
@class FMIceLinkSendSCTPArgs;

#pragma clang diagnostic ignored "-Wshorten-64-to-32"
#pragma clang diagnostic ignored "-Wint-to-pointer-cast"

@interface FMIceLinkICEComponent : NSObject 

- (FMIceLinkICECandidatePair*) activeCandidatePair;
- (bool) addCandidateWithCandidate:(FMIceLinkICECandidate*)candidate role:(FMIceLinkICEAgentRole)role;
- (bool) addCandidate:(FMIceLinkICECandidate*)candidate role:(FMIceLinkICEAgentRole)role;
- (bool) addRemoteCandidateWithRemoteCandidate:(FMIceLinkICECandidate*)remoteCandidate;
- (bool) addRemoteCandidate:(FMIceLinkICECandidate*)remoteCandidate;
- (long long) bytesReceivedRTCP;
- (long long) bytesReceivedRTP;
- (NSMutableArray*) candidates;
- (FMIceLinkICECheckList*) checkList;
- (void) closeWithReason:(NSString*)reason peerClosed:(bool)peerClosed callbackState:(FMCallbackState*)callbackState;
- (bool) closing;
- (NSString*) cname;
- (bool) completed;
- (int) deadStreamTimeout;
- (bool) disableKeepAliveThread;
- (NSString*) dtlsLocalFingerprint;
- (NSString*) dtlsLocalFingerprintAlgorithm;
- (NSString*) dtlsRemoteFingerprint;
- (NSString*) dtlsRemoteFingerprintAlgorithm;
- (FMIceLinkICEDtlsHandshakeState) dtlsState;
- (void) encryptAndSendWithDTLSWithPacket:(NSMutableData*)packet;
- (void) encryptAndSendWithTLSWithPacket:(NSMutableData*)packet;
- (FMIceLinkEncryptor*) encryptor;
- (bool) hasNominated;
- (bool) hasValid;
- (NSMutableArray*) hostCandidates;
- (NSMutableArray*) hostRemoteCandidates;
+ (FMIceLinkICEComponent*) iceComponentWithId:(int)idValue;
- (int) id;
- (void) initializeDtlsWithEncryptionRole:(FMIceLinkEncryptionRole)encryptionRole agentRole:(FMIceLinkICEAgentRole)agentRole encryptionModes:(NSMutableArray*)encryptionModes localCertificate:(FMIceLinkCertificate*)localCertificate cipherSuites:(NSMutableArray*)cipherSuites serverMinVersion:(FMIceLinkProtocolVersion)serverMinVersion serverMaxVersion:(FMIceLinkProtocolVersion)serverMaxVersion clientVersion:(FMIceLinkProtocolVersion)clientVersion;
- (id) initWithId:(int)idValue;
- (int) keepAliveInterval;
- (void) lockActiveCandidatePair;
- (NSMutableArray*) mediaFormats;
- (int) mediaStreamIndex;
- (NSMutableArray*) nominatedCandidatePairs;
- (FMCallback*) onDeadComponent;
- (FMCallback*) onDTLSEncryptionMode;
- (FMCallback*) onDTLSFinished;
- (FMCallback*) onDTLSRemoteCertificate;
- (FMCallback*) onRelayFailure;
- (FMCallback*) onRTCPPackets;
- (FMCallback*) onRTPPacket;
- (FMCallback*) onSCTPFinished;
- (FMCallback*) onSCTPMessage;
- (FMCallback*) onSTUNRequest;
- (long long) packetsReceivedRTCP;
- (long long) packetsReceivedRTP;
- (NSString*) password;
- (NSMutableArray*) peerReflexiveCandidates;
- (NSMutableArray*) peerReflexiveRemoteCandidates;
- (FMIceLinkStreamProtocol) protocol;
- (NSMutableArray*) relayedCandidates;
- (NSMutableArray*) relayedRemoteCandidates;
- (NSMutableArray*) remoteCandidates;
- (void) removeCandidateWithCandidate:(FMIceLinkICECandidate*)candidate;
- (void) removeCandidate:(FMIceLinkICECandidate*)candidate;
- (void) removeRemoteCandidateWithCandidate:(FMIceLinkICECandidate*)candidate;
- (void) removeRemoteCandidate:(FMIceLinkICECandidate*)candidate;
- (FMIceLinkICEAgentRole) role;
- (int) sctpChannelCount;
- (long long) sctpMaxMessageSize;
- (int) sctpPort;
- (NSString*) sctpProtocol;
- (FMIceLinkICESctpInitializationState) sctpState;
- (NSString*) sdpMediaType;
- (int) sendRawWithData:(NSMutableData*)data;
- (void) sendSCTPWithSendArgs:(FMIceLinkSendSCTPArgs*)sendArgs;
- (NSMutableArray*) serverReflexiveCandidates;
- (NSMutableArray*) serverReflexiveRemoteCandidates;
- (void) setBytesReceivedRTCP:(long long)value;
- (void) setBytesReceivedRTP:(long long)value;
- (void) setCandidateCallbacks;
- (void) setClosing:(bool)value;
- (void) setCname:(NSString*)value;
- (void) setCompleted;
- (void) setDeadStreamTimeout:(int)value;
- (void) setDisableKeepAliveThread:(bool)value;
- (void) setDtlsLocalFingerprint:(NSString*)value;
- (void) setDtlsLocalFingerprintAlgorithm:(NSString*)value;
- (void) setDtlsRemoteFingerprint:(NSString*)value;
- (void) setDtlsRemoteFingerprintAlgorithm:(NSString*)value;
- (void) setEncryptor:(FMIceLinkEncryptor*)value;
- (void) setKeepAliveInterval:(int)value;
- (void) setMediaFormats:(NSMutableArray*)value;
- (void) setMediaStreamIndex:(int)value;
- (void) setOnDeadComponent:(FMCallback*)value;
- (void) setOnDTLSEncryptionMode:(FMCallback*)value;
- (void) setOnDTLSEncryptionModeBlock:(void (^) (FMIceLinkEncryptionMode))valueBlock;
- (void) setOnDTLSFinished:(FMCallback*)value;
- (void) setOnDTLSRemoteCertificate:(FMCallback*)value;
- (void) setOnRelayFailure:(FMCallback*)value;
- (void) setOnRTCPPackets:(FMCallback*)value;
- (void) setOnRTPPacket:(FMCallback*)value;
- (void) setOnSCTPFinished:(FMCallback*)value;
- (void) setOnSCTPMessage:(FMCallback*)value;
- (void) setOnSCTPMessageBlock:(void (^) (FMIceLinkSCTPMessage*, int))valueBlock;
- (void) setOnSTUNRequest:(FMCallback*)value;
- (void) setPacketsReceivedRTCP:(long long)value;
- (void) setPacketsReceivedRTP:(long long)value;
- (void) setPassword:(NSString*)value;
- (void) setProtocol:(FMIceLinkStreamProtocol)value;
- (void) setRole:(FMIceLinkICEAgentRole)value;
- (void) setSctpChannelCount:(int)value;
- (void) setSctpMaxMessageSize:(long long)value;
- (void) setSctpPort:(int)value;
- (void) setSctpProtocol:(NSString*)value;
- (void) setSdpMediaType:(NSString*)value;
- (void) setSuppressPrivateCandidates:(bool)value;
- (void) setSuppressPublicCandidates:(bool)value;
- (void) setSuppressRelayCandidates:(bool)value;
- (void) setTieBreaker:(long long)value;
- (void) setUseDtls:(bool)value;
- (void) setUsername:(NSString*)value;
- (void) startDtls;
- (NSMutableArray*) suppressedHostCandidates;
- (NSMutableArray*) suppressedRelayedCandidates;
- (NSMutableArray*) suppressedServerReflexiveCandidates;
- (bool) suppressPrivateCandidates;
- (bool) suppressPublicCandidates;
- (bool) suppressRelayCandidates;
- (long long) tieBreaker;
- (NSString*) toString;
- (NSString*) description;
- (void) updateCandidateProps;
- (void) updateDtlsWithEncryptionRole:(FMIceLinkEncryptionRole)encryptionRole;
- (bool) useDtls;
- (NSString*) username;
- (FMIceLinkICEValidList*) validList;

@end


@class NSStringFMExtensions;

/// <summary>
/// Exception raised when the transaction ID of the response
/// does not match the transaction ID of the request.
/// </summary>
#pragma clang diagnostic ignored "-Wshorten-64-to-32"
#pragma clang diagnostic ignored "-Wint-to-pointer-cast"

@interface FMIceLinkSTUNInvalidTransactionIdException : FMIceLinkSTUNException 

/// <summary>
/// Initializes a new instance of the <see cref="FMIceLinkSTUNInvalidTransactionIdException" /> class.
/// </summary>
- (id) init;
/// <summary>
/// Initializes a new instance of the <see cref="FMIceLinkSTUNInvalidTransactionIdException" /> class.
/// </summary>
/// <param name="message">The message.</param>
- (id) initWithMessage:(NSString*)message;
/// <summary>
/// Initializes a new instance of the <see cref="FMIceLinkSTUNInvalidTransactionIdException" /> class.
/// </summary>
+ (FMIceLinkSTUNInvalidTransactionIdException*) stunInvalidTransactionIdException;
/// <summary>
/// Initializes a new instance of the <see cref="FMIceLinkSTUNInvalidTransactionIdException" /> class.
/// </summary>
/// <param name="message">The message.</param>
+ (FMIceLinkSTUNInvalidTransactionIdException*) stunInvalidTransactionIdExceptionWithMessage:(NSString*)message;

@end


@class NSStringFMExtensions;

/// <summary>
/// Exception raised when validation of the message
/// integrity attribute fails.
/// </summary>
#pragma clang diagnostic ignored "-Wshorten-64-to-32"
#pragma clang diagnostic ignored "-Wint-to-pointer-cast"

@interface FMIceLinkSTUNInvalidMessageIntegrityException : FMIceLinkSTUNException 

/// <summary>
/// Initializes a new instance of the <see cref="FMIceLinkSTUNInvalidMessageIntegrityException" /> class.
/// </summary>
- (id) init;
/// <summary>
/// Initializes a new instance of the <see cref="FMIceLinkSTUNInvalidMessageIntegrityException" /> class.
/// </summary>
/// <param name="message">The message.</param>
- (id) initWithMessage:(NSString*)message;
/// <summary>
/// Initializes a new instance of the <see cref="FMIceLinkSTUNInvalidMessageIntegrityException" /> class.
/// </summary>
+ (FMIceLinkSTUNInvalidMessageIntegrityException*) stunInvalidMessageIntegrityException;
/// <summary>
/// Initializes a new instance of the <see cref="FMIceLinkSTUNInvalidMessageIntegrityException" /> class.
/// </summary>
/// <param name="message">The message.</param>
+ (FMIceLinkSTUNInvalidMessageIntegrityException*) stunInvalidMessageIntegrityExceptionWithMessage:(NSString*)message;

@end


@class NSStringFMExtensions;
@class NSMutableDataFMExtensions;

/// <summary>
/// The alternate server represents an alternate transport address
/// identifying a different STUN server that the STUN client should try.
/// </summary>
#pragma clang diagnostic ignored "-Wshorten-64-to-32"
#pragma clang diagnostic ignored "-Wint-to-pointer-cast"

@interface FMIceLinkSTUNAlternateServerAttribute : FMIceLinkSTUNAttribute 

/// <summary>
/// Initializes a new instance of the <see cref="FMIceLinkSTUNAlternateServerAttribute" /> class.
/// </summary>
/// <param name="valueBytes">The attribute value as a byte array.</param>
+ (FMIceLinkSTUNAlternateServerAttribute*) fromValueBytesWithValueBytes:(NSMutableData*)valueBytes;
/// <summary>
/// Initializes a new instance of the <see cref="FMIceLinkSTUNAlternateServerAttribute" /> class.
/// </summary>
/// <param name="valueBytes">The attribute value as a byte array.</param>
+ (FMIceLinkSTUNAlternateServerAttribute*) fromValueBytes:(NSMutableData*)valueBytes;
- (NSMutableData*) getValueBytes;
/// <summary>
/// Initializes a new instance of the <see cref="FMIceLinkSTUNAlternateServerAttribute" /> class.
/// </summary>
/// <param name="ipAddress">The IP address.</param>
/// <param name="port">The port.</param>
- (id) initWithIPAddress:(NSString*)ipAddress port:(int)port;
/// <summary>
/// Gets the IP address.
/// </summary>
- (NSString*) ipAddress;
/// <summary>
/// Gets the port.
/// </summary>
- (int) port;
/// <summary>
/// Sets the IP address.
/// </summary>
- (void) setIPAddress:(NSString*)value;
/// <summary>
/// Sets the port.
/// </summary>
- (void) setPort:(int)value;
/// <summary>
/// Initializes a new instance of the <see cref="FMIceLinkSTUNAlternateServerAttribute" /> class.
/// </summary>
/// <param name="ipAddress">The IP address.</param>
/// <param name="port">The port.</param>
+ (FMIceLinkSTUNAlternateServerAttribute*) stunAlternateServerAttributeWithIPAddress:(NSString*)ipAddress port:(int)port;
/// <summary>
/// Returns a string that represents this instance.
/// </summary>
/// <returns>
/// A string that represents this instance.
/// </returns>
- (NSString*) toString;
/// <summary>
/// Returns a string that represents this instance.
/// </summary>
/// <returns>
/// A string that represents this instance.
/// </returns>
- (NSString*) description;

@end


@class NSStringFMExtensions;
@class NSMutableDataFMExtensions;

/// <summary>
/// The SOFTWARE attribute contains a textual description of the software
/// being used by the agent sending the message.  It is used by clients
/// and servers.  Its value SHOULD include manufacturer and version
/// number.  The attribute has no impact on operation of the protocol,
/// and serves only as a tool for diagnostic and debugging purposes.  The
/// value of SOFTWARE is variable length.  It MUST be a UTF-8 [RFC3629]
/// encoded sequence of less than 128 characters (which can be as long as
/// 763 bytes).
/// </summary>
#pragma clang diagnostic ignored "-Wshorten-64-to-32"
#pragma clang diagnostic ignored "-Wint-to-pointer-cast"

@interface FMIceLinkSTUNSoftwareAttribute : FMIceLinkSTUNAttribute 

/// <summary>
/// Initializes a new instance of the <see cref="FMIceLinkSTUNSoftwareAttribute" /> class.
/// </summary>
/// <param name="valueBytes">The attribute value as a byte array.</param>
+ (FMIceLinkSTUNSoftwareAttribute*) fromValueBytesWithValueBytes:(NSMutableData*)valueBytes;
/// <summary>
/// Initializes a new instance of the <see cref="FMIceLinkSTUNSoftwareAttribute" /> class.
/// </summary>
/// <param name="valueBytes">The attribute value as a byte array.</param>
+ (FMIceLinkSTUNSoftwareAttribute*) fromValueBytes:(NSMutableData*)valueBytes;
- (NSMutableData*) getValueBytes;
/// <summary>
/// Initializes a new instance of the <see cref="FMIceLinkSTUNSoftwareAttribute" /> class.
/// </summary>
/// <param name="value">The textual description of the software being used by
/// the agent sending the message.</param>
- (id) initWithValue:(NSString*)value;
/// <summary>
/// Sets the textual description of the software being used by
/// the agent sending the message.
/// </summary>
- (void) setValue:(NSString*)value;
/// <summary>
/// Initializes a new instance of the <see cref="FMIceLinkSTUNSoftwareAttribute" /> class.
/// </summary>
/// <param name="value">The textual description of the software being used by
/// the agent sending the message.</param>
+ (FMIceLinkSTUNSoftwareAttribute*) stunSoftwareAttributeWithValue:(NSString*)value;
/// <summary>
/// Returns a string that represents this instance.
/// </summary>
/// <returns>
/// A string that represents this instance.
/// </returns>
- (NSString*) toString;
/// <summary>
/// Returns a string that represents this instance.
/// </summary>
/// <returns>
/// A string that represents this instance.
/// </returns>
- (NSString*) description;
/// <summary>
/// Gets the textual description of the software being used by
/// the agent sending the message.
/// </summary>
- (NSString*) value;

@end


@class NSMutableArrayFMExtensions;
@class NSMutableDataFMExtensions;

/// <summary>
/// The UNKNOWN-ATTRIBUTES attribute is present only in an error response
/// when the response code in the ERROR-CODE attribute is 420.
/// </summary>
#pragma clang diagnostic ignored "-Wshorten-64-to-32"
#pragma clang diagnostic ignored "-Wint-to-pointer-cast"

@interface FMIceLinkSTUNUnknownAttributesAttribute : FMIceLinkSTUNAttribute 

/// <summary>
/// Adds an unknown attribute type.
/// </summary>
- (void) addTypeWithType:(NSMutableData*)type;
/// <summary>
/// Adds an unknown attribute type.
/// </summary>
- (void) addType:(NSMutableData*)type;
/// <summary>
/// Initializes a new instance of the <see cref="FMIceLinkSTUNUnknownAttributesAttribute" /> class.
/// </summary>
/// <param name="valueBytes">The attribute value as a byte array.</param>
+ (FMIceLinkSTUNUnknownAttributesAttribute*) fromValueBytesWithValueBytes:(NSMutableData*)valueBytes;
/// <summary>
/// Initializes a new instance of the <see cref="FMIceLinkSTUNUnknownAttributesAttribute" /> class.
/// </summary>
/// <param name="valueBytes">The attribute value as a byte array.</param>
+ (FMIceLinkSTUNUnknownAttributesAttribute*) fromValueBytes:(NSMutableData*)valueBytes;
- (NSMutableData*) getValueBytes;
/// <summary>
/// Initializes a new instance of the <see cref="FMIceLinkSTUNUnknownAttributesAttribute" /> class.
/// </summary>
- (id) init;
/// <summary>
/// Removes an unknown attribute type.
/// </summary>
- (void) removeTypeWithType:(NSMutableData*)type;
/// <summary>
/// Removes an unknown attribute type.
/// </summary>
- (void) removeType:(NSMutableData*)type;
/// <summary>
/// Initializes a new instance of the <see cref="FMIceLinkSTUNUnknownAttributesAttribute" /> class.
/// </summary>
+ (FMIceLinkSTUNUnknownAttributesAttribute*) stunUnknownAttributesAttribute;
/// <summary>
/// Gets the array of unknown attribute types.
/// </summary>
- (NSMutableArray*) types;

@end


@class NSStringFMExtensions;
@class NSMutableDataFMExtensions;

/// <summary>
/// The NONCE attribute may be present in requests and responses.  It
/// contains a sequence of qdtext or quoted-pair, which are defined in
/// RFC 3261 [RFC3261].  Note that this means that the NONCE attribute
/// will not contain actual quote characters.  See RFC 2617 [RFC2617],
/// Section 4.3, for guidance on selection of nonce values in a server.
/// </summary>
#pragma clang diagnostic ignored "-Wshorten-64-to-32"
#pragma clang diagnostic ignored "-Wint-to-pointer-cast"

@interface FMIceLinkSTUNNonceAttribute : FMIceLinkSTUNAttribute 

/// <summary>
/// Initializes a new instance of the <see cref="FMIceLinkSTUNNonceAttribute" /> class.
/// </summary>
/// <param name="valueBytes">The attribute value as a byte array.</param>
+ (FMIceLinkSTUNNonceAttribute*) fromValueBytesWithValueBytes:(NSMutableData*)valueBytes;
/// <summary>
/// Initializes a new instance of the <see cref="FMIceLinkSTUNNonceAttribute" /> class.
/// </summary>
/// <param name="valueBytes">The attribute value as a byte array.</param>
+ (FMIceLinkSTUNNonceAttribute*) fromValueBytes:(NSMutableData*)valueBytes;
- (NSMutableData*) getValueBytes;
/// <summary>
/// Initializes a new instance of the <see cref="FMIceLinkSTUNNonceAttribute" /> class.
/// </summary>
/// <param name="value">The nonce value.</param>
- (id) initWithValue:(NSString*)value;
/// <summary>
/// Sets the nonce value.
/// </summary>
- (void) setValue:(NSString*)value;
/// <summary>
/// Initializes a new instance of the <see cref="FMIceLinkSTUNNonceAttribute" /> class.
/// </summary>
/// <param name="value">The nonce value.</param>
+ (FMIceLinkSTUNNonceAttribute*) stunNonceAttributeWithValue:(NSString*)value;
/// <summary>
/// Returns a string that represents this instance.
/// </summary>
/// <returns>
/// A string that represents this instance.
/// </returns>
- (NSString*) toString;
/// <summary>
/// Returns a string that represents this instance.
/// </summary>
/// <returns>
/// A string that represents this instance.
/// </returns>
- (NSString*) description;
/// <summary>
/// Gets the nonce value.
/// </summary>
- (NSString*) value;

@end


@class NSStringFMExtensions;
@class NSMutableDataFMExtensions;

/// <summary>
/// The REALM attribute may be present in requests and responses.  It
/// contains text that meets the grammar for "realm-value" as described
/// in RFC 3261 [RFC3261] but without the double quotes and their
/// surrounding whitespace.  That is, it is an unquoted realm-value (and
/// is therefore a sequence of qdtext or quoted-pair).  It MUST be a
/// UTF-8 [RFC3629] encoded sequence of less than 128 characters (which
/// can be as long as 763 bytes), and MUST have been processed using
/// SASLprep [RFC4013].
/// </summary>
#pragma clang diagnostic ignored "-Wshorten-64-to-32"
#pragma clang diagnostic ignored "-Wint-to-pointer-cast"

@interface FMIceLinkSTUNRealmAttribute : FMIceLinkSTUNAttribute 

/// <summary>
/// Initializes a new instance of the <see cref="FMIceLinkSTUNRealmAttribute" /> class.
/// </summary>
/// <param name="valueBytes">The attribute value as a byte array.</param>
+ (FMIceLinkSTUNRealmAttribute*) fromValueBytesWithValueBytes:(NSMutableData*)valueBytes;
/// <summary>
/// Initializes a new instance of the <see cref="FMIceLinkSTUNRealmAttribute" /> class.
/// </summary>
/// <param name="valueBytes">The attribute value as a byte array.</param>
+ (FMIceLinkSTUNRealmAttribute*) fromValueBytes:(NSMutableData*)valueBytes;
- (NSMutableData*) getValueBytes;
/// <summary>
/// Initializes a new instance of the <see cref="FMIceLinkSTUNRealmAttribute" /> class.
/// </summary>
/// <param name="value">The realm value.</param>
- (id) initWithValue:(NSString*)value;
/// <summary>
/// Sets the realm value.
/// </summary>
- (void) setValue:(NSString*)value;
/// <summary>
/// Initializes a new instance of the <see cref="FMIceLinkSTUNRealmAttribute" /> class.
/// </summary>
/// <param name="value">The realm value.</param>
+ (FMIceLinkSTUNRealmAttribute*) stunRealmAttributeWithValue:(NSString*)value;
/// <summary>
/// Returns a string that represents this instance.
/// </summary>
/// <returns>
/// A string that represents this instance.
/// </returns>
- (NSString*) toString;
/// <summary>
/// Returns a string that represents this instance.
/// </summary>
/// <returns>
/// A string that represents this instance.
/// </returns>
- (NSString*) description;
/// <summary>
/// Gets the realm value.
/// </summary>
- (NSString*) value;

@end


@class NSStringFMExtensions;
@class NSMutableDataFMExtensions;

/// <summary>
/// The ERROR-CODE attribute is used in error response messages.  It
/// contains a numeric error code value in the range of 300 to 699 plus a
/// textual reason phrase encoded in UTF-8 [RFC3629], and is consistent
/// in its code assignments and semantics with SIP [RFC3261] and HTTP
/// [RFC2616]. The reason phrase is meant for user consumption, and can
/// be anything appropriate for the error code.  Recommended reason
/// phrases for the defined error codes are included in the IANA registry
/// for error codes.  The reason phrase MUST be a UTF-8 [RFC3629] encoded
/// sequence of less than 128 characters (which can be as long as 763
/// bytes).
/// </summary>
#pragma clang diagnostic ignored "-Wshorten-64-to-32"
#pragma clang diagnostic ignored "-Wint-to-pointer-cast"

@interface FMIceLinkSTUNErrorCodeAttribute : FMIceLinkSTUNAttribute 

/// <summary>
/// Gets the error code.
/// </summary>
/// <value>
/// The code.
/// </value>
- (int) code;
/// <summary>
/// Initializes a new instance of the <see cref="FMIceLinkSTUNErrorCodeAttribute" /> class.
/// </summary>
/// <param name="valueBytes">The attribute value as a byte array.</param>
+ (FMIceLinkSTUNErrorCodeAttribute*) fromValueBytesWithValueBytes:(NSMutableData*)valueBytes;
/// <summary>
/// Initializes a new instance of the <see cref="FMIceLinkSTUNErrorCodeAttribute" /> class.
/// </summary>
/// <param name="valueBytes">The attribute value as a byte array.</param>
+ (FMIceLinkSTUNErrorCodeAttribute*) fromValueBytes:(NSMutableData*)valueBytes;
- (NSMutableData*) getValueBytes;
/// <summary>
/// Initializes a new instance of the <see cref="FMIceLinkSTUNErrorCodeAttribute" /> class.
/// </summary>
/// <param name="code">The error code.</param>
- (id) initWithCode:(int)code;
/// <summary>
/// Initializes a new instance of the <see cref="FMIceLinkSTUNErrorCodeAttribute" /> class.
/// </summary>
/// <param name="code">The error code.</param>
/// <param name="reason">The error reason.</param>
- (id) initWithCode:(int)code reason:(NSString*)reason;
/// <summary>
/// Gets the error reason.
/// </summary>
/// <value>
/// The reason.
/// </value>
- (NSString*) reason;
/// <summary>
/// Sets the error code.
/// </summary>
/// <value>
/// The code.
/// </value>
- (void) setCode:(int)value;
/// <summary>
/// Sets the error reason.
/// </summary>
/// <value>
/// The reason.
/// </value>
- (void) setReason:(NSString*)value;
/// <summary>
/// Initializes a new instance of the <see cref="FMIceLinkSTUNErrorCodeAttribute" /> class.
/// </summary>
/// <param name="code">The error code.</param>
+ (FMIceLinkSTUNErrorCodeAttribute*) stunErrorCodeAttributeWithCode:(int)code;
/// <summary>
/// Initializes a new instance of the <see cref="FMIceLinkSTUNErrorCodeAttribute" /> class.
/// </summary>
/// <param name="code">The error code.</param>
/// <param name="reason">The error reason.</param>
+ (FMIceLinkSTUNErrorCodeAttribute*) stunErrorCodeAttributeWithCode:(int)code reason:(NSString*)reason;
/// <summary>
/// Returns a string that represents this instance.
/// </summary>
/// <returns>
/// A string that represents this instance.
/// </returns>
- (NSString*) toString;
/// <summary>
/// Returns a string that represents this instance.
/// </summary>
/// <returns>
/// A string that represents this instance.
/// </returns>
- (NSString*) description;

@end


@class NSMutableDataFMExtensions;
@class NSStringFMExtensions;

/// <summary>
/// The FINGERPRINT attribute MAY be present in all STUN messages.  The
/// value of the attribute is computed as the CRC-32 of the STUN message
/// up to (but excluding) the FINGERPRINT attribute itself, XOR'ed with
/// the 32-bit value 0x5354554e (the XOR helps in cases where an
/// application packet is also using CRC-32 in it).  The 32-bit CRC is
/// the one defined in ITU V.42 [ITU.V42.2002], which has a generator
/// polynomial of x32+x26+x23+x22+x16+x12+x11+x10+x8+x7+x5+x4+x2+x+1.
/// When present, the FINGERPRINT attribute MUST be the last attribute in
/// the message, and thus will appear after MESSAGE-INTEGRITY.
/// </summary>
#pragma clang diagnostic ignored "-Wshorten-64-to-32"
#pragma clang diagnostic ignored "-Wint-to-pointer-cast"

@interface FMIceLinkSTUNFingerprintAttribute : FMIceLinkSTUNAttribute 

/// <summary>
/// Initializes a new instance of the <see cref="FMIceLinkSTUNFingerprintAttribute" /> class.
/// </summary>
/// <param name="valueBytes">The attribute value as a byte array.</param>
/// <param name="messageBytes">The message bytes thus far.</param>
+ (FMIceLinkSTUNFingerprintAttribute*) fromValueBytesWithValueBytes:(NSMutableData*)valueBytes messageBytes:(NSMutableData*)messageBytes;
/// <summary>
/// Initializes a new instance of the <see cref="FMIceLinkSTUNFingerprintAttribute" /> class.
/// </summary>
/// <param name="valueBytes">The attribute value as a byte array.</param>
/// <param name="messageBytes">The message bytes thus far.</param>
+ (FMIceLinkSTUNFingerprintAttribute*) fromValueBytes:(NSMutableData*)valueBytes messageBytes:(NSMutableData*)messageBytes;
- (NSMutableData*) getBytesWithMessageBytes:(NSMutableData*)messageBytes;
- (NSMutableData*) getValueBytes;
/// <summary>
/// Initializes a new instance of the <see cref="FMIceLinkSTUNFingerprintAttribute" /> class.
/// </summary>
- (id) init;
/// <summary>
/// Initializes a new instance of the <see cref="FMIceLinkSTUNFingerprintAttribute" /> class.
/// </summary>
+ (FMIceLinkSTUNFingerprintAttribute*) stunFingerprintAttribute;
/// <summary>
/// Returns a string that represents this instance.
/// </summary>
/// <returns>
/// A string that represents this instance.
/// </returns>
- (NSString*) toString;
/// <summary>
/// Returns a string that represents this instance.
/// </summary>
/// <returns>
/// A string that represents this instance.
/// </returns>
- (NSString*) description;

@end


@class NSMutableDataFMExtensions;
@class NSStringFMExtensions;

/// <summary>
/// The MESSAGE-INTEGRITY attribute contains an HMAC-SHA1 [RFC2104] of
/// the STUN message.  The MESSAGE-INTEGRITY attribute can be present in
/// any STUN message type.  Since it uses the SHA1 hash, the HMAC will be
/// 20 bytes.  The text used as input to HMAC is the STUN message,
/// including the header, up to and including the attribute preceding the
/// MESSAGE-INTEGRITY attribute.  With the exception of the FINGERPRINT
/// attribute, which appears after MESSAGE-INTEGRITY, agents MUST ignore
/// all other attributes that follow MESSAGE-INTEGRITY.
/// </summary>
#pragma clang diagnostic ignored "-Wshorten-64-to-32"
#pragma clang diagnostic ignored "-Wint-to-pointer-cast"

@interface FMIceLinkSTUNMessageIntegrityAttribute : FMIceLinkSTUNAttribute 

/// <summary>
/// Initializes a new instance of the <see cref="FMIceLinkSTUNMessageIntegrityAttribute" /> class.
/// </summary>
/// <param name="valueBytes">The attribute value as a byte array.</param>
/// <param name="messageBytes">The message bytes thus far.</param>
+ (FMIceLinkSTUNMessageIntegrityAttribute*) fromValueBytesWithValueBytes:(NSMutableData*)valueBytes messageBytes:(NSMutableData*)messageBytes;
/// <summary>
/// Initializes a new instance of the <see cref="FMIceLinkSTUNMessageIntegrityAttribute" /> class.
/// </summary>
/// <param name="valueBytes">The attribute value as a byte array.</param>
/// <param name="messageBytes">The message bytes thus far.</param>
+ (FMIceLinkSTUNMessageIntegrityAttribute*) fromValueBytes:(NSMutableData*)valueBytes messageBytes:(NSMutableData*)messageBytes;
- (NSMutableData*) getBytesWithMessageBytes:(NSMutableData*)messageBytes;
- (NSMutableData*) getValueBytes;
/// <summary>
/// Initializes a new instance of the <see cref="FMIceLinkSTUNMessageIntegrityAttribute" /> class.
/// </summary>
/// <param name="keyBytes">The key as a byte array.</param>
- (id) initWithKeyBytes:(NSMutableData*)keyBytes;
/// <summary>
/// After creating a message-integrity attribute using the byte array representation,
/// this method determines whether the supplied key is valid.
/// </summary>
/// <param name="keyBytes">The key as a byte array.</param>
/// <returns>
/// <c>true</c> if the key is valid; otherwise, <c>false</c>.
/// </returns>
- (bool) isValidWithKeyBytes:(NSMutableData*)keyBytes;
/// <summary>
/// Initializes a new instance of the <see cref="FMIceLinkSTUNMessageIntegrityAttribute" /> class.
/// </summary>
/// <param name="keyBytes">The key as a byte array.</param>
+ (FMIceLinkSTUNMessageIntegrityAttribute*) stunMessageIntegrityAttributeWithKeyBytes:(NSMutableData*)keyBytes;
/// <summary>
/// Returns a string that represents this instance.
/// </summary>
/// <returns>
/// A string that represents this instance.
/// </returns>
- (NSString*) toString;
/// <summary>
/// Returns a string that represents this instance.
/// </summary>
/// <returns>
/// A string that represents this instance.
/// </returns>
- (NSString*) description;

@end


@class NSStringFMExtensions;
@class NSMutableDataFMExtensions;

/// <summary>
/// The USERNAME attribute is used for message integrity.  It identifies
/// the username and password combination used in the message-integrity
/// check.
/// </summary>
#pragma clang diagnostic ignored "-Wshorten-64-to-32"
#pragma clang diagnostic ignored "-Wint-to-pointer-cast"

@interface FMIceLinkSTUNUsernameAttribute : FMIceLinkSTUNAttribute 

/// <summary>
/// Initializes a new instance of the <see cref="FMIceLinkSTUNUsernameAttribute" /> class.
/// </summary>
/// <param name="valueBytes">The attribute value as a byte array.</param>
+ (FMIceLinkSTUNUsernameAttribute*) fromValueBytesWithValueBytes:(NSMutableData*)valueBytes;
/// <summary>
/// Initializes a new instance of the <see cref="FMIceLinkSTUNUsernameAttribute" /> class.
/// </summary>
/// <param name="valueBytes">The attribute value as a byte array.</param>
+ (FMIceLinkSTUNUsernameAttribute*) fromValueBytes:(NSMutableData*)valueBytes;
- (NSMutableData*) getValueBytes;
/// <summary>
/// Initializes a new instance of the <see cref="FMIceLinkSTUNUsernameAttribute" /> class.
/// </summary>
/// <param name="value">The username value.</param>
- (id) initWithValue:(NSString*)value;
/// <summary>
/// Sets the username value.
/// </summary>
- (void) setValue:(NSString*)value;
/// <summary>
/// Initializes a new instance of the <see cref="FMIceLinkSTUNUsernameAttribute" /> class.
/// </summary>
/// <param name="value">The username value.</param>
+ (FMIceLinkSTUNUsernameAttribute*) stunUsernameAttributeWithValue:(NSString*)value;
/// <summary>
/// Returns a string that represents this instance.
/// </summary>
/// <returns>
/// A string that represents this instance.
/// </returns>
- (NSString*) toString;
/// <summary>
/// Returns a string that represents this instance.
/// </summary>
/// <returns>
/// A string that represents this instance.
/// </returns>
- (NSString*) description;
/// <summary>
/// Gets the username value.
/// </summary>
- (NSString*) value;

@end


@class NSStringFMExtensions;
@class NSMutableDataFMExtensions;

/// <summary>
/// The XOR-MAPPED-ADDRESS attribute is identical to the MAPPED-ADDRESS
/// attribute, except that the reflexive transport address is obfuscated
/// through the XOR function.
/// </summary>
#pragma clang diagnostic ignored "-Wshorten-64-to-32"
#pragma clang diagnostic ignored "-Wint-to-pointer-cast"

@interface FMIceLinkSTUNXorMappedAddressAttribute : FMIceLinkSTUNAttribute 

/// <summary>
/// Initializes a new instance of the <see cref="FMIceLinkSTUNXorMappedAddressAttribute" /> class.
/// </summary>
/// <param name="valueBytes">The attribute value as a byte array.</param>
/// <param name="transactionId">The transaction ID.</param>
+ (FMIceLinkSTUNXorMappedAddressAttribute*) fromValueBytesWithValueBytes:(NSMutableData*)valueBytes transactionId:(NSMutableData*)transactionId;
/// <summary>
/// Initializes a new instance of the <see cref="FMIceLinkSTUNXorMappedAddressAttribute" /> class.
/// </summary>
/// <param name="valueBytes">The attribute value as a byte array.</param>
/// <param name="transactionId">The transaction ID.</param>
+ (FMIceLinkSTUNXorMappedAddressAttribute*) fromValueBytes:(NSMutableData*)valueBytes transactionId:(NSMutableData*)transactionId;
- (NSMutableData*) getValueBytes;
/// <summary>
/// Initializes a new instance of the <see cref="FMIceLinkSTUNXorMappedAddressAttribute" /> class.
/// </summary>
/// <param name="ipAddress">The IP address.</param>
/// <param name="port">The port.</param>
/// <param name="transactionId">The transaction ID.</param>
- (id) initWithIPAddress:(NSString*)ipAddress port:(int)port transactionId:(NSMutableData*)transactionId;
/// <summary>
/// Gets the IP address.
/// </summary>
- (NSString*) ipAddress;
/// <summary>
/// Gets the port.
/// </summary>
- (int) port;
/// <summary>
/// Sets the IP address.
/// </summary>
- (void) setIPAddress:(NSString*)value;
/// <summary>
/// Sets the port.
/// </summary>
- (void) setPort:(int)value;
/// <summary>
/// Initializes a new instance of the <see cref="FMIceLinkSTUNXorMappedAddressAttribute" /> class.
/// </summary>
/// <param name="ipAddress">The IP address.</param>
/// <param name="port">The port.</param>
/// <param name="transactionId">The transaction ID.</param>
+ (FMIceLinkSTUNXorMappedAddressAttribute*) stunXorMappedAddressAttributeWithIPAddress:(NSString*)ipAddress port:(int)port transactionId:(NSMutableData*)transactionId;
/// <summary>
/// Returns a string that represents this instance.
/// </summary>
/// <returns>
/// A string that represents this instance.
/// </returns>
- (NSString*) toString;
/// <summary>
/// Returns a string that represents this instance.
/// </summary>
/// <returns>
/// A string that represents this instance.
/// </returns>
- (NSString*) description;
/// <summary>
/// Gets the transaction ID.
/// </summary>
- (NSMutableData*) transactionId;

@end


@class NSStringFMExtensions;
@class FMIceLinkICEUdpPeerReflexiveCandidate;
@class FMIceLinkICEUdpRelayedCandidate;
@class FMIceLinkICEUdpServerReflexiveCandidate;
@class FMUdpSocket;
@class FMIceLinkVirtualUdpSocket;
@class FMIceLinkTransportAddress;

#pragma clang diagnostic ignored "-Wshorten-64-to-32"
#pragma clang diagnostic ignored "-Wint-to-pointer-cast"

@interface FMIceLinkICEUdpHostCandidate : FMIceLinkICEUdpCandidate 

- (long long) adapterSpeed;
- (void) close;
- (FMIceLinkTransportAddress*) getServerAddress;
+ (FMIceLinkICEUdpHostCandidate*) iceUdpHostCandidateWithIPAddress:(NSString*)ipAddress port:(int)port componentId:(int)componentId sdpMediaType:(NSString*)sdpMediaType mediaStreamIndex:(int)mediaStreamIndex;
+ (FMIceLinkICEUdpHostCandidate*) iceUdpHostCandidateWithSocket:(FMUdpSocket*)socket virtualSocket:(FMIceLinkVirtualUdpSocket*)virtualSocket componentId:(int)componentId sdpMediaType:(NSString*)sdpMediaType mediaStreamIndex:(int)mediaStreamIndex adapterSpeed:(long long)adapterSpeed mask:(NSString*)mask protocol:(FMIceLinkStreamProtocol)protocol;
- (id) initWithIPAddress:(NSString*)ipAddress port:(int)port componentId:(int)componentId sdpMediaType:(NSString*)sdpMediaType mediaStreamIndex:(int)mediaStreamIndex;
- (id) initWithSocket:(FMUdpSocket*)socket virtualSocket:(FMIceLinkVirtualUdpSocket*)virtualSocket componentId:(int)componentId sdpMediaType:(NSString*)sdpMediaType mediaStreamIndex:(int)mediaStreamIndex adapterSpeed:(long long)adapterSpeed mask:(NSString*)mask protocol:(FMIceLinkStreamProtocol)protocol;
- (int) localPreference;
- (NSString*) mask;
- (FMIceLinkICEUdpPeerReflexiveCandidate*) peerReflexiveCandidate;
- (FMIceLinkStreamProtocol) protocol;
- (FMIceLinkICEUdpRelayedCandidate*) relayedCandidate;
- (FMIceLinkICEUdpServerReflexiveCandidate*) serverReflexiveCandidate;
- (void) setAdapterSpeed:(long long)value;
- (void) setLocalPreference:(int)value;
- (void) setMask:(NSString*)value;
- (void) setPeerReflexiveCandidate:(FMIceLinkICEUdpPeerReflexiveCandidate*)value;
- (void) setRelayedCandidate:(FMIceLinkICEUdpRelayedCandidate*)value;
- (void) setServerReflexiveCandidate:(FMIceLinkICEUdpServerReflexiveCandidate*)value;
- (FMUdpSocket*) socket;
- (FMIceLinkVirtualUdpSocket*) virtualSocket;

@end


@class NSStringFMExtensions;

/// <summary>
/// Exception raised when the type of message received
/// in response to a request is unexpected.
/// </summary>
#pragma clang diagnostic ignored "-Wshorten-64-to-32"
#pragma clang diagnostic ignored "-Wint-to-pointer-cast"

@interface FMIceLinkSTUNInvalidResponseTypeException : FMIceLinkSTUNException 

/// <summary>
/// Initializes a new instance of the <see cref="FMIceLinkSTUNInvalidResponseTypeException" /> class.
/// </summary>
- (id) init;
/// <summary>
/// Initializes a new instance of the <see cref="FMIceLinkSTUNInvalidResponseTypeException" /> class.
/// </summary>
/// <param name="message">The message.</param>
- (id) initWithMessage:(NSString*)message;
/// <summary>
/// Initializes a new instance of the <see cref="FMIceLinkSTUNInvalidResponseTypeException" /> class.
/// </summary>
+ (FMIceLinkSTUNInvalidResponseTypeException*) stunInvalidResponseTypeException;
/// <summary>
/// Initializes a new instance of the <see cref="FMIceLinkSTUNInvalidResponseTypeException" /> class.
/// </summary>
/// <param name="message">The message.</param>
+ (FMIceLinkSTUNInvalidResponseTypeException*) stunInvalidResponseTypeExceptionWithMessage:(NSString*)message;

@end


@class NSStringFMExtensions;
@class NSMutableDataFMExtensions;

/// <summary>
/// The MAPPED-ADDRESS attribute indicates a reflexive transport address
/// of the client.  It consists of an 8-bit address family and a 16-bit
/// port, followed by a fixed-length value representing the IP address.
/// If the address family is IPv4, the address MUST be 32 bits.  If the
/// address family is IPv6, the address MUST be 128 bits.  All fields
/// must be in network byte order.
/// </summary>
#pragma clang diagnostic ignored "-Wshorten-64-to-32"
#pragma clang diagnostic ignored "-Wint-to-pointer-cast"

@interface FMIceLinkSTUNMappedAddressAttribute : FMIceLinkSTUNAttribute 

/// <summary>
/// Initializes a new instance of the <see cref="FMIceLinkSTUNMappedAddressAttribute" /> class.
/// </summary>
/// <param name="valueBytes">The attribute value as a byte array.</param>
+ (FMIceLinkSTUNMappedAddressAttribute*) fromValueBytesWithValueBytes:(NSMutableData*)valueBytes;
/// <summary>
/// Initializes a new instance of the <see cref="FMIceLinkSTUNMappedAddressAttribute" /> class.
/// </summary>
/// <param name="valueBytes">The attribute value as a byte array.</param>
+ (FMIceLinkSTUNMappedAddressAttribute*) fromValueBytes:(NSMutableData*)valueBytes;
- (NSMutableData*) getValueBytes;
/// <summary>
/// Initializes a new instance of the <see cref="FMIceLinkSTUNMappedAddressAttribute" /> class.
/// </summary>
/// <param name="ipAddress">The IP address.</param>
/// <param name="port">The port.</param>
- (id) initWithIPAddress:(NSString*)ipAddress port:(int)port;
/// <summary>
/// Gets the IP address.
/// </summary>
- (NSString*) ipAddress;
/// <summary>
/// Gets the port.
/// </summary>
- (int) port;
/// <summary>
/// Sets the IP address.
/// </summary>
- (void) setIPAddress:(NSString*)value;
/// <summary>
/// Sets the port.
/// </summary>
- (void) setPort:(int)value;
/// <summary>
/// Initializes a new instance of the <see cref="FMIceLinkSTUNMappedAddressAttribute" /> class.
/// </summary>
/// <param name="ipAddress">The IP address.</param>
/// <param name="port">The port.</param>
+ (FMIceLinkSTUNMappedAddressAttribute*) stunMappedAddressAttributeWithIPAddress:(NSString*)ipAddress port:(int)port;
/// <summary>
/// Returns a string that represents this instance.
/// </summary>
/// <returns>
/// A string that represents this instance.
/// </returns>
- (NSString*) toString;
/// <summary>
/// Returns a string that represents this instance.
/// </summary>
/// <returns>
/// A string that represents this instance.
/// </returns>
- (NSString*) description;

@end


@class FMIceLinkICECandidate;
@class NSStringFMExtensions;
@class NSMutableArrayFMExtensions;
@class FMIceLinkCertificate;
@class FMCallback;
@class FMIceLinkICEMediaFormat;
@class FMCallbackState;
@class FMIceLinkICEComponent;
@class FMIceLinkSDPFingerprintAttribute;
@class FMIceLinkSDPMessage;
@class FMIceLinkSDPMediaDescription;
@class FMIceLinkRTPPacket;
@class FMIceLinkTransportAddress;
@class FMIceLinkSendSCTPArgs;

#pragma clang diagnostic ignored "-Wshorten-64-to-32"
#pragma clang diagnostic ignored "-Wint-to-pointer-cast"

@interface FMIceLinkICEMediaStream : FMDynamic 

- (void) addMediaFormatWithFormat:(FMIceLinkICEMediaFormat*)format;
- (void) addMediaFormat:(FMIceLinkICEMediaFormat*)format;
- (long long) bytesReceivedRTCP;
- (long long) bytesReceivedRTP;
- (long long) bytesSentRTCP;
- (long long) bytesSentRTP;
- (void) closeWithReason:(NSString*)reason peerClosed:(bool)peerClosed callbackState:(FMCallbackState*)callbackState;
- (NSString*) cname;
- (bool) completed;
- (NSMutableArray*) components;
- (NSMutableArray*) cryptoAttributes;
- (int) deadStreamTimeout;
- (FMIceLinkDirection) direction;
- (bool) disableAutomaticReports;
- (bool) disabled;
- (bool) disableKeepAliveThread;
- (void) discoverCandidatesWithLocalAddresses:(NSMutableArray*)localAddresses turnUsernames:(NSMutableArray*)turnUsernames turnRealms:(NSMutableArray*)turnRealms turnPasswords:(NSMutableArray*)turnPasswords;
- (FMIceLinkCertificate*) dtlsCertificate;
- (NSMutableArray*) dtlsCipherSuites;
- (FMIceLinkProtocolVersion) dtlsClientVersion;
- (NSString*) dtlsLocalFingerprint;
- (NSString*) dtlsLocalFingerprintAlgorithm;
- (NSString*) dtlsRemoteFingerprint;
- (NSString*) dtlsRemoteFingerprintAlgorithm;
- (FMIceLinkProtocolVersion) dtlsServerMaxVersion;
- (FMIceLinkProtocolVersion) dtlsServerMinVersion;
- (NSMutableArray*) encryptionModes;
- (FMIceLinkEncryptionRole) encryptionRole;
- (FMIceLinkICEComponent*) fetchComponentByIdWithId:(int)idValue;
- (FMIceLinkICEComponent*) fetchComponentById:(int)idValue;
- (FMIceLinkSDPFingerprintAttribute*) fingerprintAttribute;
+ (NSMutableArray*) fromSDPMediaDescriptionsWithMediaDescriptions:(NSMutableArray*)mediaDescriptions message:(FMIceLinkSDPMessage*)message serverAddresses:(NSMutableArray*)serverAddresses;
+ (NSMutableArray*) fromSDPMediaDescriptions:(NSMutableArray*)mediaDescriptions message:(FMIceLinkSDPMessage*)message serverAddresses:(NSMutableArray*)serverAddresses;
+ (FMIceLinkICEMediaStream*) fromSDPMediaDescriptionWithMediaDescription:(FMIceLinkSDPMediaDescription*)mediaDescription message:(FMIceLinkSDPMessage*)message serverAddresses:(NSMutableArray*)serverAddresses index:(int)index sendNackBufferLength:(int)sendNackBufferLength;
+ (FMIceLinkICEMediaStream*) fromSDPMediaDescription:(FMIceLinkSDPMediaDescription*)mediaDescription message:(FMIceLinkSDPMessage*)message serverAddresses:(NSMutableArray*)serverAddresses index:(int)index sendNackBufferLength:(int)sendNackBufferLength;
+ (FMIceLinkICEMediaStream*) iceMediaStreamWithServerAddresses:(NSMutableArray*)serverAddresses mediaFormats:(NSMutableArray*)mediaFormats sdpMediaType:(NSString*)sdpMediaType protocol:(FMIceLinkStreamProtocol)protocol rtpMode:(FMIceLinkRtpMode)rtpMode direction:(FMIceLinkDirection)direction encryptionModes:(NSMutableArray*)encryptionModes encryptionRole:(FMIceLinkEncryptionRole)encryptionRole offerDtls:(bool)offerDtls multiplexRtpRtcp:(bool)multiplexRtpRtcp sctpProtocol:(NSString*)sctpProtocol sctpChannelCount:(int)sctpChannelCount sctpPort:(int)sctpPort sctpMaxMessageSize:(long long)sctpMaxMessageSize synchronizationSource:(long long)synchronizationSource index:(int)index sendNackBufferLength:(int)sendNackBufferLength;
- (int) inboundPacketsLostRTP;
- (int) index;
- (void) initializeEncryptionWithUseDtls:(bool)useDtls;
- (void) initializeWithRemoteMediaStream:(FMIceLinkICEMediaStream*)remoteMediaStream;
- (id) initWithServerAddresses:(NSMutableArray*)serverAddresses mediaFormats:(NSMutableArray*)mediaFormats sdpMediaType:(NSString*)sdpMediaType protocol:(FMIceLinkStreamProtocol)protocol rtpMode:(FMIceLinkRtpMode)rtpMode direction:(FMIceLinkDirection)direction encryptionModes:(NSMutableArray*)encryptionModes encryptionRole:(FMIceLinkEncryptionRole)encryptionRole offerDtls:(bool)offerDtls multiplexRtpRtcp:(bool)multiplexRtpRtcp sctpProtocol:(NSString*)sctpProtocol sctpChannelCount:(int)sctpChannelCount sctpPort:(int)sctpPort sctpMaxMessageSize:(long long)sctpMaxMessageSize synchronizationSource:(long long)synchronizationSource index:(int)index sendNackBufferLength:(int)sendNackBufferLength;
- (void) keepAlive;
- (int) keepAliveInterval;
- (NSMutableArray*) mediaFormats;
- (bool) multiplexRtpRtcp;
- (bool) offerDtls;
- (FMCallback*) onDeadStream;
- (FMCallback*) onDTLSFinished;
- (FMCallback*) onDTLSRemoteCertificate;
- (FMCallback*) onLocalCandidate;
- (FMCallback*) onPeerClose;
- (FMCallback*) onRelayFailure;
- (FMCallback*) onRTCPPackets;
- (FMCallback*) onRTPPacket;
- (FMCallback*) onSCTPFinished;
- (FMCallback*) onSCTPMessage;
- (FMCallback*) onSendRTCPPackets;
- (FMCallback*) onSTUNRequest;
- (int) outboundPacketsLostRTP;
- (long long) packetsReceivedRTCP;
- (long long) packetsReceivedRTP;
- (long long) packetsSentRTCP;
- (long long) packetsSentRTP;
- (NSString*) password;
- (NSString*) peerCname;
- (NSString*) peerPassword;
- (NSString*) peerUsername;
- (void) processDeadComponent;
- (void) processRelayFailure;
- (void) processRTPPacketWithPacket:(FMIceLinkRTPPacket*)packet localCandidate:(FMIceLinkICECandidate*)localCandidate remoteAddress:(FMIceLinkTransportAddress*)remoteAddress;
- (void) processRTPPacket:(FMIceLinkRTPPacket*)packet localCandidate:(FMIceLinkICECandidate*)localCandidate remoteAddress:(FMIceLinkTransportAddress*)remoteAddress;
- (FMIceLinkStreamProtocol) protocol;
- (NSMutableArray*) publicIPAddresses;
- (void) removeEncryptionModeWithEncryptionMode:(FMIceLinkEncryptionMode)encryptionMode;
- (void) removeEncryptionMode:(FMIceLinkEncryptionMode)encryptionMode;
- (bool) removeMediaFormatWithFormat:(FMIceLinkICEMediaFormat*)format;
- (bool) removeMediaFormat:(FMIceLinkICEMediaFormat*)format;
- (FMIceLinkICEAgentRole) role;
- (double) roundTripTime;
- (FMIceLinkRtpMode) rtpMode;
- (int) sctpChannelCount;
- (long long) sctpMaxMessageSize;
- (int) sctpPort;
- (NSString*) sctpProtocol;
- (NSString*) sdpMediaType;
- (int) sendNackBufferLength;
- (int) sendRTCPWithPackets:(NSMutableArray*)packets;
- (int) sendRTPWithPacket:(FMIceLinkRTPPacket*)packet;
- (void) sendSCTPWithSendArgs:(FMIceLinkSendSCTPArgs*)sendArgs;
- (NSMutableArray*) serverAddresses;
- (void) setBytesSentRTCP:(long long)value;
- (void) setBytesSentRTP:(long long)value;
- (void) setCname:(NSString*)value;
- (void) setCompleted;
- (void) setComponentCallbacks;
- (void) setComponentCallbacksWithComponents:(NSMutableArray*)components;
- (void) setDeadStreamTimeout:(int)value;
- (void) setDisableAutomaticReports:(bool)value;
- (void) setDisabled:(bool)value;
- (void) setDisableKeepAliveThread:(bool)value;
- (void) setDtlsCertificate:(FMIceLinkCertificate*)value;
- (void) setDtlsCipherSuites:(NSMutableArray*)value;
- (void) setDtlsClientVersion:(FMIceLinkProtocolVersion)value;
- (void) setDtlsServerMaxVersion:(FMIceLinkProtocolVersion)value;
- (void) setDtlsServerMinVersion:(FMIceLinkProtocolVersion)value;
- (void) setInboundPacketsLostRTP:(int)value;
- (void) setKeepAliveInterval:(int)value;
- (void) setOnDeadStream:(FMCallback*)value;
- (void) setOnDeadStreamBlock:(void (^) (FMIceLinkICEMediaStream*))valueBlock;
- (void) setOnDTLSFinished:(FMCallback*)value;
- (void) setOnDTLSRemoteCertificate:(FMCallback*)value;
- (void) setOnLocalCandidate:(FMCallback*)value;
- (void) setOnLocalCandidateBlock:(void (^) (FMIceLinkICECandidate*))valueBlock;
- (void) setOnPeerClose:(FMCallback*)value;
- (void) setOnPeerCloseBlock:(void (^) (NSString*))valueBlock;
- (void) setOnRelayFailure:(FMCallback*)value;
- (void) setOnRelayFailureBlock:(void (^) (FMIceLinkICEMediaStream*))valueBlock;
- (void) setOnRTCPPackets:(FMCallback*)value;
- (void) setOnRTPPacket:(FMCallback*)value;
- (void) setOnSCTPFinished:(FMCallback*)value;
- (void) setOnSCTPMessage:(FMCallback*)value;
- (void) setOnSendRTCPPackets:(FMCallback*)value;
- (void) setOnSTUNRequest:(FMCallback*)value;
- (void) setOutboundPacketsLostRTP:(int)value;
- (void) setPacketsSentRTCP:(long long)value;
- (void) setPacketsSentRTP:(long long)value;
- (void) setPassword:(NSString*)value;
- (void) setPeerCname:(NSString*)value;
- (void) setPeerPassword:(NSString*)value;
- (void) setPeerUsername:(NSString*)value;
- (void) setPublicIPAddresses:(NSMutableArray*)value;
- (void) setRemoteFingerprintAttributeWithFingerprintAttribute:(FMIceLinkSDPFingerprintAttribute*)fingerprintAttribute;
- (void) setRemoteFingerprintAttribute:(FMIceLinkSDPFingerprintAttribute*)fingerprintAttribute;
- (void) setRole:(FMIceLinkICEAgentRole)value;
- (void) setRoundTripTime:(double)value;
- (void) setSendNackBufferLength:(int)value;
- (void) setSuppressPrivateCandidates:(bool)value;
- (void) setSuppressPublicCandidates:(bool)value;
- (void) setSuppressRelayCandidates:(bool)value;
- (void) setSynchronizationSource:(long long)value;
- (void) setTieBreaker:(long long)value;
- (void) setUsername:(NSString*)value;
- (void) setVirtualAdapters:(NSMutableArray*)value;
+ (int) socketClosed;
- (bool) suppressPrivateCandidates;
- (bool) suppressPublicCandidates;
- (bool) suppressRelayCandidates;
- (long long) synchronizationSource;
- (long long) tieBreaker;
- (FMIceLinkSDPMediaDescription*) toSDPMediaDescription;
+ (NSMutableArray*) toSDPMediaDescriptionsWithMediaStreams:(NSMutableArray*)mediaStreams;
+ (FMIceLinkSDPMediaDescription*) toSDPMediaDescriptionWithMediaStream:(FMIceLinkICEMediaStream*)mediaStream;
- (NSString*) toString;
- (NSString*) description;
- (void) updateComponentProps;
- (void) updateComponentPropsWithComponents:(NSMutableArray*)components;
- (void) updateEncryptionWithIsServer:(bool)isServer;
- (bool) useDtls;
- (NSString*) username;
- (NSMutableArray*) virtualAdapters;

@end


@class FMIceLinkTransportAddress;
@class NSStringFMExtensions;
@class FMIceLinkICEUdpCandidate;

#pragma clang diagnostic ignored "-Wshorten-64-to-32"
#pragma clang diagnostic ignored "-Wint-to-pointer-cast"

@interface FMIceLinkICEUdpPeerReflexiveCandidate : FMIceLinkICEUdpCandidate 

- (FMIceLinkTransportAddress*) getServerAddress;
+ (FMIceLinkICEUdpPeerReflexiveCandidate*) iceUdpPeerReflexiveCandidateWithIPAddress:(NSString*)ipAddress port:(int)port componentId:(int)componentId sdpMediaType:(NSString*)sdpMediaType mediaStreamIndex:(int)mediaStreamIndex baseCandidate:(FMIceLinkICEUdpCandidate*)baseCandidate;
- (id) initWithIPAddress:(NSString*)ipAddress port:(int)port componentId:(int)componentId sdpMediaType:(NSString*)sdpMediaType mediaStreamIndex:(int)mediaStreamIndex baseCandidate:(FMIceLinkICEUdpCandidate*)baseCandidate;

@end


@class NSStringFMExtensions;
@class NSDateFMExtensions;
@class FMIceLinkTransportAddress;
@class FMIceLinkICECreatePermissionArgs;
@class FMCallbackState;
@class FMIceLinkICEUdpCandidate;
@class FMIceLinkICERefreshArgs;

#pragma clang diagnostic ignored "-Wshorten-64-to-32"
#pragma clang diagnostic ignored "-Wint-to-pointer-cast"

@interface FMIceLinkICEUdpRelayedCandidate : FMIceLinkICEUdpCandidate 

- (void) createPermissionWithCreatePermissionArgs:(FMIceLinkICECreatePermissionArgs*)createPermissionArgs;
- (void) createPermissionWithArgs:(FMIceLinkICECreatePermissionArgs*)createPermissionArgs;
- (void) deallocateWithCallbackState:(FMCallbackState*)callbackState;
- (FMIceLinkTransportAddress*) getServerAddress;
+ (FMIceLinkICEUdpRelayedCandidate*) iceUdpRelayedCandidateWithIPAddress:(NSString*)ipAddress port:(int)port componentId:(int)componentId sdpMediaType:(NSString*)sdpMediaType mediaStreamIndex:(int)mediaStreamIndex baseCandidate:(FMIceLinkICEUdpCandidate*)baseCandidate mappedAddress:(FMIceLinkTransportAddress*)mappedAddress serverAddress:(FMIceLinkTransportAddress*)serverAddress lifetime:(int)lifetime turnUsername:(NSString*)turnUsername turnRealm:(NSString*)turnRealm turnPassword:(NSString*)turnPassword nonce:(NSString*)nonce;
- (id) initWithIPAddress:(NSString*)ipAddress port:(int)port componentId:(int)componentId sdpMediaType:(NSString*)sdpMediaType mediaStreamIndex:(int)mediaStreamIndex baseCandidate:(FMIceLinkICEUdpCandidate*)baseCandidate mappedAddress:(FMIceLinkTransportAddress*)mappedAddress serverAddress:(FMIceLinkTransportAddress*)serverAddress lifetime:(int)lifetime turnUsername:(NSString*)turnUsername turnRealm:(NSString*)turnRealm turnPassword:(NSString*)turnPassword nonce:(NSString*)nonce;
- (FMIceLinkTransportAddress*) mappedAddress;
- (bool) needsRefresh;
- (void) refreshWithRefreshArgs:(FMIceLinkICERefreshArgs*)refreshArgs;
- (void) refreshWithArgs:(FMIceLinkICERefreshArgs*)refreshArgs;
- (FMIceLinkTransportAddress*) serverAddress;
- (NSString*) turnPassword;
- (NSString*) turnRealm;
- (NSString*) turnUsername;

@end


@class FMIceLinkTransportAddress;
@class NSStringFMExtensions;
@class FMIceLinkICEUdpCandidate;

#pragma clang diagnostic ignored "-Wshorten-64-to-32"
#pragma clang diagnostic ignored "-Wint-to-pointer-cast"

@interface FMIceLinkICEUdpServerReflexiveCandidate : FMIceLinkICEUdpCandidate 

- (FMIceLinkTransportAddress*) getServerAddress;
+ (FMIceLinkICEUdpServerReflexiveCandidate*) iceUdpServerReflexiveCandidateWithIPAddress:(NSString*)ipAddress port:(int)port componentId:(int)componentId sdpMediaType:(NSString*)sdpMediaType mediaStreamIndex:(int)mediaStreamIndex baseCandidate:(FMIceLinkICEUdpCandidate*)baseCandidate serverAddress:(FMIceLinkTransportAddress*)serverAddress;
- (id) initWithIPAddress:(NSString*)ipAddress port:(int)port componentId:(int)componentId sdpMediaType:(NSString*)sdpMediaType mediaStreamIndex:(int)mediaStreamIndex baseCandidate:(FMIceLinkICEUdpCandidate*)baseCandidate serverAddress:(FMIceLinkTransportAddress*)serverAddress;
- (FMIceLinkTransportAddress*) serverAddress;

@end


@class NSMutableDataFMExtensions;

#pragma clang diagnostic ignored "-Wshorten-64-to-32"
#pragma clang diagnostic ignored "-Wint-to-pointer-cast"

@interface FMIceLinkSTUNAttributeCreationArgs : NSObject 

- (id) initWithValueBytes:(NSMutableData*)valueBytes transactionId:(NSMutableData*)transactionId messageBytes:(NSMutableData*)messageBytes;
- (NSMutableData*) messageBytes;
+ (FMIceLinkSTUNAttributeCreationArgs*) stunAttributeCreationArgsWithValueBytes:(NSMutableData*)valueBytes transactionId:(NSMutableData*)transactionId messageBytes:(NSMutableData*)messageBytes;
- (NSMutableData*) transactionId;
- (NSMutableData*) valueBytes;

@end


@class FMCallback;
@class NSMutableDataFMExtensions;

#pragma clang diagnostic ignored "-Wshorten-64-to-32"
#pragma clang diagnostic ignored "-Wint-to-pointer-cast"

@interface FMIceLinkSTUNAttributeRegistration : NSObject 

- (FMCallback*) creationDelegate;
- (id) initWithTypeBytes:(NSMutableData*)typeBytes creationDelegate:(FMCallback*)creationDelegate;
- (void) setCreationDelegate:(FMCallback*)value;
- (void) setTypeBytes:(NSMutableData*)value;
+ (FMIceLinkSTUNAttributeRegistration*) stunAttributeRegistrationWithTypeBytes:(NSMutableData*)typeBytes creationDelegate:(FMCallback*)creationDelegate;
- (NSMutableData*) typeBytes;

@end


@class NSMutableDataFMExtensions;

#pragma clang diagnostic ignored "-Wshorten-64-to-32"
#pragma clang diagnostic ignored "-Wint-to-pointer-cast"

@interface FMIceLinkSTUNMessageCreationArgs : NSObject 

- (id) initWithMessageType:(FMIceLinkSTUNMessageType)messageType transactionId:(NSMutableData*)transactionId;
- (FMIceLinkSTUNMessageType) messageType;
+ (FMIceLinkSTUNMessageCreationArgs*) stunMessageCreationArgsWithMessageType:(FMIceLinkSTUNMessageType)messageType transactionId:(NSMutableData*)transactionId;
- (NSMutableData*) transactionId;

@end


@class FMCallback;

#pragma clang diagnostic ignored "-Wshorten-64-to-32"
#pragma clang diagnostic ignored "-Wint-to-pointer-cast"

@interface FMIceLinkSTUNMessageRegistration : NSObject 

- (FMCallback*) creationDelegate;
- (id) initWithMethod:(uint8_t)method creationDelegate:(FMCallback*)creationDelegate;
- (uint8_t) method;
- (void) setCreationDelegate:(FMCallback*)value;
- (void) setMethod:(uint8_t)value;
+ (FMIceLinkSTUNMessageRegistration*) stunMessageRegistrationWithMethod:(uint8_t)method creationDelegate:(FMCallback*)creationDelegate;

@end


@class NSMutableDataFMExtensions;
@class NSStringFMExtensions;

/// <summary>
/// The REQUESTED-ADDRESS-FAMILY attribute is used by clients to request
/// the allocation of a specific address type from a server.
/// </summary>
#pragma clang diagnostic ignored "-Wshorten-64-to-32"
#pragma clang diagnostic ignored "-Wint-to-pointer-cast"

@interface FMIceLinkSTUNRequestedAddressFamilyAttribute : FMIceLinkSTUNAttribute 

/// <summary>
/// Gets the address family.
/// </summary>
- (int) addressFamily;
/// <summary>
/// Initializes a new instance of the <see cref="FMIceLinkSTUNRequestedAddressFamilyAttribute" /> class.
/// </summary>
/// <param name="valueBytes">The attribute value as a byte array.</param>
+ (FMIceLinkSTUNRequestedAddressFamilyAttribute*) fromValueBytesWithValueBytes:(NSMutableData*)valueBytes;
/// <summary>
/// Initializes a new instance of the <see cref="FMIceLinkSTUNRequestedAddressFamilyAttribute" /> class.
/// </summary>
/// <param name="valueBytes">The attribute value as a byte array.</param>
+ (FMIceLinkSTUNRequestedAddressFamilyAttribute*) fromValueBytes:(NSMutableData*)valueBytes;
- (NSMutableData*) getValueBytes;
/// <summary>
/// Initializes a new instance of the <see cref="FMIceLinkSTUNRequestedAddressFamilyAttribute" /> class.
/// </summary>
/// <param name="addressFamily">The address family.</param>
- (id) initWithAddressFamily:(int)addressFamily;
/// <summary>
/// Sets the address family.
/// </summary>
- (void) setAddressFamily:(int)value;
/// <summary>
/// Initializes a new instance of the <see cref="FMIceLinkSTUNRequestedAddressFamilyAttribute" /> class.
/// </summary>
/// <param name="addressFamily">The address family.</param>
+ (FMIceLinkSTUNRequestedAddressFamilyAttribute*) stunRequestedAddressFamilyAttributeWithAddressFamily:(int)addressFamily;
/// <summary>
/// Returns a string that represents this instance.
/// </summary>
/// <returns>
/// A string that represents this instance.
/// </returns>
- (NSString*) toString;
/// <summary>
/// Returns a string that represents this instance.
/// </summary>
/// <returns>
/// A string that represents this instance.
/// </returns>
- (NSString*) description;

@end


@class NSStringFMExtensions;

/// <summary>
/// The credentials in the (non-Allocate)
/// request do not match those used to create the allocation.
/// </summary>
#pragma clang diagnostic ignored "-Wshorten-64-to-32"
#pragma clang diagnostic ignored "-Wint-to-pointer-cast"

@interface FMIceLinkSTUNWrongCredentialsException : FMIceLinkSTUNException 

/// <summary>
/// Initializes a new instance of the <see cref="FMIceLinkSTUNWrongCredentialsException" /> class.
/// </summary>
- (id) init;
/// <summary>
/// Initializes a new instance of the <see cref="FMIceLinkSTUNWrongCredentialsException" /> class.
/// </summary>
/// <param name="message">The message.</param>
- (id) initWithMessage:(NSString*)message;
/// <summary>
/// Initializes a new instance of the <see cref="FMIceLinkSTUNWrongCredentialsException" /> class.
/// </summary>
+ (FMIceLinkSTUNWrongCredentialsException*) stunWrongCredentialsException;
/// <summary>
/// Initializes a new instance of the <see cref="FMIceLinkSTUNWrongCredentialsException" /> class.
/// </summary>
/// <param name="message">The message.</param>
+ (FMIceLinkSTUNWrongCredentialsException*) stunWrongCredentialsExceptionWithMessage:(NSString*)message;

@end


@class NSStringFMExtensions;

/// <summary>
/// The Allocate request asked the
/// server to use a transport protocol between the server and the peer
/// that the server does not support.  NOTE: This does NOT refer to
/// the transport protocol used in the 5-tuple.
/// </summary>
#pragma clang diagnostic ignored "-Wshorten-64-to-32"
#pragma clang diagnostic ignored "-Wint-to-pointer-cast"

@interface FMIceLinkSTUNUnsupportedTransportProtocolException : FMIceLinkSTUNException 

/// <summary>
/// Initializes a new instance of the <see cref="FMIceLinkSTUNUnsupportedTransportProtocolException" /> class.
/// </summary>
- (id) init;
/// <summary>
/// Initializes a new instance of the <see cref="FMIceLinkSTUNUnsupportedTransportProtocolException" /> class.
/// </summary>
/// <param name="message">The message.</param>
- (id) initWithMessage:(NSString*)message;
/// <summary>
/// Initializes a new instance of the <see cref="FMIceLinkSTUNUnsupportedTransportProtocolException" /> class.
/// </summary>
+ (FMIceLinkSTUNUnsupportedTransportProtocolException*) stunUnsupportedTransportProtocolException;
/// <summary>
/// Initializes a new instance of the <see cref="FMIceLinkSTUNUnsupportedTransportProtocolException" /> class.
/// </summary>
/// <param name="message">The message.</param>
+ (FMIceLinkSTUNUnsupportedTransportProtocolException*) stunUnsupportedTransportProtocolExceptionWithMessage:(NSString*)message;

@end


@class NSStringFMExtensions;

/// <summary>
/// No more allocations using this
/// username can be created at the present time.
/// </summary>
#pragma clang diagnostic ignored "-Wshorten-64-to-32"
#pragma clang diagnostic ignored "-Wint-to-pointer-cast"

@interface FMIceLinkSTUNAllocationQuotaReachedException : FMIceLinkSTUNException 

/// <summary>
/// Initializes a new instance of the <see cref="FMIceLinkSTUNAllocationQuotaReachedException" /> class.
/// </summary>
- (id) init;
/// <summary>
/// Initializes a new instance of the <see cref="FMIceLinkSTUNAllocationQuotaReachedException" /> class.
/// </summary>
/// <param name="message">The message.</param>
- (id) initWithMessage:(NSString*)message;
/// <summary>
/// Initializes a new instance of the <see cref="FMIceLinkSTUNAllocationQuotaReachedException" /> class.
/// </summary>
+ (FMIceLinkSTUNAllocationQuotaReachedException*) stunAllocationQuotaReachedException;
/// <summary>
/// Initializes a new instance of the <see cref="FMIceLinkSTUNAllocationQuotaReachedException" /> class.
/// </summary>
/// <param name="message">The message.</param>
+ (FMIceLinkSTUNAllocationQuotaReachedException*) stunAllocationQuotaReachedExceptionWithMessage:(NSString*)message;

@end


@class NSStringFMExtensions;

/// <summary>
/// The server is unable to carry out the
/// request due to some capacity limit being reached.  In an Allocate
/// response, this could be due to the server having no more relayed
/// transport addresses available at that time, having none with the
/// requested properties, or the one that corresponds to the specified
/// reservation token is not available.
/// </summary>
#pragma clang diagnostic ignored "-Wshorten-64-to-32"
#pragma clang diagnostic ignored "-Wint-to-pointer-cast"

@interface FMIceLinkSTUNInsufficientCapacityException : FMIceLinkSTUNException 

/// <summary>
/// Initializes a new instance of the <see cref="FMIceLinkSTUNInsufficientCapacityException" /> class.
/// </summary>
- (id) init;
/// <summary>
/// Initializes a new instance of the <see cref="FMIceLinkSTUNInsufficientCapacityException" /> class.
/// </summary>
/// <param name="message">The message.</param>
- (id) initWithMessage:(NSString*)message;
/// <summary>
/// Initializes a new instance of the <see cref="FMIceLinkSTUNInsufficientCapacityException" /> class.
/// </summary>
+ (FMIceLinkSTUNInsufficientCapacityException*) stunInsufficientCapacityException;
/// <summary>
/// Initializes a new instance of the <see cref="FMIceLinkSTUNInsufficientCapacityException" /> class.
/// </summary>
/// <param name="message">The message.</param>
+ (FMIceLinkSTUNInsufficientCapacityException*) stunInsufficientCapacityExceptionWithMessage:(NSString*)message;

@end


@class NSStringFMExtensions;

/// <summary>
/// A request was received by the server that
/// requires an allocation to be in place, but no allocation exists,
/// or a request was received that requires no allocation, but an
/// allocation exists.
/// </summary>
#pragma clang diagnostic ignored "-Wshorten-64-to-32"
#pragma clang diagnostic ignored "-Wint-to-pointer-cast"

@interface FMIceLinkSTUNAllocationMismatchException : FMIceLinkSTUNException 

/// <summary>
/// Initializes a new instance of the <see cref="FMIceLinkSTUNAllocationMismatchException" /> class.
/// </summary>
- (id) init;
/// <summary>
/// Initializes a new instance of the <see cref="FMIceLinkSTUNAllocationMismatchException" /> class.
/// </summary>
/// <param name="message">The message.</param>
- (id) initWithMessage:(NSString*)message;
/// <summary>
/// Initializes a new instance of the <see cref="FMIceLinkSTUNAllocationMismatchException" /> class.
/// </summary>
+ (FMIceLinkSTUNAllocationMismatchException*) stunAllocationMismatchException;
/// <summary>
/// Initializes a new instance of the <see cref="FMIceLinkSTUNAllocationMismatchException" /> class.
/// </summary>
/// <param name="message">The message.</param>
+ (FMIceLinkSTUNAllocationMismatchException*) stunAllocationMismatchExceptionWithMessage:(NSString*)message;

@end


@class NSStringFMExtensions;

/// <summary>
/// The request was valid but cannot be performed due
/// to administrative or similar restrictions.
/// </summary>
#pragma clang diagnostic ignored "-Wshorten-64-to-32"
#pragma clang diagnostic ignored "-Wint-to-pointer-cast"

@interface FMIceLinkSTUNForbiddenException : FMIceLinkSTUNException 

/// <summary>
/// Initializes a new instance of the <see cref="FMIceLinkSTUNForbiddenException" /> class.
/// </summary>
- (id) init;
/// <summary>
/// Initializes a new instance of the <see cref="FMIceLinkSTUNForbiddenException" /> class.
/// </summary>
/// <param name="message">The message.</param>
- (id) initWithMessage:(NSString*)message;
/// <summary>
/// Initializes a new instance of the <see cref="FMIceLinkSTUNForbiddenException" /> class.
/// </summary>
+ (FMIceLinkSTUNForbiddenException*) stunForbiddenException;
/// <summary>
/// Initializes a new instance of the <see cref="FMIceLinkSTUNForbiddenException" /> class.
/// </summary>
/// <param name="message">The message.</param>
+ (FMIceLinkSTUNForbiddenException*) stunForbiddenExceptionWithMessage:(NSString*)message;

@end


@class NSStringFMExtensions;
@class NSMutableDataFMExtensions;

/// <summary>
/// The XOR-RELAYED-ADDRESS is present in Allocate responses.  It
/// specifies the address and port that the server allocated to the
/// client.
/// </summary>
#pragma clang diagnostic ignored "-Wshorten-64-to-32"
#pragma clang diagnostic ignored "-Wint-to-pointer-cast"

@interface FMIceLinkSTUNXorRelayedAddressAttribute : FMIceLinkSTUNAttribute 

/// <summary>
/// Initializes a new instance of the <see cref="FMIceLinkSTUNXorRelayedAddressAttribute" /> class.
/// </summary>
/// <param name="valueBytes">The attribute value as a byte array.</param>
/// <param name="transactionId">The transaction ID.</param>
+ (FMIceLinkSTUNXorRelayedAddressAttribute*) fromValueBytesWithValueBytes:(NSMutableData*)valueBytes transactionId:(NSMutableData*)transactionId;
/// <summary>
/// Initializes a new instance of the <see cref="FMIceLinkSTUNXorRelayedAddressAttribute" /> class.
/// </summary>
/// <param name="valueBytes">The attribute value as a byte array.</param>
/// <param name="transactionId">The transaction ID.</param>
+ (FMIceLinkSTUNXorRelayedAddressAttribute*) fromValueBytes:(NSMutableData*)valueBytes transactionId:(NSMutableData*)transactionId;
- (NSMutableData*) getValueBytes;
/// <summary>
/// Initializes a new instance of the <see cref="FMIceLinkSTUNXorRelayedAddressAttribute" /> class.
/// </summary>
/// <param name="ipAddress">The IP address.</param>
/// <param name="port">The port.</param>
/// <param name="transactionId">The transaction ID.</param>
- (id) initWithIPAddress:(NSString*)ipAddress port:(int)port transactionId:(NSMutableData*)transactionId;
/// <summary>
/// Gets the IP address.
/// </summary>
- (NSString*) ipAddress;
/// <summary>
/// Gets the port.
/// </summary>
- (int) port;
/// <summary>
/// Sets the IP address.
/// </summary>
- (void) setIPAddress:(NSString*)value;
/// <summary>
/// Sets the port.
/// </summary>
- (void) setPort:(int)value;
/// <summary>
/// Initializes a new instance of the <see cref="FMIceLinkSTUNXorRelayedAddressAttribute" /> class.
/// </summary>
/// <param name="ipAddress">The IP address.</param>
/// <param name="port">The port.</param>
/// <param name="transactionId">The transaction ID.</param>
+ (FMIceLinkSTUNXorRelayedAddressAttribute*) stunXorRelayedAddressAttributeWithIPAddress:(NSString*)ipAddress port:(int)port transactionId:(NSMutableData*)transactionId;
/// <summary>
/// Returns a string that represents this instance.
/// </summary>
/// <returns>
/// A string that represents this instance.
/// </returns>
- (NSString*) toString;
/// <summary>
/// Returns a string that represents this instance.
/// </summary>
/// <returns>
/// A string that represents this instance.
/// </returns>
- (NSString*) description;
/// <summary>
/// Gets the transaction ID.
/// </summary>
- (NSMutableData*) transactionId;

@end


@class NSMutableDataFMExtensions;
@class NSStringFMExtensions;

/// <summary>
/// The RESERVATION-TOKEN attribute contains a token that uniquely
/// identifies a relayed transport address being held in reserve by the
/// server.
/// </summary>
#pragma clang diagnostic ignored "-Wshorten-64-to-32"
#pragma clang diagnostic ignored "-Wint-to-pointer-cast"

@interface FMIceLinkSTUNReservationTokenAttribute : FMIceLinkSTUNAttribute 

/// <summary>
/// Initializes a new instance of the <see cref="FMIceLinkSTUNReservationTokenAttribute" /> class.
/// </summary>
/// <param name="valueBytes">The attribute value as a byte array.</param>
+ (FMIceLinkSTUNReservationTokenAttribute*) fromValueBytesWithValueBytes:(NSMutableData*)valueBytes;
/// <summary>
/// Initializes a new instance of the <see cref="FMIceLinkSTUNReservationTokenAttribute" /> class.
/// </summary>
/// <param name="valueBytes">The attribute value as a byte array.</param>
+ (FMIceLinkSTUNReservationTokenAttribute*) fromValueBytes:(NSMutableData*)valueBytes;
- (NSMutableData*) getValueBytes;
/// <summary>
/// Initializes a new instance of the <see cref="FMIceLinkSTUNReservationTokenAttribute" /> class.
/// </summary>
/// <param name="token">The reservation token.</param>
- (id) initWithToken:(NSMutableData*)token;
/// <summary>
/// Sets the reservation token.
/// </summary>
- (void) setToken:(NSMutableData*)value;
/// <summary>
/// Initializes a new instance of the <see cref="FMIceLinkSTUNReservationTokenAttribute" /> class.
/// </summary>
/// <param name="token">The reservation token.</param>
+ (FMIceLinkSTUNReservationTokenAttribute*) stunReservationTokenAttributeWithToken:(NSMutableData*)token;
/// <summary>
/// Gets the reservation token.
/// </summary>
- (NSMutableData*) token;
/// <summary>
/// Returns a string that represents this instance.
/// </summary>
/// <returns>
/// A string that represents this instance.
/// </returns>
- (NSString*) toString;
/// <summary>
/// Returns a string that represents this instance.
/// </summary>
/// <returns>
/// A string that represents this instance.
/// </returns>
- (NSString*) description;

@end


@class NSMutableDataFMExtensions;
@class NSStringFMExtensions;

/// <summary>
/// This attribute is used by the client to request that the server set
/// the DF (Don't Fragment) bit in the IP header when relaying the
/// application data onward to the peer.
/// </summary>
#pragma clang diagnostic ignored "-Wshorten-64-to-32"
#pragma clang diagnostic ignored "-Wint-to-pointer-cast"

@interface FMIceLinkSTUNDontFragmentAttribute : FMIceLinkSTUNAttribute 

/// <summary>
/// Initializes a new instance of the <see cref="FMIceLinkSTUNDontFragmentAttribute" /> class.
/// </summary>
/// <param name="valueBytes">The attribute value as a byte array.</param>
+ (FMIceLinkSTUNDontFragmentAttribute*) fromValueBytesWithValueBytes:(NSMutableData*)valueBytes;
/// <summary>
/// Initializes a new instance of the <see cref="FMIceLinkSTUNDontFragmentAttribute" /> class.
/// </summary>
/// <param name="valueBytes">The attribute value as a byte array.</param>
+ (FMIceLinkSTUNDontFragmentAttribute*) fromValueBytes:(NSMutableData*)valueBytes;
- (NSMutableData*) getValueBytes;
/// <summary>
/// Initializes a new instance of the <see cref="FMIceLinkSTUNDontFragmentAttribute" /> class.
/// </summary>
- (id) init;
/// <summary>
/// Initializes a new instance of the <see cref="FMIceLinkSTUNDontFragmentAttribute" /> class.
/// </summary>
+ (FMIceLinkSTUNDontFragmentAttribute*) stunDontFragmentAttribute;
/// <summary>
/// Returns a string that represents this instance.
/// </summary>
/// <returns>
/// A string that represents this instance.
/// </returns>
- (NSString*) toString;
/// <summary>
/// Returns a string that represents this instance.
/// </summary>
/// <returns>
/// A string that represents this instance.
/// </returns>
- (NSString*) description;

@end


@class NSMutableDataFMExtensions;
@class NSStringFMExtensions;

/// <summary>
/// This attribute is used by the client to request a specific transport
/// protocol for the allocated transport address.
/// </summary>
#pragma clang diagnostic ignored "-Wshorten-64-to-32"
#pragma clang diagnostic ignored "-Wint-to-pointer-cast"

@interface FMIceLinkSTUNRequestedTransportAttribute : FMIceLinkSTUNAttribute 

/// <summary>
/// Initializes a new instance of the <see cref="FMIceLinkSTUNRequestedTransportAttribute" /> class.
/// </summary>
/// <param name="valueBytes">The attribute value in bytes.</param>
+ (FMIceLinkSTUNRequestedTransportAttribute*) fromValueBytesWithValueBytes:(NSMutableData*)valueBytes;
/// <summary>
/// Initializes a new instance of the <see cref="FMIceLinkSTUNRequestedTransportAttribute" /> class.
/// </summary>
/// <param name="valueBytes">The attribute value in bytes.</param>
+ (FMIceLinkSTUNRequestedTransportAttribute*) fromValueBytes:(NSMutableData*)valueBytes;
- (NSMutableData*) getValueBytes;
/// <summary>
/// Initializes a new instance of the <see cref="FMIceLinkSTUNRequestedTransportAttribute" /> class.
/// </summary>
- (id) initWithProtocol:(uint8_t)protocol;
/// <summary>
/// Gets the transport protocol.
/// </summary>
- (uint8_t) protocol;
/// <summary>
/// Sets the transport protocol.
/// </summary>
- (void) setProtocol:(uint8_t)value;
/// <summary>
/// Initializes a new instance of the <see cref="FMIceLinkSTUNRequestedTransportAttribute" /> class.
/// </summary>
+ (FMIceLinkSTUNRequestedTransportAttribute*) stunRequestedTransportAttributeWithProtocol:(uint8_t)protocol;
/// <summary>
/// Gets the TCP transport protocol.
/// </summary>
+ (uint8_t) tcpProtocol;
/// <summary>
/// Returns a string that represents this instance.
/// </summary>
/// <returns>
/// A string that represents this instance.
/// </returns>
- (NSString*) toString;
/// <summary>
/// Returns a string that represents this instance.
/// </summary>
/// <returns>
/// A string that represents this instance.
/// </returns>
- (NSString*) description;
/// <summary>
/// Gets the UDP transport protocol.
/// </summary>
+ (uint8_t) udpProtocol;

@end


@class NSMutableDataFMExtensions;
@class NSStringFMExtensions;

/// <summary>
/// This attribute allows the client to request that the port in the
/// relayed transport address be even, and (optionally) that the server
/// reserve the next-higher port number.
/// </summary>
#pragma clang diagnostic ignored "-Wshorten-64-to-32"
#pragma clang diagnostic ignored "-Wint-to-pointer-cast"

@interface FMIceLinkSTUNEvenPortAttribute : FMIceLinkSTUNAttribute 

/// <summary>
/// Initializes a new instance of the <see cref="FMIceLinkSTUNEvenPortAttribute" /> class.
/// </summary>
/// <param name="valueBytes">The attribute value as a byte array.</param>
+ (FMIceLinkSTUNEvenPortAttribute*) fromValueBytesWithValueBytes:(NSMutableData*)valueBytes;
/// <summary>
/// Initializes a new instance of the <see cref="FMIceLinkSTUNEvenPortAttribute" /> class.
/// </summary>
/// <param name="valueBytes">The attribute value as a byte array.</param>
+ (FMIceLinkSTUNEvenPortAttribute*) fromValueBytes:(NSMutableData*)valueBytes;
- (NSMutableData*) getValueBytes;
/// <summary>
/// Initializes a new instance of the <see cref="FMIceLinkSTUNEvenPortAttribute" /> class.
/// </summary>
/// <param name="reserveNextHigher">Whether the server should reserve the next-higher port number.</param>
- (id) initWithReserveNextHigher:(bool)reserveNextHigher;
/// <summary>
/// Initializes a new instance of the <see cref="FMIceLinkSTUNEvenPortAttribute" /> class.
/// </summary>
/// <param name="reserveNextHigher">Whether the server should reserve the next-higher port number.</param>
+ (FMIceLinkSTUNEvenPortAttribute*) stunEvenPortAttributeWithReserveNextHigher:(bool)reserveNextHigher;
/// <summary>
/// Returns a string that represents this instance.
/// </summary>
/// <returns>
/// A string that represents this instance.
/// </returns>
- (NSString*) toString;
/// <summary>
/// Returns a string that represents this instance.
/// </summary>
/// <returns>
/// A string that represents this instance.
/// </returns>
- (NSString*) description;

@end


@class NSStringFMExtensions;
@class NSMutableDataFMExtensions;

/// <summary>
/// The XOR-PEER-ADDRESS specifies the address and port of the peer as
/// seen from the TURN server.
/// </summary>
#pragma clang diagnostic ignored "-Wshorten-64-to-32"
#pragma clang diagnostic ignored "-Wint-to-pointer-cast"

@interface FMIceLinkSTUNXorPeerAddressAttribute : FMIceLinkSTUNAttribute 

/// <summary>
/// Initializes a new instance of the <see cref="FMIceLinkSTUNXorPeerAddressAttribute" /> class.
/// </summary>
/// <param name="valueBytes">The attribute value as a byte array.</param>
/// <param name="transactionId">The transaction ID.</param>
+ (FMIceLinkSTUNXorPeerAddressAttribute*) fromValueBytesWithValueBytes:(NSMutableData*)valueBytes transactionId:(NSMutableData*)transactionId;
/// <summary>
/// Initializes a new instance of the <see cref="FMIceLinkSTUNXorPeerAddressAttribute" /> class.
/// </summary>
/// <param name="valueBytes">The attribute value as a byte array.</param>
/// <param name="transactionId">The transaction ID.</param>
+ (FMIceLinkSTUNXorPeerAddressAttribute*) fromValueBytes:(NSMutableData*)valueBytes transactionId:(NSMutableData*)transactionId;
- (NSMutableData*) getValueBytes;
/// <summary>
/// Initializes a new instance of the <see cref="FMIceLinkSTUNXorPeerAddressAttribute" /> class.
/// </summary>
/// <param name="ipAddress">The IP address.</param>
/// <param name="port">The port.</param>
/// <param name="transactionId">The transaction ID.</param>
- (id) initWithIPAddress:(NSString*)ipAddress port:(int)port transactionId:(NSMutableData*)transactionId;
/// <summary>
/// Gets the IP address.
/// </summary>
- (NSString*) ipAddress;
/// <summary>
/// Gets the port.
/// </summary>
- (int) port;
/// <summary>
/// Sets the IP address.
/// </summary>
- (void) setIPAddress:(NSString*)value;
/// <summary>
/// Sets the port.
/// </summary>
- (void) setPort:(int)value;
/// <summary>
/// Initializes a new instance of the <see cref="FMIceLinkSTUNXorPeerAddressAttribute" /> class.
/// </summary>
/// <param name="ipAddress">The IP address.</param>
/// <param name="port">The port.</param>
/// <param name="transactionId">The transaction ID.</param>
+ (FMIceLinkSTUNXorPeerAddressAttribute*) stunXorPeerAddressAttributeWithIPAddress:(NSString*)ipAddress port:(int)port transactionId:(NSMutableData*)transactionId;
/// <summary>
/// Returns a string that represents this instance.
/// </summary>
/// <returns>
/// A string that represents this instance.
/// </returns>
- (NSString*) toString;
/// <summary>
/// Returns a string that represents this instance.
/// </summary>
/// <returns>
/// A string that represents this instance.
/// </returns>
- (NSString*) description;
/// <summary>
/// Gets the transaction ID.
/// </summary>
- (NSMutableData*) transactionId;

@end


@class NSMutableDataFMExtensions;
@class NSStringFMExtensions;

/// <summary>
/// The DATA attribute is present in all Send and Data indications.
/// The value portion of this attribute is variable length and consists of
/// the application data.
/// </summary>
#pragma clang diagnostic ignored "-Wshorten-64-to-32"
#pragma clang diagnostic ignored "-Wint-to-pointer-cast"

@interface FMIceLinkSTUNDataAttribute : FMIceLinkSTUNAttribute 

/// <summary>
/// Gets the data.
/// </summary>
- (NSMutableData*) data;
/// <summary>
/// Initializes a new instance of the <see cref="FMIceLinkSTUNDataAttribute" /> class.
/// </summary>
/// <param name="valueBytes">The attribute value as a byte array.</param>
+ (FMIceLinkSTUNDataAttribute*) fromValueBytesWithValueBytes:(NSMutableData*)valueBytes;
/// <summary>
/// Initializes a new instance of the <see cref="FMIceLinkSTUNDataAttribute" /> class.
/// </summary>
/// <param name="valueBytes">The attribute value as a byte array.</param>
+ (FMIceLinkSTUNDataAttribute*) fromValueBytes:(NSMutableData*)valueBytes;
- (NSMutableData*) getValueBytes;
/// <summary>
/// Initializes a new instance of the <see cref="FMIceLinkSTUNDataAttribute" /> class.
/// </summary>
/// <param name="data">The data.</param>
- (id) initWithData:(NSMutableData*)data;
/// <summary>
/// Sets the data.
/// </summary>
- (void) setData:(NSMutableData*)value;
/// <summary>
/// Initializes a new instance of the <see cref="FMIceLinkSTUNDataAttribute" /> class.
/// </summary>
/// <param name="data">The data.</param>
+ (FMIceLinkSTUNDataAttribute*) stunDataAttributeWithData:(NSMutableData*)data;
/// <summary>
/// Returns a string that represents this instance.
/// </summary>
/// <returns>
/// A string that represents this instance.
/// </returns>
- (NSString*) toString;
/// <summary>
/// Returns a string that represents this instance.
/// </summary>
/// <returns>
/// A string that represents this instance.
/// </returns>
- (NSString*) description;

@end


@class NSMutableDataFMExtensions;
@class NSStringFMExtensions;

/// <summary>
/// The LIFETIME attribute represents the duration for which the server
/// will maintain an allocation in the absence of a refresh (in seconds).
/// </summary>
#pragma clang diagnostic ignored "-Wshorten-64-to-32"
#pragma clang diagnostic ignored "-Wint-to-pointer-cast"

@interface FMIceLinkSTUNLifetimeAttribute : FMIceLinkSTUNAttribute 

/// <summary>
/// Initializes a new instance of the <see cref="FMIceLinkSTUNLifetimeAttribute" /> class.
/// </summary>
/// <param name="valueBytes">The attribute value as a byte array.</param>
+ (FMIceLinkSTUNLifetimeAttribute*) fromValueBytesWithValueBytes:(NSMutableData*)valueBytes;
/// <summary>
/// Initializes a new instance of the <see cref="FMIceLinkSTUNLifetimeAttribute" /> class.
/// </summary>
/// <param name="valueBytes">The attribute value as a byte array.</param>
+ (FMIceLinkSTUNLifetimeAttribute*) fromValueBytes:(NSMutableData*)valueBytes;
- (NSMutableData*) getValueBytes;
/// <summary>
/// Initializes a new instance of the <see cref="FMIceLinkSTUNLifetimeAttribute" /> class.
/// </summary>
/// <param name="lifetime">The allocation duration in seconds.</param>
- (id) initWithLifetime:(int)lifetime;
/// <summary>
/// Gets the allocation duration in seconds.
/// </summary>
- (int) lifetime;
/// <summary>
/// Sets the allocation duration in seconds.
/// </summary>
- (void) setLifetime:(int)value;
/// <summary>
/// Initializes a new instance of the <see cref="FMIceLinkSTUNLifetimeAttribute" /> class.
/// </summary>
/// <param name="lifetime">The allocation duration in seconds.</param>
+ (FMIceLinkSTUNLifetimeAttribute*) stunLifetimeAttributeWithLifetime:(int)lifetime;
/// <summary>
/// Returns a string that represents this instance.
/// </summary>
/// <returns>
/// A string that represents this instance.
/// </returns>
- (NSString*) toString;
/// <summary>
/// Returns a string that represents this instance.
/// </summary>
/// <returns>
/// A string that represents this instance.
/// </returns>
- (NSString*) description;

@end


@class NSMutableDataFMExtensions;

/// <summary>
/// A generic STUN channel-bind message.
/// </summary>
#pragma clang diagnostic ignored "-Wshorten-64-to-32"
#pragma clang diagnostic ignored "-Wint-to-pointer-cast"

@interface FMIceLinkSTUNChannelBindMessage : FMIceLinkSTUNMessage 

/// <summary>
/// Initializes a new instance of the <see cref="FMIceLinkSTUNChannelBindMessage" /> class.
/// </summary>
/// <param name="messageType">The type of the message.</param>
/// <param name="transactionId">The transaction ID.</param>
- (id) initWithMessageType:(FMIceLinkSTUNMessageType)messageType transactionId:(NSMutableData*)transactionId;
/// <summary>
/// Initializes a new instance of the <see cref="FMIceLinkSTUNChannelBindMessage" /> class.
/// </summary>
/// <param name="messageType">The type of the message.</param>
/// <param name="transactionId">The transaction ID.</param>
+ (FMIceLinkSTUNChannelBindMessage*) stunChannelBindMessageWithMessageType:(FMIceLinkSTUNMessageType)messageType transactionId:(NSMutableData*)transactionId;
/// <summary>
/// Initializes a new instance of the <see cref="FMIceLinkSTUNChannelBindMessage" /> class.
/// </summary>
/// <param name="messageType">The type of the message.</param>
/// <param name="transactionId">The transaction ID.</param>
+ (FMIceLinkSTUNChannelBindMessage*) stunChannelBindMessageWithType:(FMIceLinkSTUNMessageType)messageType transactionId:(NSMutableData*)transactionId;

@end


@class NSMutableDataFMExtensions;

/// <summary>
/// A STUN channel-bind response.
/// </summary>
#pragma clang diagnostic ignored "-Wshorten-64-to-32"
#pragma clang diagnostic ignored "-Wint-to-pointer-cast"

@interface FMIceLinkSTUNChannelBindResponse : FMIceLinkSTUNChannelBindMessage 

/// <summary>
/// Initializes a new instance of the <see cref="FMIceLinkSTUNChannelBindResponse" /> class.
/// </summary>
/// <param name="transactionId">The transaction ID.</param>
/// <param name="success">Whether the request was successful.</param>
- (id) initWithTransactionId:(NSMutableData*)transactionId success:(bool)success;
/// <summary>
/// Initializes a new instance of the <see cref="FMIceLinkSTUNChannelBindResponse" /> class.
/// </summary>
/// <param name="transactionId">The transaction ID.</param>
/// <param name="success">Whether the request was successful.</param>
+ (FMIceLinkSTUNChannelBindResponse*) stunChannelBindResponseWithTransactionId:(NSMutableData*)transactionId success:(bool)success;

@end



/// <summary>
/// A STUN channel-bind request.
/// </summary>
#pragma clang diagnostic ignored "-Wshorten-64-to-32"
#pragma clang diagnostic ignored "-Wint-to-pointer-cast"

@interface FMIceLinkSTUNChannelBindRequest : FMIceLinkSTUNChannelBindMessage 

/// <summary>
/// Initializes a new instance of the <see cref="FMIceLinkSTUNChannelBindRequest" /> class.
/// </summary>
- (id) init;
/// <summary>
/// Initializes a new instance of the <see cref="FMIceLinkSTUNChannelBindRequest" /> class.
/// </summary>
+ (FMIceLinkSTUNChannelBindRequest*) stunChannelBindRequest;

@end


@class NSMutableDataFMExtensions;

/// <summary>
/// A generic STUN create-permission message.
/// </summary>
#pragma clang diagnostic ignored "-Wshorten-64-to-32"
#pragma clang diagnostic ignored "-Wint-to-pointer-cast"

@interface FMIceLinkSTUNCreatePermissionMessage : FMIceLinkSTUNMessage 

/// <summary>
/// Initializes a new instance of the <see cref="FMIceLinkSTUNCreatePermissionMessage" /> class.
/// </summary>
/// <param name="messageType">The type of the message.</param>
/// <param name="transactionId">The transaction ID.</param>
- (id) initWithMessageType:(FMIceLinkSTUNMessageType)messageType transactionId:(NSMutableData*)transactionId;
/// <summary>
/// Initializes a new instance of the <see cref="FMIceLinkSTUNCreatePermissionMessage" /> class.
/// </summary>
/// <param name="messageType">The type of the message.</param>
/// <param name="transactionId">The transaction ID.</param>
+ (FMIceLinkSTUNCreatePermissionMessage*) stunCreatePermissionMessageWithMessageType:(FMIceLinkSTUNMessageType)messageType transactionId:(NSMutableData*)transactionId;
/// <summary>
/// Initializes a new instance of the <see cref="FMIceLinkSTUNCreatePermissionMessage" /> class.
/// </summary>
/// <param name="messageType">The type of the message.</param>
/// <param name="transactionId">The transaction ID.</param>
+ (FMIceLinkSTUNCreatePermissionMessage*) stunCreatePermissionMessageWithType:(FMIceLinkSTUNMessageType)messageType transactionId:(NSMutableData*)transactionId;

@end


@class NSMutableDataFMExtensions;

/// <summary>
/// A STUN create-permission response.
/// </summary>
#pragma clang diagnostic ignored "-Wshorten-64-to-32"
#pragma clang diagnostic ignored "-Wint-to-pointer-cast"

@interface FMIceLinkSTUNCreatePermissionResponse : FMIceLinkSTUNCreatePermissionMessage 

/// <summary>
/// Initializes a new instance of the <see cref="FMIceLinkSTUNCreatePermissionResponse" /> class.
/// </summary>
/// <param name="transactionId">The transaction ID.</param>
/// <param name="success">Whether the request was successful.</param>
- (id) initWithTransactionId:(NSMutableData*)transactionId success:(bool)success;
/// <summary>
/// Initializes a new instance of the <see cref="FMIceLinkSTUNCreatePermissionResponse" /> class.
/// </summary>
/// <param name="transactionId">The transaction ID.</param>
/// <param name="success">Whether the request was successful.</param>
+ (FMIceLinkSTUNCreatePermissionResponse*) stunCreatePermissionResponseWithTransactionId:(NSMutableData*)transactionId success:(bool)success;

@end



/// <summary>
/// A STUN create-permission request.
/// </summary>
#pragma clang diagnostic ignored "-Wshorten-64-to-32"
#pragma clang diagnostic ignored "-Wint-to-pointer-cast"

@interface FMIceLinkSTUNCreatePermissionRequest : FMIceLinkSTUNCreatePermissionMessage 

/// <summary>
/// Initializes a new instance of the <see cref="FMIceLinkSTUNCreatePermissionRequest" /> class.
/// </summary>
- (id) init;
/// <summary>
/// Initializes a new instance of the <see cref="FMIceLinkSTUNCreatePermissionRequest" /> class.
/// </summary>
+ (FMIceLinkSTUNCreatePermissionRequest*) stunCreatePermissionRequest;

@end



/// <summary>
/// A STUN data indication.
/// </summary>
#pragma clang diagnostic ignored "-Wshorten-64-to-32"
#pragma clang diagnostic ignored "-Wint-to-pointer-cast"

@interface FMIceLinkSTUNDataIndication : FMIceLinkSTUNDataMessage 

/// <summary>
/// Initializes a new instance of the <see cref="FMIceLinkSTUNDataIndication" /> class.
/// </summary>
- (id) init;
/// <summary>
/// Initializes a new instance of the <see cref="FMIceLinkSTUNDataIndication" /> class.
/// </summary>
+ (FMIceLinkSTUNDataIndication*) stunDataIndication;

@end


@class NSMutableDataFMExtensions;

/// <summary>
/// A generic STUN send message.
/// </summary>
#pragma clang diagnostic ignored "-Wshorten-64-to-32"
#pragma clang diagnostic ignored "-Wint-to-pointer-cast"

@interface FMIceLinkSTUNSendMessage : FMIceLinkSTUNMessage 

/// <summary>
/// Initializes a new instance of the <see cref="FMIceLinkSTUNSendMessage" /> class.
/// </summary>
/// <param name="messageType">The type of the message.</param>
/// <param name="transactionId">The transaction ID.</param>
- (id) initWithMessageType:(FMIceLinkSTUNMessageType)messageType transactionId:(NSMutableData*)transactionId;
/// <summary>
/// Initializes a new instance of the <see cref="FMIceLinkSTUNSendMessage" /> class.
/// </summary>
/// <param name="messageType">The type of the message.</param>
/// <param name="transactionId">The transaction ID.</param>
+ (FMIceLinkSTUNSendMessage*) stunSendMessageWithMessageType:(FMIceLinkSTUNMessageType)messageType transactionId:(NSMutableData*)transactionId;
/// <summary>
/// Initializes a new instance of the <see cref="FMIceLinkSTUNSendMessage" /> class.
/// </summary>
/// <param name="messageType">The type of the message.</param>
/// <param name="transactionId">The transaction ID.</param>
+ (FMIceLinkSTUNSendMessage*) stunSendMessageWithType:(FMIceLinkSTUNMessageType)messageType transactionId:(NSMutableData*)transactionId;

@end



/// <summary>
/// A STUN send indication.
/// </summary>
#pragma clang diagnostic ignored "-Wshorten-64-to-32"
#pragma clang diagnostic ignored "-Wint-to-pointer-cast"

@interface FMIceLinkSTUNSendIndication : FMIceLinkSTUNSendMessage 

/// <summary>
/// Initializes a new instance of the <see cref="FMIceLinkSTUNSendIndication" /> class.
/// </summary>
- (id) init;
/// <summary>
/// Initializes a new instance of the <see cref="FMIceLinkSTUNSendIndication" /> class.
/// </summary>
+ (FMIceLinkSTUNSendIndication*) stunSendIndication;

@end


@class NSMutableDataFMExtensions;

/// <summary>
/// A generic STUN refresh message.
/// </summary>
#pragma clang diagnostic ignored "-Wshorten-64-to-32"
#pragma clang diagnostic ignored "-Wint-to-pointer-cast"

@interface FMIceLinkSTUNRefreshMessage : FMIceLinkSTUNMessage 

/// <summary>
/// Initializes a new instance of the <see cref="FMIceLinkSTUNRefreshMessage" /> class.
/// </summary>
/// <param name="messageType">The type of the message.</param>
/// <param name="transactionId">The transaction ID.</param>
- (id) initWithMessageType:(FMIceLinkSTUNMessageType)messageType transactionId:(NSMutableData*)transactionId;
/// <summary>
/// Initializes a new instance of the <see cref="FMIceLinkSTUNRefreshMessage" /> class.
/// </summary>
/// <param name="messageType">The type of the message.</param>
/// <param name="transactionId">The transaction ID.</param>
+ (FMIceLinkSTUNRefreshMessage*) stunRefreshMessageWithMessageType:(FMIceLinkSTUNMessageType)messageType transactionId:(NSMutableData*)transactionId;
/// <summary>
/// Initializes a new instance of the <see cref="FMIceLinkSTUNRefreshMessage" /> class.
/// </summary>
/// <param name="messageType">The type of the message.</param>
/// <param name="transactionId">The transaction ID.</param>
+ (FMIceLinkSTUNRefreshMessage*) stunRefreshMessageWithType:(FMIceLinkSTUNMessageType)messageType transactionId:(NSMutableData*)transactionId;

@end



/// <summary>
/// A STUN refresh request.
/// </summary>
#pragma clang diagnostic ignored "-Wshorten-64-to-32"
#pragma clang diagnostic ignored "-Wint-to-pointer-cast"

@interface FMIceLinkSTUNRefreshRequest : FMIceLinkSTUNRefreshMessage 

/// <summary>
/// Initializes a new instance of the <see cref="FMIceLinkSTUNRefreshRequest" /> class.
/// </summary>
- (id) init;
/// <summary>
/// Initializes a new instance of the <see cref="FMIceLinkSTUNRefreshRequest" /> class.
/// </summary>
+ (FMIceLinkSTUNRefreshRequest*) stunRefreshRequest;

@end


@class NSMutableDataFMExtensions;

/// <summary>
/// A STUN refresh response.
/// </summary>
#pragma clang diagnostic ignored "-Wshorten-64-to-32"
#pragma clang diagnostic ignored "-Wint-to-pointer-cast"

@interface FMIceLinkSTUNRefreshResponse : FMIceLinkSTUNRefreshMessage 

/// <summary>
/// Initializes a new instance of the <see cref="FMIceLinkSTUNRefreshResponse" /> class.
/// </summary>
/// <param name="transactionId">The transaction ID.</param>
/// <param name="success">Whether the request was successful.</param>
- (id) initWithTransactionId:(NSMutableData*)transactionId success:(bool)success;
/// <summary>
/// Initializes a new instance of the <see cref="FMIceLinkSTUNRefreshResponse" /> class.
/// </summary>
/// <param name="transactionId">The transaction ID.</param>
/// <param name="success">Whether the request was successful.</param>
+ (FMIceLinkSTUNRefreshResponse*) stunRefreshResponseWithTransactionId:(NSMutableData*)transactionId success:(bool)success;

@end


@class NSMutableDataFMExtensions;

/// <summary>
/// A generic STUN allocate message.
/// </summary>
#pragma clang diagnostic ignored "-Wshorten-64-to-32"
#pragma clang diagnostic ignored "-Wint-to-pointer-cast"

@interface FMIceLinkSTUNAllocateMessage : FMIceLinkSTUNMessage 

/// <summary>
/// Initializes a new instance of the <see cref="FMIceLinkSTUNAllocateMessage" /> class.
/// </summary>
/// <param name="messageType">The type of the message.</param>
/// <param name="transactionId">The transaction ID.</param>
- (id) initWithMessageType:(FMIceLinkSTUNMessageType)messageType transactionId:(NSMutableData*)transactionId;
/// <summary>
/// Initializes a new instance of the <see cref="FMIceLinkSTUNAllocateMessage" /> class.
/// </summary>
/// <param name="messageType">The type of the message.</param>
/// <param name="transactionId">The transaction ID.</param>
+ (FMIceLinkSTUNAllocateMessage*) stunAllocateMessageWithMessageType:(FMIceLinkSTUNMessageType)messageType transactionId:(NSMutableData*)transactionId;
/// <summary>
/// Initializes a new instance of the <see cref="FMIceLinkSTUNAllocateMessage" /> class.
/// </summary>
/// <param name="messageType">The type of the message.</param>
/// <param name="transactionId">The transaction ID.</param>
+ (FMIceLinkSTUNAllocateMessage*) stunAllocateMessageWithType:(FMIceLinkSTUNMessageType)messageType transactionId:(NSMutableData*)transactionId;

@end


@class NSMutableDataFMExtensions;

/// <summary>
/// A STUN allocate response.
/// </summary>
#pragma clang diagnostic ignored "-Wshorten-64-to-32"
#pragma clang diagnostic ignored "-Wint-to-pointer-cast"

@interface FMIceLinkSTUNAllocateResponse : FMIceLinkSTUNAllocateMessage 

/// <summary>
/// Initializes a new instance of the <see cref="FMIceLinkSTUNAllocateResponse" /> class.
/// </summary>
/// <param name="transactionId">The transaction ID.</param>
/// <param name="success">Whether the request was successful.</param>
- (id) initWithTransactionId:(NSMutableData*)transactionId success:(bool)success;
/// <summary>
/// Initializes a new instance of the <see cref="FMIceLinkSTUNAllocateResponse" /> class.
/// </summary>
/// <param name="transactionId">The transaction ID.</param>
/// <param name="success">Whether the request was successful.</param>
+ (FMIceLinkSTUNAllocateResponse*) stunAllocateResponseWithTransactionId:(NSMutableData*)transactionId success:(bool)success;

@end



/// <summary>
/// A STUN allocate request.
/// </summary>
#pragma clang diagnostic ignored "-Wshorten-64-to-32"
#pragma clang diagnostic ignored "-Wint-to-pointer-cast"

@interface FMIceLinkSTUNAllocateRequest : FMIceLinkSTUNAllocateMessage 

/// <summary>
/// Initializes a new instance of the <see cref="FMIceLinkSTUNAllocateRequest" /> class.
/// </summary>
- (id) init;
/// <summary>
/// Initializes a new instance of the <see cref="FMIceLinkSTUNAllocateRequest" /> class.
/// </summary>
+ (FMIceLinkSTUNAllocateRequest*) stunAllocateRequest;

@end


@class NSMutableDataFMExtensions;
@class NSStringFMExtensions;

/// <summary>
/// The CHANNEL-NUMBER attribute contains the number of the channel.
/// </summary>
#pragma clang diagnostic ignored "-Wshorten-64-to-32"
#pragma clang diagnostic ignored "-Wint-to-pointer-cast"

@interface FMIceLinkSTUNChannelNumberAttribute : FMIceLinkSTUNAttribute 

/// <summary>
/// Gets the channel number.
/// </summary>
- (int) channelNumber;
/// <summary>
/// Initializes a new instance of the <see cref="FMIceLinkSTUNChannelNumberAttribute" /> class.
/// </summary>
/// <param name="valueBytes">The attribute value as a byte array.</param>
+ (FMIceLinkSTUNChannelNumberAttribute*) fromValueBytesWithValueBytes:(NSMutableData*)valueBytes;
/// <summary>
/// Initializes a new instance of the <see cref="FMIceLinkSTUNChannelNumberAttribute" /> class.
/// </summary>
/// <param name="valueBytes">The attribute value as a byte array.</param>
+ (FMIceLinkSTUNChannelNumberAttribute*) fromValueBytes:(NSMutableData*)valueBytes;
- (NSMutableData*) getValueBytes;
/// <summary>
/// Initializes a new instance of the <see cref="FMIceLinkSTUNChannelNumberAttribute" /> class.
/// </summary>
/// <param name="channelNumber">The channel number.</param>
- (id) initWithChannelNumber:(int)channelNumber;
/// <summary>
/// Sets the channel number.
/// </summary>
- (void) setChannelNumber:(int)value;
/// <summary>
/// Initializes a new instance of the <see cref="FMIceLinkSTUNChannelNumberAttribute" /> class.
/// </summary>
/// <param name="channelNumber">The channel number.</param>
+ (FMIceLinkSTUNChannelNumberAttribute*) stunChannelNumberAttributeWithChannelNumber:(int)channelNumber;
/// <summary>
/// Returns a string that represents this instance.
/// </summary>
/// <returns>
/// A string that represents this instance.
/// </returns>
- (NSString*) toString;
/// <summary>
/// Returns a string that represents this instance.
/// </summary>
/// <returns>
/// A string that represents this instance.
/// </returns>
- (NSString*) description;

@end


@class FMIceLinkTURNAllocation;
@class NSMutableDataFMExtensions;
@class FMIceLinkTransportAddress;

#pragma clang diagnostic ignored "-Wshorten-64-to-32"
#pragma clang diagnostic ignored "-Wint-to-pointer-cast"

@interface FMIceLinkTURNDataReceivedArgs : NSObject 

- (FMIceLinkTURNAllocation*) allocation;
- (NSMutableData*) data;
- (id) initWithAllocation:(FMIceLinkTURNAllocation*)allocation remoteAddress:(FMIceLinkTransportAddress*)remoteAddress data:(NSMutableData*)data;
- (FMIceLinkTransportAddress*) remoteAddress;
+ (FMIceLinkTURNDataReceivedArgs*) turnDataReceivedArgsWithAllocation:(FMIceLinkTURNAllocation*)allocation remoteAddress:(FMIceLinkTransportAddress*)remoteAddress data:(NSMutableData*)data;

@end


@class FMIceLinkTURNAllocation;
@class FMTcpSocket;
@class FMIceLinkVirtualTcpSocket;

#pragma clang diagnostic ignored "-Wshorten-64-to-32"
#pragma clang diagnostic ignored "-Wint-to-pointer-cast"

@interface FMIceLinkTURNSocketAcceptedArgs : NSObject 

- (FMIceLinkTURNAllocation*) allocation;
- (id) initWithAllocation:(FMIceLinkTURNAllocation*)allocation socket:(FMTcpSocket*)socket virtualSocket:(FMIceLinkVirtualTcpSocket*)virtualSocket;
- (FMTcpSocket*) socket;
+ (FMIceLinkTURNSocketAcceptedArgs*) turnSocketAcceptedArgsWithAllocation:(FMIceLinkTURNAllocation*)allocation socket:(FMTcpSocket*)socket virtualSocket:(FMIceLinkVirtualTcpSocket*)virtualSocket;
- (FMIceLinkVirtualTcpSocket*) virtualSocket;

@end


@class FMIceLinkTransportAddress;
@class NSDateFMExtensions;
@class NSStringFMExtensions;

#pragma clang diagnostic ignored "-Wshorten-64-to-32"
#pragma clang diagnostic ignored "-Wint-to-pointer-cast"

@interface FMIceLinkTURNChannelBinding : NSObject 

- (FMIceLinkTransportAddress*) address;
- (int) channelNumber;
- (void) extendTimeToExpiry;
- (id) initWithAddress:(FMIceLinkTransportAddress*)address channelNumber:(int)channelNumber;
- (bool) isExpired;
- (int) timeToExpiry;
- (NSString*) toString;
- (NSString*) description;
+ (FMIceLinkTURNChannelBinding*) turnChannelBindingWithAddress:(FMIceLinkTransportAddress*)address channelNumber:(int)channelNumber;

@end


@class FMIceLinkTransportAddress;
@class NSMutableArrayFMExtensions;
@class FMTimeoutTimer;
@class NSDateFMExtensions;
@class FMCallback;
@class NSStringFMExtensions;
@class NSMutableDataFMExtensions;

#pragma clang diagnostic ignored "-Wshorten-64-to-32"
#pragma clang diagnostic ignored "-Wint-to-pointer-cast"

@interface FMIceLinkTURNAllocation : NSObject 

- (bool) addChannelBindingWithRemoteAddress:(FMIceLinkTransportAddress*)remoteAddress channelNumber:(int)channelNumber;
- (bool) addPermissionWithRemoteIPAddress:(NSString*)remoteIPAddress;
- (NSMutableArray*) channelBindings;
- (FMIceLinkTransportAddress*) clientAddress;
- (void) close;
- (int) hasChannelBindingAddressWithRemoteAddress:(FMIceLinkTransportAddress*)remoteAddress;
- (FMIceLinkTransportAddress*) hasChannelBindingNumberWithChannelNumber:(int)channelNumber;
- (bool) hasPermissionWithRemoteIPAddress:(NSString*)remoteIPAddress;
- (id) initWithTransactionId:(NSMutableData*)transactionId reservation:(NSMutableData*)reservation clientAddress:(FMIceLinkTransportAddress*)clientAddress username:(NSString*)username realm:(NSString*)realm lifetime:(int)lifetime onExpires:(FMCallback*)onExpires;
- (id) initWithTransactionId:(NSMutableData*)transactionId reservation:(NSMutableData*)reservation clientAddress:(FMIceLinkTransportAddress*)clientAddress username:(NSString*)username realm:(NSString*)realm lifetime:(int)lifetime onExpiresBlock:(void (^) (FMIceLinkTransportAddress*))onExpiresBlock;
- (bool) isExpired;
- (int) lastLifetime;
- (NSString*) localIPAddress;
- (int) localPort;
- (NSMutableArray*) permissions;
- (NSString*) realm;
- (bool) refreshWithLifetime:(int)lifetime;
- (NSMutableData*) reservation;
- (NSMutableData*) transactionId;
+ (FMIceLinkTURNAllocation*) turnAllocationWithTransactionId:(NSMutableData*)transactionId reservation:(NSMutableData*)reservation clientAddress:(FMIceLinkTransportAddress*)clientAddress username:(NSString*)username realm:(NSString*)realm lifetime:(int)lifetime onExpires:(FMCallback*)onExpires;
+ (FMIceLinkTURNAllocation*) turnAllocationWithTransactionId:(NSMutableData*)transactionId reservation:(NSMutableData*)reservation clientAddress:(FMIceLinkTransportAddress*)clientAddress username:(NSString*)username realm:(NSString*)realm lifetime:(int)lifetime onExpiresBlock:(void (^) (FMIceLinkTransportAddress*))onExpiresBlock;
- (NSString*) username;

@end


@class FMIceLinkTURNSocketAcceptedArgs;
@class FMIceLinkTransportAddress;
@class FMTcpAcceptArgs;
@class FMCallback;
@class FMTcpSocket;
@class FMIceLinkVirtualTcpSocket;
@class FMTcpConnectArgs;
@class NSMutableDataFMExtensions;
@class NSStringFMExtensions;

#pragma clang diagnostic ignored "-Wshorten-64-to-32"
#pragma clang diagnostic ignored "-Wint-to-pointer-cast"

@interface FMIceLinkTURNTcpAllocation : FMIceLinkTURNAllocation 

- (void) close;
- (void) connectWithConnectArgs:(FMTcpConnectArgs*)connectArgs;
- (void) connectWithArgs:(FMTcpConnectArgs*)connectArgs;
- (id) initWithTransactionId:(NSMutableData*)transactionId socket:(FMTcpSocket*)socket virtualSocket:(FMIceLinkVirtualTcpSocket*)virtualSocket clientAddress:(FMIceLinkTransportAddress*)clientAddress username:(NSString*)username realm:(NSString*)realm lifetime:(int)lifetime onAccept:(FMCallback*)onAccept onExpires:(FMCallback*)onExpires;
- (id) initWithTransactionId:(NSMutableData*)transactionId socket:(FMTcpSocket*)socket virtualSocket:(FMIceLinkVirtualTcpSocket*)virtualSocket clientAddress:(FMIceLinkTransportAddress*)clientAddress username:(NSString*)username realm:(NSString*)realm lifetime:(int)lifetime onAcceptBlock:(void (^) (FMIceLinkTURNSocketAcceptedArgs*))onAcceptBlock onExpiresBlock:(void (^) (FMIceLinkTransportAddress*))onExpiresBlock;
- (bool) isClosed;
- (NSString*) localIPAddress;
- (int) localPort;
- (FMTcpSocket*) socket;
- (void) startAccepting;
+ (FMIceLinkTURNTcpAllocation*) turnTcpAllocationWithTransactionId:(NSMutableData*)transactionId socket:(FMTcpSocket*)socket virtualSocket:(FMIceLinkVirtualTcpSocket*)virtualSocket clientAddress:(FMIceLinkTransportAddress*)clientAddress username:(NSString*)username realm:(NSString*)realm lifetime:(int)lifetime onAccept:(FMCallback*)onAccept onExpires:(FMCallback*)onExpires;
+ (FMIceLinkTURNTcpAllocation*) turnTcpAllocationWithTransactionId:(NSMutableData*)transactionId socket:(FMTcpSocket*)socket virtualSocket:(FMIceLinkVirtualTcpSocket*)virtualSocket clientAddress:(FMIceLinkTransportAddress*)clientAddress username:(NSString*)username realm:(NSString*)realm lifetime:(int)lifetime onAcceptBlock:(void (^) (FMIceLinkTURNSocketAcceptedArgs*))onAcceptBlock onExpiresBlock:(void (^) (FMIceLinkTransportAddress*))onExpiresBlock;
- (FMIceLinkVirtualTcpSocket*) virtualSocket;

@end


@class NSStringFMExtensions;
@class NSDateFMExtensions;

#pragma clang diagnostic ignored "-Wshorten-64-to-32"
#pragma clang diagnostic ignored "-Wint-to-pointer-cast"

@interface FMIceLinkTURNPermission : NSObject 

- (NSString*) address;
- (void) extendTimeToExpiry;
- (id) initWithAddress:(NSString*)address;
- (bool) isExpired;
- (int) timeToExpiry;
- (NSString*) toString;
- (NSString*) description;
+ (FMIceLinkTURNPermission*) turnPermissionWithAddress:(NSString*)address;

@end


@class FMIceLinkTransportAddress;
@class FMCallback;
@class FMUdpReceiveArgs;
@class FMUdpSocket;
@class FMIceLinkVirtualUdpSocket;
@class NSMutableDataFMExtensions;
@class NSStringFMExtensions;

#pragma clang diagnostic ignored "-Wshorten-64-to-32"
#pragma clang diagnostic ignored "-Wint-to-pointer-cast"

@interface FMIceLinkTURNUdpAllocation : FMIceLinkTURNAllocation 

- (void) close;
- (id) initWithServerSocket:(FMUdpSocket*)serverSocket virtualServerSocket:(FMIceLinkVirtualUdpSocket*)virtualServerSocket transactionId:(NSMutableData*)transactionId reservation:(NSMutableData*)reservation socket:(FMUdpSocket*)socket virtualSocket:(FMIceLinkVirtualUdpSocket*)virtualSocket clientAddress:(FMIceLinkTransportAddress*)clientAddress username:(NSString*)username realm:(NSString*)realm lifetime:(int)lifetime onReceive:(FMCallback*)onReceive onExpires:(FMCallback*)onExpires;
- (id) initWithServerSocket:(FMUdpSocket*)serverSocket virtualServerSocket:(FMIceLinkVirtualUdpSocket*)virtualServerSocket transactionId:(NSMutableData*)transactionId reservation:(NSMutableData*)reservation socket:(FMUdpSocket*)socket virtualSocket:(FMIceLinkVirtualUdpSocket*)virtualSocket clientAddress:(FMIceLinkTransportAddress*)clientAddress username:(NSString*)username realm:(NSString*)realm lifetime:(int)lifetime onReceive:(FMCallback*)onReceive onExpiresBlock:(void (^) (FMIceLinkTransportAddress*))onExpiresBlock;
- (bool) isClosed;
- (NSString*) localIPAddress;
- (int) localPort;
- (bool) sendDataWithData:(NSMutableData*)data remoteAddress:(FMIceLinkTransportAddress*)remoteAddress exception:(NSException**)exception;
- (bool) sendData:(NSMutableData*)data remoteAddress:(FMIceLinkTransportAddress*)remoteAddress exception:(NSException**)exception;
- (FMUdpSocket*) serverSocket;
- (FMUdpSocket*) socket;
- (void) startReceiving;
+ (FMIceLinkTURNUdpAllocation*) turnUdpAllocationWithServerSocket:(FMUdpSocket*)serverSocket virtualServerSocket:(FMIceLinkVirtualUdpSocket*)virtualServerSocket transactionId:(NSMutableData*)transactionId reservation:(NSMutableData*)reservation socket:(FMUdpSocket*)socket virtualSocket:(FMIceLinkVirtualUdpSocket*)virtualSocket clientAddress:(FMIceLinkTransportAddress*)clientAddress username:(NSString*)username realm:(NSString*)realm lifetime:(int)lifetime onReceive:(FMCallback*)onReceive onExpires:(FMCallback*)onExpires;
+ (FMIceLinkTURNUdpAllocation*) turnUdpAllocationWithServerSocket:(FMUdpSocket*)serverSocket virtualServerSocket:(FMIceLinkVirtualUdpSocket*)virtualServerSocket transactionId:(NSMutableData*)transactionId reservation:(NSMutableData*)reservation socket:(FMUdpSocket*)socket virtualSocket:(FMIceLinkVirtualUdpSocket*)virtualSocket clientAddress:(FMIceLinkTransportAddress*)clientAddress username:(NSString*)username realm:(NSString*)realm lifetime:(int)lifetime onReceive:(FMCallback*)onReceive onExpiresBlock:(void (^) (FMIceLinkTransportAddress*))onExpiresBlock;
- (FMIceLinkVirtualUdpSocket*) virtualServerSocket;
- (FMIceLinkVirtualUdpSocket*) virtualSocket;

@end


@class FMIceLinkVirtualTcpSocket;
@class FMTcpOutputArgs;

/// <summary>
/// Extensions for <see cref="FMTcpOutputArgs" />.
/// </summary>
#pragma clang diagnostic ignored "-Wshorten-64-to-32"
#pragma clang diagnostic ignored "-Wint-to-pointer-cast"

@interface FMTcpOutputArgs (FMIceLinkExtensions)

/// <summary>
/// Gets the virtual socket.
/// </summary>
/// <param name="args">The arguments.</param>
/// <returns></returns>
- (FMIceLinkVirtualTcpSocket*) getVirtualSocket;
/// <summary>
/// Gets the virtual socket.
/// </summary>
/// <param name="args">The arguments.</param>
/// <returns></returns>
+ (FMIceLinkVirtualTcpSocket*) getVirtualSocketWithArgs:(FMTcpOutputArgs*)args;
/// <summary>
/// Sets the virtual socket.
/// </summary>
/// <param name="args">The arguments.</param>
/// <param name="virtualSocket">The virtual socket.</param>
+ (void) setVirtualSocketWithArgs:(FMTcpOutputArgs*)args virtualSocket:(FMIceLinkVirtualTcpSocket*)virtualSocket;
/// <summary>
/// Sets the virtual socket.
/// </summary>
/// <param name="args">The arguments.</param>
/// <param name="virtualSocket">The virtual socket.</param>
- (void) setVirtualSocketWithVirtualSocket:(FMIceLinkVirtualTcpSocket*)virtualSocket;
/// <summary>
/// Sets the virtual socket.
/// </summary>
/// <param name="args">The arguments.</param>
/// <param name="virtualSocket">The virtual socket.</param>
- (void) setVirtualSocket:(FMIceLinkVirtualTcpSocket*)virtualSocket;

@end


@class FMIceLinkVirtualTcpSocket;
@class FMTcpAcceptSuccessArgs;

/// <summary>
/// Extensions for <see cref="FMTcpAcceptSuccessArgs" />.
/// </summary>
#pragma clang diagnostic ignored "-Wshorten-64-to-32"
#pragma clang diagnostic ignored "-Wint-to-pointer-cast"

@interface FMTcpAcceptSuccessArgs (FMIceLinkExtensions)

/// <summary>
/// Gets the virtual socket.
/// </summary>
/// <param name="args">The arguments.</param>
/// <returns></returns>
- (FMIceLinkVirtualTcpSocket*) getVirtualAcceptSocket;
/// <summary>
/// Gets the virtual socket.
/// </summary>
/// <param name="args">The arguments.</param>
/// <returns></returns>
+ (FMIceLinkVirtualTcpSocket*) getVirtualAcceptSocketWithArgs:(FMTcpAcceptSuccessArgs*)args;
/// <summary>
/// Sets the virtual socket.
/// </summary>
/// <param name="args">The arguments.</param>
/// <param name="virtualAcceptSocket">The accepted virtual socket.</param>
+ (void) setVirtualAcceptSocketWithArgs:(FMTcpAcceptSuccessArgs*)args virtualAcceptSocket:(FMIceLinkVirtualTcpSocket*)virtualAcceptSocket;
/// <summary>
/// Sets the virtual socket.
/// </summary>
/// <param name="args">The arguments.</param>
/// <param name="virtualAcceptSocket">The accepted virtual socket.</param>
- (void) setVirtualAcceptSocketWithVirtualAcceptSocket:(FMIceLinkVirtualTcpSocket*)virtualAcceptSocket;
/// <summary>
/// Sets the virtual socket.
/// </summary>
/// <param name="args">The arguments.</param>
/// <param name="virtualAcceptSocket">The accepted virtual socket.</param>
- (void) setVirtualAcceptSocket:(FMIceLinkVirtualTcpSocket*)virtualAcceptSocket;

@end


@class NSStringFMExtensions;
@class FMTimeoutTimer;
@class FMIceLinkVirtualAdapter;
@class FMTcpAcceptArgs;
@class FMTcpConnectArgs;
@class FMTcpReceiveArgs;
@class FMIceLinkVirtualPacket;
@class FMTcpSendArgs;
@class NSMutableDataFMExtensions;

/// <summary>
/// A virtual TCP socket.
/// </summary>
#pragma clang diagnostic ignored "-Wshorten-64-to-32"
#pragma clang diagnostic ignored "-Wint-to-pointer-cast"

@interface FMIceLinkVirtualTcpSocket : NSObject 

/// <summary>
/// Accepts a new socket synchronously.
/// </summary>
- (FMIceLinkVirtualTcpSocket*) accept;
/// <summary>
/// Accepts a new socket asynchronously.
/// </summary>
/// <param name="acceptArgs">The accept arguments.</param>
- (void) acceptAsyncWithAcceptArgs:(FMTcpAcceptArgs*)acceptArgs;
/// <summary>
/// Binds the socket to a local endpoint.
/// </summary>
/// <param name="ipAddress">The local IP address.</param>
/// <param name="port">The local port.</param>
- (void) bindWithIPAddress:(NSString*)ipAddress port:(int)port;
/// <summary>
/// Closes the socket.
/// </summary>
- (void) close;
/// <summary>
/// Connects to the specified IP address asynchronously.
/// </summary>
/// <param name="connectArgs">The connect arguments.</param>
- (void) connectAsyncWithConnectArgs:(FMTcpConnectArgs*)connectArgs;
/// <summary>
/// Connects to the specified IP address synchronously.
/// </summary>
- (void) connectWithIPAddress:(NSString*)ipAddress port:(int)port;
/// <summary>
/// Initializes a new instance of the <see cref="FMIceLinkVirtualTcpSocket" /> class.
/// </summary>
/// <param name="adapter">The virtual adapter.</param>
- (id) initWithAdapter:(FMIceLinkVirtualAdapter*)adapter;
/// <summary>
/// Gets a value indicating whether this instance is closed.
/// </summary>
- (bool) isClosed;
/// <summary>
/// Gets the local IP address.
/// </summary>
- (NSString*) localIPAddress;
/// <summary>
/// Gets the local port.
/// </summary>
- (int) localPort;
/// <summary>
/// Receives data asynchronously.
/// </summary>
/// <param name="receiveArgs">The receive arguments.</param>
- (void) receiveAsyncWithReceiveArgs:(FMTcpReceiveArgs*)receiveArgs;
/// <summary>
/// Receives data synchronously.
/// </summary>
/// <param name="timeout">The receive timeout.</param>
/// <returns>
/// The received packet.
/// </returns>
- (FMIceLinkVirtualPacket*) receiveWithTimeout:(int)timeout;
/// <summary>
/// Gets the remote IP address.
/// </summary>
- (NSString*) remoteIPAddress;
/// <summary>
/// Gets the remote port.
/// </summary>
- (int) remotePort;
/// <summary>
/// Sends data asynchronously.
/// </summary>
/// <param name="sendArgs">The send arguments.</param>
- (void) sendAsyncWithSendArgs:(FMTcpSendArgs*)sendArgs;
/// <summary>
/// Sends data synchronously.
/// </summary>
/// <param name="buffer">The buffer.</param>
- (void) sendWithBuffer:(NSMutableData*)buffer;
/// <summary>
/// Initializes a new instance of the <see cref="FMIceLinkVirtualTcpSocket" /> class.
/// </summary>
/// <param name="adapter">The virtual adapter.</param>
+ (FMIceLinkVirtualTcpSocket*) virtualTcpSocketWithAdapter:(FMIceLinkVirtualAdapter*)adapter;

@end


@class NSMutableArrayFMExtensions;
@class NSStringFMExtensions;

/// <summary>
/// A virtual network NAT.
/// </summary>
#pragma clang diagnostic ignored "-Wshorten-64-to-32"
#pragma clang diagnostic ignored "-Wint-to-pointer-cast"

@interface FMIceLinkVirtualNat : NSObject 

- (bool) addForwardingWithPort:(int)port internalIPAddress:(NSString*)internalIPAddress;
- (void) addMappingWithPort:(int*)port internalIPAddress:(NSString*)internalIPAddress internalPort:(int)internalPort externalIPAddress:(NSString*)externalIPAddress externalPort:(int)externalPort;
/// <summary>
/// Gets a NAT mapping.
/// </summary>
/// <param name="port">The local port.</param>
/// <param name="internalIPAddress">The internal IP address.</param>
/// <param name="internalPort">The internal port.</param>
/// <param name="externalIPAddress">The external IP address.</param>
/// <param name="externalPort">The external port.</param>
/// <returns><c>true</c> if a mapping exists; otherwise, <c>false</c>.</returns>
- (bool) getMappingWithPort:(int)port internalIPAddress:(NSString**)internalIPAddress internalPort:(int*)internalPort externalIPAddress:(NSString*)externalIPAddress externalPort:(int)externalPort;
/// <summary>
/// Initializes a new instance of the <see cref="FMIceLinkVirtualNat" /> class.
/// </summary>
/// <param name="mode">The NAT mode.</param>
- (id) initWithMode:(FMIceLinkVirtualNatMode)mode;
/// <summary>
/// Gets the NAT mappings.
/// </summary>
- (NSMutableArray*) mappings;
/// <summary>
/// Gets the NAT mode.
/// </summary>
- (FMIceLinkVirtualNatMode) mode;
- (bool) removeForwardingWithPort:(int)port;
/// <summary>
/// Sets the NAT mapping timeout.
/// </summary>
- (void) setTimeout:(int)value;
/// <summary>
/// Gets the NAT mapping timeout.
/// </summary>
- (int) timeout;
/// <summary>
/// Initializes a new instance of the <see cref="FMIceLinkVirtualNat" /> class.
/// </summary>
/// <param name="mode">The NAT mode.</param>
+ (FMIceLinkVirtualNat*) virtualNatWithMode:(FMIceLinkVirtualNatMode)mode;

@end


@class FMIceLinkPacketDeliveredArgs;
@class NSMutableDictionaryFMExtensions;
@class FMIceLinkVirtualNetwork;
@class FMCallback;
@class FMIceLinkVirtualPacket;
@class NSStringFMExtensions;

/// <summary>
/// A virtual network device.
/// </summary>
#pragma clang diagnostic ignored "-Wshorten-64-to-32"
#pragma clang diagnostic ignored "-Wint-to-pointer-cast"

@interface FMIceLinkVirtualDevice : NSObject 

- (FMCallback*) addPacketDeliveredWithValue:(FMCallback*)value;
- (FMCallback*) addPacketDelivered:(FMCallback*)value;
- (FMCallback*) addPacketDeliveredWithValueBlock:(void (^) (FMIceLinkPacketDeliveredArgs*))valueBlock;
- (FMCallback*) addPacketDeliveredBlock:(void (^) (FMIceLinkPacketDeliveredArgs*))valueBlock;
- (void) deliverWithPacket:(FMIceLinkVirtualPacket*)packet port:(int)port;
- (FMIceLinkVirtualPacket*) getDeliveryWithPort:(int)port;
/// <summary>
/// Initializes a new instance of the <see cref="FMIceLinkVirtualDevice" /> class.
/// </summary>
- (id) init;
/// <summary>
/// Initializes a new instance of the <see cref="FMIceLinkVirtualDevice" /> class.
/// </summary>
/// <param name="ipAddress1">The first byte of the device IP address.</param>
/// <param name="ipAddress2">The second byte of the device IP address.</param>
/// <param name="ipAddress3">The third byte of the device IP address.</param>
/// <param name="ipAddress4">The fourth byte of the device IP address.</param>
- (id) initWithIPAddress1:(int)ipAddress1 ipAddress2:(int)ipAddress2 ipAddress3:(int)ipAddress3 ipAddress4:(int)ipAddress4;
/// <summary>
/// Gets the device IP address as a string.
/// </summary>
- (NSString*) ipAddress;
/// <summary>
/// Gets the first byte of the device IP address.
/// </summary>
- (int) ipAddress1;
/// <summary>
/// Gets the second byte of the device IP address.
/// </summary>
- (int) ipAddress2;
/// <summary>
/// Gets the third byte of the device IP address.
/// </summary>
- (int) ipAddress3;
/// <summary>
/// Gets the fourth byte of the device IP address.
/// </summary>
- (int) ipAddress4;
/// <summary>
/// Gets the virtual network to which this device belongs.
/// </summary>
- (FMIceLinkVirtualNetwork*) network;
- (void) removePacketDeliveredWithValue:(FMCallback*)value;
- (void) removePacketDelivered:(FMCallback*)value;
- (void) setAddressAndNetworkWithIPAddress1:(int)ipAddress1 ipAddress2:(int)ipAddress2 ipAddress3:(int)ipAddress3 ipAddress4:(int)ipAddress4 network:(FMIceLinkVirtualNetwork*)network;
- (void) setIPAddress1:(int)value;
- (void) setIPAddress2:(int)value;
- (void) setIPAddress3:(int)value;
- (void) setIPAddress4:(int)value;
- (void) setNetwork:(FMIceLinkVirtualNetwork*)value;
/// <summary>
/// Gets whether to use DHCP to assign an IP address to this device.
/// </summary>
- (bool) useDhcp;
/// <summary>
/// Initializes a new instance of the <see cref="FMIceLinkVirtualDevice" /> class.
/// </summary>
+ (FMIceLinkVirtualDevice*) virtualDevice;
/// <summary>
/// Initializes a new instance of the <see cref="FMIceLinkVirtualDevice" /> class.
/// </summary>
/// <param name="ipAddress1">The first byte of the device IP address.</param>
/// <param name="ipAddress2">The second byte of the device IP address.</param>
/// <param name="ipAddress3">The third byte of the device IP address.</param>
/// <param name="ipAddress4">The fourth byte of the device IP address.</param>
+ (FMIceLinkVirtualDevice*) virtualDeviceWithIPAddress1:(int)ipAddress1 ipAddress2:(int)ipAddress2 ipAddress3:(int)ipAddress3 ipAddress4:(int)ipAddress4;

@end



/// <summary>
/// A virtual network adapter.
/// </summary>
#pragma clang diagnostic ignored "-Wshorten-64-to-32"
#pragma clang diagnostic ignored "-Wint-to-pointer-cast"

@interface FMIceLinkVirtualAdapter : FMIceLinkVirtualDevice 

- (id) init;
+ (FMIceLinkVirtualAdapter*) virtualAdapter;

@end



/// <summary>
/// Arguments for the packet-delivered event.
/// </summary>
#pragma clang diagnostic ignored "-Wshorten-64-to-32"
#pragma clang diagnostic ignored "-Wint-to-pointer-cast"

@interface FMIceLinkPacketDeliveredArgs : NSObject 

- (id) init;
+ (FMIceLinkPacketDeliveredArgs*) packetDeliveredArgs;
/// <summary>
/// Gets the port on which the packet was received.
/// </summary>
- (int) port;
- (void) setPort:(int)value;

@end


@class NSMutableArrayFMExtensions;
@class FMIceLinkTransportAddress;
@class FMCallback;
@class FMTimeoutTimer;
@class NSStringFMExtensions;

/// <summary>
/// A virtual network NAT mapping.
/// </summary>
#pragma clang diagnostic ignored "-Wshorten-64-to-32"
#pragma clang diagnostic ignored "-Wint-to-pointer-cast"

@interface FMIceLinkVirtualNatMapping : NSObject 

- (FMIceLinkVirtualNatMapping*) addExternalPermissionWithExternalAddress:(FMIceLinkTransportAddress*)externalAddress natMode:(FMIceLinkVirtualNatMode)natMode;
- (bool) checkExternalPermissionWithExternalAddress:(FMIceLinkTransportAddress*)externalAddress natMode:(FMIceLinkVirtualNatMode)natMode;
/// <summary>
/// Gets the address(es) of the external device(s).
/// </summary>
- (NSMutableArray*) externalAddresses;
/// <summary>
/// Initializes a new instance of the <see cref="FMIceLinkVirtualNatMapping" /> class.
/// </summary>
/// <param name="timeout">The NAT mapping timeout.</param>
/// <param name="timeoutCallback">The callback to invoke when a NAT mapping times out.</param>
- (id) initWithTimeout:(int)timeout timeoutCallback:(FMCallback*)timeoutCallback;
/// <summary>
/// Initializes a new instance of the <see cref="FMIceLinkVirtualNatMapping" /> class.
/// </summary>
/// <param name="timeout">The NAT mapping timeout.</param>
/// <param name="timeoutCallback">The callback to invoke when a NAT mapping times out.</param>
- (id) initWithTimeout:(int)timeout timeoutCallbackBlock:(void (^) (FMIceLinkVirtualNatMapping*))timeoutCallbackBlock;
/// <summary>
/// Gets the address of the internal device.
/// </summary>
- (FMIceLinkTransportAddress*) internalAddress;
/// <summary>
/// Gets whether this is a forwarded mapping.
/// </summary>
- (bool) isForwarding;
- (bool) keepAlive;
/// <summary>
/// Gets the mapped port.
/// </summary>
- (int) port;
- (bool) removeExternalPermissionWithExternalAddress:(FMIceLinkTransportAddress*)externalAddress natMode:(FMIceLinkVirtualNatMode)natMode;
/// <summary>
/// Sets the address of the internal device.
/// </summary>
- (void) setInternalAddress:(FMIceLinkTransportAddress*)value;
/// <summary>
/// Sets whether this is a forwarded mapping.
/// </summary>
- (void) setIsForwarding:(bool)value;
/// <summary>
/// Sets the mapped port.
/// </summary>
- (void) setPort:(int)value;
/// <summary>
/// Formats this mapping as a string.
/// </summary>
- (NSString*) toString;
/// <summary>
/// Formats this mapping as a string.
/// </summary>
- (NSString*) description;
- (bool) tryReuseWithInternalAddress:(FMIceLinkTransportAddress*)internalAddress externalAddress:(FMIceLinkTransportAddress*)externalAddress natMode:(FMIceLinkVirtualNatMode)natMode;
/// <summary>
/// Initializes a new instance of the <see cref="FMIceLinkVirtualNatMapping" /> class.
/// </summary>
/// <param name="timeout">The NAT mapping timeout.</param>
/// <param name="timeoutCallback">The callback to invoke when a NAT mapping times out.</param>
+ (FMIceLinkVirtualNatMapping*) virtualNatMappingWithTimeout:(int)timeout timeoutCallback:(FMCallback*)timeoutCallback;
/// <summary>
/// Initializes a new instance of the <see cref="FMIceLinkVirtualNatMapping" /> class.
/// </summary>
/// <param name="timeout">The NAT mapping timeout.</param>
/// <param name="timeoutCallback">The callback to invoke when a NAT mapping times out.</param>
+ (FMIceLinkVirtualNatMapping*) virtualNatMappingWithTimeout:(int)timeout timeoutCallbackBlock:(void (^) (FMIceLinkVirtualNatMapping*))timeoutCallbackBlock;

@end


@class NSMutableArrayFMExtensions;
@class NSMutableDictionaryFMExtensions;
@class FMIceLinkVirtualNat;
@class FMIceLinkVirtualDevice;
@class NSStringFMExtensions;
@class FMIceLinkVirtualPacket;

/// <summary>
/// A virtual network.
/// </summary>
#pragma clang diagnostic ignored "-Wshorten-64-to-32"
#pragma clang diagnostic ignored "-Wint-to-pointer-cast"

@interface FMIceLinkVirtualNetwork : FMIceLinkVirtualDevice 

/// <summary>
/// Adds a device to the network.
/// </summary>
/// <param name="device">The device to add.</param>
- (void) addDeviceWithDevice:(FMIceLinkVirtualDevice*)device;
/// <summary>
/// Adds a device to the network.
/// </summary>
/// <param name="device">The device to add.</param>
- (void) addDevice:(FMIceLinkVirtualDevice*)device;
/// <summary>
/// Adds the forwarding.
/// </summary>
/// <param name="port">The forwarded port.</param>
/// <param name="ipAddress">The IP address to forward.</param>
- (void) addForwardingWithPort:(int)port ipAddress:(NSString*)ipAddress;
/// <summary>
/// Gets a list of connected devices.
/// </summary>
- (NSMutableArray*) devices;
/// <summary>
/// Gets the first byte of the DHCP range to use when assigning IP addresses.
/// </summary>
- (int) dhcpIPAddress1;
/// <summary>
/// Gets the second byte of the DHCP range to use when assigning IP addresses.
/// </summary>
- (int) dhcpIPAddress2;
/// <summary>
/// Gets the third byte of the DHCP range to use when assigning IP addresses.
/// </summary>
- (int) dhcpIPAddress3;
/// <summary>
/// Gets the ending fourth byte of the DHCP range to use when assigning IP addresses.
/// </summary>
- (int) dhcpIPAddress4End;
/// <summary>
/// Gets the starting fourth byte of the DHCP range to use when assigning IP addresses.
/// </summary>
- (int) dhcpIPAddress4Start;
/// <summary>
/// Initializes a new instance of the <see cref="FMIceLinkVirtualNetwork" /> class.
/// </summary>
/// <param name="natMode">The NAT mode.</param>
/// <param name="dhcpAddress1">The first byte of the DHCP range to use when assigning IP addresses.</param>
/// <param name="dhcpAddress2">The second byte of the DHCP range to use when assigning IP addresses.</param>
/// <param name="dhcpAddress3">The third byte of the DHCP range to use when assigning IP addresses.</param>
- (id) initWithNatMode:(FMIceLinkVirtualNatMode)natMode dhcpAddress1:(int)dhcpAddress1 dhcpAddress2:(int)dhcpAddress2 dhcpAddress3:(int)dhcpAddress3;
/// <summary>
/// Gets the first byte of the device's internal IP address.
/// </summary>
- (int) internalIPAddress1;
/// <summary>
/// Gets the second byte of the device's internal IP address.
/// </summary>
- (int) internalIPAddress2;
/// <summary>
/// Gets the third byte of the device's internal IP address.
/// </summary>
- (int) internalIPAddress3;
/// <summary>
/// Gets the fourth byte of the device's internal IP address.
/// </summary>
- (int) internalIPAddress4;
/// <summary>
/// Gets the NAT.
/// </summary>
- (FMIceLinkVirtualNat*) nat;
/// <summary>
/// Gets the NAT mode.
/// </summary>
- (FMIceLinkVirtualNatMode) natMode;
/// <summary>
/// Removes a device from the network.
/// </summary>
/// <param name="device">The device to remove.</param>
/// <returns><c>true</c> if the device was removed; otherwise, <c>false</c></returns>
- (bool) removeDeviceWithDevice:(FMIceLinkVirtualDevice*)device;
/// <summary>
/// Removes a device from the network.
/// </summary>
/// <param name="device">The device to remove.</param>
/// <returns><c>true</c> if the device was removed; otherwise, <c>false</c></returns>
- (bool) removeDevice:(FMIceLinkVirtualDevice*)device;
/// <summary>
/// Removes a forwarding.
/// </summary>
/// <param name="port">The forwarded port.</param>
- (void) removeForwardingWithPort:(int)port;
- (bool) sendWithPacket:(FMIceLinkVirtualPacket*)packet destinationIPAddress:(NSString*)destinationIPAddress destinationPort:(int)destinationPort;
- (void) setInternalIPAddress1:(int)value;
- (void) setInternalIPAddress2:(int)value;
- (void) setInternalIPAddress3:(int)value;
- (void) setInternalIPAddress4:(int)value;
/// <summary>
/// Initializes a new instance of the <see cref="FMIceLinkVirtualNetwork" /> class.
/// </summary>
/// <param name="natMode">The NAT mode.</param>
/// <param name="dhcpAddress1">The first byte of the DHCP range to use when assigning IP addresses.</param>
/// <param name="dhcpAddress2">The second byte of the DHCP range to use when assigning IP addresses.</param>
/// <param name="dhcpAddress3">The third byte of the DHCP range to use when assigning IP addresses.</param>
+ (FMIceLinkVirtualNetwork*) virtualNetworkWithNatMode:(FMIceLinkVirtualNatMode)natMode dhcpAddress1:(int)dhcpAddress1 dhcpAddress2:(int)dhcpAddress2 dhcpAddress3:(int)dhcpAddress3;

@end


@class NSMutableDataFMExtensions;
@class NSStringFMExtensions;

/// <summary>
/// A virtual network packet.
/// </summary>
#pragma clang diagnostic ignored "-Wshorten-64-to-32"
#pragma clang diagnostic ignored "-Wint-to-pointer-cast"

@interface FMIceLinkVirtualPacket : NSObject 

- (id) init;
/// <summary>
/// Gets the data payload.
/// </summary>
- (NSMutableData*) payload;
/// <summary>
/// Sets the data payload.
/// </summary>
- (void) setPayload:(NSMutableData*)value;
/// <summary>
/// Sets the source IP address.
/// </summary>
- (void) setSourceIPAddress:(NSString*)value;
/// <summary>
/// Sets the source port.
/// </summary>
- (void) setSourcePort:(int)value;
/// <summary>
/// Gets the source IP address.
/// </summary>
- (NSString*) sourceIPAddress;
/// <summary>
/// Gets the source port.
/// </summary>
- (int) sourcePort;
+ (FMIceLinkVirtualPacket*) virtualPacket;

@end


@class FMIceLinkVirtualUdpSocket;
@class FMUdpOutputArgs;

/// <summary>
/// Virtual UDP socket extensions.
/// </summary>
#pragma clang diagnostic ignored "-Wshorten-64-to-32"
#pragma clang diagnostic ignored "-Wint-to-pointer-cast"

@interface FMUdpOutputArgs (FMIceLinkExtensions)

/// <summary>
/// Gets the virtual socket.
/// </summary>
/// <param name="args">The arguments.</param>
/// <returns></returns>
- (FMIceLinkVirtualUdpSocket*) getVirtualSocket;
/// <summary>
/// Gets the virtual socket.
/// </summary>
/// <param name="args">The arguments.</param>
/// <returns></returns>
+ (FMIceLinkVirtualUdpSocket*) getVirtualSocketWithArgs:(FMUdpOutputArgs*)args;
/// <summary>
/// Sets the virtual socket.
/// </summary>
/// <param name="args">The arguments.</param>
/// <param name="virtualSocket">The virtual socket.</param>
+ (void) setVirtualSocketWithArgs:(FMUdpOutputArgs*)args virtualSocket:(FMIceLinkVirtualUdpSocket*)virtualSocket;
/// <summary>
/// Sets the virtual socket.
/// </summary>
/// <param name="args">The arguments.</param>
/// <param name="virtualSocket">The virtual socket.</param>
- (void) setVirtualSocketWithVirtualSocket:(FMIceLinkVirtualUdpSocket*)virtualSocket;
/// <summary>
/// Sets the virtual socket.
/// </summary>
/// <param name="args">The arguments.</param>
/// <param name="virtualSocket">The virtual socket.</param>
- (void) setVirtualSocket:(FMIceLinkVirtualUdpSocket*)virtualSocket;

@end


@class NSStringFMExtensions;
@class FMTimeoutTimer;
@class FMIceLinkVirtualAdapter;
@class FMUdpReceiveArgs;
@class FMIceLinkVirtualPacket;
@class FMUdpSendArgs;
@class NSMutableDataFMExtensions;

/// <summary>
/// A virtual UDP socket.
/// </summary>
#pragma clang diagnostic ignored "-Wshorten-64-to-32"
#pragma clang diagnostic ignored "-Wint-to-pointer-cast"

@interface FMIceLinkVirtualUdpSocket : NSObject 

/// <summary>
/// Binds the socket to a local endpoint.
/// </summary>
/// <param name="ipAddress">The local IP address.</param>
/// <param name="port">The local port.</param>
- (void) bindWithIPAddress:(NSString*)ipAddress port:(int)port;
/// <summary>
/// Closes the socket.
/// </summary>
- (void) close;
/// <summary>
/// Initializes a new instance of the <see cref="FMIceLinkVirtualUdpSocket" /> class.
/// </summary>
/// <param name="adapter">The virtual adapter.</param>
- (id) initWithAdapter:(FMIceLinkVirtualAdapter*)adapter;
/// <summary>
/// Gets a value indicating whether this instance is closed.
/// </summary>
- (bool) isClosed;
/// <summary>
/// Gets the local IP address.
/// </summary>
- (NSString*) localIPAddress;
/// <summary>
/// Gets the local port.
/// </summary>
- (int) localPort;
/// <summary>
/// Receives data asynchronously.
/// </summary>
/// <param name="receiveArgs">The receive arguments.</param>
- (void) receiveAsyncWithReceiveArgs:(FMUdpReceiveArgs*)receiveArgs;
/// <summary>
/// Receives data synchronously.
/// </summary>
/// <param name="timeout">The receive timeout.</param>
/// <returns>
/// The received packet.
/// </returns>
- (FMIceLinkVirtualPacket*) receiveWithTimeout:(int)timeout;
/// <summary>
/// Sends data asynchronously.
/// </summary>
/// <param name="sendArgs">The send arguments.</param>
- (void) sendAsyncWithSendArgs:(FMUdpSendArgs*)sendArgs;
/// <summary>
/// Sends data synchronously.
/// </summary>
/// <param name="buffer">The buffer.</param>
/// <param name="ipAddress">The remote IP address.</param>
/// <param name="port">The remote port.</param>
/// <returns>The number of bytes sent.</returns>
- (int) sendWithBuffer:(NSMutableData*)buffer ipAddress:(NSString*)ipAddress port:(int)port;
/// <summary>
/// Initializes a new instance of the <see cref="FMIceLinkVirtualUdpSocket" /> class.
/// </summary>
/// <param name="adapter">The virtual adapter.</param>
+ (FMIceLinkVirtualUdpSocket*) virtualUdpSocketWithAdapter:(FMIceLinkVirtualAdapter*)adapter;

@end


@class NSMutableArrayFMExtensions;

#pragma clang diagnostic ignored "-Wshorten-64-to-32"
#pragma clang diagnostic ignored "-Wint-to-pointer-cast"

@interface FMIceLinkX501AttributeType : NSObject 

+ (NSMutableArray*) aliasedObjectName;
+ (bool) areEqualWithType1:(NSMutableArray*)type1 type2:(NSMutableArray*)type2;
+ (NSMutableArray*) commonName;
+ (NSMutableArray*) countryName;
+ (NSMutableArray*) description;
- (id) init;
+ (NSMutableArray*) knowledgeInformation;
+ (NSMutableArray*) localityName;
+ (NSMutableArray*) objectClass;
+ (NSMutableArray*) organizationName;
+ (NSMutableArray*) organizationUnitName;
+ (NSMutableArray*) serialNumber;
+ (NSMutableArray*) stateOrProvinceName;
+ (NSMutableArray*) streetAddress;
+ (NSMutableArray*) surname;
+ (NSMutableArray*) title;
+ (FMIceLinkX501AttributeType*) x501AttributeType;

@end


@class NSMutableArrayFMExtensions;
@class NSMutableDataFMExtensions;
@class FMIceLinkX501DirectoryString;
@class NSStringFMExtensions;
@class FMIceLinkASN1Any;
@class FMIceLinkASN1Sequence;

#pragma clang diagnostic ignored "-Wshorten-64-to-32"
#pragma clang diagnostic ignored "-Wint-to-pointer-cast"

@interface FMIceLinkX501Attribute : NSObject 

- (NSMutableArray*) attributeType;
- (NSMutableData*) attributeValue;
- (FMIceLinkX501DirectoryString*) attributeValueAsDirectoryString;
- (NSString*) attributeValueAsString;
+ (FMIceLinkX501Attribute*) fromAsn1WithAny:(FMIceLinkASN1Any*)any;
- (id) init;
- (id) initWithAttributeType:(NSMutableArray*)attributeType attributeValue:(NSMutableData*)attributeValue;
- (void) setAttributeType:(NSMutableArray*)value;
- (void) setAttributeValue:(NSMutableData*)value;
- (FMIceLinkASN1Sequence*) toAsn1;
+ (FMIceLinkX501Attribute*) x501Attribute;
+ (FMIceLinkX501Attribute*) x501AttributeWithAttributeType:(NSMutableArray*)attributeType attributeValue:(NSMutableData*)attributeValue;
+ (FMIceLinkX501Attribute*) x501AttributeWithType:(NSMutableArray*)attributeType attributeValue:(NSMutableData*)attributeValue;

@end


@class NSStringFMExtensions;
@class FMIceLinkASN1Any;

#pragma clang diagnostic ignored "-Wshorten-64-to-32"
#pragma clang diagnostic ignored "-Wint-to-pointer-cast"

@interface FMIceLinkX501DirectoryString : NSObject 

+ (FMIceLinkX501DirectoryString*) fromAsn1WithAny:(FMIceLinkASN1Any*)any;
- (id) init;
- (id) initWithValue:(NSString*)value;
- (void) setValue:(NSString*)value;
- (FMIceLinkASN1Any*) toAsn1Bmp;
- (FMIceLinkASN1Any*) toAsn1Printable;
- (FMIceLinkASN1Any*) toAsn1Universal;
- (FMIceLinkASN1Any*) toAsn1Utf8;
- (NSString*) value;
+ (FMIceLinkX501DirectoryString*) x501DirectoryString;
+ (FMIceLinkX501DirectoryString*) x501DirectoryStringWithValue:(NSString*)value;

@end


@class NSMutableArrayFMExtensions;
@class FMIceLinkASN1Any;
@class FMIceLinkX501Attribute;

#pragma clang diagnostic ignored "-Wshorten-64-to-32"
#pragma clang diagnostic ignored "-Wint-to-pointer-cast"

@interface FMIceLinkX501Name : NSObject 

+ (FMIceLinkX501Name*) fromAsn1WithAny:(FMIceLinkASN1Any*)any;
- (FMIceLinkX501Attribute*) getAttributeWithAttributeType:(NSMutableArray*)attributeType;
- (FMIceLinkX501Attribute*) getAttributeWithType:(NSMutableArray*)attributeType;
- (id) init;
- (id) initWithRdnSequence:(NSMutableArray*)rdnSequence;
- (NSMutableArray*) rdnSequence;
- (void) setRdnSequence:(NSMutableArray*)value;
- (FMIceLinkASN1Any*) toAsn1;
+ (FMIceLinkX501Name*) x501Name;
+ (FMIceLinkX501Name*) x501NameWithRdnSequence:(NSMutableArray*)rdnSequence;

@end


@class NSMutableArrayFMExtensions;
@class FMIceLinkASN1Any;
@class FMIceLinkX501Attribute;
@class FMIceLinkASN1Set;

#pragma clang diagnostic ignored "-Wshorten-64-to-32"
#pragma clang diagnostic ignored "-Wint-to-pointer-cast"

@interface FMIceLinkX501RelativeDistinguishedName : NSObject 

- (NSMutableArray*) attributes;
+ (FMIceLinkX501RelativeDistinguishedName*) fromAsn1WithAny:(FMIceLinkASN1Any*)any;
- (FMIceLinkX501Attribute*) getAttributeWithAttributeType:(NSMutableArray*)attributeType;
- (FMIceLinkX501Attribute*) getAttributeWithType:(NSMutableArray*)attributeType;
- (id) init;
- (id) initWithAttributeTypeAndValues:(NSMutableArray*)attributeTypeAndValues;
- (void) setAttributes:(NSMutableArray*)value;
- (FMIceLinkASN1Set*) toAsn1;
+ (FMIceLinkX501RelativeDistinguishedName*) x501RelativeDistinguishedName;
+ (FMIceLinkX501RelativeDistinguishedName*) x501RelativeDistinguishedNameWithAttributeTypeAndValues:(NSMutableArray*)attributeTypeAndValues;

@end


@class NSMutableArrayFMExtensions;
@class NSMutableDataFMExtensions;
@class FMIceLinkASN1Any;
@class FMIceLinkASN1Sequence;

#pragma clang diagnostic ignored "-Wshorten-64-to-32"
#pragma clang diagnostic ignored "-Wint-to-pointer-cast"

@interface FMIceLinkX509AlgorithmIdentifier : NSObject 

- (NSMutableArray*) algorithm;
+ (bool) algorithmsAreEqualWithAi1:(FMIceLinkX509AlgorithmIdentifier*)ai1 ai2:(FMIceLinkX509AlgorithmIdentifier*)ai2;
+ (bool) areEqualWithAi1:(FMIceLinkX509AlgorithmIdentifier*)ai1 ai2:(FMIceLinkX509AlgorithmIdentifier*)ai2;
+ (FMIceLinkX509AlgorithmIdentifier*) dsaWithSha1;
+ (FMIceLinkX509AlgorithmIdentifier*) fromAsn1WithAny:(FMIceLinkASN1Any*)any;
- (id) init;
- (id) initWithAlgorithm:(NSMutableArray*)algorithm;
- (id) initWithAlgorithm:(NSMutableArray*)algorithm parameters:(NSMutableData*)parameters;
+ (FMIceLinkX509AlgorithmIdentifier*) md2WithRsaEncryption;
+ (FMIceLinkX509AlgorithmIdentifier*) md5WithRsaEncryption;
- (NSMutableData*) parameters;
+ (bool) parametersAreEqualWithAi1:(FMIceLinkX509AlgorithmIdentifier*)ai1 ai2:(FMIceLinkX509AlgorithmIdentifier*)ai2;
+ (FMIceLinkX509AlgorithmIdentifier*) rsaEncryption;
- (void) setAlgorithm:(NSMutableArray*)value;
- (void) setParameters:(NSMutableData*)value;
+ (FMIceLinkX509AlgorithmIdentifier*) sha1WithRsaEncryption;
+ (FMIceLinkX509AlgorithmIdentifier*) sha256WithRsaEncryption;
+ (FMIceLinkX509AlgorithmIdentifier*) sha384WithRsaEncryption;
+ (FMIceLinkX509AlgorithmIdentifier*) sha512WithRsaEncryption;
- (FMIceLinkASN1Sequence*) toAsn1;
+ (FMIceLinkX509AlgorithmIdentifier*) x509AlgorithmIdentifier;
+ (FMIceLinkX509AlgorithmIdentifier*) x509AlgorithmIdentifierWithAlgorithm:(NSMutableArray*)algorithm;
+ (FMIceLinkX509AlgorithmIdentifier*) x509AlgorithmIdentifierWithAlgorithm:(NSMutableArray*)algorithm parameters:(NSMutableData*)parameters;

@end


@class FMIceLinkX509TbsCertificate;
@class NSMutableDataFMExtensions;
@class FMIceLinkX509AlgorithmIdentifier;
@class FMIceLinkASN1Any;
@class NSStringFMExtensions;
@class FMIceLinkASN1Sequence;

#pragma clang diagnostic ignored "-Wshorten-64-to-32"
#pragma clang diagnostic ignored "-Wint-to-pointer-cast"

@interface FMIceLinkX509Certificate : NSObject 

- (FMIceLinkX509TbsCertificate*) certificate;
+ (FMIceLinkX509Certificate*) fromAsn1WithAny:(FMIceLinkASN1Any*)any;
- (NSMutableData*) getSha1Fingerprint;
- (NSString*) getSha1FingerprintString;
- (NSMutableData*) getSha256Fingerprint;
- (NSString*) getSha256FingerprintString;
- (id) init;
- (void) setCertificate:(FMIceLinkX509TbsCertificate*)value;
- (void) setSignature:(NSMutableData*)value;
- (void) setSignatureAlgorithm:(FMIceLinkX509AlgorithmIdentifier*)value;
- (NSMutableData*) signature;
- (FMIceLinkX509AlgorithmIdentifier*) signatureAlgorithm;
- (FMIceLinkASN1Sequence*) toAsn1;
+ (FMIceLinkX509Certificate*) x509Certificate;

@end


@class NSMutableArrayFMExtensions;
@class NSMutableDataFMExtensions;
@class FMIceLinkASN1Any;
@class FMIceLinkASN1Sequence;

#pragma clang diagnostic ignored "-Wshorten-64-to-32"
#pragma clang diagnostic ignored "-Wint-to-pointer-cast"

@interface FMIceLinkX509Extension : FMIceLinkASN1Sequence 

- (bool) critical;
- (NSMutableArray*) extensionId;
- (NSMutableData*) extensionValue;
+ (FMIceLinkX509Extension*) fromAsn1WithAny:(FMIceLinkASN1Any*)any;
- (id) init;
- (id) initWithExtensionId:(NSMutableArray*)extensionId extensionValue:(NSMutableData*)extensionValue;
- (id) initWithExtensionId:(NSMutableArray*)extensionId extensionValue:(NSMutableData*)extensionValue critical:(bool)critical;
- (void) setCritical:(bool)value;
- (void) setExtensionId:(NSMutableArray*)value;
- (void) setExtensionValue:(NSMutableData*)value;
- (FMIceLinkASN1Sequence*) toAsn1;
+ (FMIceLinkX509Extension*) x509Extension;
+ (FMIceLinkX509Extension*) x509ExtensionWithExtensionId:(NSMutableArray*)extensionId extensionValue:(NSMutableData*)extensionValue;
+ (FMIceLinkX509Extension*) x509ExtensionWithId:(NSMutableArray*)extensionId extensionValue:(NSMutableData*)extensionValue;
+ (FMIceLinkX509Extension*) x509ExtensionWithExtensionId:(NSMutableArray*)extensionId extensionValue:(NSMutableData*)extensionValue critical:(bool)critical;
+ (FMIceLinkX509Extension*) x509ExtensionWithId:(NSMutableArray*)extensionId extensionValue:(NSMutableData*)extensionValue critical:(bool)critical;

@end


@class NSMutableArrayFMExtensions;
@class FMIceLinkASN1Any;
@class FMIceLinkASN1Sequence;

#pragma clang diagnostic ignored "-Wshorten-64-to-32"
#pragma clang diagnostic ignored "-Wint-to-pointer-cast"

@interface FMIceLinkX509Extensions : NSObject 

- (NSMutableArray*) extensions;
+ (FMIceLinkX509Extensions*) fromAsn1WithAny:(FMIceLinkASN1Any*)any;
- (id) init;
- (id) initWithExtensions:(NSMutableArray*)extensions;
- (void) setExtensions:(NSMutableArray*)value;
- (FMIceLinkASN1Sequence*) toAsn1;
+ (FMIceLinkX509Extensions*) x509Extensions;
+ (FMIceLinkX509Extensions*) x509ExtensionsWithExtensions:(NSMutableArray*)extensions;
+ (FMIceLinkX509Extensions*) x509Extensions:(NSMutableArray*)extensions;

@end


@class NSMutableDataFMExtensions;
@class FMIceLinkASN1Any;
@class FMIceLinkASN1Sequence;

#pragma clang diagnostic ignored "-Wshorten-64-to-32"
#pragma clang diagnostic ignored "-Wint-to-pointer-cast"

@interface FMIceLinkX509RsaPrivateKey : NSObject 

- (NSMutableData*) coefficient;
- (NSMutableData*) exponent1;
- (NSMutableData*) exponent2;
+ (FMIceLinkX509RsaPrivateKey*) fromAsn1WithAny:(FMIceLinkASN1Any*)any;
- (id) init;
- (id) initWithModulus:(NSMutableData*)modulus publicExponent:(NSMutableData*)publicExponent privateExponent:(NSMutableData*)privateExponent prime1:(NSMutableData*)prime1 prime2:(NSMutableData*)prime2 exponent1:(NSMutableData*)exponent1 exponent2:(NSMutableData*)exponent2 coefficient:(NSMutableData*)coefficient;
- (NSMutableData*) modulus;
- (NSMutableData*) prime1;
- (NSMutableData*) prime2;
- (NSMutableData*) privateExponent;
- (NSMutableData*) publicExponent;
- (void) setCoefficient:(NSMutableData*)value;
- (void) setExponent1:(NSMutableData*)value;
- (void) setExponent2:(NSMutableData*)value;
- (void) setModulus:(NSMutableData*)value;
- (void) setPrime1:(NSMutableData*)value;
- (void) setPrime2:(NSMutableData*)value;
- (void) setPrivateExponent:(NSMutableData*)value;
- (void) setPublicExponent:(NSMutableData*)value;
- (void) setVersion:(int)value;
- (FMIceLinkASN1Sequence*) toAsn1;
- (int) version;
+ (FMIceLinkX509RsaPrivateKey*) x509RsaPrivateKey;
+ (FMIceLinkX509RsaPrivateKey*) x509RsaPrivateKeyWithModulus:(NSMutableData*)modulus publicExponent:(NSMutableData*)publicExponent privateExponent:(NSMutableData*)privateExponent prime1:(NSMutableData*)prime1 prime2:(NSMutableData*)prime2 exponent1:(NSMutableData*)exponent1 exponent2:(NSMutableData*)exponent2 coefficient:(NSMutableData*)coefficient;

@end


@class NSMutableDataFMExtensions;
@class FMIceLinkASN1Any;
@class FMIceLinkASN1Sequence;

#pragma clang diagnostic ignored "-Wshorten-64-to-32"
#pragma clang diagnostic ignored "-Wint-to-pointer-cast"

@interface FMIceLinkX509RsaPublicKey : NSObject 

- (NSMutableData*) exponent;
+ (FMIceLinkX509RsaPublicKey*) fromAsn1WithAny:(FMIceLinkASN1Any*)any;
- (id) init;
- (id) initWithModulus:(NSMutableData*)modulus exponent:(NSMutableData*)exponent;
- (NSMutableData*) modulus;
- (void) setExponent:(NSMutableData*)value;
- (void) setModulus:(NSMutableData*)value;
- (FMIceLinkASN1Sequence*) toAsn1;
+ (FMIceLinkX509RsaPublicKey*) x509RsaPublicKey;
+ (FMIceLinkX509RsaPublicKey*) x509RsaPublicKeyWithModulus:(NSMutableData*)modulus exponent:(NSMutableData*)exponent;

@end


@class FMIceLinkX509AlgorithmIdentifier;
@class NSMutableDataFMExtensions;
@class FMIceLinkASN1Any;
@class FMIceLinkASN1Sequence;

#pragma clang diagnostic ignored "-Wshorten-64-to-32"
#pragma clang diagnostic ignored "-Wint-to-pointer-cast"

@interface FMIceLinkX509SubjectPublicKeyInfo : NSObject 

- (FMIceLinkX509AlgorithmIdentifier*) algorithm;
+ (FMIceLinkX509SubjectPublicKeyInfo*) fromAsn1WithAny:(FMIceLinkASN1Any*)any;
- (id) init;
- (void) setAlgorithm:(FMIceLinkX509AlgorithmIdentifier*)value;
- (void) setSubjectPublicKey:(NSMutableData*)value;
- (NSMutableData*) subjectPublicKey;
- (FMIceLinkASN1Sequence*) toAsn1;
+ (FMIceLinkX509SubjectPublicKeyInfo*) x509SubjectPublicKeyInfo;

@end


@class FMIceLinkX509Extensions;
@class FMIceLinkX501Name;
@class NSMutableDataFMExtensions;
@class FMIceLinkX509AlgorithmIdentifier;
@class FMIceLinkASN1Any;
@class FMIceLinkX509SubjectPublicKeyInfo;
@class FMIceLinkX509Validity;
@class FMIceLinkASN1Sequence;

#pragma clang diagnostic ignored "-Wshorten-64-to-32"
#pragma clang diagnostic ignored "-Wint-to-pointer-cast"

@interface FMIceLinkX509TbsCertificate : NSObject 

- (FMIceLinkX509Extensions*) extensions;
+ (FMIceLinkX509TbsCertificate*) fromAsn1WithAny:(FMIceLinkASN1Any*)any;
- (id) init;
- (FMIceLinkX501Name*) issuer;
- (NSMutableData*) issuerUniqueId;
- (bool) missingVersion;
- (NSMutableData*) serialNumber;
- (void) setExtensions:(FMIceLinkX509Extensions*)value;
- (void) setIssuer:(FMIceLinkX501Name*)value;
- (void) setIssuerUniqueId:(NSMutableData*)value;
- (void) setMissingVersion:(bool)value;
- (void) setSerialNumber:(NSMutableData*)value;
- (void) setSignatureAlgorithm:(FMIceLinkX509AlgorithmIdentifier*)value;
- (void) setSubject:(FMIceLinkX501Name*)value;
- (void) setSubjectPublicKeyInfo:(FMIceLinkX509SubjectPublicKeyInfo*)value;
- (void) setSubjectUniqueId:(NSMutableData*)value;
- (void) setValidity:(FMIceLinkX509Validity*)value;
- (void) setVersion:(int)value;
- (FMIceLinkX509AlgorithmIdentifier*) signatureAlgorithm;
- (FMIceLinkASN1Any*) sourceAsn;
- (FMIceLinkX501Name*) subject;
- (FMIceLinkX509SubjectPublicKeyInfo*) subjectPublicKeyInfo;
- (NSMutableData*) subjectUniqueId;
- (FMIceLinkASN1Sequence*) toAsn1;
- (FMIceLinkX509Validity*) validity;
- (int) version;
+ (int) version1;
+ (int) version2;
+ (int) version3;
+ (FMIceLinkX509TbsCertificate*) x509TbsCertificate;

@end


@class NSDateFMExtensions;
@class FMIceLinkASN1Any;

#pragma clang diagnostic ignored "-Wshorten-64-to-32"
#pragma clang diagnostic ignored "-Wint-to-pointer-cast"

@interface FMIceLinkX509Time : NSObject 

+ (FMIceLinkX509Time*) fromAsn1WithAny:(FMIceLinkASN1Any*)any;
- (id) init;
- (id) initWithTime:(NSDate*)time timeType:(FMIceLinkX509TimeType)timeType;
- (void) setTime:(NSDate*)value;
- (void) setTimeType:(FMIceLinkX509TimeType)value;
- (NSDate*) time;
- (FMIceLinkX509TimeType) timeType;
- (FMIceLinkASN1Any*) toAsn1;
+ (FMIceLinkX509Time*) x509Time;
+ (FMIceLinkX509Time*) x509TimeWithTime:(NSDate*)time timeType:(FMIceLinkX509TimeType)timeType;
+ (FMIceLinkX509Time*) x509Time:(NSDate*)time timeType:(FMIceLinkX509TimeType)timeType;

@end


@class FMIceLinkX509Time;
@class FMIceLinkASN1Any;
@class FMIceLinkASN1Sequence;

#pragma clang diagnostic ignored "-Wshorten-64-to-32"
#pragma clang diagnostic ignored "-Wint-to-pointer-cast"

@interface FMIceLinkX509Validity : NSObject 

+ (FMIceLinkX509Validity*) fromAsn1WithAny:(FMIceLinkASN1Any*)any;
- (id) init;
- (id) initWithNotBefore:(FMIceLinkX509Time*)notBefore notAfter:(FMIceLinkX509Time*)notAfter;
- (FMIceLinkX509Time*) notAfter;
- (FMIceLinkX509Time*) notBefore;
- (void) setNotAfter:(FMIceLinkX509Time*)value;
- (void) setNotBefore:(FMIceLinkX509Time*)value;
- (FMIceLinkASN1Sequence*) toAsn1;
+ (FMIceLinkX509Validity*) x509Validity;
+ (FMIceLinkX509Validity*) x509ValidityWithNotBefore:(FMIceLinkX509Time*)notBefore notAfter:(FMIceLinkX509Time*)notAfter;

@end



@interface FMIceLinkLocalNetwork : NSObject 

+ (FMIceLinkServerCheck *)checkServerWithCheckArgs:(FMIceLinkCheckServerArgs *)checkArgs;
+ (NSMutableArray*)getIPAddressesWithIPv6:(bool)ipv6;
+ (NSMutableArray*)getIPAddressesWithIPv6:(bool)ipv6 allowPrivate:(bool)allowPrivate;
+ (NSMutableArray*)getLocalAddressesWithAddressType:(FMIceLinkAddressType)addressType;
+ (FMIceLinkAddressType)getAddressTypeWithIPAddress:(NSString*)ipAddress;
+ (NSMutableData*)getAddressBytesWithIPAddress:(NSString*)ipAddress;
+ (NSString*)getAddressWithAddressBytes:(NSData*)addressBytes;

@end



@interface FMIceLinkDTLSPeer : NSObject

- (int)selectedSrtpProtectionProfile;

- (NSMutableArray *)supportedSrtpProtectionProfiles;
- (void)setSupportedSrtpProtectionProfiles:(NSMutableArray *)supportedSrtpProtectionProfiles;

- (NSMutableData *)getKeyingMaterial;

- (id)initWithCertificate:(FMIceLinkCertificate *)certificate cipherSuites:(NSArray *)cipherSuites remoteFingerprintAlgorithm:(NSString *)remoteFingerprintAlgorithm remoteFingerprint:(NSString *)remoteFingerprint isServer:(bool)isServer protocol:(FMIceLinkStreamProtocol) protocol onRemoteCertificate:(FMCallback *)onRemoteCertificate;

- (bool)openWithSendCallback:(FMCallback *)sendCallback;
- (void)setSctpReceiveCallback: (FMCallback *)receieveCallback;
- (void)receiveWithPacket:(NSMutableData *)packet;
- (void)sendWithPacket:(NSMutableData *)packet;
- (void)close;

@end




@interface FMIceLinkDTLSClient : FMIceLinkDTLSPeer

- (id)initWithCertificate:(FMIceLinkCertificate *)certificate cipherSuites:(NSArray *)cipherSuites version:(FMIceLinkProtocolVersion)version remoteFingerprintAlgorithm:(NSString *)remoteFingerprintAlgorithm remoteFingerprint:(NSString *)remoteFingerprint protocol:(FMIceLinkStreamProtocol) protocol onRemoteCertificate:(FMCallback *)onRemoteCertificate;

@end




@interface FMIceLinkDTLSServer : FMIceLinkDTLSPeer

- (id)initWithCertificate:(FMIceLinkCertificate *)certificate cipherSuites:(NSArray *)cipherSuites minVersion:(FMIceLinkProtocolVersion)minVersion maxVersion:(FMIceLinkProtocolVersion)maxVersion remoteFingerprintAlgorithm:(NSString *)remoteFingerprintAlgorithm remoteFingerprint:(NSString *)remoteFingerprint protocol:(FMIceLinkStreamProtocol) protocol onRemoteCertificate:(FMCallback *)onRemoteCertificate;

@end


