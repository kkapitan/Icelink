//
// Title: IceLink WebRTC Extension for Cocoa
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

#if TARGET_OS_IPHONE
  #import <GLKit/GLKit.h>
#endif

#if TARGET_OS_IPHONE
  #ifndef FM_IMAGE
  #define FM_IMAGE UIImage
  #define FM_IMAGE_VIEW UIImageView
  #endif
#else
  #ifndef FM_IMAGE
  #define FM_IMAGE NSImage
  #define FM_IMAGE_VIEW NSImageView
  #endif
#endif

@class FMIceLinkWebRTCAdobeAudioCaptureProvider;
@class FMIceLinkWebRTCAdobeAudioRenderProvider;
@class FMIceLinkWebRTCAdobeExtension;
@class FMIceLinkWebRTCAudioUnitCaptureProvider;
@class FMIceLinkWebRTCAudioUnitRenderProvider;
@class FMIceLinkWebRTCAVCaptureProvider;
@class FMIceLinkWebRTCContextMenu;
@class FMIceLinkWebRTCDefaultProviders;
@class FMIceLinkWebRTCH264Nalu;
@class FMIceLinkWebRTCImageViewVideoRenderProvider;
@class FMIceLinkWebRTCJpegCodec;
@class FMIceLinkWebRTCLayoutManager;
@class FMIceLinkWebRTCOpenGLVideoRenderProvider;
@class FMIceLinkWebRTCPcmaCodec;
@class FMIceLinkWebRTCPcmuCodec;
@class FMIceLinkWebRTCScreenCaptureProvider;
@class FMIceLinkWebRTCSoundUtility;
@class FMIceLinkWebRTCVideoBufferExtensions;
@class FMIceLinkWebRTCReliableDataReceiveArgs;
@class FMIceLinkWebRTCAudioMixerSourceBuffer;
@class FMIceLinkWebRTCAudioMixerSource;
@class FMIceLinkWebRTCAudioMixer;
@class FMIceLinkWebRTCCaptureProvider;
@class FMIceLinkWebRTCAudioCaptureProvider;
@class FMIceLinkWebRTCDirectAudioCaptureProvider;
@class FMIceLinkWebRTCVideoCaptureProvider;
@class FMIceLinkWebRTCDirectVideoCaptureProvider;
@class FMIceLinkWebRTCMixedAudioCaptureProvider;
@class FMIceLinkWebRTCRemoteCaptureDelayedReceiveArgs;
@class FMIceLinkWebRTCRemoteCaptureJitterBuffer;
@class FMIceLinkWebRTCH264Accumulator;
@class FMIceLinkWebRTCH264Frame;
@class FMIceLinkWebRTCH264NaluType;
@class FMIceLinkWebRTCH264Packet;
@class FMIceLinkWebRTCPadep;
@class FMIceLinkWebRTCVideoPadep;
@class FMIceLinkWebRTCH264Padep;
@class FMIceLinkWebRTCCodec;
@class FMIceLinkWebRTCAudioCodec;
@class FMIceLinkWebRTCPcmCodec;
@class FMIceLinkWebRTCVideoCodec;
@class FMIceLinkWebRTCUlpFecCodec;
@class FMIceLinkWebRTCResampler;
@class FMIceLinkWebRTCFecContext;
@class FMIceLinkWebRTCFecContextTest;
@class FMIceLinkWebRTCFecSortablePacket;
@class FMIceLinkWebRTCFecPacket;
@class FMIceLinkWebRTCFecPacketMaskTable;
@class FMIceLinkWebRTCFecProducer;
@class FMIceLinkWebRTCFecProducerTest;
@class FMIceLinkWebRTCFecProtectedPacket;
@class FMIceLinkWebRTCFecProtectionParameters;
@class FMIceLinkWebRTCFecRawPacket;
@class FMIceLinkWebRTCFecReceivedPacket;
@class FMIceLinkWebRTCFecReceiver;
@class FMIceLinkWebRTCFecReceiverTest;
@class FMIceLinkWebRTCFecRecoveredPacket;
@class FMIceLinkWebRTCFecRedPacket;
@class FMIceLinkWebRTCFecRtpPacket;
@class FMIceLinkWebRTCFrameGenerator;
@class FMIceLinkWebRTCLayoutCompleteArgs;
@class FMIceLinkWebRTCLayoutArgs;
@class FMIceLinkWebRTCLayoutTable;
@class FMIceLinkWebRTCMatroskaAudioRecorder;
@class FMIceLinkWebRTCMatroskaElement;
@class FMIceLinkWebRTCMatroskaBlock;
@class FMIceLinkWebRTCMatroskaSimpleBlock;
@class FMIceLinkWebRTCMatroskaBlockFlags;
@class FMIceLinkWebRTCMatroskaSimpleBlockFlags;
@class FMIceLinkWebRTCIvfVideoRecorder;
@class FMIceLinkWebRTCMatroskaAudio;
@class FMIceLinkWebRTCMatroskaBlockGroup;
@class FMIceLinkWebRTCMatroskaCluster;
@class FMIceLinkWebRTCMatroskaContentCompAlgo;
@class FMIceLinkWebRTCMatroskaContentCompression;
@class FMIceLinkWebRTCMatroskaContentEncoding;
@class FMIceLinkWebRTCMatroskaContentEncodings;
@class FMIceLinkWebRTCMatroskaContentEncodingScope;
@class FMIceLinkWebRTCMatroskaEbml;
@class FMIceLinkWebRTCMatroskaFile;
@class FMIceLinkWebRTCMatroskaVideoRecorder;
@class FMIceLinkWebRTCMatroskaSeek;
@class FMIceLinkWebRTCMatroskaSeekHead;
@class FMIceLinkWebRTCMatroskaSegment;
@class FMIceLinkWebRTCMatroskaSegmentInfo;
@class FMIceLinkWebRTCMatroskaTrackEntry;
@class FMIceLinkWebRTCMatroskaTrack;
@class FMIceLinkWebRTCMatroskaTrackType;
@class FMIceLinkWebRTCMatroskaVideo;
@class FMIceLinkWebRTCMatroskaVideoDisplayUnit;
@class FMIceLinkWebRTCOggAudioRecorder;
@class FMIceLinkWebRTCRenderProvider;
@class FMIceLinkWebRTCAudioRenderProvider;
@class FMIceLinkWebRTCOggAudioRenderProvider;
@class FMIceLinkWebRTCOggAudioRecordingProvider;
@class FMIceLinkWebRTCOggPage;
@class FMIceLinkWebRTCOggPageHeaderType;
@class FMIceLinkWebRTCReliableDataChannel;
@class FMIceLinkWebRTCReliableDataManager;
@class FMIceLinkWebRTCReliableMessage;
@class FMIceLinkWebRTCInternalReliableDataChannel;
@class FMIceLinkWebRTCReliableDataChannelOwnershipConventions;
@class FMIceLinkWebRTCBaseWebRTCStream;
@class FMIceLinkWebRTCReliableDataStream;
@class FMIceLinkWebRTCWebRTCDCEPMessage;
@class FMIceLinkWebRTCWebRTCDCEPDataChannelOpen;
@class FMIceLinkWebRTCWebRTCDCEPDataChannelAck;
@class FMIceLinkWebRTCWebRTCDCEPMessageType;
@class FMIceLinkWebRTCSCTPWebRTCPayloadProtocolIdentifier;
@class FMIceLinkWebRTCReliableChannelPriority;
@class FMIceLinkWebRTCReliableChannelType;
@class FMIceLinkWebRTCBaseMediaArgs;
@class FMIceLinkWebRTCDataChannelReceiveArgs;
@class FMIceLinkWebRTCBaseContextMenu;
@class FMIceLinkWebRTCLayout;
@class FMIceLinkWebRTCLayoutFrame;
@class FMIceLinkWebRTCNullVideoCaptureProvider;
@class FMIceLinkWebRTCNullAudioCaptureProvider;
@class FMIceLinkWebRTCOutgoingVideoCaptureProvider;
@class FMIceLinkWebRTCOutgoingAudioCaptureProvider;
@class FMIceLinkWebRTCDistributorMedia;
@class FMIceLinkWebRTCDistributor;
@class FMIceLinkWebRTCGoogleDataAccumulator;
@class FMIceLinkWebRTCGoogleDataPacket;
@class FMIceLinkWebRTCDataChannelPadep;
@class FMIceLinkWebRTCGoogleDataPadep;
@class FMIceLinkConferenceExtensions;
@class FMIceLinkWebRTCDataChannelStream;
@class FMIceLinkWebRTCLayoutPreset;
@class FMIceLinkWebRTCLocalStartArgs;
@class FMIceLinkWebRTCLocalStartFailureArgs;
@class FMIceLinkWebRTCLocalStartSuccessArgs;
@class FMIceLinkWebRTCAudioStream;
@class FMIceLinkWebRTCBaseLayoutManager;
@class FMIceLinkWebRTCDataChannelBuffer;
@class FMIceLinkWebRTCAudioCaptureInitializeArgs;
@class FMIceLinkWebRTCDataChannelCaptureInitializeArgs;
@class FMIceLinkWebRTCDataChannelCaptureProvider;
@class FMIceLinkWebRTCRemoteDataChannelCaptureProvider;
@class FMIceLinkWebRTCBasicDataChannelPadep;
@class FMIceLinkWebRTCDataChannelCodec;
@class FMIceLinkWebRTCGoogleDataCodec;
@class FMIceLinkWebRTCJpegPacket;
@class FMIceLinkWebRTCJpegPadep;
@class FMIceLinkWebRTCJpegAccumulator;
@class FMIceLinkWebRTCVp8Fragment;
@class FMIceLinkWebRTCVp8FragmentedPacket;
@class FMIceLinkWebRTCVp8Accumulator;
@class FMIceLinkWebRTCVp8Packet;
@class FMIceLinkWebRTCVp8Padep;
@class FMIceLinkWebRTCAudioPadep;
@class FMIceLinkWebRTCVideoCaptureInitializeArgs;
@class FMIceLinkWebRTCAudioDeviceNumberChangedArgs;
@class FMIceLinkWebRTCAudioFrameCapturedArgs;
@class FMIceLinkWebRTCAudioCaptureMutedArgs;
@class FMIceLinkWebRTCAudioCaptureUnmutedArgs;
@class FMIceLinkWebRTCAudioCaptureDisconnectedArgs;
@class FMIceLinkWebRTCAudioCaptureLevelArgs;
@class FMIceLinkWebRTCRemoteCaptureNackBuffer;
@class FMIceLinkWebRTCRemoteVideoCaptureProvider;
@class FMIceLinkWebRTCRemoteAudioCaptureProvider;
@class FMIceLinkWebRTCVideoDeviceNumberChangedArgs;
@class FMIceLinkWebRTCVideoFrameCapturedArgs;
@class FMIceLinkWebRTCVideoCaptureMutedArgs;
@class FMIceLinkWebRTCVideoCaptureUnmutedArgs;
@class FMIceLinkWebRTCVideoCapturePreviewMutedArgs;
@class FMIceLinkWebRTCVideoCapturePreviewUnmutedArgs;
@class FMIceLinkWebRTCVideoCaptureDisconnectedArgs;
@class FMIceLinkWebRTCGetMediaCompleteArgs;
@class FMIceLinkWebRTCGetMediaFailureArgs;
@class FMIceLinkWebRTCCreateAudioRenderProviderArgs;
@class FMIceLinkWebRTCCreateVideoRenderProviderArgs;
@class FMIceLinkWebRTCGetMediaArgs;
@class FMIceLinkWebRTCGetMediaSuccessArgs;
@class FMIceLinkWebRTCAudioBuffer;
@class FMIceLinkWebRTCBasicVideoPadep;
@class FMIceLinkWebRTCBasicAudioPadep;
@class FMIceLinkWebRTCVideoPlane;
@class FMIceLinkWebRTCVideoBuffer;
@class FMIceLinkWebRTCRedCodec;
@class FMIceLinkLinkExtensions;
@class FMIceLinkWebRTCDataChannelInfo;
@class FMIceLinkWebRTCMixedAudioRenderProvider;
@class FMIceLinkWebRTCDataChannelRenderInitializeArgs;
@class FMIceLinkWebRTCVideoRenderProvider;
@class FMIceLinkWebRTCNullVideoRenderProvider;
@class FMIceLinkWebRTCIncomingVideoRenderProvider;
@class FMIceLinkWebRTCDataChannelRenderProvider;
@class FMIceLinkWebRTCIncomingAudioRenderProvider;
@class FMIceLinkWebRTCNullAudioRenderProvider;
@class FMIceLinkWebRTCRemoteDataChannelRenderProvider;
@class FMIceLinkWebRTCRemoteRenderDelayedPacket;
@class FMIceLinkWebRTCIvfVideoRenderProvider;
@class FMIceLinkWebRTCIvfVideoRecordingProvider;
@class FMIceLinkWebRTCSerializer;
@class FMIceLinkWebRTCVideoStream;
@class FMIceLinkWebRTCRegistration;
@class FMIceLinkWebRTCDataChannelRegistration;
@class FMIceLinkWebRTCMediaStream;
@class FMIceLinkWebRTCLocalMediaStream;
@class FMIceLinkWebRTCAudioFrameEncodedArgs;
@class FMIceLinkWebRTCVideoFrameEncodedArgs;
@class FMIceLinkWebRTCMediaStreamTrack;
@class FMIceLinkWebRTCAudioRegistration;
@class FMIceLinkWebRTCVideoRegistration;
@class FMIceLinkWebRTCRemoteVideoRenderProvider;
@class FMIceLinkWebRTCRemoteAudioRenderProvider;
@class FMIceLinkWebRTCAudioRenderInitializeArgs;
@class FMIceLinkWebRTCVideoRenderInitializeArgs;
@class FMIceLinkWebRTCAudioRenderMutedArgs;
@class FMIceLinkWebRTCAudioRenderUnmutedArgs;
@class FMIceLinkWebRTCVideoRenderMutedArgs;
@class FMIceLinkWebRTCVideoRenderUnmutedArgs;
@class FMIceLinkWebRTCUserMedia;

@interface FMIceLinkWebRTCSoundUtility : NSObject

+ (short)readPcmShortWithInput:(NSData *)input index:(int)index;
+ (void)writePcmShortWithInput:(short)input output:(NSMutableData *)output index:(int)index;
+ (float)readPcmFloatWithInput:(NSData *)input index:(int)index;
+ (void)writePcmFloatWithInput:(float)input output:(NSMutableData *)output index:(int)index;

@end



/// <summary>
/// Indicates the type of data transferred over WebRTC
/// </summary>
typedef enum {
	/// <summary>
	/// UTF-8 encoded Strings
	/// </summary>
	FMIceLinkWebRTCReliableDataTypeString = 1,
	/// <summary>
	/// Binary array data
	/// </summary>
	FMIceLinkWebRTCReliableDataTypeBinary = 2
} FMIceLinkWebRTCReliableDataType;



/// <summary>
/// Forward error correction mask types.
/// </summary>
typedef enum {
	/// <summary>
	/// Indicates a random FEC mask type.
	/// </summary>
	FMIceLinkWebRTCFecMaskTypeRandom = 1,
	/// <summary>
	/// Indicates a bursty FEC mask type.
	/// </summary>
	FMIceLinkWebRTCFecMaskTypeBursty = 2
} FMIceLinkWebRTCFecMaskType;



typedef enum {
	FMIceLinkWebRTCFecProtectionModeNoOverlap = 1,
	FMIceLinkWebRTCFecProtectionModeOverlap = 2,
	FMIceLinkWebRTCFecProtectionModeBiasFirstPacket = 3
} FMIceLinkWebRTCFecProtectionMode;



/// <summary>
/// Specifies the direction of the layout flow.
/// </summary>
typedef enum {
	/// <summary>
	/// Indicates that the layout should flow
	/// horizontally, filling rows as needed.
	/// </summary>
	FMIceLinkWebRTCLayoutDirectionHorizontal = 1,
	/// <summary>
	/// Indicates that the layout should flow
	/// vertically, filling columns as needed.
	/// </summary>
	FMIceLinkWebRTCLayoutDirectionVertical = 2
} FMIceLinkWebRTCLayoutDirection;



/// <summary>
/// Specifies how an element should be scaled within a layout.
/// </summary>
typedef enum {
	/// <summary>
	/// Indicates that the element should be uniformly scaled
	/// (maintaining aspect ratio) to the largest size such
	/// that both its width and its height can fit inside its
	/// bounding box.
	/// </summary>
	FMIceLinkWebRTCLayoutScaleContain = 1,
	/// <summary>
	/// Indicates that the element should be uniformly scaled
	/// (maintaining aspect ratio) to be as large as possible
	/// so that the bounding box is completely covered. Some
	/// parts of the element may not be in view (cropped).
	/// </summary>
	FMIceLinkWebRTCLayoutScaleCover = 2,
	/// <summary>
	/// Indicates that the element should be non-uniformly
	/// scaled (not maintaining aspect ratio) so that the
	/// bounding box is completely covered, but all parts
	/// of the element are in view (no cropping).
	/// </summary>
	FMIceLinkWebRTCLayoutScaleStretch = 3
} FMIceLinkWebRTCLayoutScale;



typedef enum {
	FMIceLinkWebRTCReliableChannelStateClosed = 1,
	FMIceLinkWebRTCReliableChannelStateRequested = 2,
	FMIceLinkWebRTCReliableChannelStateOpen = 3
} FMIceLinkWebRTCReliableChannelState;



/// <summary>
/// A layout alignment definition.
/// </summary>
typedef enum {
	/// <summary>
	/// Indicates a top-left alignment.
	/// </summary>
	FMIceLinkWebRTCLayoutAlignmentTopLeft = 1,
	/// <summary>
	/// Indicates a top-center alignment.
	/// </summary>
	FMIceLinkWebRTCLayoutAlignmentTop = 2,
	/// <summary>
	/// Indicates a top-right alignment.
	/// </summary>
	FMIceLinkWebRTCLayoutAlignmentTopRight = 3,
	/// <summary>
	/// Indicates a center-left alignment.
	/// </summary>
	FMIceLinkWebRTCLayoutAlignmentLeft = 4,
	/// <summary>
	/// Indicates a center-center alignment.
	/// </summary>
	FMIceLinkWebRTCLayoutAlignmentCenter = 5,
	/// <summary>
	/// Indicates a center-right alignment.
	/// </summary>
	FMIceLinkWebRTCLayoutAlignmentRight = 6,
	/// <summary>
	/// Indicates a bottom-left alignment.
	/// </summary>
	FMIceLinkWebRTCLayoutAlignmentBottomLeft = 7,
	/// <summary>
	/// Indicates a bottom-center alignment.
	/// </summary>
	FMIceLinkWebRTCLayoutAlignmentBottom = 8,
	/// <summary>
	/// Indicates a bottom-right alignment.
	/// </summary>
	FMIceLinkWebRTCLayoutAlignmentBottomRight = 9
} FMIceLinkWebRTCLayoutAlignment;



/// <summary>
/// Specifies the layout mode that should be used.
/// </summary>
typedef enum {
	/// <summary>
	/// Indicates that the local video feed should be displayed as
	/// a floating element above the remote video feeds.
	/// </summary>
	FMIceLinkWebRTCLayoutModeFloatLocal = 1,
	/// <summary>
	/// Indicates that the remote video feeds should be displayed as
	/// floating elements above the local video feed.
	/// </summary>
	FMIceLinkWebRTCLayoutModeFloatRemote = 2,
	/// <summary>
	/// Indicates that the video feed should be displayed as a block
	/// element on its own row, separate from other video feeds.
	/// </summary>
	FMIceLinkWebRTCLayoutModeBlock = 3,
	/// <summary>
	/// Indicates that the video feed should be displayed as an inline
	/// element that shares a row with other video feeds.
	/// </summary>
	FMIceLinkWebRTCLayoutModeInline = 4
} FMIceLinkWebRTCLayoutMode;



/// <summary>
/// A layout origin definition.
/// </summary>
typedef enum {
	/// <summary>
	/// Indicates an origin where 0,0 is in the top-left corner.
	/// </summary>
	FMIceLinkWebRTCLayoutOriginTopLeft = 1,
	/// <summary>
	/// Indicates an origin where 0,0 is in the top-right corner.
	/// </summary>
	FMIceLinkWebRTCLayoutOriginTopRight = 2,
	/// <summary>
	/// Indicates an origin where 0,0 is in the bottom-right corner.
	/// </summary>
	FMIceLinkWebRTCLayoutOriginBottomRight = 3,
	/// <summary>
	/// Indicates an origin where 0,0 is in the bottom-left corner.
	/// </summary>
	FMIceLinkWebRTCLayoutOriginBottomLeft = 4
} FMIceLinkWebRTCLayoutOrigin;



/// <summary>
/// Definitions of codec usage types.
/// </summary>
typedef enum {
	/// <summary>
	/// Indicates use as an encoder.
	/// </summary>
	FMIceLinkWebRTCCodecUsageEncoder = 1,
	/// <summary>
	/// Indicates use as a decoder.
	/// </summary>
	FMIceLinkWebRTCCodecUsageDecoder = 2,
	/// <summary>
	/// Indicates use as a packetizer.
	/// </summary>
	FMIceLinkWebRTCCodecUsagePacketizer = 4
} FMIceLinkWebRTCCodecUsage;



/// <summary>
/// Possible video sources.
/// </summary>
typedef enum {
	/// <summary>
	/// Indicates a device camera.
	/// </summary>
	FMIceLinkWebRTCVideoSourceCamera = 1,
	/// <summary>
	/// Indicates the device screen.
	/// </summary>
	FMIceLinkWebRTCVideoSourceScreen = 2
} FMIceLinkWebRTCVideoSource;



/// <summary>
/// A format for a video buffer.
/// </summary>
typedef enum {
	/// <summary>
	/// Indicates that the video buffer is using a custom, unspecified data format.
	/// </summary>
	FMIceLinkWebRTCVideoFormatCustom = 1,
	/// <summary>
	/// Indicates that each pixel occupies 24 bits (8 bits for red, then 8 bits for green, then 8 bits for blue).
	/// </summary>
	FMIceLinkWebRTCVideoFormatRGB = 2,
	/// <summary>
	/// Indicates that each pixel occupies 24 bits (8 bits for blue, then 8 bits for green, then 8 bits for red).
	/// </summary>
	FMIceLinkWebRTCVideoFormatBGR = 3,
	/// <summary>
	/// Indicates that each pixel occupies 12 bits (8 bits for Y, 2 bits for U, and 2 bits for V).
	/// Y plane is followed by interleaved U/V plane.
	/// </summary>
	FMIceLinkWebRTCVideoFormatNV12 = 4,
	/// <summary>
	/// Indicates that each pixel occupies 12 bits (8 bits for Y, 2 bits for U, and 2 bits for V).
	/// Y plane is followed by interleaved V/U plane.
	/// </summary>
	FMIceLinkWebRTCVideoFormatNV21 = 5,
	/// <summary>
	/// Indicates that each pixel occupies 12 bits (8 bits for Y, 2 bits for U, and 2 bits for V).
	/// Y plane is followed by U plane and then V plane.
	/// </summary>
	FMIceLinkWebRTCVideoFormatI420 = 6,
	/// <summary>
	/// Indicates that each pixel occupies 12 bits (8 bits for Y, 2 bits for U, and 2 bits for V).
	/// Y plane is followed by V plane and then U plane.
	/// </summary>
	FMIceLinkWebRTCVideoFormatYV12 = 7,
	/// <summary>
	/// Indicates that each pixel occupies 32 bits (8 bits for alpha, then 8 bits for red, then 8 bits for green, then 8 bits for blue).
	/// </summary>
	FMIceLinkWebRTCVideoFormatARGB = 8,
	/// <summary>
	/// Indicates that each pixel occupies 32 bits (8 bits for alpha, then 8 bits for blue, then8 bits for green, then 8 bits for red).
	/// </summary>
	FMIceLinkWebRTCVideoFormatABGR = 9,
	/// <summary>
	/// Indicates that each pixel occupies 32 bits (8 bits for red, then 8 bits for green, then 8 bits for blue, then 8 bits for alpha).
	/// </summary>
	FMIceLinkWebRTCVideoFormatRGBA = 10,
	/// <summary>
	/// Indicates that each pixel occupies 32 bits (8 bits for blue, then8 bits for green, then 8 bits for red, then 8 bits for alpha).
	/// </summary>
	FMIceLinkWebRTCVideoFormatBGRA = 11
} FMIceLinkWebRTCVideoFormat;



/// <summary>
/// The kind of media stream track.
/// </summary>
typedef enum {
	/// <summary>
	/// Track represents an audio source.
	/// </summary>
	FMIceLinkWebRTCMediaStreamTrackKindAudio = 1,
	/// <summary>
	/// Track represents a video source.
	/// </summary>
	FMIceLinkWebRTCMediaStreamTrackKindVideo = 2
} FMIceLinkWebRTCMediaStreamTrackKind;



/// <summary>
/// The state of a media stream track.
/// </summary>
typedef enum {
	/// <summary>
	/// The track is active.
	/// </summary>
	FMIceLinkWebRTCMediaStreamTrackStateLive = 10,
	/// <summary>
	/// The track's underlying media source is temporarily unable to provide realtime data.
	/// </summary>
	FMIceLinkWebRTCMediaStreamTrackStateMuted = 1,
	/// <summary>
	/// The track has ended, and the underlying media source will not provide further data.
	/// </summary>
	FMIceLinkWebRTCMediaStreamTrackStateEnded = 2
} FMIceLinkWebRTCMediaStreamTrackState;


@class FMIceLinkWebRTCReliableDataChannel;
@class NSMutableDataFMExtensions;
@class NSStringFMExtensions;

/// <summary>
/// Arguments for the reliable data channel receive event.
/// </summary>
#pragma clang diagnostic ignored "-Wshorten-64-to-32"
#pragma clang diagnostic ignored "-Wint-to-pointer-cast"

@interface FMIceLinkWebRTCReliableDataReceiveArgs : FMIceLinkBaseLinkArgs 

/// <summary>
/// Gets the channel description.
/// </summary>
- (FMIceLinkWebRTCReliableDataChannel*) channel;
/// <summary>
/// Gets the received binary data.
/// </summary>
- (NSMutableData*) dataBytes;
/// <summary>
/// Gets the received string data.
/// </summary>
- (NSString*) dataString;
/// <summary>
/// Gets the type of the data.
/// </summary>
- (FMIceLinkWebRTCReliableDataType) dataType;
/// <summary>
/// Deserializes an instance from JSON.
/// </summary>
/// <param name="receiveArgsJson">The JSON to deserialize.</param>
/// <returns>The deserialized receive arguments.</returns>
+ (FMIceLinkWebRTCReliableDataReceiveArgs*) fromJsonWithReceiveArgsJson:(NSString*)receiveArgsJson;
- (id) init;
+ (FMIceLinkWebRTCReliableDataReceiveArgs*) reliableDataReceiveArgs;
- (void) setChannel:(FMIceLinkWebRTCReliableDataChannel*)value;
- (void) setDataBytes:(NSMutableData*)value;
- (void) setDataString:(NSString*)value;
/// <summary>
/// Serializes this instance to JSON.
/// </summary>
/// <returns></returns>
- (NSString*) toJson;
/// <summary>
/// Serializes an instance to JSON.
/// </summary>
/// <param name="receiveArgs">The receive arguments to serialize.</param>
/// <returns>The serialized JSON.</returns>
+ (NSString*) toJsonWithReceiveArgs:(FMIceLinkWebRTCReliableDataReceiveArgs*)receiveArgs;

@end


@class NSMutableDataFMExtensions;

#pragma clang diagnostic ignored "-Wshorten-64-to-32"
#pragma clang diagnostic ignored "-Wint-to-pointer-cast"

@interface FMIceLinkWebRTCAudioMixerSourceBuffer : NSObject 

+ (FMIceLinkWebRTCAudioMixerSourceBuffer*) audioMixerSourceBuffer;
- (NSMutableData*) get;
- (id) init;
- (void) putWithBuffer:(NSMutableData*)buffer;

@end


@class FMIceLinkWebRTCResampler;
@class NSMutableArrayFMExtensions;
@class NSMutableDataFMExtensions;
@class FMIceLinkWebRTCAudioBuffer;

#pragma clang diagnostic ignored "-Wshorten-64-to-32"
#pragma clang diagnostic ignored "-Wint-to-pointer-cast"

@interface FMIceLinkWebRTCAudioMixerSource : NSObject 

+ (FMIceLinkWebRTCAudioMixerSource*) audioMixerSourceWithClockRate:(int)clockRate channels:(int)channels targetClockRate:(int)targetClockRate targetChannels:(int)targetChannels;
- (int) channels;
- (int) clockRate;
- (id) initWithClockRate:(int)clockRate channels:(int)channels targetClockRate:(int)targetClockRate targetChannels:(int)targetChannels;
- (NSMutableData*) read;
- (int) targetChannels;
- (int) targetClockRate;
- (bool) writeWithBuffer:(FMIceLinkWebRTCAudioBuffer*)buffer;

@end


@class FMIceLinkWebRTCAudioBuffer;
@class NSMutableDictionaryFMExtensions;
@class FMCallback;
@class NSStringFMExtensions;

/// <summary>
/// An audio mixer.
/// </summary>
#pragma clang diagnostic ignored "-Wshorten-64-to-32"
#pragma clang diagnostic ignored "-Wint-to-pointer-cast"

@interface FMIceLinkWebRTCAudioMixer : NSObject 

/// <summary>
/// Adds a handler that is raised when a mixed frame is available.
/// </summary>
- (FMCallback*) addOnFrameWithValue:(FMCallback*)value;
/// <summary>
/// Adds a handler that is raised when a mixed frame is available.
/// </summary>
- (FMCallback*) addOnFrame:(FMCallback*)value;
/// <summary>
/// Adds a handler that is raised when a mixed frame is available.
/// </summary>
- (FMCallback*) addOnFrameWithValueBlock:(void (^) (FMIceLinkWebRTCAudioBuffer*))valueBlock;
/// <summary>
/// Adds a handler that is raised when a mixed frame is available.
/// </summary>
- (FMCallback*) addOnFrameBlock:(void (^) (FMIceLinkWebRTCAudioBuffer*))valueBlock;
/// <summary>
/// Adds a source frame.
/// </summary>
/// <param name="sourceId">The source identifier.</param>
/// <param name="frame">The frame.</param>
/// <returns><c>true</c> if the frame was mixed; otherwise, <c>false</c>.</returns>
- (bool) addSourceFrameWithSourceId:(NSString*)sourceId frame:(FMIceLinkWebRTCAudioBuffer*)frame;
/// <summary>
/// Adds a source.
/// </summary>
/// <param name="sourceId">The source identifier.</param>
/// <param name="clockRate">The source clock rate.</param>
/// <param name="channels">The source channel count.</param>
/// <returns><c>true</c> if the source was added; <c>false</c> if the source already existed.</returns>
- (bool) addSourceWithSourceId:(NSString*)sourceId clockRate:(int)clockRate channels:(int)channels;
/// <summary>
/// Adds a source.
/// </summary>
/// <param name="sourceId">The source identifier.</param>
/// <param name="clockRate">The source clock rate.</param>
/// <param name="channels">The source channel count.</param>
/// <returns><c>true</c> if the source was added; <c>false</c> if the source already existed.</returns>
- (bool) addSourceWithId:(NSString*)sourceId clockRate:(int)clockRate channels:(int)channels;
/// <summary>
/// Initializes a new instance of the <see cref="FMIceLinkWebRTCAudioMixer" /> class.
/// </summary>
/// <param name="clockRate">The output clock rate.</param>
/// <param name="channels">The output channel count.</param>
/// <param name="packetTime">The duration of the packets (input and output) in milliseconds.</param>
+ (FMIceLinkWebRTCAudioMixer*) audioMixerWithClockRate:(int)clockRate channels:(int)channels packetTime:(int)packetTime;
/// <summary>
/// Gets the output channel count.
/// </summary>
- (int) channels;
/// <summary>
/// Gets the output clock rate.
/// </summary>
- (int) clockRate;
/// <summary>
/// Initializes a new instance of the <see cref="FMIceLinkWebRTCAudioMixer" /> class.
/// </summary>
/// <param name="clockRate">The output clock rate.</param>
/// <param name="channels">The output channel count.</param>
/// <param name="packetTime">The duration of the packets (input and output) in milliseconds.</param>
- (id) initWithClockRate:(int)clockRate channels:(int)channels packetTime:(int)packetTime;
/// <summary>
/// Gets the duration of the packets (input and output) in milliseconds.
/// </summary>
- (int) packetTime;
/// <summary>
/// Removes a handler that is raised when a mixed frame is available.
/// </summary>
- (void) removeOnFrameWithValue:(FMCallback*)value;
/// <summary>
/// Removes a handler that is raised when a mixed frame is available.
/// </summary>
- (void) removeOnFrame:(FMCallback*)value;
/// <summary>
/// Removes a source.
/// </summary>
/// <param name="sourceId">The source identifier.</param>
/// <returns><c>true</c> if the source was removed; <c>false</c> if the source did not exist.</returns>
- (bool) removeSourceWithSourceId:(NSString*)sourceId;
/// <summary>
/// Removes a source.
/// </summary>
/// <param name="sourceId">The source identifier.</param>
/// <returns><c>true</c> if the source was removed; <c>false</c> if the source did not exist.</returns>
- (bool) removeSourceWithId:(NSString*)sourceId;
/// <summary>
/// Gets the number of sources in the mix.
/// </summary>
- (int) sourcesCount;
/// <summary>
/// Starts this instance.
/// </summary>
/// <returns><c>true</c> if the mixer was started; <c>false</c> if the mixer was already started.</returns>
- (bool) start;
/// <summary>
/// Stops this instance.
/// </summary>
/// <returns><c>true</c> if the mixer was stopped; <c>false</c> if the mixer was already stopped.</returns>
- (bool) stop;

@end


@class FMRandomizer;

/// <summary>
/// Base capture provider.
/// </summary>
#pragma clang diagnostic ignored "-Wshorten-64-to-32"
#pragma clang diagnostic ignored "-Wint-to-pointer-cast"

@interface FMIceLinkWebRTCCaptureProvider : FMDynamic 

+ (FMIceLinkWebRTCCaptureProvider*) captureProvider;
/// <summary>
/// Determines (randomly) how many packets should go out before a delayed packet is sent.
/// </summary>
/// <param name="delayPacketMaximum">The delay packet maximum.</param>
/// <returns></returns>
- (int) getPacketDelayWithDelayPacketMaximum:(int)delayPacketMaximum;
/// <summary>
/// Determines (randomly) how many packets should go out before a delayed packet is sent.
/// </summary>
/// <param name="delayPacketMaximum">The delay packet maximum.</param>
/// <returns></returns>
- (int) getPacketDelayWithPacketMaximum:(int)delayPacketMaximum;
- (id) init;
/// <summary>
/// Determines (randomly) whether a packet should be delayed.
/// </summary>
/// <param name="delayPacketProbability">The delay packet probability.</param>
/// <returns></returns>
- (bool) shouldDelayPacketWithDelayPacketProbability:(int)delayPacketProbability;
/// <summary>
/// Determines (randomly) whether a packet should be delayed.
/// </summary>
/// <param name="delayPacketProbability">The delay packet probability.</param>
/// <returns></returns>
- (bool) shouldDelayPacketWithProbability:(int)delayPacketProbability;
/// <summary>
/// Determines (randomly) whether a packet should be dropped.
/// </summary>
/// <param name="dropPacketProbability">The drop packet probability.</param>
/// <returns></returns>
- (bool) shouldDropPacketWithDropPacketProbability:(int)dropPacketProbability;
/// <summary>
/// Determines (randomly) whether a packet should be dropped.
/// </summary>
/// <param name="dropPacketProbability">The drop packet probability.</param>
/// <returns></returns>
- (bool) shouldDropPacketWithProbability:(int)dropPacketProbability;

@end


@class FMIceLinkWebRTCAudioDeviceNumberChangedArgs;
@class FMIceLinkWebRTCAudioFrameCapturedArgs;
@class FMIceLinkWebRTCAudioCaptureMutedArgs;
@class FMIceLinkWebRTCAudioCaptureUnmutedArgs;
@class FMIceLinkWebRTCAudioCaptureDisconnectedArgs;
@class FMIceLinkWebRTCAudioCaptureLevelArgs;
@class FMNullableInt;
@class NSMutableArrayFMExtensions;
@class FMCallback;
@class NSStringFMExtensions;
@class FMIceLinkWebRTCAudioCaptureInitializeArgs;
@class FMIceLinkWebRTCAudioBuffer;

/// <summary>
/// Abstract definition for an audio capture implementation.
/// </summary>
#pragma clang diagnostic ignored "-Wshorten-64-to-32"
#pragma clang diagnostic ignored "-Wint-to-pointer-cast"

@interface FMIceLinkWebRTCAudioCaptureProvider : FMIceLinkWebRTCCaptureProvider 

/// <summary>
/// Adds a handler that is raised whenever the current device number changes.
/// </summary>
- (FMCallback*) addOnDeviceNumberChangedWithValue:(FMCallback*)value;
/// <summary>
/// Adds a handler that is raised whenever the current device number changes.
/// </summary>
- (FMCallback*) addOnDeviceNumberChanged:(FMCallback*)value;
/// <summary>
/// Adds a handler that is raised whenever the current device number changes.
/// </summary>
- (FMCallback*) addOnDeviceNumberChangedWithValueBlock:(void (^) (FMIceLinkWebRTCAudioDeviceNumberChangedArgs*))valueBlock;
/// <summary>
/// Adds a handler that is raised whenever the current device number changes.
/// </summary>
- (FMCallback*) addOnDeviceNumberChangedBlock:(void (^) (FMIceLinkWebRTCAudioDeviceNumberChangedArgs*))valueBlock;
/// <summary>
/// Adds a handler that is raised when the device is disconnected.
/// </summary>
- (FMCallback*) addOnDisconnectedWithValue:(FMCallback*)value;
/// <summary>
/// Adds a handler that is raised when the device is disconnected.
/// </summary>
- (FMCallback*) addOnDisconnected:(FMCallback*)value;
/// <summary>
/// Adds a handler that is raised when the device is disconnected.
/// </summary>
- (FMCallback*) addOnDisconnectedWithValueBlock:(void (^) (FMIceLinkWebRTCAudioCaptureDisconnectedArgs*))valueBlock;
/// <summary>
/// Adds a handler that is raised when the device is disconnected.
/// </summary>
- (FMCallback*) addOnDisconnectedBlock:(void (^) (FMIceLinkWebRTCAudioCaptureDisconnectedArgs*))valueBlock;
/// <summary>
/// Adds a handler that is raised whenever a frame is captured from the audio device.
/// </summary>
- (FMCallback*) addOnFrameWithValue:(FMCallback*)value;
/// <summary>
/// Adds a handler that is raised whenever a frame is captured from the audio device.
/// </summary>
- (FMCallback*) addOnFrame:(FMCallback*)value;
/// <summary>
/// Adds a handler that is raised whenever a frame is captured from the audio device.
/// </summary>
- (FMCallback*) addOnFrameWithValueBlock:(void (^) (FMIceLinkWebRTCAudioFrameCapturedArgs*))valueBlock;
/// <summary>
/// Adds a handler that is raised whenever a frame is captured from the audio device.
/// </summary>
- (FMCallback*) addOnFrameBlock:(void (^) (FMIceLinkWebRTCAudioFrameCapturedArgs*))valueBlock;
/// <summary>
/// Adds a handler that is raised when the audio level is detected.
/// </summary>
- (FMCallback*) addOnLevelWithValue:(FMCallback*)value;
/// <summary>
/// Adds a handler that is raised when the audio level is detected.
/// </summary>
- (FMCallback*) addOnLevel:(FMCallback*)value;
/// <summary>
/// Adds a handler that is raised when the audio level is detected.
/// </summary>
- (FMCallback*) addOnLevelWithValueBlock:(void (^) (FMIceLinkWebRTCAudioCaptureLevelArgs*))valueBlock;
/// <summary>
/// Adds a handler that is raised when the audio level is detected.
/// </summary>
- (FMCallback*) addOnLevelBlock:(void (^) (FMIceLinkWebRTCAudioCaptureLevelArgs*))valueBlock;
/// <summary>
/// Adds a handler that is raised whenever the capture is muted.
/// </summary>
- (FMCallback*) addOnMutedWithValue:(FMCallback*)value;
/// <summary>
/// Adds a handler that is raised whenever the capture is muted.
/// </summary>
- (FMCallback*) addOnMuted:(FMCallback*)value;
/// <summary>
/// Adds a handler that is raised whenever the capture is muted.
/// </summary>
- (FMCallback*) addOnMutedWithValueBlock:(void (^) (FMIceLinkWebRTCAudioCaptureMutedArgs*))valueBlock;
/// <summary>
/// Adds a handler that is raised whenever the capture is muted.
/// </summary>
- (FMCallback*) addOnMutedBlock:(void (^) (FMIceLinkWebRTCAudioCaptureMutedArgs*))valueBlock;
/// <summary>
/// Adds a handler that is raised whenever the capture is unmuted.
/// </summary>
- (FMCallback*) addOnUnmutedWithValue:(FMCallback*)value;
/// <summary>
/// Adds a handler that is raised whenever the capture is unmuted.
/// </summary>
- (FMCallback*) addOnUnmuted:(FMCallback*)value;
/// <summary>
/// Adds a handler that is raised whenever the capture is unmuted.
/// </summary>
- (FMCallback*) addOnUnmutedWithValueBlock:(void (^) (FMIceLinkWebRTCAudioCaptureUnmutedArgs*))valueBlock;
/// <summary>
/// Adds a handler that is raised whenever the capture is unmuted.
/// </summary>
- (FMCallback*) addOnUnmutedBlock:(void (^) (FMIceLinkWebRTCAudioCaptureUnmutedArgs*))valueBlock;
+ (FMIceLinkWebRTCAudioCaptureProvider*) audioCaptureProvider;
/// <summary>
/// Gets the desired channel count.
/// </summary>
- (int) desiredChannels;
/// <summary>
/// Gets the desired clock rate.
/// </summary>
- (int) desiredClockRate;
/// <summary>
/// Gets the desired device number.
/// </summary>
- (FMNullableInt*) desiredDeviceNumber;
/// <summary>
/// Destroys the audio capture provider.
/// </summary>
- (void) destroy;
- (bool) destroyInternal;
/// <summary>
/// Gets the audio device number.
/// </summary>
- (int) deviceNumber;
/// <summary>
/// Gets the connected device names.
/// </summary>
/// <returns></returns>
- (NSMutableArray*) getDeviceNames;
/// <summary>
/// Gets the label of the audio device.
/// </summary>
- (NSString*) getLabel;
- (id) init;
- (bool) initializeInternalWithCaptureArgs:(FMIceLinkWebRTCAudioCaptureInitializeArgs*)captureArgs;
/// <summary>
/// Initializes the audio capture provider.
/// </summary>
/// <param name="captureArgs">The arguments.</param>
- (void) initializeWithCaptureArgs:(FMIceLinkWebRTCAudioCaptureInitializeArgs*)captureArgs;
/// <summary>
/// Gets whether the audio capture provider has been destroyed.
/// </summary>
- (bool) isDestroyed;
/// <summary>
/// Gets whether the audio capture provider has been initialized.
/// </summary>
- (bool) isInitialized;
/// <summary>
/// Gets whether the audio capture is muted.
/// </summary>
- (bool) isMuted;
/// <summary>
/// Gets whether the audio capture is running.
/// </summary>
- (bool) isRunning;
/// <summary>
/// Mutes the audio capture provider.
/// </summary>
- (bool) mute;
/// <summary>
/// Raises a captured audio buffer for processing.
/// </summary>
/// <param name="buffer">The buffer.</param>
- (void) raiseFrameWithBuffer:(FMIceLinkWebRTCAudioBuffer*)buffer;
/// <summary>
/// Raises a captured audio buffer for processing to specific peers.
/// </summary>
/// <param name="buffer">The buffer.</param>
/// <param name="peerIds">The peer IDs to target (or <c>null</c> to target all).</param>
- (void) raiseFrameWithBuffer:(FMIceLinkWebRTCAudioBuffer*)buffer peerIds:(NSMutableArray*)peerIds;
/// <summary>
/// Removes a handler that is raised whenever the current device number changes.
/// </summary>
- (void) removeOnDeviceNumberChangedWithValue:(FMCallback*)value;
/// <summary>
/// Removes a handler that is raised whenever the current device number changes.
/// </summary>
- (void) removeOnDeviceNumberChanged:(FMCallback*)value;
/// <summary>
/// Removes a handler that is raised when the device is disconnected.
/// </summary>
- (void) removeOnDisconnectedWithValue:(FMCallback*)value;
/// <summary>
/// Removes a handler that is raised when the device is disconnected.
/// </summary>
- (void) removeOnDisconnected:(FMCallback*)value;
/// <summary>
/// Removes a handler that is raised whenever a frame is captured from the audio device.
/// </summary>
- (void) removeOnFrameWithValue:(FMCallback*)value;
/// <summary>
/// Removes a handler that is raised whenever a frame is captured from the audio device.
/// </summary>
- (void) removeOnFrame:(FMCallback*)value;
/// <summary>
/// Removes a handler that is raised when the audio level is detected.
/// </summary>
- (void) removeOnLevelWithValue:(FMCallback*)value;
/// <summary>
/// Removes a handler that is raised when the audio level is detected.
/// </summary>
- (void) removeOnLevel:(FMCallback*)value;
/// <summary>
/// Removes a handler that is raised whenever the capture is muted.
/// </summary>
- (void) removeOnMutedWithValue:(FMCallback*)value;
/// <summary>
/// Removes a handler that is raised whenever the capture is muted.
/// </summary>
- (void) removeOnMuted:(FMCallback*)value;
/// <summary>
/// Removes a handler that is raised whenever the capture is unmuted.
/// </summary>
- (void) removeOnUnmutedWithValue:(FMCallback*)value;
/// <summary>
/// Removes a handler that is raised whenever the capture is unmuted.
/// </summary>
- (void) removeOnUnmuted:(FMCallback*)value;
/// <summary>
/// Sets the audio device number.
/// </summary>
- (void) setDeviceNumber:(int)value;
/// <summary>
/// Sets which peer IDs should receive
/// raised frames. Defaults to <c>null</c>, which
/// means all peers get raised frames.
/// </summary>
- (void) setTargetPeerIds:(NSMutableArray*)value;
/// <summary>
/// Sets the volume (1.0 is unity gain).
/// </summary>
- (void) setVolume:(float)value;
/// <summary>
/// Starts the audio capture provider.
/// </summary>
/// <returns><c>true</c> if the capture was started successfully; otherwise, <c>false</c>.</returns>
- (bool) start;
- (bool) startInternal;
/// <summary>
/// Stops the audio capture provider.
/// </summary>
- (void) stop;
- (bool) stopInternal;
/// <summary>
/// Attempts to switch to a desired device number.
/// </summary>
/// <param name="deviceNumber">The desired device number.</param>
- (bool) switchToDeviceNumberWithDeviceNumber:(int)deviceNumber;
/// <summary>
/// Attempts to switch to a desired device number.
/// </summary>
/// <param name="deviceNumber">The desired device number.</param>
- (bool) switchToDeviceNumber:(int)deviceNumber;
/// <summary>
/// Gets which peer IDs should receive
/// raised frames. Defaults to <c>null</c>, which
/// means all peers get raised frames.
/// </summary>
- (NSMutableArray*) targetPeerIds;
/// <summary>
/// Unmutes the audio capture provider.
/// </summary>
- (bool) unmute;
/// <summary>
/// Gets the volume (1.0 is unity gain).
/// </summary>
- (float) volume;

@end


@class NSMutableArrayFMExtensions;
@class NSStringFMExtensions;
@class FMIceLinkWebRTCAudioCaptureInitializeArgs;
@class FMIceLinkWebRTCAudioBuffer;

/// <summary>
/// A direct audio capture provider that allows application
/// code to send frames at custom timing intervals.
/// </summary>
#pragma clang diagnostic ignored "-Wshorten-64-to-32"
#pragma clang diagnostic ignored "-Wint-to-pointer-cast"

@interface FMIceLinkWebRTCDirectAudioCaptureProvider : FMIceLinkWebRTCAudioCaptureProvider 

/// <summary>
/// Destroys the audio capture provider.
/// </summary>
- (void) destroy;
+ (FMIceLinkWebRTCDirectAudioCaptureProvider*) directAudioCaptureProvider;
/// <summary>
/// Gets the connected device names.
/// </summary>
/// <returns></returns>
- (NSMutableArray*) getDeviceNames;
/// <summary>
/// Gets the label of the audio device.
/// </summary>
/// <returns></returns>
- (NSString*) getLabel;
- (id) init;
/// <summary>
/// Initializes the audio capture provider.
/// </summary>
/// <param name="captureArgs">The arguments.</param>
- (void) initializeWithCaptureArgs:(FMIceLinkWebRTCAudioCaptureInitializeArgs*)captureArgs;
/// <summary>
/// Adds a frame to be sent to all peer IDs.
/// </summary>
/// <param name="frame">The frame.</param>
- (void) sendFrameWithFrame:(FMIceLinkWebRTCAudioBuffer*)frame;
/// <summary>
/// Adds a frame to be sent to all peer IDs.
/// </summary>
/// <param name="frame">The frame.</param>
- (void) sendFrame:(FMIceLinkWebRTCAudioBuffer*)frame;
/// <summary>
/// Adds a frame to be sent to specific peer IDs.
/// </summary>
/// <param name="frame">The frame.</param>
/// <param name="peerIds">The IDs of the remote peers.</param>
- (void) sendFrameWithFrame:(FMIceLinkWebRTCAudioBuffer*)frame peerIds:(NSMutableArray*)peerIds;
/// <summary>
/// Adds a frame to be sent to specific peer IDs.
/// </summary>
/// <param name="frame">The frame.</param>
/// <param name="peerIds">The IDs of the remote peers.</param>
- (void) sendFrame:(FMIceLinkWebRTCAudioBuffer*)frame peerIds:(NSMutableArray*)peerIds;
/// <summary>
/// Starts the audio capture provider.
/// </summary>
/// <returns>
/// <c>true</c> if the capture was started successfully; otherwise, <c>false</c>.
/// </returns>
- (bool) start;
/// <summary>
/// Stops the audio capture provider.
/// </summary>
- (void) stop;

@end


@class FMIceLinkWebRTCVideoDeviceNumberChangedArgs;
@class FMIceLinkWebRTCVideoFrameCapturedArgs;
@class FMIceLinkWebRTCVideoCaptureMutedArgs;
@class FMIceLinkWebRTCVideoCaptureUnmutedArgs;
@class FMIceLinkWebRTCVideoCapturePreviewMutedArgs;
@class FMIceLinkWebRTCVideoCapturePreviewUnmutedArgs;
@class FMIceLinkWebRTCVideoCaptureDisconnectedArgs;
@class FMNullableInt;
@class NSMutableArrayFMExtensions;
@class FMIceLinkWebRTCVideoBuffer;
@class FMCallback;
@class NSStringFMExtensions;
@class FMIceLinkWebRTCVideoCaptureInitializeArgs;

/// <summary>
/// Abstract definition for a video capture implementation.
/// </summary>
#pragma clang diagnostic ignored "-Wshorten-64-to-32"
#pragma clang diagnostic ignored "-Wint-to-pointer-cast"

@interface FMIceLinkWebRTCVideoCaptureProvider : FMIceLinkWebRTCCaptureProvider 

/// <summary>
/// Adds a handler that is raised whenever the current device number changes.
/// </summary>
- (FMCallback*) addOnDeviceNumberChangedWithValue:(FMCallback*)value;
/// <summary>
/// Adds a handler that is raised whenever the current device number changes.
/// </summary>
- (FMCallback*) addOnDeviceNumberChanged:(FMCallback*)value;
/// <summary>
/// Adds a handler that is raised whenever the current device number changes.
/// </summary>
- (FMCallback*) addOnDeviceNumberChangedWithValueBlock:(void (^) (FMIceLinkWebRTCVideoDeviceNumberChangedArgs*))valueBlock;
/// <summary>
/// Adds a handler that is raised whenever the current device number changes.
/// </summary>
- (FMCallback*) addOnDeviceNumberChangedBlock:(void (^) (FMIceLinkWebRTCVideoDeviceNumberChangedArgs*))valueBlock;
/// <summary>
/// Adds a handler that is raised when the device is disconnected.
/// </summary>
- (FMCallback*) addOnDisconnectedWithValue:(FMCallback*)value;
/// <summary>
/// Adds a handler that is raised when the device is disconnected.
/// </summary>
- (FMCallback*) addOnDisconnected:(FMCallback*)value;
/// <summary>
/// Adds a handler that is raised when the device is disconnected.
/// </summary>
- (FMCallback*) addOnDisconnectedWithValueBlock:(void (^) (FMIceLinkWebRTCVideoCaptureDisconnectedArgs*))valueBlock;
/// <summary>
/// Adds a handler that is raised when the device is disconnected.
/// </summary>
- (FMCallback*) addOnDisconnectedBlock:(void (^) (FMIceLinkWebRTCVideoCaptureDisconnectedArgs*))valueBlock;
/// <summary>
/// Adds a handler that is raised whenever a frame is captured from the video device.
/// </summary>
- (FMCallback*) addOnFrameWithValue:(FMCallback*)value;
/// <summary>
/// Adds a handler that is raised whenever a frame is captured from the video device.
/// </summary>
- (FMCallback*) addOnFrame:(FMCallback*)value;
/// <summary>
/// Adds a handler that is raised whenever a frame is captured from the video device.
/// </summary>
- (FMCallback*) addOnFrameWithValueBlock:(void (^) (FMIceLinkWebRTCVideoFrameCapturedArgs*))valueBlock;
/// <summary>
/// Adds a handler that is raised whenever a frame is captured from the video device.
/// </summary>
- (FMCallback*) addOnFrameBlock:(void (^) (FMIceLinkWebRTCVideoFrameCapturedArgs*))valueBlock;
/// <summary>
/// Adds a handler that is raised whenever the capture is muted.
/// </summary>
- (FMCallback*) addOnMutedWithValue:(FMCallback*)value;
/// <summary>
/// Adds a handler that is raised whenever the capture is muted.
/// </summary>
- (FMCallback*) addOnMuted:(FMCallback*)value;
/// <summary>
/// Adds a handler that is raised whenever the capture is muted.
/// </summary>
- (FMCallback*) addOnMutedWithValueBlock:(void (^) (FMIceLinkWebRTCVideoCaptureMutedArgs*))valueBlock;
/// <summary>
/// Adds a handler that is raised whenever the capture is muted.
/// </summary>
- (FMCallback*) addOnMutedBlock:(void (^) (FMIceLinkWebRTCVideoCaptureMutedArgs*))valueBlock;
/// <summary>
/// Adds a handler that is raised whenever the capture preview is muted.
/// </summary>
- (FMCallback*) addOnPreviewMutedWithValue:(FMCallback*)value;
/// <summary>
/// Adds a handler that is raised whenever the capture preview is muted.
/// </summary>
- (FMCallback*) addOnPreviewMuted:(FMCallback*)value;
/// <summary>
/// Adds a handler that is raised whenever the capture preview is muted.
/// </summary>
- (FMCallback*) addOnPreviewMutedWithValueBlock:(void (^) (FMIceLinkWebRTCVideoCapturePreviewMutedArgs*))valueBlock;
/// <summary>
/// Adds a handler that is raised whenever the capture preview is muted.
/// </summary>
- (FMCallback*) addOnPreviewMutedBlock:(void (^) (FMIceLinkWebRTCVideoCapturePreviewMutedArgs*))valueBlock;
/// <summary>
/// Adds a handler that is raised whenever the capture preview is unmuted.
/// </summary>
- (FMCallback*) addOnPreviewUnmutedWithValue:(FMCallback*)value;
/// <summary>
/// Adds a handler that is raised whenever the capture preview is unmuted.
/// </summary>
- (FMCallback*) addOnPreviewUnmuted:(FMCallback*)value;
/// <summary>
/// Adds a handler that is raised whenever the capture preview is unmuted.
/// </summary>
- (FMCallback*) addOnPreviewUnmutedWithValueBlock:(void (^) (FMIceLinkWebRTCVideoCapturePreviewUnmutedArgs*))valueBlock;
/// <summary>
/// Adds a handler that is raised whenever the capture preview is unmuted.
/// </summary>
- (FMCallback*) addOnPreviewUnmutedBlock:(void (^) (FMIceLinkWebRTCVideoCapturePreviewUnmutedArgs*))valueBlock;
/// <summary>
/// Adds a handler that is raised whenever the capture is unmuted.
/// </summary>
- (FMCallback*) addOnUnmutedWithValue:(FMCallback*)value;
/// <summary>
/// Adds a handler that is raised whenever the capture is unmuted.
/// </summary>
- (FMCallback*) addOnUnmuted:(FMCallback*)value;
/// <summary>
/// Adds a handler that is raised whenever the capture is unmuted.
/// </summary>
- (FMCallback*) addOnUnmutedWithValueBlock:(void (^) (FMIceLinkWebRTCVideoCaptureUnmutedArgs*))valueBlock;
/// <summary>
/// Adds a handler that is raised whenever the capture is unmuted.
/// </summary>
- (FMCallback*) addOnUnmutedBlock:(void (^) (FMIceLinkWebRTCVideoCaptureUnmutedArgs*))valueBlock;
/// <summary>
/// Gets the desired clock rate.
/// </summary>
- (int) desiredClockRate;
/// <summary>
/// Gets the desired device number.
/// </summary>
- (FMNullableInt*) desiredDeviceNumber;
/// <summary>
/// Gets the desired frame rate.
/// </summary>
- (int) desiredFrameRate;
/// <summary>
/// Gets the desired video height.
/// </summary>
- (int) desiredHeight;
/// <summary>
/// Gets the desired video width.
/// </summary>
- (int) desiredWidth;
/// <summary>
/// Destroys the video capture provider.
/// </summary>
- (void) destroy;
- (bool) destroyInternal;
/// <summary>
/// Gets the video device number.
/// </summary>
- (int) deviceNumber;
/// <summary>
/// Gets the index of the closest possible frame rate.
/// </summary>
/// <param name="desiredFrameRate">The desired frame rate.</param>
/// <param name="frameRates">The possible frame rates.</param>
/// <returns>The index of the closest possible frame rate.</returns>
+ (int) getClosestFrameRateWithDesiredFrameRate:(int)desiredFrameRate frameRates:(NSMutableArray*)frameRates;
/// <summary>
/// Gets the index of the closest possible size.
/// </summary>
/// <param name="desiredWidth">The desired width.</param>
/// <param name="desiredHeight">The desired height.</param>
/// <param name="widths">The possible widths.</param>
/// <param name="heights">The possible heights.</param>
/// <returns>The index of the closest possible size.</returns>
+ (int) getClosestSizeWithDesiredWidth:(int)desiredWidth desiredHeight:(int)desiredHeight widths:(NSMutableArray*)widths heights:(NSMutableArray*)heights;
/// <summary>
/// Gets the connected device names.
/// </summary>
/// <returns></returns>
- (NSMutableArray*) getDeviceNames;
/// <summary>
/// Gets the distance between two frame rates.
/// </summary>
/// <param name="frameRate1">The first frame rate.</param>
/// <param name="frameRate2">The second frame rate.</param>
/// <returns>The positive distance between the two frame rates.</returns>
+ (int) getFrameRateDistanceWithFrameRate1:(int)frameRate1 frameRate2:(int)frameRate2;
/// <summary>
/// Gets the front device number.
/// </summary>
/// <returns></returns>
- (int) getFrontDeviceNumber;
/// <summary>
/// Gets the label of the video device.
/// </summary>
- (NSString*) getLabel;
/// <summary>
/// Gets the video capture preview control.
/// </summary>
/// <returns></returns>
- (NSObject*) getPreviewControl;
/// <summary>
/// Gets the rear device number.
/// </summary>
/// <returns></returns>
- (int) getRearDeviceNumber;
/// <summary>
/// Gets the distance between two sizes.
/// </summary>
/// <param name="width1">The first width.</param>
/// <param name="height1">The first height.</param>
/// <param name="width2">The second width.</param>
/// <param name="height2">The second height.</param>
/// <returns>The positive linear distance between the two sizes.</returns>
+ (int) getSizeDistanceWithWidth1:(int)width1 height1:(int)height1 width2:(int)width2 height2:(int)height2;
- (id) init;
- (bool) initializeInternalWithCaptureArgs:(FMIceLinkWebRTCVideoCaptureInitializeArgs*)captureArgs;
/// <summary>
/// Initializes the video capture provider.
/// </summary>
/// <param name="captureArgs">The arguments.</param>
- (void) initializeWithCaptureArgs:(FMIceLinkWebRTCVideoCaptureInitializeArgs*)captureArgs;
/// <summary>
/// Gets whether the video capture provider has been destroyed.
/// </summary>
- (bool) isDestroyed;
/// <summary>
/// Gets whether the video capture provider has been initialized.
/// </summary>
- (bool) isInitialized;
/// <summary>
/// Gets whether the video capture is muted.
/// </summary>
- (bool) isMuted;
/// <summary>
/// Gets whether the video capture preview is muted.
/// </summary>
- (bool) isPreviewMuted;
/// <summary>
/// Gets whether the video capture is running.
/// </summary>
- (bool) isRunning;
/// <summary>
/// Mutes the video capture provider.
/// </summary>
- (bool) mute;
/// <summary>
/// Gets the buffer to use when the provider is muted.
/// </summary>
- (FMIceLinkWebRTCVideoBuffer*) mutedFrame;
/// <summary>
/// Mutes the video capture provider preview.
/// </summary>
- (bool) mutePreview;
/// <summary>
/// Raises a captured video buffer for processing.
/// </summary>
/// <param name="buffer">The buffer.</param>
- (void) raiseFrameWithBuffer:(FMIceLinkWebRTCVideoBuffer*)buffer;
/// <summary>
/// Raises a captured video buffer for processing to specific peers.
/// </summary>
/// <param name="buffer">The buffer.</param>
/// <param name="peerIds">The peer IDs to target, or <c>null</c> to target all.</param>
- (void) raiseFrameWithBuffer:(FMIceLinkWebRTCVideoBuffer*)buffer peerIds:(NSMutableArray*)peerIds;
/// <summary>
/// Removes a handler that is raised whenever the current device number changes.
/// </summary>
- (void) removeOnDeviceNumberChangedWithValue:(FMCallback*)value;
/// <summary>
/// Removes a handler that is raised whenever the current device number changes.
/// </summary>
- (void) removeOnDeviceNumberChanged:(FMCallback*)value;
/// <summary>
/// Removes a handler that is raised when the device is disconnected.
/// </summary>
- (void) removeOnDisconnectedWithValue:(FMCallback*)value;
/// <summary>
/// Removes a handler that is raised when the device is disconnected.
/// </summary>
- (void) removeOnDisconnected:(FMCallback*)value;
/// <summary>
/// Removes a handler that is raised whenever a frame is captured from the video device.
/// </summary>
- (void) removeOnFrameWithValue:(FMCallback*)value;
/// <summary>
/// Removes a handler that is raised whenever a frame is captured from the video device.
/// </summary>
- (void) removeOnFrame:(FMCallback*)value;
/// <summary>
/// Removes a handler that is raised whenever the capture is muted.
/// </summary>
- (void) removeOnMutedWithValue:(FMCallback*)value;
/// <summary>
/// Removes a handler that is raised whenever the capture is muted.
/// </summary>
- (void) removeOnMuted:(FMCallback*)value;
/// <summary>
/// Removes a handler that is raised whenever the capture preview is muted.
/// </summary>
- (void) removeOnPreviewMutedWithValue:(FMCallback*)value;
/// <summary>
/// Removes a handler that is raised whenever the capture preview is muted.
/// </summary>
- (void) removeOnPreviewMuted:(FMCallback*)value;
/// <summary>
/// Removes a handler that is raised whenever the capture preview is unmuted.
/// </summary>
- (void) removeOnPreviewUnmutedWithValue:(FMCallback*)value;
/// <summary>
/// Removes a handler that is raised whenever the capture preview is unmuted.
/// </summary>
- (void) removeOnPreviewUnmuted:(FMCallback*)value;
/// <summary>
/// Removes a handler that is raised whenever the capture is unmuted.
/// </summary>
- (void) removeOnUnmutedWithValue:(FMCallback*)value;
/// <summary>
/// Removes a handler that is raised whenever the capture is unmuted.
/// </summary>
- (void) removeOnUnmuted:(FMCallback*)value;
/// <summary>
/// Sets the video device number.
/// </summary>
- (void) setDeviceNumber:(int)value;
/// <summary>
/// Sets the buffer to use when the provider is muted.
/// </summary>
- (void) setMutedFrame:(FMIceLinkWebRTCVideoBuffer*)value;
/// <summary>
/// Sets which peer IDs should receive
/// raised frames. Defaults to <c>null</c>, which
/// means all peers get raised frames.
/// </summary>
- (void) setTargetPeerIds:(NSMutableArray*)value;
/// <summary>
/// Starts the video capture provider.
/// </summary>
/// <returns><c>true</c> if the capture was started successfully; otherwise, <c>false</c>.</returns>
- (bool) start;
- (bool) startInternal;
/// <summary>
/// Stops the video capture provider.
/// </summary>
- (void) stop;
- (bool) stopInternal;
/// <summary>
/// Attempts to switch to a new width/height/frame-rate.
/// </summary>
/// <param name="width">The desired width.</param>
/// <param name="height">The desired height.</param>
/// <param name="frameRate">The desired frame rate.</param>
/// <returns></returns>
- (bool) switchParametersWithWidth:(int)width height:(int)height frameRate:(int)frameRate;
/// <summary>
/// Attempts to switch to a desired device number.
/// </summary>
/// <param name="deviceNumber">The desired device number.</param>
- (bool) switchToDeviceNumberWithDeviceNumber:(int)deviceNumber;
/// <summary>
/// Attempts to switch to a desired device number.
/// </summary>
/// <param name="deviceNumber">The desired device number.</param>
- (bool) switchToDeviceNumber:(int)deviceNumber;
/// <summary>
/// Gets which peer IDs should receive
/// raised frames. Defaults to <c>null</c>, which
/// means all peers get raised frames.
/// </summary>
- (NSMutableArray*) targetPeerIds;
/// <summary>
/// Unmutes the video capture provider.
/// </summary>
- (bool) unmute;
/// <summary>
/// Unmutes the video capture provider preview.
/// </summary>
- (bool) unmutePreview;
+ (FMIceLinkWebRTCVideoCaptureProvider*) videoCaptureProvider;

@end


@class NSMutableArrayFMExtensions;
@class NSStringFMExtensions;
@class FMIceLinkWebRTCVideoCaptureInitializeArgs;
@class FMIceLinkWebRTCVideoBuffer;

/// <summary>
/// A direct video capture provider that allows application
/// code to send frames at custom timing intervals.
/// </summary>
#pragma clang diagnostic ignored "-Wshorten-64-to-32"
#pragma clang diagnostic ignored "-Wint-to-pointer-cast"

@interface FMIceLinkWebRTCDirectVideoCaptureProvider : FMIceLinkWebRTCVideoCaptureProvider 

/// <summary>
/// Destroys the video capture provider.
/// </summary>
- (void) destroy;
+ (FMIceLinkWebRTCDirectVideoCaptureProvider*) directVideoCaptureProvider;
/// <summary>
/// Gets the connected device names.
/// </summary>
/// <returns></returns>
- (NSMutableArray*) getDeviceNames;
/// <summary>
/// Gets the front device number.
/// </summary>
/// <returns></returns>
- (int) getFrontDeviceNumber;
/// <summary>
/// Gets the label of the video device.
/// </summary>
/// <returns></returns>
- (NSString*) getLabel;
/// <summary>
/// Gets the video capture preview control.
/// </summary>
/// <returns></returns>
- (NSObject*) getPreviewControl;
/// <summary>
/// Gets the rear device number.
/// </summary>
/// <returns></returns>
- (int) getRearDeviceNumber;
- (id) init;
/// <summary>
/// Initializes the video capture provider.
/// </summary>
/// <param name="captureArgs">The arguments.</param>
- (void) initializeWithCaptureArgs:(FMIceLinkWebRTCVideoCaptureInitializeArgs*)captureArgs;
/// <summary>
/// Adds a frame to be sent to all peer IDs.
/// </summary>
/// <param name="frame">The frame.</param>
- (void) sendFrameWithFrame:(FMIceLinkWebRTCVideoBuffer*)frame;
/// <summary>
/// Adds a frame to be sent to all peer IDs.
/// </summary>
/// <param name="frame">The frame.</param>
- (void) sendFrame:(FMIceLinkWebRTCVideoBuffer*)frame;
/// <summary>
/// Adds a frame to be sent to specific peer IDs.
/// </summary>
/// <param name="frame">The frame.</param>
/// <param name="peerIds">The IDs of the remote peers.</param>
- (void) sendFrameWithFrame:(FMIceLinkWebRTCVideoBuffer*)frame peerIds:(NSMutableArray*)peerIds;
/// <summary>
/// Adds a frame to be sent to specific peer IDs.
/// </summary>
/// <param name="frame">The frame.</param>
/// <param name="peerIds">The IDs of the remote peers.</param>
- (void) sendFrame:(FMIceLinkWebRTCVideoBuffer*)frame peerIds:(NSMutableArray*)peerIds;
/// <summary>
/// Starts the video capture provider.
/// </summary>
/// <returns>
/// <c>true</c> if the capture was started successfully; otherwise, <c>false</c>.
/// </returns>
- (bool) start;
/// <summary>
/// Stops the video capture provider.
/// </summary>
- (void) stop;

@end


@class FMIceLinkWebRTCAudioMixer;
@class NSMutableArrayFMExtensions;
@class NSStringFMExtensions;
@class FMIceLinkWebRTCAudioCaptureInitializeArgs;

/// <summary>
/// Audio capture provider implementation that captures from a mixer.
/// </summary>
#pragma clang diagnostic ignored "-Wshorten-64-to-32"
#pragma clang diagnostic ignored "-Wint-to-pointer-cast"

@interface FMIceLinkWebRTCMixedAudioCaptureProvider : FMIceLinkWebRTCAudioCaptureProvider 

/// <summary>
/// Destroys the audio capture provider.
/// </summary>
- (void) destroy;
/// <summary>
/// Gets the connected device names.
/// </summary>
/// <returns></returns>
- (NSMutableArray*) getDeviceNames;
/// <summary>
/// Gets the label of the audio device.
/// </summary>
/// <returns></returns>
- (NSString*) getLabel;
- (id) init;
/// <summary>
/// Initializes the audio capture provider.
/// </summary>
/// <param name="captureArgs">The arguments.</param>
- (void) initializeWithCaptureArgs:(FMIceLinkWebRTCAudioCaptureInitializeArgs*)captureArgs;
+ (FMIceLinkWebRTCMixedAudioCaptureProvider*) mixedAudioCaptureProvider;
/// <summary>
/// Gets the mixer.
/// </summary>
- (FMIceLinkWebRTCAudioMixer*) mixer;
/// <summary>
/// Starts the audio capture provider.
/// </summary>
/// <returns>
/// <c>true</c> if the capture was started successfully; otherwise, <c>false</c>.
/// </returns>
- (bool) start;
/// <summary>
/// Stops the audio capture provider.
/// </summary>
- (void) stop;

@end


@class FMIceLinkLinkReceiveRTPArgs;

#pragma clang diagnostic ignored "-Wshorten-64-to-32"
#pragma clang diagnostic ignored "-Wint-to-pointer-cast"

@interface FMIceLinkWebRTCRemoteCaptureDelayedReceiveArgs : NSObject 

- (id) initWithReceiveArgs:(FMIceLinkLinkReceiveRTPArgs*)receiveArgs timestamp:(long long)timestamp;
- (bool) isReadyWithTimestamp:(long long)timestamp;
- (FMIceLinkLinkReceiveRTPArgs*) receiveArgs;
+ (FMIceLinkWebRTCRemoteCaptureDelayedReceiveArgs*) remoteCaptureDelayedReceiveArgsWithReceiveArgs:(FMIceLinkLinkReceiveRTPArgs*)receiveArgs timestamp:(long long)timestamp;
+ (FMIceLinkWebRTCRemoteCaptureDelayedReceiveArgs*) remoteCaptureDelayedReceiveArgs:(FMIceLinkLinkReceiveRTPArgs*)receiveArgs timestamp:(long long)timestamp;
- (void) setReceiveArgs:(FMIceLinkLinkReceiveRTPArgs*)value;
- (void) setTimestamp:(long long)value;
- (long long) timestamp;

@end


@class NSMutableArrayFMExtensions;
@class NSStringFMExtensions;
@class FMIceLinkRTPPacket;

#pragma clang diagnostic ignored "-Wshorten-64-to-32"
#pragma clang diagnostic ignored "-Wint-to-pointer-cast"

@interface FMIceLinkWebRTCRemoteCaptureJitterBuffer : NSObject 

- (int) clockRate;
- (id) initWithName:(NSString*)name clockRate:(int)clockRate length:(int)length maxLength:(int)maxLength;
- (int) length;
- (int) maxLength;
- (int) minLength;
- (NSString*) name;
- (NSMutableArray*) pull;
- (bool) pushWithPacket:(FMIceLinkRTPPacket*)packet;
+ (FMIceLinkWebRTCRemoteCaptureJitterBuffer*) remoteCaptureJitterBufferWithName:(NSString*)name clockRate:(int)clockRate length:(int)length maxLength:(int)maxLength;

@end


@class NSMutableDictionaryFMExtensions;
@class NSMutableDataFMExtensions;
@class FMIceLinkRTPPacket;

/// <summary>
/// Accumulates incoming H264 nalus.
/// </summary>
#pragma clang diagnostic ignored "-Wshorten-64-to-32"
#pragma clang diagnostic ignored "-Wint-to-pointer-cast"

@interface FMIceLinkWebRTCH264Accumulator : NSObject 

/// <summary>
/// Adds the specified packet.
/// </summary>
/// <param name="rtpPacket">The RTP packet.</param>
/// <returns></returns>
- (NSMutableData*) addWithRtpPacket:(FMIceLinkRTPPacket*)rtpPacket;
/// <summary>
/// Clears packets missing fragments.
/// </summary>
/// <returns>The number of cleared packets.</returns>
- (int) clearAged;
+ (FMIceLinkWebRTCH264Accumulator*) h264Accumulator;
- (id) init;

@end


@class NSMutableArrayFMExtensions;
@class FMIceLinkWebRTCH264Packet;
@class NSMutableDataFMExtensions;

/// <summary>
/// An H264 frame built from H264Packets containing H264Nalus and NALU fragments.
/// </summary>
#pragma clang diagnostic ignored "-Wshorten-64-to-32"
#pragma clang diagnostic ignored "-Wint-to-pointer-cast"

@interface FMIceLinkWebRTCH264Frame : NSObject 

/// <summary>
/// Adds the specified nalu.
/// </summary>
/// <param name="packet">The nalu.</param>
- (void) addWithPacket:(FMIceLinkWebRTCH264Packet*)packet;
/// <summary>
/// Assembles the NAL Units from all H264Packets to create an encoded frame.
/// </summary>
/// <returns></returns>
- (NSMutableData*) assemble;
/// <summary>
/// Initializes a new instance of the <see cref="FMIceLinkWebRTCH264Frame" /> class.
/// </summary>
/// <param name="packet">The first fragment.</param>
+ (FMIceLinkWebRTCH264Frame*) h264FrameWithPacket:(FMIceLinkWebRTCH264Packet*)packet;
/// <summary>
/// Increases the age of the frame.
/// </summary>
- (void) increaseAge;
/// <summary>
/// Initializes a new instance of the <see cref="FMIceLinkWebRTCH264Frame" /> class.
/// </summary>
/// <param name="packet">The first fragment.</param>
- (id) initWithPacket:(FMIceLinkWebRTCH264Packet*)packet;
/// <summary>
/// Gets a value indicating whether the frame has aged.
/// </summary>
- (bool) isAged;
/// <summary>
/// Gets whether the frame is ready for assembly.
/// </summary>
- (bool) isComplete;
/// <summary>
/// Gets the maximum age (defaults to 2).
/// </summary>
+ (int) maxAge;
/// <summary>
/// Sets the maximum age (defaults to 2).
/// </summary>
+ (void) setMaxAge:(int)value;

@end



/// <summary>
/// H264 NAL Unit Type defs and helpers.
/// </summary>
#pragma clang diagnostic ignored "-Wshorten-64-to-32"
#pragma clang diagnostic ignored "-Wint-to-pointer-cast"

@interface FMIceLinkWebRTCH264NaluType : NSObject 

/// <summary>
/// Gets the NAL Unit Type.
/// </summary>
/// <param name="packetByte"></param>
/// <returns></returns>
+ (int) getNaluTypeWithPacketByte:(uint8_t)packetByte;
/// <summary>
/// Gets the NAL Unit Type.
/// </summary>
/// <param name="type"></param>
/// <returns></returns>
+ (int) getNaluTypeWithType:(int)type;
/// <summary>
/// Gets the NAL Unit Type.
/// </summary>
/// <param name="type"></param>
/// <returns></returns>
+ (int) getNaluType:(int)type;
+ (FMIceLinkWebRTCH264NaluType*) h264NaluType;
- (id) init;
/// <summary>
/// Determines if a Nalu Type is a Single NAL Unit packet.
/// </summary>
/// <param name="type"></param>
/// <returns></returns>
+ (bool) isSingleNaluWithType:(int)type;

@end


@class NSMutableArrayFMExtensions;
@class NSMutableDataFMExtensions;
@class FMIceLinkWebRTCH264Nalu;

/// <summary>
/// A H264 packet for RTP.
/// </summary>
#pragma clang diagnostic ignored "-Wshorten-64-to-32"
#pragma clang diagnostic ignored "-Wint-to-pointer-cast"

@interface FMIceLinkWebRTCH264Packet : NSObject 

/// <summary>
/// Depacketizes multiple H264Packets into a single encoded frame.
/// Uses packetization mode 0.
/// </summary>
/// <param name="packets"></param>
/// <returns></returns>
+ (NSMutableData*) depacketizeWithPackets:(NSMutableArray*)packets;
/// <summary>
/// Depacketizes multiple H264Packets into a single encoded frame.
/// </summary>
/// <param name="packets"></param>
/// <param name="packetizationMode"></param>
/// <returns></returns>
+ (NSMutableData*) depacketizeWithPackets:(NSMutableArray*)packets packetizationMode:(int)packetizationMode;
/// <summary>
/// Gets if this is the end of a Fragmented Unit.
/// </summary>
- (bool) fragmentEnd;
/// <summary>
/// Gets if this is the start of a Fragmented Unit.
/// </summary>
- (bool) fragmentStart;
/// <summary>
/// Gets the end bit.
/// </summary>
+ (uint8_t) fuEBitMask;
/// <summary>
/// Gets the reserved bit.
/// </summary>
+ (uint8_t) fuRBitMask;
/// <summary>
/// Gets the start bit.
/// </summary>
+ (uint8_t) fuSBitMask;
/// <summary>
/// Gets the packet as a byte array.
/// </summary>
/// <returns></returns>
- (NSMutableData*) getBytes;
/// <summary>
/// Gets a packet as a byte array.
/// </summary>
/// <returns></returns>
+ (NSMutableData*) getBytesWithPacket:(FMIceLinkWebRTCH264Packet*)packet;
/// <summary>
/// Default constuctor.
/// </summary>
+ (FMIceLinkWebRTCH264Packet*) h264Packet;
/// <summary>
/// Single NAL Unit Mode constructor.
/// </summary>
/// <param name="nalu"></param>
+ (FMIceLinkWebRTCH264Packet*) h264PacketWithNalu:(FMIceLinkWebRTCH264Nalu*)nalu;
/// <summary>
/// Default constuctor.
/// </summary>
- (id) init;
/// <summary>
/// Single NAL Unit Mode constructor.
/// </summary>
/// <param name="nalu"></param>
- (id) initWithNalu:(FMIceLinkWebRTCH264Nalu*)nalu;
/// <summary>
/// Gets whether this is the last nalu in the sequence (i.e. RTP Marker).
/// </summary>
- (bool) last;
/// <summary>
/// Gets the NAL Units.
/// </summary>
- (NSMutableArray*) nalus;
/// <summary>
/// Gets the type of Payload that is in this packet.
/// </summary>
- (int) naluType;
/// <summary>
/// Packetizes a single encoded data frame into multiple H264 packets.
/// Note: Only STAP-A and Single NALU are supported right now.
/// Uses packetization mode 0.
/// </summary>
/// <param name="encodedData">The encoded data.</param>
/// <returns></returns>
+ (NSMutableArray*) packetizeWithEncodedData:(NSMutableData*)encodedData;
/// <summary>
/// Packetizes a single encoded data frame into multiple H264 packets.
/// Note: Only STAP-A and Single NALU are supported right now.
/// </summary>
/// <param name="encodedData">The encoded data.</param>
/// <param name="packetizationMode"></param>
/// <returns></returns>
+ (NSMutableArray*) packetizeWithEncodedData:(NSMutableData*)encodedData packetizationMode:(int)packetizationMode;
/// <summary>
/// Parses the specified packet bytes.
/// </summary>
/// <param name="packetBytes">The packet bytes.</param>
/// <returns></returns>
+ (FMIceLinkWebRTCH264Packet*) parseBytesWithPacketBytes:(NSMutableData*)packetBytes;
/// <summary>
/// Gets the NAL Unit(s) payload.
/// </summary>
- (NSMutableData*) payload;
/// <summary>
/// Gets the RTP sequence number.
/// </summary>
- (long long) sequenceNumber;
/// <summary>
/// Sets whether this is the last nalu in the sequence (i.e. RTP Marker).
/// </summary>
- (void) setLast:(bool)value;
/// <summary>
/// Sets the NAL Units.
/// </summary>
- (void) setNalus:(NSMutableArray*)value;
/// <summary>
/// Sets the RTP sequence number.
/// </summary>
- (void) setSequenceNumber:(long long)value;

@end


@class NSMutableDataFMExtensions;
@class FMIceLinkRTPPacket;

/// <summary>
/// Abstract definition of a packetizer/depacketizer.
/// </summary>
#pragma clang diagnostic ignored "-Wshorten-64-to-32"
#pragma clang diagnostic ignored "-Wint-to-pointer-cast"

@interface FMIceLinkWebRTCPadep : NSObject 

/// <summary>
/// Depacketizes a packet.
/// </summary>
/// <param name="packet">The packet.</param>
/// <returns></returns>
- (NSMutableData*) depacketizeWithPacket:(FMIceLinkRTPPacket*)packet;
- (id) init;
+ (FMIceLinkWebRTCPadep*) padep;

@end


@class NSMutableArrayFMExtensions;
@class NSMutableDataFMExtensions;

/// <summary>
/// Abstract definition of a video packetizer/depacketizer.
/// </summary>
#pragma clang diagnostic ignored "-Wshorten-64-to-32"
#pragma clang diagnostic ignored "-Wint-to-pointer-cast"

@interface FMIceLinkWebRTCVideoPadep : FMIceLinkWebRTCPadep 

/// <summary>
/// Gets the average frame rate.
/// </summary>
- (int) averageFrameRate;
/// <summary>
/// Gets the next timestamp for an RTP packet.
/// </summary>
/// <param name="clockRate">The clock rate.</param>
/// <returns></returns>
- (long long) getNextTimestampWithClockRate:(int)clockRate;
- (id) init;
/// <summary>
/// Packetizes an encoded frame.
/// </summary>
/// <param name="encodedFrame">The encoded frame.</param>
/// <param name="clockRate">The clock rate.</param>
/// <returns></returns>
- (NSMutableArray*) packetizeWithEncodedFrame:(NSMutableData*)encodedFrame clockRate:(int)clockRate;
+ (FMIceLinkWebRTCVideoPadep*) videoPadep;

@end


@class FMIceLinkWebRTCH264Accumulator;
@class NSMutableDataFMExtensions;
@class FMIceLinkRTPPacket;
@class NSMutableArrayFMExtensions;

/// <summary>
/// An implementation of a H264 packetizer/depacketizer.
/// </summary>
#pragma clang diagnostic ignored "-Wshorten-64-to-32"
#pragma clang diagnostic ignored "-Wint-to-pointer-cast"

@interface FMIceLinkWebRTCH264Padep : FMIceLinkWebRTCVideoPadep 

/// <summary>
/// Depacketizes a packet.
/// </summary>
/// <param name="packet">The packet.</param>
/// <returns></returns>
- (NSMutableData*) depacketizeWithPacket:(FMIceLinkRTPPacket*)packet;
/// <summary>
/// Gets the NALU length at the specified offset.
/// </summary>
/// <param name="encodedFrame">The encoded frame.</param>
/// <param name="offset">The offset into the encoded frame.</param>
/// <returns></returns>
+ (int) getNaluLengthWithEncodedFrame:(NSMutableData*)encodedFrame offset:(int)offset;
/// <summary>
/// Gets the start code length at the specified offset.
/// </summary>
/// <param name="encodedFrame">The encoded frame.</param>
/// <param name="offset">The offset into the encoded frame.</param>
/// <returns></returns>
+ (int) getStartCodeLengthWithEncodedFrame:(NSMutableData*)encodedFrame offset:(int)offset;
/// <summary>
/// An implementation of a H264 packetizer/depacketizer.
/// </summary>
+ (FMIceLinkWebRTCH264Padep*) h264Padep;
/// <summary>
/// An implementation of a H264 packetizer/depacketizer.
/// </summary>
- (id) init;
/// <summary>
/// Determines whether the encoded frame is an IDR frame.
/// </summary>
/// <param name="encodedFrame">The encoded frame.</param>
/// <returns></returns>
+ (bool) isIdrWithEncodedFrame:(NSMutableData*)encodedFrame;
/// <summary>
/// Determines whether the encoded frame is an IDR frame.
/// </summary>
/// <param name="encodedFrame">The encoded frame.</param>
/// <param name="offset">The offset into the encoded frame.</param>
/// <returns></returns>
+ (bool) isIdrWithEncodedFrame:(NSMutableData*)encodedFrame offset:(int)offset;
/// <summary>
/// Determines whether the encoded frame is a keyframe (IDR, PPS, or SPS).
/// </summary>
/// <param name="encodedFrame">The encoded frame.</param>
/// <returns></returns>
+ (bool) isKeyFrameWithEncodedFrame:(NSMutableData*)encodedFrame;
/// <summary>
/// Determines whether the encoded frame is a given NALU type.
/// </summary>
/// <param name="naluType">The NALU type.</param>
/// <param name="encodedFrame">The encoded frame.</param>
/// <param name="offset">The offset into the encoded frame.</param>
/// <returns></returns>
+ (bool) isNaluTypeWithNaluType:(uint8_t)naluType encodedFrame:(NSMutableData*)encodedFrame offset:(int)offset;
/// <summary>
/// Determines whether the encoded frame is a given NALU type.
/// </summary>
/// <param name="naluType">The NALU type.</param>
/// <param name="encodedFrame">The encoded frame.</param>
/// <param name="offset">The offset into the encoded frame.</param>
/// <returns></returns>
+ (bool) isNaluType:(uint8_t)naluType encodedFrame:(NSMutableData*)encodedFrame offset:(int)offset;
/// <summary>
/// Determines whether the encoded frame is a PPS frame.
/// </summary>
/// <param name="encodedFrame">The encoded frame.</param>
/// <returns></returns>
+ (bool) isPpsWithEncodedFrame:(NSMutableData*)encodedFrame;
/// <summary>
/// Determines whether the encoded frame is a PPS frame.
/// </summary>
/// <param name="encodedFrame">The encoded frame.</param>
/// <param name="offset">The offset into the encoded frame.</param>
/// <returns></returns>
+ (bool) isPpsWithEncodedFrame:(NSMutableData*)encodedFrame offset:(int)offset;
/// <summary>
/// Determines whether the encoded frame is an SPS frame.
/// </summary>
/// <param name="encodedFrame">The encoded frame.</param>
/// <returns></returns>
+ (bool) isSpsWithEncodedFrame:(NSMutableData*)encodedFrame;
/// <summary>
/// Determines whether the encoded frame is an SPS frame.
/// </summary>
/// <param name="encodedFrame">The encoded frame.</param>
/// <param name="offset">The offset into the encoded frame.</param>
/// <returns></returns>
+ (bool) isSpsWithEncodedFrame:(NSMutableData*)encodedFrame offset:(int)offset;
/// <summary>
/// Gets the Packetization Mode (0 or 1 currently supported).
/// </summary>
- (int) packetizationMode;
/// <summary>
/// Packetizes an encoded frame.
/// </summary>
/// <param name="encodedFrame">The encoded frame.</param>
/// <param name="clockRate">The clock rate.</param>
/// <returns></returns>
- (NSMutableArray*) packetizeWithEncodedFrame:(NSMutableData*)encodedFrame clockRate:(int)clockRate;
/// <summary>
/// Gets whether RTP sequence numbering has
/// been violated.
/// </summary>
- (bool) sequenceNumberingViolated;
/// <summary>
/// Sets the Packetization Mode (0 or 1 currently supported).
/// </summary>
- (void) setPacketizationMode:(int)value;

@end


@class FMIceLinkConference;
@class NSStringFMExtensions;
@class FMIceLinkLink;
@class NSMutableArrayFMExtensions;

/// <summary>
/// Abstract definition of an encoder/decoder.
/// </summary>
#pragma clang diagnostic ignored "-Wshorten-64-to-32"
#pragma clang diagnostic ignored "-Wint-to-pointer-cast"

@interface FMIceLinkWebRTCCodec : NSObject 

/// <summary>
/// Gets the clock rate.
/// </summary>
- (int) clockRate;
+ (FMIceLinkWebRTCCodec*) codec;
/// <summary>
/// Gets the conference for which this codec was initialized.
/// </summary>
- (FMIceLinkConference*) conference;
/// <summary>
/// Destroys the codec.
/// </summary>
- (void) destroy;
- (void) destroyInternal;
/// <summary>
/// Gets the encoding name.
/// </summary>
- (NSString*) encodingName;
- (id) init;
- (bool) initializeBaseWithUsage:(FMIceLinkWebRTCCodecUsage)usage conference:(FMIceLinkConference*)conference link:(FMIceLinkLink*)link peerId:(NSString*)peerId peerState:(NSObject*)peerState encodingName:(NSString*)encodingName clockRate:(int)clockRate;
/// <summary>
/// Gets whether the codec has been initialized.
/// </summary>
- (bool) initialized;
/// <summary>
/// Gets the link for which this codec was initialized.
/// </summary>
- (FMIceLinkLink*) link;
/// <summary>
/// Gets the payload type, used by
/// decoders to determine whether an incoming
/// packet should be decoded.
/// </summary>
- (int) payloadType;
/// <summary>
/// Gets the ID of the peer for which this codec was initialized.
/// </summary>
- (NSString*) peerId;
/// <summary>
/// Gets the "state" object of the peer for which this codec was initialized.
/// </summary>
- (NSObject*) peerState;
/// <summary>
/// Processes RTCP packets.
/// </summary>
/// <param name="packets">The packets to process.</param>
- (void) processRTCPWithPackets:(NSMutableArray*)packets;
/// <summary>
/// Sets the payload type, used by
/// decoders to determine whether an incoming
/// packet should be decoded.
/// </summary>
- (void) setPayloadType:(int)value;
/// <summary>
/// Gets the usage of this codec.
/// </summary>
- (FMIceLinkWebRTCCodecUsage) usage;

@end


@class FMIceLinkWebRTCResampler;
@class NSMutableDataFMExtensions;
@class NSStringFMExtensions;
@class FMIceLinkWebRTCAudioBuffer;
@class FMIceLinkRTPPacket;
@class NSMutableArrayFMExtensions;
@class FMIceLinkConference;
@class FMIceLinkLink;

/// <summary>
/// Abstract definition of an audio encoder/decoder.
/// </summary>
#pragma clang diagnostic ignored "-Wshorten-64-to-32"
#pragma clang diagnostic ignored "-Wint-to-pointer-cast"

@interface FMIceLinkWebRTCAudioCodec : FMIceLinkWebRTCCodec 

- (FMIceLinkWebRTCResampler*) _resampler;
/// <summary>
/// Initializes a new instance of the <see cref="FMIceLinkWebRTCAudioCodec" /> class.
/// </summary>
/// <param name="packetTime">The desired packet time for this codec
/// in milliseconds. A zero or negative value indicates
/// any packet time is acceptable.</param>
+ (FMIceLinkWebRTCAudioCodec*) audioCodecWithPacketTime:(int)packetTime;
/// <summary>
/// Initializes a new instance of the <see cref="FMIceLinkWebRTCAudioCodec" /> class.
/// </summary>
/// <param name="packetTime">The desired packet time for this codec
/// in milliseconds. A zero or negative value indicates
/// any packet time is acceptable.</param>
/// <param name="bytesPerSample">The number of bytes per sample of audio data.</param>
+ (FMIceLinkWebRTCAudioCodec*) audioCodecWithPacketTime:(int)packetTime bytesPerSample:(int)bytesPerSample;
/// <summary>
/// Gets the number of bytes per
/// sample of audio data.
/// </summary>
- (int) bytesPerSample;
/// <summary>
/// Gets the number of channels for captured data.
/// </summary>
+ (int) captureChannels;
/// <summary>
/// Gets the clock rate for captured data.
/// </summary>
+ (int) captureClockRate;
/// <summary>
/// Gets the number of channels.
/// </summary>
- (int) channels;
/// <summary>
/// Gets a unique key for a given encoding name, clock rate, and channel count.
/// </summary>
/// <param name="encodingName">The encoding name.</param>
/// <param name="clockRate">The clock rate.</param>
/// <param name="channels">The number of channels.</param>
/// <returns>A unique key.</returns>
+ (NSString*) createKeyWithEncodingName:(NSString*)encodingName clockRate:(int)clockRate channels:(int)channels;
- (FMIceLinkWebRTCAudioBuffer*) decodeInternalWithEncodedFrame:(NSMutableData*)encodedFrame;
/// <summary>
/// Decodes an encoded frame.
/// </summary>
/// <param name="encodedFrame">The encoded frame.</param>
/// <returns></returns>
- (FMIceLinkWebRTCAudioBuffer*) decodeWithEncodedFrame:(NSMutableData*)encodedFrame;
/// <summary>
/// Depacketizes a packet.
/// </summary>
/// <param name="packet">The packet.</param>
/// <returns></returns>
- (NSMutableData*) depacketizeWithPacket:(FMIceLinkRTPPacket*)packet;
- (NSMutableData*) encodeInternal2WithFrame:(FMIceLinkWebRTCAudioBuffer*)frame;
- (NSMutableArray*) encodeInternalWithFrame:(FMIceLinkWebRTCAudioBuffer*)frame;
/// <summary>
/// Encodes a frame.
/// </summary>
/// <param name="frame">The frame.</param>
/// <returns></returns>
- (NSMutableData*) encodeWithFrame:(FMIceLinkWebRTCAudioBuffer*)frame;
/// <summary>
/// Initializes the codec.
/// </summary>
/// <param name="usage">The codec usage.</param>
/// <param name="conference">The conference.</param>
/// <param name="link">The link.</param>
/// <param name="peerId">The ID of the remote peer (or null).</param>
/// <param name="peerState">Custom state associated with the remote peer (or null).</param>
/// <param name="encodingName">The encoding name, as defined in SDP.</param>
/// <param name="clockRate">The clock rate.</param>
/// <param name="channels">The channels.</param>
/// <returns><c>true</c> if initialized; <c>false</c> if previously initialized.</returns>
- (bool) initializeWithUsage:(FMIceLinkWebRTCCodecUsage)usage conference:(FMIceLinkConference*)conference link:(FMIceLinkLink*)link peerId:(NSString*)peerId peerState:(NSObject*)peerState encodingName:(NSString*)encodingName clockRate:(int)clockRate channels:(int)channels;
/// <summary>
/// Initializes the codec.
/// </summary>
/// <param name="usage">The codec usage.</param>
/// <param name="encodingName">The encoding name, as defined in SDP.</param>
/// <param name="clockRate">The clock rate.</param>
/// <param name="channels">The channels.</param>
/// <returns><c>true</c> if initialized; <c>false</c> if previously initialized.</returns>
- (bool) initializeWithUsage:(FMIceLinkWebRTCCodecUsage)usage encodingName:(NSString*)encodingName clockRate:(int)clockRate channels:(int)channels;
/// <summary>
/// Initializes a new instance of the <see cref="FMIceLinkWebRTCAudioCodec" /> class.
/// </summary>
/// <param name="packetTime">The desired packet time for this codec
/// in milliseconds. A zero or negative value indicates
/// any packet time is acceptable.</param>
- (id) initWithPacketTime:(int)packetTime;
/// <summary>
/// Initializes a new instance of the <see cref="FMIceLinkWebRTCAudioCodec" /> class.
/// </summary>
/// <param name="packetTime">The desired packet time for this codec
/// in milliseconds. A zero or negative value indicates
/// any packet time is acceptable.</param>
/// <param name="bytesPerSample">The number of bytes per sample of audio data.</param>
- (id) initWithPacketTime:(int)packetTime bytesPerSample:(int)bytesPerSample;
/// <summary>
/// Gets the key used to identify this audio codec.
/// </summary>
- (NSString*) key;
/// <summary>
/// Packetizes an encoded frame.
/// </summary>
/// <param name="encodedFrame">The encoded frame.</param>
/// <returns></returns>
- (NSMutableArray*) packetizeWithEncodedFrame:(NSMutableData*)encodedFrame;
/// <summary>
/// Gets the packet size.
/// </summary>
- (int) packetSize;
/// <summary>
/// Gets the desired packet time for this codec
/// in milliseconds. A zero or negative value indicates
/// any packet time is acceptable.
/// </summary>
- (int) packetTime;
/// <summary>
/// Gets a value indicating whether the
/// next audio buffer has requested that the RTP
/// timestamp be reset.
/// </summary>
- (bool) resetTimestamp;
/// <summary>
/// Sets a value indicating whether the
/// next audio buffer has requested that the RTP
/// timestamp be reset.
/// </summary>
- (void) setResetTimestamp:(bool)value;
/// <summary>
/// Returns a string that represents this instance.
/// </summary>
- (NSString*) toString;
/// <summary>
/// Returns a string that represents this instance.
/// </summary>
- (NSString*) description;

@end


@class FMIceLinkWebRTCBasicAudioPadep;
@class FMIceLinkWebRTCAudioBuffer;
@class NSMutableDataFMExtensions;
@class FMIceLinkRTPPacket;
@class NSMutableArrayFMExtensions;

/// <summary>
/// An implementation of a PCM (raw) encoder/decoder.
/// </summary>
#pragma clang diagnostic ignored "-Wshorten-64-to-32"
#pragma clang diagnostic ignored "-Wint-to-pointer-cast"

@interface FMIceLinkWebRTCPcmCodec : FMIceLinkWebRTCAudioCodec 

/// <summary>
/// Decodes an encoded frame.
/// </summary>
/// <param name="encodedFrame">The encoded frame.</param>
/// <returns></returns>
- (FMIceLinkWebRTCAudioBuffer*) decodeWithEncodedFrame:(NSMutableData*)encodedFrame;
/// <summary>
/// Depacketizes a packet.
/// </summary>
/// <param name="packet">The packet.</param>
/// <returns></returns>
- (NSMutableData*) depacketizeWithPacket:(FMIceLinkRTPPacket*)packet;
/// <summary>
/// Destroys the codec.
/// </summary>
- (void) destroy;
/// <summary>
/// Encodes a frame.
/// </summary>
/// <param name="frame">The frame.</param>
/// <returns></returns>
- (NSMutableData*) encodeWithFrame:(FMIceLinkWebRTCAudioBuffer*)frame;
/// <summary>
/// Initializes a new instance of the <see cref="FMIceLinkWebRTCPcmCodec" /> class.
/// </summary>
- (id) init;
/// <summary>
/// Packetizes an encoded frame.
/// </summary>
/// <param name="encodedFrame">The encoded frame.</param>
/// <returns></returns>
- (NSMutableArray*) packetizeWithEncodedFrame:(NSMutableData*)encodedFrame;
/// <summary>
/// Initializes a new instance of the <see cref="FMIceLinkWebRTCPcmCodec" /> class.
/// </summary>
+ (FMIceLinkWebRTCPcmCodec*) pcmCodec;
/// <summary>
/// Processes RTCP packets.
/// </summary>
/// <param name="packets">The packets to process.</param>
- (void) processRTCPWithPackets:(NSMutableArray*)packets;

@end


@class NSStringFMExtensions;
@class FMIceLinkWebRTCVideoBuffer;
@class NSMutableDataFMExtensions;
@class FMIceLinkRTPPacket;
@class FMIceLinkConference;
@class FMIceLinkLink;
@class NSMutableArrayFMExtensions;

/// <summary>
/// Abstract definition of a video encoder/decoder.
/// </summary>
#pragma clang diagnostic ignored "-Wshorten-64-to-32"
#pragma clang diagnostic ignored "-Wint-to-pointer-cast"

@interface FMIceLinkWebRTCVideoCodec : FMIceLinkWebRTCCodec 

/// <summary>
/// Gets the clock rate for captured data.
/// </summary>
+ (int) captureClockRate;
/// <summary>
/// Gets a unique key for a given encoding name and clock rate.
/// </summary>
/// <param name="encodingName">The encoding name.</param>
/// <param name="clockRate">The clock rate.</param>
/// <returns>A unique key.</returns>
+ (NSString*) createKeyWithEncodingName:(NSString*)encodingName clockRate:(int)clockRate;
- (FMIceLinkWebRTCVideoBuffer*) decodeInternalWithEncodedFrame:(NSMutableData*)encodedFrame;
/// <summary>
/// Gets whether the decoder needs a keyframe. This
/// is checked after every Decode operation.
/// </summary>
/// <returns></returns>
- (bool) decoderNeedsKeyFrame;
/// <summary>
/// Decodes an encoded frame.
/// </summary>
/// <param name="encodedFrame">The encoded frame.</param>
/// <returns></returns>
- (FMIceLinkWebRTCVideoBuffer*) decodeWithEncodedFrame:(NSMutableData*)encodedFrame;
/// <summary>
/// Depacketizes a packet.
/// </summary>
/// <param name="packet">The packet.</param>
/// <returns></returns>
- (NSMutableData*) depacketizeWithPacket:(FMIceLinkRTPPacket*)packet;
- (NSMutableData*) encodeInternalWithFrame:(FMIceLinkWebRTCVideoBuffer*)frame;
/// <summary>
/// Encodes a frame.
/// </summary>
/// <param name="frame">The frame.</param>
/// <returns></returns>
- (NSMutableData*) encodeWithFrame:(FMIceLinkWebRTCVideoBuffer*)frame;
- (id) init;
/// <summary>
/// Initializes the codec.
/// </summary>
/// <param name="usage">The codec usage.</param>
/// <param name="conference">The conference.</param>
/// <param name="link">The link.</param>
/// <param name="peerId">The ID of the remote peer (or null).</param>
/// <param name="peerState">Custom state associated with the remote peer (or null).</param>
/// <param name="encodingName">The encoding name, as defined in SDP.</param>
/// <returns><c>true</c> if initialized; <c>false</c> if previously initialized.</returns>
- (bool) initializeWithUsage:(FMIceLinkWebRTCCodecUsage)usage conference:(FMIceLinkConference*)conference link:(FMIceLinkLink*)link peerId:(NSString*)peerId peerState:(NSObject*)peerState encodingName:(NSString*)encodingName;
/// <summary>
/// Initializes the codec.
/// </summary>
/// <param name="usage">The codec usage.</param>
/// <param name="conference">The conference.</param>
/// <param name="link">The link.</param>
/// <param name="peerId">The ID of the remote peer (or null).</param>
/// <param name="peerState">Custom state associated with the remote peer (or null).</param>
/// <param name="encodingName">The encoding name, as defined in SDP.</param>
/// <param name="clockRate">The clock rate.</param>
/// <returns><c>true</c> if initialized; <c>false</c> if previously initialized.</returns>
- (bool) initializeWithUsage:(FMIceLinkWebRTCCodecUsage)usage conference:(FMIceLinkConference*)conference link:(FMIceLinkLink*)link peerId:(NSString*)peerId peerState:(NSObject*)peerState encodingName:(NSString*)encodingName clockRate:(int)clockRate;
/// <summary>
/// Initializes the codec.
/// </summary>
/// <param name="usage">The codec usage.</param>
/// <param name="encodingName">The encoding name, as defined in SDP.</param>
/// <returns><c>true</c> if initialized; <c>false</c> if previously initialized.</returns>
- (bool) initializeWithUsage:(FMIceLinkWebRTCCodecUsage)usage encodingName:(NSString*)encodingName;
/// <summary>
/// Initializes the codec.
/// </summary>
/// <param name="usage">The codec usage.</param>
/// <param name="encodingName">The encoding name, as defined in SDP.</param>
/// <param name="clockRate">The clock rate.</param>
/// <returns><c>true</c> if initialized; <c>false</c> if previously initialized.</returns>
- (bool) initializeWithUsage:(FMIceLinkWebRTCCodecUsage)usage encodingName:(NSString*)encodingName clockRate:(int)clockRate;
/// <summary>
/// Gets the key used to identify this video codec.
/// </summary>
- (NSString*) key;
/// <summary>
/// Packetizes an encoded frame.
/// </summary>
/// <param name="encodedFrame">The encoded frame.</param>
/// <returns></returns>
- (NSMutableArray*) packetizeWithEncodedFrame:(NSMutableData*)encodedFrame;
/// <summary>
/// Returns a string that represents this instance.
/// </summary>
- (NSString*) toString;
/// <summary>
/// Returns a string that represents this instance.
/// </summary>
- (NSString*) description;
+ (FMIceLinkWebRTCVideoCodec*) videoCodec;

@end


@class FMIceLinkWebRTCVideoBuffer;
@class NSMutableDataFMExtensions;
@class FMIceLinkRTPPacket;
@class NSMutableArrayFMExtensions;

/// <summary>
/// An implementation of a ULP FEC encoder/decoder.
/// </summary>
#pragma clang diagnostic ignored "-Wshorten-64-to-32"
#pragma clang diagnostic ignored "-Wint-to-pointer-cast"

@interface FMIceLinkWebRTCUlpFecCodec : FMIceLinkWebRTCVideoCodec 

/// <summary>
/// Gets whether the decoder needs a keyframe. This
/// is checked after every failed Decode operation.
/// </summary>
/// <returns></returns>
- (bool) decoderNeedsKeyFrame;
/// <summary>
/// Decodes an encoded frame.
/// </summary>
/// <param name="encodedFrame">The encoded frame.</param>
/// <returns></returns>
- (FMIceLinkWebRTCVideoBuffer*) decodeWithEncodedFrame:(NSMutableData*)encodedFrame;
/// <summary>
/// Depacketizes a packet.
/// </summary>
/// <param name="packet">The packet.</param>
/// <returns></returns>
- (NSMutableData*) depacketizeWithPacket:(FMIceLinkRTPPacket*)packet;
/// <summary>
/// Destroys the codec.
/// </summary>
- (void) destroy;
/// <summary>
/// Encodes a frame.
/// </summary>
/// <param name="frame">The frame.</param>
/// <returns></returns>
- (NSMutableData*) encodeWithFrame:(FMIceLinkWebRTCVideoBuffer*)frame;
- (id) init;
/// <summary>
/// Packetizes an encoded frame.
/// </summary>
/// <param name="encodedFrame">The encoded frame.</param>
/// <returns></returns>
- (NSMutableArray*) packetizeWithEncodedFrame:(NSMutableData*)encodedFrame;
/// <summary>
/// Processes RTCP packets.
/// </summary>
/// <param name="packets">The packets to process.</param>
- (void) processRTCPWithPackets:(NSMutableArray*)packets;
+ (FMIceLinkWebRTCUlpFecCodec*) ulpFecCodec;

@end


@class NSMutableArrayFMExtensions;
@class NSMutableDataFMExtensions;
@class FMIceLinkWebRTCAudioBuffer;

/// <summary>
/// Utility class for resampling audio data.
/// </summary>
#pragma clang diagnostic ignored "-Wshorten-64-to-32"
#pragma clang diagnostic ignored "-Wint-to-pointer-cast"

@interface FMIceLinkWebRTCResampler : NSObject 

/// <summary>
/// Gets the default low pass order.
/// </summary>
+ (int) defaultLowPassOrder;
/// <summary>
/// Gets the resampling factor.
/// </summary>
- (double) factor;
/// <summary>
/// Initializes a new instance of the <see cref="FMIceLinkWebRTCResampler" /> class.
/// </summary>
/// <param name="factor">The resampling factor.</param>
- (id) initWithFactor:(double)factor;
/// <summary>
/// Initializes a new instance of the <see cref="FMIceLinkWebRTCResampler" /> class.
/// </summary>
/// <param name="sourceClockRate">The source clock rate.</param>
/// <param name="targetClockRate">The target clock rate.</param>
- (id) initWithSourceClockRate:(int)sourceClockRate targetClockRate:(int)targetClockRate;
/// <summary>
/// Resamples an audio buffer (if resampler is not null) and converts from
/// stereo to mono or mono to stereo (if channels are not equal).
/// </summary>
/// <param name="buffer">The audio buffer to convert/resample.</param>
/// <param name="resampler">The audio resampler.</param>
/// <param name="sourceChannels">The source channel count.</param>
/// <param name="targetChannels">The target channel count.</param>
/// <returns></returns>
+ (bool) resampleAndConvertWithBuffer:(FMIceLinkWebRTCAudioBuffer*)buffer resampler:(FMIceLinkWebRTCResampler*)resampler sourceChannels:(int)sourceChannels targetChannels:(int)targetChannels;
/// <summary>
/// Resamples an audio buffer (if resampler is not null) and converts from
/// stereo to mono or mono to stereo (if channels are not equal).
/// </summary>
/// <param name="buffer">The audio buffer to convert/resample.</param>
/// <param name="resampler">The audio resampler.</param>
/// <param name="lastBatch">Whether or not this is the last batch. If <c>true</c>, input will be read to the end.</param>
/// <param name="sourceChannels">The source channel count.</param>
/// <param name="targetChannels">The target channel count.</param>
/// <returns></returns>
+ (bool) resampleAndConvertWithBuffer:(FMIceLinkWebRTCAudioBuffer*)buffer resampler:(FMIceLinkWebRTCResampler*)resampler sourceChannels:(int)sourceChannels targetChannels:(int)targetChannels lastBatch:(bool)lastBatch;
/// <summary>
/// Initializes a new instance of the <see cref="FMIceLinkWebRTCResampler" /> class.
/// </summary>
/// <param name="factor">The resampling factor.</param>
+ (FMIceLinkWebRTCResampler*) resamplerWithFactor:(double)factor;
/// <summary>
/// Initializes a new instance of the <see cref="FMIceLinkWebRTCResampler" /> class.
/// </summary>
/// <param name="sourceClockRate">The source clock rate.</param>
/// <param name="targetClockRate">The target clock rate.</param>
+ (FMIceLinkWebRTCResampler*) resamplerWithSourceClockRate:(int)sourceClockRate targetClockRate:(int)targetClockRate;
/// <summary>
/// Resamples the given audio buffer.
/// </summary>
/// <param name="buffer">The audio buffer to resample.</param>
/// <returns></returns>
- (bool) resampleWithBuffer:(FMIceLinkWebRTCAudioBuffer*)buffer;
/// <summary>
/// Resamples the given audio buffer.
/// </summary>
/// <param name="buffer">The audio buffer to resample.</param>
/// <param name="lastBatch">Whether or not this is the last batch. If <c>true</c>, input will be read to the end.</param>
/// <returns></returns>
- (bool) resampleWithBuffer:(FMIceLinkWebRTCAudioBuffer*)buffer lastBatch:(bool)lastBatch;
/// <summary>
/// Sets the default low pass order.
/// </summary>
+ (void) setDefaultLowPassOrder:(int)value;

@end


@class FMIceLinkWebRTCFecSortablePacket;
@class NSMutableArrayFMExtensions;

/// <summary>
/// A context that provides codec-independent forward error correction, based
/// on RFC 5109. Supports both unequal level protection (UEP) across packets
/// as well as uneven level protection (ULP) within packets.
/// </summary>
#pragma clang diagnostic ignored "-Wshorten-64-to-32"
#pragma clang diagnostic ignored "-Wint-to-pointer-cast"

@interface FMIceLinkWebRTCFecContext : NSObject 

/// <summary>
/// Decodes a list of media and FEC packets. It will parse the received packet
/// list, storing FEC packets internally and inserting media packets into
/// the output recovered packet list. The recovered list will be sorted by
/// ascending sequence number and have duplicates removed.
/// </summary>
/// <param name="receivedPacketList">The receivedPacketList.</param>
/// <param name="recoveredPacketList">The recoveredPacketList.</param>
/// <returns><c>true</c> if successful; otherwise, <c>false</c></returns>
- (bool) decodeWithReceivedPacketList:(NSMutableArray*)receivedPacketList recoveredPacketList:(NSMutableArray*)recoveredPacketList;
/// <summary>
/// Initializes a new instance of the <see cref="FMIceLinkWebRTCFecContext" /> class.
/// </summary>
+ (FMIceLinkWebRTCFecContext*) fecContext;
/// <summary>
/// Gets whether an FEC packet has been received.
/// </summary>
- (bool) fecPacketReceived;
/// <summary>
/// Generates a list of FEC packets from supplied media packets.
/// </summary>
/// <param name="mediaPackets">The mediaPacketList.</param>
/// <param name="protectionFactor">The protection factor (0 to 255).</param>
/// <param name="numImportantPackets">The number of "important" packets which may receive greater protection.</param>
/// <param name="useUnequalProtection">Whether to allocate more protection to the important packets.</param>
/// <param name="maskType">The packet mask type to use.</param>
/// <param name="packetList">The empty list to fill with FEC packets.</param>
/// <returns><c>true</c> if successful; otherwise, <c>false</c></returns>
- (bool) generateWithMediaPackets:(NSMutableArray*)mediaPackets protectionFactor:(int)protectionFactor numImportantPackets:(int)numImportantPackets useUnequalProtection:(bool)useUnequalProtection maskType:(FMIceLinkWebRTCFecMaskType)maskType packetList:(NSMutableArray*)packetList;
/// <summary>
/// Gets the number of fec packets.
/// </summary>
/// <param name="numMediaPackets">The number of media packets.</param>
/// <param name="protectionFactor">The protection factor.</param>
/// <returns></returns>
- (int) getNumberOfFecPacketsWithNumMediaPackets:(int)numMediaPackets protectionFactor:(int)protectionFactor;
/// <summary>
/// Initializes a new instance of the <see cref="FMIceLinkWebRTCFecContext" /> class.
/// </summary>
- (id) init;
/// <summary>
/// Gets the maximum size of an IP packet.
/// </summary>
+ (int) ipPacketSize;
/// <summary>
/// Gets the maximum number of media packets that can be protected.
/// </summary>
+ (int) maxMediaPackets;
/// <summary>
/// Gets the packet overhead (size in bytes of the FEC/ULP headers).
/// </summary>
/// <returns></returns>
+ (int) packetOverhead;
/// <summary>
/// Resets internal states from the last frame and clears the recovered packet list.
/// </summary>
/// <param name="recoveredPacketList">The recoveredPacketList.</param>
- (void) resetStateWithRecoveredPacketList:(NSMutableArray*)recoveredPacketList;

@end


@class FMIceLinkWebRTCFecContext;
@class NSMutableArrayFMExtensions;

/// <summary>
/// FEC context tests.
/// </summary>
#pragma clang diagnostic ignored "-Wshorten-64-to-32"
#pragma clang diagnostic ignored "-Wint-to-pointer-cast"

@interface FMIceLinkWebRTCFecContextTest : NSObject 

+ (FMIceLinkWebRTCFecContextTest*) fecContextTest;
- (id) init;
/// <summary>
/// Runs all tests.
/// </summary>
+ (void) runAll;
/// <summary>
/// Test.
/// </summary>
- (void) testFecRecoveryNoLoss;
/// <summary>
/// Test.
/// </summary>
- (void) testFecRecoveryNoLossUep;
/// <summary>
/// Test.
/// </summary>
- (void) testFecRecoveryNonConsecutivePackets;
/// <summary>
/// Test.
/// </summary>
- (void) testFecRecoveryNonConsecutivePacketsExtension;
/// <summary>
/// Test.
/// </summary>
- (void) testFecRecoveryNonConsecutivePacketsWrap;
/// <summary>
/// Test.
/// </summary>
- (void) testFecRecoveryWithFecOutOfOrder;
/// <summary>
/// Test.
/// </summary>
- (void) testFecRecoveryWithLoss;
/// <summary>
/// Test.
/// </summary>
- (void) testFecRecoveryWithLoss50percBurstyMask;
/// <summary>
/// Test.
/// </summary>
- (void) testFecRecoveryWithLoss50percRandomMask;
/// <summary>
/// Test.
/// </summary>
- (void) testFecRecoveryWithLoss50percUepRandomMask;
/// <summary>
/// Test.
/// </summary>
- (void) testFecRecoveryWithLossUep;
/// <summary>
/// Test.
/// </summary>
- (void) testFecRecoveryWithSeqNumGapOneFrameNoRecovery;
/// <summary>
/// Test.
/// </summary>
- (void) testFecRecoveryWithSeqNumGapOneFrameRecovery;
/// <summary>
/// Test.
/// </summary>
- (void) testFecRecoveryWithSeqNumGapTwoFrames;

@end



/// <summary>
/// A sortable packet.
/// </summary>
#pragma clang diagnostic ignored "-Wshorten-64-to-32"
#pragma clang diagnostic ignored "-Wint-to-pointer-cast"

@interface FMIceLinkWebRTCFecSortablePacket : NSObject 

+ (FMIceLinkWebRTCFecSortablePacket*) fecSortablePacket;
- (id) init;
/// <summary>
/// Gets the sequence number.
/// </summary>
- (int) sequenceNumber;
/// <summary>
/// Sets the sequence number.
/// </summary>
- (void) setSequenceNumber:(int)value;

@end


@class NSMutableArrayFMExtensions;
@class FMIceLinkWebRTCFecRawPacket;

#pragma clang diagnostic ignored "-Wshorten-64-to-32"
#pragma clang diagnostic ignored "-Wint-to-pointer-cast"

@interface FMIceLinkWebRTCFecPacket : FMIceLinkWebRTCFecSortablePacket 

+ (FMIceLinkWebRTCFecPacket*) fecPacket;
- (id) init;
- (NSMutableArray*) protectedPacketList;
- (FMIceLinkWebRTCFecRawPacket*) raw;
- (void) setProtectedPacketList:(NSMutableArray*)value;
- (void) setRaw:(FMIceLinkWebRTCFecRawPacket*)value;
- (void) setSynchronizationSource:(long long)value;
- (long long) synchronizationSource;

@end


@class NSMutableArrayFMExtensions;

#pragma clang diagnostic ignored "-Wshorten-64-to-32"
#pragma clang diagnostic ignored "-Wint-to-pointer-cast"

@interface FMIceLinkWebRTCFecPacketMaskTable : NSObject 

+ (FMIceLinkWebRTCFecPacketMaskTable*) fecPacketMaskTableWithMaskType:(FMIceLinkWebRTCFecMaskType)maskType numMediaPackets:(int)numMediaPackets;
- (id) initWithMaskType:(FMIceLinkWebRTCFecMaskType)maskType numMediaPackets:(int)numMediaPackets;
- (FMIceLinkWebRTCFecMaskType) maskType;
- (NSMutableArray*) table;

@end


@class FMIceLinkWebRTCFecContext;
@class NSMutableArrayFMExtensions;
@class FMIceLinkWebRTCFecProtectionParameters;
@class NSMutableDataFMExtensions;
@class FMIceLinkWebRTCFecRedPacket;

/// <summary>
/// A producer of FEC packets.
/// </summary>
#pragma clang diagnostic ignored "-Wshorten-64-to-32"
#pragma clang diagnostic ignored "-Wint-to-pointer-cast"

@interface FMIceLinkWebRTCFecProducer : NSObject 

/// <summary>
/// Adds an RTP packet and generates FEC.
/// </summary>
/// <param name="dataBuffer">The data buffer.</param>
/// <param name="payloadLength">Length of the payload.</param>
/// <param name="rtpHeaderLength">Length of the RTP header.</param>
/// <returns></returns>
- (bool) addRtpPacketAndGenerateFecWithDataBuffer:(NSMutableData*)dataBuffer payloadLength:(int)payloadLength rtpHeaderLength:(int)rtpHeaderLength;
/// <summary>
/// Builds a RED packet.
/// </summary>
/// <param name="dataBuffer">The data buffer.</param>
/// <param name="payloadLength">Length of the payload.</param>
/// <param name="rtpHeaderLength">Length of the RTP header.</param>
/// <param name="redPayloadType">Type of the red payload.</param>
/// <returns></returns>
- (FMIceLinkWebRTCFecRedPacket*) buildRedPacketWithDataBuffer:(NSMutableData*)dataBuffer payloadLength:(int)payloadLength rtpHeaderLength:(int)rtpHeaderLength redPayloadType:(int)redPayloadType;
/// <summary>
/// Gets a value indicating whether the excess overhead is below the maximum allowed.
/// </summary>
- (bool) excessOverheadBelowMax;
/// <summary>
/// Gets a value indicating whether FEC packets are available.
/// </summary>
- (bool) fecAvailable;
/// <summary>
/// Initializes a new instance of the <see cref="FMIceLinkWebRTCFecProducer" /> class.
/// </summary>
/// <param name="fec">The fec.</param>
+ (FMIceLinkWebRTCFecProducer*) fecProducerWithFec:(FMIceLinkWebRTCFecContext*)fec;
/// <summary>
/// Gets the FEC/RED packet.
/// </summary>
/// <param name="redPayloadType">Type of the RED payload.</param>
/// <param name="fecPayloadType">Type of the FEC payload.</param>
/// <param name="sequenceNumber">The sequence number.</param>
/// <param name="rtpHeaderLength">Length of the RTP header.</param>
/// <returns></returns>
- (FMIceLinkWebRTCFecRedPacket*) getFecPacketWithRedPayloadType:(int)redPayloadType fecPayloadType:(int)fecPayloadType sequenceNumber:(int)sequenceNumber rtpHeaderLength:(int)rtpHeaderLength;
/// <summary>
/// Initializes a new instance of the <see cref="FMIceLinkWebRTCFecProducer" /> class.
/// </summary>
/// <param name="fec">The fec.</param>
- (id) initWithFec:(FMIceLinkWebRTCFecContext*)fec;
/// <summary>
/// Gets a value indicating whether the minimum number of media packets has been reached.
/// </summary>
- (bool) minimumMediaPacketsReached;
/// <summary>
/// Sets the FEC parameters.
/// </summary>
/// <param name="parameters">The parameters.</param>
/// <param name="numberFirstPartition">The number of first partition packets.</param>
- (void) setFecParametersWithParameters:(FMIceLinkWebRTCFecProtectionParameters*)parameters numberFirstPartition:(int)numberFirstPartition;
/// <summary>
/// Sets the FEC parameters.
/// </summary>
/// <param name="parameters">The parameters.</param>
/// <param name="numberFirstPartition">The number of first partition packets.</param>
- (void) setFecParameters:(FMIceLinkWebRTCFecProtectionParameters*)parameters numberFirstPartition:(int)numberFirstPartition;

@end


@class FMIceLinkWebRTCFecContext;
@class FMIceLinkWebRTCFrameGenerator;
@class FMIceLinkWebRTCFecProducer;

/// <summary>
/// FEC producer tests.
/// </summary>
#pragma clang diagnostic ignored "-Wshorten-64-to-32"
#pragma clang diagnostic ignored "-Wint-to-pointer-cast"

@interface FMIceLinkWebRTCFecProducerTest : NSObject 

/// <summary>
/// Initializes a new instance of the <see cref="FMIceLinkWebRTCFecProducerTest" /> class.
/// </summary>
+ (FMIceLinkWebRTCFecProducerTest*) fecProducerTest;
/// <summary>
/// Initializes a new instance of the <see cref="FMIceLinkWebRTCFecProducerTest" /> class.
/// </summary>
- (id) init;
/// <summary>
/// Runs all tests.
/// </summary>
+ (void) runAll;
/// <summary>
/// Test.
/// </summary>
- (void) testBuildRedPacket;
/// <summary>
/// Test.
/// </summary>
- (void) testOneFrameFec;
/// <summary>
/// Test.
/// </summary>
- (void) testTwoFrameFec;

@end


@class FMIceLinkWebRTCFecRawPacket;

#pragma clang diagnostic ignored "-Wshorten-64-to-32"
#pragma clang diagnostic ignored "-Wint-to-pointer-cast"

@interface FMIceLinkWebRTCFecProtectedPacket : FMIceLinkWebRTCFecSortablePacket 

+ (FMIceLinkWebRTCFecProtectedPacket*) fecProtectedPacket;
- (id) init;
- (FMIceLinkWebRTCFecRawPacket*) raw;
- (void) setRaw:(FMIceLinkWebRTCFecRawPacket*)value;

@end



/// <summary>
/// FEC protection parameters.
/// </summary>
#pragma clang diagnostic ignored "-Wshorten-64-to-32"
#pragma clang diagnostic ignored "-Wint-to-pointer-cast"

@interface FMIceLinkWebRTCFecProtectionParameters : NSObject 

/// <summary>
/// Gets the type of the FEC mask.
/// </summary>
- (FMIceLinkWebRTCFecMaskType) fecMaskType;
/// <summary>
/// Initializes a new instance of the <see cref="FMIceLinkWebRTCFecProtectionParameters" /> class.
/// </summary>
+ (FMIceLinkWebRTCFecProtectionParameters*) fecProtectionParameters;
/// <summary>
/// Gets the FEC rate.
/// </summary>
- (int) fecRate;
/// <summary>
/// Initializes a new instance of the <see cref="FMIceLinkWebRTCFecProtectionParameters" /> class.
/// </summary>
- (id) init;
/// <summary>
/// Gets the maximum FEC frames.
/// </summary>
- (int) maxFecFrames;
/// <summary>
/// Sets the type of the FEC mask.
/// </summary>
- (void) setFecMaskType:(FMIceLinkWebRTCFecMaskType)value;
/// <summary>
/// Sets the FEC rate.
/// </summary>
- (void) setFecRate:(int)value;
/// <summary>
/// Sets the maximum FEC frames.
/// </summary>
- (void) setMaxFecFrames:(int)value;
/// <summary>
/// Sets whether UEP protection should be used.
/// </summary>
- (void) setUseUepProtection:(bool)value;
/// <summary>
/// Gets whether UEP protection should be used.
/// </summary>
- (bool) useUepProtection;

@end


@class NSMutableDataFMExtensions;

/// <summary>
/// A raw packet with data/length.
/// </summary>
#pragma clang diagnostic ignored "-Wshorten-64-to-32"
#pragma clang diagnostic ignored "-Wint-to-pointer-cast"

@interface FMIceLinkWebRTCFecRawPacket : NSObject 

/// <summary>
/// Gets the data.
/// </summary>
- (NSMutableData*) data;
/// <summary>
/// Initializes a new instance of the <see cref="FMIceLinkWebRTCFecRawPacket" /> class.
/// </summary>
+ (FMIceLinkWebRTCFecRawPacket*) fecRawPacket;
/// <summary>
/// Initializes a new instance of the <see cref="FMIceLinkWebRTCFecRawPacket" /> class.
/// </summary>
- (id) init;
/// <summary>
/// Gets the length.
/// </summary>
- (int) length;
/// <summary>
/// Sets the length.
/// </summary>
- (void) setLength:(int)value;

@end


@class FMIceLinkWebRTCFecRawPacket;

/// <summary>
/// A received packet.
/// </summary>
#pragma clang diagnostic ignored "-Wshorten-64-to-32"
#pragma clang diagnostic ignored "-Wint-to-pointer-cast"

@interface FMIceLinkWebRTCFecReceivedPacket : FMIceLinkWebRTCFecSortablePacket 

+ (FMIceLinkWebRTCFecReceivedPacket*) fecReceivedPacket;
- (id) init;
/// <summary>
/// Gets whether this is an FEC packet.
/// </summary>
- (bool) isFec;
/// <summary>
/// Gets the raw packet.
/// </summary>
- (FMIceLinkWebRTCFecRawPacket*) raw;
/// <summary>
/// Sets whether this is an FEC packet.
/// </summary>
- (void) setIsFec:(bool)value;
/// <summary>
/// Sets the raw packet.
/// </summary>
- (void) setRaw:(FMIceLinkWebRTCFecRawPacket*)value;
/// <summary>
/// Sets the synchronization source.
/// This must have a value for FEC packets, but
/// is not required for media packets.
/// </summary>
- (void) setSynchronizationSource:(long long)value;
/// <summary>
/// Gets the synchronization source.
/// This must have a value for FEC packets, but
/// is not required for media packets.
/// </summary>
- (long long) synchronizationSource;

@end


@class FMIceLinkWebRTCFecRawPacket;
@class FMCallback;
@class FMIceLinkWebRTCFecContext;
@class FMManagedLock;
@class NSMutableArrayFMExtensions;
@class NSMutableDataFMExtensions;

/// <summary>
/// A context for managing incoming data for FEC.
/// </summary>
#pragma clang diagnostic ignored "-Wshorten-64-to-32"
#pragma clang diagnostic ignored "-Wint-to-pointer-cast"

@interface FMIceLinkWebRTCFecReceiver : NSObject 

/// <summary>
/// Adds a received RED packet.
/// </summary>
/// <param name="incomingRtpHeaderLength">Length of the incoming RTP header.</param>
/// <param name="incomingRtpSequenceNumber">The incoming RTP sequence number.</param>
/// <param name="incomingRtpPacket">The incoming RTP packet.</param>
/// <param name="packetLength">Length of the packet.</param>
/// <param name="fecPayloadType">The FEC payload type.</param>
/// <returns></returns>
- (bool) addReceivedRedPacketWithIncomingRtpHeaderLength:(int)incomingRtpHeaderLength incomingRtpSequenceNumber:(int)incomingRtpSequenceNumber incomingRtpPacket:(NSMutableData*)incomingRtpPacket packetLength:(int)packetLength fecPayloadType:(int)fecPayloadType;
/// <summary>
/// Initializes a new instance of the <see cref="FMIceLinkWebRTCFecReceiver" /> class.
/// </summary>
/// <param name="callback">The callback.</param>
+ (FMIceLinkWebRTCFecReceiver*) fecReceiverWithCallback:(FMCallback*)callback;
/// <summary>
/// Initializes a new instance of the <see cref="FMIceLinkWebRTCFecReceiver" /> class.
/// </summary>
/// <param name="callback">The callback.</param>
+ (FMIceLinkWebRTCFecReceiver*) fecReceiverWithCallbackBlock:(void (^) (FMIceLinkWebRTCFecRawPacket*, bool))callbackBlock;
/// <summary>
/// Initializes a new instance of the <see cref="FMIceLinkWebRTCFecReceiver" /> class.
/// </summary>
/// <param name="callback">The callback.</param>
- (id) initWithCallback:(FMCallback*)callback;
/// <summary>
/// Initializes a new instance of the <see cref="FMIceLinkWebRTCFecReceiver" /> class.
/// </summary>
/// <param name="callback">The callback.</param>
- (id) initWithCallbackBlock:(void (^) (FMIceLinkWebRTCFecRawPacket*, bool))callbackBlock;
/// <summary>
/// Gets whether the last packet received contained FEC
/// but no media payload.
/// </summary>
- (bool) lastPacketReceivedSoloFec;
/// <summary>
/// Gets the number of received FEC packets.
/// </summary>
- (int) numFecPackets;
/// <summary>
/// Gets the number of received packets.
/// </summary>
- (int) numPackets;
/// <summary>
/// Gets the number of recovered media packets using FEC.
/// </summary>
- (int) numRecoveredPackets;
/// <summary>
/// Processes received FEC data.
/// </summary>
/// <returns></returns>
- (bool) processReceivedFec;

@end


@class NSMutableArrayFMExtensions;
@class FMIceLinkWebRTCFecContext;
@class FMIceLinkWebRTCFrameGenerator;
@class FMIceLinkWebRTCFecReceiver;

/// <summary>
/// FEC receiver tests.
/// </summary>
#pragma clang diagnostic ignored "-Wshorten-64-to-32"
#pragma clang diagnostic ignored "-Wint-to-pointer-cast"

@interface FMIceLinkWebRTCFecReceiverTest : NSObject 

/// <summary>
/// Initializes a new instance of the <see cref="FMIceLinkWebRTCFecReceiverTest" /> class.
/// </summary>
+ (FMIceLinkWebRTCFecReceiverTest*) fecReceiverTest;
/// <summary>
/// Initializes a new instance of the <see cref="FMIceLinkWebRTCFecReceiverTest" /> class.
/// </summary>
- (id) init;
/// <summary>
/// Runs all tests.
/// </summary>
+ (void) runAll;
/// <summary>
/// Test.
/// </summary>
- (void) testMaxFramesOneFec;
/// <summary>
/// Test.
/// </summary>
- (void) testOldFecPacketDropped;
/// <summary>
/// Test.
/// </summary>
- (void) testOneCompleteOneUnrecoverableFrame;
/// <summary>
/// Test.
/// </summary>
- (void) testPacketDroppedWhenTooOld;
/// <summary>
/// Test.
/// </summary>
- (void) testPacketNotDroppedTooEarly;
/// <summary>
/// Test.
/// </summary>
- (void) testTooManyFrames;
/// <summary>
/// Test.
/// </summary>
- (void) testTwoFramesOneFec;
/// <summary>
/// Test.
/// </summary>
- (void) testTwoMediaOneFec;
/// <summary>
/// Test.
/// </summary>
- (void) testTwoMediaTwoFec;

@end


@class NSMutableDataFMExtensions;
@class FMIceLinkWebRTCFecRawPacket;

/// <summary>
/// A recovered packet.
/// </summary>
#pragma clang diagnostic ignored "-Wshorten-64-to-32"
#pragma clang diagnostic ignored "-Wint-to-pointer-cast"

@interface FMIceLinkWebRTCFecRecoveredPacket : FMIceLinkWebRTCFecSortablePacket 

/// <summary>
/// Initializes a new instance of the <see cref="FMIceLinkWebRTCFecRecoveredPacket" /> class.
/// </summary>
+ (FMIceLinkWebRTCFecRecoveredPacket*) fecRecoveredPacket;
/// <summary>
/// Initializes a new instance of the <see cref="FMIceLinkWebRTCFecRecoveredPacket" /> class.
/// </summary>
- (id) init;
/// <summary>
/// Gets the two bytes used for recovering
/// the packet length with XOR operations.
/// </summary>
- (NSMutableData*) lengthRecovery;
/// <summary>
/// Gets the raw packet.
/// </summary>
- (FMIceLinkWebRTCFecRawPacket*) raw;
/// <summary>
/// Gets whether the packet has already been
/// returned to the caller through the callback.
/// </summary>
- (bool) returned;
/// <summary>
/// Sets the two bytes used for recovering
/// the packet length with XOR operations.
/// </summary>
- (void) setLengthRecovery:(NSMutableData*)value;
/// <summary>
/// Sets the raw packet.
/// </summary>
- (void) setRaw:(FMIceLinkWebRTCFecRawPacket*)value;
/// <summary>
/// Sets whether the packet has already been
/// returned to the caller through the callback.
/// </summary>
- (void) setReturned:(bool)value;
/// <summary>
/// Sets whether the packet was recovered by FEC.
/// Otherwise it was a media packet passed in through
/// the received packet list.
/// </summary>
- (void) setWasRecovered:(bool)value;
/// <summary>
/// Gets whether the packet was recovered by FEC.
/// Otherwise it was a media packet passed in through
/// the received packet list.
/// </summary>
- (bool) wasRecovered;

@end


@class NSMutableDataFMExtensions;

/// <summary>
/// A RED packet for FEC.
/// </summary>
#pragma clang diagnostic ignored "-Wshorten-64-to-32"
#pragma clang diagnostic ignored "-Wint-to-pointer-cast"

@interface FMIceLinkWebRTCFecRedPacket : NSObject 

/// <summary>
/// Assigns the payload.
/// </summary>
/// <param name="payload">The payload.</param>
/// <param name="offset">The offset.</param>
/// <param name="length">The length.</param>
- (void) assignPayloadWithPayload:(NSMutableData*)payload offset:(int)offset length:(int)length;
/// <summary>
/// Assigns the payload.
/// </summary>
/// <param name="payload">The payload.</param>
/// <param name="offset">The offset.</param>
/// <param name="length">The length.</param>
- (void) assignPayload:(NSMutableData*)payload offset:(int)offset length:(int)length;
/// <summary>
/// Clears the marker bit.
/// </summary>
- (void) clearMarkerBit;
/// <summary>
/// Creates the header.
/// </summary>
/// <param name="rtpHeader">The RTP header.</param>
/// <param name="headerLength">Length of the header.</param>
/// <param name="redPayloadType">Type of the RED payload.</param>
/// <param name="payloadType">Type of the payload.</param>
- (void) createHeaderWithRtpHeader:(NSMutableData*)rtpHeader headerLength:(int)headerLength redPayloadType:(int)redPayloadType payloadType:(int)payloadType;
/// <summary>
/// Gets the data.
/// </summary>
- (NSMutableData*) data;
/// <summary>
/// Initializes a new instance of the <see cref="FMIceLinkWebRTCFecRedPacket" /> class.
/// </summary>
/// <param name="length">The length.</param>
+ (FMIceLinkWebRTCFecRedPacket*) fecRedPacketWithLength:(int)length;
/// <summary>
/// Gets the payload types inside the RTP payload of a RED packet.
/// </summary>
/// <param name="rtpPayload">The RTP payload.</param>
/// <param name="payloadType1">The first payload type.</param>
/// <param name="payloadType1Offset">The offset of the first payload type.</param>
/// <param name="payloadType2">The second payload type.</param>
/// <param name="payloadType2Offset">The offset of the second payload type.</param>
+ (void) getPayloadTypesWithRtpPayload:(NSMutableData*)rtpPayload payloadType1:(int*)payloadType1 payloadType1Offset:(int*)payloadType1Offset payloadType2:(int*)payloadType2 payloadType2Offset:(int*)payloadType2Offset;
/// <summary>
/// Gets the threshold on the received FEC protection level, above
/// which we enforce at least <see cref="FMIceLinkWebRTCFecRedPacket#minimumMediaPackets" />
/// packets for the FEEC code. Below this threshold,
/// <see cref="FMIceLinkWebRTCFecRedPacket#minimumMediaPackets" /> is set ot the default value
/// of 1. Valid range is 0 to 255, where 255 corresponds to 100%
/// overhead (relative to the number of media packets).
/// </summary>
+ (int) highProtectionThreshold;
/// <summary>
/// Initializes a new instance of the <see cref="FMIceLinkWebRTCFecRedPacket" /> class.
/// </summary>
/// <param name="length">The length.</param>
- (id) initWithLength:(int)length;
/// <summary>
/// Gets the length.
/// </summary>
- (int) length;
/// <summary>
/// Gets the maximum amount of excess overhead (actual - target)
/// allowed in order to trigger GenerateFEC(), before the maximum
/// number of FEC frames is reached. Overhead here is defined as
/// relative to number of media packets.
/// </summary>
+ (int) maxExcessOverhead;
/// <summary>
/// Gets the minimum number of media packets required (above some
/// protection level) in order to trigger GenerateFEC(), before
/// the maximum number of FEC frames is reached.
/// </summary>
+ (int) minimumMediaPackets;
/// <summary>
/// Gets the length of the RED header for FEC.
/// </summary>
+ (int) redForFECHeaderLength;
/// <summary>
/// Replaces the payload types inside the RTP payload of a RED packet.
/// </summary>
/// <param name="rtpPayload">The RTP payload.</param>
/// <param name="sourceMediaPayloadType">The source media payload type.</param>
/// <param name="targetMediaPayloadType">The target media payload type.</param>
/// <param name="sourceFecPayloadType">The source FEC payload type.</param>
/// <param name="targetFecPayloadType">The target FEC payload type.</param>
+ (void) replacePayloadTypesWithRtpPayload:(NSMutableData*)rtpPayload sourceMediaPayloadType:(int)sourceMediaPayloadType targetMediaPayloadType:(int)targetMediaPayloadType sourceFecPayloadType:(int)sourceFecPayloadType targetFecPayloadType:(int)targetFecPayloadType;
/// <summary>
/// Sets the sequence number.
/// </summary>
/// <param name="sequenceNumber">The sequence number.</param>
- (void) setSequenceNumberWithSequenceNumber:(int)sequenceNumber;
/// <summary>
/// Sets the sequence number.
/// </summary>
/// <param name="sequenceNumber">The sequence number.</param>
- (void) setSequenceNumber:(int)sequenceNumber;

@end



/// <summary>
/// An RTP packet wrapper for FEC.
/// </summary>
#pragma clang diagnostic ignored "-Wshorten-64-to-32"
#pragma clang diagnostic ignored "-Wint-to-pointer-cast"

@interface FMIceLinkWebRTCFecRtpPacket : FMIceLinkWebRTCFecRawPacket 

/// <summary>
/// Initializes a new instance of the <see cref="FMIceLinkWebRTCFecRtpPacket" /> class.
/// </summary>
+ (FMIceLinkWebRTCFecRtpPacket*) fecRtpPacket;
/// <summary>
/// Initializes a new instance of the <see cref="FMIceLinkWebRTCFecRtpPacket" /> class.
/// </summary>
- (id) init;
/// <summary>
/// Gets the length of the RTP header.
/// </summary>
- (int) rtpHeaderLength;
/// <summary>
/// Sets the length of the RTP header.
/// </summary>
- (void) setRtpHeaderLength:(int)value;

@end


@class FMIceLinkWebRTCFecRtpPacket;
@class FMIceLinkWebRTCFecRawPacket;
@class NSMutableDataFMExtensions;

#pragma clang diagnostic ignored "-Wshorten-64-to-32"
#pragma clang diagnostic ignored "-Wint-to-pointer-cast"

@interface FMIceLinkWebRTCFrameGenerator : NSObject 

- (FMIceLinkWebRTCFecRtpPacket*) buildFecRedPacketWithPacket:(FMIceLinkWebRTCFecRawPacket*)packet;
- (FMIceLinkWebRTCFecRtpPacket*) buildFecRedPacket:(FMIceLinkWebRTCFecRawPacket*)packet;
- (FMIceLinkWebRTCFecRtpPacket*) buildMediaRedPacketWithPacket:(FMIceLinkWebRTCFecRtpPacket*)packet;
- (FMIceLinkWebRTCFecRtpPacket*) buildMediaRedPacket:(FMIceLinkWebRTCFecRtpPacket*)packet;
+ (FMIceLinkWebRTCFrameGenerator*) frameGenerator;
+ (bool) getRtpMarkerBitWithData:(NSMutableData*)data;
+ (int) getRtpPayloadTypeWithData:(NSMutableData*)data;
+ (int) getRtpSequenceNumberWithData:(NSMutableData*)data;
+ (long long) getRtpSsrcWithData:(NSMutableData*)data;
+ (long long) getRtpTimestampWithData:(NSMutableData*)data;
- (id) init;
- (void) newFrameWithNum_packets:(int)num_packets;
- (FMIceLinkWebRTCFecRtpPacket*) nextPacketWithOffset:(int)offset length:(int)length;
- (int) nextSeqNum;
- (void) setRedHeaderWithRed_packet:(FMIceLinkWebRTCFecRawPacket*)red_packet payload_type:(int)payload_type header_length:(int)header_length;

@end


@class FMIceLinkWebRTCBaseLayoutManager;

/// <summary>
/// Arguments for the BaseLayoutManager OnLayoutComplete event.
/// </summary>
#pragma clang diagnostic ignored "-Wshorten-64-to-32"
#pragma clang diagnostic ignored "-Wint-to-pointer-cast"

@interface FMIceLinkWebRTCLayoutCompleteArgs : NSObject 

- (id) init;
+ (FMIceLinkWebRTCLayoutCompleteArgs*) layoutCompleteArgs;
/// <summary>
/// Gets the base layout manager.
/// </summary>
- (FMIceLinkWebRTCBaseLayoutManager*) layoutManager;
- (void) setLayoutManager:(FMIceLinkWebRTCBaseLayoutManager*)value;

@end


@class FMIceLinkWebRTCLayout;
@class FMIceLinkWebRTCBaseLayoutManager;

/// <summary>
/// Arguments for the BaseLayoutManager OnLayout event.
/// </summary>
#pragma clang diagnostic ignored "-Wshorten-64-to-32"
#pragma clang diagnostic ignored "-Wint-to-pointer-cast"

@interface FMIceLinkWebRTCLayoutArgs : NSObject 

- (id) init;
/// <summary>
/// Gets the calculated layout.
/// </summary>
- (FMIceLinkWebRTCLayout*) layout;
+ (FMIceLinkWebRTCLayoutArgs*) layoutArgs;
/// <summary>
/// Gets the total layout/container height.
/// </summary>
- (int) layoutHeight;
/// <summary>
/// Gets the base layout manager.
/// </summary>
- (FMIceLinkWebRTCBaseLayoutManager*) layoutManager;
/// <summary>
/// Gets the total layout/container width.
/// </summary>
- (int) layoutWidth;
/// <summary>
/// Gets the number of remote video controls.
/// </summary>
- (int) remoteCount;
- (void) setLayout:(FMIceLinkWebRTCLayout*)value;
- (void) setLayoutHeight:(int)value;
- (void) setLayoutManager:(FMIceLinkWebRTCBaseLayoutManager*)value;
- (void) setLayoutWidth:(int)value;
- (void) setRemoteCount:(int)value;

@end



/// <summary>
/// Defines the results of a layout calculation.
/// </summary>
#pragma clang diagnostic ignored "-Wshorten-64-to-32"
#pragma clang diagnostic ignored "-Wint-to-pointer-cast"

@interface FMIceLinkWebRTCLayoutTable : NSObject 

/// <summary>
/// Gets the height of each cell.
/// </summary>
- (int) cellHeight;
/// <summary>
/// Gets the width of each cell.
/// </summary>
- (int) cellWidth;
/// <summary>
/// Gets the column count.
/// </summary>
- (int) columnCount;
/// <summary>
/// Initializes a new instance of the <see cref="FMIceLinkWebRTCLayoutTable" /> class.
/// </summary>
/// <param name="columnCount">The column count.</param>
/// <param name="rowCount">The row count.</param>
/// <param name="cellWidth">The width of each cell.</param>
/// <param name="cellHeight">The height of each cell.</param>
- (id) initWithColumnCount:(int)columnCount rowCount:(int)rowCount cellWidth:(int)cellWidth cellHeight:(int)cellHeight;
/// <summary>
/// Initializes a new instance of the <see cref="FMIceLinkWebRTCLayoutTable" /> class.
/// </summary>
/// <param name="columnCount">The column count.</param>
/// <param name="rowCount">The row count.</param>
/// <param name="cellWidth">The width of each cell.</param>
/// <param name="cellHeight">The height of each cell.</param>
+ (FMIceLinkWebRTCLayoutTable*) layoutTableWithColumnCount:(int)columnCount rowCount:(int)rowCount cellWidth:(int)cellWidth cellHeight:(int)cellHeight;
/// <summary>
/// Gets the row count.
/// </summary>
- (int) rowCount;
/// <summary>
/// Sets the height of each cell.
/// </summary>
- (void) setCellHeight:(int)value;
/// <summary>
/// Sets the width of each cell.
/// </summary>
- (void) setCellWidth:(int)value;
/// <summary>
/// Sets the column count.
/// </summary>
- (void) setColumnCount:(int)value;
/// <summary>
/// Sets the row count.
/// </summary>
- (void) setRowCount:(int)value;

@end


@class NSStringFMExtensions;
@class FMIceLinkWebRTCMatroskaCluster;
@class NSMutableArrayFMExtensions;
@class FMFile;
@class FMFileStream;
@class NSMutableDataFMExtensions;

/// <summary>
/// A Matroska audio recorder.
/// </summary>
#pragma clang diagnostic ignored "-Wshorten-64-to-32"
#pragma clang diagnostic ignored "-Wint-to-pointer-cast"

@interface FMIceLinkWebRTCMatroskaAudioRecorder : NSObject 

/// <summary>
/// Gets the number of channels.
/// </summary>
- (int) channels;
/// <summary>
/// Gets the clock rate.
/// </summary>
- (int) clockRate;
/// <summary>
/// Updates the header and closes the file.
/// </summary>
- (void) close;
/// <summary>
/// Gets the encoding name.
/// </summary>
- (NSString*) encodingName;
/// <summary>
/// Initializes a new instance of the <see cref="FMIceLinkWebRTCMatroskaAudioRecorder" /> class.
/// </summary>
/// <param name="path">The path.</param>
/// <param name="encodingName">The encoding name.</param>
/// <param name="clockRate">The clock rate.</param>
- (id) initWithPath:(NSString*)path encodingName:(NSString*)encodingName clockRate:(int)clockRate;
/// <summary>
/// Initializes a new instance of the <see cref="FMIceLinkWebRTCMatroskaAudioRecorder" /> class.
/// </summary>
/// <param name="path">The path.</param>
/// <param name="encodingName">The encoding name.</param>
/// <param name="clockRate">The clock rate.</param>
/// <param name="channels">The number of channels.</param>
- (id) initWithPath:(NSString*)path encodingName:(NSString*)encodingName clockRate:(int)clockRate channels:(int)channels;
/// <summary>
/// Initializes a new instance of the <see cref="FMIceLinkWebRTCMatroskaAudioRecorder" /> class.
/// </summary>
/// <param name="path">The path.</param>
/// <param name="encodingName">The encoding name.</param>
/// <param name="clockRate">The clock rate.</param>
+ (FMIceLinkWebRTCMatroskaAudioRecorder*) matroskaAudioRecorderWithPath:(NSString*)path encodingName:(NSString*)encodingName clockRate:(int)clockRate;
/// <summary>
/// Initializes a new instance of the <see cref="FMIceLinkWebRTCMatroskaAudioRecorder" /> class.
/// </summary>
/// <param name="path">The path.</param>
/// <param name="encodingName">The encoding name.</param>
/// <param name="clockRate">The clock rate.</param>
/// <param name="channels">The number of channels.</param>
+ (FMIceLinkWebRTCMatroskaAudioRecorder*) matroskaAudioRecorderWithPath:(NSString*)path encodingName:(NSString*)encodingName clockRate:(int)clockRate channels:(int)channels;
/// <summary>
/// Opens the file and writes the initial header.
/// </summary>
/// <returns>The actual path of the opened file.</returns>
- (NSString*) open;
/// <summary>
/// Gets the opened path.
/// </summary>
- (NSString*) openedPath;
/// <summary>
/// Gets the path.
/// </summary>
- (NSString*) path;
/// <summary>
/// Gets the suffix appended to the filename.
/// </summary>
- (NSString*) suffix;
/// <summary>
/// Writes an encoded audio frame.
/// </summary>
/// <param name="encodedFrame">The encoded frame.</param>
/// <returns>
/// <c>true</c> if the encoded frame was written successfully; otherwise, <c>false</c>
/// </returns>
- (bool) writeWithEncodedFrame:(NSMutableData*)encodedFrame;
/// <summary>
/// Writes an encoded audio frame.
/// </summary>
/// <param name="encodedFrame">The encoded frame.</param>
/// <param name="presentationTimestamp">The presentation timestamp.</param>
/// <returns>
/// <c>true</c> if the encoded frame was written successfully; otherwise, <c>false</c>
/// </returns>
- (bool) writeWithEncodedFrame:(NSMutableData*)encodedFrame presentationTimestamp:(long long)presentationTimestamp;

@end


@class NSMutableDataFMExtensions;
@class NSDateFMExtensions;
@class FMGuid;
@class NSStringFMExtensions;
@class FMByteOutputStream;

/// <summary>
/// A Matroska element.
/// </summary>
#pragma clang diagnostic ignored "-Wshorten-64-to-32"
#pragma clang diagnostic ignored "-Wint-to-pointer-cast"

@interface FMIceLinkWebRTCMatroskaElement : NSObject 

/// <summary>
/// Compares two byte arrays for equality.
/// </summary>
/// <param name="bytes1">The first byte array.</param>
/// <param name="bytes2">The second byte array.</param>
/// <returns></returns>
+ (bool) compareWithBytes1:(NSMutableData*)bytes1 bytes2:(NSMutableData*)bytes2;
/// <summary>
/// Serializes to a byte array.
/// </summary>
/// <returns></returns>
- (NSMutableData*) getBytes;
/// <summary>
/// Gets the inner bytes.
/// </summary>
/// <returns></returns>
- (NSMutableData*) getInnerBytes;
/// <summary>
/// Gets the EBML ID.
/// </summary>
- (NSMutableData*) id;
- (id) init;
/// <summary>
/// Gets the total length of the element (including ID/size field), set after calling <see cref="FMIceLinkWebRTCMatroskaElement#getBytes" />.
/// </summary>
- (int) length;
+ (FMIceLinkWebRTCMatroskaElement*) matroskaElement;
/// <summary>
/// Reads a boolean element from the stream.
/// </summary>
/// <param name="value">The value.</param>
/// <returns></returns>
+ (bool) readBoolWithValue:(NSMutableData*)value;
/// <summary>
/// Reads a date string element from the stream.
/// </summary>
/// <param name="value">The value.</param>
/// <returns></returns>
+ (NSDate*) readDateWithValue:(NSMutableData*)value;
/// <summary>
/// Reads a double element from the stream.
/// </summary>
/// <param name="value">The value.</param>
/// <returns></returns>
+ (double) readDoubleWithValue:(NSMutableData*)value;
/// <summary>
/// Reads a float element from the stream.
/// </summary>
/// <param name="value">The value.</param>
/// <returns></returns>
+ (float) readFloatWithValue:(NSMutableData*)value;
/// <summary>
/// Reads a GUID element from the stream.
/// </summary>
/// <param name="value">The value.</param>
/// <returns></returns>
+ (FMGuid*) readGuidWithValue:(NSMutableData*)value;
/// <summary>
/// Reads a binary ID from the stream.
/// </summary>
/// <param name="bytes">The byte array.</param>
/// <param name="offset">The offset into the byte array.</param>
/// <param name="offsetPlus">The offset plus the amount read.</param>
+ (NSMutableData*) readIdWithBytes:(NSMutableData*)bytes offset:(int)offset offsetPlus:(int*)offsetPlus;
/// <summary>
/// Reads a signed integer element from the byte array.
/// </summary>
/// <param name="value">The value.</param>
/// <returns></returns>
+ (long long) readSignedIntegerWithValue:(NSMutableData*)value;
/// <summary>
/// Reads an ASCII string element from the stream.
/// </summary>
/// <param name="value">The value.</param>
/// <returns></returns>
+ (NSString*) readStringWithValue:(NSMutableData*)value;
/// <summary>
/// Reads an unsigned integer element from the byte array.
/// </summary>
/// <param name="value">The value.</param>
/// <returns></returns>
+ (long long) readUnsignedIntegerWithValue:(NSMutableData*)value;
/// <summary>
/// Reads a UTF-8 string element from the stream.
/// </summary>
/// <param name="value">The value.</param>
/// <returns></returns>
+ (NSString*) readUtf8WithValue:(NSMutableData*)value;
/// <summary>
/// Reads a binary value from the stream.
/// </summary>
/// <param name="bytes">The byte array.</param>
/// <param name="offset">The offset into the byte array.</param>
/// <param name="offsetPlus">The offset plus the amount read.</param>
+ (NSMutableData*) readValueWithBytes:(NSMutableData*)bytes offset:(int)offset offsetPlus:(int*)offsetPlus;
/// <summary>
/// Reads a variable integer ("vint") from the byte array.
/// </summary>
/// <param name="bytes">The byte array.</param>
/// <param name="offset">The offset into the byte array.</param>
/// <param name="offsetPlus">The offset plus the amount read.</param>
+ (long long) readVariableIntegerWithBytes:(NSMutableData*)bytes offset:(int)offset offsetPlus:(int*)offsetPlus;
/// <summary>
/// Serializes a variable integer.
/// </summary>
/// <param name="value">The value.</param>
/// <returns></returns>
+ (NSMutableData*) serializeVariableIntegerWithValue:(long long)value;
/// <summary>
/// Serializes a variable integer using a fixed length.
/// </summary>
/// <param name="value">The value.</param>
/// <param name="length">The length to use.</param>
/// <returns></returns>
+ (NSMutableData*) serializeVariableIntegerWithValue:(long long)value length:(int)length;
/// <summary>
/// Sets the length of the size field, in bytes.
/// Defaults to zero (variable size).
/// </summary>
- (void) setSizeLength:(int)value;
/// <summary>
/// Sets whether to include default values
/// when serializing.
/// </summary>
- (void) setWriteDefaultValues:(bool)value;
/// <summary>
/// Gets the size of the element (excluding ID/size field), set after calling <see cref="FMIceLinkWebRTCMatroskaElement#getBytes" />.
/// </summary>
- (int) size;
/// <summary>
/// Gets the length of the size field, in bytes.
/// Defaults to zero (variable size).
/// </summary>
- (int) sizeLength;
/// <summary>
/// Writes a boolean element to the stream.
/// </summary>
/// <param name="value">The value to write.</param>
/// <param name="id">The ID of the value.</param>
/// <param name="stream">The stream to write.</param>
- (void) writeBoolWithValue:(bool)value id:(NSMutableData*)idValue stream:(FMByteOutputStream*)stream;
/// <summary>
/// Writes a date element to the stream.
/// </summary>
/// <param name="value">The value to write.</param>
/// <param name="id">The ID of the value.</param>
/// <param name="stream">The stream to write.</param>
- (void) writeDateWithValue:(NSDate*)value id:(NSMutableData*)idValue stream:(FMByteOutputStream*)stream;
/// <summary>
/// Gets whether to include default values
/// when serializing.
/// </summary>
- (bool) writeDefaultValues;
/// <summary>
/// Writes a double element to the stream.
/// </summary>
/// <param name="value">The value to write.</param>
/// <param name="id">The ID of the value.</param>
/// <param name="stream">The stream to write.</param>
- (void) writeDoubleWithValue:(double)value id:(NSMutableData*)idValue stream:(FMByteOutputStream*)stream;
/// <summary>
/// Writes a float element to the stream.
/// </summary>
/// <param name="value">The value to write.</param>
/// <param name="id">The ID of the value.</param>
/// <param name="stream">The stream to write.</param>
- (void) writeFloatWithValue:(float)value id:(NSMutableData*)idValue stream:(FMByteOutputStream*)stream;
/// <summary>
/// Writes a GUID element to the stream.
/// </summary>
/// <param name="value">The value to write.</param>
/// <param name="id">The ID of the value.</param>
/// <param name="stream">The stream to write.</param>
- (void) writeGuidWithValue:(FMGuid*)value id:(NSMutableData*)idValue stream:(FMByteOutputStream*)stream;
/// <summary>
/// Writes an signed integer element to the stream.
/// </summary>
/// <param name="value">The value to write.</param>
/// <param name="id">The ID of the value.</param>
/// <param name="stream">The stream to write.</param>
- (void) writeSignedIntegerWithValue:(long long)value id:(NSMutableData*)idValue stream:(FMByteOutputStream*)stream;
/// <summary>
/// Writes an ASCII string element to the stream.
/// </summary>
/// <param name="value">The value to write.</param>
/// <param name="id">The ID of the value.</param>
/// <param name="stream">The stream to write.</param>
- (void) writeStringWithValue:(NSString*)value id:(NSMutableData*)idValue stream:(FMByteOutputStream*)stream;
/// <summary>
/// Writes an unsigned integer element to the stream.
/// </summary>
/// <param name="value">The value to write.</param>
/// <param name="id">The ID of the value.</param>
/// <param name="stream">The stream to write.</param>
- (void) writeUnsignedIntegerWithValue:(long long)value id:(NSMutableData*)idValue stream:(FMByteOutputStream*)stream;
/// <summary>
/// Writes a UTF-8 string element to the stream.
/// </summary>
/// <param name="value">The value to write.</param>
/// <param name="id">The ID of the value.</param>
/// <param name="stream">The stream to write.</param>
- (void) writeUtf8WithValue:(NSString*)value id:(NSMutableData*)idValue stream:(FMByteOutputStream*)stream;
/// <summary>
/// Writes a variable integer ("vint") to the stream.
/// </summary>
/// <param name="value">The value to write.</param>
/// <param name="stream">The stream to write.</param>
- (void) writeVariableIntegerWithValue:(long long)value stream:(FMByteOutputStream*)stream;
/// <summary>
/// Writes a variable integer ("vint") to the stream using a fixed length.
/// </summary>
/// <param name="value">The value to write.</param>
/// <param name="stream">The stream to write.</param>
/// <param name="length">The length to use.</param>
- (void) writeVariableIntegerWithValue:(long long)value stream:(FMByteOutputStream*)stream length:(int)length;
/// <summary>
/// Writes a binary element to the stream.
/// </summary>
/// <param name="value">The value to write.</param>
/// <param name="id">The ID of the value.</param>
/// <param name="stream">The stream to write.</param>
- (void) writeWithValue:(NSMutableData*)value id:(NSMutableData*)idValue stream:(FMByteOutputStream*)stream;

@end


@class NSMutableDataFMExtensions;

/// <summary>
/// A Matroska block element.
/// </summary>
#pragma clang diagnostic ignored "-Wshorten-64-to-32"
#pragma clang diagnostic ignored "-Wint-to-pointer-cast"

@interface FMIceLinkWebRTCMatroskaBlock : FMIceLinkWebRTCMatroskaElement 

/// <summary>
/// Gets the data.
/// </summary>
- (NSMutableData*) data;
/// <summary>
/// Gets the EBML ID.
/// </summary>
+ (NSMutableData*) ebmlId;
/// <summary>
/// Gets the flags.
/// </summary>
- (uint8_t) flags;
/// <summary>
/// Gets the inner bytes.
/// </summary>
/// <returns></returns>
- (NSMutableData*) getInnerBytes;
/// <summary>
/// Gets the EBML ID.
/// </summary>
- (NSMutableData*) id;
/// <summary>
/// Initializes a new instance of the <see cref="FMIceLinkWebRTCMatroskaBlock" /> class.
/// </summary>
- (id) init;
/// <summary>
/// Initializes a new instance of the <see cref="FMIceLinkWebRTCMatroskaBlock" /> class.
/// </summary>
/// <param name="bytes">The bytes.</param>
- (id) initWithBytes:(NSMutableData*)bytes;
/// <summary>
/// Initializes a new instance of the <see cref="FMIceLinkWebRTCMatroskaBlock" /> class.
/// </summary>
+ (FMIceLinkWebRTCMatroskaBlock*) matroskaBlock;
/// <summary>
/// Initializes a new instance of the <see cref="FMIceLinkWebRTCMatroskaBlock" /> class.
/// </summary>
/// <param name="bytes">The bytes.</param>
+ (FMIceLinkWebRTCMatroskaBlock*) matroskaBlockWithBytes:(NSMutableData*)bytes;
/// <summary>
/// Sets the data.
/// </summary>
- (void) setData:(NSMutableData*)value;
/// <summary>
/// Sets the flags.
/// </summary>
- (void) setFlags:(uint8_t)value;
/// <summary>
/// Sets the timecode.
/// </summary>
- (void) setTimecode:(int)value;
/// <summary>
/// Sets the track number.
/// </summary>
- (void) setTrackNumber:(long long)value;
/// <summary>
/// Gets the timecode.
/// </summary>
- (int) timecode;
/// <summary>
/// Gets the track number.
/// </summary>
- (long long) trackNumber;

@end


@class NSMutableDataFMExtensions;

/// <summary>
/// A Matroska simple block element.
/// </summary>
#pragma clang diagnostic ignored "-Wshorten-64-to-32"
#pragma clang diagnostic ignored "-Wint-to-pointer-cast"

@interface FMIceLinkWebRTCMatroskaSimpleBlock : FMIceLinkWebRTCMatroskaBlock 

/// <summary>
/// Gets the EBML ID.
/// </summary>
+ (NSMutableData*) ebmlId;
/// <summary>
/// Gets the EBML ID.
/// </summary>
- (NSMutableData*) id;
/// <summary>
/// Initializes a new instance of the <see cref="FMIceLinkWebRTCMatroskaSimpleBlock" /> class.
/// </summary>
- (id) init;
/// <summary>
/// Initializes a new instance of the <see cref="FMIceLinkWebRTCMatroskaSimpleBlock" /> class.
/// </summary>
/// <param name="bytes">The bytes.</param>
- (id) initWithBytes:(NSMutableData*)bytes;
/// <summary>
/// Initializes a new instance of the <see cref="FMIceLinkWebRTCMatroskaSimpleBlock" /> class.
/// </summary>
+ (FMIceLinkWebRTCMatroskaSimpleBlock*) matroskaSimpleBlock;
/// <summary>
/// Initializes a new instance of the <see cref="FMIceLinkWebRTCMatroskaSimpleBlock" /> class.
/// </summary>
/// <param name="bytes">The bytes.</param>
+ (FMIceLinkWebRTCMatroskaSimpleBlock*) matroskaSimpleBlockWithBytes:(NSMutableData*)bytes;

@end



/// <summary>
/// Valid Matroska block element flags.
/// </summary>
#pragma clang diagnostic ignored "-Wshorten-64-to-32"
#pragma clang diagnostic ignored "-Wint-to-pointer-cast"

@interface FMIceLinkWebRTCMatroskaBlockFlags : NSObject 

/// <summary>
/// Gets a value indicating EBML lacing.
/// </summary>
+ (uint8_t) ebmlLacing;
/// <summary>
/// Gets a value indicating fixed size lacing.
/// </summary>
+ (uint8_t) fixedSizeLacing;
- (id) init;
/// <summary>
/// Gets a value indicating invisible.
/// </summary>
+ (uint8_t) invisible;
+ (FMIceLinkWebRTCMatroskaBlockFlags*) matroskaBlockFlags;
/// <summary>
/// Gets a value indicating no lacing.
/// </summary>
+ (uint8_t) noLacing;
/// <summary>
/// Gets a value indicating Xiph lacing.
/// </summary>
+ (uint8_t) xiphLacing;

@end



/// <summary>
/// Valid Matroska simple block element flags.
/// </summary>
#pragma clang diagnostic ignored "-Wshorten-64-to-32"
#pragma clang diagnostic ignored "-Wint-to-pointer-cast"

@interface FMIceLinkWebRTCMatroskaSimpleBlockFlags : FMIceLinkWebRTCMatroskaBlockFlags 

/// <summary>
/// Gets a value indicating discardable.
/// </summary>
+ (uint8_t) discardable;
- (id) init;
/// <summary>
/// Gets a value indicating keyframe.
/// </summary>
+ (uint8_t) keyframe;
+ (FMIceLinkWebRTCMatroskaSimpleBlockFlags*) matroskaSimpleBlockFlags;

@end


@class NSStringFMExtensions;
@class FMFile;
@class FMFileStream;
@class NSMutableDataFMExtensions;

/// <summary>
/// An IVF video recorder.
/// </summary>
#pragma clang diagnostic ignored "-Wshorten-64-to-32"
#pragma clang diagnostic ignored "-Wint-to-pointer-cast"

@interface FMIceLinkWebRTCIvfVideoRecorder : NSObject 

/// <summary>
/// Gets the clock rate.
/// </summary>
- (int) clockRate;
/// <summary>
/// Updates the header and closes the file.
/// </summary>
- (void) close;
/// <summary>
/// Gets the encoding name.
/// </summary>
- (NSString*) encodingName;
/// <summary>
/// Initializes a new instance of the <see cref="FMIceLinkWebRTCIvfVideoRecorder" /> class.
/// </summary>
/// <param name="path">The path.</param>
/// <param name="encodingName">The encoding name.</param>
- (id) initWithPath:(NSString*)path encodingName:(NSString*)encodingName;
/// <summary>
/// Initializes a new instance of the <see cref="FMIceLinkWebRTCIvfVideoRecorder" /> class.
/// </summary>
/// <param name="path">The path.</param>
/// <param name="encodingName">The encoding name.</param>
/// <param name="clockRate">The clock rate.</param>
- (id) initWithPath:(NSString*)path encodingName:(NSString*)encodingName clockRate:(int)clockRate;
/// <summary>
/// Initializes a new instance of the <see cref="FMIceLinkWebRTCIvfVideoRecorder" /> class.
/// </summary>
/// <param name="path">The path.</param>
/// <param name="encodingName">The encoding name.</param>
+ (FMIceLinkWebRTCIvfVideoRecorder*) ivfVideoRecorderWithPath:(NSString*)path encodingName:(NSString*)encodingName;
/// <summary>
/// Initializes a new instance of the <see cref="FMIceLinkWebRTCIvfVideoRecorder" /> class.
/// </summary>
/// <param name="path">The path.</param>
/// <param name="encodingName">The encoding name.</param>
/// <param name="clockRate">The clock rate.</param>
+ (FMIceLinkWebRTCIvfVideoRecorder*) ivfVideoRecorderWithPath:(NSString*)path encodingName:(NSString*)encodingName clockRate:(int)clockRate;
/// <summary>
/// Opens the file and writes the initial header.
/// </summary>
/// <returns>The actual path of the opened file.</returns>
- (NSString*) open;
/// <summary>
/// Gets the path.
/// </summary>
- (NSString*) path;
/// <summary>
/// Gets the suffix appended to the filename.
/// </summary>
- (NSString*) suffix;
/// <summary>
/// Write an encoded video frame using the width
/// and height parameters from the first keyframe.
/// This method will discard non-keyframes until
/// the first keyframe arrives.
/// </summary>
/// <param name="encodedFrame">The encoded frame.</param>
/// <returns><c>true</c> if the encoded frame was written successfully; otherwise, <c>false</c></returns>
- (bool) writeWithEncodedFrame:(NSMutableData*)encodedFrame;
/// <summary>
/// Write an encoded video frame using the width
/// and height parameters from the first keyframe.
/// This method will discard non-keyframes until
/// the first keyframe arrives.
/// </summary>
/// <param name="encodedFrame">The encoded frame.</param>
/// <param name="presentationTimestamp">The presentation timestamp.</param>
/// <returns><c>true</c> if the encoded frame was written successfully; otherwise, <c>false</c></returns>
- (bool) writeWithEncodedFrame:(NSMutableData*)encodedFrame presentationTimestamp:(long long)presentationTimestamp;
/// <summary>
/// Write an encoded video frame using the specified
/// width and height parameters.
/// </summary>
/// <param name="encodedFrame">The encoded frame.</param>
/// <param name="width">The frame width.</param>
/// <param name="height">The frame height.</param>
/// <returns><c>true</c> if the encoded frame was written successfully; otherwise, <c>false</c></returns>
- (bool) writeWithEncodedFrame:(NSMutableData*)encodedFrame width:(int)width height:(int)height;
/// <summary>
/// Write an encoded video frame using the specified
/// width and height parameters.
/// </summary>
/// <param name="encodedFrame">The encoded frame.</param>
/// <param name="width">The frame width.</param>
/// <param name="height">The frame height.</param>
/// <param name="presentationTimestamp">The presentation timestamp.</param>
/// <returns><c>true</c> if the encoded frame was written successfully; otherwise, <c>false</c></returns>
- (bool) writeWithEncodedFrame:(NSMutableData*)encodedFrame width:(int)width height:(int)height presentationTimestamp:(long long)presentationTimestamp;

@end


@class FMNullableLong;
@class NSMutableDataFMExtensions;

/// <summary>
/// A Matroska audio element.
/// </summary>
#pragma clang diagnostic ignored "-Wshorten-64-to-32"
#pragma clang diagnostic ignored "-Wint-to-pointer-cast"

@interface FMIceLinkWebRTCMatroskaAudio : FMIceLinkWebRTCMatroskaElement 

/// <summary>
/// Gets the bit depth.
/// </summary>
- (FMNullableLong*) bitDepth;
/// <summary>
/// Gets the channels.
/// Defaults to 1.
/// </summary>
- (long long) channels;
/// <summary>
/// Gets the default channels.
/// </summary>
+ (long long) defaultChannels;
/// <summary>
/// Gets the default sampling frequency.
/// </summary>
+ (long long) defaultSamplingFrequency;
/// <summary>
/// Gets the EBML ID.
/// </summary>
+ (NSMutableData*) ebmlId;
/// <summary>
/// Gets the inner bytes.
/// </summary>
/// <returns></returns>
- (NSMutableData*) getInnerBytes;
/// <summary>
/// Gets the EBML ID.
/// </summary>
- (NSMutableData*) id;
/// <summary>
/// Initializes a new instance of the <see cref="FMIceLinkWebRTCMatroskaAudio" /> class.
/// </summary>
- (id) init;
/// <summary>
/// Initializes a new instance of the <see cref="FMIceLinkWebRTCMatroskaAudio" /> class.
/// </summary>
/// <param name="bytes">The bytes.</param>
- (id) initWithBytes:(NSMutableData*)bytes;
/// <summary>
/// Initializes a new instance of the <see cref="FMIceLinkWebRTCMatroskaAudio" /> class.
/// </summary>
+ (FMIceLinkWebRTCMatroskaAudio*) matroskaAudio;
/// <summary>
/// Initializes a new instance of the <see cref="FMIceLinkWebRTCMatroskaAudio" /> class.
/// </summary>
/// <param name="bytes">The bytes.</param>
+ (FMIceLinkWebRTCMatroskaAudio*) matroskaAudioWithBytes:(NSMutableData*)bytes;
/// <summary>
/// Gets the output sampling frequency.
/// </summary>
- (FMNullableLong*) outputSamplingFrequency;
/// <summary>
/// Gets the sampling frequency.
/// Defaults to 8000.
/// </summary>
- (long long) samplingFrequency;
/// <summary>
/// Sets the bit depth.
/// </summary>
- (void) setBitDepth:(FMNullableLong*)value;
/// <summary>
/// Sets the channels.
/// Defaults to 1.
/// </summary>
- (void) setChannels:(long long)value;
/// <summary>
/// Sets the output sampling frequency.
/// </summary>
- (void) setOutputSamplingFrequency:(FMNullableLong*)value;
/// <summary>
/// Sets the sampling frequency.
/// Defaults to 8000.
/// </summary>
- (void) setSamplingFrequency:(long long)value;

@end


@class FMIceLinkWebRTCMatroskaBlock;
@class FMNullableLong;
@class NSMutableArrayFMExtensions;
@class NSMutableDataFMExtensions;

/// <summary>
/// A Matroska block group element.
/// </summary>
#pragma clang diagnostic ignored "-Wshorten-64-to-32"
#pragma clang diagnostic ignored "-Wint-to-pointer-cast"

@interface FMIceLinkWebRTCMatroskaBlockGroup : FMIceLinkWebRTCMatroskaElement 

/// <summary>
/// Gets the block element.
/// </summary>
- (FMIceLinkWebRTCMatroskaBlock*) block;
/// <summary>
/// Gets the duration of the block.
/// </summary>
- (FMNullableLong*) blockDuration;
/// <summary>
/// Gets the EBML ID.
/// </summary>
+ (NSMutableData*) ebmlId;
/// <summary>
/// Gets the inner bytes.
/// </summary>
/// <returns></returns>
- (NSMutableData*) getInnerBytes;
/// <summary>
/// Gets the EBML ID.
/// </summary>
- (NSMutableData*) id;
/// <summary>
/// Initializes a new instance of the <see cref="FMIceLinkWebRTCMatroskaBlockGroup" /> class.
/// </summary>
- (id) init;
/// <summary>
/// Initializes a new instance of the <see cref="FMIceLinkWebRTCMatroskaBlockGroup" /> class.
/// </summary>
/// <param name="bytes">The bytes.</param>
- (id) initWithBytes:(NSMutableData*)bytes;
/// <summary>
/// Initializes a new instance of the <see cref="FMIceLinkWebRTCMatroskaBlockGroup" /> class.
/// </summary>
+ (FMIceLinkWebRTCMatroskaBlockGroup*) matroskaBlockGroup;
/// <summary>
/// Initializes a new instance of the <see cref="FMIceLinkWebRTCMatroskaBlockGroup" /> class.
/// </summary>
/// <param name="bytes">The bytes.</param>
+ (FMIceLinkWebRTCMatroskaBlockGroup*) matroskaBlockGroupWithBytes:(NSMutableData*)bytes;
/// <summary>
/// Gets the reference blocks.
/// </summary>
- (NSMutableArray*) referenceBlocks;
/// <summary>
/// Sets the block element.
/// </summary>
- (void) setBlock:(FMIceLinkWebRTCMatroskaBlock*)value;
/// <summary>
/// Sets the duration of the block.
/// </summary>
- (void) setBlockDuration:(FMNullableLong*)value;
/// <summary>
/// Sets the reference blocks.
/// </summary>
- (void) setReferenceBlocks:(NSMutableArray*)value;

@end


@class NSMutableArrayFMExtensions;
@class FMNullableLong;
@class NSMutableDataFMExtensions;

/// <summary>
/// A Matroska cluster element.
/// </summary>
#pragma clang diagnostic ignored "-Wshorten-64-to-32"
#pragma clang diagnostic ignored "-Wint-to-pointer-cast"

@interface FMIceLinkWebRTCMatroskaCluster : FMIceLinkWebRTCMatroskaElement 

/// <summary>
/// Gets the block group elements.
/// </summary>
- (NSMutableArray*) blockGroups;
/// <summary>
/// Gets the default timecode.
/// </summary>
+ (long long) defaultTimecode;
/// <summary>
/// Gets the EBML ID.
/// </summary>
+ (NSMutableData*) ebmlId;
/// <summary>
/// Gets the inner bytes.
/// </summary>
/// <returns></returns>
- (NSMutableData*) getInnerBytes;
/// <summary>
/// Gets the EBML ID.
/// </summary>
- (NSMutableData*) id;
/// <summary>
/// Initializes a new instance of the <see cref="FMIceLinkWebRTCMatroskaCluster" /> class.
/// </summary>
- (id) init;
/// <summary>
/// Initializes a new instance of the <see cref="FMIceLinkWebRTCMatroskaCluster" /> class.
/// </summary>
/// <param name="bytes">The bytes.</param>
- (id) initWithBytes:(NSMutableData*)bytes;
/// <summary>
/// Initializes a new instance of the <see cref="FMIceLinkWebRTCMatroskaCluster" /> class.
/// </summary>
+ (FMIceLinkWebRTCMatroskaCluster*) matroskaCluster;
/// <summary>
/// Initializes a new instance of the <see cref="FMIceLinkWebRTCMatroskaCluster" /> class.
/// </summary>
/// <param name="bytes">The bytes.</param>
+ (FMIceLinkWebRTCMatroskaCluster*) matroskaClusterWithBytes:(NSMutableData*)bytes;
/// <summary>
/// Merges another <see cref="FMIceLinkWebRTCMatroskaCluster" /> into this one.
/// </summary>
/// <param name="cluster">The <see cref="FMIceLinkWebRTCMatroskaCluster" />.</param>
- (void) mergeWithCluster:(FMIceLinkWebRTCMatroskaCluster*)cluster;
/// <summary>
/// Gets the position.
/// </summary>
- (FMNullableLong*) position;
/// <summary>
/// Gets the previous size.
/// </summary>
- (FMNullableLong*) prevSize;
/// <summary>
/// Sets the block group elements.
/// </summary>
- (void) setBlockGroups:(NSMutableArray*)value;
/// <summary>
/// Sets the position.
/// </summary>
- (void) setPosition:(FMNullableLong*)value;
/// <summary>
/// Sets the previous size.
/// </summary>
- (void) setPrevSize:(FMNullableLong*)value;
/// <summary>
/// Sets the simple block elements.
/// </summary>
- (void) setSimpleBlocks:(NSMutableArray*)value;
/// <summary>
/// Sets the timecode.
/// </summary>
- (void) setTimecode:(long long)value;
/// <summary>
/// Gets the simple block elements.
/// </summary>
- (NSMutableArray*) simpleBlocks;
/// <summary>
/// Gets the timecode.
/// </summary>
- (long long) timecode;

@end



/// <summary>
/// Valid Matroska content compression element algorithms.
/// </summary>
#pragma clang diagnostic ignored "-Wshorten-64-to-32"
#pragma clang diagnostic ignored "-Wint-to-pointer-cast"

@interface FMIceLinkWebRTCMatroskaContentCompAlgo : NSObject 

/// <summary>
/// Gets a value indicating bzlib.
/// </summary>
+ (long long) bzlib;
/// <summary>
/// Gets a value indicating header striping.
/// </summary>
+ (long long) headerStriping;
- (id) init;
/// <summary>
/// Gets a value indicating lzo1x.
/// </summary>
+ (long long) lzo1x;
+ (FMIceLinkWebRTCMatroskaContentCompAlgo*) matroskaContentCompAlgo;
/// <summary>
/// Gets a value indicating zlib.
/// </summary>
+ (long long) zlib;

@end


@class NSMutableDataFMExtensions;

/// <summary>
/// A Matroska content compression element.
/// </summary>
#pragma clang diagnostic ignored "-Wshorten-64-to-32"
#pragma clang diagnostic ignored "-Wint-to-pointer-cast"

@interface FMIceLinkWebRTCMatroskaContentCompression : FMIceLinkWebRTCMatroskaElement 

/// <summary>
/// Gets the content compression algorithm.
/// </summary>
- (long long) contentCompAlgo;
/// <summary>
/// Gets the content compression settings.
/// </summary>
- (NSMutableData*) contentCompSettings;
/// <summary>
/// Gets the default content compression algorithm.
/// </summary>
+ (long long) defaultContentCompAlgo;
/// <summary>
/// Gets the EBML ID.
/// </summary>
+ (NSMutableData*) ebmlId;
/// <summary>
/// Gets the inner bytes.
/// </summary>
/// <returns></returns>
- (NSMutableData*) getInnerBytes;
/// <summary>
/// Gets the EBML ID.
/// </summary>
- (NSMutableData*) id;
/// <summary>
/// Initializes a new instance of the <see cref="FMIceLinkWebRTCMatroskaContentCompression" /> class.
/// </summary>
- (id) init;
/// <summary>
/// Initializes a new instance of the <see cref="FMIceLinkWebRTCMatroskaContentCompression" /> class.
/// </summary>
/// <param name="bytes">The bytes.</param>
- (id) initWithBytes:(NSMutableData*)bytes;
/// <summary>
/// Initializes a new instance of the <see cref="FMIceLinkWebRTCMatroskaContentCompression" /> class.
/// </summary>
+ (FMIceLinkWebRTCMatroskaContentCompression*) matroskaContentCompression;
/// <summary>
/// Initializes a new instance of the <see cref="FMIceLinkWebRTCMatroskaContentCompression" /> class.
/// </summary>
/// <param name="bytes">The bytes.</param>
+ (FMIceLinkWebRTCMatroskaContentCompression*) matroskaContentCompressionWithBytes:(NSMutableData*)bytes;
/// <summary>
/// Sets the content compression algorithm.
/// </summary>
- (void) setContentCompAlgo:(long long)value;
/// <summary>
/// Sets the content compression settings.
/// </summary>
- (void) setContentCompSettings:(NSMutableData*)value;

@end


@class FMIceLinkWebRTCMatroskaContentCompression;
@class NSMutableDataFMExtensions;

/// <summary>
/// A Matroska content encoding element.
/// </summary>
#pragma clang diagnostic ignored "-Wshorten-64-to-32"
#pragma clang diagnostic ignored "-Wint-to-pointer-cast"

@interface FMIceLinkWebRTCMatroskaContentEncoding : FMIceLinkWebRTCMatroskaElement 

/// <summary>
/// Gets the content compression element.
/// </summary>
- (FMIceLinkWebRTCMatroskaContentCompression*) contentCompression;
/// <summary>
/// Gets the content encoding order.
/// </summary>
- (long long) contentEncodingOrder;
/// <summary>
/// Gets the content encoding scope.
/// </summary>
- (long long) contentEncodingScope;
/// <summary>
/// Gets the content encoding type.
/// </summary>
- (long long) contentEncodingType;
/// <summary>
/// Gets the default content encoding order.
/// </summary>
+ (long long) defaultContentEncodingOrder;
/// <summary>
/// Gets the default content encoding scope.
/// </summary>
+ (long long) defaultContentEncodingScope;
/// <summary>
/// Gets the default content encoding type.
/// </summary>
+ (long long) defaultContentEncodingType;
/// <summary>
/// Gets the EBML ID.
/// </summary>
+ (NSMutableData*) ebmlId;
/// <summary>
/// Gets the inner bytes.
/// </summary>
/// <returns></returns>
- (NSMutableData*) getInnerBytes;
/// <summary>
/// Gets the EBML ID.
/// </summary>
- (NSMutableData*) id;
/// <summary>
/// Initializes a new instance of the <see cref="FMIceLinkWebRTCMatroskaContentEncoding" /> class.
/// </summary>
- (id) init;
/// <summary>
/// Initializes a new instance of the <see cref="FMIceLinkWebRTCMatroskaContentEncoding" /> class.
/// </summary>
/// <param name="bytes">The bytes.</param>
- (id) initWithBytes:(NSMutableData*)bytes;
/// <summary>
/// Initializes a new instance of the <see cref="FMIceLinkWebRTCMatroskaContentEncoding" /> class.
/// </summary>
+ (FMIceLinkWebRTCMatroskaContentEncoding*) matroskaContentEncoding;
/// <summary>
/// Initializes a new instance of the <see cref="FMIceLinkWebRTCMatroskaContentEncoding" /> class.
/// </summary>
/// <param name="bytes">The bytes.</param>
+ (FMIceLinkWebRTCMatroskaContentEncoding*) matroskaContentEncodingWithBytes:(NSMutableData*)bytes;
/// <summary>
/// Sets the content compression element.
/// </summary>
- (void) setContentCompression:(FMIceLinkWebRTCMatroskaContentCompression*)value;
/// <summary>
/// Sets the content encoding order.
/// </summary>
- (void) setContentEncodingOrder:(long long)value;
/// <summary>
/// Sets the content encoding scope.
/// </summary>
- (void) setContentEncodingScope:(long long)value;
/// <summary>
/// Sets the content encoding type.
/// </summary>
- (void) setContentEncodingType:(long long)value;

@end


@class NSMutableArrayFMExtensions;
@class NSMutableDataFMExtensions;

/// <summary>
/// A Matroska content encodings element.
/// </summary>
#pragma clang diagnostic ignored "-Wshorten-64-to-32"
#pragma clang diagnostic ignored "-Wint-to-pointer-cast"

@interface FMIceLinkWebRTCMatroskaContentEncodings : FMIceLinkWebRTCMatroskaElement 

/// <summary>
/// Gets the content encoding elements.
/// </summary>
- (NSMutableArray*) contentEncodings;
/// <summary>
/// Gets the EBML ID.
/// </summary>
+ (NSMutableData*) ebmlId;
/// <summary>
/// Gets the inner bytes.
/// </summary>
/// <returns></returns>
- (NSMutableData*) getInnerBytes;
/// <summary>
/// Gets the EBML ID.
/// </summary>
- (NSMutableData*) id;
/// <summary>
/// Initializes a new instance of the <see cref="FMIceLinkWebRTCMatroskaContentEncodings" /> class.
/// </summary>
- (id) init;
/// <summary>
/// Initializes a new instance of the <see cref="FMIceLinkWebRTCMatroskaContentEncodings" /> class.
/// </summary>
/// <param name="bytes">The bytes.</param>
- (id) initWithBytes:(NSMutableData*)bytes;
/// <summary>
/// Initializes a new instance of the <see cref="FMIceLinkWebRTCMatroskaContentEncodings" /> class.
/// </summary>
+ (FMIceLinkWebRTCMatroskaContentEncodings*) matroskaContentEncodings;
/// <summary>
/// Initializes a new instance of the <see cref="FMIceLinkWebRTCMatroskaContentEncodings" /> class.
/// </summary>
/// <param name="bytes">The bytes.</param>
+ (FMIceLinkWebRTCMatroskaContentEncodings*) matroskaContentEncodingsWithBytes:(NSMutableData*)bytes;
/// <summary>
/// Sets the content encoding elements.
/// </summary>
- (void) setContentEncodings:(NSMutableArray*)value;

@end



/// <summary>
/// Valid Matroska content encoding element scopes.
/// </summary>
#pragma clang diagnostic ignored "-Wshorten-64-to-32"
#pragma clang diagnostic ignored "-Wint-to-pointer-cast"

@interface FMIceLinkWebRTCMatroskaContentEncodingScope : NSObject 

/// <summary>
/// Gets a value indicating all.
/// </summary>
+ (long long) all;
/// <summary>
/// Gets a value indicating codec private.
/// </summary>
+ (long long) codecPrivate;
/// <summary>
/// Gets a value indicating content compression in next content encoding.
/// </summary>
+ (long long) contentCompressionInNextContentEncoding;
- (id) init;
+ (FMIceLinkWebRTCMatroskaContentEncodingScope*) matroskaContentEncodingScope;

@end


@class NSStringFMExtensions;
@class NSMutableDataFMExtensions;

/// <summary>
/// A Matroska EBML element.
/// </summary>
#pragma clang diagnostic ignored "-Wshorten-64-to-32"
#pragma clang diagnostic ignored "-Wint-to-pointer-cast"

@interface FMIceLinkWebRTCMatroskaEbml : FMIceLinkWebRTCMatroskaElement 

/// <summary>
/// Gets the default document type.
/// </summary>
+ (NSString*) defaultDocType;
/// <summary>
/// Gets the default document type read version.
/// </summary>
+ (long long) defaultDocTypeReadVersion;
/// <summary>
/// Gets the default document type version.
/// </summary>
+ (long long) defaultDocTypeVersion;
/// <summary>
/// Gets the default EBML maximum identifier length.
/// </summary>
+ (long long) defaultEbmlMaxIdLength;
/// <summary>
/// Gets the default EBML maximum size length.
/// </summary>
+ (long long) defaultEbmlMaxSizeLength;
/// <summary>
/// Gets the default EBML read version.
/// </summary>
+ (long long) defaultEbmlReadVersion;
/// <summary>
/// Gets the default EBML version.
/// </summary>
+ (long long) defaultEbmlVersion;
/// <summary>
/// Gets the document type.
/// </summary>
- (NSString*) docType;
/// <summary>
/// Gets the document type read version.
/// </summary>
- (long long) docTypeReadVersion;
/// <summary>
/// Gets the document type version.
/// </summary>
- (long long) docTypeVersion;
/// <summary>
/// Gets the EBML ID.
/// </summary>
+ (NSMutableData*) ebmlId;
/// <summary>
/// Gets the EBML maximum identifier length.
/// </summary>
- (long long) ebmlMaxIdLength;
/// <summary>
/// Gets the EBML maximum size length.
/// </summary>
- (long long) ebmlMaxSizeLength;
/// <summary>
/// Gets the EBML read version.
/// </summary>
- (long long) ebmlReadVersion;
/// <summary>
/// Gets the EBML version.
/// </summary>
- (long long) ebmlVersion;
/// <summary>
/// Gets the inner bytes.
/// </summary>
/// <returns></returns>
- (NSMutableData*) getInnerBytes;
/// <summary>
/// Gets the EBML ID.
/// </summary>
- (NSMutableData*) id;
/// <summary>
/// Initializes a new instance of the <see cref="FMIceLinkWebRTCMatroskaEbml" /> class.
/// </summary>
- (id) init;
/// <summary>
/// Initializes a new instance of the <see cref="FMIceLinkWebRTCMatroskaEbml" /> class.
/// </summary>
/// <param name="bytes">The bytes.</param>
- (id) initWithBytes:(NSMutableData*)bytes;
/// <summary>
/// Initializes a new instance of the <see cref="FMIceLinkWebRTCMatroskaEbml" /> class.
/// </summary>
+ (FMIceLinkWebRTCMatroskaEbml*) matroskaEbml;
/// <summary>
/// Initializes a new instance of the <see cref="FMIceLinkWebRTCMatroskaEbml" /> class.
/// </summary>
/// <param name="bytes">The bytes.</param>
+ (FMIceLinkWebRTCMatroskaEbml*) matroskaEbmlWithBytes:(NSMutableData*)bytes;
/// <summary>
/// Merges another <see cref="FMIceLinkWebRTCMatroskaEbml" /> into this one.
/// </summary>
/// <param name="ebml">The <see cref="FMIceLinkWebRTCMatroskaEbml" />.</param>
- (void) mergeWithEbml:(FMIceLinkWebRTCMatroskaEbml*)ebml;
/// <summary>
/// Sets the document type.
/// </summary>
- (void) setDocType:(NSString*)value;
/// <summary>
/// Sets the document type read version.
/// </summary>
- (void) setDocTypeReadVersion:(long long)value;
/// <summary>
/// Sets the document type version.
/// </summary>
- (void) setDocTypeVersion:(long long)value;
/// <summary>
/// Sets the EBML maximum identifier length.
/// </summary>
- (void) setEbmlMaxIdLength:(long long)value;
/// <summary>
/// Sets the EBML maximum size length.
/// </summary>
- (void) setEbmlMaxSizeLength:(long long)value;
/// <summary>
/// Sets the EBML read version.
/// </summary>
- (void) setEbmlReadVersion:(long long)value;
/// <summary>
/// Sets the EBML version.
/// </summary>
- (void) setEbmlVersion:(long long)value;

@end


@class FMIceLinkWebRTCMatroskaEbml;
@class FMIceLinkWebRTCMatroskaSegment;
@class NSMutableDataFMExtensions;

/// <summary>
/// A Matroska file.
/// </summary>
#pragma clang diagnostic ignored "-Wshorten-64-to-32"
#pragma clang diagnostic ignored "-Wint-to-pointer-cast"

@interface FMIceLinkWebRTCMatroskaFile : NSObject 

/// <summary>
/// Gets the EBML element.
/// </summary>
- (FMIceLinkWebRTCMatroskaEbml*) ebml;
/// <summary>
/// Serializes to a byte array.
/// </summary>
/// <returns></returns>
- (NSMutableData*) getBytes;
/// <summary>
/// Initializes a new instance of the <see cref="FMIceLinkWebRTCMatroskaFile" /> class.
/// </summary>
- (id) init;
/// <summary>
/// Initializes a new instance of the <see cref="FMIceLinkWebRTCMatroskaFile" /> class.
/// </summary>
/// <param name="bytes">The bytes.</param>
- (id) initWithBytes:(NSMutableData*)bytes;
/// <summary>
/// Initializes a new instance of the <see cref="FMIceLinkWebRTCMatroskaFile" /> class.
/// </summary>
+ (FMIceLinkWebRTCMatroskaFile*) matroskaFile;
/// <summary>
/// Initializes a new instance of the <see cref="FMIceLinkWebRTCMatroskaFile" /> class.
/// </summary>
/// <param name="bytes">The bytes.</param>
+ (FMIceLinkWebRTCMatroskaFile*) matroskaFileWithBytes:(NSMutableData*)bytes;
/// <summary>
/// Merges another <see cref="FMIceLinkWebRTCMatroskaFile" /> into this one.
/// </summary>
/// <param name="file">The <see cref="FMIceLinkWebRTCMatroskaFile" />.</param>
- (void) mergeWithFile:(FMIceLinkWebRTCMatroskaFile*)file;
/// <summary>
/// Gets the segment element.
/// </summary>
- (FMIceLinkWebRTCMatroskaSegment*) segment;
/// <summary>
/// Sets the EBML element.
/// </summary>
- (void) setEbml:(FMIceLinkWebRTCMatroskaEbml*)value;
/// <summary>
/// Sets the segment element.
/// </summary>
- (void) setSegment:(FMIceLinkWebRTCMatroskaSegment*)value;

@end


@class NSStringFMExtensions;
@class FMIceLinkWebRTCMatroskaCluster;
@class NSMutableArrayFMExtensions;
@class FMFile;
@class FMFileStream;
@class NSMutableDataFMExtensions;

/// <summary>
/// A Matroska video recorder.
/// </summary>
#pragma clang diagnostic ignored "-Wshorten-64-to-32"
#pragma clang diagnostic ignored "-Wint-to-pointer-cast"

@interface FMIceLinkWebRTCMatroskaVideoRecorder : NSObject 

/// <summary>
/// Gets the clock rate.
/// </summary>
- (int) clockRate;
/// <summary>
/// Updates the header and closes the file.
/// </summary>
- (void) close;
/// <summary>
/// Gets the encoding name.
/// </summary>
- (NSString*) encodingName;
/// <summary>
/// Initializes a new instance of the <see cref="FMIceLinkWebRTCMatroskaVideoRecorder" /> class.
/// </summary>
/// <param name="path">The path.</param>
/// <param name="encodingName">The encoding name.</param>
- (id) initWithPath:(NSString*)path encodingName:(NSString*)encodingName;
/// <summary>
/// Initializes a new instance of the <see cref="FMIceLinkWebRTCMatroskaVideoRecorder" /> class.
/// </summary>
/// <param name="path">The path.</param>
/// <param name="encodingName">The encoding name.</param>
/// <param name="clockRate">The clock rate.</param>
- (id) initWithPath:(NSString*)path encodingName:(NSString*)encodingName clockRate:(int)clockRate;
/// <summary>
/// Initializes a new instance of the <see cref="FMIceLinkWebRTCMatroskaVideoRecorder" /> class.
/// </summary>
/// <param name="path">The path.</param>
/// <param name="encodingName">The encoding name.</param>
+ (FMIceLinkWebRTCMatroskaVideoRecorder*) matroskaVideoRecorderWithPath:(NSString*)path encodingName:(NSString*)encodingName;
/// <summary>
/// Initializes a new instance of the <see cref="FMIceLinkWebRTCMatroskaVideoRecorder" /> class.
/// </summary>
/// <param name="path">The path.</param>
/// <param name="encodingName">The encoding name.</param>
/// <param name="clockRate">The clock rate.</param>
+ (FMIceLinkWebRTCMatroskaVideoRecorder*) matroskaVideoRecorderWithPath:(NSString*)path encodingName:(NSString*)encodingName clockRate:(int)clockRate;
/// <summary>
/// Opens the file and writes the initial header.
/// </summary>
/// <returns>The actual path of the opened file.</returns>
- (NSString*) open;
/// <summary>
/// Gets the opened path.
/// </summary>
- (NSString*) openedPath;
/// <summary>
/// Gets the path.
/// </summary>
- (NSString*) path;
/// <summary>
/// Gets the suffix appended to the filename.
/// </summary>
- (NSString*) suffix;
/// <summary>
/// Write an encoded video frame using the specified
/// width and height parameters.
/// </summary>
/// <param name="encodedFrame">The encoded frame.</param>
/// <param name="width">The frame width.</param>
/// <param name="height">The frame height.</param>
/// <returns><c>true</c> if the encoded frame was written successfully; otherwise, <c>false</c></returns>
- (bool) writeWithEncodedFrame:(NSMutableData*)encodedFrame width:(int)width height:(int)height;
/// <summary>
/// Write an encoded video frame using the specified
/// width and height parameters.
/// </summary>
/// <param name="encodedFrame">The encoded frame.</param>
/// <param name="width">The frame width.</param>
/// <param name="height">The frame height.</param>
/// <param name="presentationTimestamp">The presentation timestamp.</param>
/// <returns><c>true</c> if the encoded frame was written successfully; otherwise, <c>false</c></returns>
- (bool) writeWithEncodedFrame:(NSMutableData*)encodedFrame width:(int)width height:(int)height presentationTimestamp:(long long)presentationTimestamp;

@end


@class NSMutableDataFMExtensions;

/// <summary>
/// A Matroska seek element.
/// </summary>
#pragma clang diagnostic ignored "-Wshorten-64-to-32"
#pragma clang diagnostic ignored "-Wint-to-pointer-cast"

@interface FMIceLinkWebRTCMatroskaSeek : FMIceLinkWebRTCMatroskaElement 

/// <summary>
/// Gets the EBML ID.
/// </summary>
+ (NSMutableData*) ebmlId;
/// <summary>
/// Gets the inner bytes.
/// </summary>
/// <returns></returns>
- (NSMutableData*) getInnerBytes;
/// <summary>
/// Gets the EBML ID.
/// </summary>
- (NSMutableData*) id;
/// <summary>
/// Initializes a new instance of the <see cref="FMIceLinkWebRTCMatroskaSeek" /> class.
/// </summary>
- (id) init;
/// <summary>
/// Initializes a new instance of the <see cref="FMIceLinkWebRTCMatroskaSeek" /> class.
/// </summary>
/// <param name="bytes">The bytes.</param>
- (id) initWithBytes:(NSMutableData*)bytes;
/// <summary>
/// Initializes a new instance of the <see cref="FMIceLinkWebRTCMatroskaSeek" /> class.
/// </summary>
+ (FMIceLinkWebRTCMatroskaSeek*) matroskaSeek;
/// <summary>
/// Initializes a new instance of the <see cref="FMIceLinkWebRTCMatroskaSeek" /> class.
/// </summary>
/// <param name="bytes">The bytes.</param>
+ (FMIceLinkWebRTCMatroskaSeek*) matroskaSeekWithBytes:(NSMutableData*)bytes;
/// <summary>
/// Gets the seek identifier.
/// </summary>
- (long long) seekId;
/// <summary>
/// Gets the seek position.
/// </summary>
- (long long) seekPosition;
/// <summary>
/// Sets the seek identifier.
/// </summary>
- (void) setSeekId:(long long)value;
/// <summary>
/// Sets the seek position.
/// </summary>
- (void) setSeekPosition:(long long)value;

@end


@class NSMutableArrayFMExtensions;
@class NSMutableDataFMExtensions;

/// <summary>
/// A Matroska seek head element.
/// </summary>
#pragma clang diagnostic ignored "-Wshorten-64-to-32"
#pragma clang diagnostic ignored "-Wint-to-pointer-cast"

@interface FMIceLinkWebRTCMatroskaSeekHead : FMIceLinkWebRTCMatroskaElement 

/// <summary>
/// Gets the EBML ID.
/// </summary>
+ (NSMutableData*) ebmlId;
/// <summary>
/// Gets the inner bytes.
/// </summary>
/// <returns></returns>
- (NSMutableData*) getInnerBytes;
/// <summary>
/// Gets the EBML ID.
/// </summary>
- (NSMutableData*) id;
/// <summary>
/// Initializes a new instance of the <see cref="FMIceLinkWebRTCMatroskaSeekHead" /> class.
/// </summary>
- (id) init;
/// <summary>
/// Initializes a new instance of the <see cref="FMIceLinkWebRTCMatroskaSeekHead" /> class.
/// </summary>
/// <param name="bytes">The bytes.</param>
- (id) initWithBytes:(NSMutableData*)bytes;
/// <summary>
/// Initializes a new instance of the <see cref="FMIceLinkWebRTCMatroskaSeekHead" /> class.
/// </summary>
+ (FMIceLinkWebRTCMatroskaSeekHead*) matroskaSeekHead;
/// <summary>
/// Initializes a new instance of the <see cref="FMIceLinkWebRTCMatroskaSeekHead" /> class.
/// </summary>
/// <param name="bytes">The bytes.</param>
+ (FMIceLinkWebRTCMatroskaSeekHead*) matroskaSeekHeadWithBytes:(NSMutableData*)bytes;
/// <summary>
/// Gets the seek elements.
/// </summary>
- (NSMutableArray*) seeks;
/// <summary>
/// Sets the seek elements.
/// </summary>
- (void) setSeeks:(NSMutableArray*)value;

@end


@class NSMutableArrayFMExtensions;
@class FMIceLinkWebRTCMatroskaSegmentInfo;
@class NSMutableDataFMExtensions;

/// <summary>
/// A Matroska segment element.
/// </summary>
#pragma clang diagnostic ignored "-Wshorten-64-to-32"
#pragma clang diagnostic ignored "-Wint-to-pointer-cast"

@interface FMIceLinkWebRTCMatroskaSegment : FMIceLinkWebRTCMatroskaElement 

/// <summary>
/// Gets the cluster elements.
/// </summary>
- (NSMutableArray*) clusters;
/// <summary>
/// Gets the EBML ID.
/// </summary>
+ (NSMutableData*) ebmlId;
/// <summary>
/// Gets the inner bytes.
/// </summary>
/// <returns></returns>
- (NSMutableData*) getInnerBytes;
/// <summary>
/// Gets the EBML ID.
/// </summary>
- (NSMutableData*) id;
/// <summary>
/// Initializes a new instance of the <see cref="FMIceLinkWebRTCMatroskaSegment" /> class.
/// </summary>
- (id) init;
/// <summary>
/// Initializes a new instance of the <see cref="FMIceLinkWebRTCMatroskaSegment" /> class.
/// </summary>
/// <param name="bytes">The bytes.</param>
- (id) initWithBytes:(NSMutableData*)bytes;
/// <summary>
/// Initializes a new instance of the <see cref="FMIceLinkWebRTCMatroskaSegment" /> class.
/// </summary>
+ (FMIceLinkWebRTCMatroskaSegment*) matroskaSegment;
/// <summary>
/// Initializes a new instance of the <see cref="FMIceLinkWebRTCMatroskaSegment" /> class.
/// </summary>
/// <param name="bytes">The bytes.</param>
+ (FMIceLinkWebRTCMatroskaSegment*) matroskaSegmentWithBytes:(NSMutableData*)bytes;
/// <summary>
/// Merges another <see cref="FMIceLinkWebRTCMatroskaSegment" /> into this one.
/// </summary>
/// <param name="segment">The <see cref="FMIceLinkWebRTCMatroskaSegment" />.</param>
- (void) mergeWithSegment:(FMIceLinkWebRTCMatroskaSegment*)segment;
/// <summary>
/// Gets the seek head elements.
/// </summary>
- (NSMutableArray*) seekHeads;
/// <summary>
/// Gets the segment info element.
/// </summary>
- (FMIceLinkWebRTCMatroskaSegmentInfo*) segmentInfo;
/// <summary>
/// Sets the cluster elements.
/// </summary>
- (void) setClusters:(NSMutableArray*)value;
/// <summary>
/// Sets the seek head elements.
/// </summary>
- (void) setSeekHeads:(NSMutableArray*)value;
/// <summary>
/// Sets the segment info element.
/// </summary>
- (void) setSegmentInfo:(FMIceLinkWebRTCMatroskaSegmentInfo*)value;
/// <summary>
/// Sets the track elements.
/// </summary>
- (void) setTracks:(NSMutableArray*)value;
/// <summary>
/// Gets the track elements.
/// </summary>
- (NSMutableArray*) tracks;

@end


@class FMNullableDate;
@class FMNullableFloat;
@class NSStringFMExtensions;
@class FMNullableGuid;
@class NSMutableDataFMExtensions;

/// <summary>
/// A Matroska segment info element.
/// </summary>
#pragma clang diagnostic ignored "-Wshorten-64-to-32"
#pragma clang diagnostic ignored "-Wint-to-pointer-cast"

@interface FMIceLinkWebRTCMatroskaSegmentInfo : FMIceLinkWebRTCMatroskaElement 

/// <summary>
/// Gets the date in UTC time.
/// </summary>
- (FMNullableDate*) dateUtc;
/// <summary>
/// Gets the default timecode scale.
/// </summary>
+ (long long) defaultTimecodeScale;
/// <summary>
/// Gets the duration.
/// </summary>
- (FMNullableFloat*) duration;
/// <summary>
/// Gets the EBML ID.
/// </summary>
+ (NSMutableData*) ebmlId;
/// <summary>
/// Gets the inner bytes.
/// </summary>
/// <returns></returns>
- (NSMutableData*) getInnerBytes;
/// <summary>
/// Gets the EBML ID.
/// </summary>
- (NSMutableData*) id;
/// <summary>
/// Initializes a new instance of the <see cref="FMIceLinkWebRTCMatroskaSegmentInfo" /> class.
/// </summary>
- (id) init;
/// <summary>
/// Initializes a new instance of the <see cref="FMIceLinkWebRTCMatroskaSegmentInfo" /> class.
/// </summary>
/// <param name="bytes">The bytes.</param>
- (id) initWithBytes:(NSMutableData*)bytes;
/// <summary>
/// Initializes a new instance of the <see cref="FMIceLinkWebRTCMatroskaSegmentInfo" /> class.
/// </summary>
+ (FMIceLinkWebRTCMatroskaSegmentInfo*) matroskaSegmentInfo;
/// <summary>
/// Initializes a new instance of the <see cref="FMIceLinkWebRTCMatroskaSegmentInfo" /> class.
/// </summary>
/// <param name="bytes">The bytes.</param>
+ (FMIceLinkWebRTCMatroskaSegmentInfo*) matroskaSegmentInfoWithBytes:(NSMutableData*)bytes;
/// <summary>
/// Merges another <see cref="FMIceLinkWebRTCMatroskaSegmentInfo" /> into this one.
/// </summary>
/// <param name="segmentInfo">The <see cref="FMIceLinkWebRTCMatroskaSegmentInfo" />.</param>
- (void) mergeWithSegmentInfo:(FMIceLinkWebRTCMatroskaSegmentInfo*)segmentInfo;
/// <summary>
/// Gets the muxing application.
/// </summary>
- (NSString*) muxingApp;
/// <summary>
/// Gets the next filename.
/// </summary>
- (NSString*) nextFilename;
/// <summary>
/// Gets the next UID.
/// </summary>
- (FMNullableGuid*) nextUid;
/// <summary>
/// Gets the previous filename.
/// </summary>
- (NSString*) prevFilename;
/// <summary>
/// Gets the previous UID.
/// </summary>
- (FMNullableGuid*) prevUid;
/// <summary>
/// Gets the segment filename.
/// </summary>
- (NSString*) segmentFilename;
/// <summary>
/// Gets the segment UID.
/// </summary>
- (FMNullableGuid*) segmentUid;
/// <summary>
/// Sets the date in UTC time.
/// </summary>
- (void) setDateUtc:(FMNullableDate*)value;
/// <summary>
/// Sets the duration.
/// </summary>
- (void) setDuration:(FMNullableFloat*)value;
/// <summary>
/// Sets the muxing application.
/// </summary>
- (void) setMuxingApp:(NSString*)value;
/// <summary>
/// Sets the next filename.
/// </summary>
- (void) setNextFilename:(NSString*)value;
/// <summary>
/// Sets the next UID.
/// </summary>
- (void) setNextUid:(FMNullableGuid*)value;
/// <summary>
/// Sets the previous filename.
/// </summary>
- (void) setPrevFilename:(NSString*)value;
/// <summary>
/// Sets the previous UID.
/// </summary>
- (void) setPrevUid:(FMNullableGuid*)value;
/// <summary>
/// Sets the segment filename.
/// </summary>
- (void) setSegmentFilename:(NSString*)value;
/// <summary>
/// Sets the segment UID.
/// </summary>
- (void) setSegmentUid:(FMNullableGuid*)value;
/// <summary>
/// Sets the timecode scale.
/// </summary>
- (void) setTimecodeScale:(long long)value;
/// <summary>
/// Sets the title.
/// </summary>
- (void) setTitle:(NSString*)value;
/// <summary>
/// Sets the writing application.
/// </summary>
- (void) setWritingApp:(NSString*)value;
/// <summary>
/// Gets the timecode scale.
/// </summary>
- (long long) timecodeScale;
/// <summary>
/// Gets the title.
/// </summary>
- (NSString*) title;
/// <summary>
/// Gets the writing application.
/// </summary>
- (NSString*) writingApp;

@end


@class NSMutableArrayFMExtensions;
@class FMIceLinkWebRTCMatroskaAudio;
@class FMNullableLong;
@class NSStringFMExtensions;
@class NSMutableDataFMExtensions;
@class FMIceLinkWebRTCMatroskaContentEncodings;
@class FMNullableFloat;
@class FMIceLinkWebRTCMatroskaVideo;

/// <summary>
/// A Matroska track entry element.
/// </summary>
#pragma clang diagnostic ignored "-Wshorten-64-to-32"
#pragma clang diagnostic ignored "-Wint-to-pointer-cast"

@interface FMIceLinkWebRTCMatroskaTrackEntry : FMIceLinkWebRTCMatroskaElement 

/// <summary>
/// Gets the attachment links.
/// </summary>
- (NSMutableArray*) attachmentLinks;
/// <summary>
/// Gets the audio element.
/// </summary>
- (FMIceLinkWebRTCMatroskaAudio*) audio;
/// <summary>
/// Gets the codec delay.
/// </summary>
- (FMNullableLong*) codecDelay;
/// <summary>
/// Gets the codec identifier.
/// </summary>
- (NSString*) codecId;
/// <summary>
/// Gets the codec name.
/// </summary>
- (NSString*) codecName;
/// <summary>
/// Gets the codec private.
/// </summary>
- (NSMutableData*) codecPrivate;
/// <summary>
/// Gets the content encoding elements.
/// </summary>
- (FMIceLinkWebRTCMatroskaContentEncodings*) contentEncodings;
/// <summary>
/// Gets the default duration.
/// </summary>
- (FMNullableLong*) defaultDuration;
/// <summary>
/// Gets the default default flag.
/// </summary>
+ (bool) defaultFlagDefault;
/// <summary>
/// Gets the default enabled flag.
/// </summary>
+ (bool) defaultFlagEnabled;
/// <summary>
/// Gets the default forced flag.
/// </summary>
+ (bool) defaultFlagForced;
/// <summary>
/// Gets the default lacing flag.
/// </summary>
+ (bool) defaultFlagLacing;
/// <summary>
/// Gets the default language.
/// </summary>
+ (NSString*) defaultLanguage;
/// <summary>
/// Gets the default minimum cache.
/// </summary>
+ (long long) defaultMinCache;
/// <summary>
/// Gets the EBML ID.
/// </summary>
+ (NSMutableData*) ebmlId;
/// <summary>
/// Gets the default flag.
/// </summary>
- (bool) flagDefault;
/// <summary>
/// Gets the enabled flag.
/// </summary>
- (bool) flagEnabled;
/// <summary>
/// Gets the forced flag.
/// </summary>
- (bool) flagForced;
/// <summary>
/// Gets the lacing flag.
/// </summary>
- (bool) flagLacing;
/// <summary>
/// Gets the inner bytes.
/// </summary>
/// <returns></returns>
- (NSMutableData*) getInnerBytes;
/// <summary>
/// Gets the H.264 codec ID.
/// </summary>
+ (NSString*) h264CodecId;
/// <summary>
/// Gets the EBML ID.
/// </summary>
- (NSMutableData*) id;
/// <summary>
/// Initializes a new instance of the <see cref="FMIceLinkWebRTCMatroskaTrackEntry" /> class.
/// </summary>
- (id) init;
/// <summary>
/// Initializes a new instance of the <see cref="FMIceLinkWebRTCMatroskaTrackEntry" /> class.
/// </summary>
/// <param name="bytes">The bytes.</param>
- (id) initWithBytes:(NSMutableData*)bytes;
/// <summary>
/// Gets the language.
/// </summary>
- (NSString*) language;
/// <summary>
/// Initializes a new instance of the <see cref="FMIceLinkWebRTCMatroskaTrackEntry" /> class.
/// </summary>
+ (FMIceLinkWebRTCMatroskaTrackEntry*) matroskaTrackEntry;
/// <summary>
/// Initializes a new instance of the <see cref="FMIceLinkWebRTCMatroskaTrackEntry" /> class.
/// </summary>
/// <param name="bytes">The bytes.</param>
+ (FMIceLinkWebRTCMatroskaTrackEntry*) matroskaTrackEntryWithBytes:(NSMutableData*)bytes;
/// <summary>
/// Gets the maximum cache.
/// </summary>
- (FMNullableLong*) maxCache;
/// <summary>
/// Gets the minimum cache.
/// </summary>
- (long long) minCache;
/// <summary>
/// Gets the name.
/// </summary>
- (NSString*) name;
/// <summary>
/// Gets the Opus codec ID.
/// </summary>
+ (NSString*) opusCodecId;
/// <summary>
/// Gets the PCMA format tag.
/// </summary>
+ (int) pcmaFormatTag;
/// <summary>
/// Gets the PCM codec ID.
/// </summary>
+ (NSString*) pcmCodecId;
/// <summary>
/// Gets the PCMU format tag.
/// </summary>
+ (int) pcmuFormatTag;
/// <summary>
/// Gets the seek pre-roll.
/// </summary>
- (FMNullableLong*) seekPreRoll;
/// <summary>
/// Sets the attachment links.
/// </summary>
- (void) setAttachmentLinks:(NSMutableArray*)value;
/// <summary>
/// Sets the audio element.
/// </summary>
- (void) setAudio:(FMIceLinkWebRTCMatroskaAudio*)value;
/// <summary>
/// Sets the codec delay.
/// </summary>
- (void) setCodecDelay:(FMNullableLong*)value;
/// <summary>
/// Sets the codec identifier.
/// </summary>
- (void) setCodecId:(NSString*)value;
/// <summary>
/// Sets the codec name.
/// </summary>
- (void) setCodecName:(NSString*)value;
/// <summary>
/// Sets the codec private.
/// </summary>
- (void) setCodecPrivate:(NSMutableData*)value;
/// <summary>
/// Sets the content encoding elements.
/// </summary>
- (void) setContentEncodings:(FMIceLinkWebRTCMatroskaContentEncodings*)value;
/// <summary>
/// Sets the default duration.
/// </summary>
- (void) setDefaultDuration:(FMNullableLong*)value;
/// <summary>
/// Sets the default flag.
/// </summary>
- (void) setFlagDefault:(bool)value;
/// <summary>
/// Sets the enabled flag.
/// </summary>
- (void) setFlagEnabled:(bool)value;
/// <summary>
/// Sets the forced flag.
/// </summary>
- (void) setFlagForced:(bool)value;
/// <summary>
/// Sets the lacing flag.
/// </summary>
- (void) setFlagLacing:(bool)value;
/// <summary>
/// Sets the language.
/// </summary>
- (void) setLanguage:(NSString*)value;
/// <summary>
/// Sets the maximum cache.
/// </summary>
- (void) setMaxCache:(FMNullableLong*)value;
/// <summary>
/// Sets the minimum cache.
/// </summary>
- (void) setMinCache:(long long)value;
/// <summary>
/// Sets the name.
/// </summary>
- (void) setName:(NSString*)value;
/// <summary>
/// Sets the seek pre-roll.
/// </summary>
- (void) setSeekPreRoll:(FMNullableLong*)value;
/// <summary>
/// Sets the track number.
/// </summary>
- (void) setTrackNumber:(long long)value;
/// <summary>
/// Sets the track timecode scale.
/// </summary>
- (void) setTrackTimecodeScale:(FMNullableFloat*)value;
/// <summary>
/// Sets the track type.
/// </summary>
- (void) setTrackType:(long long)value;
/// <summary>
/// Sets the track UID.
/// </summary>
- (void) setTrackUid:(long long)value;
/// <summary>
/// Sets the video element.
/// </summary>
- (void) setVideo:(FMIceLinkWebRTCMatroskaVideo*)value;
/// <summary>
/// Gets the track number.
/// </summary>
- (long long) trackNumber;
/// <summary>
/// Gets the track timecode scale.
/// </summary>
- (FMNullableFloat*) trackTimecodeScale;
/// <summary>
/// Gets the track type.
/// </summary>
- (long long) trackType;
/// <summary>
/// Gets the track UID.
/// </summary>
- (long long) trackUid;
/// <summary>
/// Gets the video element.
/// </summary>
- (FMIceLinkWebRTCMatroskaVideo*) video;
/// <summary>
/// Gets the VP8 codec ID.
/// </summary>
+ (NSString*) vp8CodecId;

@end


@class NSMutableArrayFMExtensions;
@class NSMutableDataFMExtensions;

/// <summary>
/// A Matroska track element.
/// </summary>
#pragma clang diagnostic ignored "-Wshorten-64-to-32"
#pragma clang diagnostic ignored "-Wint-to-pointer-cast"

@interface FMIceLinkWebRTCMatroskaTrack : FMIceLinkWebRTCMatroskaElement 

/// <summary>
/// Gets the EBML ID.
/// </summary>
+ (NSMutableData*) ebmlId;
/// <summary>
/// Gets the inner bytes.
/// </summary>
/// <returns></returns>
- (NSMutableData*) getInnerBytes;
/// <summary>
/// Gets the EBML ID.
/// </summary>
- (NSMutableData*) id;
/// <summary>
/// Initializes a new instance of the <see cref="FMIceLinkWebRTCMatroskaTrack" /> class.
/// </summary>
- (id) init;
/// <summary>
/// Initializes a new instance of the <see cref="FMIceLinkWebRTCMatroskaTrack" /> class.
/// </summary>
/// <param name="bytes">The bytes.</param>
- (id) initWithBytes:(NSMutableData*)bytes;
/// <summary>
/// Initializes a new instance of the <see cref="FMIceLinkWebRTCMatroskaTrack" /> class.
/// </summary>
+ (FMIceLinkWebRTCMatroskaTrack*) matroskaTrack;
/// <summary>
/// Initializes a new instance of the <see cref="FMIceLinkWebRTCMatroskaTrack" /> class.
/// </summary>
/// <param name="bytes">The bytes.</param>
+ (FMIceLinkWebRTCMatroskaTrack*) matroskaTrackWithBytes:(NSMutableData*)bytes;
/// <summary>
/// Merges another <see cref="FMIceLinkWebRTCMatroskaTrack" /> into this one.
/// </summary>
/// <param name="track">The <see cref="FMIceLinkWebRTCMatroskaTrack" />.</param>
- (void) mergeWithTrack:(FMIceLinkWebRTCMatroskaTrack*)track;
/// <summary>
/// Sets the track entry elements.
/// </summary>
- (void) setTrackEntries:(NSMutableArray*)value;
/// <summary>
/// Gets the track entry elements.
/// </summary>
- (NSMutableArray*) trackEntries;

@end



/// <summary>
/// Valid Matroska track entry element types.
/// </summary>
#pragma clang diagnostic ignored "-Wshorten-64-to-32"
#pragma clang diagnostic ignored "-Wint-to-pointer-cast"

@interface FMIceLinkWebRTCMatroskaTrackType : NSObject 

/// <summary>
/// Gets a value indicating audio.
/// </summary>
+ (long long) audio;
/// <summary>
/// Gets a value indicating button.
/// </summary>
+ (long long) button;
/// <summary>
/// Gets a value indicating complex.
/// </summary>
+ (long long) complex;
/// <summary>
/// Gets a value indicating control.
/// </summary>
+ (long long) control;
- (id) init;
/// <summary>
/// Gets a value indicating logo.
/// </summary>
+ (long long) logo;
+ (FMIceLinkWebRTCMatroskaTrackType*) matroskaTrackType;
/// <summary>
/// Gets a value indicating subtitle.
/// </summary>
+ (long long) subtitle;
/// <summary>
/// Gets a value indicating video.
/// </summary>
+ (long long) video;

@end


@class FMNullableLong;
@class NSMutableDataFMExtensions;

/// <summary>
/// A Matroska video element.
/// </summary>
#pragma clang diagnostic ignored "-Wshorten-64-to-32"
#pragma clang diagnostic ignored "-Wint-to-pointer-cast"

@interface FMIceLinkWebRTCMatroskaVideo : FMIceLinkWebRTCMatroskaElement 

/// <summary>
/// Gets the default display unit.
/// </summary>
+ (long long) defaultDisplayUnit;
/// <summary>
/// Gets the default pixel crop bottom.
/// </summary>
+ (long long) defaultPixelCropBottom;
/// <summary>
/// Gets the default pixel crop left.
/// </summary>
+ (long long) defaultPixelCropLeft;
/// <summary>
/// Gets the default pixel crop right.
/// </summary>
+ (long long) defaultPixelCropRight;
/// <summary>
/// Gets the default pixel crop top.
/// </summary>
+ (long long) defaultPixelCropTop;
/// <summary>
/// Gets the display height.
/// </summary>
- (FMNullableLong*) displayHeight;
/// <summary>
/// Gets the display unit.
/// </summary>
- (long long) displayUnit;
/// <summary>
/// Gets the display width.
/// </summary>
- (FMNullableLong*) displayWidth;
/// <summary>
/// Gets the EBML ID.
/// </summary>
+ (NSMutableData*) ebmlId;
/// <summary>
/// Gets the inner bytes.
/// </summary>
/// <returns></returns>
- (NSMutableData*) getInnerBytes;
/// <summary>
/// Gets the EBML ID.
/// </summary>
- (NSMutableData*) id;
/// <summary>
/// Initializes a new instance of the <see cref="FMIceLinkWebRTCMatroskaVideo" /> class.
/// </summary>
- (id) init;
/// <summary>
/// Initializes a new instance of the <see cref="FMIceLinkWebRTCMatroskaVideo" /> class.
/// </summary>
/// <param name="bytes">The bytes.</param>
- (id) initWithBytes:(NSMutableData*)bytes;
/// <summary>
/// Initializes a new instance of the <see cref="FMIceLinkWebRTCMatroskaVideo" /> class.
/// </summary>
+ (FMIceLinkWebRTCMatroskaVideo*) matroskaVideo;
/// <summary>
/// Initializes a new instance of the <see cref="FMIceLinkWebRTCMatroskaVideo" /> class.
/// </summary>
/// <param name="bytes">The bytes.</param>
+ (FMIceLinkWebRTCMatroskaVideo*) matroskaVideoWithBytes:(NSMutableData*)bytes;
/// <summary>
/// Gets the pixel crop bottom.
/// </summary>
- (long long) pixelCropBottom;
/// <summary>
/// Gets the pixel crop left.
/// </summary>
- (long long) pixelCropLeft;
/// <summary>
/// Gets the pixel crop right.
/// </summary>
- (long long) pixelCropRight;
/// <summary>
/// Gets the pixel crop top.
/// </summary>
- (long long) pixelCropTop;
/// <summary>
/// Gets the pixel height.
/// </summary>
- (long long) pixelHeight;
/// <summary>
/// Gets the pixel width.
/// </summary>
- (long long) pixelWidth;
/// <summary>
/// Sets the display height.
/// </summary>
- (void) setDisplayHeight:(FMNullableLong*)value;
/// <summary>
/// Sets the display unit.
/// </summary>
- (void) setDisplayUnit:(long long)value;
/// <summary>
/// Sets the display width.
/// </summary>
- (void) setDisplayWidth:(FMNullableLong*)value;
/// <summary>
/// Sets the pixel crop bottom.
/// </summary>
- (void) setPixelCropBottom:(long long)value;
/// <summary>
/// Sets the pixel crop left.
/// </summary>
- (void) setPixelCropLeft:(long long)value;
/// <summary>
/// Sets the pixel crop right.
/// </summary>
- (void) setPixelCropRight:(long long)value;
/// <summary>
/// Sets the pixel crop top.
/// </summary>
- (void) setPixelCropTop:(long long)value;
/// <summary>
/// Sets the pixel height.
/// </summary>
- (void) setPixelHeight:(long long)value;
/// <summary>
/// Sets the pixel width.
/// </summary>
- (void) setPixelWidth:(long long)value;

@end



/// <summary>
/// Valid Matroska video element display units.
/// </summary>
#pragma clang diagnostic ignored "-Wshorten-64-to-32"
#pragma clang diagnostic ignored "-Wint-to-pointer-cast"

@interface FMIceLinkWebRTCMatroskaVideoDisplayUnit : NSObject 

/// <summary>
/// Gets a value indicating centimeters.
/// </summary>
+ (long long) centimeters;
/// <summary>
/// Gets a value indicating display aspect ratio.
/// </summary>
+ (long long) displayAspectRatio;
/// <summary>
/// Gets a value indicating inches.
/// </summary>
+ (long long) inches;
- (id) init;
+ (FMIceLinkWebRTCMatroskaVideoDisplayUnit*) matroskaVideoDisplayUnit;
/// <summary>
/// Gets a value indicating pixels.
/// </summary>
+ (long long) pixels;

@end


@class NSStringFMExtensions;
@class FMFile;
@class FMFileStream;
@class NSMutableArrayFMExtensions;
@class NSMutableDataFMExtensions;

/// <summary>
/// An Ogg audio recorder.
/// </summary>
#pragma clang diagnostic ignored "-Wshorten-64-to-32"
#pragma clang diagnostic ignored "-Wint-to-pointer-cast"

@interface FMIceLinkWebRTCOggAudioRecorder : NSObject 

/// <summary>
/// Gets the file artist.
/// </summary>
- (NSString*) artist;
/// <summary>
/// Gets the number of channels.
/// </summary>
- (int) channels;
/// <summary>
/// Gets the clock rate.
/// </summary>
- (int) clockRate;
/// <summary>
/// Closes the file.
/// </summary>
- (void) close;
/// <summary>
/// Gets the encoding name.
/// </summary>
- (NSString*) encodingName;
/// <summary>
/// Initializes a new instance of the <see cref="FMIceLinkWebRTCOggAudioRecorder" /> class.
/// </summary>
/// <param name="path">The path.</param>
/// <param name="encodingName">The encoding name.</param>
/// <param name="clockRate">The clock rate.</param>
- (id) initWithPath:(NSString*)path encodingName:(NSString*)encodingName clockRate:(int)clockRate;
/// <summary>
/// Initializes a new instance of the <see cref="FMIceLinkWebRTCOggAudioRecorder" /> class.
/// </summary>
/// <param name="path">The path.</param>
/// <param name="encodingName">The encoding name.</param>
/// <param name="clockRate">The clock rate.</param>
/// <param name="channels">The number of channels.</param>
- (id) initWithPath:(NSString*)path encodingName:(NSString*)encodingName clockRate:(int)clockRate channels:(int)channels;
/// <summary>
/// Initializes a new instance of the <see cref="FMIceLinkWebRTCOggAudioRecorder" /> class.
/// </summary>
/// <param name="path">The path.</param>
/// <param name="encodingName">The encoding name.</param>
/// <param name="clockRate">The clock rate.</param>
+ (FMIceLinkWebRTCOggAudioRecorder*) oggAudioRecorderWithPath:(NSString*)path encodingName:(NSString*)encodingName clockRate:(int)clockRate;
/// <summary>
/// Initializes a new instance of the <see cref="FMIceLinkWebRTCOggAudioRecorder" /> class.
/// </summary>
/// <param name="path">The path.</param>
/// <param name="encodingName">The encoding name.</param>
/// <param name="clockRate">The clock rate.</param>
/// <param name="channels">The number of channels.</param>
+ (FMIceLinkWebRTCOggAudioRecorder*) oggAudioRecorderWithPath:(NSString*)path encodingName:(NSString*)encodingName clockRate:(int)clockRate channels:(int)channels;
/// <summary>
/// Opens the file and writes the initial header.
/// </summary>
/// <returns>The actual path of the opened file.</returns>
- (NSString*) open;
/// <summary>
/// Gets the path.
/// </summary>
- (NSString*) path;
/// <summary>
/// Sets the file artist.
/// </summary>
- (void) setArtist:(NSString*)value;
/// <summary>
/// Sets the file title.
/// </summary>
- (void) setTitle:(NSString*)value;
/// <summary>
/// Sets the file vendor.
/// </summary>
- (void) setVendor:(NSString*)value;
/// <summary>
/// Gets the suffix appended to the filename.
/// </summary>
- (NSString*) suffix;
/// <summary>
/// Gets the file title.
/// </summary>
- (NSString*) title;
/// <summary>
/// Gets the file vendor.
/// </summary>
- (NSString*) vendor;
/// <summary>
/// Writes an encoded audio frame.
/// </summary>
/// <param name="encodedFrame">The encoded frame.</param>
/// <returns><c>true</c> if the encoded frame was written successfully; otherwise, <c>false</c></returns>
- (bool) writeWithEncodedFrame:(NSMutableData*)encodedFrame;
/// <summary>
/// Writes an encoded audio frame.
/// </summary>
/// <param name="encodedFrame">The encoded frame.</param>
/// <param name="sampleCount">The number of samples in the encoded frame.</param>
/// <returns><c>true</c> if the encoded frame was written successfully; otherwise, <c>false</c></returns>
- (bool) writeWithEncodedFrame:(NSMutableData*)encodedFrame sampleCount:(int)sampleCount;

@end


@class FMRandomizer;

/// <summary>
/// Base render provider.
/// </summary>
#pragma clang diagnostic ignored "-Wshorten-64-to-32"
#pragma clang diagnostic ignored "-Wint-to-pointer-cast"

@interface FMIceLinkWebRTCRenderProvider : FMDynamic 

/// <summary>
/// Determines (randomly) how many packets should go out before a delayed packet is sent.
/// </summary>
/// <param name="delayPacketMaximum">The delay packet maximum.</param>
/// <returns></returns>
- (int) getPacketDelayWithDelayPacketMaximum:(int)delayPacketMaximum;
/// <summary>
/// Determines (randomly) how many packets should go out before a delayed packet is sent.
/// </summary>
/// <param name="delayPacketMaximum">The delay packet maximum.</param>
/// <returns></returns>
- (int) getPacketDelayWithPacketMaximum:(int)delayPacketMaximum;
- (id) init;
+ (FMIceLinkWebRTCRenderProvider*) renderProvider;
/// <summary>
/// Determines (randomly) whether a packet should be delayed.
/// </summary>
/// <param name="delayPacketProbability">The delay packet probability.</param>
/// <returns></returns>
- (bool) shouldDelayPacketWithDelayPacketProbability:(int)delayPacketProbability;
/// <summary>
/// Determines (randomly) whether a packet should be delayed.
/// </summary>
/// <param name="delayPacketProbability">The delay packet probability.</param>
/// <returns></returns>
- (bool) shouldDelayPacketWithProbability:(int)delayPacketProbability;
/// <summary>
/// Determines (randomly) whether a packet should be dropped.
/// </summary>
/// <param name="dropPacketProbability">The drop packet probability.</param>
/// <returns></returns>
- (bool) shouldDropPacketWithDropPacketProbability:(int)dropPacketProbability;
/// <summary>
/// Determines (randomly) whether a packet should be dropped.
/// </summary>
/// <param name="dropPacketProbability">The drop packet probability.</param>
/// <returns></returns>
- (bool) shouldDropPacketWithProbability:(int)dropPacketProbability;

@end


@class FMIceLinkWebRTCAudioRenderMutedArgs;
@class FMIceLinkWebRTCAudioRenderUnmutedArgs;
@class FMCallback;
@class FMIceLinkWebRTCAudioRenderInitializeArgs;
@class FMIceLinkWebRTCAudioBuffer;

/// <summary>
/// Abstract definition for an audio render implementation.
/// </summary>
#pragma clang diagnostic ignored "-Wshorten-64-to-32"
#pragma clang diagnostic ignored "-Wint-to-pointer-cast"

@interface FMIceLinkWebRTCAudioRenderProvider : FMIceLinkWebRTCRenderProvider 

/// <summary>
/// Adds a handler that is raised whenever the render is muted.
/// </summary>
- (FMCallback*) addOnMutedWithValue:(FMCallback*)value;
/// <summary>
/// Adds a handler that is raised whenever the render is muted.
/// </summary>
- (FMCallback*) addOnMuted:(FMCallback*)value;
/// <summary>
/// Adds a handler that is raised whenever the render is muted.
/// </summary>
- (FMCallback*) addOnMutedWithValueBlock:(void (^) (FMIceLinkWebRTCAudioRenderMutedArgs*))valueBlock;
/// <summary>
/// Adds a handler that is raised whenever the render is muted.
/// </summary>
- (FMCallback*) addOnMutedBlock:(void (^) (FMIceLinkWebRTCAudioRenderMutedArgs*))valueBlock;
/// <summary>
/// Adds a handler that is raised whenever the render is unmuted.
/// </summary>
- (FMCallback*) addOnUnmutedWithValue:(FMCallback*)value;
/// <summary>
/// Adds a handler that is raised whenever the render is unmuted.
/// </summary>
- (FMCallback*) addOnUnmuted:(FMCallback*)value;
/// <summary>
/// Adds a handler that is raised whenever the render is unmuted.
/// </summary>
- (FMCallback*) addOnUnmutedWithValueBlock:(void (^) (FMIceLinkWebRTCAudioRenderUnmutedArgs*))valueBlock;
/// <summary>
/// Adds a handler that is raised whenever the render is unmuted.
/// </summary>
- (FMCallback*) addOnUnmutedBlock:(void (^) (FMIceLinkWebRTCAudioRenderUnmutedArgs*))valueBlock;
+ (FMIceLinkWebRTCAudioRenderProvider*) audioRenderProvider;
/// <summary>
/// Gets the channel count.
/// </summary>
- (int) channels;
/// <summary>
/// Gets the clock rate.
/// </summary>
- (int) clockRate;
/// <summary>
/// Destroys the audio render provider. No additional rendering will take place.
/// </summary>
- (void) destroy;
- (bool) destroyInternal;
- (id) init;
- (bool) initializeInternalWithRenderArgs:(FMIceLinkWebRTCAudioRenderInitializeArgs*)renderArgs;
/// <summary>
/// Initializes the audio render provider.
/// </summary>
/// <param name="renderArgs">The arguments.</param>
- (void) initializeWithRenderArgs:(FMIceLinkWebRTCAudioRenderInitializeArgs*)renderArgs;
/// <summary>
/// Gets whether the audio render provider has been destroyed.
/// </summary>
- (bool) isDestroyed;
/// <summary>
/// Gets whether the audio render provider has been initialized.
/// </summary>
- (bool) isInitialized;
/// <summary>
/// Gets whether or not the provider is muted.
/// </summary>
- (bool) isMuted;
/// <summary>
/// Gets whether or not the provider is currently rendering audio.
/// </summary>
- (bool) isRendering;
/// <summary>
/// Stops playback of incoming frames.
/// </summary>
/// <returns><c>true</c> if the operation was successful; otherwise, <c>false</c>.</returns>
- (bool) mute;
/// <summary>
/// Removes a handler that is raised whenever the render is muted.
/// </summary>
- (void) removeOnMutedWithValue:(FMCallback*)value;
/// <summary>
/// Removes a handler that is raised whenever the render is muted.
/// </summary>
- (void) removeOnMuted:(FMCallback*)value;
/// <summary>
/// Removes a handler that is raised whenever the render is unmuted.
/// </summary>
- (void) removeOnUnmutedWithValue:(FMCallback*)value;
/// <summary>
/// Removes a handler that is raised whenever the render is unmuted.
/// </summary>
- (void) removeOnUnmuted:(FMCallback*)value;
- (void) renderInternalWithFrame:(FMIceLinkWebRTCAudioBuffer*)frame;
/// <summary>
/// Renders an audio frame.
/// </summary>
/// <param name="frame">The frame.</param>
- (void) renderWithFrame:(FMIceLinkWebRTCAudioBuffer*)frame;
/// <summary>
/// Sets the volume (1.0 is unity gain).
/// </summary>
- (void) setVolume:(float)value;
/// <summary>
/// Starts playback of incoming frames.
/// </summary>
/// <returns><c>true</c> if the operation was successful; otherwise, <c>false</c>.</returns>
- (bool) unmute;
/// <summary>
/// Gets the volume (1.0 is unity gain).
/// </summary>
- (float) volume;

@end


@class FMIceLinkWebRTCAudioCodec;
@class FMIceLinkWebRTCOggAudioRecorder;
@class FMIceLinkWebRTCResampler;
@class FMIceLinkWebRTCAudioRenderInitializeArgs;
@class NSStringFMExtensions;
@class FMIceLinkWebRTCAudioBuffer;

/// <summary>
/// An audio render provider that writes audio frames to an Ogg-formatted file.
/// </summary>
#pragma clang diagnostic ignored "-Wshorten-64-to-32"
#pragma clang diagnostic ignored "-Wint-to-pointer-cast"

@interface FMIceLinkWebRTCOggAudioRenderProvider : FMIceLinkWebRTCAudioRenderProvider 

/// <summary>
/// Gets the codec.
/// </summary>
- (FMIceLinkWebRTCAudioCodec*) codec;
/// <summary>
/// Destroys the audio render provider. No additional rendering will take place.
/// </summary>
- (void) destroy;
/// <summary>
/// Initializes the audio render provider.
/// </summary>
/// <param name="renderArgs">The arguments.</param>
- (void) initializeWithRenderArgs:(FMIceLinkWebRTCAudioRenderInitializeArgs*)renderArgs;
/// <summary>
/// Initializes a new instance of the <see cref="FMIceLinkWebRTCOggAudioRenderProvider" /> class.
/// </summary>
/// <param name="path">The path.</param>
/// <param name="codec">The audio codec.</param>
- (id) initWithPath:(NSString*)path codec:(FMIceLinkWebRTCAudioCodec*)codec;
/// <summary>
/// Initializes a new instance of the <see cref="FMIceLinkWebRTCOggAudioRenderProvider" /> class.
/// </summary>
/// <param name="path">The path.</param>
/// <param name="codec">The audio codec.</param>
+ (FMIceLinkWebRTCOggAudioRenderProvider*) oggAudioRenderProviderWithPath:(NSString*)path codec:(FMIceLinkWebRTCAudioCodec*)codec;
/// <summary>
/// Gets the recorder.
/// </summary>
- (FMIceLinkWebRTCOggAudioRecorder*) recorder;
/// <summary>
/// Renders an audio frame.
/// </summary>
/// <param name="frame">The frame.</param>
- (void) renderWithFrame:(FMIceLinkWebRTCAudioBuffer*)frame;

@end


@class NSStringFMExtensions;
@class FMIceLinkWebRTCAudioCodec;

/// <summary>
/// An audio render provider that writes audio frames to an Ogg-formatted file.
/// DEPRECATED: use OggAudioRenderProvider instead.
/// </summary>
#pragma clang diagnostic ignored "-Wshorten-64-to-32"
#pragma clang diagnostic ignored "-Wint-to-pointer-cast"

@interface FMIceLinkWebRTCOggAudioRecordingProvider : FMIceLinkWebRTCOggAudioRenderProvider 

/// <summary>
/// Initializes a new instance of the <see cref="FMIceLinkWebRTCOggAudioRecordingProvider" /> class.
/// </summary>
/// <param name="path">The path.</param>
/// <param name="codec">The audio codec.</param>
- (id) initWithPath:(NSString*)path codec:(FMIceLinkWebRTCAudioCodec*)codec;
/// <summary>
/// Initializes a new instance of the <see cref="FMIceLinkWebRTCOggAudioRecordingProvider" /> class.
/// </summary>
/// <param name="path">The path.</param>
/// <param name="codec">The audio codec.</param>
+ (FMIceLinkWebRTCOggAudioRecordingProvider*) oggAudioRecordingProviderWithPath:(NSString*)path codec:(FMIceLinkWebRTCAudioCodec*)codec;

@end


@class NSMutableDataFMExtensions;

/// <summary>
/// An Ogg page.
/// </summary>
#pragma clang diagnostic ignored "-Wshorten-64-to-32"
#pragma clang diagnostic ignored "-Wint-to-pointer-cast"

@interface FMIceLinkWebRTCOggPage : NSObject 

/// <summary>
/// Gets the absolute granule position.
/// </summary>
- (int) absoluteGranulePosition;
/// <summary>
/// Gets whether this page is the first page of the bitstream.
/// </summary>
- (bool) beginningOfStream;
/// <summary>
/// Gets whether this page is a continued (not fresh) packet.
/// </summary>
- (bool) continuedPacket;
/// <summary>
/// Gets whether this page is the last page of the bitstream.
/// </summary>
- (bool) endOfStream;
/// <summary>
/// Gets the page as a byte array.
/// </summary>
/// <returns></returns>
- (NSMutableData*) getBytes;
/// <summary>
/// Initializes a new instance of the <see cref="FMIceLinkWebRTCOggPage" /> class.
/// </summary>
- (id) init;
/// <summary>
/// Initializes a new instance of the <see cref="FMIceLinkWebRTCOggPage" /> class.
/// </summary>
+ (FMIceLinkWebRTCOggPage*) oggPage;
/// <summary>
/// Gets the data payload.
/// </summary>
- (NSMutableData*) payload;
/// <summary>
/// Gets the page sequence number.
/// </summary>
- (int) sequenceNumber;
/// <summary>
/// Sets the absolute granule position.
/// </summary>
- (void) setAbsoluteGranulePosition:(int)value;
/// <summary>
/// Sets whether this page is the first page of the bitstream.
/// </summary>
- (void) setBeginningOfStream:(bool)value;
/// <summary>
/// Sets whether this page is a continued (not fresh) packet.
/// </summary>
- (void) setContinuedPacket:(bool)value;
/// <summary>
/// Sets whether this page is the last page of the bitstream.
/// </summary>
- (void) setEndOfStream:(bool)value;
/// <summary>
/// Sets the data payload.
/// </summary>
- (void) setPayload:(NSMutableData*)value;
/// <summary>
/// Sets the page sequence number.
/// </summary>
- (void) setSequenceNumber:(int)value;
/// <summary>
/// Sets the stream serial number.
/// </summary>
- (void) setStreamSerialNumber:(int)value;
/// <summary>
/// Gets the stream serial number.
/// </summary>
- (int) streamSerialNumber;

@end



/// <summary>
/// Header type flags for an <see cref="FMIceLinkWebRTCOggPage" />. Can be set in the 5th byte of each page.
/// </summary>
#pragma clang diagnostic ignored "-Wshorten-64-to-32"
#pragma clang diagnostic ignored "-Wint-to-pointer-cast"

@interface FMIceLinkWebRTCOggPageHeaderType : NSObject 

/// <summary>
/// Gets a value indicating that all values are set.
/// </summary>
+ (uint8_t) all;
/// <summary>
/// Gets a value indicating whether or not this is the first page in the bitstream.
/// </summary>
+ (uint8_t) firstPage;
- (id) init;
/// <summary>
/// Gets a value indicating whether or not the page is a continuation of a previous page.
/// </summary>
+ (uint8_t) isContinued;
/// <summary>
/// Gets a value indicating whether or not this is the last page in the bitstream.
/// </summary>
+ (uint8_t) lastPage;
/// <summary>
/// Gets a value indicating an empty value.
/// </summary>
+ (uint8_t) none;
+ (FMIceLinkWebRTCOggPageHeaderType*) oggPageHeaderType;

@end


@class FMIceLinkUnhandledExceptionArgs;
@class FMIceLinkWebRTCReliableDataReceiveArgs;
@class NSStringFMExtensions;
@class FMCallback;
@class NSMutableArrayFMExtensions;
@class FMIceLinkLink;
@class NSMutableDataFMExtensions;

/// <summary>
/// A reliable (SCTP-based) WebRTC data channel description.
/// </summary>
#pragma clang diagnostic ignored "-Wshorten-64-to-32"
#pragma clang diagnostic ignored "-Wint-to-pointer-cast"

@interface FMIceLinkWebRTCReliableDataChannel : NSObject 

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
/// Deserializes an array of instances from JSON.
/// </summary>
/// <param name="channelsJson">The JSON to deserialize.</param>
/// <returns>The deserialized data channel descriptions.</returns>
+ (NSMutableArray*) fromJsonMultipleWithChannelsJson:(NSString*)channelsJson;
/// <summary>
/// Deserializes an instance from JSON.
/// </summary>
/// <param name="channelJson">The JSON to deserialize.</param>
/// <returns>The deserialized data channel description.</returns>
+ (FMIceLinkWebRTCReliableDataChannel*) fromJsonWithChannelJson:(NSString*)channelJson;
- (NSString*) identifier;
/// <summary>
/// Initializes a new instance of the <see cref="FMIceLinkWebRTCReliableDataChannel" /> class.
/// </summary>
/// <param name="label">The channel label.</param>
- (id) initWithLabel:(NSString*)label;
/// <summary>
/// Initializes a new instance of the <see cref="FMIceLinkWebRTCReliableDataChannel" /> class.
/// </summary>
/// <param name="unordered">Whether to allow messages to be delivered out-of-order.</param>
/// <param name="label">The channel label.</param>
- (id) initWithUnordered:(bool)unordered label:(NSString*)label;
/// <summary>
/// Initializes a new instance of the <see cref="FMIceLinkWebRTCReliableDataChannel" /> class.
/// </summary>
/// <param name="unordered">Whether to allow messages to be delivered out-of-order.</param>
/// <param name="label">The channel label.</param>
/// <param name="subprotocol">The channel sub-protocol.</param>
- (id) initWithUnordered:(bool)unordered label:(NSString*)label subprotocol:(NSString*)subprotocol;
/// <summary>
/// Gets the channel label.
/// </summary>
- (NSString*) label;
/// <summary>
/// Gets the callback to invoke when data is received on the channel.
/// </summary>
- (FMCallback*) onReceive;
- (void) raiseOnReceiveBytesWithLink:(FMIceLinkLink*)link dataBytes:(NSMutableData*)dataBytes;
- (void) raiseOnReceiveStringWithLink:(FMIceLinkLink*)link dataString:(NSString*)dataString;
/// <summary>
/// Initializes a new instance of the <see cref="FMIceLinkWebRTCReliableDataChannel" /> class.
/// </summary>
/// <param name="label">The channel label.</param>
+ (FMIceLinkWebRTCReliableDataChannel*) reliableDataChannelWithLabel:(NSString*)label;
/// <summary>
/// Initializes a new instance of the <see cref="FMIceLinkWebRTCReliableDataChannel" /> class.
/// </summary>
/// <param name="unordered">Whether to allow messages to be delivered out-of-order.</param>
/// <param name="label">The channel label.</param>
+ (FMIceLinkWebRTCReliableDataChannel*) reliableDataChannelWithUnordered:(bool)unordered label:(NSString*)label;
/// <summary>
/// Initializes a new instance of the <see cref="FMIceLinkWebRTCReliableDataChannel" /> class.
/// </summary>
/// <param name="unordered">Whether to allow messages to be delivered out-of-order.</param>
/// <param name="label">The channel label.</param>
/// <param name="subprotocol">The channel sub-protocol.</param>
+ (FMIceLinkWebRTCReliableDataChannel*) reliableDataChannelWithUnordered:(bool)unordered label:(NSString*)label subprotocol:(NSString*)subprotocol;
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
- (void) setIdentifier:(NSString*)value;
/// <summary>
/// Sets the channel label.
/// </summary>
- (void) setLabel:(NSString*)value;
/// <summary>
/// Sets the callback to invoke when data is received on the channel.
/// </summary>
- (void) setOnReceive:(FMCallback*)value;
/// <summary>
/// Sets the callback to invoke when data is received on the channel.
/// </summary>
- (void) setOnReceiveBlock:(void (^) (FMIceLinkWebRTCReliableDataReceiveArgs*))valueBlock;
/// <summary>
/// Sets the channel sub-protocol.
/// </summary>
- (void) setSubprotocol:(NSString*)value;
/// <summary>
/// Sets a value indicating whether to allow messages to be delivered out-of-order.
/// </summary>
- (void) setUnordered:(bool)value;
/// <summary>
/// Gets the channel sub-protocol.
/// </summary>
- (NSString*) subprotocol;
/// <summary>
/// Serializes this instance to JSON.
/// </summary>
/// <returns></returns>
- (NSString*) toJson;
/// <summary>
/// Serializes an array of instances to JSON.
/// </summary>
/// <param name="channels">The data channel descriptions to serialize.</param>
/// <returns>The serialized JSON.</returns>
+ (NSString*) toJsonMultipleWithChannels:(NSMutableArray*)channels;
/// <summary>
/// Serializes an instance to JSON.
/// </summary>
/// <param name="channel">The data channel description to serialize.</param>
/// <returns>The serialized JSON.</returns>
+ (NSString*) toJsonWithChannel:(FMIceLinkWebRTCReliableDataChannel*)channel;
/// <summary>
/// Gets a value indicating whether to allow messages to be delivered out-of-order.
/// </summary>
- (bool) unordered;

@end


@class NSMutableDictionaryFMExtensions;
@class FMIceLinkLink;
@class FMIceLinkStream;
@class NSMutableArrayFMExtensions;
@class FMIceLinkWebRTCInternalReliableDataChannel;
@class FMIceLinkWebRTCWebRTCDCEPDataChannelAck;
@class FMIceLinkLinkReceiveSCTPArgs;
@class FMIceLinkWebRTCWebRTCDCEPDataChannelOpen;
@class FMIceLinkWebRTCReliableDataChannel;
@class NSMutableDataFMExtensions;

#pragma clang diagnostic ignored "-Wshorten-64-to-32"
#pragma clang diagnostic ignored "-Wint-to-pointer-cast"

@interface FMIceLinkWebRTCReliableDataManager : NSObject 

- (id) initWithIsDTLSServer:(bool)isDTLSServer stream:(FMIceLinkStream*)stream streamIndex:(int)streamIndex link:(FMIceLinkLink*)link channelInfos:(NSMutableArray*)channelInfos;
- (void) openChannelWithChannel:(FMIceLinkWebRTCInternalReliableDataChannel*)channel;
- (void) openChannel:(FMIceLinkWebRTCInternalReliableDataChannel*)channel;
- (void) processChannelOpenAckWithAck:(FMIceLinkWebRTCWebRTCDCEPDataChannelAck*)ack incomingChannelID:(int)incomingChannelID;
- (void) processChannelOpenAck:(FMIceLinkWebRTCWebRTCDCEPDataChannelAck*)ack incomingChannelID:(int)incomingChannelID;
- (void) receiveMessageWithArgs:(FMIceLinkLinkReceiveSCTPArgs*)args;
+ (FMIceLinkWebRTCReliableDataManager*) reliableDataManagerWithIsDTLSServer:(bool)isDTLSServer stream:(FMIceLinkStream*)stream streamIndex:(int)streamIndex link:(FMIceLinkLink*)link channelInfos:(NSMutableArray*)channelInfos;
- (void) respondToOpenChannelRequestWithChannelOpenRequest:(FMIceLinkWebRTCWebRTCDCEPDataChannelOpen*)channelOpenRequest incomingChannelID:(int)incomingChannelID;
- (void) sendDataWithChannel:(FMIceLinkWebRTCReliableDataChannel*)channel payload:(NSMutableData*)payload ppi:(long long)ppi;
- (void) sendSCTPWithPayload:(NSMutableData*)payload channelID:(int)channelID unordered:(bool)unordered ppi:(long long)ppi;
- (void) start;
- (void) stop;

@end


@class NSMutableDataFMExtensions;

#pragma clang diagnostic ignored "-Wshorten-64-to-32"
#pragma clang diagnostic ignored "-Wint-to-pointer-cast"

@interface FMIceLinkWebRTCReliableMessage : NSObject 

- (id) initWithPpi:(long long)ppi payload:(NSMutableData*)payload;
- (NSMutableData*) payload;
- (long long) ppi;
+ (FMIceLinkWebRTCReliableMessage*) reliableMessageWithPpi:(long long)ppi payload:(NSMutableData*)payload;
- (void) setPayload:(NSMutableData*)value;
- (void) setPPI:(long long)value;

@end


@class FMIceLinkWebRTCReliableDataChannel;
@class NSMutableArrayFMExtensions;

#pragma clang diagnostic ignored "-Wshorten-64-to-32"
#pragma clang diagnostic ignored "-Wint-to-pointer-cast"

@interface FMIceLinkWebRTCInternalReliableDataChannel : NSObject 

- (FMIceLinkWebRTCReliableDataChannel*) channelInfo;
- (id) initWithSctpChannelIndex:(int)sctpChannelIndex state:(FMIceLinkWebRTCReliableChannelState)state channel:(FMIceLinkWebRTCReliableDataChannel*)channel;
+ (FMIceLinkWebRTCInternalReliableDataChannel*) internalReliableDataChannelWithSctpChannelIndex:(int)sctpChannelIndex state:(FMIceLinkWebRTCReliableChannelState)state channel:(FMIceLinkWebRTCReliableDataChannel*)channel;
- (NSMutableArray*) outgoingBuffer;
- (int) sctpChannelIndex;
- (void) setChannelInfo:(FMIceLinkWebRTCReliableDataChannel*)value;
- (void) setOutgoingBuffer:(NSMutableArray*)value;
- (void) setSCTPChannelIndex:(int)value;
- (void) setState:(FMIceLinkWebRTCReliableChannelState)value;
- (FMIceLinkWebRTCReliableChannelState) state;

@end



#pragma clang diagnostic ignored "-Wshorten-64-to-32"
#pragma clang diagnostic ignored "-Wint-to-pointer-cast"

@interface FMIceLinkWebRTCReliableDataChannelOwnershipConventions : NSObject 

- (id) init;
+ (FMIceLinkWebRTCReliableDataChannelOwnershipConventions*) reliableDataChannelOwnershipConventions;

@end


@class NSMutableArrayFMExtensions;

/// <summary>
/// Base class for WebRTC streams.
/// </summary>
#pragma clang diagnostic ignored "-Wshorten-64-to-32"
#pragma clang diagnostic ignored "-Wint-to-pointer-cast"

@interface FMIceLinkWebRTCBaseWebRTCStream : FMIceLinkStream 

/// <summary>
/// Initializes a new instance of the <see cref="FMIceLinkWebRTCBaseWebRTCStream" /> class.
/// </summary>
/// <param name="type">The stream type.</param>
/// <param name="protocol">The stream protocol.</param>
/// <param name="formats">The stream formats.</param>
/// <param name="offerDtls">Whether to offer to exchange SRTP keys using DTLS.</param>
+ (FMIceLinkWebRTCBaseWebRTCStream*) baseWebRTCStreamWithType:(FMIceLinkStreamType)type protocol:(FMIceLinkStreamProtocol)protocol formats:(NSMutableArray*)formats offerDtls:(bool)offerDtls;
/// <summary>
/// Initializes a new instance of the <see cref="FMIceLinkWebRTCBaseWebRTCStream" /> class.
/// </summary>
/// <param name="type">The stream type.</param>
/// <param name="protocol">The stream protocol.</param>
/// <param name="formats">The stream formats.</param>
/// <param name="offerDtls">Whether to offer to exchange SRTP keys using DTLS.</param>
- (id) initWithType:(FMIceLinkStreamType)type protocol:(FMIceLinkStreamProtocol)protocol formats:(NSMutableArray*)formats offerDtls:(bool)offerDtls;

@end


@class NSMutableArrayFMExtensions;
@class FMIceLinkWebRTCReliableDataChannel;

/// <summary>
/// A reliable (SCTP-based) WebRTC data stream.
/// </summary>
#pragma clang diagnostic ignored "-Wshorten-64-to-32"
#pragma clang diagnostic ignored "-Wint-to-pointer-cast"

@interface FMIceLinkWebRTCReliableDataStream : FMIceLinkWebRTCBaseWebRTCStream 

/// <summary>
/// Gets the channel descriptions.
/// </summary>
- (NSMutableArray*) channels;
/// <summary>
/// Initializes a new instance of the <see cref="FMIceLinkWebRTCReliableDataStream" /> class.
/// </summary>
/// <param name="channel">The channel description.</param>
- (id) initWithChannel:(FMIceLinkWebRTCReliableDataChannel*)channel;
/// <summary>
/// Initializes a new instance of the <see cref="FMIceLinkWebRTCReliableDataStream" /> class.
/// </summary>
/// <param name="channels">The channels.</param>
- (id) initWithChannels:(NSMutableArray*)channels;
/// <summary>
/// Initializes a new instance of the <see cref="FMIceLinkWebRTCReliableDataStream" /> class.
/// </summary>
/// <param name="channel">The channel description.</param>
+ (FMIceLinkWebRTCReliableDataStream*) reliableDataStreamWithChannel:(FMIceLinkWebRTCReliableDataChannel*)channel;
/// <summary>
/// Initializes a new instance of the <see cref="FMIceLinkWebRTCReliableDataStream" /> class.
/// </summary>
/// <param name="channels">The channels.</param>
+ (FMIceLinkWebRTCReliableDataStream*) reliableDataStreamWithChannels:(NSMutableArray*)channels;

@end


@class NSMutableDataFMExtensions;

#pragma clang diagnostic ignored "-Wshorten-64-to-32"
#pragma clang diagnostic ignored "-Wint-to-pointer-cast"

@interface FMIceLinkWebRTCWebRTCDCEPMessage : NSObject 

- (NSMutableData*) getBytes;
- (id) init;
- (uint8_t) messageType;
+ (FMIceLinkWebRTCWebRTCDCEPMessage*) parseBytesWithValue:(NSMutableData*)value startIndex:(int)startIndex;
+ (FMIceLinkWebRTCWebRTCDCEPMessage*) webRTCDCEPMessage;

@end


@class NSStringFMExtensions;
@class NSMutableDataFMExtensions;

#pragma clang diagnostic ignored "-Wshorten-64-to-32"
#pragma clang diagnostic ignored "-Wint-to-pointer-cast"

@interface FMIceLinkWebRTCWebRTCDCEPDataChannelOpen : FMIceLinkWebRTCWebRTCDCEPMessage 

- (int) channelPriority;
- (uint8_t) channelType;
- (NSMutableData*) getBytes;
+ (NSMutableData*) getBytesWithMessage:(FMIceLinkWebRTCWebRTCDCEPDataChannelOpen*)message;
- (id) initWithRequestedChannelType:(uint8_t)requestedChannelType;
- (id) initWithRequestedChannelType:(uint8_t)requestedChannelType channelLabel:(NSString*)channelLabel subprotocol:(NSString*)subprotocol;
- (NSString*) label;
+ (FMIceLinkWebRTCWebRTCDCEPDataChannelOpen*) parseBytesWithBytes:(NSMutableData*)bytes;
+ (FMIceLinkWebRTCWebRTCDCEPDataChannelOpen*) parseBytes:(NSMutableData*)bytes;
- (long long) reliabilityParameter;
- (void) setChannelType:(uint8_t)value;
- (void) setLabel:(NSString*)value;
- (NSString*) subProtocol;
+ (FMIceLinkWebRTCWebRTCDCEPDataChannelOpen*) webRTCDCEPDataChannelOpenWithRequestedChannelType:(uint8_t)requestedChannelType;
+ (FMIceLinkWebRTCWebRTCDCEPDataChannelOpen*) webRTCDCEPDataChannelOpenWithRequestedChannelType:(uint8_t)requestedChannelType channelLabel:(NSString*)channelLabel subprotocol:(NSString*)subprotocol;

@end


@class NSMutableDataFMExtensions;

#pragma clang diagnostic ignored "-Wshorten-64-to-32"
#pragma clang diagnostic ignored "-Wint-to-pointer-cast"

@interface FMIceLinkWebRTCWebRTCDCEPDataChannelAck : FMIceLinkWebRTCWebRTCDCEPMessage 

- (NSMutableData*) getBytes;
+ (NSMutableData*) getBytesWithMessage:(FMIceLinkWebRTCWebRTCDCEPDataChannelAck*)message;
- (id) init;
+ (FMIceLinkWebRTCWebRTCDCEPDataChannelAck*) parseBytesWithBytes:(NSMutableData*)bytes;
+ (FMIceLinkWebRTCWebRTCDCEPDataChannelAck*) parseBytes:(NSMutableData*)bytes;
+ (FMIceLinkWebRTCWebRTCDCEPDataChannelAck*) webRTCDCEPDataChannelAck;

@end



#pragma clang diagnostic ignored "-Wshorten-64-to-32"
#pragma clang diagnostic ignored "-Wint-to-pointer-cast"

@interface FMIceLinkWebRTCWebRTCDCEPMessageType : NSObject 

- (id) init;
+ (FMIceLinkWebRTCWebRTCDCEPMessageType*) webRTCDCEPMessageType;

@end



#pragma clang diagnostic ignored "-Wshorten-64-to-32"
#pragma clang diagnostic ignored "-Wint-to-pointer-cast"

@interface FMIceLinkWebRTCSCTPWebRTCPayloadProtocolIdentifier : NSObject 

- (id) init;
+ (FMIceLinkWebRTCSCTPWebRTCPayloadProtocolIdentifier*) sctpWebRTCPayloadProtocolIdentifier;

@end



#pragma clang diagnostic ignored "-Wshorten-64-to-32"
#pragma clang diagnostic ignored "-Wint-to-pointer-cast"

@interface FMIceLinkWebRTCReliableChannelPriority : NSObject 

- (id) init;
+ (FMIceLinkWebRTCReliableChannelPriority*) reliableChannelPriority;

@end



#pragma clang diagnostic ignored "-Wshorten-64-to-32"
#pragma clang diagnostic ignored "-Wint-to-pointer-cast"

@interface FMIceLinkWebRTCReliableChannelType : NSObject 

+ (uint8_t) dataChannelPartialReliableREXMIT;
+ (uint8_t) dataChannelPartialReliableREXMITUnordered;
+ (uint8_t) dataChannelPartialReliableTimed;
+ (uint8_t) dataChannelPartialReliableTimedUnordered;
+ (uint8_t) dataChannelReliable;
+ (uint8_t) dataChannelReliableUnordered;
- (id) init;
+ (FMIceLinkWebRTCReliableChannelType*) reliableChannelType;

@end


@class FMNullableInt;

/// <summary>
/// Base media arguments for media stream initialization.
/// </summary>
#pragma clang diagnostic ignored "-Wshorten-64-to-32"
#pragma clang diagnostic ignored "-Wint-to-pointer-cast"

@interface FMIceLinkWebRTCBaseMediaArgs : FMDynamic 

/// <summary>
/// Gets whether to initialize the
/// audio capture provider.
/// </summary>
- (bool) audio;
/// <summary>
/// Gets the desired audio device number.
/// Defaults to null (no preference).
/// </summary>
- (FMNullableInt*) audioDeviceNumber;
/// <summary>
/// Initializes a new instance of the <see cref="FMIceLinkWebRTCBaseMediaArgs" /> class.
/// </summary>
+ (FMIceLinkWebRTCBaseMediaArgs*) baseMediaArgs;
/// <summary>
/// Gets the scaling to apply to the local video control created
/// by the default video capture provider (if one exists on this platform).
/// </summary>
- (FMIceLinkWebRTCLayoutScale) defaultVideoPreviewScale;
/// <summary>
/// Gets the scaling to apply to the remote video controls created
/// by the default video render providers (if one exists on this platform).
/// </summary>
- (FMIceLinkWebRTCLayoutScale) defaultVideoScale;
/// <summary>
/// Gets the default video source to use when initializing the
/// default video capture provider (if one exists on this platform).
/// </summary>
- (FMIceLinkWebRTCVideoSource) defaultVideoSource;
/// <summary>
/// Initializes a new instance of the <see cref="FMIceLinkWebRTCBaseMediaArgs" /> class.
/// </summary>
- (id) init;
/// <summary>
/// Sets whether to initialize the
/// audio capture provider.
/// </summary>
- (void) setAudio:(bool)value;
/// <summary>
/// Sets the desired audio device number.
/// Defaults to null (no preference).
/// </summary>
- (void) setAudioDeviceNumber:(FMNullableInt*)value;
/// <summary>
/// Sets the scaling to apply to the local video control created
/// by the default video capture provider (if one exists on this platform).
/// </summary>
- (void) setDefaultVideoPreviewScale:(FMIceLinkWebRTCLayoutScale)value;
/// <summary>
/// Sets the scaling to apply to the remote video controls created
/// by the default video render providers (if one exists on this platform).
/// </summary>
- (void) setDefaultVideoScale:(FMIceLinkWebRTCLayoutScale)value;
/// <summary>
/// Sets the default video source to use when initializing the
/// default video capture provider (if one exists on this platform).
/// </summary>
- (void) setDefaultVideoSource:(FMIceLinkWebRTCVideoSource)value;
/// <summary>
/// Sets whether to initialize the
/// video capture provider.
/// </summary>
- (void) setVideo:(bool)value;
/// <summary>
/// Sets the desired video device number.
/// Defaults to null (no preference).
/// </summary>
- (void) setVideoDeviceNumber:(FMNullableInt*)value;
/// <summary>
/// Sets the desired video frame rate (defaults to 15).
/// </summary>
- (void) setVideoFrameRate:(int)value;
/// <summary>
/// Sets the desired video frame height (defaults to 240).
/// </summary>
- (void) setVideoHeight:(int)value;
/// <summary>
/// Sets the desired video frame width (defaults to 320).
/// </summary>
- (void) setVideoWidth:(int)value;
/// <summary>
/// Gets whether to initialize the
/// video capture provider.
/// </summary>
- (bool) video;
/// <summary>
/// Gets the desired video device number.
/// Defaults to null (no preference).
/// </summary>
- (FMNullableInt*) videoDeviceNumber;
/// <summary>
/// Gets the desired video frame rate (defaults to 15).
/// </summary>
- (int) videoFrameRate;
/// <summary>
/// Gets the desired video frame height (defaults to 240).
/// </summary>
- (int) videoHeight;
/// <summary>
/// Gets the desired video frame width (defaults to 320).
/// </summary>
- (int) videoWidth;

@end


@class FMIceLinkWebRTCDataChannelInfo;
@class NSStringFMExtensions;

/// <summary>
/// Arguments for the data channel receive event.
/// </summary>
#pragma clang diagnostic ignored "-Wshorten-64-to-32"
#pragma clang diagnostic ignored "-Wint-to-pointer-cast"

@interface FMIceLinkWebRTCDataChannelReceiveArgs : FMIceLinkBaseLinkArgs 

/// <summary>
/// Gets the data channel description.
/// </summary>
- (FMIceLinkWebRTCDataChannelInfo*) channelInfo;
/// <summary>
/// Gets the received data.
/// </summary>
- (NSString*) data;
+ (FMIceLinkWebRTCDataChannelReceiveArgs*) dataChannelReceiveArgs;
/// <summary>
/// Deserializes an instance from JSON.
/// </summary>
/// <param name="dataChannelReceiveArgsJson">The JSON to deserialize.</param>
/// <returns>The deserialized data channel receive args.</returns>
+ (FMIceLinkWebRTCDataChannelReceiveArgs*) fromJsonWithDataChannelReceiveArgsJson:(NSString*)dataChannelReceiveArgsJson;
- (id) init;
- (void) setChannelInfo:(FMIceLinkWebRTCDataChannelInfo*)value;
- (void) setData:(NSString*)value;
/// <summary>
/// Serializes this instance to JSON.
/// </summary>
/// <returns></returns>
- (NSString*) toJson;
/// <summary>
/// Serializes an instance to JSON.
/// </summary>
/// <param name="dataChannelReceiveArgs">The data channel receive args to serialize.</param>
/// <returns>The serialized JSON.</returns>
+ (NSString*) toJsonWithDataChannelReceiveArgs:(FMIceLinkWebRTCDataChannelReceiveArgs*)dataChannelReceiveArgs;

@end



/// <summary>
/// The base class from which context menu implementations inherit.
/// </summary>
#pragma clang diagnostic ignored "-Wshorten-64-to-32"
#pragma clang diagnostic ignored "-Wint-to-pointer-cast"

@interface FMIceLinkWebRTCBaseContextMenu : FMDynamic 

+ (FMIceLinkWebRTCBaseContextMenu*) baseContextMenu;
- (id) init;

@end


@class FMIceLinkWebRTCLayoutFrame;
@class NSMutableArrayFMExtensions;

/// <summary>
/// A layout definition, including local
/// and remote frame definitions.
/// </summary>
#pragma clang diagnostic ignored "-Wshorten-64-to-32"
#pragma clang diagnostic ignored "-Wint-to-pointer-cast"

@interface FMIceLinkWebRTCLayout : NSObject 

/// <summary>
/// Gets all frames (local and remote).
/// </summary>
- (NSMutableArray*) allFrames;
- (id) init;
+ (FMIceLinkWebRTCLayout*) layout;
/// <summary>
/// Gets the local frame.
/// </summary>
- (FMIceLinkWebRTCLayoutFrame*) localFrame;
/// <summary>
/// Gets the remote frames.
/// </summary>
- (NSMutableArray*) remoteFrames;
/// <summary>
/// Sets the local frame.
/// </summary>
- (void) setLocalFrame:(FMIceLinkWebRTCLayoutFrame*)value;
/// <summary>
/// Sets the remote frames.
/// </summary>
- (void) setRemoteFrames:(NSMutableArray*)value;
/// <summary>
/// Swaps the properties of two frames.
/// </summary>
/// <param name="frame1">The first frame.</param>
/// <param name="frame2">The second frame.</param>
- (void) swapFramesWithFrame1:(FMIceLinkWebRTCLayoutFrame*)frame1 frame2:(FMIceLinkWebRTCLayoutFrame*)frame2;
/// <summary>
/// Swaps the local frame with a remote frame.
/// </summary>
/// <param name="remoteFrameIndex">The index of the remote frame.</param>
- (void) swapLocalFrameWithRemoteFrameIndex:(int)remoteFrameIndex;
/// <summary>
/// Swaps two remote frames.
/// </summary>
/// <param name="remoteFrameIndex1">The index of the first remote frame.</param>
/// <param name="remoteFrameIndex2">The index of the second remote frame.</param>
- (void) swapRemoteFramesWithRemoteFrameIndex1:(int)remoteFrameIndex1 remoteFrameIndex2:(int)remoteFrameIndex2;

@end



/// <summary>
/// A layout frame definition, including X/Y coordinates and width/height values.
/// </summary>
#pragma clang diagnostic ignored "-Wshorten-64-to-32"
#pragma clang diagnostic ignored "-Wint-to-pointer-cast"

@interface FMIceLinkWebRTCLayoutFrame : NSObject 

/// <summary>
/// Gets a scaled frame.
/// </summary>
/// <param name="scale">The scaling algorithm to use.</param>
/// <param name="outerWidth">The width of the outer container.</param>
/// <param name="outerHeight">The height of the outer container.</param>
/// <param name="innerWidth">The width of the inner element.</param>
/// <param name="innerHeight">The height of the inner element.</param>
/// <returns></returns>
+ (FMIceLinkWebRTCLayoutFrame*) getScaledFrameWithScale:(FMIceLinkWebRTCLayoutScale)scale outerWidth:(int)outerWidth outerHeight:(int)outerHeight innerWidth:(int)innerWidth innerHeight:(int)innerHeight;
/// <summary>
/// Gets the height value.
/// </summary>
- (int) height;
/// <summary>
/// Initializes a new instance of the <see cref="FMIceLinkWebRTCLayoutFrame" /> class.
/// </summary>
/// <param name="x">The X coordinate.</param>
/// <param name="y">The Y coordinate.</param>
/// <param name="width">The width value.</param>
/// <param name="height">The height value.</param>
- (id) initWithX:(int)x y:(int)y width:(int)width height:(int)height;
/// <summary>
/// Initializes a new instance of the <see cref="FMIceLinkWebRTCLayoutFrame" /> class.
/// </summary>
/// <param name="x">The X coordinate.</param>
/// <param name="y">The Y coordinate.</param>
/// <param name="width">The width value.</param>
/// <param name="height">The height value.</param>
+ (FMIceLinkWebRTCLayoutFrame*) layoutFrameWithX:(int)x y:(int)y width:(int)width height:(int)height;
/// <summary>
/// Sets the height value.
/// </summary>
- (void) setHeight:(int)value;
/// <summary>
/// Sets the width value.
/// </summary>
- (void) setWidth:(int)value;
/// <summary>
/// Sets the X coordinate.
/// </summary>
- (void) setX:(int)value;
/// <summary>
/// Sets the Y coordinate.
/// </summary>
- (void) setY:(int)value;
/// <summary>
/// Gets the width value.
/// </summary>
- (int) width;
/// <summary>
/// Gets the X coordinate.
/// </summary>
- (int) x;
/// <summary>
/// Gets the Y coordinate.
/// </summary>
- (int) y;

@end


@class NSMutableArrayFMExtensions;
@class NSStringFMExtensions;
@class FMIceLinkWebRTCVideoCaptureInitializeArgs;

/// <summary>
/// A null video capture provider.
/// </summary>
#pragma clang diagnostic ignored "-Wshorten-64-to-32"
#pragma clang diagnostic ignored "-Wint-to-pointer-cast"

@interface FMIceLinkWebRTCNullVideoCaptureProvider : FMIceLinkWebRTCVideoCaptureProvider 

/// <summary>
/// Destroys the video capture provider.
/// </summary>
- (void) destroy;
/// <summary>
/// Gets the connected device names.
/// </summary>
/// <returns></returns>
- (NSMutableArray*) getDeviceNames;
/// <summary>
/// Gets the front device number.
/// </summary>
/// <returns></returns>
- (int) getFrontDeviceNumber;
/// <summary>
/// Gets the label of the video device.
/// </summary>
/// <returns></returns>
- (NSString*) getLabel;
/// <summary>
/// Gets the video capture preview control.
/// </summary>
/// <returns></returns>
- (NSObject*) getPreviewControl;
/// <summary>
/// Gets the rear device number.
/// </summary>
/// <returns></returns>
- (int) getRearDeviceNumber;
- (id) init;
/// <summary>
/// Initializes the video capture provider.
/// </summary>
/// <param name="captureArgs">The arguments.</param>
- (void) initializeWithCaptureArgs:(FMIceLinkWebRTCVideoCaptureInitializeArgs*)captureArgs;
+ (FMIceLinkWebRTCNullVideoCaptureProvider*) nullVideoCaptureProvider;
/// <summary>
/// Starts the video capture provider.
/// </summary>
/// <returns>
/// <c>true</c> if the capture was started successfully; otherwise, <c>false</c>.
/// </returns>
- (bool) start;
/// <summary>
/// Stops the video capture provider.
/// </summary>
- (void) stop;

@end


@class NSMutableArrayFMExtensions;
@class NSStringFMExtensions;
@class FMIceLinkWebRTCAudioCaptureInitializeArgs;

/// <summary>
/// A null audio capture provider.
/// </summary>
#pragma clang diagnostic ignored "-Wshorten-64-to-32"
#pragma clang diagnostic ignored "-Wint-to-pointer-cast"

@interface FMIceLinkWebRTCNullAudioCaptureProvider : FMIceLinkWebRTCAudioCaptureProvider 

/// <summary>
/// Destroys the audio capture provider.
/// </summary>
- (void) destroy;
/// <summary>
/// Gets the connected device names.
/// </summary>
/// <returns></returns>
- (NSMutableArray*) getDeviceNames;
/// <summary>
/// Gets the label of the audio device.
/// </summary>
/// <returns></returns>
- (NSString*) getLabel;
- (id) init;
/// <summary>
/// Initializes the audio capture provider.
/// </summary>
/// <param name="captureArgs">The arguments.</param>
- (void) initializeWithCaptureArgs:(FMIceLinkWebRTCAudioCaptureInitializeArgs*)captureArgs;
+ (FMIceLinkWebRTCNullAudioCaptureProvider*) nullAudioCaptureProvider;
/// <summary>
/// Starts the audio capture provider.
/// </summary>
/// <returns>
/// <c>true</c> if the capture was started successfully; otherwise, <c>false</c>.
/// </returns>
- (bool) start;
/// <summary>
/// Stops the audio capture provider.
/// </summary>
- (void) stop;

@end


@class FMIceLinkWebRTCVideoBuffer;
@class NSMutableArrayFMExtensions;
@class NSStringFMExtensions;
@class FMIceLinkWebRTCVideoCaptureInitializeArgs;

/// <summary>
/// A video capture provider that accepts frames from an
/// incoming video render provider.
/// </summary>
#pragma clang diagnostic ignored "-Wshorten-64-to-32"
#pragma clang diagnostic ignored "-Wint-to-pointer-cast"

@interface FMIceLinkWebRTCOutgoingVideoCaptureProvider : FMIceLinkWebRTCVideoCaptureProvider 

/// <summary>
/// Adds a frame for processing.
/// </summary>
/// <param name="buffer">The buffer.</param>
- (void) addFrameWithBuffer:(FMIceLinkWebRTCVideoBuffer*)buffer;
/// <summary>
/// Adds a frame for processing to specific peers.
/// </summary>
/// <param name="buffer">The buffer.</param>
/// <param name="peerIds">The peer IDs to target (or <c>null</c> to target all).</param>
- (void) addFrameWithBuffer:(FMIceLinkWebRTCVideoBuffer*)buffer peerIds:(NSMutableArray*)peerIds;
/// <summary>
/// Destroys the video capture provider.
/// </summary>
- (void) destroy;
/// <summary>
/// Gets the connected device names.
/// </summary>
/// <returns></returns>
- (NSMutableArray*) getDeviceNames;
/// <summary>
/// Gets the front device number.
/// </summary>
/// <returns></returns>
- (int) getFrontDeviceNumber;
/// <summary>
/// Gets the label of the video device.
/// </summary>
/// <returns></returns>
- (NSString*) getLabel;
/// <summary>
/// Gets the video capture preview control.
/// </summary>
/// <returns></returns>
- (NSObject*) getPreviewControl;
/// <summary>
/// Gets the rear device number.
/// </summary>
/// <returns></returns>
- (int) getRearDeviceNumber;
- (id) init;
/// <summary>
/// Initializes the video capture provider.
/// </summary>
/// <param name="captureArgs">The arguments.</param>
- (void) initializeWithCaptureArgs:(FMIceLinkWebRTCVideoCaptureInitializeArgs*)captureArgs;
+ (FMIceLinkWebRTCOutgoingVideoCaptureProvider*) outgoingVideoCaptureProvider;
/// <summary>
/// Starts the video capture provider.
/// </summary>
/// <returns>
/// <c>true</c> if the capture was started successfully; otherwise, <c>false</c>.
/// </returns>
- (bool) start;
/// <summary>
/// Stops the video capture provider.
/// </summary>
- (void) stop;

@end


@class FMIceLinkWebRTCAudioBuffer;
@class NSMutableArrayFMExtensions;
@class NSStringFMExtensions;
@class FMIceLinkWebRTCAudioCaptureInitializeArgs;

/// <summary>
/// An audio capture provider that accepts frames from an
/// incoming audio render provider.
/// </summary>
#pragma clang diagnostic ignored "-Wshorten-64-to-32"
#pragma clang diagnostic ignored "-Wint-to-pointer-cast"

@interface FMIceLinkWebRTCOutgoingAudioCaptureProvider : FMIceLinkWebRTCAudioCaptureProvider 

/// <summary>
/// Adds a frame for processing.
/// </summary>
/// <param name="buffer">The buffer.</param>
- (void) addFrameWithBuffer:(FMIceLinkWebRTCAudioBuffer*)buffer;
/// <summary>
/// Adds a frame for processing to specific peers.
/// </summary>
/// <param name="buffer">The buffer.</param>
/// <param name="peerIds">The peer IDs to target (or <c>null</c> to target all).</param>
- (void) addFrameWithBuffer:(FMIceLinkWebRTCAudioBuffer*)buffer peerIds:(NSMutableArray*)peerIds;
/// <summary>
/// Destroys the audio capture provider.
/// </summary>
- (void) destroy;
/// <summary>
/// Gets the connected device names.
/// </summary>
/// <returns></returns>
- (NSMutableArray*) getDeviceNames;
/// <summary>
/// Gets the label of the audio device.
/// </summary>
/// <returns></returns>
- (NSString*) getLabel;
- (id) init;
/// <summary>
/// Initializes the audio capture provider.
/// </summary>
/// <param name="captureArgs">The arguments.</param>
- (void) initializeWithCaptureArgs:(FMIceLinkWebRTCAudioCaptureInitializeArgs*)captureArgs;
+ (FMIceLinkWebRTCOutgoingAudioCaptureProvider*) outgoingAudioCaptureProvider;
/// <summary>
/// Starts the audio capture provider.
/// </summary>
/// <returns>
/// <c>true</c> if the capture was started successfully; otherwise, <c>false</c>.
/// </returns>
- (bool) start;
/// <summary>
/// Stops the audio capture provider.
/// </summary>
- (void) stop;

@end


@class FMIceLinkWebRTCLocalMediaStream;
@class FMIceLinkWebRTCGetMediaArgs;

#pragma clang diagnostic ignored "-Wshorten-64-to-32"
#pragma clang diagnostic ignored "-Wint-to-pointer-cast"

@interface FMIceLinkWebRTCDistributorMedia : NSObject 

+ (FMIceLinkWebRTCDistributorMedia*) distributorMedia;
- (FMIceLinkWebRTCLocalMediaStream*) getMediaWithGetMediaArgs:(FMIceLinkWebRTCGetMediaArgs*)getMediaArgs;
- (FMIceLinkWebRTCLocalMediaStream*) getMediaWithArgs:(FMIceLinkWebRTCGetMediaArgs*)getMediaArgs;
- (id) init;

@end


@class FMIceLinkWebRTCLocalMediaStream;
@class FMIceLinkWebRTCIncomingAudioRenderProvider;
@class FMIceLinkWebRTCIncomingVideoRenderProvider;

/// <summary>
/// A distributor that forwards media from one conference to another conference.
/// </summary>
#pragma clang diagnostic ignored "-Wshorten-64-to-32"
#pragma clang diagnostic ignored "-Wint-to-pointer-cast"

@interface FMIceLinkWebRTCDistributor : NSObject 

/// <summary>
/// Gets whether or not to distribute audio.
/// </summary>
- (bool) audio;
/// <summary>
/// Initializes a new instance of the <see cref="FMIceLinkWebRTCDistributor" /> class.
/// </summary>
/// <param name="audio">Whether or not to distribute audio.</param>
/// <param name="video">Whether or not to distribute video.</param>
+ (FMIceLinkWebRTCDistributor*) distributorWithAudio:(bool)audio video:(bool)video;
/// <summary>
/// Gets a local media stream for a sending conference.
/// </summary>
/// <returns></returns>
- (FMIceLinkWebRTCLocalMediaStream*) getSendMediaStream;
/// <summary>
/// Initializes a new instance of the <see cref="FMIceLinkWebRTCDistributor" /> class.
/// </summary>
/// <param name="audio">Whether or not to distribute audio.</param>
/// <param name="video">Whether or not to distribute video.</param>
- (id) initWithAudio:(bool)audio video:(bool)video;
/// <summary>
/// Gets the local media stream for the receiving conference.
/// </summary>
- (FMIceLinkWebRTCLocalMediaStream*) receiveMediaStream;
/// <summary>
/// Gets whether or not to distribute video.
/// </summary>
- (bool) video;

@end


@class NSMutableArrayFMExtensions;
@class FMIceLinkWebRTCGoogleDataPacket;

/// <summary>
/// An accumulator for Google's data channel implementation.
/// </summary>
#pragma clang diagnostic ignored "-Wshorten-64-to-32"
#pragma clang diagnostic ignored "-Wint-to-pointer-cast"

@interface FMIceLinkWebRTCGoogleDataAccumulator : NSObject 

/// <summary>
/// Adds the specified packet.
/// </summary>
/// <param name="packet">The packet.</param>
- (void) addWithPacket:(FMIceLinkWebRTCGoogleDataPacket*)packet;
+ (FMIceLinkWebRTCGoogleDataAccumulator*) googleDataAccumulator;
- (id) init;
/// <summary>
/// Gets the packets.
/// </summary>
- (NSMutableArray*) packets;
/// <summary>
/// Resets this instance, clearing out any accumulated packets.
/// </summary>
- (void) reset;

@end


@class NSMutableDataFMExtensions;
@class NSMutableArrayFMExtensions;

/// <summary>
/// A packet for Google's data channel implementation.
/// </summary>
#pragma clang diagnostic ignored "-Wshorten-64-to-32"
#pragma clang diagnostic ignored "-Wint-to-pointer-cast"

@interface FMIceLinkWebRTCGoogleDataPacket : NSObject 

/// <summary>
/// Depacketizes the specified packets into a single encoded data frame.
/// </summary>
/// <param name="packets">The packets.</param>
/// <returns></returns>
+ (NSMutableData*) depacketizeWithPackets:(NSMutableArray*)packets;
/// <summary>
/// Gets whether this packet is the end of a partition.
/// </summary>
- (bool) endOfPartition;
/// <summary>
/// Gets the packet as a byte array.
/// </summary>
/// <returns></returns>
- (NSMutableData*) getBytes;
/// <summary>
/// Gets a packet as a byte array.
/// </summary>
/// <returns></returns>
+ (NSMutableData*) getBytesWithPacket:(FMIceLinkWebRTCGoogleDataPacket*)packet;
+ (FMIceLinkWebRTCGoogleDataPacket*) googleDataPacket;
- (id) init;
/// <summary>
/// Packetizes a single encoded data frame into multiple VP8 packets.
/// </summary>
/// <param name="encodedData">The encoded data.</param>
/// <returns></returns>
+ (NSMutableArray*) packetizeWithEncodedData:(NSMutableData*)encodedData;
/// <summary>
/// Parses the specified packet bytes.
/// </summary>
/// <param name="packetBytes">The packet bytes.</param>
/// <returns></returns>
+ (FMIceLinkWebRTCGoogleDataPacket*) parseBytesWithPacketBytes:(NSMutableData*)packetBytes;
/// <summary>
/// Gets the packet payload.
/// </summary>
- (NSMutableData*) payload;
/// <summary>
/// Sets whether this packet is the end of a partition.
/// </summary>
- (void) setEndOfPartition:(bool)value;
/// <summary>
/// Sets the packet payload.
/// </summary>
- (void) setPayload:(NSMutableData*)value;
/// <summary>
/// Sets whether this packet is the start of a partition.
/// </summary>
- (void) setStartOfPartition:(bool)value;
/// <summary>
/// Gets whether this packet is the start of a partition.
/// </summary>
- (bool) startOfPartition;

@end


@class NSMutableArrayFMExtensions;
@class NSMutableDataFMExtensions;

/// <summary>
/// Abstract definition of a data channel packetizer/depacketizer.
/// </summary>
#pragma clang diagnostic ignored "-Wshorten-64-to-32"
#pragma clang diagnostic ignored "-Wint-to-pointer-cast"

@interface FMIceLinkWebRTCDataChannelPadep : FMIceLinkWebRTCPadep 

+ (FMIceLinkWebRTCDataChannelPadep*) dataChannelPadep;
/// <summary>
/// Gets the next timestamp for an RTP packet.
/// </summary>
/// <param name="clockRate">The clock rate.</param>
/// <returns></returns>
- (long long) getNextTimestampWithClockRate:(int)clockRate;
- (id) init;
/// <summary>
/// Packetizes an encoded frame.
/// </summary>
/// <param name="encodedFrame">The encoded frame.</param>
/// <param name="clockRate">The clock rate.</param>
/// <returns></returns>
- (NSMutableArray*) packetizeWithEncodedFrame:(NSMutableData*)encodedFrame clockRate:(int)clockRate;

@end


@class NSMutableDictionaryFMExtensions;
@class NSMutableDataFMExtensions;
@class FMIceLinkRTPPacket;
@class NSMutableArrayFMExtensions;

/// <summary>
/// A packetizer/depacketizer for Google's data channel implementation.
/// </summary>
#pragma clang diagnostic ignored "-Wshorten-64-to-32"
#pragma clang diagnostic ignored "-Wint-to-pointer-cast"

@interface FMIceLinkWebRTCGoogleDataPadep : FMIceLinkWebRTCDataChannelPadep 

/// <summary>
/// Depacketizes a packet.
/// </summary>
/// <param name="packet">The packet.</param>
/// <returns></returns>
- (NSMutableData*) depacketizeWithPacket:(FMIceLinkRTPPacket*)packet;
+ (FMIceLinkWebRTCGoogleDataPadep*) googleDataPadep;
- (id) init;
/// <summary>
/// Packetizes an encoded frame.
/// </summary>
/// <param name="encodedFrame">The encoded frame.</param>
/// <param name="clockRate">The clock rate.</param>
/// <returns></returns>
- (NSMutableArray*) packetizeWithEncodedFrame:(NSMutableData*)encodedFrame clockRate:(int)clockRate;

@end


@class NSMutableDictionaryFMExtensions;
@class FMIceLinkWebRTCDataChannelInfo;
@class NSStringFMExtensions;
@class FMIceLinkConference;
@class FMIceLinkWebRTCReliableDataChannel;
@class NSMutableDataFMExtensions;

/// <summary>
/// Extension methods for <see cref="FMIceLinkConference" /> instances.
/// </summary>
#pragma clang diagnostic ignored "-Wshorten-64-to-32"
#pragma clang diagnostic ignored "-Wint-to-pointer-cast"

@interface FMIceLinkConference (FMIceLinkWebRTCExtensions)

/// <summary>
/// Sends a data channel packet to the conference's connected peers.
/// </summary>
/// <param name="conference">The conference.</param>
/// <param name="channelInfo">The data channel description.</param>
/// <param name="data">The data to send.</param>
/// <returns>The number of bytes sent for each peer ID, or -1 if the send operation failed.</returns>
- (NSMutableDictionary*) sendDataWithChannelInfo:(FMIceLinkWebRTCDataChannelInfo*)channelInfo data:(NSString*)data;
/// <summary>
/// Sends a data channel packet to one of the conference's connected peers.
/// </summary>
/// <param name="conference">The conference.</param>
/// <param name="channelInfo">The data channel description.</param>
/// <param name="data">The data to send.</param>
/// <param name="peerId">The peer ID to target.</param>
/// <returns>The number of bytes sent, or -1 if the send operation failed.</returns>
- (int) sendDataWithChannelInfo:(FMIceLinkWebRTCDataChannelInfo*)channelInfo data:(NSString*)data peerId:(NSString*)peerId;
/// <summary>
/// Sends a data channel packet to the conference's connected peers.
/// </summary>
/// <param name="conference">The conference.</param>
/// <param name="channelInfo">The data channel description.</param>
/// <param name="data">The data to send.</param>
/// <returns>The number of bytes sent for each peer ID, or -1 if the send operation failed.</returns>
+ (NSMutableDictionary*) sendDataWithConference:(FMIceLinkConference*)conference channelInfo:(FMIceLinkWebRTCDataChannelInfo*)channelInfo data:(NSString*)data;
/// <summary>
/// Sends a data channel packet to one of the conference's connected peers.
/// </summary>
/// <param name="conference">The conference.</param>
/// <param name="channelInfo">The data channel description.</param>
/// <param name="data">The data to send.</param>
/// <param name="peerId">The peer ID to target.</param>
/// <returns>The number of bytes sent, or -1 if the send operation failed.</returns>
+ (int) sendDataWithConference:(FMIceLinkConference*)conference channelInfo:(FMIceLinkWebRTCDataChannelInfo*)channelInfo data:(NSString*)data peerId:(NSString*)peerId;
/// <summary>
/// Sends a data byte packet over a reliable channel to the conference's connected peers.
/// Messages must be limited to 16 KB.
/// </summary>
/// <param name="conference">The conference.</param>
/// <param name="channel">The reliable channel description.</param>
/// <param name="dataBytes">The data bytes.</param>
/// <returns>
/// An indicator whether data has been successfully sent.
/// </returns>
- (bool) sendReliableBytesWithChannel:(FMIceLinkWebRTCReliableDataChannel*)channel dataBytes:(NSMutableData*)dataBytes;
/// <summary>
/// Sends a data byte packet over a reliable to one of the conference's connected peers.
/// Messages must be limited to 16 KB.
/// </summary>
/// <param name="conference">The conference.</param>
/// <param name="channel">The reliable channel descriptionn.</param>
/// <param name="dataBytes">The data binary.</param>
/// <param name="peerId">The peer identifier.</param>
/// <returns>
/// An indicator whether data has been successfully sent.
/// </returns>
- (bool) sendReliableBytesWithChannel:(FMIceLinkWebRTCReliableDataChannel*)channel dataBytes:(NSMutableData*)dataBytes peerId:(NSString*)peerId;
/// <summary>
/// Sends a data byte packet over a reliable channel to the conference's connected peers.
/// Messages must be limited to 16 KB.
/// </summary>
/// <param name="conference">The conference.</param>
/// <param name="channel">The reliable channel description.</param>
/// <param name="dataBytes">The data bytes.</param>
/// <returns>
/// An indicator whether data has been successfully sent.
/// </returns>
+ (bool) sendReliableBytesWithConference:(FMIceLinkConference*)conference channel:(FMIceLinkWebRTCReliableDataChannel*)channel dataBytes:(NSMutableData*)dataBytes;
/// <summary>
/// Sends a data byte packet over a reliable to one of the conference's connected peers.
/// Messages must be limited to 16 KB.
/// </summary>
/// <param name="conference">The conference.</param>
/// <param name="channel">The reliable channel descriptionn.</param>
/// <param name="dataBytes">The data binary.</param>
/// <param name="peerId">The peer identifier.</param>
/// <returns>
/// An indicator whether data has been successfully sent.
/// </returns>
+ (bool) sendReliableBytesWithConference:(FMIceLinkConference*)conference channel:(FMIceLinkWebRTCReliableDataChannel*)channel dataBytes:(NSMutableData*)dataBytes peerId:(NSString*)peerId;
/// <summary>
/// Sends a data string packet over a reliable channel to the conference's connected peers.
/// Messages must be limited to 16 KB.
/// </summary>
/// <param name="conference">The conference.</param>
/// <param name="channel">The reliable channel description.</param>
/// <param name="dataString">The data string to send.</param>
/// <returns>
/// An indicator whether data has been successfully sent.
/// </returns>
- (bool) sendReliableStringWithChannel:(FMIceLinkWebRTCReliableDataChannel*)channel dataString:(NSString*)dataString;
/// <summary>
/// Sends a data string over a reliable channel to one of the conference's connected peers.
/// Messages must be limited to 16 KB.
/// </summary>
/// <param name="conference">The conference.</param>
/// <param name="channel">The reliable channel description.</param>
/// <param name="dataString">The data string to send.</param>
/// <param name="peerId">The peer identifier.</param>
/// <returns>
/// An indicator whether data has been successfully sent.
/// </returns>
- (bool) sendReliableStringWithChannel:(FMIceLinkWebRTCReliableDataChannel*)channel dataString:(NSString*)dataString peerId:(NSString*)peerId;
/// <summary>
/// Sends a data string packet over a reliable channel to the conference's connected peers.
/// Messages must be limited to 16 KB.
/// </summary>
/// <param name="conference">The conference.</param>
/// <param name="channel">The reliable channel description.</param>
/// <param name="dataString">The data string to send.</param>
/// <returns>
/// An indicator whether data has been successfully sent.
/// </returns>
+ (bool) sendReliableStringWithConference:(FMIceLinkConference*)conference channel:(FMIceLinkWebRTCReliableDataChannel*)channel dataString:(NSString*)dataString;
/// <summary>
/// Sends a data string over a reliable channel to one of the conference's connected peers.
/// Messages must be limited to 16 KB.
/// </summary>
/// <param name="conference">The conference.</param>
/// <param name="channel">The reliable channel description.</param>
/// <param name="dataString">The data string to send.</param>
/// <param name="peerId">The peer identifier.</param>
/// <returns>
/// An indicator whether data has been successfully sent.
/// </returns>
+ (bool) sendReliableStringWithConference:(FMIceLinkConference*)conference channel:(FMIceLinkWebRTCReliableDataChannel*)channel dataString:(NSString*)dataString peerId:(NSString*)peerId;

@end


@class FMIceLinkWebRTCDataChannelCodec;
@class NSMutableArrayFMExtensions;
@class FMIceLinkWebRTCDataChannelInfo;
@class NSStringFMExtensions;
@class FMCallback;

/// <summary>
/// An ureliable (UDP-based) WebRTC data stream.
/// </summary>
#pragma clang diagnostic ignored "-Wshorten-64-to-32"
#pragma clang diagnostic ignored "-Wint-to-pointer-cast"

@interface FMIceLinkWebRTCDataChannelStream : FMIceLinkWebRTCBaseWebRTCStream 

/// <summary>
/// Gets the data channel descriptions.
/// </summary>
- (NSMutableArray*) channelInfos;
/// <summary>
/// Initializes a new instance of the WebRTC <see cref="FMIceLinkWebRTCDataChannelStream" /> class.
/// </summary>
/// <param name="channelInfo">The data channel description.</param>
+ (FMIceLinkWebRTCDataChannelStream*) dataChannelStreamWithChannelInfo:(FMIceLinkWebRTCDataChannelInfo*)channelInfo;
/// <summary>
/// Initializes a new instance of the WebRTC <see cref="FMIceLinkWebRTCDataChannelStream" /> class.
/// </summary>
/// <param name="channelInfo">The data channel description.</param>
/// <param name="offerDtls">Whether to offer to exchange SRTP keys using DTLS.</param>
+ (FMIceLinkWebRTCDataChannelStream*) dataChannelStreamWithChannelInfo:(FMIceLinkWebRTCDataChannelInfo*)channelInfo offerDtls:(bool)offerDtls;
/// <summary>
/// Initializes a new instance of the WebRTC <see cref="FMIceLinkWebRTCDataChannelStream" /> class.
/// </summary>
/// <param name="channelInfos">The data channel descriptions.</param>
+ (FMIceLinkWebRTCDataChannelStream*) dataChannelStreamWithChannelInfos:(NSMutableArray*)channelInfos;
/// <summary>
/// Initializes a new instance of the WebRTC <see cref="FMIceLinkWebRTCDataChannelStream" /> class.
/// </summary>
/// <param name="channelInfos">The data channel descriptions.</param>
/// <param name="offerDtls">Whether to offer to exchange SRTP keys using DTLS.</param>
+ (FMIceLinkWebRTCDataChannelStream*) dataChannelStreamWithChannelInfos:(NSMutableArray*)channelInfos offerDtls:(bool)offerDtls;
+ (NSMutableArray*) getRegistrations;
+ (NSMutableArray*) getRegistrationsWithEncodingName:(NSString*)encodingName;
/// <summary>
/// Gets the encoding name for Google-Data packets.
/// </summary>
+ (NSString*) googleDataEncodingName;
/// <summary>
/// Initializes a new instance of the WebRTC <see cref="FMIceLinkWebRTCDataChannelStream" /> class.
/// </summary>
/// <param name="channelInfo">The data channel description.</param>
- (id) initWithChannelInfo:(FMIceLinkWebRTCDataChannelInfo*)channelInfo;
/// <summary>
/// Initializes a new instance of the WebRTC <see cref="FMIceLinkWebRTCDataChannelStream" /> class.
/// </summary>
/// <param name="channelInfo">The data channel description.</param>
/// <param name="offerDtls">Whether to offer to exchange SRTP keys using DTLS.</param>
- (id) initWithChannelInfo:(FMIceLinkWebRTCDataChannelInfo*)channelInfo offerDtls:(bool)offerDtls;
/// <summary>
/// Initializes a new instance of the WebRTC <see cref="FMIceLinkWebRTCDataChannelStream" /> class.
/// </summary>
/// <param name="channelInfos">The data channel descriptions.</param>
- (id) initWithChannelInfos:(NSMutableArray*)channelInfos;
/// <summary>
/// Initializes a new instance of the WebRTC <see cref="FMIceLinkWebRTCDataChannelStream" /> class.
/// </summary>
/// <param name="channelInfos">The data channel descriptions.</param>
/// <param name="offerDtls">Whether to offer to exchange SRTP keys using DTLS.</param>
- (id) initWithChannelInfos:(NSMutableArray*)channelInfos offerDtls:(bool)offerDtls;
/// <summary>
/// Registers a non-preferred data codec.
/// </summary>
/// <param name="encodingName">Name of the encoding.</param>
/// <param name="clockRate">The clock rate.</param>
/// <param name="createCodec">The codec creation callback.</param>
+ (void) registerCodecWithEncodingName:(NSString*)encodingName clockRate:(int)clockRate createCodec:(FMCallback*)createCodec;
/// <summary>
/// Registers a data codec.
/// </summary>
/// <param name="encodingName">Name of the encoding.</param>
/// <param name="clockRate">The clock rate.</param>
/// <param name="createCodec">The codec creation callback.</param>
/// <param name="preferred">Whether to prefer the payload type in SDP offers.</param>
+ (void) registerCodecWithEncodingName:(NSString*)encodingName clockRate:(int)clockRate createCodec:(FMCallback*)createCodec preferred:(bool)preferred;
/// <summary>
/// Registers a non-preferred data codec.
/// </summary>
/// <param name="encodingName">Name of the encoding.</param>
/// <param name="clockRate">The clock rate.</param>
/// <param name="createCodec">The codec creation callback.</param>
+ (void) registerCodecWithEncodingName:(NSString*)encodingName clockRate:(int)clockRate createCodecBlock:(FMIceLinkWebRTCDataChannelCodec* (^) ())createCodecBlock;
/// <summary>
/// Registers a data codec.
/// </summary>
/// <param name="encodingName">Name of the encoding.</param>
/// <param name="clockRate">The clock rate.</param>
/// <param name="createCodec">The codec creation callback.</param>
/// <param name="preferred">Whether to prefer the payload type in SDP offers.</param>
+ (void) registerCodecWithEncodingName:(NSString*)encodingName clockRate:(int)clockRate createCodecBlock:(FMIceLinkWebRTCDataChannelCodec* (^) ())createCodecBlock preferred:(bool)preferred;
/// <summary>
/// Registers a non-preferred data codec.
/// </summary>
/// <param name="encodingName">Name of the encoding.</param>
/// <param name="clockRate">The clock rate.</param>
/// <param name="staticPayloadType">The static payload type.</param>
/// <param name="createCodec">The codec creation callback.</param>
+ (void) registerCodecWithEncodingName:(NSString*)encodingName clockRate:(int)clockRate staticPayloadType:(int)staticPayloadType createCodec:(FMCallback*)createCodec;
/// <summary>
/// Registers a data codec.
/// </summary>
/// <param name="encodingName">Name of the encoding.</param>
/// <param name="clockRate">The clock rate.</param>
/// <param name="staticPayloadType">The static payload type.</param>
/// <param name="createCodec">The codec creation callback.</param>
/// <param name="preferred">Whether to prefer the payload type in SDP offers.</param>
+ (void) registerCodecWithEncodingName:(NSString*)encodingName clockRate:(int)clockRate staticPayloadType:(int)staticPayloadType createCodec:(FMCallback*)createCodec preferred:(bool)preferred;
/// <summary>
/// Registers a non-preferred data codec.
/// </summary>
/// <param name="encodingName">Name of the encoding.</param>
/// <param name="clockRate">The clock rate.</param>
/// <param name="staticPayloadType">The static payload type.</param>
/// <param name="createCodec">The codec creation callback.</param>
+ (void) registerCodecWithEncodingName:(NSString*)encodingName clockRate:(int)clockRate staticPayloadType:(int)staticPayloadType createCodecBlock:(FMIceLinkWebRTCDataChannelCodec* (^) ())createCodecBlock;
/// <summary>
/// Registers a data codec.
/// </summary>
/// <param name="encodingName">Name of the encoding.</param>
/// <param name="clockRate">The clock rate.</param>
/// <param name="staticPayloadType">The static payload type.</param>
/// <param name="createCodec">The codec creation callback.</param>
/// <param name="preferred">Whether to prefer the payload type in SDP offers.</param>
+ (void) registerCodecWithEncodingName:(NSString*)encodingName clockRate:(int)clockRate staticPayloadType:(int)staticPayloadType createCodecBlock:(FMIceLinkWebRTCDataChannelCodec* (^) ())createCodecBlock preferred:(bool)preferred;
/// <summary>
/// Registers a non-preferred data codec.
/// </summary>
/// <param name="encodingName">Name of the encoding.</param>
/// <param name="createCodec">The codec creation callback.</param>
+ (void) registerCodecWithEncodingName:(NSString*)encodingName createCodec:(FMCallback*)createCodec;
/// <summary>
/// Registers a data codec.
/// </summary>
/// <param name="encodingName">Name of the encoding.</param>
/// <param name="createCodec">The codec creation callback.</param>
/// <param name="preferred">Whether to prefer the payload type in SDP offers.</param>
+ (void) registerCodecWithEncodingName:(NSString*)encodingName createCodec:(FMCallback*)createCodec preferred:(bool)preferred;
/// <summary>
/// Registers a non-preferred data codec.
/// </summary>
/// <param name="encodingName">Name of the encoding.</param>
/// <param name="createCodec">The codec creation callback.</param>
+ (void) registerCodecWithEncodingName:(NSString*)encodingName createCodecBlock:(FMIceLinkWebRTCDataChannelCodec* (^) ())createCodecBlock;
/// <summary>
/// Registers a data codec.
/// </summary>
/// <param name="encodingName">Name of the encoding.</param>
/// <param name="createCodec">The codec creation callback.</param>
/// <param name="preferred">Whether to prefer the payload type in SDP offers.</param>
+ (void) registerCodecWithEncodingName:(NSString*)encodingName createCodecBlock:(FMIceLinkWebRTCDataChannelCodec* (^) ())createCodecBlock preferred:(bool)preferred;

@end


@class FMIceLinkWebRTCLayout;

/// <summary>
/// A layout preset.
/// </summary>
#pragma clang diagnostic ignored "-Wshorten-64-to-32"
#pragma clang diagnostic ignored "-Wint-to-pointer-cast"

@interface FMIceLinkWebRTCLayoutPreset : FMDynamic 

/// <summary>
/// Gets the alignment of the layout.
/// Defaults to <see cref="FMIceLinkWebRTCLayoutAlignmentBottomRight" />.
/// </summary>
- (FMIceLinkWebRTCLayoutAlignment) alignment;
/// <summary>
/// Applies a preset.
/// </summary>
/// <param name="preset">The preset to apply.</param>
- (void) applyPresetWithPreset:(FMIceLinkWebRTCLayoutPreset*)preset;
/// <summary>
/// Applies a preset.
/// </summary>
/// <param name="preset">The preset to apply.</param>
- (void) applyPreset:(FMIceLinkWebRTCLayoutPreset*)preset;
/// <summary>
/// Gets the height of block elements in pixels.
/// Overrides <see cref="FMIceLinkWebRTCLayoutPreset#blockHeightPercent" />.
/// </summary>
- (int) blockHeight;
/// <summary>
/// Gets the height of block elements as a percent
/// of the container height between 0.0 and 1.0.
/// Overrides <see cref="FMIceLinkWebRTCLayoutPreset#blockHeight" />.
/// </summary>
- (double) blockHeightPercent;
/// <summary>
/// Gets the X-margin between block elements and the layout
/// edge in pixels.
/// Overrides <see cref="FMIceLinkWebRTCLayoutPreset#blockMarginXPercent" />.
/// </summary>
- (int) blockMarginX;
/// <summary>
/// Gets the X-margin between block elements and the layout
/// edge as a percent of the container width between 0.0 and 1.0.
/// Overrides <see cref="FMIceLinkWebRTCLayoutPreset#blockMarginX" />.
/// </summary>
- (double) blockMarginXPercent;
/// <summary>
/// Gets the Y-margin between block elements and the layout
/// edge in pixels.
/// Overrides <see cref="FMIceLinkWebRTCLayoutPreset#blockMarginYPercent" />.
/// </summary>
- (int) blockMarginY;
/// <summary>
/// Gets the Y-margin between block elements and the layout
/// edge as a percent of the container height between 0.0 and 1.0.
/// Overrides <see cref="FMIceLinkWebRTCLayoutPreset#blockMarginY" />.
/// </summary>
- (double) blockMarginYPercent;
/// <summary>
/// Gets the width of block elements in pixels.
/// Overrides <see cref="FMIceLinkWebRTCLayoutPreset#blockWidthPercent" />.
/// </summary>
- (int) blockWidth;
/// <summary>
/// Gets the width of block elements as a percent
/// of the container width between 0.0 and 1.0.
/// Overrides <see cref="FMIceLinkWebRTCLayoutPreset#blockWidth" />.
/// </summary>
- (double) blockWidthPercent;
/// <summary>
/// Gets a video frame layout.
/// </summary>
/// <param name="layoutWidth">The total width of the layout.</param>
/// <param name="layoutHeight">The total height of the layout.</param>
/// <param name="remoteCount">The number of remote frames.</param>
/// <param name="origin">The layout origin</param>
/// <returns>The video frame layout.</returns>
- (FMIceLinkWebRTCLayout*) calculateLayoutWithLayoutWidth:(int)layoutWidth layoutHeight:(int)layoutHeight remoteCount:(int)remoteCount origin:(FMIceLinkWebRTCLayoutOrigin)origin;
/// <summary>
/// Gets a video frame layout.
/// </summary>
/// <param name="layoutWidth">The total width of the layout.</param>
/// <param name="layoutHeight">The total height of the layout.</param>
/// <param name="remoteCount">The number of remote frames.</param>
/// <param name="origin">The layout origin</param>
/// <returns>The video frame layout.</returns>
- (FMIceLinkWebRTCLayout*) calculateLayoutWithWidth:(int)layoutWidth layoutHeight:(int)layoutHeight remoteCount:(int)remoteCount origin:(FMIceLinkWebRTCLayoutOrigin)origin;
/// <summary>
/// Gets the size of the margin in pixels
/// to use between cells.
/// DEPRECATED. Use
/// <see cref="FMIceLinkWebRTCLayoutPreset#inlineMargin" /> instead.
/// </summary>
- (int) cellMargin;
/// <summary>
/// Copies this preset's properties to another preset.
/// </summary>
/// <param name="preset">The target preset.</param>
- (void) copyToPresetWithPreset:(FMIceLinkWebRTCLayoutPreset*)preset;
/// <summary>
/// Copies this preset's properties to another preset.
/// </summary>
/// <param name="preset">The target preset.</param>
- (void) copyToPreset:(FMIceLinkWebRTCLayoutPreset*)preset;
/// <summary>
/// Gets the direction of the layout flow.
/// Defaults to <see cref="FMIceLinkWebRTCLayoutDirectionHorizontal" />.
/// </summary>
- (FMIceLinkWebRTCLayoutDirection) direction;
/// <summary>
/// Gets a Facetime-style layout preset.
/// </summary>
+ (FMIceLinkWebRTCLayoutPreset*) facetime;
/// <summary>
/// Gets the height of floating elements in pixels.
/// Overrides <see cref="FMIceLinkWebRTCLayoutPreset#floatHeightPercent" />.
/// </summary>
- (int) floatHeight;
/// <summary>
/// Gets the height of floating elements as a percent
/// of the container height between 0.0 and 1.0.
/// Overrides <see cref="FMIceLinkWebRTCLayoutPreset#floatHeight" />.
/// </summary>
- (double) floatHeightPercent;
/// <summary>
/// Gets the X-margin between floating elements and the layout
/// edge in pixels.
/// Overrides <see cref="FMIceLinkWebRTCLayoutPreset#floatMarginXPercent" />.
/// </summary>
- (int) floatMarginX;
/// <summary>
/// Gets the X-margin between floating elements and the layout
/// edge as a percent of the container width between 0.0 and 1.0.
/// Overrides <see cref="FMIceLinkWebRTCLayoutPreset#floatMarginX" />.
/// </summary>
- (double) floatMarginXPercent;
/// <summary>
/// Gets the Y-margin between floating elements and the layout
/// edge in pixels.
/// Overrides <see cref="FMIceLinkWebRTCLayoutPreset#floatMarginYPercent" />.
/// </summary>
- (int) floatMarginY;
/// <summary>
/// Gets the Y-margin between floating elements and the layout
/// edge as a percent of the container height between 0.0 and 1.0.
/// Overrides <see cref="FMIceLinkWebRTCLayoutPreset#floatMarginY" />.
/// </summary>
- (double) floatMarginYPercent;
/// <summary>
/// Gets the width of floating elements in pixels.
/// Overrides <see cref="FMIceLinkWebRTCLayoutPreset#floatWidthPercent" />.
/// </summary>
- (int) floatWidth;
/// <summary>
/// Gets the width of floating elements as a percent
/// of the container width between 0.0 and 1.0.
/// Overrides <see cref="FMIceLinkWebRTCLayoutPreset#floatWidth" />.
/// </summary>
- (double) floatWidthPercent;
/// <summary>
/// Gets a Google Hangouts-style layout preset.
/// Note that this will present differently
/// on mobile devices.
/// </summary>
+ (FMIceLinkWebRTCLayoutPreset*) googleHangouts;
/// <summary>
/// Initializes a new instance of the <see cref="FMIceLinkWebRTCLayoutPreset" /> class.
/// </summary>
- (id) init;
/// <summary>
/// Gets the size of the margin in pixels to use
/// between inline elements.
/// </summary>
- (int) inlineMargin;
/// <summary>
/// Initializes a new instance of the <see cref="FMIceLinkWebRTCLayoutPreset" /> class.
/// </summary>
+ (FMIceLinkWebRTCLayoutPreset*) layoutPreset;
/// <summary>
/// Gets the mode used by the layout engine.
/// Defaults to <see cref="FMIceLinkWebRTCLayoutModeFloatLocal" />.
/// </summary>
- (FMIceLinkWebRTCLayoutMode) mode;
/// <summary>
/// Gets the desired preview alignment.
/// DEPRECATED. Use
/// <see cref="FMIceLinkWebRTCLayoutPreset#alignment" /> instead.
/// </summary>
- (FMIceLinkWebRTCLayoutAlignment) previewAlignment;
/// <summary>
/// Gets the desired preview mode.
/// DEPRECATED. Use
/// <see cref="FMIceLinkWebRTCLayoutPreset#mode" /> instead.
/// </summary>
- (FMIceLinkWebRTCLayoutMode) previewMode;
/// <summary>
/// Gets the amount of padding in pixels
/// to use between the preview and the layout edge.
/// DEPRECATED. Use
/// <see cref="FMIceLinkWebRTCLayoutPreset#floatMarginX" />,
/// <see cref="FMIceLinkWebRTCLayoutPreset#floatMarginY" />,
/// <see cref="FMIceLinkWebRTCLayoutPreset#floatMarginXPercent" />,
/// <see cref="FMIceLinkWebRTCLayoutPreset#floatMarginYPercent" />,
/// <see cref="FMIceLinkWebRTCLayoutPreset#blockMarginX" />,
/// <see cref="FMIceLinkWebRTCLayoutPreset#blockMarginY" />,
/// <see cref="FMIceLinkWebRTCLayoutPreset#blockMarginXPercent" />, and/or
/// <see cref="FMIceLinkWebRTCLayoutPreset#blockMarginYPercent" /> instead.
/// </summary>
- (int) previewPadding;
/// <summary>
/// Gets the preview size as a percent of the
/// container size when remote videos are present. For
/// example, a value of 0.5 will cover half the container.
/// DEPRECATED. Use
/// <see cref="FMIceLinkWebRTCLayoutPreset#floatWidth" />,
/// <see cref="FMIceLinkWebRTCLayoutPreset#floatHeight" />,
/// <see cref="FMIceLinkWebRTCLayoutPreset#floatWidthPercent" />,
/// <see cref="FMIceLinkWebRTCLayoutPreset#floatHeightPercent" />,
/// <see cref="FMIceLinkWebRTCLayoutPreset#blockWidth" />,
/// <see cref="FMIceLinkWebRTCLayoutPreset#blockHeight" />,
/// <see cref="FMIceLinkWebRTCLayoutPreset#blockWidthPercent" />, and/or
/// <see cref="FMIceLinkWebRTCLayoutPreset#blockHeightPercent" /> instead.
/// </summary>
- (double) previewSize;
/// <summary>
/// Sets the alignment of the layout.
/// Defaults to <see cref="FMIceLinkWebRTCLayoutAlignmentBottomRight" />.
/// </summary>
- (void) setAlignment:(FMIceLinkWebRTCLayoutAlignment)value;
/// <summary>
/// Sets the height of block elements in pixels.
/// Overrides <see cref="FMIceLinkWebRTCLayoutPreset#blockHeightPercent" />.
/// </summary>
- (void) setBlockHeight:(int)value;
/// <summary>
/// Sets the height of block elements as a percent
/// of the container height between 0.0 and 1.0.
/// Overrides <see cref="FMIceLinkWebRTCLayoutPreset#blockHeight" />.
/// </summary>
- (void) setBlockHeightPercent:(double)value;
/// <summary>
/// Sets the X-margin between block elements and the layout
/// edge in pixels.
/// Overrides <see cref="FMIceLinkWebRTCLayoutPreset#blockMarginXPercent" />.
/// </summary>
- (void) setBlockMarginX:(int)value;
/// <summary>
/// Sets the X-margin between block elements and the layout
/// edge as a percent of the container width between 0.0 and 1.0.
/// Overrides <see cref="FMIceLinkWebRTCLayoutPreset#blockMarginX" />.
/// </summary>
- (void) setBlockMarginXPercent:(double)value;
/// <summary>
/// Sets the Y-margin between block elements and the layout
/// edge in pixels.
/// Overrides <see cref="FMIceLinkWebRTCLayoutPreset#blockMarginYPercent" />.
/// </summary>
- (void) setBlockMarginY:(int)value;
/// <summary>
/// Sets the Y-margin between block elements and the layout
/// edge as a percent of the container height between 0.0 and 1.0.
/// Overrides <see cref="FMIceLinkWebRTCLayoutPreset#blockMarginY" />.
/// </summary>
- (void) setBlockMarginYPercent:(double)value;
/// <summary>
/// Sets the width of block elements in pixels.
/// Overrides <see cref="FMIceLinkWebRTCLayoutPreset#blockWidthPercent" />.
/// </summary>
- (void) setBlockWidth:(int)value;
/// <summary>
/// Sets the width of block elements as a percent
/// of the container width between 0.0 and 1.0.
/// Overrides <see cref="FMIceLinkWebRTCLayoutPreset#blockWidth" />.
/// </summary>
- (void) setBlockWidthPercent:(double)value;
/// <summary>
/// Sets the size of the margin in pixels
/// to use between cells.
/// DEPRECATED. Use
/// <see cref="FMIceLinkWebRTCLayoutPreset#inlineMargin" /> instead.
/// </summary>
- (void) setCellMargin:(int)value;
/// <summary>
/// Sets the direction of the layout flow.
/// Defaults to <see cref="FMIceLinkWebRTCLayoutDirectionHorizontal" />.
/// </summary>
- (void) setDirection:(FMIceLinkWebRTCLayoutDirection)value;
/// <summary>
/// Sets the height of floating elements in pixels.
/// Overrides <see cref="FMIceLinkWebRTCLayoutPreset#floatHeightPercent" />.
/// </summary>
- (void) setFloatHeight:(int)value;
/// <summary>
/// Sets the height of floating elements as a percent
/// of the container height between 0.0 and 1.0.
/// Overrides <see cref="FMIceLinkWebRTCLayoutPreset#floatHeight" />.
/// </summary>
- (void) setFloatHeightPercent:(double)value;
/// <summary>
/// Sets the X-margin between floating elements and the layout
/// edge in pixels.
/// Overrides <see cref="FMIceLinkWebRTCLayoutPreset#floatMarginXPercent" />.
/// </summary>
- (void) setFloatMarginX:(int)value;
/// <summary>
/// Sets the X-margin between floating elements and the layout
/// edge as a percent of the container width between 0.0 and 1.0.
/// Overrides <see cref="FMIceLinkWebRTCLayoutPreset#floatMarginX" />.
/// </summary>
- (void) setFloatMarginXPercent:(double)value;
/// <summary>
/// Sets the Y-margin between floating elements and the layout
/// edge in pixels.
/// Overrides <see cref="FMIceLinkWebRTCLayoutPreset#floatMarginYPercent" />.
/// </summary>
- (void) setFloatMarginY:(int)value;
/// <summary>
/// Sets the Y-margin between floating elements and the layout
/// edge as a percent of the container height between 0.0 and 1.0.
/// Overrides <see cref="FMIceLinkWebRTCLayoutPreset#floatMarginY" />.
/// </summary>
- (void) setFloatMarginYPercent:(double)value;
/// <summary>
/// Sets the width of floating elements in pixels.
/// Overrides <see cref="FMIceLinkWebRTCLayoutPreset#floatWidthPercent" />.
/// </summary>
- (void) setFloatWidth:(int)value;
/// <summary>
/// Sets the width of floating elements as a percent
/// of the container width between 0.0 and 1.0.
/// Overrides <see cref="FMIceLinkWebRTCLayoutPreset#floatWidth" />.
/// </summary>
- (void) setFloatWidthPercent:(double)value;
/// <summary>
/// Sets the size of the margin in pixels to use
/// between inline elements.
/// </summary>
- (void) setInlineMargin:(int)value;
/// <summary>
/// Sets the mode used by the layout engine.
/// Defaults to <see cref="FMIceLinkWebRTCLayoutModeFloatLocal" />.
/// </summary>
- (void) setMode:(FMIceLinkWebRTCLayoutMode)value;
/// <summary>
/// Sets the desired preview alignment.
/// DEPRECATED. Use
/// <see cref="FMIceLinkWebRTCLayoutPreset#alignment" /> instead.
/// </summary>
- (void) setPreviewAlignment:(FMIceLinkWebRTCLayoutAlignment)value;
/// <summary>
/// Sets the desired preview mode.
/// DEPRECATED. Use
/// <see cref="FMIceLinkWebRTCLayoutPreset#mode" /> instead.
/// </summary>
- (void) setPreviewMode:(FMIceLinkWebRTCLayoutMode)value;
/// <summary>
/// Sets the amount of padding in pixels
/// to use between the preview and the layout edge.
/// DEPRECATED. Use
/// <see cref="FMIceLinkWebRTCLayoutPreset#floatMarginX" />,
/// <see cref="FMIceLinkWebRTCLayoutPreset#floatMarginY" />,
/// <see cref="FMIceLinkWebRTCLayoutPreset#floatMarginXPercent" />,
/// <see cref="FMIceLinkWebRTCLayoutPreset#floatMarginYPercent" />,
/// <see cref="FMIceLinkWebRTCLayoutPreset#blockMarginX" />,
/// <see cref="FMIceLinkWebRTCLayoutPreset#blockMarginY" />,
/// <see cref="FMIceLinkWebRTCLayoutPreset#blockMarginXPercent" />, and/or
/// <see cref="FMIceLinkWebRTCLayoutPreset#blockMarginYPercent" /> instead.
/// </summary>
- (void) setPreviewPadding:(int)value;
/// <summary>
/// Sets the preview size as a percent of the
/// container size when remote videos are present. For
/// example, a value of 0.5 will cover half the container.
/// DEPRECATED. Use
/// <see cref="FMIceLinkWebRTCLayoutPreset#floatWidth" />,
/// <see cref="FMIceLinkWebRTCLayoutPreset#floatHeight" />,
/// <see cref="FMIceLinkWebRTCLayoutPreset#floatWidthPercent" />,
/// <see cref="FMIceLinkWebRTCLayoutPreset#floatHeightPercent" />,
/// <see cref="FMIceLinkWebRTCLayoutPreset#blockWidth" />,
/// <see cref="FMIceLinkWebRTCLayoutPreset#blockHeight" />,
/// <see cref="FMIceLinkWebRTCLayoutPreset#blockWidthPercent" />, and/or
/// <see cref="FMIceLinkWebRTCLayoutPreset#blockHeightPercent" /> instead.
/// </summary>
- (void) setPreviewSize:(double)value;
/// <summary>
/// Gets a Skype-style layout preset.
/// Note that this will present differently
/// on mobile devices.
/// </summary>
+ (FMIceLinkWebRTCLayoutPreset*) skype;

@end


@class FMIceLinkWebRTCLocalStartSuccessArgs;
@class FMIceLinkWebRTCLocalStartFailureArgs;
@class FMCallback;
@class NSStringFMExtensions;

/// <summary>
/// Arguments for starting a local media stream.
/// </summary>
#pragma clang diagnostic ignored "-Wshorten-64-to-32"
#pragma clang diagnostic ignored "-Wint-to-pointer-cast"

@interface FMIceLinkWebRTCLocalStartArgs : FMIceLinkWebRTCBaseMediaArgs 

/// <summary>
/// Deserializes an instance from JSON.
/// </summary>
/// <returns></returns>
+ (FMIceLinkWebRTCLocalStartArgs*) fromJsonWithStartArgsJson:(NSString*)startArgsJson;
- (id) init;
+ (FMIceLinkWebRTCLocalStartArgs*) localStartArgs;
/// <summary>
/// Gets the failure callback.
/// </summary>
- (FMCallback*) onFailure;
/// <summary>
/// Gets the success callback.
/// </summary>
- (FMCallback*) onSuccess;
/// <summary>
/// Sets the failure callback.
/// </summary>
- (void) setOnFailure:(FMCallback*)value;
/// <summary>
/// Sets the failure callback.
/// </summary>
- (void) setOnFailureBlock:(void (^) (FMIceLinkWebRTCLocalStartFailureArgs*))valueBlock;
/// <summary>
/// Sets the success callback.
/// </summary>
- (void) setOnSuccess:(FMCallback*)value;
/// <summary>
/// Sets the success callback.
/// </summary>
- (void) setOnSuccessBlock:(void (^) (FMIceLinkWebRTCLocalStartSuccessArgs*))valueBlock;
/// <summary>
/// Serializes this instance to JSON.
/// </summary>
/// <returns></returns>
- (NSString*) toJson;
/// <summary>
/// Serializes an instance to JSON.
/// </summary>
/// <returns></returns>
+ (NSString*) toJsonWithStartArgs:(FMIceLinkWebRTCLocalStartArgs*)startArgs;

@end


@class NSExceptionFMExtensions;
@class FMIceLinkWebRTCLocalMediaStream;
@class NSStringFMExtensions;

/// <summary>
/// Arguments for the callback invoked after failing to start a local media stream.
/// </summary>
#pragma clang diagnostic ignored "-Wshorten-64-to-32"
#pragma clang diagnostic ignored "-Wint-to-pointer-cast"

@interface FMIceLinkWebRTCLocalStartFailureArgs : FMIceLinkWebRTCBaseMediaArgs 

/// <summary>
/// Gets the exception.
/// </summary>
- (NSException*) exception;
/// <summary>
/// Deserializes an instance from JSON.
/// </summary>
/// <returns></returns>
+ (FMIceLinkWebRTCLocalStartFailureArgs*) fromJsonWithStartFailureArgsJson:(NSString*)startFailureArgsJson;
- (id) init;
+ (FMIceLinkWebRTCLocalStartFailureArgs*) localStartFailureArgs;
/// <summary>
/// Gets the local media stream.
/// </summary>
- (FMIceLinkWebRTCLocalMediaStream*) localStream;
/// <summary>
/// Sets the exception.
/// </summary>
- (void) setException:(NSException*)value;
/// <summary>
/// Sets the local media stream.
/// </summary>
- (void) setLocalStream:(FMIceLinkWebRTCLocalMediaStream*)value;
/// <summary>
/// Serializes this instance to JSON.
/// </summary>
/// <returns></returns>
- (NSString*) toJson;
/// <summary>
/// Serializes an instance to JSON.
/// </summary>
/// <returns></returns>
+ (NSString*) toJsonWithStartFailureArgs:(FMIceLinkWebRTCLocalStartFailureArgs*)startFailureArgs;

@end


@class FMIceLinkWebRTCLocalMediaStream;
@class NSStringFMExtensions;

/// <summary>
/// Arguments for the callback invoked after successfully starting a local media stream.
/// </summary>
#pragma clang diagnostic ignored "-Wshorten-64-to-32"
#pragma clang diagnostic ignored "-Wint-to-pointer-cast"

@interface FMIceLinkWebRTCLocalStartSuccessArgs : FMIceLinkWebRTCBaseMediaArgs 

/// <summary>
/// Deserializes an instance from JSON.
/// </summary>
/// <returns></returns>
+ (FMIceLinkWebRTCLocalStartSuccessArgs*) fromJsonWithStartSuccessArgsJson:(NSString*)startSuccessArgsJson;
- (id) init;
+ (FMIceLinkWebRTCLocalStartSuccessArgs*) localStartSuccessArgs;
/// <summary>
/// Gets the local media stream.
/// </summary>
- (FMIceLinkWebRTCLocalMediaStream*) localStream;
/// <summary>
/// Sets the local media stream.
/// </summary>
- (void) setLocalStream:(FMIceLinkWebRTCLocalMediaStream*)value;
/// <summary>
/// Serializes this instance to JSON.
/// </summary>
/// <returns></returns>
- (NSString*) toJson;
/// <summary>
/// Serializes an instance to JSON.
/// </summary>
/// <returns></returns>
+ (NSString*) toJsonWithStartSuccessArgs:(FMIceLinkWebRTCLocalStartSuccessArgs*)startSuccessArgs;

@end


@class FMIceLinkWebRTCAudioCodec;
@class FMIceLinkWebRTCLocalMediaStream;
@class NSMutableArrayFMExtensions;
@class NSStringFMExtensions;
@class FMCallback;

/// <summary>
/// A WebRTC audio stream.
/// </summary>
#pragma clang diagnostic ignored "-Wshorten-64-to-32"
#pragma clang diagnostic ignored "-Wint-to-pointer-cast"

@interface FMIceLinkWebRTCAudioStream : FMIceLinkWebRTCBaseWebRTCStream 

/// <summary>
/// Initializes a new instance of the WebRTC <see cref="FMIceLinkWebRTCAudioStream" /> class.
/// </summary>
/// <param name="localStream">The local media stream.</param>
+ (FMIceLinkWebRTCAudioStream*) audioStreamWithLocalStream:(FMIceLinkWebRTCLocalMediaStream*)localStream;
/// <summary>
/// Initializes a new instance of the WebRTC <see cref="FMIceLinkWebRTCAudioStream" /> class.
/// </summary>
/// <param name="localStream">The local media stream.</param>
/// <param name="offerDtls">Whether to offer to exchange SRTP keys using DTLS.</param>
+ (FMIceLinkWebRTCAudioStream*) audioStreamWithLocalStream:(FMIceLinkWebRTCLocalMediaStream*)localStream offerDtls:(bool)offerDtls;
/// <summary>
/// Initializes a new instance of the WebRTC <see cref="FMIceLinkWebRTCAudioStream" /> class.
/// </summary>
/// <param name="localStream">The local media stream.</param>
/// <param name="offerDtls">Whether to offer to exchange SRTP keys using DTLS.</param>
/// <param name="formats">The stream formats to allow.</param>
+ (FMIceLinkWebRTCAudioStream*) audioStreamWithLocalStream:(FMIceLinkWebRTCLocalMediaStream*)localStream offerDtls:(bool)offerDtls formats:(NSMutableArray*)formats;
/// <summary>
/// Gets a flag indicating whether
/// encoding and decoding should be bypassed
/// for outgoing and incoming media packets.
/// </summary>
- (bool) bypassCodec;
/// <summary>
/// Gets a flag indicating whether
/// decoding should be bypassed
/// for incoming media packets.
/// </summary>
- (bool) bypassDecode;
/// <summary>
/// Gets a flag indicating whether
/// encoding should be bypassed
/// for outgoing media packets.
/// </summary>
- (bool) bypassEncode;
/// <summary>
/// Gets <see cref="FMIceLinkWebRTCAudioStream#outgoingDelayPacketMaximum" />.
/// Deprecated. Use <see cref="FMIceLinkWebRTCAudioStream#outgoingDelayPacketMaximum" />
/// or <see cref="FMIceLinkWebRTCAudioStream#incomingDelayPacketMaximum" /> instead.
/// </summary>
- (int) delayPacketMaximum;
/// <summary>
/// Gets <see cref="FMIceLinkWebRTCAudioStream#outgoingDelayPacketProbability" />.
/// Deprecated. Use <see cref="FMIceLinkWebRTCAudioStream#outgoingDelayPacketProbability" />
/// or <see cref="FMIceLinkWebRTCAudioStream#incomingDelayPacketProbability" /> instead.
/// </summary>
- (int) delayPacketProbability;
/// <summary>
/// Gets a value indicating whether
/// the jitter buffer should be disabled.
/// </summary>
- (bool) disableJitterBuffer;
/// <summary>
/// Gets a flag indicating whether packet
/// loss concealment (PLC) should be disabled.
/// If set to true, extra packets will be added
/// to replace missing packets when the RTP
/// packet sequence is violated.
/// Defaults to false.
/// </summary>
- (bool) disablePLC;
/// <summary>
/// Gets <see cref="FMIceLinkWebRTCAudioStream#outgoingDropPacketProbability" />.
/// Deprecated. Use <see cref="FMIceLinkWebRTCAudioStream#outgoingDropPacketProbability" />
/// or <see cref="FMIceLinkWebRTCAudioStream#incomingDropPacketProbability" /> instead.
/// </summary>
- (int) dropPacketProbability;
+ (NSMutableArray*) getRegistrations;
+ (NSMutableArray*) getRegistrationsWithEncodingName:(NSString*)encodingName;
/// <summary>
/// Gets the maximum number of
/// milliseconds that may elapse before
/// a delayed packet is received.
/// Affects incoming data only.
/// FOR TESTING PURPOSES ONLY.
/// Defaults to zero.
/// </summary>
- (int) incomingDelayPacketMaximum;
/// <summary>
/// Gets the probability that an
/// incoming packet should be delayed.
/// Affects incoming data only.
/// FOR TESTING PURPOSES ONLY.
/// Defaults to zero.
/// </summary>
- (int) incomingDelayPacketProbability;
/// <summary>
/// Gets the probability that an
/// incoming packet should be dropped.
/// Affects incoming data only.
/// FOR TESTING PURPOSES ONLY.
/// Defaults to zero.
/// </summary>
- (int) incomingDropPacketProbability;
/// <summary>
/// Initializes a new instance of the WebRTC <see cref="FMIceLinkWebRTCAudioStream" /> class.
/// </summary>
/// <param name="localStream">The local media stream.</param>
- (id) initWithLocalStream:(FMIceLinkWebRTCLocalMediaStream*)localStream;
/// <summary>
/// Initializes a new instance of the WebRTC <see cref="FMIceLinkWebRTCAudioStream" /> class.
/// </summary>
/// <param name="localStream">The local media stream.</param>
/// <param name="offerDtls">Whether to offer to exchange SRTP keys using DTLS.</param>
- (id) initWithLocalStream:(FMIceLinkWebRTCLocalMediaStream*)localStream offerDtls:(bool)offerDtls;
/// <summary>
/// Initializes a new instance of the WebRTC <see cref="FMIceLinkWebRTCAudioStream" /> class.
/// </summary>
/// <param name="localStream">The local media stream.</param>
/// <param name="offerDtls">Whether to offer to exchange SRTP keys using DTLS.</param>
/// <param name="formats">The stream formats to allow.</param>
- (id) initWithLocalStream:(FMIceLinkWebRTCLocalMediaStream*)localStream offerDtls:(bool)offerDtls formats:(NSMutableArray*)formats;
/// <summary>
/// Gets the initial jitter buffer length in milliseconds.
/// Defaults to 100 (ms).
/// </summary>
- (int) jitterBufferLength;
/// <summary>
/// Gets the maximum jitter buffer length in milliseconds.
/// Defaults to 300 (ms).
/// </summary>
- (int) jitterBufferMaxLength;
/// <summary>
/// Gets the encoding name for Opus packets.
/// </summary>
+ (NSString*) opusEncodingName;
/// <summary>
/// Gets the maximum number of
/// milliseconds that may elapse before
/// a delayed packet is sent.
/// Affects outgoing data only.
/// FOR TESTING PURPOSES ONLY.
/// Defaults to zero.
/// </summary>
- (int) outgoingDelayPacketMaximum;
/// <summary>
/// Gets the probability that an
/// outgoing packet should be delayed.
/// Affects outgoing data only.
/// FOR TESTING PURPOSES ONLY.
/// Defaults to zero.
/// </summary>
- (int) outgoingDelayPacketProbability;
/// <summary>
/// Gets the probability that an
/// outgoing packet should be dropped.
/// Affects outgoing data only.
/// FOR TESTING PURPOSES ONLY.
/// Defaults to zero.
/// </summary>
- (int) outgoingDropPacketProbability;
/// <summary>
/// Gets the encoding name for PCMA (G.711a) packets.
/// </summary>
+ (NSString*) pcmaEncodingName;
/// <summary>
/// Gets the static payload type for PCMA (G.711a) packets (8).
/// </summary>
+ (int) pcmaPayloadType;
/// <summary>
/// Gets the encoding name for PCMU (G.711u) packets.
/// </summary>
+ (NSString*) pcmuEncodingName;
/// <summary>
/// Gets the static payload type for PCMU (G.711u) packets (0).
/// </summary>
+ (int) pcmuPayloadType;
/// <summary>
/// Registers a non-preferred audio codec.
/// </summary>
/// <param name="encodingName">Name of the encoding.</param>
/// <param name="clockRate">The clock rate.</param>
/// <param name="channels">The number of channels.</param>
/// <param name="createCodec">The codec creation callback.</param>
+ (void) registerCodecWithEncodingName:(NSString*)encodingName clockRate:(int)clockRate channels:(int)channels createCodec:(FMCallback*)createCodec;
/// <summary>
/// Registers an audio codec.
/// </summary>
/// <param name="encodingName">Name of the encoding.</param>
/// <param name="clockRate">The clock rate.</param>
/// <param name="channels">The number of channels.</param>
/// <param name="createCodec">The codec creation callback.</param>
/// <param name="preferred">Whether to prefer the payload type in SDP offers.</param>
+ (void) registerCodecWithEncodingName:(NSString*)encodingName clockRate:(int)clockRate channels:(int)channels createCodec:(FMCallback*)createCodec preferred:(bool)preferred;
/// <summary>
/// Registers a non-preferred audio codec.
/// </summary>
/// <param name="encodingName">Name of the encoding.</param>
/// <param name="clockRate">The clock rate.</param>
/// <param name="channels">The number of channels.</param>
/// <param name="createCodec">The codec creation callback.</param>
+ (void) registerCodecWithEncodingName:(NSString*)encodingName clockRate:(int)clockRate channels:(int)channels createCodecBlock:(FMIceLinkWebRTCAudioCodec* (^) ())createCodecBlock;
/// <summary>
/// Registers an audio codec.
/// </summary>
/// <param name="encodingName">Name of the encoding.</param>
/// <param name="clockRate">The clock rate.</param>
/// <param name="channels">The number of channels.</param>
/// <param name="createCodec">The codec creation callback.</param>
/// <param name="preferred">Whether to prefer the payload type in SDP offers.</param>
+ (void) registerCodecWithEncodingName:(NSString*)encodingName clockRate:(int)clockRate channels:(int)channels createCodecBlock:(FMIceLinkWebRTCAudioCodec* (^) ())createCodecBlock preferred:(bool)preferred;
/// <summary>
/// Registers a non-preferred audio codec.
/// </summary>
/// <param name="encodingName">Name of the encoding.</param>
/// <param name="clockRate">The clock rate.</param>
/// <param name="channels">The number of channels.</param>
/// <param name="staticPayloadType">The static payload type.</param>
/// <param name="createCodec">The codec creation callback.</param>
+ (void) registerCodecWithEncodingName:(NSString*)encodingName clockRate:(int)clockRate channels:(int)channels staticPayloadType:(int)staticPayloadType createCodec:(FMCallback*)createCodec;
/// <summary>
/// Registers an audio codec.
/// </summary>
/// <param name="encodingName">Name of the encoding.</param>
/// <param name="clockRate">The clock rate.</param>
/// <param name="channels">The number of channels.</param>
/// <param name="staticPayloadType">The static payload type.</param>
/// <param name="createCodec">The codec creation callback.</param>
/// <param name="preferred">Whether to prefer the payload type in SDP offers.</param>
+ (void) registerCodecWithEncodingName:(NSString*)encodingName clockRate:(int)clockRate channels:(int)channels staticPayloadType:(int)staticPayloadType createCodec:(FMCallback*)createCodec preferred:(bool)preferred;
/// <summary>
/// Registers a non-preferred audio codec.
/// </summary>
/// <param name="encodingName">Name of the encoding.</param>
/// <param name="clockRate">The clock rate.</param>
/// <param name="channels">The number of channels.</param>
/// <param name="staticPayloadType">The static payload type.</param>
/// <param name="createCodec">The codec creation callback.</param>
+ (void) registerCodecWithEncodingName:(NSString*)encodingName clockRate:(int)clockRate channels:(int)channels staticPayloadType:(int)staticPayloadType createCodecBlock:(FMIceLinkWebRTCAudioCodec* (^) ())createCodecBlock;
/// <summary>
/// Registers an audio codec.
/// </summary>
/// <param name="encodingName">Name of the encoding.</param>
/// <param name="clockRate">The clock rate.</param>
/// <param name="channels">The number of channels.</param>
/// <param name="staticPayloadType">The static payload type.</param>
/// <param name="createCodec">The codec creation callback.</param>
/// <param name="preferred">Whether to prefer the payload type in SDP offers.</param>
+ (void) registerCodecWithEncodingName:(NSString*)encodingName clockRate:(int)clockRate channels:(int)channels staticPayloadType:(int)staticPayloadType createCodecBlock:(FMIceLinkWebRTCAudioCodec* (^) ())createCodecBlock preferred:(bool)preferred;
/// <summary>
/// Sets a flag indicating whether
/// encoding and decoding should be bypassed
/// for outgoing and incoming media packets.
/// </summary>
- (void) setBypassCodec:(bool)value;
/// <summary>
/// Sets a flag indicating whether
/// decoding should be bypassed
/// for incoming media packets.
/// </summary>
- (void) setBypassDecode:(bool)value;
/// <summary>
/// Sets a flag indicating whether
/// encoding should be bypassed
/// for outgoing media packets.
/// </summary>
- (void) setBypassEncode:(bool)value;
/// <summary>
/// Sets <see cref="FMIceLinkWebRTCAudioStream#outgoingDelayPacketMaximum" />.
/// Deprecated. Use <see cref="FMIceLinkWebRTCAudioStream#outgoingDelayPacketMaximum" />
/// or <see cref="FMIceLinkWebRTCAudioStream#incomingDelayPacketMaximum" /> instead.
/// </summary>
- (void) setDelayPacketMaximum:(int)value;
/// <summary>
/// Sets <see cref="FMIceLinkWebRTCAudioStream#outgoingDelayPacketProbability" />.
/// Deprecated. Use <see cref="FMIceLinkWebRTCAudioStream#outgoingDelayPacketProbability" />
/// or <see cref="FMIceLinkWebRTCAudioStream#incomingDelayPacketProbability" /> instead.
/// </summary>
- (void) setDelayPacketProbability:(int)value;
/// <summary>
/// Sets a value indicating whether
/// the jitter buffer should be disabled.
/// </summary>
- (void) setDisableJitterBuffer:(bool)value;
/// <summary>
/// Sets a flag indicating whether packet
/// loss concealment (PLC) should be disabled.
/// If set to true, extra packets will be added
/// to replace missing packets when the RTP
/// packet sequence is violated.
/// Defaults to false.
/// </summary>
- (void) setDisablePLC:(bool)value;
/// <summary>
/// Sets <see cref="FMIceLinkWebRTCAudioStream#outgoingDropPacketProbability" />.
/// Deprecated. Use <see cref="FMIceLinkWebRTCAudioStream#outgoingDropPacketProbability" />
/// or <see cref="FMIceLinkWebRTCAudioStream#incomingDropPacketProbability" /> instead.
/// </summary>
- (void) setDropPacketProbability:(int)value;
/// <summary>
/// Sets the maximum number of
/// milliseconds that may elapse before
/// a delayed packet is received.
/// Affects incoming data only.
/// FOR TESTING PURPOSES ONLY.
/// Defaults to zero.
/// </summary>
- (void) setIncomingDelayPacketMaximum:(int)value;
/// <summary>
/// Sets the probability that an
/// incoming packet should be delayed.
/// Affects incoming data only.
/// FOR TESTING PURPOSES ONLY.
/// Defaults to zero.
/// </summary>
- (void) setIncomingDelayPacketProbability:(int)value;
/// <summary>
/// Sets the probability that an
/// incoming packet should be dropped.
/// Affects incoming data only.
/// FOR TESTING PURPOSES ONLY.
/// Defaults to zero.
/// </summary>
- (void) setIncomingDropPacketProbability:(int)value;
/// <summary>
/// Sets the initial jitter buffer length in milliseconds.
/// Defaults to 100 (ms).
/// </summary>
- (void) setJitterBufferLength:(int)value;
/// <summary>
/// Sets the maximum jitter buffer length in milliseconds.
/// Defaults to 300 (ms).
/// </summary>
- (void) setJitterBufferMaxLength:(int)value;
/// <summary>
/// Sets the maximum number of
/// milliseconds that may elapse before
/// a delayed packet is sent.
/// Affects outgoing data only.
/// FOR TESTING PURPOSES ONLY.
/// Defaults to zero.
/// </summary>
- (void) setOutgoingDelayPacketMaximum:(int)value;
/// <summary>
/// Sets the probability that an
/// outgoing packet should be delayed.
/// Affects outgoing data only.
/// FOR TESTING PURPOSES ONLY.
/// Defaults to zero.
/// </summary>
- (void) setOutgoingDelayPacketProbability:(int)value;
/// <summary>
/// Sets the probability that an
/// outgoing packet should be dropped.
/// Affects outgoing data only.
/// FOR TESTING PURPOSES ONLY.
/// Defaults to zero.
/// </summary>
- (void) setOutgoingDropPacketProbability:(int)value;

@end


@class FMIceLinkWebRTCLayoutArgs;
@class FMIceLinkWebRTCLayoutCompleteArgs;
@class FMIceLinkUnhandledExceptionArgs;
@class FMCallback;
@class NSMutableDictionaryFMExtensions;
@class NSMutableArrayFMExtensions;
@class NSStringFMExtensions;
@class FMIceLinkWebRTCLayoutPreset;
@class FMIceLinkWebRTCLayout;

/// <summary>
/// A class that supplies simple video frame layout management.
/// </summary>
#pragma clang diagnostic ignored "-Wshorten-64-to-32"
#pragma clang diagnostic ignored "-Wint-to-pointer-cast"

@interface FMIceLinkWebRTCBaseLayoutManager : FMIceLinkWebRTCLayoutPreset 

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
/// Adds remote video controls to the layout.
/// </summary>
/// <param name="peerIds">The peer IDs.</param>
/// <param name="remoteVideoControls">The remote video controls.</param>
/// <returns><c>true</c> if successful; otherwise, <c>false</c>. Check the logs for additional information.</returns>
- (bool) addRemoteVideoControlsWithPeerIds:(NSMutableArray*)peerIds remoteVideoControls:(NSMutableArray*)remoteVideoControls;
/// <summary>
/// Adds a remote video control to the layout.
/// </summary>
/// <param name="peerId">The peer ID.</param>
/// <param name="remoteVideoControl">The remote video control.</param>
/// <returns><c>true</c> if successful; otherwise, <c>false</c>. Check the logs for additional information.</returns>
- (bool) addRemoteVideoControlWithPeerId:(NSString*)peerId remoteVideoControl:(NSObject*)remoteVideoControl;
/// <summary>
/// Adds a control to the container.
/// </summary>
/// <param name="control">The control to add.</param>
- (void) addToContainerWithControl:(NSObject*)control;
/// <summary>
/// Applies a layout to the container.
/// </summary>
- (void) applyLayout;
/// <summary>
/// Initializes a new instance of the <see cref="FMIceLinkWebRTCBaseLayoutManager" /> class.
/// </summary>
+ (FMIceLinkWebRTCBaseLayoutManager*) baseLayoutManager;
/// <summary>
/// Initializes a new instance of the <see cref="FMIceLinkWebRTCBaseLayoutManager" /> class.
/// </summary>
+ (FMIceLinkWebRTCBaseLayoutManager*) baseLayoutManagerWithPreset:(FMIceLinkWebRTCLayoutPreset*)preset;
/// <summary>
/// Lays out the controls.
/// </summary>
- (void) doLayout;
/// <summary>
/// Gets a video frame layout.
/// </summary>
/// <param name="layoutWidth">The total width of the layout.</param>
/// <param name="layoutHeight">The total height of the layout.</param>
/// <param name="remoteCount">The number of remote frames.</param>
/// <returns>The video frame layout.</returns>
- (FMIceLinkWebRTCLayout*) getLayoutWithLayoutWidth:(int)layoutWidth layoutHeight:(int)layoutHeight remoteCount:(int)remoteCount;
/// <summary>
/// Gets a video frame layout.
/// </summary>
/// <param name="layoutWidth">The total width of the layout.</param>
/// <param name="layoutHeight">The total height of the layout.</param>
/// <param name="remoteCount">The number of remote frames.</param>
/// <returns>The video frame layout.</returns>
- (FMIceLinkWebRTCLayout*) getLayoutWithWidth:(int)layoutWidth layoutHeight:(int)layoutHeight remoteCount:(int)remoteCount;
/// <summary>
/// Gets the local video control from the layout.
/// </summary>
/// <returns>The local video control.</returns>
- (NSObject*) getLocalVideoControl;
/// <summary>
/// Gets the IDs of peers with remote video controls in the layout.
/// </summary>
/// <returns>The peer IDs.</returns>
- (NSMutableArray*) getPeerIds;
/// <summary>
/// Gets all remote video controls from the layout.
/// </summary>
/// <returns>The remote video controls.</returns>
- (NSMutableArray*) getRemoteVideoControls;
/// <summary>
/// Gets remote video controls from the layout.
/// </summary>
/// <param name="peerIds">The peer IDs.</param>
/// <returns>The remote video controls.</returns>
- (NSMutableArray*) getRemoteVideoControlsWithPeerIds:(NSMutableArray*)peerIds;
/// <summary>
/// Gets a remote video control from the layout.
/// </summary>
/// <param name="peerId">The peer ID.</param>
/// <returns>The remote video control.</returns>
- (NSObject*) getRemoteVideoControlWithPeerId:(NSString*)peerId;
/// <summary>
/// Initializes a new instance of the <see cref="FMIceLinkWebRTCBaseLayoutManager" /> class.
/// </summary>
- (id) init;
/// <summary>
/// Initializes a new instance of the <see cref="FMIceLinkWebRTCBaseLayoutManager" /> class.
/// </summary>
- (id) initWithPreset:(FMIceLinkWebRTCLayoutPreset*)preset;
/// <summary>
/// Gets the layout origin.
/// Defaults to <see cref="FMIceLinkWebRTCLayoutOriginTopLeft" />.
/// </summary>
- (FMIceLinkWebRTCLayoutOrigin) layoutOrigin;
/// <summary>
/// Gets a callback to invoke when a layout
/// is calculated. Allows custom algorithms to modify
/// the default layout.
/// </summary>
- (FMCallback*) onLayout;
/// <summary>
/// Gets a callback to invoke when a layout
/// is calculated. Allows custom algorithms to modify
/// the default layout.
/// </summary>
- (FMCallback*) onLayoutComplete;
/// <summary>
/// Removes a control from the container.
/// </summary>
/// <param name="control">The control to remove.</param>
- (void) removeFromContainerWithControl:(NSObject*)control;
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
/// Removes all remote video controls from the layout.
/// </summary>
- (void) removeRemoteVideoControls;
/// <summary>
/// Removes remote video controls from the layout.
/// </summary>
/// <param name="peerIds">The peer IDs.</param>
/// <returns><c>true</c> if successful; otherwise, <c>false</c>. Check the logs for additional information.</returns>
- (bool) removeRemoteVideoControlsWithPeerIds:(NSMutableArray*)peerIds;
/// <summary>
/// Removes a remote video control from the layout.
/// </summary>
/// <param name="peerId">The peer ID.</param>
/// <returns><c>true</c> if successful; otherwise, <c>false</c>. Check the logs for additional information.</returns>
- (bool) removeRemoteVideoControlWithPeerId:(NSString*)peerId;
/// <summary>
/// Removes all remote video controls from the layout,
/// then removes the local video control from the layout.
/// </summary>
- (void) reset;
/// <summary>
/// Runs an action on the main/UI thread.
/// </summary>
/// <param name="action">The action to invoke.</param>
/// <param name="arg1">The first argument.</param>
/// <param name="arg2">The second argument.</param>
- (void) runOnUIThreadWithAction:(FMCallback*)action arg1:(NSObject*)arg1 arg2:(NSObject*)arg2;
/// <summary>
/// Runs an action on the main/UI thread.
/// </summary>
/// <param name="action">The action to invoke.</param>
/// <param name="arg1">The first argument.</param>
/// <param name="arg2">The second argument.</param>
- (void) runOnUIThreadWithActionBlock:(void (^) (NSObject*, NSObject*))actionBlock arg1:(NSObject*)arg1 arg2:(NSObject*)arg2;
/// <summary>
/// Sets the layout origin.
/// Defaults to <see cref="FMIceLinkWebRTCLayoutOriginTopLeft" />.
/// </summary>
- (void) setLayoutOrigin:(FMIceLinkWebRTCLayoutOrigin)value;
/// <summary>
/// Adds the local video control to the layout.
/// </summary>
/// <param name="localVideoControl">The local video control.</param>
/// <returns><c>true</c> if successful; otherwise, <c>false</c>. Check the logs for additional information.</returns>
- (bool) setLocalVideoControlWithLocalVideoControl:(NSObject*)localVideoControl;
/// <summary>
/// Adds the local video control to the layout.
/// </summary>
/// <param name="localVideoControl">The local video control.</param>
/// <returns><c>true</c> if successful; otherwise, <c>false</c>. Check the logs for additional information.</returns>
- (bool) setLocalVideoControl:(NSObject*)localVideoControl;
/// <summary>
/// Sets a callback to invoke when a layout
/// is calculated. Allows custom algorithms to modify
/// the default layout.
/// </summary>
- (void) setOnLayout:(FMCallback*)value;
/// <summary>
/// Sets a callback to invoke when a layout
/// is calculated. Allows custom algorithms to modify
/// the default layout.
/// </summary>
- (void) setOnLayoutBlock:(void (^) (FMIceLinkWebRTCLayoutArgs*))valueBlock;
/// <summary>
/// Sets a callback to invoke when a layout
/// is calculated. Allows custom algorithms to modify
/// the default layout.
/// </summary>
- (void) setOnLayoutComplete:(FMCallback*)value;
/// <summary>
/// Sets a callback to invoke when a layout
/// is calculated. Allows custom algorithms to modify
/// the default layout.
/// </summary>
- (void) setOnLayoutCompleteBlock:(void (^) (FMIceLinkWebRTCLayoutCompleteArgs*))valueBlock;
/// <summary>
/// Removes the local video control from the layout.
/// </summary>
/// <returns><c>true</c> if successful; otherwise, <c>false</c>. Check the logs for additional information.</returns>
- (bool) unsetLocalVideoControl;

@end


@class NSStringFMExtensions;

/// <summary>
/// A data channel buffer.
/// </summary>
#pragma clang diagnostic ignored "-Wshorten-64-to-32"
#pragma clang diagnostic ignored "-Wint-to-pointer-cast"

@interface FMIceLinkWebRTCDataChannelBuffer : FMDynamic 

/// <summary>
/// Gets the data.
/// </summary>
- (NSString*) data;
/// <summary>
/// Initializes a new instance of the <see cref="FMIceLinkWebRTCDataChannelBuffer" /> class.
/// </summary>
/// <param name="data">The buffer data.</param>
/// <param name="synchronizationSource">The synchronization source (SSRC).</param>
+ (FMIceLinkWebRTCDataChannelBuffer*) dataChannelBufferWithData:(NSString*)data synchronizationSource:(long long)synchronizationSource;
/// <summary>
/// Initializes a new instance of the <see cref="FMIceLinkWebRTCDataChannelBuffer" /> class.
/// </summary>
/// <param name="data">The buffer data.</param>
/// <param name="synchronizationSource">The synchronization source (SSRC).</param>
- (id) initWithData:(NSString*)data synchronizationSource:(long long)synchronizationSource;
/// <summary>
/// Sets the data.
/// </summary>
- (void) setData:(NSString*)value;
/// <summary>
/// Sets the synchronization source (SSRC).
/// </summary>
- (void) setSynchronizationSource:(long long)value;
/// <summary>
/// Gets the synchronization source (SSRC).
/// </summary>
- (long long) synchronizationSource;

@end


@class FMNullableInt;
@class FMIceLinkWebRTCLocalMediaStream;
@class NSStringFMExtensions;

/// <summary>
/// Arguments for audio capture initialization.
/// </summary>
#pragma clang diagnostic ignored "-Wshorten-64-to-32"
#pragma clang diagnostic ignored "-Wint-to-pointer-cast"

@interface FMIceLinkWebRTCAudioCaptureInitializeArgs : FMSerializable 

+ (FMIceLinkWebRTCAudioCaptureInitializeArgs*) audioCaptureInitializeArgs;
/// <summary>
/// Gets the capture channel count.
/// </summary>
- (int) channels;
/// <summary>
/// Gets the capture sample rate.
/// </summary>
- (int) clockRate;
/// <summary>
/// Gets the desired device number.
/// Defaults to null (no preference).
/// </summary>
- (FMNullableInt*) deviceNumber;
/// <summary>
/// Deserializes an instance from JSON.
/// </summary>
/// <returns></returns>
+ (FMIceLinkWebRTCAudioCaptureInitializeArgs*) fromJsonWithInitializeArgsJson:(NSString*)initializeArgsJson;
- (id) init;
/// <summary>
/// Gets the local media stream.
/// </summary>
- (FMIceLinkWebRTCLocalMediaStream*) localStream;
/// <summary>
/// Sets the capture channel count.
/// </summary>
- (void) setChannels:(int)value;
/// <summary>
/// Sets the capture sample rate.
/// </summary>
- (void) setClockRate:(int)value;
/// <summary>
/// Sets the desired device number.
/// Defaults to null (no preference).
/// </summary>
- (void) setDeviceNumber:(FMNullableInt*)value;
/// <summary>
/// Sets the local media stream.
/// </summary>
- (void) setLocalStream:(FMIceLinkWebRTCLocalMediaStream*)value;
/// <summary>
/// Sets whether video is being captured as well.
/// </summary>
- (void) setVideo:(bool)value;
/// <summary>
/// Sets the desired video clock rate.
/// </summary>
- (void) setVideoClockRate:(int)value;
/// <summary>
/// Sets the desired video device number.
/// Defaults to null (no preference).
/// </summary>
- (void) setVideoDeviceNumber:(FMNullableInt*)value;
/// <summary>
/// Sets the desired video frame rate.
/// </summary>
- (void) setVideoFrameRate:(int)value;
/// <summary>
/// Sets the desired video frame height.
/// </summary>
- (void) setVideoHeight:(int)value;
/// <summary>
/// Sets the desired video frame width.
/// </summary>
- (void) setVideoWidth:(int)value;
/// <summary>
/// Serializes this instance to JSON.
/// </summary>
/// <returns></returns>
- (NSString*) toJson;
/// <summary>
/// Serializes an instance to JSON.
/// </summary>
/// <returns></returns>
+ (NSString*) toJsonWithAudioCaptureInitializeArgs:(FMIceLinkWebRTCAudioCaptureInitializeArgs*)audioCaptureInitializeArgs;
/// <summary>
/// Gets whether video is being captured as well.
/// </summary>
- (bool) video;
/// <summary>
/// Gets the desired video clock rate.
/// </summary>
- (int) videoClockRate;
/// <summary>
/// Gets the desired video device number.
/// Defaults to null (no preference).
/// </summary>
- (FMNullableInt*) videoDeviceNumber;
/// <summary>
/// Gets the desired video frame rate.
/// </summary>
- (int) videoFrameRate;
/// <summary>
/// Gets the desired video frame height.
/// </summary>
- (int) videoHeight;
/// <summary>
/// Gets the desired video frame width.
/// </summary>
- (int) videoWidth;

@end



/// <summary>
/// Arguments for data channel capture initialization.
/// </summary>
#pragma clang diagnostic ignored "-Wshorten-64-to-32"
#pragma clang diagnostic ignored "-Wint-to-pointer-cast"

@interface FMIceLinkWebRTCDataChannelCaptureInitializeArgs : NSObject 

/// <summary>
/// Gets the capture clock rate.
/// </summary>
- (int) clockRate;
+ (FMIceLinkWebRTCDataChannelCaptureInitializeArgs*) dataChannelCaptureInitializeArgs;
- (id) init;
/// <summary>
/// Sets the capture clock rate.
/// </summary>
- (void) setClockRate:(int)value;

@end


@class FMIceLinkWebRTCDataChannelBuffer;
@class FMCallback;
@class NSStringFMExtensions;
@class FMIceLinkWebRTCDataChannelCaptureInitializeArgs;

#pragma clang diagnostic ignored "-Wshorten-64-to-32"
#pragma clang diagnostic ignored "-Wint-to-pointer-cast"

@interface FMIceLinkWebRTCDataChannelCaptureProvider : FMIceLinkWebRTCCaptureProvider 

- (FMCallback*) addOnFrameWithValue:(FMCallback*)value;
- (FMCallback*) addOnFrame:(FMCallback*)value;
- (FMCallback*) addOnFrameWithValueBlock:(void (^) (FMIceLinkWebRTCDataChannelCaptureProvider*, FMIceLinkWebRTCDataChannelBuffer*))valueBlock;
- (FMCallback*) addOnFrameBlock:(void (^) (FMIceLinkWebRTCDataChannelCaptureProvider*, FMIceLinkWebRTCDataChannelBuffer*))valueBlock;
+ (FMIceLinkWebRTCDataChannelCaptureProvider*) dataChannelCaptureProvider;
- (void) destroy;
- (bool) destroyInternal;
- (NSString*) getLabel;
- (id) init;
- (bool) initializeInternalWithCaptureArgs:(FMIceLinkWebRTCDataChannelCaptureInitializeArgs*)captureArgs;
- (void) initializeWithCaptureArgs:(FMIceLinkWebRTCDataChannelCaptureInitializeArgs*)captureArgs;
- (bool) isDestroyed;
- (bool) isInitialized;
- (bool) isRunning;
- (void) raiseFrameWithBuffer:(FMIceLinkWebRTCDataChannelBuffer*)buffer;
- (void) removeOnFrameWithValue:(FMCallback*)value;
- (void) removeOnFrame:(FMCallback*)value;
- (void) start;
- (bool) startInternal;
- (void) stop;
- (bool) stopInternal;

@end


@class NSMutableDictionaryFMExtensions;
@class NSMutableArrayFMExtensions;
@class FMIceLinkLink;
@class FMCallback;
@class FMIceLinkWebRTCRemoteDataChannelRenderProvider;
@class NSStringFMExtensions;
@class FMIceLinkWebRTCDataChannelCaptureInitializeArgs;

#pragma clang diagnostic ignored "-Wshorten-64-to-32"
#pragma clang diagnostic ignored "-Wint-to-pointer-cast"

@interface FMIceLinkWebRTCRemoteDataChannelCaptureProvider : FMIceLinkWebRTCDataChannelCaptureProvider 

- (NSMutableArray*) codecs;
- (void) destroy;
- (NSString*) getLabel;
- (void) initializeWithCaptureArgs:(FMIceLinkWebRTCDataChannelCaptureInitializeArgs*)captureArgs;
- (id) initWithLink:(FMIceLinkLink*)link streamIndex:(int)streamIndex codecs:(NSMutableArray*)codecs renderProvider:(FMIceLinkWebRTCRemoteDataChannelRenderProvider*)renderProvider;
- (FMIceLinkLink*) link;
+ (FMIceLinkWebRTCRemoteDataChannelCaptureProvider*) remoteDataChannelCaptureProviderWithLink:(FMIceLinkLink*)link streamIndex:(int)streamIndex codecs:(NSMutableArray*)codecs renderProvider:(FMIceLinkWebRTCRemoteDataChannelRenderProvider*)renderProvider;
- (FMIceLinkWebRTCRemoteDataChannelRenderProvider*) renderProvider;
- (void) start;
- (void) stop;
- (int) streamIndex;

@end


@class NSMutableDataFMExtensions;
@class FMIceLinkRTPPacket;
@class NSMutableArrayFMExtensions;

/// <summary>
/// An implementation of a basic data channel packetizer/depacketizer
/// that maps each frame to an RTP packet.
/// </summary>
#pragma clang diagnostic ignored "-Wshorten-64-to-32"
#pragma clang diagnostic ignored "-Wint-to-pointer-cast"

@interface FMIceLinkWebRTCBasicDataChannelPadep : FMIceLinkWebRTCDataChannelPadep 

+ (FMIceLinkWebRTCBasicDataChannelPadep*) basicDataChannelPadep;
/// <summary>
/// Depacketizes a packet.
/// </summary>
/// <param name="packet">The packet.</param>
/// <returns></returns>
- (NSMutableData*) depacketizeWithPacket:(FMIceLinkRTPPacket*)packet;
- (id) init;
/// <summary>
/// Packetizes an encoded frame.
/// </summary>
/// <param name="encodedFrame">The encoded frame.</param>
/// <param name="clockRate">The clock rate.</param>
/// <returns></returns>
- (NSMutableArray*) packetizeWithEncodedFrame:(NSMutableData*)encodedFrame clockRate:(int)clockRate;

@end


@class NSStringFMExtensions;
@class FMIceLinkWebRTCDataChannelBuffer;
@class NSMutableDataFMExtensions;
@class FMIceLinkRTPPacket;
@class FMIceLinkConference;
@class FMIceLinkLink;
@class NSMutableArrayFMExtensions;

/// <summary>
/// Abstract definition of a data channel encoder/decoder.
/// </summary>
#pragma clang diagnostic ignored "-Wshorten-64-to-32"
#pragma clang diagnostic ignored "-Wint-to-pointer-cast"

@interface FMIceLinkWebRTCDataChannelCodec : FMIceLinkWebRTCCodec 

/// <summary>
/// Gets a unique key for a given encoding name and clock rate.
/// </summary>
/// <param name="encodingName">The encoding name.</param>
/// <param name="clockRate">The clock rate.</param>
/// <returns>A unique key.</returns>
+ (NSString*) createKeyWithEncodingName:(NSString*)encodingName clockRate:(int)clockRate;
+ (FMIceLinkWebRTCDataChannelCodec*) dataChannelCodec;
- (FMIceLinkWebRTCDataChannelBuffer*) decodeInternalWithEncodedFrame:(NSMutableData*)encodedFrame packet:(FMIceLinkRTPPacket*)packet;
/// <summary>
/// Decodes an encoded frame.
/// </summary>
/// <param name="encodedFrame">The encoded frame.</param>
/// <param name="packet">The packet.</param>
/// <returns></returns>
- (FMIceLinkWebRTCDataChannelBuffer*) decodeWithEncodedFrame:(NSMutableData*)encodedFrame packet:(FMIceLinkRTPPacket*)packet;
/// <summary>
/// Depacketizes a packet.
/// </summary>
/// <param name="packet">The packet.</param>
/// <returns></returns>
- (NSMutableData*) depacketizeWithPacket:(FMIceLinkRTPPacket*)packet;
- (NSMutableData*) encodeInternalWithFrame:(FMIceLinkWebRTCDataChannelBuffer*)frame;
/// <summary>
/// Encodes a frame.
/// </summary>
/// <param name="frame">The frame.</param>
/// <returns></returns>
- (NSMutableData*) encodeWithFrame:(FMIceLinkWebRTCDataChannelBuffer*)frame;
/// <summary>
/// Gets the number of extra bytes added to the encoded data.
/// </summary>
/// <returns></returns>
- (int) getExtraByteCount;
- (id) init;
/// <summary>
/// Initializes the codec.
/// </summary>
/// <param name="usage">The codec usage.</param>
/// <param name="conference">The conference.</param>
/// <param name="link">The link.</param>
/// <param name="peerId">The ID of the remote peer (or null).</param>
/// <param name="peerState">Custom state associated with the remote peer (or null).</param>
/// <param name="encodingName">The encoding name, as defined in SDP.</param>
/// <returns><c>true</c> if initialized; <c>false</c> if previously initialized.</returns>
- (bool) initializeWithUsage:(FMIceLinkWebRTCCodecUsage)usage conference:(FMIceLinkConference*)conference link:(FMIceLinkLink*)link peerId:(NSString*)peerId peerState:(NSObject*)peerState encodingName:(NSString*)encodingName;
/// <summary>
/// Initializes the codec.
/// </summary>
/// <param name="usage">The codec usage.</param>
/// <param name="conference">The conference.</param>
/// <param name="link">The link.</param>
/// <param name="peerId">The ID of the remote peer (or null).</param>
/// <param name="peerState">Custom state associated with the remote peer (or null).</param>
/// <param name="encodingName">The encoding name, as defined in SDP.</param>
/// <param name="clockRate">The clock rate.</param>
/// <returns><c>true</c> if initialized; <c>false</c> if previously initialized.</returns>
- (bool) initializeWithUsage:(FMIceLinkWebRTCCodecUsage)usage conference:(FMIceLinkConference*)conference link:(FMIceLinkLink*)link peerId:(NSString*)peerId peerState:(NSObject*)peerState encodingName:(NSString*)encodingName clockRate:(int)clockRate;
/// <summary>
/// Gets the key used to identify this data channel codec.
/// </summary>
- (NSString*) key;
/// <summary>
/// Packetizes an encoded frame.
/// </summary>
/// <param name="encodedFrame">The encoded frame.</param>
/// <param name="frame">The frame.</param>
/// <returns></returns>
- (NSMutableArray*) packetizeWithEncodedFrame:(NSMutableData*)encodedFrame frame:(FMIceLinkWebRTCDataChannelBuffer*)frame;
/// <summary>
/// Returns a string that represents this instance.
/// </summary>
- (NSString*) toString;
/// <summary>
/// Returns a string that represents this instance.
/// </summary>
- (NSString*) description;

@end


@class FMIceLinkWebRTCGoogleDataPadep;
@class FMIceLinkWebRTCDataChannelBuffer;
@class NSMutableDataFMExtensions;
@class FMIceLinkRTPPacket;
@class NSMutableArrayFMExtensions;

/// <summary>
/// An implementation of a Google-Data encoder/decoder.
/// </summary>
#pragma clang diagnostic ignored "-Wshorten-64-to-32"
#pragma clang diagnostic ignored "-Wint-to-pointer-cast"

@interface FMIceLinkWebRTCGoogleDataCodec : FMIceLinkWebRTCDataChannelCodec 

/// <summary>
/// Decodes an encoded frame.
/// </summary>
/// <param name="encodedFrame">The encoded frame.</param>
/// <param name="packet">The packet.</param>
/// <returns></returns>
- (FMIceLinkWebRTCDataChannelBuffer*) decodeWithEncodedFrame:(NSMutableData*)encodedFrame packet:(FMIceLinkRTPPacket*)packet;
/// <summary>
/// Depacketizes a packet.
/// </summary>
/// <param name="packet">The packet.</param>
/// <returns></returns>
- (NSMutableData*) depacketizeWithPacket:(FMIceLinkRTPPacket*)packet;
/// <summary>
/// Destroys the codec.
/// </summary>
- (void) destroy;
/// <summary>
/// Encodes a frame.
/// </summary>
/// <param name="frame">The frame.</param>
/// <returns></returns>
- (NSMutableData*) encodeWithFrame:(FMIceLinkWebRTCDataChannelBuffer*)frame;
/// <summary>
/// Gets the number of extra bytes added to the encoded data.
/// </summary>
/// <returns></returns>
- (int) getExtraByteCount;
/// <summary>
/// Initializes a new instance of the <see cref="FMIceLinkWebRTCGoogleDataCodec" /> class.
/// </summary>
+ (FMIceLinkWebRTCGoogleDataCodec*) googleDataCodec;
/// <summary>
/// Initializes a new instance of the <see cref="FMIceLinkWebRTCGoogleDataCodec" /> class.
/// </summary>
- (id) init;
/// <summary>
/// Packetizes an encoded frame.
/// </summary>
/// <param name="encodedFrame">The encoded frame.</param>
/// <param name="frame">The frame.</param>
/// <returns></returns>
- (NSMutableArray*) packetizeWithEncodedFrame:(NSMutableData*)encodedFrame frame:(FMIceLinkWebRTCDataChannelBuffer*)frame;
/// <summary>
/// Processes RTCP packets.
/// </summary>
/// <param name="packets">The packets to process.</param>
- (void) processRTCPWithPackets:(NSMutableArray*)packets;

@end


@class NSMutableDataFMExtensions;
@class NSMutableArrayFMExtensions;

/// <summary>
/// RFC-2435 implementation of a JPEG packet for network transport.
/// </summary>
#pragma clang diagnostic ignored "-Wshorten-64-to-32"
#pragma clang diagnostic ignored "-Wint-to-pointer-cast"

@interface FMIceLinkWebRTCJpegPacket : NSObject 

/// <summary>
/// Depacketizes the specified packets into a single encoded data frame.
/// </summary>
/// <param name="packets">The packets.</param>
/// <returns></returns>
+ (NSMutableData*) depacketizeWithPackets:(NSMutableArray*)packets;
/// <summary>
/// Gets the fragment offset.
/// 24 bits. The Fragment Offset is the offset in bytes of the current packet in
/// the JPEG frame data. This value is encoded in network byte order
/// (most significant byte first). The Fragment Offset plus the length of
/// the payload data in the packet MUST NOT exceed 2^24 bytes.
/// </summary>
- (int) fragmentOffset;
/// <summary>
/// Gets the packet as a byte array.
/// </summary>
/// <returns></returns>
- (NSMutableData*) getBytes;
/// <summary>
/// Gets the image height.
/// </summary>
- (int) height;
/// <summary>
/// Gets the height / 8.
/// 8 bits. This field encodes the height of the image in 8-pixel multiples
/// (e.g., a height of 30 denotes an image 240 pixels tall). When
/// encoding interlaced video, this is the height of a video field, since
/// fields are individually JPEG encoded. The maximum height is 2040
/// pixels.
/// </summary>
- (uint8_t) heightByte;
- (id) init;
+ (FMIceLinkWebRTCJpegPacket*) jpegPacket;
/// <summary>
/// Packetizes a single encoded data frame into multiple JPEG packets.
/// </summary>
/// <param name="encodedData">The encoded data.</param>
/// <returns></returns>
+ (NSMutableArray*) packetizeWithEncodedData:(NSMutableData*)encodedData;
/// <summary>
/// Parses the specified packet bytes.
/// </summary>
/// <param name="packetBytes">The packet bytes.</param>
/// <returns></returns>
+ (FMIceLinkWebRTCJpegPacket*) parseWithPacketBytes:(NSMutableData*)packetBytes;
/// <summary>
/// Gets the data payload.
/// </summary>
- (NSMutableData*) payload;
/// <summary>
/// Gets the quantization tables definition.
/// 8 bits. The Q field defines the quantization tables for this frame.  Q values
/// 0-127 indicate the quantization tables are computed using an
/// algorithm determined by the Type field (see below).  Q values 128-255
/// indicate that a Quantization Table header appears after the main JPEG
/// header (and the Restart Marker header, if present) in the first
/// packet of the frame (fragment offset 0).  This header can be used to
/// explicitly specify the quantization tables in-band.
/// </summary>
- (uint8_t) q;
/// <summary>
/// Sets the fragment offset.
/// 24 bits. The Fragment Offset is the offset in bytes of the current packet in
/// the JPEG frame data. This value is encoded in network byte order
/// (most significant byte first). The Fragment Offset plus the length of
/// the payload data in the packet MUST NOT exceed 2^24 bytes.
/// </summary>
- (void) setFragmentOffset:(int)value;
/// <summary>
/// Sets the image height.
/// </summary>
- (void) setHeight:(int)value;
/// <summary>
/// Sets the height / 8.
/// 8 bits. This field encodes the height of the image in 8-pixel multiples
/// (e.g., a height of 30 denotes an image 240 pixels tall). When
/// encoding interlaced video, this is the height of a video field, since
/// fields are individually JPEG encoded. The maximum height is 2040
/// pixels.
/// </summary>
- (void) setHeightByte:(uint8_t)value;
/// <summary>
/// Sets the quantization tables definition.
/// 8 bits. The Q field defines the quantization tables for this frame.  Q values
/// 0-127 indicate the quantization tables are computed using an
/// algorithm determined by the Type field (see below).  Q values 128-255
/// indicate that a Quantization Table header appears after the main JPEG
/// header (and the Restart Marker header, if present) in the first
/// packet of the frame (fragment offset 0).  This header can be used to
/// explicitly specify the quantization tables in-band.
/// </summary>
- (void) setQ:(uint8_t)value;
/// <summary>
/// Sets the type.
/// 8 bits The type field specifies the information that would otherwise be
/// present in a JPEG abbreviated table-specification as well as the
/// additional JFIF-style parameters not defined by JPEG.  Types 0-63 are
/// reserved as fixed, well-known mappings to be defined by this document
/// and future revisions of this document.  Types 64-127 are the same as
/// types 0-63, except that restart markers are present in the JPEG data
/// and a Restart Marker header appears immediately following the main
/// JPEG header.  Types 128-255 are free to be dynamically defined by a
/// session setup protocol (which is beyond the scope of this document).
/// </summary>
- (void) setType:(uint8_t)value;
/// <summary>
/// Sets type-specific data.
/// 8 bits. Interpretation depends on the value of the type field.  If no
/// interpretation is specified, this field MUST be zeroed on
/// transmission and ignored on reception.
/// </summary>
- (void) setTypeSpecific:(uint8_t)value;
/// <summary>
/// Sets the image width.
/// </summary>
- (void) setWidth:(int)value;
/// <summary>
/// Sets the width / 8.
/// 8 bits. This field encodes the width of the image in 8-pixel multiples (e.g.,
/// a width of 40 denotes an image 320 pixels wide).  The maximum width
/// is 2040 pixels.
/// </summary>
- (void) setWidthByte:(uint8_t)value;
/// <summary>
/// Gets the type.
/// 8 bits The type field specifies the information that would otherwise be
/// present in a JPEG abbreviated table-specification as well as the
/// additional JFIF-style parameters not defined by JPEG.  Types 0-63 are
/// reserved as fixed, well-known mappings to be defined by this document
/// and future revisions of this document.  Types 64-127 are the same as
/// types 0-63, except that restart markers are present in the JPEG data
/// and a Restart Marker header appears immediately following the main
/// JPEG header.  Types 128-255 are free to be dynamically defined by a
/// session setup protocol (which is beyond the scope of this document).
/// </summary>
- (uint8_t) type;
/// <summary>
/// Gets type-specific data.
/// 8 bits. Interpretation depends on the value of the type field.  If no
/// interpretation is specified, this field MUST be zeroed on
/// transmission and ignored on reception.
/// </summary>
- (uint8_t) typeSpecific;
/// <summary>
/// Gets the image width.
/// </summary>
- (int) width;
/// <summary>
/// Gets the width / 8.
/// 8 bits. This field encodes the width of the image in 8-pixel multiples (e.g.,
/// a width of 40 denotes an image 320 pixels wide).  The maximum width
/// is 2040 pixels.
/// </summary>
- (uint8_t) widthByte;

@end


@class FMIceLinkWebRTCJpegAccumulator;
@class NSMutableDataFMExtensions;
@class FMIceLinkRTPPacket;
@class NSMutableArrayFMExtensions;

/// <summary>
/// An implementation of a JPEG packetizer/depacketizer.
/// </summary>
#pragma clang diagnostic ignored "-Wshorten-64-to-32"
#pragma clang diagnostic ignored "-Wint-to-pointer-cast"

@interface FMIceLinkWebRTCJpegPadep : FMIceLinkWebRTCVideoPadep 

/// <summary>
/// Depacketizes a packet.
/// </summary>
/// <param name="packet">The packet.</param>
/// <returns></returns>
- (NSMutableData*) depacketizeWithPacket:(FMIceLinkRTPPacket*)packet;
- (id) init;
+ (FMIceLinkWebRTCJpegPadep*) jpegPadep;
/// <summary>
/// Packetizes an encoded frame.
/// </summary>
/// <param name="encodedFrame">The encoded frame.</param>
/// <param name="clockRate">The clock rate.</param>
/// <returns></returns>
- (NSMutableArray*) packetizeWithEncodedFrame:(NSMutableData*)encodedFrame clockRate:(int)clockRate;

@end


@class NSMutableArrayFMExtensions;
@class FMIceLinkWebRTCJpegPacket;

/// <summary>
/// Accumulates incoming JPEG packets.
/// </summary>
#pragma clang diagnostic ignored "-Wshorten-64-to-32"
#pragma clang diagnostic ignored "-Wint-to-pointer-cast"

@interface FMIceLinkWebRTCJpegAccumulator : NSObject 

/// <summary>
/// Adds the specified packet.
/// </summary>
/// <param name="packet">The packet.</param>
- (void) addWithPacket:(FMIceLinkWebRTCJpegPacket*)packet;
- (id) init;
+ (FMIceLinkWebRTCJpegAccumulator*) jpegAccumulator;
/// <summary>
/// Gets the packets.
/// </summary>
- (NSMutableArray*) packets;
/// <summary>
/// Resets this instance, clearing out any accumulated packets.
/// </summary>
- (void) reset;

@end


@class NSMutableDataFMExtensions;

/// <summary>
/// A VP8 packet fragment.
/// </summary>
#pragma clang diagnostic ignored "-Wshorten-64-to-32"
#pragma clang diagnostic ignored "-Wint-to-pointer-cast"

@interface FMIceLinkWebRTCVp8Fragment : NSObject 

/// <summary>
/// Gets the data.
/// </summary>
- (NSMutableData*) data;
/// <summary>
/// Gets whether this is the first packet.
/// </summary>
- (bool) first;
- (id) init;
/// <summary>
/// Gets whether this is the last packet.
/// </summary>
- (bool) last;
/// <summary>
/// Gets the RTP sequence number.
/// </summary>
- (long long) sequenceNumber;
/// <summary>
/// Sets the data.
/// </summary>
- (void) setData:(NSMutableData*)value;
/// <summary>
/// Sets whether this is the first packet.
/// </summary>
- (void) setFirst:(bool)value;
/// <summary>
/// Sets whether this is the last packet.
/// </summary>
- (void) setLast:(bool)value;
/// <summary>
/// Sets the RTP sequence number.
/// </summary>
- (void) setSequenceNumber:(long long)value;
+ (FMIceLinkWebRTCVp8Fragment*) vp8Fragment;

@end


@class NSMutableArrayFMExtensions;
@class FMIceLinkWebRTCVp8Fragment;
@class NSMutableDataFMExtensions;

/// <summary>
/// A fragmented VP8 packet.
/// </summary>
#pragma clang diagnostic ignored "-Wshorten-64-to-32"
#pragma clang diagnostic ignored "-Wint-to-pointer-cast"

@interface FMIceLinkWebRTCVp8FragmentedPacket : NSObject 

/// <summary>
/// Adds the specified fragment.
/// </summary>
/// <param name="fragment">The fragment.</param>
- (void) addWithFragment:(FMIceLinkWebRTCVp8Fragment*)fragment;
/// <summary>
/// Assembles the fragments.
/// </summary>
/// <returns></returns>
- (NSMutableData*) assemble;
/// <summary>
/// Increases the age of the fragmented packet.
/// </summary>
- (void) increaseAge;
/// <summary>
/// Initializes a new instance of the <see cref="FMIceLinkWebRTCVp8FragmentedPacket" /> class.
/// </summary>
/// <param name="fragment">The first fragment.</param>
- (id) initWithFragment:(FMIceLinkWebRTCVp8Fragment*)fragment;
/// <summary>
/// Gets a value indicating whether the fragments have aged.
/// </summary>
- (bool) isAged;
/// <summary>
/// Gets whether the fragments are ready for assembly.
/// </summary>
- (bool) isComplete;
/// <summary>
/// Gets the maximum age (defaults to 2).
/// </summary>
+ (int) maxAge;
/// <summary>
/// Sets the maximum age (defaults to 2).
/// </summary>
+ (void) setMaxAge:(int)value;
/// <summary>
/// Initializes a new instance of the <see cref="FMIceLinkWebRTCVp8FragmentedPacket" /> class.
/// </summary>
/// <param name="fragment">The first fragment.</param>
+ (FMIceLinkWebRTCVp8FragmentedPacket*) vp8FragmentedPacketWithFragment:(FMIceLinkWebRTCVp8Fragment*)fragment;

@end


@class NSMutableDictionaryFMExtensions;
@class NSMutableDataFMExtensions;
@class FMIceLinkRTPPacket;

/// <summary>
/// Accumulates incoming VP8 packets.
/// </summary>
#pragma clang diagnostic ignored "-Wshorten-64-to-32"
#pragma clang diagnostic ignored "-Wint-to-pointer-cast"

@interface FMIceLinkWebRTCVp8Accumulator : NSObject 

/// <summary>
/// Adds the specified packet.
/// </summary>
/// <param name="rtpPacket">The RTP packet.</param>
/// <returns></returns>
- (NSMutableData*) addWithRtpPacket:(FMIceLinkRTPPacket*)rtpPacket;
/// <summary>
/// Clears packets missing fragments.
/// </summary>
/// <returns>The number of cleared packets.</returns>
- (int) clearAged;
- (id) init;
+ (FMIceLinkWebRTCVp8Accumulator*) vp8Accumulator;

@end


@class NSMutableDataFMExtensions;
@class NSMutableArrayFMExtensions;

/// <summary>
/// A VP8 packet for RTP.
/// </summary>
#pragma clang diagnostic ignored "-Wshorten-64-to-32"
#pragma clang diagnostic ignored "-Wint-to-pointer-cast"

@interface FMIceLinkWebRTCVp8Packet : NSObject 

/// <summary>
/// Depacketizes the specified packets into a single encoded data frame.
/// </summary>
/// <param name="packets">The packets.</param>
/// <returns></returns>
+ (NSMutableData*) depacketizeWithPackets:(NSMutableArray*)packets;
/// <summary>
/// Gets whether extended control bits are present.
/// </summary>
- (bool) extendedControlBitsPresent;
/// <summary>
/// Gets the packet as a byte array.
/// </summary>
/// <returns></returns>
- (NSMutableData*) getBytes;
/// <summary>
/// Gets a packet as a byte array.
/// </summary>
/// <returns></returns>
+ (NSMutableData*) getBytesWithPacket:(FMIceLinkWebRTCVp8Packet*)packet;
/// <summary>
/// Gets the height of the image if this is a key frame.
/// </summary>
/// <returns></returns>
- (int) getHeight;
/// <summary>
/// Gets the width of the image if this is a key frame.
/// </summary>
/// <returns></returns>
- (int) getWidth;
- (id) init;
/// <summary>
/// Determines whether the packet payload represents a keyframe.
/// </summary>
/// <returns></returns>
- (bool) isKeyFrame;
/// <summary>
/// Gets the key index.
/// </summary>
- (uint8_t) keyIndex;
/// <summary>
/// Gets whether a key index is present.
/// </summary>
- (bool) keyIndexPresent;
/// <summary>
/// Gets whether layer sync is set.
/// </summary>
- (bool) layerSync;
/// <summary>
/// Gets whether this packet belongs to a non-reference frame.
/// </summary>
- (bool) nonReferenceFrame;
/// <summary>
/// Packetizes a single encoded data frame into multiple VP8 packets.
/// </summary>
/// <param name="encodedData">The encoded data.</param>
/// <returns></returns>
+ (NSMutableArray*) packetizeWithEncodedData:(NSMutableData*)encodedData;
/// <summary>
/// Parses the specified packet bytes.
/// </summary>
/// <param name="packetBytes">The packet bytes.</param>
/// <returns></returns>
+ (FMIceLinkWebRTCVp8Packet*) parseBytesWithPacketBytes:(NSMutableData*)packetBytes;
/// <summary>
/// Gets the partition ID.
/// </summary>
- (uint8_t) partitionId;
/// <summary>
/// Gets the data payload.
/// </summary>
- (NSMutableData*) payload;
/// <summary>
/// Gets the picture ID.
/// </summary>
- (short) pictureID;
/// <summary>
/// Gets whether a picture ID is present.
/// </summary>
- (bool) pictureIDPresent;
/// <summary>
/// Gets whether this packet is the start of a partition.
/// </summary>
- (bool) startOfPartition;
/// <summary>
/// Gets the temporal layer index.
/// </summary>
- (uint8_t) temporalLayerIndex;
/// <summary>
/// Gets whether a temporal layer index is present.
/// </summary>
- (bool) temporalLayerIndexPresent;
/// <summary>
/// Gets the temporal level zero index.
/// </summary>
- (uint8_t) temporalLevelZeroIndex;
/// <summary>
/// Gets whether a temporal level zero index is present.
/// </summary>
- (bool) temporalLevelZeroIndexPresent;
+ (FMIceLinkWebRTCVp8Packet*) vp8Packet;

@end


@class FMIceLinkWebRTCVp8Accumulator;
@class NSMutableDataFMExtensions;
@class FMIceLinkRTPPacket;
@class NSMutableArrayFMExtensions;

/// <summary>
/// An implementation of a VP8 packetizer/depacketizer.
/// </summary>
#pragma clang diagnostic ignored "-Wshorten-64-to-32"
#pragma clang diagnostic ignored "-Wint-to-pointer-cast"

@interface FMIceLinkWebRTCVp8Padep : FMIceLinkWebRTCVideoPadep 

/// <summary>
/// Depacketizes a packet.
/// </summary>
/// <param name="packet">The packet.</param>
/// <returns></returns>
- (NSMutableData*) depacketizeWithPacket:(FMIceLinkRTPPacket*)packet;
/// <summary>
/// Gets the height of the image from an encoded key frame.
/// </summary>
/// <param name="encodedKeyFrame">The encoded key frame.</param>
/// <returns></returns>
+ (int) getHeightWithEncodedKeyFrame:(NSMutableData*)encodedKeyFrame;
/// <summary>
/// Gets the width of the image from an encoded key frame.
/// </summary>
/// <param name="encodedKeyFrame">The encoded key frame.</param>
/// <returns></returns>
+ (int) getWidthWithEncodedKeyFrame:(NSMutableData*)encodedKeyFrame;
- (id) init;
/// <summary>
/// Determines whether the encoded frame is a key frame.
/// </summary>
/// <param name="encodedFrame">The encoded frame.</param>
/// <returns></returns>
+ (bool) isKeyFrameWithEncodedFrame:(NSMutableData*)encodedFrame;
/// <summary>
/// Packetizes an encoded frame.
/// </summary>
/// <param name="encodedFrame">The encoded frame.</param>
/// <param name="clockRate">The clock rate.</param>
/// <returns></returns>
- (NSMutableArray*) packetizeWithEncodedFrame:(NSMutableData*)encodedFrame clockRate:(int)clockRate;
/// <summary>
/// Gets whether RTP sequence numbering has
/// been violated.
/// </summary>
- (bool) sequenceNumberingViolated;
+ (FMIceLinkWebRTCVp8Padep*) vp8Padep;

@end


@class NSMutableArrayFMExtensions;
@class NSMutableDataFMExtensions;

/// <summary>
/// Abstract definition of an audio packetizer/depacketizer.
/// </summary>
#pragma clang diagnostic ignored "-Wshorten-64-to-32"
#pragma clang diagnostic ignored "-Wint-to-pointer-cast"

@interface FMIceLinkWebRTCAudioPadep : FMIceLinkWebRTCPadep 

+ (FMIceLinkWebRTCAudioPadep*) audioPadep;
/// <summary>
/// Gets whether timestamp resetting should
/// be disabled entirely.
/// </summary>
- (bool) disableTimestampReset;
/// <summary>
/// Gets the next timestamp for an RTP packet.
/// </summary>
/// <param name="clockRate">The clock rate.</param>
/// <param name="packetTime">The packet time.</param>
/// <returns></returns>
- (long long) getNextTimestampWithClockRate:(int)clockRate packetTime:(int)packetTime;
/// <summary>
/// Gets the next timestamp for an RTP packet.
/// </summary>
/// <param name="clockRate">The clock rate.</param>
/// <param name="packetTime">The packet time.</param>
/// <param name="resetTimestamp">Whether to reset the RTP timestamp.</param>
/// <returns></returns>
- (long long) getNextTimestampWithClockRate:(int)clockRate packetTime:(int)packetTime resetTimestamp:(bool)resetTimestamp;
- (id) init;
/// <summary>
/// Packetizes an encoded frame.
/// </summary>
/// <param name="encodedFrame">The encoded frame.</param>
/// <param name="clockRate">The clock rate.</param>
/// <param name="packetTime">The packet time.</param>
/// <returns></returns>
- (NSMutableArray*) packetizeWithEncodedFrame:(NSMutableData*)encodedFrame clockRate:(int)clockRate packetTime:(int)packetTime;
/// <summary>
/// Sets whether timestamp resetting should
/// be disabled entirely.
/// </summary>
- (void) setDisableTimestampReset:(bool)value;
/// <summary>
/// Sets the amount of time in milliseconds
/// between audio frames that will trigger an absolute
/// (i.e. wall-clock) reset of the timestamp. Defaults
/// to 1000ms.
/// </summary>
- (void) setTimestampResetInterval:(int)value;
/// <summary>
/// Gets the amount of time in milliseconds
/// between audio frames that will trigger an absolute
/// (i.e. wall-clock) reset of the timestamp. Defaults
/// to 1000ms.
/// </summary>
- (int) timestampResetInterval;

@end


@class FMNullableInt;
@class FMIceLinkWebRTCLocalMediaStream;
@class NSStringFMExtensions;

/// <summary>
/// Arguments for video capture initialization.
/// </summary>
#pragma clang diagnostic ignored "-Wshorten-64-to-32"
#pragma clang diagnostic ignored "-Wint-to-pointer-cast"

@interface FMIceLinkWebRTCVideoCaptureInitializeArgs : FMSerializable 

/// <summary>
/// Gets whether audio is being captured as well.
/// </summary>
- (bool) audio;
/// <summary>
/// Gets the audio capture channel count.
/// </summary>
- (int) audioChannels;
/// <summary>
/// Gets the audio capture sample rate.
/// </summary>
- (int) audioClockRate;
/// <summary>
/// Gets the desired audio device number.
/// Defaults to null (no preference).
/// </summary>
- (FMNullableInt*) audioDeviceNumber;
/// <summary>
/// Gets the capture clock rate.
/// </summary>
- (int) clockRate;
/// <summary>
/// Gets the desired device number.
/// Defaults to null (no preference).
/// </summary>
- (FMNullableInt*) deviceNumber;
/// <summary>
/// Gets the desired frame rate.
/// </summary>
- (int) frameRate;
/// <summary>
/// Deserializes an instance from JSON.
/// </summary>
/// <returns></returns>
+ (FMIceLinkWebRTCVideoCaptureInitializeArgs*) fromJsonWithInitializeArgsJson:(NSString*)initializeArgsJson;
/// <summary>
/// Gets the desired frame height.
/// </summary>
- (int) height;
- (id) init;
/// <summary>
/// Gets the local media stream.
/// </summary>
- (FMIceLinkWebRTCLocalMediaStream*) localStream;
/// <summary>
/// Sets whether audio is being captured as well.
/// </summary>
- (void) setAudio:(bool)value;
/// <summary>
/// Sets the audio capture channel count.
/// </summary>
- (void) setAudioChannels:(int)value;
/// <summary>
/// Sets the audio capture sample rate.
/// </summary>
- (void) setAudioClockRate:(int)value;
/// <summary>
/// Sets the desired audio device number.
/// Defaults to null (no preference).
/// </summary>
- (void) setAudioDeviceNumber:(FMNullableInt*)value;
/// <summary>
/// Sets the capture clock rate.
/// </summary>
- (void) setClockRate:(int)value;
/// <summary>
/// Sets the desired device number.
/// Defaults to null (no preference).
/// </summary>
- (void) setDeviceNumber:(FMNullableInt*)value;
/// <summary>
/// Sets the desired frame rate.
/// </summary>
- (void) setFrameRate:(int)value;
/// <summary>
/// Sets the desired frame height.
/// </summary>
- (void) setHeight:(int)value;
/// <summary>
/// Sets the local media stream.
/// </summary>
- (void) setLocalStream:(FMIceLinkWebRTCLocalMediaStream*)value;
/// <summary>
/// Sets the desired frame width.
/// </summary>
- (void) setWidth:(int)value;
/// <summary>
/// Serializes this instance to JSON.
/// </summary>
/// <returns></returns>
- (NSString*) toJson;
/// <summary>
/// Serializes an instance to JSON.
/// </summary>
/// <returns></returns>
+ (NSString*) toJsonWithVideoCaptureInitializeArgs:(FMIceLinkWebRTCVideoCaptureInitializeArgs*)videoCaptureInitializeArgs;
+ (FMIceLinkWebRTCVideoCaptureInitializeArgs*) videoCaptureInitializeArgs;
/// <summary>
/// Gets the desired frame width.
/// </summary>
- (int) width;

@end


@class FMIceLinkWebRTCAudioCaptureProvider;

/// <summary>
/// Arguments for the AudioCaptureProvider OnDeviceNumberChanged event.
/// </summary>
#pragma clang diagnostic ignored "-Wshorten-64-to-32"
#pragma clang diagnostic ignored "-Wint-to-pointer-cast"

@interface FMIceLinkWebRTCAudioDeviceNumberChangedArgs : NSObject 

+ (FMIceLinkWebRTCAudioDeviceNumberChangedArgs*) audioDeviceNumberChangedArgs;
/// <summary>
/// Gets the capture provider.
/// </summary>
- (FMIceLinkWebRTCAudioCaptureProvider*) captureProvider;
/// <summary>
/// Gets the new device number.
/// </summary>
- (int) deviceNumber;
- (id) init;
/// <summary>
/// Gets the last device number.
/// </summary>
- (int) lastDeviceNumber;
/// <summary>
/// Sets the capture provider.
/// </summary>
- (void) setCaptureProvider:(FMIceLinkWebRTCAudioCaptureProvider*)value;
/// <summary>
/// Sets the new device number.
/// </summary>
- (void) setDeviceNumber:(int)value;
/// <summary>
/// Sets the last device number.
/// </summary>
- (void) setLastDeviceNumber:(int)value;

@end


@class FMIceLinkWebRTCAudioBuffer;
@class FMIceLinkWebRTCAudioCaptureProvider;
@class NSMutableArrayFMExtensions;

/// <summary>
/// Arguments for the AudioCaptureProvider OnFrame event.
/// </summary>
#pragma clang diagnostic ignored "-Wshorten-64-to-32"
#pragma clang diagnostic ignored "-Wint-to-pointer-cast"

@interface FMIceLinkWebRTCAudioFrameCapturedArgs : NSObject 

+ (FMIceLinkWebRTCAudioFrameCapturedArgs*) audioFrameCapturedArgs;
/// <summary>
/// Gets the buffer.
/// </summary>
- (FMIceLinkWebRTCAudioBuffer*) buffer;
/// <summary>
/// Gets the capture provider.
/// </summary>
- (FMIceLinkWebRTCAudioCaptureProvider*) captureProvider;
- (id) init;
/// <summary>
/// Gets the peer IDs being targeted (or <c>null</c> if targeting all).
/// </summary>
- (NSMutableArray*) peerIds;
/// <summary>
/// Sets the buffer.
/// </summary>
- (void) setBuffer:(FMIceLinkWebRTCAudioBuffer*)value;
/// <summary>
/// Sets the capture provider.
/// </summary>
- (void) setCaptureProvider:(FMIceLinkWebRTCAudioCaptureProvider*)value;
/// <summary>
/// Sets the peer IDs being targeted (or <c>null</c> if targeting all).
/// </summary>
- (void) setPeerIds:(NSMutableArray*)value;

@end


@class FMIceLinkWebRTCAudioCaptureProvider;

/// <summary>
/// Arguments for the AudioCaptureProvider OnMuted event.
/// </summary>
#pragma clang diagnostic ignored "-Wshorten-64-to-32"
#pragma clang diagnostic ignored "-Wint-to-pointer-cast"

@interface FMIceLinkWebRTCAudioCaptureMutedArgs : NSObject 

+ (FMIceLinkWebRTCAudioCaptureMutedArgs*) audioCaptureMutedArgs;
/// <summary>
/// Gets the capture provider.
/// </summary>
- (FMIceLinkWebRTCAudioCaptureProvider*) captureProvider;
- (id) init;
/// <summary>
/// Sets the capture provider.
/// </summary>
- (void) setCaptureProvider:(FMIceLinkWebRTCAudioCaptureProvider*)value;

@end


@class FMIceLinkWebRTCAudioCaptureProvider;

/// <summary>
/// Arguments for the AudioCaptureProvider OnUnmuted event.
/// </summary>
#pragma clang diagnostic ignored "-Wshorten-64-to-32"
#pragma clang diagnostic ignored "-Wint-to-pointer-cast"

@interface FMIceLinkWebRTCAudioCaptureUnmutedArgs : NSObject 

+ (FMIceLinkWebRTCAudioCaptureUnmutedArgs*) audioCaptureUnmutedArgs;
/// <summary>
/// Gets the capture provider.
/// </summary>
- (FMIceLinkWebRTCAudioCaptureProvider*) captureProvider;
- (id) init;
/// <summary>
/// Sets the capture provider.
/// </summary>
- (void) setCaptureProvider:(FMIceLinkWebRTCAudioCaptureProvider*)value;

@end


@class FMIceLinkWebRTCAudioCaptureProvider;

/// <summary>
/// Arguments for the AudioCaptureProvider OnDisconnected event.
/// </summary>
#pragma clang diagnostic ignored "-Wshorten-64-to-32"
#pragma clang diagnostic ignored "-Wint-to-pointer-cast"

@interface FMIceLinkWebRTCAudioCaptureDisconnectedArgs : NSObject 

+ (FMIceLinkWebRTCAudioCaptureDisconnectedArgs*) audioCaptureDisconnectedArgs;
/// <summary>
/// Gets the capture provider.
/// </summary>
- (FMIceLinkWebRTCAudioCaptureProvider*) captureProvider;
- (id) init;
/// <summary>
/// Sets the capture provider.
/// </summary>
- (void) setCaptureProvider:(FMIceLinkWebRTCAudioCaptureProvider*)value;

@end


@class FMIceLinkWebRTCAudioCaptureProvider;

/// <summary>
/// Arguments for the AudioCaptureProvider OnLevel event.
/// </summary>
#pragma clang diagnostic ignored "-Wshorten-64-to-32"
#pragma clang diagnostic ignored "-Wint-to-pointer-cast"

@interface FMIceLinkWebRTCAudioCaptureLevelArgs : NSObject 

+ (FMIceLinkWebRTCAudioCaptureLevelArgs*) audioCaptureLevelArgs;
/// <summary>
/// Gets the capture provider.
/// </summary>
- (FMIceLinkWebRTCAudioCaptureProvider*) captureProvider;
- (id) init;
/// <summary>
/// Gets the audio level (0.0 - 1.0).
/// </summary>
- (double) level;
/// <summary>
/// Sets the capture provider.
/// </summary>
- (void) setCaptureProvider:(FMIceLinkWebRTCAudioCaptureProvider*)value;
/// <summary>
/// Sets the audio level (0.0 - 1.0).
/// </summary>
- (void) setLevel:(double)value;

@end


@class NSMutableArrayFMExtensions;
@class NSStringFMExtensions;
@class NSMutableDictionaryFMExtensions;
@class FMIceLinkRTPPacket;
@class FMIceLinkRTCPGenericNackPacket;

#pragma clang diagnostic ignored "-Wshorten-64-to-32"
#pragma clang diagnostic ignored "-Wint-to-pointer-cast"

@interface FMIceLinkWebRTCRemoteCaptureNackBuffer : NSObject 

- (id) initWithName:(NSString*)name size:(int)size;
- (int) length;
- (NSString*) name;
- (FMIceLinkRTPPacket*) readWithSequenceNumber:(int)sequenceNumber lastWrittenTimestamp:(long long)lastWrittenTimestamp nackPacket:(FMIceLinkRTCPGenericNackPacket**)nackPacket;
+ (FMIceLinkWebRTCRemoteCaptureNackBuffer*) remoteCaptureNackBufferWithName:(NSString*)name size:(int)size;
- (int) retransmissionTimeout;
- (void) setRetransmissionTimeout:(int)value;
- (bool) writeWithPacket:(FMIceLinkRTPPacket*)packet;

@end


@class NSMutableDictionaryFMExtensions;
@class NSMutableArrayFMExtensions;
@class FMIceLinkWebRTCFecReceiver;
@class FMIceLinkWebRTCRemoteCaptureJitterBuffer;
@class FMIceLinkLink;
@class FMIceLinkWebRTCRemoteCaptureNackBuffer;
@class FMIceLinkStream;
@class FMCallback;
@class FMIceLinkWebRTCRemoteVideoRenderProvider;
@class FMIceLinkWebRTCVideoStream;
@class NSStringFMExtensions;
@class FMIceLinkWebRTCVideoCaptureInitializeArgs;

#pragma clang diagnostic ignored "-Wshorten-64-to-32"
#pragma clang diagnostic ignored "-Wint-to-pointer-cast"

@interface FMIceLinkWebRTCRemoteVideoCaptureProvider : FMIceLinkWebRTCVideoCaptureProvider 

- (bool) bypassDecode;
- (NSMutableArray*) codecs;
- (bool) delayDecodeOnPendingKeyFrame;
- (int) delayPacketMaximum;
- (int) delayPacketProbability;
- (void) destroy;
- (bool) disableJitterBuffer;
- (bool) disableNackBuffer;
- (bool) disablePLI;
- (int) dropPacketProbability;
- (NSMutableArray*) getDeviceNames;
- (int) getFrontDeviceNumber;
- (NSString*) getLabel;
- (NSObject*) getPreviewControl;
- (int) getRearDeviceNumber;
- (void) initializeWithCaptureArgs:(FMIceLinkWebRTCVideoCaptureInitializeArgs*)captureArgs;
- (id) initWithLink:(FMIceLinkLink*)link negotiatedStream:(FMIceLinkStream*)negotiatedStream stream:(FMIceLinkWebRTCVideoStream*)stream streamIndex:(int)streamIndex codecs:(NSMutableArray*)codecs renderProvider:(FMIceLinkWebRTCRemoteVideoRenderProvider*)renderProvider jitterBufferLength:(int)jitterBufferLength jitterBufferMaxLength:(int)jitterBufferMaxLength nackBufferLength:(int)nackBufferLength;
- (FMIceLinkLink*) link;
- (int) nackBufferLength;
- (FMIceLinkStream*) negotiatedStream;
+ (FMIceLinkWebRTCRemoteVideoCaptureProvider*) remoteVideoCaptureProviderWithLink:(FMIceLinkLink*)link negotiatedStream:(FMIceLinkStream*)negotiatedStream stream:(FMIceLinkWebRTCVideoStream*)stream streamIndex:(int)streamIndex codecs:(NSMutableArray*)codecs renderProvider:(FMIceLinkWebRTCRemoteVideoRenderProvider*)renderProvider jitterBufferLength:(int)jitterBufferLength jitterBufferMaxLength:(int)jitterBufferMaxLength nackBufferLength:(int)nackBufferLength;
- (FMIceLinkWebRTCRemoteVideoRenderProvider*) renderProvider;
- (void) sendPLIWithReason:(NSString*)reason;
- (void) setBypassDecode:(bool)value;
- (void) setDelayDecodeOnPendingKeyFrame:(bool)value;
- (void) setDelayPacketMaximum:(int)value;
- (void) setDelayPacketProbability:(int)value;
- (void) setDisableJitterBuffer:(bool)value;
- (void) setDisableNackBuffer:(bool)value;
- (void) setDisablePLI:(bool)value;
- (void) setDropPacketProbability:(int)value;
- (void) setNackBufferLength:(int)value;
- (bool) start;
- (void) stop;
- (FMIceLinkWebRTCVideoStream*) stream;
- (int) streamIndex;

@end


@class NSMutableDictionaryFMExtensions;
@class NSMutableArrayFMExtensions;
@class FMIceLinkLink;
@class FMIceLinkStream;
@class FMCallback;
@class FMIceLinkWebRTCRemoteAudioRenderProvider;
@class FMIceLinkWebRTCAudioStream;
@class NSStringFMExtensions;
@class FMIceLinkWebRTCAudioCaptureInitializeArgs;

#pragma clang diagnostic ignored "-Wshorten-64-to-32"
#pragma clang diagnostic ignored "-Wint-to-pointer-cast"

@interface FMIceLinkWebRTCRemoteAudioCaptureProvider : FMIceLinkWebRTCAudioCaptureProvider 

- (bool) bypassDecode;
- (NSMutableArray*) codecs;
- (int) delayPacketMaximum;
- (int) delayPacketProbability;
- (void) destroy;
- (bool) disableJitterBuffer;
- (bool) disablePLC;
- (int) dropPacketProbability;
- (NSMutableArray*) getDeviceNames;
- (NSString*) getLabel;
- (void) initializeWithCaptureArgs:(FMIceLinkWebRTCAudioCaptureInitializeArgs*)captureArgs;
- (id) initWithLink:(FMIceLinkLink*)link negotiatedStream:(FMIceLinkStream*)negotiatedStream stream:(FMIceLinkWebRTCAudioStream*)stream streamIndex:(int)streamIndex codecs:(NSMutableArray*)codecs renderProvider:(FMIceLinkWebRTCRemoteAudioRenderProvider*)renderProvider jitterBufferLength:(int)jitterBufferLength jitterBufferMaxLength:(int)jitterBufferMaxLength;
- (FMIceLinkLink*) link;
- (FMIceLinkStream*) negotiatedStream;
+ (FMIceLinkWebRTCRemoteAudioCaptureProvider*) remoteAudioCaptureProviderWithLink:(FMIceLinkLink*)link negotiatedStream:(FMIceLinkStream*)negotiatedStream stream:(FMIceLinkWebRTCAudioStream*)stream streamIndex:(int)streamIndex codecs:(NSMutableArray*)codecs renderProvider:(FMIceLinkWebRTCRemoteAudioRenderProvider*)renderProvider jitterBufferLength:(int)jitterBufferLength jitterBufferMaxLength:(int)jitterBufferMaxLength;
- (FMIceLinkWebRTCRemoteAudioRenderProvider*) renderProvider;
- (void) setBypassDecode:(bool)value;
- (void) setDelayPacketMaximum:(int)value;
- (void) setDelayPacketProbability:(int)value;
- (void) setDisableJitterBuffer:(bool)value;
- (void) setDisablePLC:(bool)value;
- (void) setDropPacketProbability:(int)value;
- (bool) start;
- (void) stop;
- (FMIceLinkWebRTCAudioStream*) stream;
- (int) streamIndex;

@end


@class FMIceLinkWebRTCVideoCaptureProvider;

/// <summary>
/// Arguments for the VideoCaptureProvider OnDeviceNumberChanged event.
/// </summary>
#pragma clang diagnostic ignored "-Wshorten-64-to-32"
#pragma clang diagnostic ignored "-Wint-to-pointer-cast"

@interface FMIceLinkWebRTCVideoDeviceNumberChangedArgs : NSObject 

/// <summary>
/// Gets the capture provider.
/// </summary>
- (FMIceLinkWebRTCVideoCaptureProvider*) captureProvider;
/// <summary>
/// Gets the new device number.
/// </summary>
- (int) deviceNumber;
- (id) init;
/// <summary>
/// Gets the last device number.
/// </summary>
- (int) lastDeviceNumber;
/// <summary>
/// Sets the capture provider.
/// </summary>
- (void) setCaptureProvider:(FMIceLinkWebRTCVideoCaptureProvider*)value;
/// <summary>
/// Sets the new device number.
/// </summary>
- (void) setDeviceNumber:(int)value;
/// <summary>
/// Sets the last device number.
/// </summary>
- (void) setLastDeviceNumber:(int)value;
+ (FMIceLinkWebRTCVideoDeviceNumberChangedArgs*) videoDeviceNumberChangedArgs;

@end


@class FMIceLinkWebRTCVideoBuffer;
@class FMIceLinkWebRTCVideoCaptureProvider;
@class NSMutableArrayFMExtensions;

/// <summary>
/// Arguments for the VideoCaptureProvider OnFrame event.
/// </summary>
#pragma clang diagnostic ignored "-Wshorten-64-to-32"
#pragma clang diagnostic ignored "-Wint-to-pointer-cast"

@interface FMIceLinkWebRTCVideoFrameCapturedArgs : NSObject 

/// <summary>
/// Gets the buffer.
/// </summary>
- (FMIceLinkWebRTCVideoBuffer*) buffer;
/// <summary>
/// Gets the capture provider.
/// </summary>
- (FMIceLinkWebRTCVideoCaptureProvider*) captureProvider;
- (id) init;
/// <summary>
/// Gets the peer IDs being targeted (or <c>null</c> if targeting all).
/// </summary>
- (NSMutableArray*) peerIds;
/// <summary>
/// Sets the buffer.
/// </summary>
- (void) setBuffer:(FMIceLinkWebRTCVideoBuffer*)value;
/// <summary>
/// Sets the capture provider.
/// </summary>
- (void) setCaptureProvider:(FMIceLinkWebRTCVideoCaptureProvider*)value;
/// <summary>
/// Sets the peer IDs being targeted (or <c>null</c> if targeting all).
/// </summary>
- (void) setPeerIds:(NSMutableArray*)value;
+ (FMIceLinkWebRTCVideoFrameCapturedArgs*) videoFrameCapturedArgs;

@end


@class FMIceLinkWebRTCVideoCaptureProvider;

/// <summary>
/// Arguments for the VideoCaptureProvider OnMuted event.
/// </summary>
#pragma clang diagnostic ignored "-Wshorten-64-to-32"
#pragma clang diagnostic ignored "-Wint-to-pointer-cast"

@interface FMIceLinkWebRTCVideoCaptureMutedArgs : NSObject 

/// <summary>
/// Gets the capture provider.
/// </summary>
- (FMIceLinkWebRTCVideoCaptureProvider*) captureProvider;
- (id) init;
/// <summary>
/// Sets the capture provider.
/// </summary>
- (void) setCaptureProvider:(FMIceLinkWebRTCVideoCaptureProvider*)value;
+ (FMIceLinkWebRTCVideoCaptureMutedArgs*) videoCaptureMutedArgs;

@end


@class FMIceLinkWebRTCVideoCaptureProvider;

/// <summary>
/// Arguments for the VideoCaptureProvider OnUnmuted event.
/// </summary>
#pragma clang diagnostic ignored "-Wshorten-64-to-32"
#pragma clang diagnostic ignored "-Wint-to-pointer-cast"

@interface FMIceLinkWebRTCVideoCaptureUnmutedArgs : NSObject 

/// <summary>
/// Gets the capture provider.
/// </summary>
- (FMIceLinkWebRTCVideoCaptureProvider*) captureProvider;
- (id) init;
/// <summary>
/// Sets the capture provider.
/// </summary>
- (void) setCaptureProvider:(FMIceLinkWebRTCVideoCaptureProvider*)value;
+ (FMIceLinkWebRTCVideoCaptureUnmutedArgs*) videoCaptureUnmutedArgs;

@end


@class FMIceLinkWebRTCVideoCaptureProvider;

/// <summary>
/// Arguments for the VideoCaptureProvider OnPreviewMuted event.
/// </summary>
#pragma clang diagnostic ignored "-Wshorten-64-to-32"
#pragma clang diagnostic ignored "-Wint-to-pointer-cast"

@interface FMIceLinkWebRTCVideoCapturePreviewMutedArgs : NSObject 

/// <summary>
/// Gets the capture provider.
/// </summary>
- (FMIceLinkWebRTCVideoCaptureProvider*) captureProvider;
- (id) init;
/// <summary>
/// Sets the capture provider.
/// </summary>
- (void) setCaptureProvider:(FMIceLinkWebRTCVideoCaptureProvider*)value;
+ (FMIceLinkWebRTCVideoCapturePreviewMutedArgs*) videoCapturePreviewMutedArgs;

@end


@class FMIceLinkWebRTCVideoCaptureProvider;

/// <summary>
/// Arguments for the VideoCaptureProvider OnPreviewUnmuted event.
/// </summary>
#pragma clang diagnostic ignored "-Wshorten-64-to-32"
#pragma clang diagnostic ignored "-Wint-to-pointer-cast"

@interface FMIceLinkWebRTCVideoCapturePreviewUnmutedArgs : NSObject 

/// <summary>
/// Gets the capture provider.
/// </summary>
- (FMIceLinkWebRTCVideoCaptureProvider*) captureProvider;
- (id) init;
/// <summary>
/// Sets the capture provider.
/// </summary>
- (void) setCaptureProvider:(FMIceLinkWebRTCVideoCaptureProvider*)value;
+ (FMIceLinkWebRTCVideoCapturePreviewUnmutedArgs*) videoCapturePreviewUnmutedArgs;

@end


@class FMIceLinkWebRTCVideoCaptureProvider;

/// <summary>
/// Arguments for the VideoCaptureProvider OnDisconnected event.
/// </summary>
#pragma clang diagnostic ignored "-Wshorten-64-to-32"
#pragma clang diagnostic ignored "-Wint-to-pointer-cast"

@interface FMIceLinkWebRTCVideoCaptureDisconnectedArgs : NSObject 

/// <summary>
/// Gets the capture provider.
/// </summary>
- (FMIceLinkWebRTCVideoCaptureProvider*) captureProvider;
- (id) init;
/// <summary>
/// Sets the capture provider.
/// </summary>
- (void) setCaptureProvider:(FMIceLinkWebRTCVideoCaptureProvider*)value;
+ (FMIceLinkWebRTCVideoCaptureDisconnectedArgs*) videoCaptureDisconnectedArgs;

@end



/// <summary>
/// Arguments for the get-media complete event.
/// </summary>
#pragma clang diagnostic ignored "-Wshorten-64-to-32"
#pragma clang diagnostic ignored "-Wint-to-pointer-cast"

@interface FMIceLinkWebRTCGetMediaCompleteArgs : FMIceLinkWebRTCBaseMediaArgs 

+ (FMIceLinkWebRTCGetMediaCompleteArgs*) getMediaCompleteArgs;
- (id) init;

@end


@class NSExceptionFMExtensions;

/// <summary>
/// Arguments for the get-media failure event.
/// </summary>
#pragma clang diagnostic ignored "-Wshorten-64-to-32"
#pragma clang diagnostic ignored "-Wint-to-pointer-cast"

@interface FMIceLinkWebRTCGetMediaFailureArgs : FMIceLinkWebRTCBaseMediaArgs 

/// <summary>
/// Gets the exception that occurred.
/// </summary>
- (NSException*) exception;
+ (FMIceLinkWebRTCGetMediaFailureArgs*) getMediaFailureArgs;
- (id) init;
- (void) setException:(NSException*)value;

@end


@class NSStringFMExtensions;

/// <summary>
/// Arguments for a callback that creates an audio render provider.
/// </summary>
#pragma clang diagnostic ignored "-Wshorten-64-to-32"
#pragma clang diagnostic ignored "-Wint-to-pointer-cast"

@interface FMIceLinkWebRTCCreateAudioRenderProviderArgs : FMDynamic 

+ (FMIceLinkWebRTCCreateAudioRenderProviderArgs*) createAudioRenderProviderArgs;
- (id) init;
/// <summary>
/// Gets the ID of the peer.
/// </summary>
- (NSString*) peerId;
/// <summary>
/// Gets custom state associated with the peer.
/// </summary>
- (NSObject*) peerState;
- (void) setPeerId:(NSString*)value;
- (void) setPeerState:(NSObject*)value;

@end


@class NSStringFMExtensions;

/// <summary>
/// Arguments for a callback that creates a video render provider.
/// </summary>
#pragma clang diagnostic ignored "-Wshorten-64-to-32"
#pragma clang diagnostic ignored "-Wint-to-pointer-cast"

@interface FMIceLinkWebRTCCreateVideoRenderProviderArgs : FMDynamic 

+ (FMIceLinkWebRTCCreateVideoRenderProviderArgs*) createVideoRenderProviderArgs;
- (id) init;
/// <summary>
/// Gets the ID of the peer.
/// </summary>
- (NSString*) peerId;
/// <summary>
/// Gets custom state associated with the peer.
/// </summary>
- (NSObject*) peerState;
- (void) setPeerId:(NSString*)value;
- (void) setPeerState:(NSObject*)value;

@end


@class FMIceLinkWebRTCCreateAudioRenderProviderArgs;
@class FMIceLinkWebRTCAudioRenderProvider;
@class FMIceLinkWebRTCCreateVideoRenderProviderArgs;
@class FMIceLinkWebRTCVideoRenderProvider;
@class FMIceLinkWebRTCGetMediaSuccessArgs;
@class FMIceLinkWebRTCGetMediaFailureArgs;
@class FMIceLinkWebRTCGetMediaCompleteArgs;
@class FMIceLinkWebRTCAudioCaptureProvider;
@class FMCallback;
@class FMIceLinkWebRTCVideoCaptureProvider;

/// <summary>
/// Arguments for UserMedia.GetMedia.
/// </summary>
#pragma clang diagnostic ignored "-Wshorten-64-to-32"
#pragma clang diagnostic ignored "-Wint-to-pointer-cast"

@interface FMIceLinkWebRTCGetMediaArgs : FMIceLinkWebRTCBaseMediaArgs 

/// <summary>
/// Gets the local audio capture provider.
/// If <see cref="FMIceLinkWebRTCBaseMediaArgs#audio" /> is set to true and this is null,
/// a default audio capture provider will be initialized
/// that uses the device microphone as the media source.
/// </summary>
- (FMIceLinkWebRTCAudioCaptureProvider*) audioCaptureProvider;
/// <summary>
/// Gets the callback for creating a local audio render provider.
/// </summary>
- (FMCallback*) createAudioRenderProvider;
/// <summary>
/// Gets the callback for creating a local video render provider.
/// </summary>
- (FMCallback*) createVideoRenderProvider;
+ (FMIceLinkWebRTCGetMediaArgs*) getMediaArgs;
/// <summary>
/// Initializes a new instance of the <see cref="FMIceLinkWebRTCGetMediaArgs" /> class.
/// </summary>
/// <param name="audio">Whether to initialize the audio capture provider.</param>
/// <param name="video">Whether to initialize the video capture provider.</param>
+ (FMIceLinkWebRTCGetMediaArgs*) getMediaArgsWithAudio:(bool)audio video:(bool)video;
- (id) init;
/// <summary>
/// Initializes a new instance of the <see cref="FMIceLinkWebRTCGetMediaArgs" /> class.
/// </summary>
/// <param name="audio">Whether to initialize the audio capture provider.</param>
/// <param name="video">Whether to initialize the video capture provider.</param>
- (id) initWithAudio:(bool)audio video:(bool)video;
/// <summary>
/// Gets the callback to invoke when the operation completes, whether it succeeds or not.
/// </summary>
- (FMCallback*) onComplete;
/// <summary>
/// Gets the callback to invoke if a local media stream cannot be created.
/// </summary>
- (FMCallback*) onFailure;
/// <summary>
/// Gets the callback to invoke when the local media stream is ready.
/// </summary>
- (FMCallback*) onSuccess;
/// <summary>
/// Sets the local audio capture provider.
/// If <see cref="FMIceLinkWebRTCBaseMediaArgs#audio" /> is set to true and this is null,
/// a default audio capture provider will be initialized
/// that uses the device microphone as the media source.
/// </summary>
- (void) setAudioCaptureProvider:(FMIceLinkWebRTCAudioCaptureProvider*)value;
/// <summary>
/// Sets the callback for creating a local audio render provider.
/// </summary>
- (void) setCreateAudioRenderProvider:(FMCallback*)value;
/// <summary>
/// Sets the callback for creating a local audio render provider.
/// </summary>
- (void) setCreateAudioRenderProviderBlock:(FMIceLinkWebRTCAudioRenderProvider* (^) (FMIceLinkWebRTCCreateAudioRenderProviderArgs*))valueBlock;
/// <summary>
/// Sets the callback for creating a local video render provider.
/// </summary>
- (void) setCreateVideoRenderProvider:(FMCallback*)value;
/// <summary>
/// Sets the callback for creating a local video render provider.
/// </summary>
- (void) setCreateVideoRenderProviderBlock:(FMIceLinkWebRTCVideoRenderProvider* (^) (FMIceLinkWebRTCCreateVideoRenderProviderArgs*))valueBlock;
/// <summary>
/// Sets the callback to invoke when the operation completes, whether it succeeds or not.
/// </summary>
- (void) setOnComplete:(FMCallback*)value;
/// <summary>
/// Sets the callback to invoke when the operation completes, whether it succeeds or not.
/// </summary>
- (void) setOnCompleteBlock:(void (^) (FMIceLinkWebRTCGetMediaCompleteArgs*))valueBlock;
/// <summary>
/// Sets the callback to invoke if a local media stream cannot be created.
/// </summary>
- (void) setOnFailure:(FMCallback*)value;
/// <summary>
/// Sets the callback to invoke if a local media stream cannot be created.
/// </summary>
- (void) setOnFailureBlock:(void (^) (FMIceLinkWebRTCGetMediaFailureArgs*))valueBlock;
/// <summary>
/// Sets the callback to invoke when the local media stream is ready.
/// </summary>
- (void) setOnSuccess:(FMCallback*)value;
/// <summary>
/// Sets the callback to invoke when the local media stream is ready.
/// </summary>
- (void) setOnSuccessBlock:(void (^) (FMIceLinkWebRTCGetMediaSuccessArgs*))valueBlock;
/// <summary>
/// Sets the local video capture provider.
/// If <see cref="FMIceLinkWebRTCBaseMediaArgs#video" /> is set to true and this is null,
/// a default video capture provider will be initialized
/// that uses the device camera as the media source.
/// </summary>
- (void) setVideoCaptureProvider:(FMIceLinkWebRTCVideoCaptureProvider*)value;
/// <summary>
/// Gets the local video capture provider.
/// If <see cref="FMIceLinkWebRTCBaseMediaArgs#video" /> is set to true and this is null,
/// a default video capture provider will be initialized
/// that uses the device camera as the media source.
/// </summary>
- (FMIceLinkWebRTCVideoCaptureProvider*) videoCaptureProvider;

@end


@class NSStringFMExtensions;
@class FMIceLinkWebRTCLocalMediaStream;

/// <summary>
/// Arguments for the get-media success event.
/// </summary>
#pragma clang diagnostic ignored "-Wshorten-64-to-32"
#pragma clang diagnostic ignored "-Wint-to-pointer-cast"

@interface FMIceLinkWebRTCGetMediaSuccessArgs : FMIceLinkWebRTCBaseMediaArgs 

/// <summary>
/// Gets the audio device label.
/// </summary>
- (NSString*) audioDeviceLabel;
+ (FMIceLinkWebRTCGetMediaSuccessArgs*) getMediaSuccessArgs;
- (id) init;
/// <summary>
/// Gets the local media stream.
/// </summary>
- (FMIceLinkWebRTCLocalMediaStream*) localStream;
/// <summary>
/// Gets the local video control.
/// </summary>
- (NSObject*) localVideoControl;
- (void) setAudioDeviceLabel:(NSString*)value;
- (void) setLocalStream:(FMIceLinkWebRTCLocalMediaStream*)value;
- (void) setLocalVideoControl:(NSObject*)value;
- (void) setVideoDeviceLabel:(NSString*)value;
/// <summary>
/// Gets the video device label.
/// </summary>
- (NSString*) videoDeviceLabel;

@end


@class NSMutableDictionaryFMExtensions;
@class NSMutableDataFMExtensions;
@class NSMutableArrayFMExtensions;
@class FMIceLinkWebRTCAudioCodec;
@class NSStringFMExtensions;

/// <summary>
/// An audio buffer.
/// </summary>
#pragma clang diagnostic ignored "-Wshorten-64-to-32"
#pragma clang diagnostic ignored "-Wint-to-pointer-cast"

@interface FMIceLinkWebRTCAudioBuffer : FMDynamic 

/// <summary>
/// Initializes a new instance of the <see cref="FMIceLinkWebRTCAudioBuffer" /> class.
/// </summary>
/// <param name="data">The buffer data.</param>
+ (FMIceLinkWebRTCAudioBuffer*) audioBufferWithData:(NSMutableData*)data;
/// <summary>
/// Initializes a new instance of the <see cref="FMIceLinkWebRTCAudioBuffer" /> class.
/// </summary>
/// <param name="data">The buffer data.</param>
/// <param name="index">The buffer index.</param>
/// <param name="length">The buffer length.</param>
+ (FMIceLinkWebRTCAudioBuffer*) audioBufferWithData:(NSMutableData*)data index:(int)index length:(int)length;
/// <summary>
/// Converts an array of floating-point values to binary.
/// </summary>
/// <param name="floatData">The floating-point data.</param>
/// <returns>The binary data.</returns>
+ (NSMutableData*) binaryFromFloatsWithFloatData:(NSMutableArray*)floatData;
/// <summary>
/// Converts an array of floating-point values to binary.
/// </summary>
/// <param name="floatData">The floating-point data.</param>
/// <param name="floatIndex">The floating-point index.</param>
/// <param name="floatLength">The number of floating-point values.</param>
/// <returns>The binary data.</returns>
+ (NSMutableData*) binaryFromFloatsWithFloatData:(NSMutableArray*)floatData floatIndex:(int)floatIndex floatLength:(int)floatLength;
/// <summary>
/// Converts an array of floating-point values to binary.
/// </summary>
/// <param name="floatData">The floating-point data.</param>
/// <param name="floatIndex">The floating-point index.</param>
/// <param name="floatLength">The number of floating-point values.</param>
/// <param name="data">The binary data.</param>
/// <param name="index">The binary index.</param>
+ (void) binaryFromFloatsWithFloatData:(NSMutableArray*)floatData floatIndex:(int)floatIndex floatLength:(int)floatLength data:(NSMutableData*)data index:(int)index;
/// <summary>
/// Converts an array of short values to binary.
/// </summary>
/// <param name="shortData">The short data.</param>
/// <returns>The binary data.</returns>
+ (NSMutableData*) binaryFromShortsWithShortData:(NSMutableArray*)shortData;
/// <summary>
/// Converts an array of short values to binary.
/// </summary>
/// <param name="shortData">The short data.</param>
/// <param name="shortIndex">The short index.</param>
/// <param name="shortLength">The number of short values.</param>
/// <returns>The binary data.</returns>
+ (NSMutableData*) binaryFromShortsWithShortData:(NSMutableArray*)shortData shortIndex:(int)shortIndex shortLength:(int)shortLength;
/// <summary>
/// Converts an array of short values to binary.
/// </summary>
/// <param name="shortData">The short data.</param>
/// <param name="shortIndex">The short index.</param>
/// <param name="shortLength">The number of short values.</param>
/// <param name="data">The binary data.</param>
/// <param name="index">The binary index.</param>
+ (void) binaryFromShortsWithShortData:(NSMutableArray*)shortData shortIndex:(int)shortIndex shortLength:(int)shortLength data:(NSMutableData*)data index:(int)index;
/// <summary>
/// Creates a clone of this instance
/// using the current data/index/length.
/// </summary>
/// <returns></returns>
- (FMIceLinkWebRTCAudioBuffer*) clone;
/// <summary>
/// Creates a clone of this instance
/// using new data/index/length.
/// </summary>
/// <param name="data">The data.</param>
/// <param name="index">The index.</param>
/// <param name="length">The length.</param>
/// <returns></returns>
- (FMIceLinkWebRTCAudioBuffer*) cloneWithData:(NSMutableData*)data index:(int)index length:(int)length;
/// <summary>
/// Creates a clone of this instance
/// using the current data but new index/length.
/// </summary>
/// <returns></returns>
- (FMIceLinkWebRTCAudioBuffer*) cloneWithIndex:(int)index length:(int)length;
/// <summary>
/// Converts each sample into two identical samples.
/// </summary>
/// <returns><c>true</c> if the data was converted; otherwise, <c>false</c></returns>
- (bool) convertMonoToStereo;
/// <summary>
/// Converts each pair of samples into one mixed sample.
/// </summary>
/// <returns><c>true</c> if the data was converted; otherwise, <c>false</c></returns>
- (bool) convertStereoToMono;
/// <summary>
/// Gets the buffer data.
/// </summary>
- (NSMutableData*) data;
/// <summary>
/// Gets whether the contents of this
/// buffer are pre-encoded.
/// </summary>
- (bool) encoded;
/// <summary>
/// Encode the buffer contents using the
/// specified codec. The buffer will be
/// split into chunks based on the packet
/// size specified by the codec.
/// </summary>
/// <param name="codec">The codec.</param>
- (NSMutableArray*) encodeWithCodec:(FMIceLinkWebRTCAudioCodec*)codec;
/// <summary>
/// Converts a short value to a floating-point value.
/// </summary>
/// <param name="value">The short value.</param>
/// <returns>The floating-point value.</returns>
+ (float) floatFromShortWithValue:(short)value;
/// <summary>
/// Converts binary to an array of floating-point values.
/// </summary>
/// <param name="data">The binary data.</param>
/// <returns>The array of floating-point values.</returns>
+ (NSMutableArray*) floatsFromBinaryWithData:(NSMutableData*)data;
/// <summary>
/// Converts binary to an array of floating-point values.
/// </summary>
/// <param name="data">The binary data.</param>
/// <param name="index">The binary index.</param>
/// <param name="length">The number of bytes.</param>
/// <returns>The array of floating-point values.</returns>
+ (NSMutableArray*) floatsFromBinaryWithData:(NSMutableData*)data index:(int)index length:(int)length;
/// <summary>
/// Converts binary to an array of floating-point values.
/// </summary>
/// <param name="data">The binary data.</param>
/// <param name="index">The binary index.</param>
/// <param name="length">The number of bytes.</param>
/// <param name="floatData">The floating-point data.</param>
/// <param name="floatIndex">The floating-point index.</param>
+ (void) floatsFromBinaryWithData:(NSMutableData*)data index:(int)index length:(int)length floatData:(NSMutableArray*)floatData floatIndex:(int)floatIndex;
/// <summary>
/// Converts an array of short values to an array of floating-point values.
/// </summary>
/// <param name="shortData">The short data.</param>
/// <returns>The floating-point data.</returns>
+ (NSMutableArray*) floatsFromShortsWithShortData:(NSMutableArray*)shortData;
/// <summary>
/// Converts an array of short values to an array of floating-point values.
/// </summary>
/// <param name="shortData">The short data.</param>
/// <param name="shortIndex">The short index.</param>
/// <param name="shortLength">The number of short values.</param>
/// <returns>The floating-point data.</returns>
+ (NSMutableArray*) floatsFromShortsWithShortData:(NSMutableArray*)shortData shortIndex:(int)shortIndex shortLength:(int)shortLength;
/// <summary>
/// Converts an array of short values to an array of floating-point values.
/// </summary>
/// <param name="shortData">The short data.</param>
/// <param name="shortIndex">The short index.</param>
/// <param name="shortLength">The number of short values.</param>
/// <param name="floatData">The binary data.</param>
/// <param name="floatIndex">The binary index.</param>
+ (void) floatsFromShortsWithShortData:(NSMutableArray*)shortData shortIndex:(int)shortIndex shortLength:(int)shortLength floatData:(NSMutableArray*)floatData floatIndex:(int)floatIndex;
- (NSMutableArray*) getEncodedDataWithKey:(NSString*)key;
/// <summary>
/// Gets the <see cref="FMIceLinkWebRTCAudioBuffer#data" /> index.
/// </summary>
- (int) index;
/// <summary>
/// Initializes a new instance of the <see cref="FMIceLinkWebRTCAudioBuffer" /> class.
/// </summary>
/// <param name="data">The buffer data.</param>
- (id) initWithData:(NSMutableData*)data;
/// <summary>
/// Initializes a new instance of the <see cref="FMIceLinkWebRTCAudioBuffer" /> class.
/// </summary>
/// <param name="data">The buffer data.</param>
/// <param name="index">The buffer index.</param>
/// <param name="length">The buffer length.</param>
- (id) initWithData:(NSMutableData*)data index:(int)index length:(int)length;
/// <summary>
/// Gets the <see cref="FMIceLinkWebRTCAudioBuffer#data" /> length.
/// </summary>
- (int) length;
/// <summary>
/// Zeroes out (mutes) the data buffer.
/// </summary>
- (void) mute;
/// <summary>
/// Gets the presentation timestamp,
/// if it is available, or -1 if it is not.
/// </summary>
- (long long) presentationTimestamp;
/// <summary>
/// Gets the previous buffer.
/// </summary>
- (FMIceLinkWebRTCAudioBuffer*) previousBuffer;
/// <summary>
/// Gets the previous buffers.
/// </summary>
- (NSMutableArray*) previousBuffers;
/// <summary>
/// Gets a value indicating whether the
/// packetizer should reset the RTP timestamp.
/// </summary>
- (bool) resetTimestamp;
/// <summary>
/// Sets the buffer data.
/// </summary>
- (void) setData:(NSMutableData*)value;
/// <summary>
/// Sets whether the contents of this
/// buffer are pre-encoded.
/// </summary>
- (void) setEncoded:(bool)value;
/// <summary>
/// Sets the <see cref="FMIceLinkWebRTCAudioBuffer#data" /> index.
/// </summary>
- (void) setIndex:(int)value;
/// <summary>
/// Sets the <see cref="FMIceLinkWebRTCAudioBuffer#data" /> length.
/// </summary>
- (void) setLength:(int)value;
/// <summary>
/// Sets the presentation timestamp,
/// if it is available, or -1 if it is not.
/// </summary>
- (void) setPresentationTimestamp:(long long)value;
/// <summary>
/// Sets the previous buffer.
/// </summary>
- (void) setPreviousBuffer:(FMIceLinkWebRTCAudioBuffer*)value;
/// <summary>
/// Sets the previous buffers.
/// </summary>
- (void) setPreviousBuffers:(NSMutableArray*)value;
/// <summary>
/// Sets a value indicating whether the
/// packetizer should reset the RTP timestamp.
/// </summary>
- (void) setResetTimestamp:(bool)value;
/// <summary>
/// Converts a floating-point value to a short value.
/// </summary>
/// <param name="value">The floating-point value.</param>
/// <returns>The short value.</returns>
+ (short) shortFromFloatWithValue:(float)value;
/// <summary>
/// Converts binary to an array of short values.
/// </summary>
/// <param name="data">The binary data.</param>
/// <returns>The array of short values.</returns>
+ (NSMutableArray*) shortsFromBinaryWithData:(NSMutableData*)data;
/// <summary>
/// Converts binary to an array of short values.
/// </summary>
/// <param name="data">The binary data.</param>
/// <param name="index">The binary index.</param>
/// <param name="length">The number of bytes.</param>
/// <returns>The array of short values.</returns>
+ (NSMutableArray*) shortsFromBinaryWithData:(NSMutableData*)data index:(int)index length:(int)length;
/// <summary>
/// Converts binary to an array of short values.
/// </summary>
/// <param name="data">The binary data.</param>
/// <param name="index">The binary index.</param>
/// <param name="length">The number of bytes.</param>
/// <param name="shortData">The short data.</param>
/// <param name="shortIndex">The short index.</param>
+ (void) shortsFromBinaryWithData:(NSMutableData*)data index:(int)index length:(int)length shortData:(NSMutableArray*)shortData shortIndex:(int)shortIndex;
/// <summary>
/// Converts an array of floating-point values to an array of short values.
/// </summary>
/// <param name="floatData">The floating-point data.</param>
/// <returns>The short data.</returns>
+ (NSMutableArray*) shortsFromFloatsWithFloatData:(NSMutableArray*)floatData;
/// <summary>
/// Converts an array of floating-point values to an array of short values.
/// </summary>
/// <param name="floatData">The floating-point data.</param>
/// <param name="floatIndex">The floating-point index.</param>
/// <param name="floatLength">The number of floating-point values.</param>
/// <returns>The short data.</returns>
+ (NSMutableArray*) shortsFromFloatsWithFloatData:(NSMutableArray*)floatData floatIndex:(int)floatIndex floatLength:(int)floatLength;
/// <summary>
/// Converts an array of floating-point values to an array of short values.
/// </summary>
/// <param name="floatData">The binary data.</param>
/// <param name="floatIndex">The binary index.</param>
/// <param name="floatLength">The number of bytes.</param>
/// <param name="shortData">The short data.</param>
/// <param name="shortIndex">The short index.</param>
+ (void) shortsFromFloatsWithFloatData:(NSMutableArray*)floatData floatIndex:(int)floatIndex floatLength:(int)floatLength shortData:(NSMutableArray*)shortData shortIndex:(int)shortIndex;

@end


@class NSMutableDataFMExtensions;
@class FMIceLinkRTPPacket;
@class NSMutableArrayFMExtensions;

/// <summary>
/// An implementation of a basic video packetizer/depacketizer
/// that maps each frame to an RTP packet.
/// </summary>
#pragma clang diagnostic ignored "-Wshorten-64-to-32"
#pragma clang diagnostic ignored "-Wint-to-pointer-cast"

@interface FMIceLinkWebRTCBasicVideoPadep : FMIceLinkWebRTCVideoPadep 

+ (FMIceLinkWebRTCBasicVideoPadep*) basicVideoPadep;
/// <summary>
/// Depacketizes a packet.
/// </summary>
/// <param name="packet">The packet.</param>
/// <returns></returns>
- (NSMutableData*) depacketizeWithPacket:(FMIceLinkRTPPacket*)packet;
- (id) init;
/// <summary>
/// Packetizes an encoded frame.
/// </summary>
/// <param name="encodedFrame">The encoded frame.</param>
/// <param name="clockRate">The clock rate.</param>
/// <returns></returns>
- (NSMutableArray*) packetizeWithEncodedFrame:(NSMutableData*)encodedFrame clockRate:(int)clockRate;

@end


@class NSMutableDataFMExtensions;
@class FMIceLinkRTPPacket;
@class NSMutableArrayFMExtensions;

/// <summary>
/// An implementation of a basic audio packetizer/depacketizer
/// that maps each frame to an RTP packet.
/// </summary>
#pragma clang diagnostic ignored "-Wshorten-64-to-32"
#pragma clang diagnostic ignored "-Wint-to-pointer-cast"

@interface FMIceLinkWebRTCBasicAudioPadep : FMIceLinkWebRTCAudioPadep 

+ (FMIceLinkWebRTCBasicAudioPadep*) basicAudioPadep;
/// <summary>
/// Depacketizes a packet.
/// </summary>
/// <param name="packet">The packet.</param>
/// <returns></returns>
- (NSMutableData*) depacketizeWithPacket:(FMIceLinkRTPPacket*)packet;
- (id) init;
/// <summary>
/// Packetizes an encoded frame.
/// </summary>
/// <param name="encodedFrame">The encoded frame.</param>
/// <param name="clockRate">The clock rate.</param>
/// <param name="packetTime">The packet time.</param>
/// <returns></returns>
- (NSMutableArray*) packetizeWithEncodedFrame:(NSMutableData*)encodedFrame clockRate:(int)clockRate packetTime:(int)packetTime;
/// <summary>
/// Packetizes an encoded frame.
/// </summary>
/// <param name="encodedFrame">The encoded frame.</param>
/// <param name="clockRate">The clock rate.</param>
/// <param name="packetTime">The packet time.</param>
/// <param name="resetTimestamp">Whether to reset the RTP timestamp.</param>
/// <returns></returns>
- (NSMutableArray*) packetizeWithEncodedFrame:(NSMutableData*)encodedFrame clockRate:(int)clockRate packetTime:(int)packetTime resetTimestamp:(bool)resetTimestamp;

@end


@class NSMutableDataFMExtensions;

/// <summary>
/// A plane of data for a video buffer.
/// </summary>
#pragma clang diagnostic ignored "-Wshorten-64-to-32"
#pragma clang diagnostic ignored "-Wint-to-pointer-cast"

@interface FMIceLinkWebRTCVideoPlane : FMDynamic 

/// <summary>
/// Gets the plane data.
/// </summary>
- (NSMutableData*) data;
/// <summary>
/// Gets the starting index within the data.
/// </summary>
- (int) index;
/// <summary>
/// Initializes a new instance of the <see cref="FMIceLinkWebRTCVideoPlane" /> class.
/// </summary>
/// <param name="data">The plane data.</param>
- (id) initWithData:(NSMutableData*)data;
/// <summary>
/// Initializes a new instance of the <see cref="FMIceLinkWebRTCVideoPlane" /> class.
/// </summary>
/// <param name="data">The plane data.</param>
/// <param name="index">The starting index for the buffer.</param>
/// <param name="length">The number of bytes.</param>
- (id) initWithData:(NSMutableData*)data index:(int)index length:(int)length;
/// <summary>
/// Initializes a new instance of the <see cref="FMIceLinkWebRTCVideoPlane" /> class.
/// </summary>
/// <param name="data">The plane data.</param>
/// <param name="stride">The plane stride.</param>
- (id) initWithData:(NSMutableData*)data stride:(int)stride;
/// <summary>
/// Initializes a new instance of the <see cref="FMIceLinkWebRTCVideoPlane" /> class.
/// </summary>
/// <param name="data">The plane data.</param>
/// <param name="stride">The plane stride.</param>
/// <param name="index">The starting index for the buffer.</param>
/// <param name="length">The number of bytes.</param>
- (id) initWithData:(NSMutableData*)data stride:(int)stride index:(int)index length:(int)length;
/// <summary>
/// Gets the number of bytes.
/// </summary>
- (int) length;
/// <summary>
/// Sets the plane data.
/// </summary>
- (void) setData:(NSMutableData*)value;
/// <summary>
/// Sets the starting index within the data.
/// </summary>
- (void) setIndex:(int)value;
/// <summary>
/// Sets the number of bytes.
/// </summary>
- (void) setLength:(int)value;
/// <summary>
/// Sets the plane stride.
/// </summary>
- (void) setStride:(int)value;
/// <summary>
/// Gets the plane stride.
/// </summary>
- (int) stride;
/// <summary>
/// Initializes a new instance of the <see cref="FMIceLinkWebRTCVideoPlane" /> class.
/// </summary>
/// <param name="data">The plane data.</param>
+ (FMIceLinkWebRTCVideoPlane*) videoPlaneWithData:(NSMutableData*)data;
/// <summary>
/// Initializes a new instance of the <see cref="FMIceLinkWebRTCVideoPlane" /> class.
/// </summary>
/// <param name="data">The plane data.</param>
/// <param name="index">The starting index for the buffer.</param>
/// <param name="length">The number of bytes.</param>
+ (FMIceLinkWebRTCVideoPlane*) videoPlaneWithData:(NSMutableData*)data index:(int)index length:(int)length;
/// <summary>
/// Initializes a new instance of the <see cref="FMIceLinkWebRTCVideoPlane" /> class.
/// </summary>
/// <param name="data">The plane data.</param>
/// <param name="stride">The plane stride.</param>
+ (FMIceLinkWebRTCVideoPlane*) videoPlaneWithData:(NSMutableData*)data stride:(int)stride;
/// <summary>
/// Initializes a new instance of the <see cref="FMIceLinkWebRTCVideoPlane" /> class.
/// </summary>
/// <param name="data">The plane data.</param>
/// <param name="stride">The plane stride.</param>
/// <param name="index">The starting index for the buffer.</param>
/// <param name="length">The number of bytes.</param>
+ (FMIceLinkWebRTCVideoPlane*) videoPlaneWithData:(NSMutableData*)data stride:(int)stride index:(int)index length:(int)length;

@end


@class NSMutableDictionaryFMExtensions;
@class NSMutableArrayFMExtensions;
@class NSMutableDataFMExtensions;
@class FMIceLinkWebRTCVideoCodec;
@class NSStringFMExtensions;
@class FMIceLinkWebRTCVideoPlane;

/// <summary>
/// A video buffer.
/// </summary>
#pragma clang diagnostic ignored "-Wshorten-64-to-32"
#pragma clang diagnostic ignored "-Wint-to-pointer-cast"

@interface FMIceLinkWebRTCVideoBuffer : FMDynamic 

/// <summary>
/// Creates a black (0, 0, 0) RGB video buffer with the specified width/height.
/// </summary>
/// <param name="width">The width.</param>
/// <param name="height">The height.</param>
/// <returns></returns>
+ (FMIceLinkWebRTCVideoBuffer*) createBlackWithWidth:(int)width height:(int)height;
/// <summary>
/// Creates a blue (0, 0, 255) RGB video buffer with the specified width/height.
/// </summary>
/// <param name="width">The width.</param>
/// <param name="height">The height.</param>
/// <returns></returns>
+ (FMIceLinkWebRTCVideoBuffer*) createBlueWithWidth:(int)width height:(int)height;
/// <summary>
/// Creates a custom RGB video buffer with the specified width/height and red/green/blue values.
/// </summary>
/// <param name="width">The width.</param>
/// <param name="height">The height.</param>
/// <param name="red">The red value.</param>
/// <param name="green">The green value.</param>
/// <param name="blue">The blue value.</param>
/// <returns></returns>
+ (FMIceLinkWebRTCVideoBuffer*) createCustomWithWidth:(int)width height:(int)height red:(int)red green:(int)green blue:(int)blue;
/// <summary>
/// Creates a cyan (0, 255, 255) RGB video buffer with the specified width/height.
/// </summary>
/// <param name="width">The width.</param>
/// <param name="height">The height.</param>
/// <returns></returns>
+ (FMIceLinkWebRTCVideoBuffer*) createCyanWithWidth:(int)width height:(int)height;
/// <summary>
/// Creates a dark blue (0, 0, 128) RGB video buffer with the specified width/height.
/// </summary>
/// <param name="width">The width.</param>
/// <param name="height">The height.</param>
/// <returns></returns>
+ (FMIceLinkWebRTCVideoBuffer*) createDarkBlueWithWidth:(int)width height:(int)height;
/// <summary>
/// Creates a dark green (0, 128, 0) RGB video buffer with the specified width/height.
/// </summary>
/// <param name="width">The width.</param>
/// <param name="height">The height.</param>
/// <returns></returns>
+ (FMIceLinkWebRTCVideoBuffer*) createDarkGreenWithWidth:(int)width height:(int)height;
/// <summary>
/// Creates a dark red (128, 0, 0) RGB video buffer with the specified width/height.
/// </summary>
/// <param name="width">The width.</param>
/// <param name="height">The height.</param>
/// <returns></returns>
+ (FMIceLinkWebRTCVideoBuffer*) createDarkRedWithWidth:(int)width height:(int)height;
/// <summary>
/// Creates a gray (255, 255, 255) RGB video buffer with the specified width/height.
/// </summary>
/// <param name="width">The width.</param>
/// <param name="height">The height.</param>
/// <returns></returns>
+ (FMIceLinkWebRTCVideoBuffer*) createGrayWithWidth:(int)width height:(int)height;
/// <summary>
/// Creates a green (0, 255, 0) RGB video buffer with the specified width/height.
/// </summary>
/// <param name="width">The width.</param>
/// <param name="height">The height.</param>
/// <returns></returns>
+ (FMIceLinkWebRTCVideoBuffer*) createGreenWithWidth:(int)width height:(int)height;
/// <summary>
/// Creates a magenta (255, 0, 255) RGB video buffer with the specified width/height.
/// </summary>
/// <param name="width">The width.</param>
/// <param name="height">The height.</param>
/// <returns></returns>
+ (FMIceLinkWebRTCVideoBuffer*) createMagentaWithWidth:(int)width height:(int)height;
/// <summary>
/// Creates an olive (128, 128, 0) RGB video buffer with the specified width/height.
/// </summary>
/// <param name="width">The width.</param>
/// <param name="height">The height.</param>
/// <returns></returns>
+ (FMIceLinkWebRTCVideoBuffer*) createOliveWithWidth:(int)width height:(int)height;
/// <summary>
/// Creates a purple (128, 0, 128) RGB video buffer with the specified width/height.
/// </summary>
/// <param name="width">The width.</param>
/// <param name="height">The height.</param>
/// <returns></returns>
+ (FMIceLinkWebRTCVideoBuffer*) createPurpleWithWidth:(int)width height:(int)height;
/// <summary>
/// Creates a red (255, 0, 0) RGB video buffer with the specified width/height.
/// </summary>
/// <param name="width">The width.</param>
/// <param name="height">The height.</param>
/// <returns></returns>
+ (FMIceLinkWebRTCVideoBuffer*) createRedWithWidth:(int)width height:(int)height;
/// <summary>
/// Creates a teal (0, 128, 128) RGB video buffer with the specified width/height.
/// </summary>
/// <param name="width">The width.</param>
/// <param name="height">The height.</param>
/// <returns></returns>
+ (FMIceLinkWebRTCVideoBuffer*) createTealWithWidth:(int)width height:(int)height;
/// <summary>
/// Creates a white (255, 255, 255) RGB video buffer with the specified width/height.
/// </summary>
/// <param name="width">The width.</param>
/// <param name="height">The height.</param>
/// <returns></returns>
+ (FMIceLinkWebRTCVideoBuffer*) createWhiteWithWidth:(int)width height:(int)height;
/// <summary>
/// Creates a yellow (255, 255, 0) RGB video buffer with the specified width/height.
/// </summary>
/// <param name="width">The width.</param>
/// <param name="height">The height.</param>
/// <returns></returns>
+ (FMIceLinkWebRTCVideoBuffer*) createYellowWithWidth:(int)width height:(int)height;
/// <summary>
/// Gets whether the contents of this
/// buffer are pre-encoded.
/// </summary>
- (bool) encoded;
/// <summary>
/// Encode the buffer contents using the
/// specified codec.
/// </summary>
/// <param name="codec">The codec.</param>
- (NSMutableData*) encodeWithCodec:(FMIceLinkWebRTCVideoCodec*)codec;
/// <summary>
/// Gets the format of the video frame.
/// </summary>
- (FMIceLinkWebRTCVideoFormat) format;
/// <summary>
/// Gets the FOURCC code for the <see cref="FMIceLinkWebRTCVideoBuffer#format" />.
/// </summary>
- (long long) fourCC;
/// <summary>
/// Gets the FOURCC code for a video format.
/// </summary>
/// <param name="format">The format.</param>
/// <returns>The FOURCC code.</returns>
+ (long long) fourCCFromFormatWithFormat:(FMIceLinkWebRTCVideoFormat)format;
/// <summary>
/// Gets the FOURCC code for a video format.
/// </summary>
/// <param name="format">The format.</param>
/// <returns>The FOURCC code.</returns>
+ (long long) fourCCFromFormat:(FMIceLinkWebRTCVideoFormat)format;
- (NSMutableData*) getEncodedDataWithKey:(NSString*)key;
/// <summary>
/// Gets the height of the video frame.
/// </summary>
- (int) height;
/// <summary>
/// Initializes a new instance of the <see cref="FMIceLinkWebRTCVideoBuffer" /> class.
/// </summary>
/// <param name="width">The width of the video frame.</param>
/// <param name="height">The height of the video frame.</param>
/// <param name="plane">The buffer data plane.</param>
- (id) initWithWidth:(int)width height:(int)height plane:(FMIceLinkWebRTCVideoPlane*)plane;
/// <summary>
/// Initializes a new instance of the <see cref="FMIceLinkWebRTCVideoBuffer" /> class.
/// </summary>
/// <param name="width">The width of the video frame.</param>
/// <param name="height">The height of the video frame.</param>
/// <param name="plane">The buffer data plane.</param>
/// <param name="format">The data format.</param>
- (id) initWithWidth:(int)width height:(int)height plane:(FMIceLinkWebRTCVideoPlane*)plane format:(FMIceLinkWebRTCVideoFormat)format;
/// <summary>
/// Initializes a new instance of the <see cref="FMIceLinkWebRTCVideoBuffer" /> class.
/// </summary>
/// <param name="width">The width of the video frame.</param>
/// <param name="height">The height of the video frame.</param>
/// <param name="planes">The buffer data planes.</param>
- (id) initWithWidth:(int)width height:(int)height planes:(NSMutableArray*)planes;
/// <summary>
/// Initializes a new instance of the <see cref="FMIceLinkWebRTCVideoBuffer" /> class.
/// </summary>
/// <param name="width">The width of the video frame.</param>
/// <param name="height">The height of the video frame.</param>
/// <param name="planes">The buffer data planes.</param>
/// <param name="format">The data format.</param>
- (id) initWithWidth:(int)width height:(int)height planes:(NSMutableArray*)planes format:(FMIceLinkWebRTCVideoFormat)format;
/// <summary>
/// Initializes a new instance of the <see cref="FMIceLinkWebRTCVideoBuffer" /> class.
/// </summary>
/// <param name="width">The width of the video frame.</param>
/// <param name="height">The height of the video frame.</param>
/// <param name="rotate">The number of degrees to rotate.</param>
/// <param name="plane">The buffer data plane.</param>
- (id) initWithWidth:(int)width height:(int)height rotate:(int)rotate plane:(FMIceLinkWebRTCVideoPlane*)plane;
/// <summary>
/// Initializes a new instance of the <see cref="FMIceLinkWebRTCVideoBuffer" /> class.
/// </summary>
/// <param name="width">The width of the video frame.</param>
/// <param name="height">The height of the video frame.</param>
/// <param name="rotate">The number of degrees to rotate.</param>
/// <param name="plane">The buffer data plane.</param>
/// <param name="format">The data format.</param>
- (id) initWithWidth:(int)width height:(int)height rotate:(int)rotate plane:(FMIceLinkWebRTCVideoPlane*)plane format:(FMIceLinkWebRTCVideoFormat)format;
/// <summary>
/// Initializes a new instance of the <see cref="FMIceLinkWebRTCVideoBuffer" /> class.
/// </summary>
/// <param name="width">The width of the video frame.</param>
/// <param name="height">The height of the video frame.</param>
/// <param name="rotate">The number of degrees to rotate.</param>
/// <param name="planes">The buffer data planes.</param>
- (id) initWithWidth:(int)width height:(int)height rotate:(int)rotate planes:(NSMutableArray*)planes;
/// <summary>
/// Initializes a new instance of the <see cref="FMIceLinkWebRTCVideoBuffer" /> class.
/// </summary>
/// <param name="width">The width of the video frame.</param>
/// <param name="height">The height of the video frame.</param>
/// <param name="rotate">The number of degrees to rotate.</param>
/// <param name="planes">The buffer data planes.</param>
/// <param name="format">The data format.</param>
- (id) initWithWidth:(int)width height:(int)height rotate:(int)rotate planes:(NSMutableArray*)planes format:(FMIceLinkWebRTCVideoFormat)format;
/// <summary>
/// Gets the first buffer plane.
/// </summary>
- (FMIceLinkWebRTCVideoPlane*) plane;
/// <summary>
/// Gets the buffer planes.
/// </summary>
- (NSMutableArray*) planes;
/// <summary>
/// Gets the presentation timestamp,
/// if it is available, or -1 if it is not.
/// </summary>
- (long long) presentationTimestamp;
/// <summary>
/// Gets the previous buffer.
/// </summary>
- (FMIceLinkWebRTCVideoBuffer*) previousBuffer;
/// <summary>
/// Gets the previous buffers.
/// </summary>
- (NSMutableArray*) previousBuffers;
/// <summary>
/// Gets a value indicating whether the
/// encoder should treat this as a key frame.
/// </summary>
- (bool) resetKeyFrame;
/// <summary>
/// Gets the number of degrees to rotate
/// in a clock-wise direction. Valid values are
/// 0, 90, 180, and 270.
/// </summary>
- (int) rotate;
/// <summary>
/// Sets whether the contents of this
/// buffer are pre-encoded.
/// </summary>
- (void) setEncoded:(bool)value;
/// <summary>
/// Sets the format of the video frame.
/// </summary>
- (void) setFormat:(FMIceLinkWebRTCVideoFormat)value;
/// <summary>
/// Sets the height of the video frame.
/// </summary>
- (void) setHeight:(int)value;
/// <summary>
/// Sets the first buffer plane.
/// </summary>
- (void) setPlane:(FMIceLinkWebRTCVideoPlane*)value;
/// <summary>
/// Sets the buffer planes.
/// </summary>
- (void) setPlanes:(NSMutableArray*)value;
/// <summary>
/// Sets the presentation timestamp,
/// if it is available, or -1 if it is not.
/// </summary>
- (void) setPresentationTimestamp:(long long)value;
/// <summary>
/// Sets the previous buffer.
/// </summary>
- (void) setPreviousBuffer:(FMIceLinkWebRTCVideoBuffer*)value;
/// <summary>
/// Sets the previous buffers.
/// </summary>
- (void) setPreviousBuffers:(NSMutableArray*)value;
/// <summary>
/// Sets a value indicating whether the
/// encoder should treat this as a key frame.
/// </summary>
- (void) setResetKeyFrame:(bool)value;
/// <summary>
/// Sets the number of degrees to rotate
/// in a clock-wise direction. Valid values are
/// 0, 90, 180, and 270.
/// </summary>
- (void) setRotate:(int)value;
/// <summary>
/// Sets the width of the video frame.
/// </summary>
- (void) setWidth:(int)value;
/// <summary>
/// Initializes a new instance of the <see cref="FMIceLinkWebRTCVideoBuffer" /> class.
/// </summary>
/// <param name="width">The width of the video frame.</param>
/// <param name="height">The height of the video frame.</param>
/// <param name="plane">The buffer data plane.</param>
+ (FMIceLinkWebRTCVideoBuffer*) videoBufferWithWidth:(int)width height:(int)height plane:(FMIceLinkWebRTCVideoPlane*)plane;
/// <summary>
/// Initializes a new instance of the <see cref="FMIceLinkWebRTCVideoBuffer" /> class.
/// </summary>
/// <param name="width">The width of the video frame.</param>
/// <param name="height">The height of the video frame.</param>
/// <param name="plane">The buffer data plane.</param>
/// <param name="format">The data format.</param>
+ (FMIceLinkWebRTCVideoBuffer*) videoBufferWithWidth:(int)width height:(int)height plane:(FMIceLinkWebRTCVideoPlane*)plane format:(FMIceLinkWebRTCVideoFormat)format;
/// <summary>
/// Initializes a new instance of the <see cref="FMIceLinkWebRTCVideoBuffer" /> class.
/// </summary>
/// <param name="width">The width of the video frame.</param>
/// <param name="height">The height of the video frame.</param>
/// <param name="planes">The buffer data planes.</param>
+ (FMIceLinkWebRTCVideoBuffer*) videoBufferWithWidth:(int)width height:(int)height planes:(NSMutableArray*)planes;
/// <summary>
/// Initializes a new instance of the <see cref="FMIceLinkWebRTCVideoBuffer" /> class.
/// </summary>
/// <param name="width">The width of the video frame.</param>
/// <param name="height">The height of the video frame.</param>
/// <param name="planes">The buffer data planes.</param>
/// <param name="format">The data format.</param>
+ (FMIceLinkWebRTCVideoBuffer*) videoBufferWithWidth:(int)width height:(int)height planes:(NSMutableArray*)planes format:(FMIceLinkWebRTCVideoFormat)format;
/// <summary>
/// Initializes a new instance of the <see cref="FMIceLinkWebRTCVideoBuffer" /> class.
/// </summary>
/// <param name="width">The width of the video frame.</param>
/// <param name="height">The height of the video frame.</param>
/// <param name="rotate">The number of degrees to rotate.</param>
/// <param name="plane">The buffer data plane.</param>
+ (FMIceLinkWebRTCVideoBuffer*) videoBufferWithWidth:(int)width height:(int)height rotate:(int)rotate plane:(FMIceLinkWebRTCVideoPlane*)plane;
/// <summary>
/// Initializes a new instance of the <see cref="FMIceLinkWebRTCVideoBuffer" /> class.
/// </summary>
/// <param name="width">The width of the video frame.</param>
/// <param name="height">The height of the video frame.</param>
/// <param name="rotate">The number of degrees to rotate.</param>
/// <param name="plane">The buffer data plane.</param>
/// <param name="format">The data format.</param>
+ (FMIceLinkWebRTCVideoBuffer*) videoBufferWithWidth:(int)width height:(int)height rotate:(int)rotate plane:(FMIceLinkWebRTCVideoPlane*)plane format:(FMIceLinkWebRTCVideoFormat)format;
/// <summary>
/// Initializes a new instance of the <see cref="FMIceLinkWebRTCVideoBuffer" /> class.
/// </summary>
/// <param name="width">The width of the video frame.</param>
/// <param name="height">The height of the video frame.</param>
/// <param name="rotate">The number of degrees to rotate.</param>
/// <param name="planes">The buffer data planes.</param>
+ (FMIceLinkWebRTCVideoBuffer*) videoBufferWithWidth:(int)width height:(int)height rotate:(int)rotate planes:(NSMutableArray*)planes;
/// <summary>
/// Initializes a new instance of the <see cref="FMIceLinkWebRTCVideoBuffer" /> class.
/// </summary>
/// <param name="width">The width of the video frame.</param>
/// <param name="height">The height of the video frame.</param>
/// <param name="rotate">The number of degrees to rotate.</param>
/// <param name="planes">The buffer data planes.</param>
/// <param name="format">The data format.</param>
+ (FMIceLinkWebRTCVideoBuffer*) videoBufferWithWidth:(int)width height:(int)height rotate:(int)rotate planes:(NSMutableArray*)planes format:(FMIceLinkWebRTCVideoFormat)format;
/// <summary>
/// Gets the width of the video frame.
/// </summary>
- (int) width;

@end


@class FMIceLinkWebRTCVideoBuffer;
@class NSMutableDataFMExtensions;
@class FMIceLinkRTPPacket;
@class NSMutableArrayFMExtensions;

/// <summary>
/// An implementation of a RED encoder/decoder.
/// </summary>
#pragma clang diagnostic ignored "-Wshorten-64-to-32"
#pragma clang diagnostic ignored "-Wint-to-pointer-cast"

@interface FMIceLinkWebRTCRedCodec : FMIceLinkWebRTCVideoCodec 

/// <summary>
/// Gets whether the decoder needs a keyframe. This
/// is checked after every failed Decode operation.
/// </summary>
/// <returns></returns>
- (bool) decoderNeedsKeyFrame;
/// <summary>
/// Decodes an encoded frame.
/// </summary>
/// <param name="encodedFrame">The encoded frame.</param>
/// <returns></returns>
- (FMIceLinkWebRTCVideoBuffer*) decodeWithEncodedFrame:(NSMutableData*)encodedFrame;
/// <summary>
/// Depacketizes a packet.
/// </summary>
/// <param name="packet">The packet.</param>
/// <returns></returns>
- (NSMutableData*) depacketizeWithPacket:(FMIceLinkRTPPacket*)packet;
/// <summary>
/// Destroys the codec.
/// </summary>
- (void) destroy;
/// <summary>
/// Encodes a frame.
/// </summary>
/// <param name="frame">The frame.</param>
/// <returns></returns>
- (NSMutableData*) encodeWithFrame:(FMIceLinkWebRTCVideoBuffer*)frame;
- (id) init;
/// <summary>
/// Packetizes an encoded frame.
/// </summary>
/// <param name="encodedFrame">The encoded frame.</param>
/// <returns></returns>
- (NSMutableArray*) packetizeWithEncodedFrame:(NSMutableData*)encodedFrame;
/// <summary>
/// Processes RTCP packets.
/// </summary>
/// <param name="packets">The packets to process.</param>
- (void) processRTCPWithPackets:(NSMutableArray*)packets;
+ (FMIceLinkWebRTCRedCodec*) redCodec;

@end


@class NSMutableDictionaryFMExtensions;
@class FMIceLinkLink;
@class FMIceLinkWebRTCMediaStream;
@class FMIceLinkWebRTCAudioRenderProvider;
@class FMIceLinkWebRTCVideoRenderProvider;
@class FMIceLinkWebRTCReliableDataManager;
@class FMIceLinkWebRTCRemoteAudioRenderProvider;
@class FMIceLinkWebRTCRemoteDataChannelCaptureProvider;
@class FMIceLinkWebRTCRemoteDataChannelRenderProvider;
@class FMIceLinkWebRTCRemoteVideoRenderProvider;
@class FMIceLinkWebRTCAudioBuffer;
@class FMIceLinkWebRTCVideoBuffer;
@class FMIceLinkWebRTCDataChannelInfo;
@class NSStringFMExtensions;
@class FMIceLinkWebRTCReliableDataChannel;
@class NSMutableDataFMExtensions;
@class FMIceLinkWebRTCFecProtectionParameters;

/// <summary>
/// Extension methods for <see cref="FMIceLinkLink" /> instances.
/// </summary>
#pragma clang diagnostic ignored "-Wshorten-64-to-32"
#pragma clang diagnostic ignored "-Wint-to-pointer-cast"

@interface FMIceLinkLink (FMIceLinkWebRTCExtensions)

- (NSMutableDictionary*) getDataChannelSsrcMap;
+ (NSMutableDictionary*) getDataChannelSsrcMapWithLink:(FMIceLinkLink*)link;
- (FMIceLinkWebRTCMediaStream*) getDeleteRemoteStream;
+ (FMIceLinkWebRTCMediaStream*) getDeleteRemoteStreamWithLink:(FMIceLinkLink*)link;
- (FMIceLinkWebRTCMediaStream*) getInsertRemoteStream;
+ (FMIceLinkWebRTCMediaStream*) getInsertRemoteStreamWithLink:(FMIceLinkLink*)link;
/// <summary>
/// Gets the local audio render provider.
/// </summary>
/// <param name="link">The link.</param>
/// <returns>The local audio render provider.</returns>
- (FMIceLinkWebRTCAudioRenderProvider*) getLocalAudioRenderProvider;
/// <summary>
/// Gets the local audio render provider.
/// </summary>
/// <param name="link">The link.</param>
/// <param name="index">The index of the audio stream.</param>
/// <returns>The local audio render provider.</returns>
- (FMIceLinkWebRTCAudioRenderProvider*) getLocalAudioRenderProviderWithIndex:(int)index;
/// <summary>
/// Gets the local audio render provider.
/// </summary>
/// <param name="link">The link.</param>
/// <returns>The local audio render provider.</returns>
+ (FMIceLinkWebRTCAudioRenderProvider*) getLocalAudioRenderProviderWithLink:(FMIceLinkLink*)link;
/// <summary>
/// Gets the local audio render provider.
/// </summary>
/// <param name="link">The link.</param>
/// <param name="index">The index of the audio stream.</param>
/// <returns>The local audio render provider.</returns>
+ (FMIceLinkWebRTCAudioRenderProvider*) getLocalAudioRenderProviderWithLink:(FMIceLinkLink*)link index:(int)index;
/// <summary>
/// Gets the local video render provider.
/// </summary>
/// <param name="link">The link.</param>
/// <returns>The local video render provider.</returns>
- (FMIceLinkWebRTCVideoRenderProvider*) getLocalVideoRenderProvider;
/// <summary>
/// Gets the local video render provider.
/// </summary>
/// <param name="link">The link.</param>
/// <param name="index">The index of the video stream.</param>
/// <returns>The local video render provider.</returns>
- (FMIceLinkWebRTCVideoRenderProvider*) getLocalVideoRenderProviderWithIndex:(int)index;
/// <summary>
/// Gets the local video render provider.
/// </summary>
/// <param name="link">The link.</param>
/// <returns>The local video render provider.</returns>
+ (FMIceLinkWebRTCVideoRenderProvider*) getLocalVideoRenderProviderWithLink:(FMIceLinkLink*)link;
/// <summary>
/// Gets the local video render provider.
/// </summary>
/// <param name="link">The link.</param>
/// <param name="index">The index of the video stream.</param>
/// <returns>The local video render provider.</returns>
+ (FMIceLinkWebRTCVideoRenderProvider*) getLocalVideoRenderProviderWithLink:(FMIceLinkLink*)link index:(int)index;
- (FMIceLinkWebRTCReliableDataManager*) getReliableDataManager;
+ (FMIceLinkWebRTCReliableDataManager*) getReliableDataManagerWithLink:(FMIceLinkLink*)link;
- (FMIceLinkWebRTCRemoteAudioRenderProvider*) getRemoteAudioRenderProviderWithIndex:(int)index;
+ (FMIceLinkWebRTCRemoteAudioRenderProvider*) getRemoteAudioRenderProviderWithLink:(FMIceLinkLink*)link index:(int)index;
/// <summary>
/// Gets the volume of the remote audio stream.
/// </summary>
/// <param name="link">The link.</param>
/// <returns>The volume (1.0 is unity gain).</returns>
- (float) getRemoteAudioVolume;
/// <summary>
/// Gets the volume of the remote audio stream.
/// </summary>
/// <param name="link">The link.</param>
/// <returns>The volume (1.0 is unity gain).</returns>
+ (float) getRemoteAudioVolumeWithLink:(FMIceLinkLink*)link;
- (FMIceLinkWebRTCRemoteDataChannelCaptureProvider*) getRemoteDataChannelCaptureProvider;
+ (FMIceLinkWebRTCRemoteDataChannelCaptureProvider*) getRemoteDataChannelCaptureProviderWithLink:(FMIceLinkLink*)link;
- (FMIceLinkWebRTCRemoteDataChannelRenderProvider*) getRemoteDataChannelRenderProvider;
+ (FMIceLinkWebRTCRemoteDataChannelRenderProvider*) getRemoteDataChannelRenderProviderWithLink:(FMIceLinkLink*)link;
/// <summary>
/// Gets the remote media stream.
/// </summary>
/// <param name="link">The link.</param>
/// <returns>The remote media stream.</returns>
- (FMIceLinkWebRTCMediaStream*) getRemoteStream;
/// <summary>
/// Gets the remote media stream.
/// </summary>
/// <param name="link">The link.</param>
/// <returns>The remote media stream.</returns>
+ (FMIceLinkWebRTCMediaStream*) getRemoteStreamWithLink:(FMIceLinkLink*)link;
/// <summary>
/// Gets the video control used for rendering remote video.
/// </summary>
/// <param name="link">The link.</param>
/// <returns>The remote video control.</returns>
- (NSObject*) getRemoteVideoControl;
/// <summary>
/// Gets the video control used for rendering remote video.
/// </summary>
/// <param name="link">The link.</param>
/// <param name="index">The index of the video stream.</param>
/// <returns>The remote video control.</returns>
- (NSObject*) getRemoteVideoControlWithIndex:(int)index;
/// <summary>
/// Gets the video control used for rendering remote video.
/// </summary>
/// <param name="link">The link.</param>
/// <returns>The remote video control.</returns>
+ (NSObject*) getRemoteVideoControlWithLink:(FMIceLinkLink*)link;
/// <summary>
/// Gets the video control used for rendering remote video.
/// </summary>
/// <param name="link">The link.</param>
/// <param name="index">The index of the video stream.</param>
/// <returns>The remote video control.</returns>
+ (NSObject*) getRemoteVideoControlWithLink:(FMIceLinkLink*)link index:(int)index;
/// <summary>
/// Gets the remote video height.
/// </summary>
/// <param name="link">The link.</param>
/// <returns>The remote video height.</returns>
- (int) getRemoteVideoHeight;
/// <summary>
/// Gets the remote video height.
/// </summary>
/// <param name="link">The link.</param>
/// <returns>The remote video height.</returns>
+ (int) getRemoteVideoHeightWithLink:(FMIceLinkLink*)link;
- (FMIceLinkWebRTCRemoteVideoRenderProvider*) getRemoteVideoRenderProviderWithIndex:(int)index;
+ (FMIceLinkWebRTCRemoteVideoRenderProvider*) getRemoteVideoRenderProviderWithLink:(FMIceLinkLink*)link index:(int)index;
/// <summary>
/// Gets the remote video width.
/// </summary>
/// <param name="link">The link.</param>
/// <returns>The remote video width.</returns>
- (int) getRemoteVideoWidth;
/// <summary>
/// Gets the remote video width.
/// </summary>
/// <param name="link">The link.</param>
/// <returns>The remote video width.</returns>
+ (int) getRemoteVideoWidthWithLink:(FMIceLinkLink*)link;
/// <summary>
/// Stops the rendering of incoming remote audio frames.
/// </summary>
/// <param name="link">The link.</param>
/// <returns><c>true</c> if the mute operation was successful; otherwise, <c>false</c>.</returns>
- (bool) muteRemoteAudio;
/// <summary>
/// Stops the rendering of incoming remote audio frames.
/// </summary>
/// <param name="link">The link.</param>
/// <returns><c>true</c> if the mute operation was successful; otherwise, <c>false</c>.</returns>
+ (bool) muteRemoteAudioWithLink:(FMIceLinkLink*)link;
/// <summary>
/// Stops the rendering of incoming remote video frames.
/// </summary>
/// <param name="link">The link.</param>
/// <returns><c>true</c> if the mute operation was successful; otherwise, <c>false</c>.</returns>
- (bool) muteRemoteVideo;
/// <summary>
/// Stops the rendering of incoming remote video frames.
/// </summary>
/// <param name="link">The link.</param>
/// <returns><c>true</c> if the mute operation was successful; otherwise, <c>false</c>.</returns>
+ (bool) muteRemoteVideoWithLink:(FMIceLinkLink*)link;
/// <summary>
/// Gets whether the remote audio is muted.
/// </summary>
/// <param name="link">The link.</param>
/// <returns><c>true</c> if the remote audio is muted; otherwise, <c>false</c>.</returns>
- (bool) remoteAudioIsMuted;
/// <summary>
/// Gets whether the remote audio is muted.
/// </summary>
/// <param name="link">The link.</param>
/// <returns><c>true</c> if the remote audio is muted; otherwise, <c>false</c>.</returns>
+ (bool) remoteAudioIsMutedWithLink:(FMIceLinkLink*)link;
/// <summary>
/// Gets whether the remote video is muted.
/// </summary>
/// <param name="link">The link.</param>
/// <returns><c>true</c> if the remote video is muted; otherwise, <c>false</c>.</returns>
- (bool) remoteVideoIsMuted;
/// <summary>
/// Gets whether the remote video is muted.
/// </summary>
/// <param name="link">The link.</param>
/// <returns><c>true</c> if the remote video is muted; otherwise, <c>false</c>.</returns>
+ (bool) remoteVideoIsMutedWithLink:(FMIceLinkLink*)link;
/// <summary>
/// Force-renders audio to the audio control used to play remote audio.
/// </summary>
/// <param name="link">The link.</param>
/// <param name="audioBuffer">The audio buffer.</param>
- (void) renderRemoteAudioWithAudioBuffer:(FMIceLinkWebRTCAudioBuffer*)audioBuffer;
/// <summary>
/// Force-renders audio to the audio control used to play remote audio.
/// </summary>
/// <param name="link">The link.</param>
/// <param name="audioBuffer">The audio buffer.</param>
- (void) renderRemoteAudioWithBuffer:(FMIceLinkWebRTCAudioBuffer*)audioBuffer;
/// <summary>
/// Force-renders audio to the audio control used to play remote audio.
/// </summary>
/// <param name="link">The link.</param>
/// <param name="audioBuffer">The audio buffer.</param>
+ (void) renderRemoteAudioWithLink:(FMIceLinkLink*)link audioBuffer:(FMIceLinkWebRTCAudioBuffer*)audioBuffer;
/// <summary>
/// Force-renders video to the video control used to display remote video.
/// </summary>
/// <param name="link">The link.</param>
/// <param name="videoBuffer">The video buffer.</param>
+ (void) renderRemoteVideoWithLink:(FMIceLinkLink*)link videoBuffer:(FMIceLinkWebRTCVideoBuffer*)videoBuffer;
/// <summary>
/// Force-renders video to the video control used to display remote video.
/// </summary>
/// <param name="link">The link.</param>
/// <param name="videoBuffer">The video buffer.</param>
- (void) renderRemoteVideoWithVideoBuffer:(FMIceLinkWebRTCVideoBuffer*)videoBuffer;
/// <summary>
/// Force-renders video to the video control used to display remote video.
/// </summary>
/// <param name="link">The link.</param>
/// <param name="videoBuffer">The video buffer.</param>
- (void) renderRemoteVideoWithBuffer:(FMIceLinkWebRTCVideoBuffer*)videoBuffer;
/// <summary>
/// Sends a data channel packet to the peer.
/// </summary>
/// <param name="link">The link.</param>
/// <param name="channelInfo">The data channel description.</param>
/// <param name="data">The data to send.</param>
- (int) sendDataWithChannelInfo:(FMIceLinkWebRTCDataChannelInfo*)channelInfo data:(NSString*)data;
/// <summary>
/// Sends a data channel packet to the peer.
/// </summary>
/// <param name="link">The link.</param>
/// <param name="channelInfo">The data channel description.</param>
/// <param name="data">The data to send.</param>
+ (int) sendDataWithLink:(FMIceLinkLink*)link channelInfo:(FMIceLinkWebRTCDataChannelInfo*)channelInfo data:(NSString*)data;
/// <summary>
/// Sends a data channel packet to the peer.
/// </summary>
/// <param name="link">The link.</param>
/// <param name="channel">The data channel description.</param>
/// <param name="dataBytes">The data binary.</param>
/// <returns></returns>
- (bool) sendReliableBytesWithChannel:(FMIceLinkWebRTCReliableDataChannel*)channel dataBytes:(NSMutableData*)dataBytes;
/// <summary>
/// Sends a data channel packet to the peer.
/// </summary>
/// <param name="link">The link.</param>
/// <param name="channel">The data channel description.</param>
/// <param name="dataBytes">The data binary.</param>
/// <returns></returns>
+ (bool) sendReliableBytesWithLink:(FMIceLinkLink*)link channel:(FMIceLinkWebRTCReliableDataChannel*)channel dataBytes:(NSMutableData*)dataBytes;
/// <summary>
/// Sends a data channel packet to the peer.
/// </summary>
/// <param name="link">The link.</param>
/// <param name="channel">The data channel description.</param>
/// <param name="dataString">The data string.</param>
/// <returns></returns>
- (bool) sendReliableStringWithChannel:(FMIceLinkWebRTCReliableDataChannel*)channel dataString:(NSString*)dataString;
/// <summary>
/// Sends a data channel packet to the peer.
/// </summary>
/// <param name="link">The link.</param>
/// <param name="channel">The data channel description.</param>
/// <param name="dataString">The data string.</param>
/// <returns></returns>
+ (bool) sendReliableStringWithLink:(FMIceLinkLink*)link channel:(FMIceLinkWebRTCReliableDataChannel*)channel dataString:(NSString*)dataString;
+ (void) setDataChannelSsrcMapWithLink:(FMIceLinkLink*)link remoteDataSsrcMap:(NSMutableDictionary*)remoteDataSsrcMap;
- (void) setDataChannelSsrcMapWithRemoteDataSsrcMap:(NSMutableDictionary*)remoteDataSsrcMap;
/// <summary>
/// Sets the delta-frame FEC parameters for a remote video stream.
/// </summary>
/// <param name="link">The link.</param>
/// <param name="deltaFecParameters">The delta-frame FEC parameters.</param>
- (void) setDeltaFecParametersWithDeltaFecParameters:(FMIceLinkWebRTCFecProtectionParameters*)deltaFecParameters;
/// <summary>
/// Sets the delta-frame FEC parameters for a remote video stream.
/// </summary>
/// <param name="link">The link.</param>
/// <param name="deltaFecParameters">The delta-frame FEC parameters.</param>
- (void) setDeltaFecParameters:(FMIceLinkWebRTCFecProtectionParameters*)deltaFecParameters;
/// <summary>
/// Sets the delta-frame FEC parameters for a remote video stream.
/// </summary>
/// <param name="link">The link.</param>
/// <param name="index">The index of the video stream.</param>
/// <param name="deltaFecParameters">The delta-frame FEC parameters.</param>
- (void) setDeltaFecParametersWithIndex:(int)index deltaFecParameters:(FMIceLinkWebRTCFecProtectionParameters*)deltaFecParameters;
/// <summary>
/// Sets the delta-frame FEC parameters for a remote video stream.
/// </summary>
/// <param name="link">The link.</param>
/// <param name="deltaFecParameters">The delta-frame FEC parameters.</param>
+ (void) setDeltaFecParametersWithLink:(FMIceLinkLink*)link deltaFecParameters:(FMIceLinkWebRTCFecProtectionParameters*)deltaFecParameters;
/// <summary>
/// Sets the delta-frame FEC parameters for a remote video stream.
/// </summary>
/// <param name="link">The link.</param>
/// <param name="index">The index of the video stream.</param>
/// <param name="deltaFecParameters">The delta-frame FEC parameters.</param>
+ (void) setDeltaFecParametersWithLink:(FMIceLinkLink*)link index:(int)index deltaFecParameters:(FMIceLinkWebRTCFecProtectionParameters*)deltaFecParameters;
/// <summary>
/// Sets the keyframe FEC parameters for a remote video stream.
/// </summary>
/// <param name="link">The link.</param>
/// <param name="index">The index of the video stream.</param>
/// <param name="keyFecParameters">The keyframe FEC parameters.</param>
- (void) setKeyFecParametersWithIndex:(int)index keyFecParameters:(FMIceLinkWebRTCFecProtectionParameters*)keyFecParameters;
/// <summary>
/// Sets the keyframe FEC parameters for a remote video stream.
/// </summary>
/// <param name="link">The link.</param>
/// <param name="keyFecParameters">The keyframe FEC parameters.</param>
- (void) setKeyFecParametersWithKeyFecParameters:(FMIceLinkWebRTCFecProtectionParameters*)keyFecParameters;
/// <summary>
/// Sets the keyframe FEC parameters for a remote video stream.
/// </summary>
/// <param name="link">The link.</param>
/// <param name="keyFecParameters">The keyframe FEC parameters.</param>
- (void) setKeyFecParameters:(FMIceLinkWebRTCFecProtectionParameters*)keyFecParameters;
/// <summary>
/// Sets the keyframe FEC parameters for a remote video stream.
/// </summary>
/// <param name="link">The link.</param>
/// <param name="index">The index of the video stream.</param>
/// <param name="keyFecParameters">The keyframe FEC parameters.</param>
+ (void) setKeyFecParametersWithLink:(FMIceLinkLink*)link index:(int)index keyFecParameters:(FMIceLinkWebRTCFecProtectionParameters*)keyFecParameters;
/// <summary>
/// Sets the keyframe FEC parameters for a remote video stream.
/// </summary>
/// <param name="link">The link.</param>
/// <param name="keyFecParameters">The keyframe FEC parameters.</param>
+ (void) setKeyFecParametersWithLink:(FMIceLinkLink*)link keyFecParameters:(FMIceLinkWebRTCFecProtectionParameters*)keyFecParameters;
+ (void) setLocalAudioRenderProviderWithLink:(FMIceLinkLink*)link localAudioRender:(FMIceLinkWebRTCAudioRenderProvider*)localAudioRender index:(int)index;
- (void) setLocalAudioRenderProviderWithLocalAudioRender:(FMIceLinkWebRTCAudioRenderProvider*)localAudioRender index:(int)index;
+ (void) setLocalVideoRenderProviderWithLink:(FMIceLinkLink*)link localVideoRender:(FMIceLinkWebRTCVideoRenderProvider*)localVideoRender index:(int)index;
- (void) setLocalVideoRenderProviderWithLocalVideoRender:(FMIceLinkWebRTCVideoRenderProvider*)localVideoRender index:(int)index;
+ (void) setReliableDataManagerWithLink:(FMIceLinkLink*)link reliableDataManager:(FMIceLinkWebRTCReliableDataManager*)reliableDataManager;
- (void) setReliableDataManagerWithReliableDataManager:(FMIceLinkWebRTCReliableDataManager*)reliableDataManager;
- (void) setReliableDataManager:(FMIceLinkWebRTCReliableDataManager*)reliableDataManager;
+ (void) setRemoteAudioRenderProviderWithLink:(FMIceLinkLink*)link remoteAudioRender:(FMIceLinkWebRTCRemoteAudioRenderProvider*)remoteAudioRender index:(int)index;
- (void) setRemoteAudioRenderProviderWithRemoteAudioRender:(FMIceLinkWebRTCRemoteAudioRenderProvider*)remoteAudioRender index:(int)index;
/// <summary>
/// Sets the volume of the remote audio stream.
/// </summary>
/// <param name="link">The link.</param>
/// <param name="volume">The volume (1.0 is unity gain).</param>
/// <returns><c>true</c> if successful; otherwise, <c>false</c>.</returns>
+ (bool) setRemoteAudioVolumeWithLink:(FMIceLinkLink*)link volume:(float)volume;
/// <summary>
/// Sets the volume of the remote audio stream.
/// </summary>
/// <param name="link">The link.</param>
/// <param name="volume">The volume (1.0 is unity gain).</param>
/// <returns><c>true</c> if successful; otherwise, <c>false</c>.</returns>
- (bool) setRemoteAudioVolumeWithVolume:(float)volume;
/// <summary>
/// Sets the volume of the remote audio stream.
/// </summary>
/// <param name="link">The link.</param>
/// <param name="volume">The volume (1.0 is unity gain).</param>
/// <returns><c>true</c> if successful; otherwise, <c>false</c>.</returns>
- (bool) setRemoteAudioVolume:(float)volume;
+ (void) setRemoteDataChannelCaptureProviderWithLink:(FMIceLinkLink*)link remoteDataChannelCapture:(FMIceLinkWebRTCRemoteDataChannelCaptureProvider*)remoteDataChannelCapture;
- (void) setRemoteDataChannelCaptureProviderWithRemoteDataChannelCapture:(FMIceLinkWebRTCRemoteDataChannelCaptureProvider*)remoteDataChannelCapture;
+ (void) setRemoteDataChannelRenderProviderWithLink:(FMIceLinkLink*)link remoteDataChannelRender:(FMIceLinkWebRTCRemoteDataChannelRenderProvider*)remoteDataChannelRender;
- (void) setRemoteDataChannelRenderProviderWithRemoteDataChannelRender:(FMIceLinkWebRTCRemoteDataChannelRenderProvider*)remoteDataChannelRender;
+ (void) setRemoteStreamWithLink:(FMIceLinkLink*)link remoteStream:(FMIceLinkWebRTCMediaStream*)remoteStream;
- (void) setRemoteStreamWithRemoteStream:(FMIceLinkWebRTCMediaStream*)remoteStream;
- (void) setRemoteStream:(FMIceLinkWebRTCMediaStream*)remoteStream;
+ (void) setRemoteVideoRenderProviderWithLink:(FMIceLinkLink*)link remoteVideoRender:(FMIceLinkWebRTCRemoteVideoRenderProvider*)remoteVideoRender index:(int)index;
- (void) setRemoteVideoRenderProviderWithRemoteVideoRender:(FMIceLinkWebRTCRemoteVideoRenderProvider*)remoteVideoRender index:(int)index;
/// <summary>
/// Toggles the rendering of incoming remote audio frames.
/// </summary>
/// <param name="link">The link.</param>
/// <returns><c>true</c> if the operation was successful; otherwise, <c>false</c>.</returns>
- (bool) toggleRemoteAudioMute;
/// <summary>
/// Toggles the rendering of incoming remote audio frames.
/// </summary>
/// <param name="link">The link.</param>
/// <returns><c>true</c> if the operation was successful; otherwise, <c>false</c>.</returns>
+ (bool) toggleRemoteAudioMuteWithLink:(FMIceLinkLink*)link;
/// <summary>
/// Toggles the rendering of incoming remote video frames.
/// </summary>
/// <param name="link">The link.</param>
/// <returns><c>true</c> if the operation was successful; otherwise, <c>false</c>.</returns>
- (bool) toggleRemoteVideoMute;
/// <summary>
/// Toggles the rendering of incoming remote video frames.
/// </summary>
/// <param name="link">The link.</param>
/// <returns><c>true</c> if the operation was successful; otherwise, <c>false</c>.</returns>
+ (bool) toggleRemoteVideoMuteWithLink:(FMIceLinkLink*)link;
/// <summary>
/// Starts the rendering of incoming remote audio frames.
/// </summary>
/// <param name="link">The link.</param>
/// <returns><c>true</c> if the unmute operation was successful; otherwise, <c>false</c>.</returns>
- (bool) unmuteRemoteAudio;
/// <summary>
/// Starts the rendering of incoming remote audio frames.
/// </summary>
/// <param name="link">The link.</param>
/// <returns><c>true</c> if the unmute operation was successful; otherwise, <c>false</c>.</returns>
+ (bool) unmuteRemoteAudioWithLink:(FMIceLinkLink*)link;
/// <summary>
/// Starts the rendering of incoming remote video frames.
/// </summary>
/// <param name="link">The link.</param>
/// <returns><c>true</c> if the unmute operation was successful; otherwise, <c>false</c>.</returns>
- (bool) unmuteRemoteVideo;
/// <summary>
/// Starts the rendering of incoming remote video frames.
/// </summary>
/// <param name="link">The link.</param>
/// <returns><c>true</c> if the unmute operation was successful; otherwise, <c>false</c>.</returns>
+ (bool) unmuteRemoteVideoWithLink:(FMIceLinkLink*)link;
- (bool) unsetDataChannelSsrcMap;
+ (bool) unsetDataChannelSsrcMapWithLink:(FMIceLinkLink*)link;
- (bool) unsetLocalAudioRenderProviderWithIndex:(int)index;
+ (bool) unsetLocalAudioRenderProviderWithLink:(FMIceLinkLink*)link index:(int)index;
- (bool) unsetLocalVideoRenderProviderWithIndex:(int)index;
+ (bool) unsetLocalVideoRenderProviderWithLink:(FMIceLinkLink*)link index:(int)index;
- (bool) unsetReliableDataManager;
+ (bool) unsetReliableDataManagerWithLink:(FMIceLinkLink*)link;
- (bool) unsetRemoteAudioRenderProviderWithIndex:(int)index;
+ (bool) unsetRemoteAudioRenderProviderWithLink:(FMIceLinkLink*)link index:(int)index;
- (bool) unsetRemoteDataChannelCaptureProvider;
+ (bool) unsetRemoteDataChannelCaptureProviderWithLink:(FMIceLinkLink*)link;
- (bool) unsetRemoteDataChannelRenderProvider;
+ (bool) unsetRemoteDataChannelRenderProviderWithLink:(FMIceLinkLink*)link;
- (void) unsetRemoteStream;
+ (void) unsetRemoteStreamWithLink:(FMIceLinkLink*)link;
- (bool) unsetRemoteVideoRenderProviderWithIndex:(int)index;
+ (bool) unsetRemoteVideoRenderProviderWithLink:(FMIceLinkLink*)link index:(int)index;

@end


@class FMIceLinkUnhandledExceptionArgs;
@class FMIceLinkWebRTCDataChannelReceiveArgs;
@class NSStringFMExtensions;
@class FMCallback;
@class NSMutableArrayFMExtensions;
@class FMIceLinkLink;

/// <summary>
/// An ureliable (UDP-based) WebRTC data channel description.
/// </summary>
#pragma clang diagnostic ignored "-Wshorten-64-to-32"
#pragma clang diagnostic ignored "-Wint-to-pointer-cast"

@interface FMIceLinkWebRTCDataChannelInfo : NSObject 

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
/// Gets the Canonical End-Point Identifier (CNAME).
/// </summary>
- (NSString*) cname;
+ (FMIceLinkWebRTCDataChannelInfo*) dataChannelInfo;
/// <summary>
/// Initializes a new instance of the <see cref="FMIceLinkWebRTCDataChannelInfo" /> class.
/// </summary>
/// <param name="label">The channel label.</param>
+ (FMIceLinkWebRTCDataChannelInfo*) dataChannelInfoWithLabel:(NSString*)label;
/// <summary>
/// Deserializes an array of instances from JSON.
/// </summary>
/// <param name="dataChannelInfosJson">The JSON to deserialize.</param>
/// <returns>The deserialized data channel descriptions.</returns>
+ (NSMutableArray*) fromJsonMultipleWithDataChannelInfosJson:(NSString*)dataChannelInfosJson;
/// <summary>
/// Deserializes an instance from JSON.
/// </summary>
/// <param name="dataChannelInfoJson">The JSON to deserialize.</param>
/// <returns>The deserialized data channel description.</returns>
+ (FMIceLinkWebRTCDataChannelInfo*) fromJsonWithDataChannelInfoJson:(NSString*)dataChannelInfoJson;
- (id) init;
/// <summary>
/// Initializes a new instance of the <see cref="FMIceLinkWebRTCDataChannelInfo" /> class.
/// </summary>
/// <param name="label">The channel label.</param>
- (id) initWithLabel:(NSString*)label;
/// <summary>
/// Gets the channel label.
/// </summary>
- (NSString*) label;
/// <summary>
/// Gets the callback to invoke when data is received on the channel.
/// </summary>
- (FMCallback*) onReceive;
- (void) raiseOnReceiveWithLink:(FMIceLinkLink*)link data:(NSString*)data;
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
/// Sets the Canonical End-Point Identifier (CNAME).
/// </summary>
- (void) setCname:(NSString*)value;
/// <summary>
/// Sets the channel label.
/// </summary>
- (void) setLabel:(NSString*)value;
/// <summary>
/// Sets the callback to invoke when data is received on the channel.
/// </summary>
- (void) setOnReceive:(FMCallback*)value;
/// <summary>
/// Sets the callback to invoke when data is received on the channel.
/// </summary>
- (void) setOnReceiveBlock:(void (^) (FMIceLinkWebRTCDataChannelReceiveArgs*))valueBlock;
/// <summary>
/// Sets the local synchronization source.
/// </summary>
- (void) setSynchronizationSource:(long long)value;
/// <summary>
/// Gets the local synchronization source.
/// </summary>
- (long long) synchronizationSource;
/// <summary>
/// Serializes this instance to JSON.
/// </summary>
/// <returns></returns>
- (NSString*) toJson;
/// <summary>
/// Serializes an array of instances to JSON.
/// </summary>
/// <param name="dataChannelInfos">The data channel descriptions to serialize.</param>
/// <returns>The serialized JSON.</returns>
+ (NSString*) toJsonMultipleWithDataChannelInfos:(NSMutableArray*)dataChannelInfos;
/// <summary>
/// Serializes an instance to JSON.
/// </summary>
/// <param name="dataChannelInfo">The data channel description to serialize.</param>
/// <returns>The serialized JSON.</returns>
+ (NSString*) toJsonWithDataChannelInfo:(FMIceLinkWebRTCDataChannelInfo*)dataChannelInfo;

@end


@class FMIceLinkWebRTCAudioMixer;
@class NSStringFMExtensions;
@class FMIceLinkWebRTCAudioRenderInitializeArgs;
@class FMIceLinkWebRTCAudioBuffer;

/// <summary>
/// Audio render provider implementation that renders to a mixer.
/// </summary>
#pragma clang diagnostic ignored "-Wshorten-64-to-32"
#pragma clang diagnostic ignored "-Wint-to-pointer-cast"

@interface FMIceLinkWebRTCMixedAudioRenderProvider : FMIceLinkWebRTCAudioRenderProvider 

/// <summary>
/// Destroys the audio render provider. No additional rendering will take place.
/// </summary>
- (void) destroy;
/// <summary>
/// Initializes the audio render provider.
/// </summary>
/// <param name="renderArgs">The arguments.</param>
- (void) initializeWithRenderArgs:(FMIceLinkWebRTCAudioRenderInitializeArgs*)renderArgs;
/// <summary>
/// Initializes a new instance of the <see cref="FMIceLinkWebRTCMixedAudioRenderProvider" /> class.
/// </summary>
/// <param name="mixer">The mixer.</param>
- (id) initWithMixer:(FMIceLinkWebRTCAudioMixer*)mixer;
/// <summary>
/// Initializes a new instance of the <see cref="FMIceLinkWebRTCMixedAudioRenderProvider" /> class.
/// </summary>
/// <param name="mixer">The mixer.</param>
/// <param name="mixerSourceId">The mixer source identifier.</param>
- (id) initWithMixer:(FMIceLinkWebRTCAudioMixer*)mixer mixerSourceId:(NSString*)mixerSourceId;
/// <summary>
/// Initializes a new instance of the <see cref="FMIceLinkWebRTCMixedAudioRenderProvider" /> class.
/// </summary>
/// <param name="mixer">The mixer.</param>
+ (FMIceLinkWebRTCMixedAudioRenderProvider*) mixedAudioRenderProviderWithMixer:(FMIceLinkWebRTCAudioMixer*)mixer;
/// <summary>
/// Initializes a new instance of the <see cref="FMIceLinkWebRTCMixedAudioRenderProvider" /> class.
/// </summary>
/// <param name="mixer">The mixer.</param>
/// <param name="mixerSourceId">The mixer source identifier.</param>
+ (FMIceLinkWebRTCMixedAudioRenderProvider*) mixedAudioRenderProviderWithMixer:(FMIceLinkWebRTCAudioMixer*)mixer mixerSourceId:(NSString*)mixerSourceId;
/// <summary>
/// Gets the mixer.
/// </summary>
- (FMIceLinkWebRTCAudioMixer*) mixer;
/// <summary>
/// Gets the mixer source identifier.
/// </summary>
- (NSString*) mixerSourceId;
/// <summary>
/// Renders an audio frame.
/// </summary>
/// <param name="frame">The frame.</param>
- (void) renderWithFrame:(FMIceLinkWebRTCAudioBuffer*)frame;

@end


@class NSMutableArrayFMExtensions;

#pragma clang diagnostic ignored "-Wshorten-64-to-32"
#pragma clang diagnostic ignored "-Wint-to-pointer-cast"

@interface FMIceLinkWebRTCDataChannelRenderInitializeArgs : NSObject 

- (NSMutableArray*) channels;
+ (FMIceLinkWebRTCDataChannelRenderInitializeArgs*) dataChannelRenderInitializeArgs;
- (id) init;
- (void) setChannels:(NSMutableArray*)value;

@end


@class FMIceLinkWebRTCVideoRenderMutedArgs;
@class FMIceLinkWebRTCVideoRenderUnmutedArgs;
@class FMCallback;
@class FMIceLinkWebRTCVideoRenderInitializeArgs;
@class FMIceLinkWebRTCVideoBuffer;

/// <summary>
/// Abstract definition for a video render implementation.
/// </summary>
#pragma clang diagnostic ignored "-Wshorten-64-to-32"
#pragma clang diagnostic ignored "-Wint-to-pointer-cast"

@interface FMIceLinkWebRTCVideoRenderProvider : FMIceLinkWebRTCRenderProvider 

/// <summary>
/// Adds a handler that is raised whenever the render is muted.
/// </summary>
- (FMCallback*) addOnMutedWithValue:(FMCallback*)value;
/// <summary>
/// Adds a handler that is raised whenever the render is muted.
/// </summary>
- (FMCallback*) addOnMuted:(FMCallback*)value;
/// <summary>
/// Adds a handler that is raised whenever the render is muted.
/// </summary>
- (FMCallback*) addOnMutedWithValueBlock:(void (^) (FMIceLinkWebRTCVideoRenderMutedArgs*))valueBlock;
/// <summary>
/// Adds a handler that is raised whenever the render is muted.
/// </summary>
- (FMCallback*) addOnMutedBlock:(void (^) (FMIceLinkWebRTCVideoRenderMutedArgs*))valueBlock;
/// <summary>
/// Adds a handler that is raised whenever the render is unmuted.
/// </summary>
- (FMCallback*) addOnUnmutedWithValue:(FMCallback*)value;
/// <summary>
/// Adds a handler that is raised whenever the render is unmuted.
/// </summary>
- (FMCallback*) addOnUnmuted:(FMCallback*)value;
/// <summary>
/// Adds a handler that is raised whenever the render is unmuted.
/// </summary>
- (FMCallback*) addOnUnmutedWithValueBlock:(void (^) (FMIceLinkWebRTCVideoRenderUnmutedArgs*))valueBlock;
/// <summary>
/// Adds a handler that is raised whenever the render is unmuted.
/// </summary>
- (FMCallback*) addOnUnmutedBlock:(void (^) (FMIceLinkWebRTCVideoRenderUnmutedArgs*))valueBlock;
/// <summary>
/// Gets the clock rate.
/// </summary>
- (int) clockRate;
/// <summary>
/// Destroys the video render provider. No additional rendering will take place.
/// </summary>
- (void) destroy;
- (bool) destroyInternal;
/// <summary>
/// Gets the underlying UI control.
/// </summary>
/// <returns>The underlying UI control.</returns>
- (NSObject*) getControl;
- (id) init;
- (bool) initializeInternalWithRenderArgs:(FMIceLinkWebRTCVideoRenderInitializeArgs*)renderArgs;
/// <summary>
/// Initializes the video render provider.
/// </summary>
/// <param name="renderArgs">The arguments.</param>
- (void) initializeWithRenderArgs:(FMIceLinkWebRTCVideoRenderInitializeArgs*)renderArgs;
/// <summary>
/// Gets whether the video render provider has been destroyed.
/// </summary>
- (bool) isDestroyed;
/// <summary>
/// Gets whether the video render provider has been initialized.
/// </summary>
- (bool) isInitialized;
/// <summary>
/// Gets whether or not the provider is muted.
/// </summary>
- (bool) isMuted;
/// <summary>
/// Gets whether or not the provider is currently rendering audio.
/// </summary>
- (bool) isRendering;
/// <summary>
/// Stops playback of incoming frames.
/// </summary>
/// <returns><c>true</c> if the operation was successful; otherwise, <c>false</c>.</returns>
- (bool) mute;
/// <summary>
/// Removes a handler that is raised whenever the render is muted.
/// </summary>
- (void) removeOnMutedWithValue:(FMCallback*)value;
/// <summary>
/// Removes a handler that is raised whenever the render is muted.
/// </summary>
- (void) removeOnMuted:(FMCallback*)value;
/// <summary>
/// Removes a handler that is raised whenever the render is unmuted.
/// </summary>
- (void) removeOnUnmutedWithValue:(FMCallback*)value;
/// <summary>
/// Removes a handler that is raised whenever the render is unmuted.
/// </summary>
- (void) removeOnUnmuted:(FMCallback*)value;
- (void) renderInternalWithFrame:(FMIceLinkWebRTCVideoBuffer*)frame;
/// <summary>
/// Renders a video frame.
/// </summary>
/// <param name="frame">The frame.</param>
- (void) renderWithFrame:(FMIceLinkWebRTCVideoBuffer*)frame;
/// <summary>
/// Starts playback of incoming frames.
/// </summary>
/// <returns><c>true</c> if the operation was successful; otherwise, <c>false</c>.</returns>
- (bool) unmute;
+ (FMIceLinkWebRTCVideoRenderProvider*) videoRenderProvider;

@end


@class FMIceLinkWebRTCVideoRenderInitializeArgs;
@class FMIceLinkWebRTCVideoBuffer;

/// <summary>
/// A null video render provider.
/// </summary>
#pragma clang diagnostic ignored "-Wshorten-64-to-32"
#pragma clang diagnostic ignored "-Wint-to-pointer-cast"

@interface FMIceLinkWebRTCNullVideoRenderProvider : FMIceLinkWebRTCVideoRenderProvider 

/// <summary>
/// Destroys the video render provider. No additional rendering will take place.
/// </summary>
- (void) destroy;
/// <summary>
/// Gets the underlying UI control.
/// </summary>
/// <returns>
/// The underlying UI control.
/// </returns>
- (NSObject*) getControl;
- (id) init;
/// <summary>
/// Initializes the video render provider.
/// </summary>
/// <param name="renderArgs">The arguments.</param>
- (void) initializeWithRenderArgs:(FMIceLinkWebRTCVideoRenderInitializeArgs*)renderArgs;
+ (FMIceLinkWebRTCNullVideoRenderProvider*) nullVideoRenderProvider;
/// <summary>
/// Renders an video frame.
/// </summary>
/// <param name="frame">The frame.</param>
- (void) renderWithFrame:(FMIceLinkWebRTCVideoBuffer*)frame;

@end


@class NSMutableArrayFMExtensions;
@class FMIceLinkWebRTCOutgoingVideoCaptureProvider;
@class FMIceLinkWebRTCVideoRenderInitializeArgs;
@class FMIceLinkWebRTCVideoBuffer;

/// <summary>
/// A video render provider that takes incoming frames and routes
/// them to an outgoing video capture provider.
/// </summary>
#pragma clang diagnostic ignored "-Wshorten-64-to-32"
#pragma clang diagnostic ignored "-Wint-to-pointer-cast"

@interface FMIceLinkWebRTCIncomingVideoRenderProvider : FMIceLinkWebRTCVideoRenderProvider 

/// <summary>
/// Adds an outgoing capture provider.
/// </summary>
/// <param name="outgoingCaptureProvider">The outgoing capture provider.</param>
- (void) addOutgoingCaptureProviderWithOutgoingCaptureProvider:(FMIceLinkWebRTCOutgoingVideoCaptureProvider*)outgoingCaptureProvider;
/// <summary>
/// Adds an outgoing capture provider.
/// </summary>
/// <param name="outgoingCaptureProvider">The outgoing capture provider.</param>
- (void) addOutgoingCaptureProvider:(FMIceLinkWebRTCOutgoingVideoCaptureProvider*)outgoingCaptureProvider;
/// <summary>
/// Destroys the video render provider. No additional rendering will take place.
/// </summary>
- (void) destroy;
/// <summary>
/// Gets the underlying UI control.
/// </summary>
/// <returns>
/// The underlying UI control.
/// </returns>
- (NSObject*) getControl;
+ (FMIceLinkWebRTCIncomingVideoRenderProvider*) incomingVideoRenderProvider;
- (id) init;
/// <summary>
/// Initializes the video render provider.
/// </summary>
/// <param name="renderArgs">The arguments.</param>
- (void) initializeWithRenderArgs:(FMIceLinkWebRTCVideoRenderInitializeArgs*)renderArgs;
/// <summary>
/// Gets the outgoing capture providers.
/// </summary>
- (NSMutableArray*) outgoingCaptureProviders;
/// <summary>
/// Removes an outgoing capture provider.
/// </summary>
/// <param name="outgoingCaptureProvider">The outgoing capture provider.</param>
- (void) removeOutgoingCaptureProviderWithOutgoingCaptureProvider:(FMIceLinkWebRTCOutgoingVideoCaptureProvider*)outgoingCaptureProvider;
/// <summary>
/// Removes an outgoing capture provider.
/// </summary>
/// <param name="outgoingCaptureProvider">The outgoing capture provider.</param>
- (void) removeOutgoingCaptureProvider:(FMIceLinkWebRTCOutgoingVideoCaptureProvider*)outgoingCaptureProvider;
/// <summary>
/// Renders an video frame.
/// </summary>
/// <param name="frame">The frame.</param>
- (void) renderWithFrame:(FMIceLinkWebRTCVideoBuffer*)frame;

@end


@class FMIceLinkWebRTCDataChannelRenderInitializeArgs;
@class FMIceLinkWebRTCDataChannelBuffer;

#pragma clang diagnostic ignored "-Wshorten-64-to-32"
#pragma clang diagnostic ignored "-Wint-to-pointer-cast"

@interface FMIceLinkWebRTCDataChannelRenderProvider : FMIceLinkWebRTCRenderProvider 

+ (FMIceLinkWebRTCDataChannelRenderProvider*) dataChannelRenderProvider;
- (void) destroy;
- (bool) destroyInternal;
- (id) init;
- (bool) initializeInternalWithRenderArgs:(FMIceLinkWebRTCDataChannelRenderInitializeArgs*)renderArgs;
- (void) initializeWithRenderArgs:(FMIceLinkWebRTCDataChannelRenderInitializeArgs*)renderArgs;
- (bool) isDestroyed;
- (bool) isInitialized;
- (int) renderWithFrame:(FMIceLinkWebRTCDataChannelBuffer*)frame;

@end


@class NSMutableArrayFMExtensions;
@class FMIceLinkWebRTCOutgoingAudioCaptureProvider;
@class FMIceLinkWebRTCAudioRenderInitializeArgs;
@class FMIceLinkWebRTCAudioBuffer;

/// <summary>
/// An audio render provider that takes incoming frames and routes
/// them to one or more outgoing audio capture providers.
/// </summary>
#pragma clang diagnostic ignored "-Wshorten-64-to-32"
#pragma clang diagnostic ignored "-Wint-to-pointer-cast"

@interface FMIceLinkWebRTCIncomingAudioRenderProvider : FMIceLinkWebRTCAudioRenderProvider 

/// <summary>
/// Adds an outgoing capture provider.
/// </summary>
/// <param name="outgoingCaptureProvider">The outgoing capture provider.</param>
- (void) addOutgoingCaptureProviderWithOutgoingCaptureProvider:(FMIceLinkWebRTCOutgoingAudioCaptureProvider*)outgoingCaptureProvider;
/// <summary>
/// Adds an outgoing capture provider.
/// </summary>
/// <param name="outgoingCaptureProvider">The outgoing capture provider.</param>
- (void) addOutgoingCaptureProvider:(FMIceLinkWebRTCOutgoingAudioCaptureProvider*)outgoingCaptureProvider;
/// <summary>
/// Destroys the audio render provider. No additional rendering will take place.
/// </summary>
- (void) destroy;
+ (FMIceLinkWebRTCIncomingAudioRenderProvider*) incomingAudioRenderProvider;
- (id) init;
/// <summary>
/// Initializes the audio render provider.
/// </summary>
/// <param name="renderArgs">The arguments.</param>
- (void) initializeWithRenderArgs:(FMIceLinkWebRTCAudioRenderInitializeArgs*)renderArgs;
/// <summary>
/// Gets the outgoing capture providers.
/// </summary>
- (NSMutableArray*) outgoingCaptureProviders;
/// <summary>
/// Removes an outgoing capture provider.
/// </summary>
/// <param name="outgoingCaptureProvider">The outgoing capture provider.</param>
- (void) removeOutgoingCaptureProviderWithOutgoingCaptureProvider:(FMIceLinkWebRTCOutgoingAudioCaptureProvider*)outgoingCaptureProvider;
/// <summary>
/// Removes an outgoing capture provider.
/// </summary>
/// <param name="outgoingCaptureProvider">The outgoing capture provider.</param>
- (void) removeOutgoingCaptureProvider:(FMIceLinkWebRTCOutgoingAudioCaptureProvider*)outgoingCaptureProvider;
/// <summary>
/// Renders an audio frame.
/// </summary>
/// <param name="frame">The frame.</param>
- (void) renderWithFrame:(FMIceLinkWebRTCAudioBuffer*)frame;

@end


@class FMIceLinkWebRTCAudioRenderInitializeArgs;
@class FMIceLinkWebRTCAudioBuffer;

/// <summary>
/// A null audio render provider.
/// </summary>
#pragma clang diagnostic ignored "-Wshorten-64-to-32"
#pragma clang diagnostic ignored "-Wint-to-pointer-cast"

@interface FMIceLinkWebRTCNullAudioRenderProvider : FMIceLinkWebRTCAudioRenderProvider 

/// <summary>
/// Destroys the audio render provider. No additional rendering will take place.
/// </summary>
- (void) destroy;
- (id) init;
/// <summary>
/// Initializes the audio render provider.
/// </summary>
/// <param name="renderArgs">The arguments.</param>
- (void) initializeWithRenderArgs:(FMIceLinkWebRTCAudioRenderInitializeArgs*)renderArgs;
+ (FMIceLinkWebRTCNullAudioRenderProvider*) nullAudioRenderProvider;
/// <summary>
/// Renders an audio frame.
/// </summary>
/// <param name="frame">The frame.</param>
- (void) renderWithFrame:(FMIceLinkWebRTCAudioBuffer*)frame;

@end


@class FMIceLinkWebRTCDataChannelCodec;
@class FMIceLinkConference;
@class FMIceLinkStreamFormat;
@class FMIceLinkLink;
@class FMIceLinkWebRTCDataChannelRegistration;
@class NSMutableArrayFMExtensions;
@class FMIceLinkStream;
@class FMIceLinkWebRTCDataChannelRenderInitializeArgs;
@class FMIceLinkWebRTCDataChannelBuffer;

#pragma clang diagnostic ignored "-Wshorten-64-to-32"
#pragma clang diagnostic ignored "-Wint-to-pointer-cast"

@interface FMIceLinkWebRTCRemoteDataChannelRenderProvider : FMIceLinkWebRTCDataChannelRenderProvider 

- (FMIceLinkConference*) conference;
- (NSMutableArray*) dequeueRtcpPackets;
- (void) destroy;
- (void) enqueueRtcpPacketsWithPackets:(NSMutableArray*)packets;
- (void) enqueueRtcpPackets:(NSMutableArray*)packets;
- (FMIceLinkStreamFormat*) format;
- (void) initializeWithRenderArgs:(FMIceLinkWebRTCDataChannelRenderInitializeArgs*)renderArgs;
- (id) initWithConference:(FMIceLinkConference*)conference link:(FMIceLinkLink*)link stream:(FMIceLinkStream*)stream format:(FMIceLinkStreamFormat*)format registration:(FMIceLinkWebRTCDataChannelRegistration*)registration;
- (FMIceLinkLink*) link;
- (FMIceLinkWebRTCDataChannelRegistration*) registration;
+ (FMIceLinkWebRTCRemoteDataChannelRenderProvider*) remoteDataChannelRenderProviderWithConference:(FMIceLinkConference*)conference link:(FMIceLinkLink*)link stream:(FMIceLinkStream*)stream format:(FMIceLinkStreamFormat*)format registration:(FMIceLinkWebRTCDataChannelRegistration*)registration;
- (int) renderWithFrame:(FMIceLinkWebRTCDataChannelBuffer*)frame;
- (FMIceLinkStream*) stream;

@end


@class FMIceLinkStreamFormat;
@class FMIceLinkRTPPacket;

#pragma clang diagnostic ignored "-Wshorten-64-to-32"
#pragma clang diagnostic ignored "-Wint-to-pointer-cast"

@interface FMIceLinkWebRTCRemoteRenderDelayedPacket : NSObject 

- (FMIceLinkStreamFormat*) format;
- (id) initWithPacket:(FMIceLinkRTPPacket*)packet format:(FMIceLinkStreamFormat*)format timestamp:(long long)timestamp;
- (bool) isReadyWithTimestamp:(long long)timestamp;
- (FMIceLinkRTPPacket*) packet;
+ (FMIceLinkWebRTCRemoteRenderDelayedPacket*) remoteRenderDelayedPacketWithPacket:(FMIceLinkRTPPacket*)packet format:(FMIceLinkStreamFormat*)format timestamp:(long long)timestamp;
+ (FMIceLinkWebRTCRemoteRenderDelayedPacket*) remoteRenderDelayedPacket:(FMIceLinkRTPPacket*)packet format:(FMIceLinkStreamFormat*)format timestamp:(long long)timestamp;
- (void) setFormat:(FMIceLinkStreamFormat*)value;
- (void) setPacket:(FMIceLinkRTPPacket*)value;
- (void) setTimestamp:(long long)value;
- (long long) timestamp;

@end


@class FMIceLinkWebRTCVideoCodec;
@class FMIceLinkWebRTCIvfVideoRecorder;
@class FMIceLinkWebRTCVideoRenderInitializeArgs;
@class NSStringFMExtensions;
@class FMIceLinkWebRTCVideoBuffer;

/// <summary>
/// A video render provider that writes video frames to an IVF-formatted file.
/// </summary>
#pragma clang diagnostic ignored "-Wshorten-64-to-32"
#pragma clang diagnostic ignored "-Wint-to-pointer-cast"

@interface FMIceLinkWebRTCIvfVideoRenderProvider : FMIceLinkWebRTCVideoRenderProvider 

/// <summary>
/// Gets the codec.
/// </summary>
- (FMIceLinkWebRTCVideoCodec*) codec;
/// <summary>
/// Destroys the video render provider. No additional rendering will take place.
/// </summary>
- (void) destroy;
/// <summary>
/// Returns null.
/// </summary>
- (NSObject*) getControl;
/// <summary>
/// Initializes the video render provider.
/// </summary>
/// <param name="renderArgs">The arguments.</param>
- (void) initializeWithRenderArgs:(FMIceLinkWebRTCVideoRenderInitializeArgs*)renderArgs;
/// <summary>
/// Initializes a new instance of the <see cref="FMIceLinkWebRTCIvfVideoRenderProvider" /> class.
/// </summary>
/// <param name="path">The path.</param>
/// <param name="codec">The video codec (must be VP8).</param>
- (id) initWithPath:(NSString*)path codec:(FMIceLinkWebRTCVideoCodec*)codec;
/// <summary>
/// Initializes a new instance of the <see cref="FMIceLinkWebRTCIvfVideoRenderProvider" /> class.
/// </summary>
/// <param name="path">The path.</param>
/// <param name="codec">The video codec (must be VP8).</param>
+ (FMIceLinkWebRTCIvfVideoRenderProvider*) ivfVideoRenderProviderWithPath:(NSString*)path codec:(FMIceLinkWebRTCVideoCodec*)codec;
/// <summary>
/// Gets the recorder.
/// </summary>
- (FMIceLinkWebRTCIvfVideoRecorder*) recorder;
/// <summary>
/// Renders a video frame.
/// </summary>
/// <param name="frame">The frame.</param>
- (void) renderWithFrame:(FMIceLinkWebRTCVideoBuffer*)frame;

@end


@class NSStringFMExtensions;
@class FMIceLinkWebRTCVideoCodec;

/// <summary>
/// A video render provider that writes video frames to an IVF-formatted file.
/// DEPRECATED: use IvfVideoRenderProvider instead.
/// </summary>
#pragma clang diagnostic ignored "-Wshorten-64-to-32"
#pragma clang diagnostic ignored "-Wint-to-pointer-cast"

@interface FMIceLinkWebRTCIvfVideoRecordingProvider : FMIceLinkWebRTCIvfVideoRenderProvider 

/// <summary>
/// Initializes a new instance of the <see cref="FMIceLinkWebRTCIvfVideoRecordingProvider" /> class.
/// </summary>
/// <param name="path">The path.</param>
/// <param name="codec">The video codec (must be VP8).</param>
- (id) initWithPath:(NSString*)path codec:(FMIceLinkWebRTCVideoCodec*)codec;
/// <summary>
/// Initializes a new instance of the <see cref="FMIceLinkWebRTCIvfVideoRecordingProvider" /> class.
/// </summary>
/// <param name="path">The path.</param>
/// <param name="codec">The video codec (must be VP8).</param>
+ (FMIceLinkWebRTCIvfVideoRecordingProvider*) ivfVideoRecordingProviderWithPath:(NSString*)path codec:(FMIceLinkWebRTCVideoCodec*)codec;

@end


@class FMIceLinkWebRTCAudioCaptureInitializeArgs;
@class FMIceLinkWebRTCAudioRenderInitializeArgs;
@class FMIceLinkWebRTCDataChannelInfo;
@class FMIceLinkWebRTCDataChannelReceiveArgs;
@class FMIceLinkWebRTCLocalStartArgs;
@class FMIceLinkWebRTCLocalStartFailureArgs;
@class FMIceLinkWebRTCLocalStartSuccessArgs;
@class FMIceLinkWebRTCReliableDataChannel;
@class FMIceLinkWebRTCReliableDataReceiveArgs;
@class FMIceLinkWebRTCVideoCaptureInitializeArgs;
@class FMIceLinkWebRTCVideoRenderInitializeArgs;
@class NSStringFMExtensions;
@class FMIceLinkWebRTCBaseMediaArgs;
@class NSMutableArrayFMExtensions;
@class NSMutableDictionaryFMExtensions;

#pragma clang diagnostic ignored "-Wshorten-64-to-32"
#pragma clang diagnostic ignored "-Wint-to-pointer-cast"

@interface FMIceLinkWebRTCSerializer : NSObject 

+ (FMIceLinkWebRTCAudioCaptureInitializeArgs*) createAudioCaptureInitializeArgs;
+ (FMIceLinkWebRTCAudioRenderInitializeArgs*) createAudioRenderInitializeArgs;
+ (FMIceLinkWebRTCDataChannelInfo*) createDataChannelInfo;
+ (FMIceLinkWebRTCDataChannelReceiveArgs*) createDataChannelReceiveArgs;
+ (FMIceLinkWebRTCLocalStartArgs*) createLocalStartArgs;
+ (FMIceLinkWebRTCLocalStartFailureArgs*) createLocalStartFailureArgs;
+ (FMIceLinkWebRTCLocalStartSuccessArgs*) createLocalStartSuccessArgs;
+ (FMIceLinkWebRTCReliableDataChannel*) createReliableDataChannel;
+ (FMIceLinkWebRTCReliableDataReceiveArgs*) createReliableDataReceiveArgs;
+ (FMIceLinkWebRTCVideoCaptureInitializeArgs*) createVideoCaptureInitializeArgs;
+ (FMIceLinkWebRTCVideoRenderInitializeArgs*) createVideoRenderInitializeArgs;
+ (void) deserializeAudioCaptureInitializeArgsCallbackWithAudioCaptureInitializeArgs:(FMIceLinkWebRTCAudioCaptureInitializeArgs*)audioCaptureInitializeArgs name:(NSString*)name valueJson:(NSString*)valueJson;
+ (FMIceLinkWebRTCAudioCaptureInitializeArgs*) deserializeAudioCaptureInitializeArgsWithAudioCaptureInitializeArgsJson:(NSString*)audioCaptureInitializeArgsJson;
+ (FMIceLinkWebRTCAudioCaptureInitializeArgs*) deserializeAudioCaptureInitializeArgsWithJson:(NSString*)audioCaptureInitializeArgsJson;
+ (void) deserializeAudioRenderInitializeArgsCallbackWithAudioRenderInitializeArgs:(FMIceLinkWebRTCAudioRenderInitializeArgs*)audioRenderInitializeArgs name:(NSString*)name valueJson:(NSString*)valueJson;
+ (FMIceLinkWebRTCAudioRenderInitializeArgs*) deserializeAudioRenderInitializeArgsWithAudioRenderInitializeArgsJson:(NSString*)audioRenderInitializeArgsJson;
+ (FMIceLinkWebRTCAudioRenderInitializeArgs*) deserializeAudioRenderInitializeArgsWithJson:(NSString*)audioRenderInitializeArgsJson;
+ (void) deserializeBaseMediaArgsCallbackWithBaseMediaArgs:(FMIceLinkWebRTCBaseMediaArgs*)baseMediaArgs name:(NSString*)name valueJson:(NSString*)valueJson;
+ (NSMutableArray*) deserializeDataChannelInfoArrayWithDataChannelInfosJson:(NSString*)dataChannelInfosJson;
+ (void) deserializeDataChannelInfoCallbackWithDataChannelInfo:(FMIceLinkWebRTCDataChannelInfo*)dataChannelInfo name:(NSString*)name valueJson:(NSString*)valueJson;
+ (FMIceLinkWebRTCDataChannelInfo*) deserializeDataChannelInfoWithDataChannelInfoJson:(NSString*)dataChannelInfoJson;
+ (FMIceLinkWebRTCDataChannelInfo*) deserializeDataChannelInfoWithJson:(NSString*)dataChannelInfoJson;
+ (void) deserializeDataChannelReceiveArgsCallbackWithDataChannelReceiveArgs:(FMIceLinkWebRTCDataChannelReceiveArgs*)dataChannelReceiveArgs name:(NSString*)name valueJson:(NSString*)valueJson;
+ (FMIceLinkWebRTCDataChannelReceiveArgs*) deserializeDataChannelReceiveArgsWithDataChannelReceiveArgsJson:(NSString*)dataChannelReceiveArgsJson;
+ (FMIceLinkWebRTCDataChannelReceiveArgs*) deserializeDataChannelReceiveArgsWithJson:(NSString*)dataChannelReceiveArgsJson;
+ (FMIceLinkWebRTCLayoutScale) deserializeLayoutScaleWithLayoutScaleJson:(NSString*)layoutScaleJson;
+ (FMIceLinkWebRTCLayoutScale) deserializeLayoutScaleWithJson:(NSString*)layoutScaleJson;
+ (void) deserializeLocalStartArgsCallbackWithStartArgs:(FMIceLinkWebRTCLocalStartArgs*)startArgs name:(NSString*)name valueJson:(NSString*)valueJson;
+ (FMIceLinkWebRTCLocalStartArgs*) deserializeLocalStartArgsWithStartArgsJson:(NSString*)startArgsJson;
+ (FMIceLinkWebRTCLocalStartArgs*) deserializeLocalStartArgsWithJson:(NSString*)startArgsJson;
+ (void) deserializeLocalStartFailureArgsCallbackWithStartFailureArgs:(FMIceLinkWebRTCLocalStartFailureArgs*)startFailureArgs name:(NSString*)name valueJson:(NSString*)valueJson;
+ (FMIceLinkWebRTCLocalStartFailureArgs*) deserializeLocalStartFailureArgsWithStartFailureArgsJson:(NSString*)startFailureArgsJson;
+ (FMIceLinkWebRTCLocalStartFailureArgs*) deserializeLocalStartFailureArgsWithJson:(NSString*)startFailureArgsJson;
+ (void) deserializeLocalStartSuccessArgsCallbackWithStartSuccessArgs:(FMIceLinkWebRTCLocalStartSuccessArgs*)startSuccessArgs name:(NSString*)name valueJson:(NSString*)valueJson;
+ (FMIceLinkWebRTCLocalStartSuccessArgs*) deserializeLocalStartSuccessArgsWithStartSuccessArgsJson:(NSString*)startSuccessArgsJson;
+ (FMIceLinkWebRTCLocalStartSuccessArgs*) deserializeLocalStartSuccessArgsWithJson:(NSString*)startSuccessArgsJson;
+ (NSMutableArray*) deserializeReliableDataChannelArrayWithReliableDataChannelsJson:(NSString*)reliableDataChannelsJson;
+ (void) deserializeReliableDataChannelCallbackWithReliableDataChannel:(FMIceLinkWebRTCReliableDataChannel*)reliableDataChannel name:(NSString*)name valueJson:(NSString*)valueJson;
+ (FMIceLinkWebRTCReliableDataChannel*) deserializeReliableDataChannelWithReliableDataChannelJson:(NSString*)reliableDataChannelJson;
+ (FMIceLinkWebRTCReliableDataChannel*) deserializeReliableDataChannelWithJson:(NSString*)reliableDataChannelJson;
+ (void) deserializeReliableDataReceiveArgsCallbackWithReliableDataReceiveArgs:(FMIceLinkWebRTCReliableDataReceiveArgs*)reliableDataReceiveArgs name:(NSString*)name valueJson:(NSString*)valueJson;
+ (FMIceLinkWebRTCReliableDataReceiveArgs*) deserializeReliableDataReceiveArgsWithReliableDataReceiveArgsJson:(NSString*)reliableDataReceiveArgsJson;
+ (FMIceLinkWebRTCReliableDataReceiveArgs*) deserializeReliableDataReceiveArgsWithJson:(NSString*)reliableDataReceiveArgsJson;
+ (void) deserializeVideoCaptureInitializeArgsCallbackWithVideoCaptureInitializeArgs:(FMIceLinkWebRTCVideoCaptureInitializeArgs*)videoCaptureInitializeArgs name:(NSString*)name valueJson:(NSString*)valueJson;
+ (FMIceLinkWebRTCVideoCaptureInitializeArgs*) deserializeVideoCaptureInitializeArgsWithVideoCaptureInitializeArgsJson:(NSString*)videoCaptureInitializeArgsJson;
+ (FMIceLinkWebRTCVideoCaptureInitializeArgs*) deserializeVideoCaptureInitializeArgsWithJson:(NSString*)videoCaptureInitializeArgsJson;
+ (void) deserializeVideoRenderInitializeArgsCallbackWithVideoRenderInitializeArgs:(FMIceLinkWebRTCVideoRenderInitializeArgs*)videoRenderInitializeArgs name:(NSString*)name valueJson:(NSString*)valueJson;
+ (FMIceLinkWebRTCVideoRenderInitializeArgs*) deserializeVideoRenderInitializeArgsWithVideoRenderInitializeArgsJson:(NSString*)videoRenderInitializeArgsJson;
+ (FMIceLinkWebRTCVideoRenderInitializeArgs*) deserializeVideoRenderInitializeArgsWithJson:(NSString*)videoRenderInitializeArgsJson;
+ (FMIceLinkWebRTCVideoSource) deserializeVideoSourceWithVideoSourceJson:(NSString*)videoSourceJson;
+ (FMIceLinkWebRTCVideoSource) deserializeVideoSourceWithJson:(NSString*)videoSourceJson;
- (id) init;
+ (void) serializeAudioCaptureInitializeArgsCallbackWithAudioCaptureInitializeArgs:(FMIceLinkWebRTCAudioCaptureInitializeArgs*)audioCaptureInitializeArgs jsonObject:(NSMutableDictionary*)jsonObject;
+ (NSString*) serializeAudioCaptureInitializeArgsWithAudioCaptureInitializeArgs:(FMIceLinkWebRTCAudioCaptureInitializeArgs*)audioCaptureInitializeArgs;
+ (NSString*) serializeAudioCaptureInitializeArgs:(FMIceLinkWebRTCAudioCaptureInitializeArgs*)audioCaptureInitializeArgs;
+ (void) serializeAudioRenderInitializeArgsCallbackWithAudioRenderInitializeArgs:(FMIceLinkWebRTCAudioRenderInitializeArgs*)audioRenderInitializeArgs jsonObject:(NSMutableDictionary*)jsonObject;
+ (NSString*) serializeAudioRenderInitializeArgsWithAudioRenderInitializeArgs:(FMIceLinkWebRTCAudioRenderInitializeArgs*)audioRenderInitializeArgs;
+ (NSString*) serializeAudioRenderInitializeArgs:(FMIceLinkWebRTCAudioRenderInitializeArgs*)audioRenderInitializeArgs;
+ (void) serializeBaseMediaArgsCallbackWithBaseMediaArgs:(FMIceLinkWebRTCBaseMediaArgs*)baseMediaArgs jsonObject:(NSMutableDictionary*)jsonObject;
+ (NSString*) serializeDataChannelInfoArrayWithDataChannelInfos:(NSMutableArray*)dataChannelInfos;
+ (void) serializeDataChannelInfoCallbackWithDataChannelInfo:(FMIceLinkWebRTCDataChannelInfo*)dataChannelInfo jsonObject:(NSMutableDictionary*)jsonObject;
+ (NSString*) serializeDataChannelInfoWithDataChannelInfo:(FMIceLinkWebRTCDataChannelInfo*)dataChannelInfo;
+ (NSString*) serializeDataChannelInfo:(FMIceLinkWebRTCDataChannelInfo*)dataChannelInfo;
+ (void) serializeDataChannelReceiveArgsCallbackWithDataChannelReceiveArgs:(FMIceLinkWebRTCDataChannelReceiveArgs*)dataChannelReceiveArgs jsonObject:(NSMutableDictionary*)jsonObject;
+ (NSString*) serializeDataChannelReceiveArgsWithDataChannelReceiveArgs:(FMIceLinkWebRTCDataChannelReceiveArgs*)dataChannelReceiveArgs;
+ (NSString*) serializeDataChannelReceiveArgs:(FMIceLinkWebRTCDataChannelReceiveArgs*)dataChannelReceiveArgs;
+ (NSString*) serializeLayoutScaleWithLayoutScale:(FMIceLinkWebRTCLayoutScale)layoutScale;
+ (NSString*) serializeLayoutScale:(FMIceLinkWebRTCLayoutScale)layoutScale;
+ (void) serializeLocalStartArgsCallbackWithStartArgs:(FMIceLinkWebRTCLocalStartArgs*)startArgs jsonObject:(NSMutableDictionary*)jsonObject;
+ (NSString*) serializeLocalStartArgsWithStartArgs:(FMIceLinkWebRTCLocalStartArgs*)startArgs;
+ (NSString*) serializeLocalStartArgs:(FMIceLinkWebRTCLocalStartArgs*)startArgs;
+ (void) serializeLocalStartFailureArgsCallbackWithStartFailureArgs:(FMIceLinkWebRTCLocalStartFailureArgs*)startFailureArgs jsonObject:(NSMutableDictionary*)jsonObject;
+ (NSString*) serializeLocalStartFailureArgsWithStartFailureArgs:(FMIceLinkWebRTCLocalStartFailureArgs*)startFailureArgs;
+ (NSString*) serializeLocalStartFailureArgs:(FMIceLinkWebRTCLocalStartFailureArgs*)startFailureArgs;
+ (void) serializeLocalStartSuccessArgsCallbackWithStartSuccessArgs:(FMIceLinkWebRTCLocalStartSuccessArgs*)startSuccessArgs jsonObject:(NSMutableDictionary*)jsonObject;
+ (NSString*) serializeLocalStartSuccessArgsWithStartSuccessArgs:(FMIceLinkWebRTCLocalStartSuccessArgs*)startSuccessArgs;
+ (NSString*) serializeLocalStartSuccessArgs:(FMIceLinkWebRTCLocalStartSuccessArgs*)startSuccessArgs;
+ (FMIceLinkWebRTCSerializer*) serializer;
+ (NSString*) serializeReliableDataChannelArrayWithReliableDataChannels:(NSMutableArray*)reliableDataChannels;
+ (void) serializeReliableDataChannelCallbackWithReliableDataChannel:(FMIceLinkWebRTCReliableDataChannel*)reliableDataChannel jsonObject:(NSMutableDictionary*)jsonObject;
+ (NSString*) serializeReliableDataChannelWithReliableDataChannel:(FMIceLinkWebRTCReliableDataChannel*)reliableDataChannel;
+ (NSString*) serializeReliableDataChannel:(FMIceLinkWebRTCReliableDataChannel*)reliableDataChannel;
+ (void) serializeReliableDataReceiveArgsCallbackWithReliableDataReceiveArgs:(FMIceLinkWebRTCReliableDataReceiveArgs*)reliableDataReceiveArgs jsonObject:(NSMutableDictionary*)jsonObject;
+ (NSString*) serializeReliableDataReceiveArgsWithReliableDataReceiveArgs:(FMIceLinkWebRTCReliableDataReceiveArgs*)reliableDataReceiveArgs;
+ (NSString*) serializeReliableDataReceiveArgs:(FMIceLinkWebRTCReliableDataReceiveArgs*)reliableDataReceiveArgs;
+ (void) serializeVideoCaptureInitializeArgsCallbackWithVideoCaptureInitializeArgs:(FMIceLinkWebRTCVideoCaptureInitializeArgs*)videoCaptureInitializeArgs jsonObject:(NSMutableDictionary*)jsonObject;
+ (NSString*) serializeVideoCaptureInitializeArgsWithVideoCaptureInitializeArgs:(FMIceLinkWebRTCVideoCaptureInitializeArgs*)videoCaptureInitializeArgs;
+ (NSString*) serializeVideoCaptureInitializeArgs:(FMIceLinkWebRTCVideoCaptureInitializeArgs*)videoCaptureInitializeArgs;
+ (void) serializeVideoRenderInitializeArgsCallbackWithVideoRenderInitializeArgs:(FMIceLinkWebRTCVideoRenderInitializeArgs*)videoRenderInitializeArgs jsonObject:(NSMutableDictionary*)jsonObject;
+ (NSString*) serializeVideoRenderInitializeArgsWithVideoRenderInitializeArgs:(FMIceLinkWebRTCVideoRenderInitializeArgs*)videoRenderInitializeArgs;
+ (NSString*) serializeVideoRenderInitializeArgs:(FMIceLinkWebRTCVideoRenderInitializeArgs*)videoRenderInitializeArgs;
+ (NSString*) serializeVideoSourceWithVideoSource:(FMIceLinkWebRTCVideoSource)videoSource;
+ (NSString*) serializeVideoSource:(FMIceLinkWebRTCVideoSource)videoSource;

@end


@class FMIceLinkWebRTCVideoCodec;
@class FMIceLinkWebRTCLocalMediaStream;
@class NSMutableArrayFMExtensions;
@class NSStringFMExtensions;
@class FMCallback;

/// <summary>
/// A WebRTC video stream.
/// </summary>
#pragma clang diagnostic ignored "-Wshorten-64-to-32"
#pragma clang diagnostic ignored "-Wint-to-pointer-cast"

@interface FMIceLinkWebRTCVideoStream : FMIceLinkWebRTCBaseWebRTCStream 

/// <summary>
/// Gets a value indicating whether to
/// use FEC algorithms tuned for bursty packet loss.
/// Bursty packet loss is more common on wireless
/// networks.
/// Defaults to false on desktop platforms and true
/// on mobile platforms.
/// </summary>
- (bool) burstyFEC;
/// <summary>
/// Gets a flag indicating whether
/// encoding and decoding should be bypassed
/// for outgoing and incoming media packets.
/// </summary>
- (bool) bypassCodec;
/// <summary>
/// Gets a flag indicating whether
/// decoding should be bypassed
/// for incoming media packets.
/// </summary>
- (bool) bypassDecode;
/// <summary>
/// Gets a flag indicating whether
/// encoding should be bypassed
/// for outgoing media packets.
/// </summary>
- (bool) bypassEncode;
/// <summary>
/// Gets a flag indicating whether
/// decoding should be bypassed for
/// incoming media packetts when a
/// key frame request has been made via
/// a PLI message.
/// </summary>
- (bool) delayDecodeOnPendingKeyFrame;
/// <summary>
/// Gets <see cref="FMIceLinkWebRTCVideoStream#outgoingDelayPacketMaximum" />.
/// Deprecated. Use <see cref="FMIceLinkWebRTCVideoStream#outgoingDelayPacketMaximum" />
/// or <see cref="FMIceLinkWebRTCVideoStream#incomingDelayPacketMaximum" /> instead.
/// </summary>
- (int) delayPacketMaximum;
/// <summary>
/// Gets <see cref="FMIceLinkWebRTCVideoStream#outgoingDelayPacketProbability" />.
/// Deprecated. Use <see cref="FMIceLinkWebRTCVideoStream#outgoingDelayPacketProbability" />
/// or <see cref="FMIceLinkWebRTCVideoStream#incomingDelayPacketProbability" /> instead.
/// </summary>
- (int) delayPacketProbability;
/// <summary>
/// Gets a value indicating whether to
/// disable forward error correction (FEC) completely.
/// If set to true, FEC will never activate.
/// Affects outgoing data only.
/// Defaults to false.
/// </summary>
- (bool) disableFEC;
/// <summary>
/// Gets a value indicating whether
/// the jitter buffer should be disabled.
/// </summary>
- (bool) disableJitterBuffer;
/// <summary>
/// Gets a value indicating whether
/// the generic NACK buffer should be disabled.
/// </summary>
- (bool) disableNackBuffer;
/// <summary>
/// Gets a flag indicating whether picture
/// loss indicator (PLI) packets should be disabled.
/// If set to true, a PLI packet will be generated
/// and sent over the RTCP component if the RTP
/// packet sequence is violated.
/// Defaults to false.
/// </summary>
- (bool) disablePLI;
/// <summary>
/// Gets <see cref="FMIceLinkWebRTCVideoStream#outgoingDropPacketProbability" />.
/// Deprecated. Use <see cref="FMIceLinkWebRTCVideoStream#outgoingDropPacketProbability" />
/// or <see cref="FMIceLinkWebRTCVideoStream#incomingDropPacketProbability" /> instead.
/// </summary>
- (int) dropPacketProbability;
+ (NSMutableArray*) getRegistrations;
+ (NSMutableArray*) getRegistrationsWithEncodingName:(NSString*)encodingName;
/// <summary>
/// Gets the encoding name for H264 packets.
/// </summary>
+ (NSString*) h264EncodingName;
/// <summary>
/// Gets the maximum number of
/// milliseconds that may elapse before
/// a delayed packet is received.
/// Affects incoming data only.
/// FOR TESTING PURPOSES ONLY.
/// Defaults to zero.
/// </summary>
- (int) incomingDelayPacketMaximum;
/// <summary>
/// Gets the probability that an
/// incoming packet should be delayed.
/// Affects incoming data only.
/// FOR TESTING PURPOSES ONLY.
/// Defaults to zero.
/// </summary>
- (int) incomingDelayPacketProbability;
/// <summary>
/// Gets the probability that an
/// incoming packet should be dropped.
/// Affects incoming data only.
/// FOR TESTING PURPOSES ONLY.
/// Defaults to zero.
/// </summary>
- (int) incomingDropPacketProbability;
/// <summary>
/// Initializes a new instance of the WebRTC <see cref="FMIceLinkWebRTCVideoStream" /> class.
/// </summary>
/// <param name="localStream">The local media stream.</param>
- (id) initWithLocalStream:(FMIceLinkWebRTCLocalMediaStream*)localStream;
/// <summary>
/// Initializes a new instance of the WebRTC <see cref="FMIceLinkWebRTCVideoStream" /> class.
/// </summary>
/// <param name="localStream">The local media stream.</param>
/// <param name="offerDtls">Whether to offer to exchange SRTP keys using DTLS.</param>
- (id) initWithLocalStream:(FMIceLinkWebRTCLocalMediaStream*)localStream offerDtls:(bool)offerDtls;
/// <summary>
/// Initializes a new instance of the WebRTC <see cref="FMIceLinkWebRTCVideoStream" /> class.
/// </summary>
/// <param name="localStream">The local media stream.</param>
/// <param name="offerDtls">Whether to offer to exchange SRTP keys using DTLS.</param>
/// <param name="formats">The stream formats to allow.</param>
- (id) initWithLocalStream:(FMIceLinkWebRTCLocalMediaStream*)localStream offerDtls:(bool)offerDtls formats:(NSMutableArray*)formats;
/// <summary>
/// Gets the initial jitter buffer length in milliseconds.
/// Defaults to 100 (ms).
/// </summary>
- (int) jitterBufferLength;
/// <summary>
/// Gets the maximum jitter buffer length in milliseconds.
/// Defaults to 300 (ms).
/// </summary>
- (int) jitterBufferMaxLength;
/// <summary>
/// Gets the encoding name for JPEG packets.
/// </summary>
+ (NSString*) jpegEncodingName;
/// <summary>
/// Gets the static payload type for JPEG packets (26).
/// </summary>
+ (int) jpegPayloadType;
/// <summary>
/// Gets the number of packets to hold in the generic
/// NACK buffer awaiting an earlier packet before releasing them.
/// Defaults to 128.
/// </summary>
- (int) nackBufferLength;
/// <summary>
/// Gets the maximum number of
/// milliseconds that may elapse before
/// a delayed packet is sent.
/// Affects outgoing data only.
/// FOR TESTING PURPOSES ONLY.
/// Defaults to zero.
/// </summary>
- (int) outgoingDelayPacketMaximum;
/// <summary>
/// Gets the probability that an
/// outgoing packet should be delayed.
/// Affects outgoing data only.
/// FOR TESTING PURPOSES ONLY.
/// Defaults to zero.
/// </summary>
- (int) outgoingDelayPacketProbability;
/// <summary>
/// Gets the probability that an
/// outgoing packet should be dropped.
/// Affects outgoing data only.
/// FOR TESTING PURPOSES ONLY.
/// Defaults to zero.
/// </summary>
- (int) outgoingDropPacketProbability;
/// <summary>
/// Gets the loss percentage (0-100)
/// before forward error correction (FEC) is
/// activated (only if supported by the remote peer).
/// Affects outgoing data only.
/// Defaults to 5.
/// </summary>
- (int) percentLossToTriggerFEC;
/// <summary>
/// Gets the encoding name for RED packets.
/// </summary>
+ (NSString*) redEncodingName;
/// <summary>
/// Registers a non-preferred video codec.
/// </summary>
/// <param name="encodingName">Name of the encoding.</param>
/// <param name="clockRate">The clock rate.</param>
/// <param name="createCodec">The codec creation callback.</param>
+ (void) registerCodecWithEncodingName:(NSString*)encodingName clockRate:(int)clockRate createCodec:(FMCallback*)createCodec;
/// <summary>
/// Registers a video codec.
/// </summary>
/// <param name="encodingName">Name of the encoding.</param>
/// <param name="clockRate">The clock rate.</param>
/// <param name="createCodec">The codec creation callback.</param>
/// <param name="preferred">Whether to prefer the payload type in SDP offers.</param>
+ (void) registerCodecWithEncodingName:(NSString*)encodingName clockRate:(int)clockRate createCodec:(FMCallback*)createCodec preferred:(bool)preferred;
/// <summary>
/// Registers a non-preferred video codec.
/// </summary>
/// <param name="encodingName">Name of the encoding.</param>
/// <param name="clockRate">The clock rate.</param>
/// <param name="createCodec">The codec creation callback.</param>
+ (void) registerCodecWithEncodingName:(NSString*)encodingName clockRate:(int)clockRate createCodecBlock:(FMIceLinkWebRTCVideoCodec* (^) ())createCodecBlock;
/// <summary>
/// Registers a video codec.
/// </summary>
/// <param name="encodingName">Name of the encoding.</param>
/// <param name="clockRate">The clock rate.</param>
/// <param name="createCodec">The codec creation callback.</param>
/// <param name="preferred">Whether to prefer the payload type in SDP offers.</param>
+ (void) registerCodecWithEncodingName:(NSString*)encodingName clockRate:(int)clockRate createCodecBlock:(FMIceLinkWebRTCVideoCodec* (^) ())createCodecBlock preferred:(bool)preferred;
/// <summary>
/// Registers a non-preferred video codec.
/// </summary>
/// <param name="encodingName">Name of the encoding.</param>
/// <param name="clockRate">The clock rate.</param>
/// <param name="staticPayloadType">The static payload type.</param>
/// <param name="createCodec">The codec creation callback.</param>
+ (void) registerCodecWithEncodingName:(NSString*)encodingName clockRate:(int)clockRate staticPayloadType:(int)staticPayloadType createCodec:(FMCallback*)createCodec;
/// <summary>
/// Registers a video codec.
/// </summary>
/// <param name="encodingName">Name of the encoding.</param>
/// <param name="clockRate">The clock rate.</param>
/// <param name="staticPayloadType">The static payload type.</param>
/// <param name="createCodec">The codec creation callback.</param>
/// <param name="preferred">Whether to prefer the payload type in SDP offers.</param>
+ (void) registerCodecWithEncodingName:(NSString*)encodingName clockRate:(int)clockRate staticPayloadType:(int)staticPayloadType createCodec:(FMCallback*)createCodec preferred:(bool)preferred;
/// <summary>
/// Registers a non-preferred video codec.
/// </summary>
/// <param name="encodingName">Name of the encoding.</param>
/// <param name="clockRate">The clock rate.</param>
/// <param name="staticPayloadType">The static payload type.</param>
/// <param name="createCodec">The codec creation callback.</param>
+ (void) registerCodecWithEncodingName:(NSString*)encodingName clockRate:(int)clockRate staticPayloadType:(int)staticPayloadType createCodecBlock:(FMIceLinkWebRTCVideoCodec* (^) ())createCodecBlock;
/// <summary>
/// Registers a video codec.
/// </summary>
/// <param name="encodingName">Name of the encoding.</param>
/// <param name="clockRate">The clock rate.</param>
/// <param name="staticPayloadType">The static payload type.</param>
/// <param name="createCodec">The codec creation callback.</param>
/// <param name="preferred">Whether to prefer the payload type in SDP offers.</param>
+ (void) registerCodecWithEncodingName:(NSString*)encodingName clockRate:(int)clockRate staticPayloadType:(int)staticPayloadType createCodecBlock:(FMIceLinkWebRTCVideoCodec* (^) ())createCodecBlock preferred:(bool)preferred;
/// <summary>
/// Registers a non-preferred video codec.
/// </summary>
/// <param name="encodingName">Name of the encoding.</param>
/// <param name="createCodec">The codec creation callback.</param>
+ (void) registerCodecWithEncodingName:(NSString*)encodingName createCodec:(FMCallback*)createCodec;
/// <summary>
/// Registers a video codec.
/// </summary>
/// <param name="encodingName">Name of the encoding.</param>
/// <param name="createCodec">The codec creation callback.</param>
/// <param name="preferred">Whether to prefer the payload type in SDP offers.</param>
+ (void) registerCodecWithEncodingName:(NSString*)encodingName createCodec:(FMCallback*)createCodec preferred:(bool)preferred;
/// <summary>
/// Registers a non-preferred video codec.
/// </summary>
/// <param name="encodingName">Name of the encoding.</param>
/// <param name="createCodec">The codec creation callback.</param>
+ (void) registerCodecWithEncodingName:(NSString*)encodingName createCodecBlock:(FMIceLinkWebRTCVideoCodec* (^) ())createCodecBlock;
/// <summary>
/// Registers a video codec.
/// </summary>
/// <param name="encodingName">Name of the encoding.</param>
/// <param name="createCodec">The codec creation callback.</param>
/// <param name="preferred">Whether to prefer the payload type in SDP offers.</param>
+ (void) registerCodecWithEncodingName:(NSString*)encodingName createCodecBlock:(FMIceLinkWebRTCVideoCodec* (^) ())createCodecBlock preferred:(bool)preferred;
/// <summary>
/// Register the motion-JPEG codec (not recommended).
/// </summary>
+ (void) registerJpegCodec;
/// <summary>
/// Sets a value indicating whether to
/// use FEC algorithms tuned for bursty packet loss.
/// Bursty packet loss is more common on wireless
/// networks.
/// Defaults to false on desktop platforms and true
/// on mobile platforms.
/// </summary>
- (void) setBurstyFEC:(bool)value;
/// <summary>
/// Sets a flag indicating whether
/// encoding and decoding should be bypassed
/// for outgoing and incoming media packets.
/// </summary>
- (void) setBypassCodec:(bool)value;
/// <summary>
/// Sets a flag indicating whether
/// decoding should be bypassed
/// for incoming media packets.
/// </summary>
- (void) setBypassDecode:(bool)value;
/// <summary>
/// Sets a flag indicating whether
/// encoding should be bypassed
/// for outgoing media packets.
/// </summary>
- (void) setBypassEncode:(bool)value;
/// <summary>
/// Sets a flag indicating whether
/// decoding should be bypassed for
/// incoming media packetts when a
/// key frame request has been made via
/// a PLI message.
/// </summary>
- (void) setDelayDecodeOnPendingKeyFrame:(bool)value;
/// <summary>
/// Sets <see cref="FMIceLinkWebRTCVideoStream#outgoingDelayPacketMaximum" />.
/// Deprecated. Use <see cref="FMIceLinkWebRTCVideoStream#outgoingDelayPacketMaximum" />
/// or <see cref="FMIceLinkWebRTCVideoStream#incomingDelayPacketMaximum" /> instead.
/// </summary>
- (void) setDelayPacketMaximum:(int)value;
/// <summary>
/// Sets <see cref="FMIceLinkWebRTCVideoStream#outgoingDelayPacketProbability" />.
/// Deprecated. Use <see cref="FMIceLinkWebRTCVideoStream#outgoingDelayPacketProbability" />
/// or <see cref="FMIceLinkWebRTCVideoStream#incomingDelayPacketProbability" /> instead.
/// </summary>
- (void) setDelayPacketProbability:(int)value;
/// <summary>
/// Sets a value indicating whether to
/// disable forward error correction (FEC) completely.
/// If set to true, FEC will never activate.
/// Affects outgoing data only.
/// Defaults to false.
/// </summary>
- (void) setDisableFEC:(bool)value;
/// <summary>
/// Sets a value indicating whether
/// the jitter buffer should be disabled.
/// </summary>
- (void) setDisableJitterBuffer:(bool)value;
/// <summary>
/// Sets a value indicating whether
/// the generic NACK buffer should be disabled.
/// </summary>
- (void) setDisableNackBuffer:(bool)value;
/// <summary>
/// Sets a flag indicating whether picture
/// loss indicator (PLI) packets should be disabled.
/// If set to true, a PLI packet will be generated
/// and sent over the RTCP component if the RTP
/// packet sequence is violated.
/// Defaults to false.
/// </summary>
- (void) setDisablePLI:(bool)value;
/// <summary>
/// Sets <see cref="FMIceLinkWebRTCVideoStream#outgoingDropPacketProbability" />.
/// Deprecated. Use <see cref="FMIceLinkWebRTCVideoStream#outgoingDropPacketProbability" />
/// or <see cref="FMIceLinkWebRTCVideoStream#incomingDropPacketProbability" /> instead.
/// </summary>
- (void) setDropPacketProbability:(int)value;
/// <summary>
/// Sets the maximum number of
/// milliseconds that may elapse before
/// a delayed packet is received.
/// Affects incoming data only.
/// FOR TESTING PURPOSES ONLY.
/// Defaults to zero.
/// </summary>
- (void) setIncomingDelayPacketMaximum:(int)value;
/// <summary>
/// Sets the probability that an
/// incoming packet should be delayed.
/// Affects incoming data only.
/// FOR TESTING PURPOSES ONLY.
/// Defaults to zero.
/// </summary>
- (void) setIncomingDelayPacketProbability:(int)value;
/// <summary>
/// Sets the probability that an
/// incoming packet should be dropped.
/// Affects incoming data only.
/// FOR TESTING PURPOSES ONLY.
/// Defaults to zero.
/// </summary>
- (void) setIncomingDropPacketProbability:(int)value;
/// <summary>
/// Sets the initial jitter buffer length in milliseconds.
/// Defaults to 100 (ms).
/// </summary>
- (void) setJitterBufferLength:(int)value;
/// <summary>
/// Sets the maximum jitter buffer length in milliseconds.
/// Defaults to 300 (ms).
/// </summary>
- (void) setJitterBufferMaxLength:(int)value;
/// <summary>
/// Sets the number of packets to hold in the generic
/// NACK buffer awaiting an earlier packet before releasing them.
/// Defaults to 128.
/// </summary>
- (void) setNackBufferLength:(int)value;
/// <summary>
/// Sets the maximum number of
/// milliseconds that may elapse before
/// a delayed packet is sent.
/// Affects outgoing data only.
/// FOR TESTING PURPOSES ONLY.
/// Defaults to zero.
/// </summary>
- (void) setOutgoingDelayPacketMaximum:(int)value;
/// <summary>
/// Sets the probability that an
/// outgoing packet should be delayed.
/// Affects outgoing data only.
/// FOR TESTING PURPOSES ONLY.
/// Defaults to zero.
/// </summary>
- (void) setOutgoingDelayPacketProbability:(int)value;
/// <summary>
/// Sets the probability that an
/// outgoing packet should be dropped.
/// Affects outgoing data only.
/// FOR TESTING PURPOSES ONLY.
/// Defaults to zero.
/// </summary>
- (void) setOutgoingDropPacketProbability:(int)value;
/// <summary>
/// Sets the loss percentage (0-100)
/// before forward error correction (FEC) is
/// activated (only if supported by the remote peer).
/// Affects outgoing data only.
/// Defaults to 5.
/// </summary>
- (void) setPercentLossToTriggerFEC:(int)value;
/// <summary>
/// Gets the encoding name for ULP FEC packets.
/// </summary>
+ (NSString*) ulpFecEncodingName;
/// <summary>
/// Initializes a new instance of the WebRTC <see cref="FMIceLinkWebRTCVideoStream" /> class.
/// </summary>
/// <param name="localStream">The local media stream.</param>
+ (FMIceLinkWebRTCVideoStream*) videoStreamWithLocalStream:(FMIceLinkWebRTCLocalMediaStream*)localStream;
/// <summary>
/// Initializes a new instance of the WebRTC <see cref="FMIceLinkWebRTCVideoStream" /> class.
/// </summary>
/// <param name="localStream">The local media stream.</param>
/// <param name="offerDtls">Whether to offer to exchange SRTP keys using DTLS.</param>
+ (FMIceLinkWebRTCVideoStream*) videoStreamWithLocalStream:(FMIceLinkWebRTCLocalMediaStream*)localStream offerDtls:(bool)offerDtls;
/// <summary>
/// Initializes a new instance of the WebRTC <see cref="FMIceLinkWebRTCVideoStream" /> class.
/// </summary>
/// <param name="localStream">The local media stream.</param>
/// <param name="offerDtls">Whether to offer to exchange SRTP keys using DTLS.</param>
/// <param name="formats">The stream formats to allow.</param>
+ (FMIceLinkWebRTCVideoStream*) videoStreamWithLocalStream:(FMIceLinkWebRTCLocalMediaStream*)localStream offerDtls:(bool)offerDtls formats:(NSMutableArray*)formats;
/// <summary>
/// Gets the encoding name for VP8 packets.
/// </summary>
+ (NSString*) vp8EncodingName;

@end


@class NSStringFMExtensions;

#pragma clang diagnostic ignored "-Wshorten-64-to-32"
#pragma clang diagnostic ignored "-Wint-to-pointer-cast"

@interface FMIceLinkWebRTCRegistration : NSObject 

- (int) clockRate;
- (NSString*) encodingName;
- (id) init;
- (bool) preferred;
+ (FMIceLinkWebRTCRegistration*) registration;
- (void) setClockRate:(int)value;
- (void) setEncodingName:(NSString*)value;
- (void) setPreferred:(bool)value;
- (void) setStaticPayloadType:(int)value;
- (int) staticPayloadType;

@end


@class FMIceLinkWebRTCDataChannelCodec;
@class FMCallback;
@class FMIceLinkConference;
@class FMIceLinkLink;
@class NSStringFMExtensions;

#pragma clang diagnostic ignored "-Wshorten-64-to-32"
#pragma clang diagnostic ignored "-Wint-to-pointer-cast"

@interface FMIceLinkWebRTCDataChannelRegistration : FMIceLinkWebRTCRegistration 

- (FMCallback*) createCodecCallback;
- (FMIceLinkWebRTCDataChannelCodec*) createCodecWithUsage:(FMIceLinkWebRTCCodecUsage)usage conference:(FMIceLinkConference*)conference link:(FMIceLinkLink*)link peerId:(NSString*)peerId peerState:(NSObject*)peerState;
+ (FMIceLinkWebRTCDataChannelRegistration*) dataChannelRegistration;
- (NSString*) encodingParameters;
- (id) init;
- (NSString*) key;
- (void) setCreateCodecCallback:(FMCallback*)value;
- (void) setCreateCodecCallbackBlock:(FMIceLinkWebRTCDataChannelCodec* (^) ())valueBlock;
- (NSString*) toString;
- (NSString*) description;

@end


@class FMIceLinkWebRTCAudioFrameCapturedArgs;
@class FMIceLinkWebRTCAudioFrameEncodedArgs;
@class FMIceLinkWebRTCVideoFrameCapturedArgs;
@class FMIceLinkWebRTCVideoFrameEncodedArgs;
@class FMIceLinkWebRTCMediaStreamTrack;
@class FMIceLinkWebRTCAudioCaptureLevelArgs;
@class NSMutableArrayFMExtensions;
@class NSStringFMExtensions;
@class FMCallback;
@class FMIceLinkWebRTCAudioBuffer;
@class FMIceLinkWebRTCVideoBuffer;

/// <summary>
/// A media stream (local or remote).
/// </summary>
#pragma clang diagnostic ignored "-Wshorten-64-to-32"
#pragma clang diagnostic ignored "-Wint-to-pointer-cast"

@interface FMIceLinkWebRTCMediaStream : FMDynamic 

/// <summary>
/// Adds an audio track.
/// </summary>
/// <param name="audioTrack">The audio track.</param>
/// <returns></returns>
- (bool) addAudioTrackWithAudioTrack:(FMIceLinkWebRTCMediaStreamTrack*)audioTrack;
/// <summary>
/// Adds an audio track.
/// </summary>
/// <param name="audioTrack">The audio track.</param>
/// <returns></returns>
- (bool) addAudioTrack:(FMIceLinkWebRTCMediaStreamTrack*)audioTrack;
/// <summary>
/// Adds a handler that is raised when an audio track has been added.
/// </summary>
- (FMCallback*) addOnAddAudioTrackWithValue:(FMCallback*)value;
/// <summary>
/// Adds a handler that is raised when an audio track has been added.
/// </summary>
- (FMCallback*) addOnAddAudioTrack:(FMCallback*)value;
/// <summary>
/// Adds a handler that is raised when an audio track has been added.
/// </summary>
- (FMCallback*) addOnAddAudioTrackWithValueBlock:(void (^) (FMIceLinkWebRTCMediaStreamTrack*))valueBlock;
/// <summary>
/// Adds a handler that is raised when an audio track has been added.
/// </summary>
- (FMCallback*) addOnAddAudioTrackBlock:(void (^) (FMIceLinkWebRTCMediaStreamTrack*))valueBlock;
/// <summary>
/// Adds a handler that is raised when a video track has been added.
/// </summary>
- (FMCallback*) addOnAddVideoTrackWithValue:(FMCallback*)value;
/// <summary>
/// Adds a handler that is raised when a video track has been added.
/// </summary>
- (FMCallback*) addOnAddVideoTrack:(FMCallback*)value;
/// <summary>
/// Adds a handler that is raised when a video track has been added.
/// </summary>
- (FMCallback*) addOnAddVideoTrackWithValueBlock:(void (^) (FMIceLinkWebRTCMediaStreamTrack*))valueBlock;
/// <summary>
/// Adds a handler that is raised when a video track has been added.
/// </summary>
- (FMCallback*) addOnAddVideoTrackBlock:(void (^) (FMIceLinkWebRTCMediaStreamTrack*))valueBlock;
/// <summary>
/// Adds a handler that is raised when audio is captured.
/// </summary>
- (FMCallback*) addOnAudioCapturedWithValue:(FMCallback*)value;
/// <summary>
/// Adds a handler that is raised when audio is captured.
/// </summary>
- (FMCallback*) addOnAudioCaptured:(FMCallback*)value;
/// <summary>
/// Adds a handler that is raised when audio is captured.
/// </summary>
- (FMCallback*) addOnAudioCapturedWithValueBlock:(void (^) (FMIceLinkWebRTCMediaStream*, FMIceLinkWebRTCAudioFrameCapturedArgs*))valueBlock;
/// <summary>
/// Adds a handler that is raised when audio is captured.
/// </summary>
- (FMCallback*) addOnAudioCapturedBlock:(void (^) (FMIceLinkWebRTCMediaStream*, FMIceLinkWebRTCAudioFrameCapturedArgs*))valueBlock;
/// <summary>
/// Adds a handler that is raised when audio is encoded.
/// </summary>
- (FMCallback*) addOnAudioEncodedWithValue:(FMCallback*)value;
/// <summary>
/// Adds a handler that is raised when audio is encoded.
/// </summary>
- (FMCallback*) addOnAudioEncoded:(FMCallback*)value;
/// <summary>
/// Adds a handler that is raised when audio is encoded.
/// </summary>
- (FMCallback*) addOnAudioEncodedWithValueBlock:(void (^) (FMIceLinkWebRTCMediaStream*, FMIceLinkWebRTCAudioFrameEncodedArgs*))valueBlock;
/// <summary>
/// Adds a handler that is raised when audio is encoded.
/// </summary>
- (FMCallback*) addOnAudioEncodedBlock:(void (^) (FMIceLinkWebRTCMediaStream*, FMIceLinkWebRTCAudioFrameEncodedArgs*))valueBlock;
/// <summary>
/// Adds a handler that is raised whenever the current audio level changes.
/// </summary>
- (FMCallback*) addOnAudioLevelWithValue:(FMCallback*)value;
/// <summary>
/// Adds a handler that is raised whenever the current audio level changes.
/// </summary>
- (FMCallback*) addOnAudioLevel:(FMCallback*)value;
/// <summary>
/// Adds a handler that is raised whenever the current audio level changes.
/// </summary>
- (FMCallback*) addOnAudioLevelWithValueBlock:(void (^) (FMIceLinkWebRTCAudioCaptureLevelArgs*))valueBlock;
/// <summary>
/// Adds a handler that is raised whenever the current audio level changes.
/// </summary>
- (FMCallback*) addOnAudioLevelBlock:(void (^) (FMIceLinkWebRTCAudioCaptureLevelArgs*))valueBlock;
/// <summary>
/// Adds a handler that is raised when the audio is muted.
/// </summary>
- (FMCallback*) addOnAudioMutedWithValue:(FMCallback*)value;
/// <summary>
/// Adds a handler that is raised when the audio is muted.
/// </summary>
- (FMCallback*) addOnAudioMuted:(FMCallback*)value;
/// <summary>
/// Adds a handler that is raised when the audio is muted.
/// </summary>
- (FMCallback*) addOnAudioMutedWithValueBlock:(void (^) (FMIceLinkWebRTCMediaStream*))valueBlock;
/// <summary>
/// Adds a handler that is raised when the audio is muted.
/// </summary>
- (FMCallback*) addOnAudioMutedBlock:(void (^) (FMIceLinkWebRTCMediaStream*))valueBlock;
/// <summary>
/// Adds a handler that is raised when the audio is unmuted.
/// </summary>
- (FMCallback*) addOnAudioUnmutedWithValue:(FMCallback*)value;
/// <summary>
/// Adds a handler that is raised when the audio is unmuted.
/// </summary>
- (FMCallback*) addOnAudioUnmuted:(FMCallback*)value;
/// <summary>
/// Adds a handler that is raised when the audio is unmuted.
/// </summary>
- (FMCallback*) addOnAudioUnmutedWithValueBlock:(void (^) (FMIceLinkWebRTCMediaStream*))valueBlock;
/// <summary>
/// Adds a handler that is raised when the audio is unmuted.
/// </summary>
- (FMCallback*) addOnAudioUnmutedBlock:(void (^) (FMIceLinkWebRTCMediaStream*))valueBlock;
/// <summary>
/// Adds a handler that is raised when all tracks of the media stream have ended.
/// </summary>
- (FMCallback*) addOnEndedWithValue:(FMCallback*)value;
/// <summary>
/// Adds a handler that is raised when all tracks of the media stream have ended.
/// </summary>
- (FMCallback*) addOnEnded:(FMCallback*)value;
/// <summary>
/// Adds a handler that is raised when all tracks of the media stream have ended.
/// </summary>
- (FMCallback*) addOnEndedWithValueBlock:(void (^) (FMIceLinkWebRTCMediaStream*))valueBlock;
/// <summary>
/// Adds a handler that is raised when all tracks of the media stream have ended.
/// </summary>
- (FMCallback*) addOnEndedBlock:(void (^) (FMIceLinkWebRTCMediaStream*))valueBlock;
/// <summary>
/// Adds a handler that is raised when an audio track has been removed.
/// </summary>
- (FMCallback*) addOnRemoveAudioTrackWithValue:(FMCallback*)value;
/// <summary>
/// Adds a handler that is raised when an audio track has been removed.
/// </summary>
- (FMCallback*) addOnRemoveAudioTrack:(FMCallback*)value;
/// <summary>
/// Adds a handler that is raised when an audio track has been removed.
/// </summary>
- (FMCallback*) addOnRemoveAudioTrackWithValueBlock:(void (^) (FMIceLinkWebRTCMediaStreamTrack*))valueBlock;
/// <summary>
/// Adds a handler that is raised when an audio track has been removed.
/// </summary>
- (FMCallback*) addOnRemoveAudioTrackBlock:(void (^) (FMIceLinkWebRTCMediaStreamTrack*))valueBlock;
/// <summary>
/// Adds a handler that is raised when a video track has been removed.
/// </summary>
- (FMCallback*) addOnRemoveVideoTrackWithValue:(FMCallback*)value;
/// <summary>
/// Adds a handler that is raised when a video track has been removed.
/// </summary>
- (FMCallback*) addOnRemoveVideoTrack:(FMCallback*)value;
/// <summary>
/// Adds a handler that is raised when a video track has been removed.
/// </summary>
- (FMCallback*) addOnRemoveVideoTrackWithValueBlock:(void (^) (FMIceLinkWebRTCMediaStreamTrack*))valueBlock;
/// <summary>
/// Adds a handler that is raised when a video track has been removed.
/// </summary>
- (FMCallback*) addOnRemoveVideoTrackBlock:(void (^) (FMIceLinkWebRTCMediaStreamTrack*))valueBlock;
/// <summary>
/// Adds a handler that is raised when video is captured.
/// </summary>
- (FMCallback*) addOnVideoCapturedWithValue:(FMCallback*)value;
/// <summary>
/// Adds a handler that is raised when video is captured.
/// </summary>
- (FMCallback*) addOnVideoCaptured:(FMCallback*)value;
/// <summary>
/// Adds a handler that is raised when video is captured.
/// </summary>
- (FMCallback*) addOnVideoCapturedWithValueBlock:(void (^) (FMIceLinkWebRTCMediaStream*, FMIceLinkWebRTCVideoFrameCapturedArgs*))valueBlock;
/// <summary>
/// Adds a handler that is raised when video is captured.
/// </summary>
- (FMCallback*) addOnVideoCapturedBlock:(void (^) (FMIceLinkWebRTCMediaStream*, FMIceLinkWebRTCVideoFrameCapturedArgs*))valueBlock;
/// <summary>
/// Adds a handler that is raised when video is encoded.
/// </summary>
- (FMCallback*) addOnVideoEncodedWithValue:(FMCallback*)value;
/// <summary>
/// Adds a handler that is raised when video is encoded.
/// </summary>
- (FMCallback*) addOnVideoEncoded:(FMCallback*)value;
/// <summary>
/// Adds a handler that is raised when video is encoded.
/// </summary>
- (FMCallback*) addOnVideoEncodedWithValueBlock:(void (^) (FMIceLinkWebRTCMediaStream*, FMIceLinkWebRTCVideoFrameEncodedArgs*))valueBlock;
/// <summary>
/// Adds a handler that is raised when video is encoded.
/// </summary>
- (FMCallback*) addOnVideoEncodedBlock:(void (^) (FMIceLinkWebRTCMediaStream*, FMIceLinkWebRTCVideoFrameEncodedArgs*))valueBlock;
/// <summary>
/// Adds a handler that is raised when the video is muted.
/// </summary>
- (FMCallback*) addOnVideoMutedWithValue:(FMCallback*)value;
/// <summary>
/// Adds a handler that is raised when the video is muted.
/// </summary>
- (FMCallback*) addOnVideoMuted:(FMCallback*)value;
/// <summary>
/// Adds a handler that is raised when the video is muted.
/// </summary>
- (FMCallback*) addOnVideoMutedWithValueBlock:(void (^) (FMIceLinkWebRTCMediaStream*))valueBlock;
/// <summary>
/// Adds a handler that is raised when the video is muted.
/// </summary>
- (FMCallback*) addOnVideoMutedBlock:(void (^) (FMIceLinkWebRTCMediaStream*))valueBlock;
/// <summary>
/// Adds a handler that is raised when the video is unmuted.
/// </summary>
- (FMCallback*) addOnVideoUnmutedWithValue:(FMCallback*)value;
/// <summary>
/// Adds a handler that is raised when the video is unmuted.
/// </summary>
- (FMCallback*) addOnVideoUnmuted:(FMCallback*)value;
/// <summary>
/// Adds a handler that is raised when the video is unmuted.
/// </summary>
- (FMCallback*) addOnVideoUnmutedWithValueBlock:(void (^) (FMIceLinkWebRTCMediaStream*))valueBlock;
/// <summary>
/// Adds a handler that is raised when the video is unmuted.
/// </summary>
- (FMCallback*) addOnVideoUnmutedBlock:(void (^) (FMIceLinkWebRTCMediaStream*))valueBlock;
/// <summary>
/// Adds a video track.
/// </summary>
/// <param name="videoTrack">The video track.</param>
/// <returns></returns>
- (bool) addVideoTrackWithVideoTrack:(FMIceLinkWebRTCMediaStreamTrack*)videoTrack;
/// <summary>
/// Adds a video track.
/// </summary>
/// <param name="videoTrack">The video track.</param>
/// <returns></returns>
- (bool) addVideoTrack:(FMIceLinkWebRTCMediaStreamTrack*)videoTrack;
/// <summary>
/// Gets a value indicating whether or not all audio tracks are muted.
/// </summary>
- (bool) audioIsMuted;
/// <summary>
/// Gets the first audio track.
/// </summary>
- (FMIceLinkWebRTCMediaStreamTrack*) audioTrack;
/// <summary>
/// Gets the audio track list.
/// </summary>
- (NSMutableArray*) audioTracks;
/// <summary>
/// Gets the volume of the audio tracks.
/// (1.0 is unity gain.)
/// </summary>
- (float) audioVolume;
/// <summary>
/// Gets a value indicating whether packet
/// loss concealment (PLC) is disabled on any of the
/// remote incoming audio streams.
/// </summary>
- (bool) disablePLC;
/// <summary>
/// Gets a value indicating whether picture
/// loss indications (PLIs) are disabled on any of the
/// remote incoming video streams.
/// </summary>
- (bool) disablePLI;
- (void) end;
/// <summary>
/// Gets whether the <see cref="FMIceLinkWebRTCMediaStream#addOnEnded:" /> event has fired.
/// </summary>
- (bool) ended;
/// <summary>
/// Initializes a new instance of the <see cref="FMIceLinkWebRTCMediaStream" /> class.
/// </summary>
- (id) init;
/// <summary>
/// Initializes a new instance of the <see cref="FMIceLinkWebRTCMediaStream" /> class.
/// </summary>
/// <param name="peerId">The peer ID.</param>
/// <param name="peerState">State of the peer.</param>
- (id) initWithPeerId:(NSString*)peerId peerState:(NSObject*)peerState;
/// <summary>
/// Gets the identifier that describes the media stream.
/// </summary>
- (NSString*) label;
/// <summary>
/// Initializes a new instance of the <see cref="FMIceLinkWebRTCMediaStream" /> class.
/// </summary>
+ (FMIceLinkWebRTCMediaStream*) mediaStream;
/// <summary>
/// Initializes a new instance of the <see cref="FMIceLinkWebRTCMediaStream" /> class.
/// </summary>
/// <param name="peerId">The peer ID.</param>
/// <param name="peerState">State of the peer.</param>
+ (FMIceLinkWebRTCMediaStream*) mediaStreamWithPeerId:(NSString*)peerId peerState:(NSObject*)peerState;
/// <summary>
/// Mutes all audio tracks.
/// </summary>
- (bool) muteAudio;
/// <summary>
/// Mutes all video tracks.
/// </summary>
- (bool) muteVideo;
/// <summary>
/// Gets the peer ID.
/// </summary>
- (NSString*) peerId;
/// <summary>
/// Gets custom state data to associate with the peer.
/// </summary>
- (NSObject*) peerState;
/// <summary>
/// Removes an audio track.
/// </summary>
/// <param name="audioTrack">The audio track.</param>
/// <returns></returns>
- (bool) removeAudioTrackWithAudioTrack:(FMIceLinkWebRTCMediaStreamTrack*)audioTrack;
/// <summary>
/// Removes an audio track.
/// </summary>
/// <param name="audioTrack">The audio track.</param>
/// <returns></returns>
- (bool) removeAudioTrack:(FMIceLinkWebRTCMediaStreamTrack*)audioTrack;
/// <summary>
/// Removes a handler that is raised when an audio track has been added.
/// </summary>
- (void) removeOnAddAudioTrackWithValue:(FMCallback*)value;
/// <summary>
/// Removes a handler that is raised when an audio track has been added.
/// </summary>
- (void) removeOnAddAudioTrack:(FMCallback*)value;
/// <summary>
/// Removes a handler that is raised when a video track has been added.
/// </summary>
- (void) removeOnAddVideoTrackWithValue:(FMCallback*)value;
/// <summary>
/// Removes a handler that is raised when a video track has been added.
/// </summary>
- (void) removeOnAddVideoTrack:(FMCallback*)value;
/// <summary>
/// Removes a handler that is raised when audio is captured.
/// </summary>
- (void) removeOnAudioCapturedWithValue:(FMCallback*)value;
/// <summary>
/// Removes a handler that is raised when audio is captured.
/// </summary>
- (void) removeOnAudioCaptured:(FMCallback*)value;
/// <summary>
/// Removes a handler that is raised when audio is encoded.
/// </summary>
- (void) removeOnAudioEncodedWithValue:(FMCallback*)value;
/// <summary>
/// Removes a handler that is raised when audio is encoded.
/// </summary>
- (void) removeOnAudioEncoded:(FMCallback*)value;
/// <summary>
/// Removes a handler that is raised whenever the current audio level changes.
/// </summary>
- (void) removeOnAudioLevelWithValue:(FMCallback*)value;
/// <summary>
/// Removes a handler that is raised whenever the current audio level changes.
/// </summary>
- (void) removeOnAudioLevel:(FMCallback*)value;
/// <summary>
/// Removes a handler that is raised when the audio is muted.
/// </summary>
- (void) removeOnAudioMutedWithValue:(FMCallback*)value;
/// <summary>
/// Removes a handler that is raised when the audio is muted.
/// </summary>
- (void) removeOnAudioMuted:(FMCallback*)value;
/// <summary>
/// Removes a handler that is raised when the audio is unmuted.
/// </summary>
- (void) removeOnAudioUnmutedWithValue:(FMCallback*)value;
/// <summary>
/// Removes a handler that is raised when the audio is unmuted.
/// </summary>
- (void) removeOnAudioUnmuted:(FMCallback*)value;
/// <summary>
/// Removes a handler that is raised when all tracks of the media stream have ended.
/// </summary>
- (void) removeOnEndedWithValue:(FMCallback*)value;
/// <summary>
/// Removes a handler that is raised when all tracks of the media stream have ended.
/// </summary>
- (void) removeOnEnded:(FMCallback*)value;
/// <summary>
/// Removes a handler that is raised when an audio track has been removed.
/// </summary>
- (void) removeOnRemoveAudioTrackWithValue:(FMCallback*)value;
/// <summary>
/// Removes a handler that is raised when an audio track has been removed.
/// </summary>
- (void) removeOnRemoveAudioTrack:(FMCallback*)value;
/// <summary>
/// Removes a handler that is raised when a video track has been removed.
/// </summary>
- (void) removeOnRemoveVideoTrackWithValue:(FMCallback*)value;
/// <summary>
/// Removes a handler that is raised when a video track has been removed.
/// </summary>
- (void) removeOnRemoveVideoTrack:(FMCallback*)value;
/// <summary>
/// Removes a handler that is raised when video is captured.
/// </summary>
- (void) removeOnVideoCapturedWithValue:(FMCallback*)value;
/// <summary>
/// Removes a handler that is raised when video is captured.
/// </summary>
- (void) removeOnVideoCaptured:(FMCallback*)value;
/// <summary>
/// Removes a handler that is raised when video is encoded.
/// </summary>
- (void) removeOnVideoEncodedWithValue:(FMCallback*)value;
/// <summary>
/// Removes a handler that is raised when video is encoded.
/// </summary>
- (void) removeOnVideoEncoded:(FMCallback*)value;
/// <summary>
/// Removes a handler that is raised when the video is muted.
/// </summary>
- (void) removeOnVideoMutedWithValue:(FMCallback*)value;
/// <summary>
/// Removes a handler that is raised when the video is muted.
/// </summary>
- (void) removeOnVideoMuted:(FMCallback*)value;
/// <summary>
/// Removes a handler that is raised when the video is unmuted.
/// </summary>
- (void) removeOnVideoUnmutedWithValue:(FMCallback*)value;
/// <summary>
/// Removes a handler that is raised when the video is unmuted.
/// </summary>
- (void) removeOnVideoUnmuted:(FMCallback*)value;
/// <summary>
/// Removes a video track.
/// </summary>
/// <param name="videoTrack">The video track.</param>
/// <returns></returns>
- (bool) removeVideoTrackWithVideoTrack:(FMIceLinkWebRTCMediaStreamTrack*)videoTrack;
/// <summary>
/// Removes a video track.
/// </summary>
/// <param name="videoTrack">The video track.</param>
/// <returns></returns>
- (bool) removeVideoTrack:(FMIceLinkWebRTCMediaStreamTrack*)videoTrack;
/// <summary>
/// Force-renders audio to the media stream output.
/// </summary>
/// <param name="audioBuffer">The audio buffer.</param>
- (void) renderAudioWithAudioBuffer:(FMIceLinkWebRTCAudioBuffer*)audioBuffer;
/// <summary>
/// Force-renders audio to the media stream output.
/// </summary>
/// <param name="audioBuffer">The audio buffer.</param>
- (void) renderAudioWithBuffer:(FMIceLinkWebRTCAudioBuffer*)audioBuffer;
/// <summary>
/// Force-renders video to the media stream output.
/// </summary>
/// <param name="videoBuffer">The video buffer.</param>
- (void) renderVideoWithVideoBuffer:(FMIceLinkWebRTCVideoBuffer*)videoBuffer;
/// <summary>
/// Force-renders video to the media stream output.
/// </summary>
/// <param name="videoBuffer">The video buffer.</param>
- (void) renderVideoWithBuffer:(FMIceLinkWebRTCVideoBuffer*)videoBuffer;
/// <summary>
/// Sets the volume of the audio tracks.
/// (1.0 is unity gain.)
/// </summary>
- (void) setAudioVolume:(float)value;
/// <summary>
/// Sets a value indicating whether packet
/// loss concealment (PLC) is disabled on any of the
/// remote incoming audio streams.
/// </summary>
- (void) setDisablePLC:(bool)value;
/// <summary>
/// Sets a value indicating whether picture
/// loss indications (PLIs) are disabled on any of the
/// remote incoming video streams.
/// </summary>
- (void) setDisablePLI:(bool)value;
/// <summary>
/// Sets the peer ID.
/// </summary>
- (void) setPeerId:(NSString*)value;
/// <summary>
/// Sets custom state data to associate with the peer.
/// </summary>
- (void) setPeerState:(NSObject*)value;
/// <summary>
/// Toggles the audio tracks' muted state.
/// </summary>
- (bool) toggleAudioMute;
/// <summary>
/// Toggles the video tracks' muted state.
/// </summary>
- (bool) toggleVideoMute;
/// <summary>
/// Unmutes all audio tracks.
/// </summary>
- (bool) unmuteAudio;
/// <summary>
/// Unmutes all video tracks.
/// </summary>
- (bool) unmuteVideo;
/// <summary>
/// Gets the video height.
/// </summary>
- (int) videoHeight;
/// <summary>
/// Gets a value indicating whether or not all video tracks are muted.
/// </summary>
- (bool) videoIsMuted;
/// <summary>
/// Gets the first video track.
/// </summary>
- (FMIceLinkWebRTCMediaStreamTrack*) videoTrack;
/// <summary>
/// Gets the video track list.
/// </summary>
- (NSMutableArray*) videoTracks;
/// <summary>
/// Gets the video width.
/// </summary>
- (int) videoWidth;

@end


@class FMIceLinkWebRTCCreateAudioRenderProviderArgs;
@class FMIceLinkWebRTCAudioRenderProvider;
@class FMIceLinkWebRTCCreateVideoRenderProviderArgs;
@class FMIceLinkWebRTCVideoRenderProvider;
@class FMIceLinkWebRTCAudioDeviceNumberChangedArgs;
@class FMIceLinkWebRTCVideoDeviceNumberChangedArgs;
@class FMIceLinkWebRTCAudioCaptureProvider;
@class FMIceLinkWebRTCVideoCaptureProvider;
@class FMCallback;
@class NSMutableArrayFMExtensions;
@class FMIceLinkWebRTCVideoBuffer;
@class FMIceLinkWebRTCLocalStartArgs;

/// <summary>
/// A local media stream.
/// </summary>
#pragma clang diagnostic ignored "-Wshorten-64-to-32"
#pragma clang diagnostic ignored "-Wint-to-pointer-cast"

@interface FMIceLinkWebRTCLocalMediaStream : FMIceLinkWebRTCMediaStream 

/// <summary>
/// Adds a handler that is raised whenever the current audio device number changes.
/// </summary>
- (FMCallback*) addOnAudioDeviceNumberChangedWithValue:(FMCallback*)value;
/// <summary>
/// Adds a handler that is raised whenever the current audio device number changes.
/// </summary>
- (FMCallback*) addOnAudioDeviceNumberChanged:(FMCallback*)value;
/// <summary>
/// Adds a handler that is raised whenever the current audio device number changes.
/// </summary>
- (FMCallback*) addOnAudioDeviceNumberChangedWithValueBlock:(void (^) (FMIceLinkWebRTCAudioDeviceNumberChangedArgs*))valueBlock;
/// <summary>
/// Adds a handler that is raised whenever the current audio device number changes.
/// </summary>
- (FMCallback*) addOnAudioDeviceNumberChangedBlock:(void (^) (FMIceLinkWebRTCAudioDeviceNumberChangedArgs*))valueBlock;
/// <summary>
/// Adds a handler that is raised when the audio is paused.
/// </summary>
- (FMCallback*) addOnAudioPausedWithValue:(FMCallback*)value;
/// <summary>
/// Adds a handler that is raised when the audio is paused.
/// </summary>
- (FMCallback*) addOnAudioPaused:(FMCallback*)value;
/// <summary>
/// Adds a handler that is raised when the audio is paused.
/// </summary>
- (FMCallback*) addOnAudioPausedWithValueBlock:(void (^) (FMIceLinkWebRTCLocalMediaStream*))valueBlock;
/// <summary>
/// Adds a handler that is raised when the audio is paused.
/// </summary>
- (FMCallback*) addOnAudioPausedBlock:(void (^) (FMIceLinkWebRTCLocalMediaStream*))valueBlock;
/// <summary>
/// Adds a handler that is raised when the audio is resumed.
/// </summary>
- (FMCallback*) addOnAudioResumedWithValue:(FMCallback*)value;
/// <summary>
/// Adds a handler that is raised when the audio is resumed.
/// </summary>
- (FMCallback*) addOnAudioResumed:(FMCallback*)value;
/// <summary>
/// Adds a handler that is raised when the audio is resumed.
/// </summary>
- (FMCallback*) addOnAudioResumedWithValueBlock:(void (^) (FMIceLinkWebRTCLocalMediaStream*))valueBlock;
/// <summary>
/// Adds a handler that is raised when the audio is resumed.
/// </summary>
- (FMCallback*) addOnAudioResumedBlock:(void (^) (FMIceLinkWebRTCLocalMediaStream*))valueBlock;
/// <summary>
/// Adds a handler that is raised whenever the current video device number changes.
/// </summary>
- (FMCallback*) addOnVideoDeviceNumberChangedWithValue:(FMCallback*)value;
/// <summary>
/// Adds a handler that is raised whenever the current video device number changes.
/// </summary>
- (FMCallback*) addOnVideoDeviceNumberChanged:(FMCallback*)value;
/// <summary>
/// Adds a handler that is raised whenever the current video device number changes.
/// </summary>
- (FMCallback*) addOnVideoDeviceNumberChangedWithValueBlock:(void (^) (FMIceLinkWebRTCVideoDeviceNumberChangedArgs*))valueBlock;
/// <summary>
/// Adds a handler that is raised whenever the current video device number changes.
/// </summary>
- (FMCallback*) addOnVideoDeviceNumberChangedBlock:(void (^) (FMIceLinkWebRTCVideoDeviceNumberChangedArgs*))valueBlock;
/// <summary>
/// Adds a handler that is raised when the video is paused.
/// </summary>
- (FMCallback*) addOnVideoPausedWithValue:(FMCallback*)value;
/// <summary>
/// Adds a handler that is raised when the video is paused.
/// </summary>
- (FMCallback*) addOnVideoPaused:(FMCallback*)value;
/// <summary>
/// Adds a handler that is raised when the video is paused.
/// </summary>
- (FMCallback*) addOnVideoPausedWithValueBlock:(void (^) (FMIceLinkWebRTCLocalMediaStream*))valueBlock;
/// <summary>
/// Adds a handler that is raised when the video is paused.
/// </summary>
- (FMCallback*) addOnVideoPausedBlock:(void (^) (FMIceLinkWebRTCLocalMediaStream*))valueBlock;
/// <summary>
/// Adds a handler that is raised when the video preview is muted.
/// </summary>
- (FMCallback*) addOnVideoPreviewMutedWithValue:(FMCallback*)value;
/// <summary>
/// Adds a handler that is raised when the video preview is muted.
/// </summary>
- (FMCallback*) addOnVideoPreviewMuted:(FMCallback*)value;
/// <summary>
/// Adds a handler that is raised when the video preview is muted.
/// </summary>
- (FMCallback*) addOnVideoPreviewMutedWithValueBlock:(void (^) (FMIceLinkWebRTCLocalMediaStream*))valueBlock;
/// <summary>
/// Adds a handler that is raised when the video preview is muted.
/// </summary>
- (FMCallback*) addOnVideoPreviewMutedBlock:(void (^) (FMIceLinkWebRTCLocalMediaStream*))valueBlock;
/// <summary>
/// Adds a handler that is raised when the video preview is unmuted.
/// </summary>
- (FMCallback*) addOnVideoPreviewUnmutedWithValue:(FMCallback*)value;
/// <summary>
/// Adds a handler that is raised when the video preview is unmuted.
/// </summary>
- (FMCallback*) addOnVideoPreviewUnmuted:(FMCallback*)value;
/// <summary>
/// Adds a handler that is raised when the video preview is unmuted.
/// </summary>
- (FMCallback*) addOnVideoPreviewUnmutedWithValueBlock:(void (^) (FMIceLinkWebRTCLocalMediaStream*))valueBlock;
/// <summary>
/// Adds a handler that is raised when the video preview is unmuted.
/// </summary>
- (FMCallback*) addOnVideoPreviewUnmutedBlock:(void (^) (FMIceLinkWebRTCLocalMediaStream*))valueBlock;
/// <summary>
/// Adds a handler that is raised when the video is resumed.
/// </summary>
- (FMCallback*) addOnVideoResumedWithValue:(FMCallback*)value;
/// <summary>
/// Adds a handler that is raised when the video is resumed.
/// </summary>
- (FMCallback*) addOnVideoResumed:(FMCallback*)value;
/// <summary>
/// Adds a handler that is raised when the video is resumed.
/// </summary>
- (FMCallback*) addOnVideoResumedWithValueBlock:(void (^) (FMIceLinkWebRTCLocalMediaStream*))valueBlock;
/// <summary>
/// Adds a handler that is raised when the video is resumed.
/// </summary>
- (FMCallback*) addOnVideoResumedBlock:(void (^) (FMIceLinkWebRTCLocalMediaStream*))valueBlock;
/// <summary>
/// Gets the audio capture provider.
/// </summary>
- (FMIceLinkWebRTCAudioCaptureProvider*) audioCaptureProvider;
/// <summary>
/// Gets a value indicating whether audio is paused.
/// </summary>
- (bool) audioIsPaused;
/// <summary>
/// Gets which peer IDs should receive
/// captured audio frames. Defaults to <c>null</c>, which
/// means all peers get captured audio frames.
/// </summary>
- (NSMutableArray*) audioTargetPeerIds;
/// <summary>
/// Gets the callback used to create an audio render provider.
/// </summary>
- (FMCallback*) createAudioRenderProvider;
/// <summary>
/// Gets the callback used to create a video render provider.
/// </summary>
- (FMCallback*) createVideoRenderProvider;
/// <summary>
/// Gets the scaling to apply to the preview control created by the
/// default video capture provider.
/// </summary>
- (FMIceLinkWebRTCLayoutScale) defaultVideoPreviewScale;
/// <summary>
/// Gets the scaling to apply to the controls created by the
/// default video render providers.
/// </summary>
- (FMIceLinkWebRTCLayoutScale) defaultVideoScale;
/// <summary>
/// Gets the video source used by the default video capture provider.
/// </summary>
- (FMIceLinkWebRTCVideoSource) defaultVideoSource;
/// <summary>
/// Gets a list of connected audio device names.
/// </summary>
/// <returns></returns>
- (NSMutableArray*) getAudioDeviceNames;
/// <summary>
/// Gets the current audio device number.
/// </summary>
- (int) getAudioDeviceNumber;
/// <summary>
/// Gets the front video device number.
/// </summary>
/// <returns></returns>
- (int) getFrontVideoDeviceNumber;
/// <summary>
/// Gets the rear video device number.
/// </summary>
/// <returns></returns>
- (int) getRearVideoDeviceNumber;
/// <summary>
/// Gets a list of connected video device names.
/// </summary>
/// <returns></returns>
- (NSMutableArray*) getVideoDeviceNames;
/// <summary>
/// Gets the current video device number.
/// </summary>
/// <returns></returns>
- (int) getVideoDeviceNumber;
/// <summary>
/// Initializes a new instance of the <see cref="FMIceLinkWebRTCLocalMediaStream" /> class.
/// </summary>
- (id) init;
/// <summary>
/// Initializes the local media stream.
/// </summary>
- (void) initialize;
/// <summary>
/// Initializes the local media stream.
/// </summary>
/// <param name="callback">The callback to invoke when the local media stream is initialized.</param>
- (void) initializeWithCallback:(FMCallback*)callback;
/// <summary>
/// Initializes the local media stream.
/// </summary>
/// <param name="callback">The callback to invoke when the local media stream is initialized.</param>
- (void) initializeWithCallbackBlock:(void (^) (FMIceLinkWebRTCLocalMediaStream*))callbackBlock;
/// <summary>
/// Initializes a new instance of the <see cref="FMIceLinkWebRTCLocalMediaStream" /> class.
/// </summary>
+ (FMIceLinkWebRTCLocalMediaStream*) localMediaStream;
/// <summary>
/// Gets the buffer to use when the video capture provider is muted.
/// </summary>
- (FMIceLinkWebRTCVideoBuffer*) mutedVideoFrame;
/// <summary>
/// Mutes the video preview.
/// </summary>
- (bool) muteVideoPreview;
/// <summary>
/// Pauses audio capture.
/// </summary>
/// <returns><c>true</c> if audio capture was stopped; otherwise, <c>false</c>.</returns>
- (bool) pauseAudio;
/// <summary>
/// Pauses video capture.
/// </summary>
/// <returns><c>true</c> if video capture was stopped; otherwise, <c>false</c>.</returns>
- (bool) pauseVideo;
/// <summary>
/// Removes a handler that is raised whenever the current audio device number changes.
/// </summary>
- (void) removeOnAudioDeviceNumberChangedWithValue:(FMCallback*)value;
/// <summary>
/// Removes a handler that is raised whenever the current audio device number changes.
/// </summary>
- (void) removeOnAudioDeviceNumberChanged:(FMCallback*)value;
/// <summary>
/// Removes a handler that is raised when the audio is paused.
/// </summary>
- (void) removeOnAudioPausedWithValue:(FMCallback*)value;
/// <summary>
/// Removes a handler that is raised when the audio is paused.
/// </summary>
- (void) removeOnAudioPaused:(FMCallback*)value;
/// <summary>
/// Removes a handler that is raised when the audio is resumed.
/// </summary>
- (void) removeOnAudioResumedWithValue:(FMCallback*)value;
/// <summary>
/// Removes a handler that is raised when the audio is resumed.
/// </summary>
- (void) removeOnAudioResumed:(FMCallback*)value;
/// <summary>
/// Removes a handler that is raised whenever the current video device number changes.
/// </summary>
- (void) removeOnVideoDeviceNumberChangedWithValue:(FMCallback*)value;
/// <summary>
/// Removes a handler that is raised whenever the current video device number changes.
/// </summary>
- (void) removeOnVideoDeviceNumberChanged:(FMCallback*)value;
/// <summary>
/// Removes a handler that is raised when the video is paused.
/// </summary>
- (void) removeOnVideoPausedWithValue:(FMCallback*)value;
/// <summary>
/// Removes a handler that is raised when the video is paused.
/// </summary>
- (void) removeOnVideoPaused:(FMCallback*)value;
/// <summary>
/// Removes a handler that is raised when the video preview is muted.
/// </summary>
- (void) removeOnVideoPreviewMutedWithValue:(FMCallback*)value;
/// <summary>
/// Removes a handler that is raised when the video preview is muted.
/// </summary>
- (void) removeOnVideoPreviewMuted:(FMCallback*)value;
/// <summary>
/// Removes a handler that is raised when the video preview is unmuted.
/// </summary>
- (void) removeOnVideoPreviewUnmutedWithValue:(FMCallback*)value;
/// <summary>
/// Removes a handler that is raised when the video preview is unmuted.
/// </summary>
- (void) removeOnVideoPreviewUnmuted:(FMCallback*)value;
/// <summary>
/// Removes a handler that is raised when the video is resumed.
/// </summary>
- (void) removeOnVideoResumedWithValue:(FMCallback*)value;
/// <summary>
/// Removes a handler that is raised when the video is resumed.
/// </summary>
- (void) removeOnVideoResumed:(FMCallback*)value;
/// <summary>
/// Resumes audio capture.
/// </summary>
/// <returns><c>true</c> if audio capture was started; otherwise, <c>false</c>.</returns>
- (bool) resumeAudio;
/// <summary>
/// Resumes video capture.
/// </summary>
/// <returns><c>true</c> if video capture was started; otherwise, <c>false</c>.</returns>
- (bool) resumeVideo;
/// <summary>
/// Sets the audio capture provider.
/// </summary>
- (void) setAudioCaptureProvider:(FMIceLinkWebRTCAudioCaptureProvider*)value;
/// <summary>
/// Sets the desired audio device number.
/// </summary>
/// <param name="audioDeviceNumber">The desired audio device number.</param>
- (void) setAudioDeviceNumberWithAudioDeviceNumber:(int)audioDeviceNumber;
/// <summary>
/// Sets the desired audio device number.
/// </summary>
/// <param name="audioDeviceNumber">The desired audio device number.</param>
- (void) setAudioDeviceNumber:(int)audioDeviceNumber;
/// <summary>
/// Sets which peer IDs should receive
/// captured audio frames. Defaults to <c>null</c>, which
/// means all peers get captured audio frames.
/// </summary>
- (void) setAudioTargetPeerIds:(NSMutableArray*)value;
/// <summary>
/// Sets the callback used to create an audio render provider.
/// </summary>
- (void) setCreateAudioRenderProvider:(FMCallback*)value;
/// <summary>
/// Sets the callback used to create an audio render provider.
/// </summary>
- (void) setCreateAudioRenderProviderBlock:(FMIceLinkWebRTCAudioRenderProvider* (^) (FMIceLinkWebRTCCreateAudioRenderProviderArgs*))valueBlock;
/// <summary>
/// Sets the callback used to create a video render provider.
/// </summary>
- (void) setCreateVideoRenderProvider:(FMCallback*)value;
/// <summary>
/// Sets the callback used to create a video render provider.
/// </summary>
- (void) setCreateVideoRenderProviderBlock:(FMIceLinkWebRTCVideoRenderProvider* (^) (FMIceLinkWebRTCCreateVideoRenderProviderArgs*))valueBlock;
/// <summary>
/// Sets the scaling to apply to the preview control created by the
/// default video capture provider.
/// </summary>
- (void) setDefaultVideoPreviewScale:(FMIceLinkWebRTCLayoutScale)value;
/// <summary>
/// Sets the scaling to apply to the controls created by the
/// default video render providers.
/// </summary>
- (void) setDefaultVideoScale:(FMIceLinkWebRTCLayoutScale)value;
/// <summary>
/// Sets the video source used by the default video capture provider.
/// </summary>
- (void) setDefaultVideoSource:(FMIceLinkWebRTCVideoSource)value;
/// <summary>
/// Sets the buffer to use when the video capture provider is muted.
/// </summary>
- (void) setMutedVideoFrame:(FMIceLinkWebRTCVideoBuffer*)value;
/// <summary>
/// Sets the video capture provider.
/// </summary>
- (void) setVideoCaptureProvider:(FMIceLinkWebRTCVideoCaptureProvider*)value;
/// <summary>
/// Sets the desired video device number.
/// </summary>
/// <param name="videoDeviceNumber">The desired video device number.</param>
- (void) setVideoDeviceNumberWithVideoDeviceNumber:(int)videoDeviceNumber;
/// <summary>
/// Sets the desired video device number.
/// </summary>
/// <param name="videoDeviceNumber">The desired video device number.</param>
- (void) setVideoDeviceNumber:(int)videoDeviceNumber;
/// <summary>
/// Sets the video parameters to new width and/or height.
/// Use 0 to leave a parameter as-is.
/// </summary>
/// <param name="videoWidth">The desired width.</param>
/// <param name="videoHeight">The desired height.</param>
- (void) setVideoParametersWithVideoWidth:(int)videoWidth videoHeight:(int)videoHeight;
/// <summary>
/// Sets the video parameters to new width, height,
/// and/or frame rate. Use 0 to leave a parameter as-is.
/// </summary>
/// <param name="videoWidth">The desired width.</param>
/// <param name="videoHeight">The desired height.</param>
/// <param name="videoFrameRate">The desired frame rate.</param>
- (void) setVideoParametersWithVideoWidth:(int)videoWidth videoHeight:(int)videoHeight videoFrameRate:(int)videoFrameRate;
/// <summary>
/// Sets which peer IDs should receive
/// captured video frames. Defaults to <c>null</c>, which
/// means all peers get captured video frames.
/// </summary>
- (void) setVideoTargetPeerIds:(NSMutableArray*)value;
/// <summary>
/// Initializes the local media stream, setting up any audio/video providers and preparing for media.
/// </summary>
/// <param name="args">The start arguments.</param>
- (void) startWithArgs:(FMIceLinkWebRTCLocalStartArgs*)args;
/// <summary>
/// Permanently halts the generation of data for the tracks' sources and removes the references to the sources.
/// </summary>
- (void) stop;
/// <summary>
/// Toggles the audio capture's paused state.
/// </summary>
- (bool) toggleAudioPause;
/// <summary>
/// Toggles the video capture's paused state.
/// </summary>
- (bool) toggleVideoPause;
/// <summary>
/// Toggles the video preview's muted state.
/// </summary>
- (bool) toggleVideoPreviewMute;
/// <summary>
/// Unmutes the video preview.
/// </summary>
- (bool) unmuteVideoPreview;
/// <summary>
/// Sets the desired video device number to that of the
/// front video device.
/// </summary>
- (void) useFrontVideoDevice;
/// <summary>
/// Sets the desired audio device number to that of the
/// next audio device.
/// </summary>
- (void) useNextAudioDevice;
/// <summary>
/// Sets the desired video device number to that of the
/// next video device.
/// </summary>
- (void) useNextVideoDevice;
/// <summary>
/// Sets the desired video device number to that of the
/// rear video device.
/// </summary>
- (void) useRearVideoDevice;
/// <summary>
/// Gets the video capture provider.
/// </summary>
- (FMIceLinkWebRTCVideoCaptureProvider*) videoCaptureProvider;
/// <summary>
/// Gets a value indicating whether video is paused.
/// </summary>
- (bool) videoIsPaused;
/// <summary>
/// Gets a value indicating whether or not the video preview is muted.
/// </summary>
- (bool) videoPreviewIsMuted;
/// <summary>
/// Gets which peer IDs should receive
/// captured video frames. Defaults to <c>null</c>, which
/// means all peers get captured video frames.
/// </summary>
- (NSMutableArray*) videoTargetPeerIds;

@end


@class FMIceLinkWebRTCAudioBuffer;
@class FMIceLinkWebRTCAudioCaptureProvider;
@class FMIceLinkWebRTCAudioCodec;
@class NSMutableArrayFMExtensions;

/// <summary>
/// Arguments for the MediaStreamTrack OnAudioEncoded event.
/// </summary>
#pragma clang diagnostic ignored "-Wshorten-64-to-32"
#pragma clang diagnostic ignored "-Wint-to-pointer-cast"

@interface FMIceLinkWebRTCAudioFrameEncodedArgs : NSObject 

+ (FMIceLinkWebRTCAudioFrameEncodedArgs*) audioFrameEncodedArgs;
/// <summary>
/// Gets the buffer.
/// </summary>
- (FMIceLinkWebRTCAudioBuffer*) buffer;
/// <summary>
/// Gets the capture provider.
/// </summary>
- (FMIceLinkWebRTCAudioCaptureProvider*) captureProvider;
/// <summary>
/// Gets the codec.
/// </summary>
- (FMIceLinkWebRTCAudioCodec*) codec;
/// <summary>
/// Gets the encoded frames.
/// </summary>
- (NSMutableArray*) encodedFrames;
- (id) init;
/// <summary>
/// Gets the peer IDs being targeted (or <c>null</c> if targeting all).
/// </summary>
- (NSMutableArray*) peerIds;
/// <summary>
/// Sets the buffer.
/// </summary>
- (void) setBuffer:(FMIceLinkWebRTCAudioBuffer*)value;
/// <summary>
/// Sets the capture provider.
/// </summary>
- (void) setCaptureProvider:(FMIceLinkWebRTCAudioCaptureProvider*)value;
/// <summary>
/// Sets the codec.
/// </summary>
- (void) setCodec:(FMIceLinkWebRTCAudioCodec*)value;
/// <summary>
/// Sets the encoded frames.
/// </summary>
- (void) setEncodedFrames:(NSMutableArray*)value;
/// <summary>
/// Sets the peer IDs being targeted (or <c>null</c> if targeting all).
/// </summary>
- (void) setPeerIds:(NSMutableArray*)value;

@end


@class FMIceLinkWebRTCVideoBuffer;
@class FMIceLinkWebRTCVideoCaptureProvider;
@class FMIceLinkWebRTCVideoCodec;
@class NSMutableDataFMExtensions;
@class NSMutableArrayFMExtensions;

/// <summary>
/// Arguments for the MediaStreamTrack OnVideoEncoded event.
/// </summary>
#pragma clang diagnostic ignored "-Wshorten-64-to-32"
#pragma clang diagnostic ignored "-Wint-to-pointer-cast"

@interface FMIceLinkWebRTCVideoFrameEncodedArgs : NSObject 

/// <summary>
/// Gets the buffer.
/// </summary>
- (FMIceLinkWebRTCVideoBuffer*) buffer;
/// <summary>
/// Gets the capture provider.
/// </summary>
- (FMIceLinkWebRTCVideoCaptureProvider*) captureProvider;
/// <summary>
/// Gets the codec.
/// </summary>
- (FMIceLinkWebRTCVideoCodec*) codec;
/// <summary>
/// Gets the encoded frame.
/// </summary>
- (NSMutableData*) encodedFrame;
- (id) init;
/// <summary>
/// Gets the peer IDs being targeted (or <c>null</c> if targeting all).
/// </summary>
- (NSMutableArray*) peerIds;
/// <summary>
/// Sets the buffer.
/// </summary>
- (void) setBuffer:(FMIceLinkWebRTCVideoBuffer*)value;
/// <summary>
/// Sets the capture provider.
/// </summary>
- (void) setCaptureProvider:(FMIceLinkWebRTCVideoCaptureProvider*)value;
/// <summary>
/// Sets the codec.
/// </summary>
- (void) setCodec:(FMIceLinkWebRTCVideoCodec*)value;
/// <summary>
/// Sets the encoded frame.
/// </summary>
- (void) setEncodedFrame:(NSMutableData*)value;
/// <summary>
/// Sets the peer IDs being targeted (or <c>null</c> if targeting all).
/// </summary>
- (void) setPeerIds:(NSMutableArray*)value;
+ (FMIceLinkWebRTCVideoFrameEncodedArgs*) videoFrameEncodedArgs;

@end


@class FMIceLinkWebRTCAudioFrameCapturedArgs;
@class FMIceLinkWebRTCVideoFrameCapturedArgs;
@class FMIceLinkWebRTCAudioFrameEncodedArgs;
@class FMIceLinkWebRTCVideoFrameEncodedArgs;
@class FMIceLinkWebRTCAudioCaptureLevelArgs;
@class FMIceLinkWebRTCAudioCaptureProvider;
@class NSMutableDictionaryFMExtensions;
@class NSMutableArrayFMExtensions;
@class FMIceLinkWebRTCVideoCaptureProvider;
@class NSStringFMExtensions;
@class FMCallback;
@class FMIceLinkWebRTCAudioRenderProvider;
@class FMIceLinkWebRTCVideoRenderProvider;
@class FMIceLinkWebRTCAudioBuffer;
@class FMIceLinkWebRTCVideoBuffer;

/// <summary>
/// A media-stream track that represents a media source.
/// </summary>
#pragma clang diagnostic ignored "-Wshorten-64-to-32"
#pragma clang diagnostic ignored "-Wint-to-pointer-cast"

@interface FMIceLinkWebRTCMediaStreamTrack : NSObject 

- (void) addAudioRenderWithAudioRender:(FMIceLinkWebRTCAudioRenderProvider*)audioRender;
- (void) addAudioRender:(FMIceLinkWebRTCAudioRenderProvider*)audioRender;
/// <summary>
/// Adds a handler that is raised when audio is captured.
/// </summary>
- (FMCallback*) addOnAudioCapturedWithValue:(FMCallback*)value;
/// <summary>
/// Adds a handler that is raised when audio is captured.
/// </summary>
- (FMCallback*) addOnAudioCaptured:(FMCallback*)value;
/// <summary>
/// Adds a handler that is raised when audio is captured.
/// </summary>
- (FMCallback*) addOnAudioCapturedWithValueBlock:(void (^) (FMIceLinkWebRTCMediaStreamTrack*, FMIceLinkWebRTCAudioFrameCapturedArgs*))valueBlock;
/// <summary>
/// Adds a handler that is raised when audio is captured.
/// </summary>
- (FMCallback*) addOnAudioCapturedBlock:(void (^) (FMIceLinkWebRTCMediaStreamTrack*, FMIceLinkWebRTCAudioFrameCapturedArgs*))valueBlock;
/// <summary>
/// Adds a handler that is raised when audio is encoded.
/// </summary>
- (FMCallback*) addOnAudioEncodedWithValue:(FMCallback*)value;
/// <summary>
/// Adds a handler that is raised when audio is encoded.
/// </summary>
- (FMCallback*) addOnAudioEncoded:(FMCallback*)value;
/// <summary>
/// Adds a handler that is raised when audio is encoded.
/// </summary>
- (FMCallback*) addOnAudioEncodedWithValueBlock:(void (^) (FMIceLinkWebRTCMediaStreamTrack*, FMIceLinkWebRTCAudioFrameEncodedArgs*))valueBlock;
/// <summary>
/// Adds a handler that is raised when audio is encoded.
/// </summary>
- (FMCallback*) addOnAudioEncodedBlock:(void (^) (FMIceLinkWebRTCMediaStreamTrack*, FMIceLinkWebRTCAudioFrameEncodedArgs*))valueBlock;
/// <summary>
/// Adds a handler that is raised when the audio level changes.
/// </summary>
- (FMCallback*) addOnAudioLevelWithValue:(FMCallback*)value;
/// <summary>
/// Adds a handler that is raised when the audio level changes.
/// </summary>
- (FMCallback*) addOnAudioLevel:(FMCallback*)value;
/// <summary>
/// Adds a handler that is raised when the audio level changes.
/// </summary>
- (FMCallback*) addOnAudioLevelWithValueBlock:(void (^) (FMIceLinkWebRTCMediaStreamTrack*, FMIceLinkWebRTCAudioCaptureLevelArgs*))valueBlock;
/// <summary>
/// Adds a handler that is raised when the audio level changes.
/// </summary>
- (FMCallback*) addOnAudioLevelBlock:(void (^) (FMIceLinkWebRTCMediaStreamTrack*, FMIceLinkWebRTCAudioCaptureLevelArgs*))valueBlock;
/// <summary>
/// Adds a handler that is raised when the capture source has been muted.
/// </summary>
- (FMCallback*) addOnCaptureMutedWithValue:(FMCallback*)value;
/// <summary>
/// Adds a handler that is raised when the capture source has been muted.
/// </summary>
- (FMCallback*) addOnCaptureMuted:(FMCallback*)value;
/// <summary>
/// Adds a handler that is raised when the capture source has been muted.
/// </summary>
- (FMCallback*) addOnCaptureMutedWithValueBlock:(void (^) (FMIceLinkWebRTCMediaStreamTrack*))valueBlock;
/// <summary>
/// Adds a handler that is raised when the capture source has been muted.
/// </summary>
- (FMCallback*) addOnCaptureMutedBlock:(void (^) (FMIceLinkWebRTCMediaStreamTrack*))valueBlock;
/// <summary>
/// Adds a handler that is raised when the capture source has been unmuted.
/// </summary>
- (FMCallback*) addOnCaptureUnmutedWithValue:(FMCallback*)value;
/// <summary>
/// Adds a handler that is raised when the capture source has been unmuted.
/// </summary>
- (FMCallback*) addOnCaptureUnmuted:(FMCallback*)value;
/// <summary>
/// Adds a handler that is raised when the capture source has been unmuted.
/// </summary>
- (FMCallback*) addOnCaptureUnmutedWithValueBlock:(void (^) (FMIceLinkWebRTCMediaStreamTrack*))valueBlock;
/// <summary>
/// Adds a handler that is raised when the capture source has been unmuted.
/// </summary>
- (FMCallback*) addOnCaptureUnmutedBlock:(void (^) (FMIceLinkWebRTCMediaStreamTrack*))valueBlock;
/// <summary>
/// Adds a handler that is raised when the source will not provide data.
/// </summary>
- (FMCallback*) addOnEndedWithValue:(FMCallback*)value;
/// <summary>
/// Adds a handler that is raised when the source will not provide data.
/// </summary>
- (FMCallback*) addOnEnded:(FMCallback*)value;
/// <summary>
/// Adds a handler that is raised when the source will not provide data.
/// </summary>
- (FMCallback*) addOnEndedWithValueBlock:(void (^) (FMIceLinkWebRTCMediaStreamTrack*))valueBlock;
/// <summary>
/// Adds a handler that is raised when the source will not provide data.
/// </summary>
- (FMCallback*) addOnEndedBlock:(void (^) (FMIceLinkWebRTCMediaStreamTrack*))valueBlock;
/// <summary>
/// Adds a handler that is raised when the render target has been muted.
/// </summary>
- (FMCallback*) addOnRenderMutedWithValue:(FMCallback*)value;
/// <summary>
/// Adds a handler that is raised when the render target has been muted.
/// </summary>
- (FMCallback*) addOnRenderMuted:(FMCallback*)value;
/// <summary>
/// Adds a handler that is raised when the render target has been muted.
/// </summary>
- (FMCallback*) addOnRenderMutedWithValueBlock:(void (^) (FMIceLinkWebRTCMediaStreamTrack*))valueBlock;
/// <summary>
/// Adds a handler that is raised when the render target has been muted.
/// </summary>
- (FMCallback*) addOnRenderMutedBlock:(void (^) (FMIceLinkWebRTCMediaStreamTrack*))valueBlock;
/// <summary>
/// Adds a handler that is raised when the render target has been unmuted.
/// </summary>
- (FMCallback*) addOnRenderUnmutedWithValue:(FMCallback*)value;
/// <summary>
/// Adds a handler that is raised when the render target has been unmuted.
/// </summary>
- (FMCallback*) addOnRenderUnmuted:(FMCallback*)value;
/// <summary>
/// Adds a handler that is raised when the render target has been unmuted.
/// </summary>
- (FMCallback*) addOnRenderUnmutedWithValueBlock:(void (^) (FMIceLinkWebRTCMediaStreamTrack*))valueBlock;
/// <summary>
/// Adds a handler that is raised when the render target has been unmuted.
/// </summary>
- (FMCallback*) addOnRenderUnmutedBlock:(void (^) (FMIceLinkWebRTCMediaStreamTrack*))valueBlock;
/// <summary>
/// Adds a handler that is raised when video is captured.
/// </summary>
- (FMCallback*) addOnVideoCapturedWithValue:(FMCallback*)value;
/// <summary>
/// Adds a handler that is raised when video is captured.
/// </summary>
- (FMCallback*) addOnVideoCaptured:(FMCallback*)value;
/// <summary>
/// Adds a handler that is raised when video is captured.
/// </summary>
- (FMCallback*) addOnVideoCapturedWithValueBlock:(void (^) (FMIceLinkWebRTCMediaStreamTrack*, FMIceLinkWebRTCVideoFrameCapturedArgs*))valueBlock;
/// <summary>
/// Adds a handler that is raised when video is captured.
/// </summary>
- (FMCallback*) addOnVideoCapturedBlock:(void (^) (FMIceLinkWebRTCMediaStreamTrack*, FMIceLinkWebRTCVideoFrameCapturedArgs*))valueBlock;
/// <summary>
/// Adds a handler that is raised when video is encoded.
/// </summary>
- (FMCallback*) addOnVideoEncodedWithValue:(FMCallback*)value;
/// <summary>
/// Adds a handler that is raised when video is encoded.
/// </summary>
- (FMCallback*) addOnVideoEncoded:(FMCallback*)value;
/// <summary>
/// Adds a handler that is raised when video is encoded.
/// </summary>
- (FMCallback*) addOnVideoEncodedWithValueBlock:(void (^) (FMIceLinkWebRTCMediaStreamTrack*, FMIceLinkWebRTCVideoFrameEncodedArgs*))valueBlock;
/// <summary>
/// Adds a handler that is raised when video is encoded.
/// </summary>
- (FMCallback*) addOnVideoEncodedBlock:(void (^) (FMIceLinkWebRTCMediaStreamTrack*, FMIceLinkWebRTCVideoFrameEncodedArgs*))valueBlock;
- (void) addVideoRenderWithVideoRender:(FMIceLinkWebRTCVideoRenderProvider*)videoRender;
- (void) addVideoRender:(FMIceLinkWebRTCVideoRenderProvider*)videoRender;
- (FMIceLinkWebRTCAudioCaptureProvider*) audioCapture;
- (NSMutableArray*) audioRenders;
/// <summary>
/// Gets the capture volume.
/// (1.0 is unity gain. Only applies to audio tracks.)
/// </summary>
- (float) captureVolume;
/// <summary>
/// Gets a value indicating whether packet
/// loss concealment (PLC) is disabled on the
/// remote incoming audio stream.
/// </summary>
- (bool) disablePLC;
/// <summary>
/// Gets a value indicating whether picture
/// loss indications (PLIs) are disabled on the
/// remote incoming video stream.
/// </summary>
- (bool) disablePLI;
/// <summary>
/// Gets whether the track is still associated with its source.
/// </summary>
- (bool) enabled;
- (void) end;
/// <summary>
/// Gets whether the track has ended.
/// </summary>
- (bool) ended;
+ (FMIceLinkWebRTCMediaStreamTrack*) fromAudioCaptureWithAudioCapture:(FMIceLinkWebRTCAudioCaptureProvider*)audioCapture local:(bool)local;
+ (FMIceLinkWebRTCMediaStreamTrack*) fromAudioCapture:(FMIceLinkWebRTCAudioCaptureProvider*)audioCapture local:(bool)local;
+ (FMIceLinkWebRTCMediaStreamTrack*) fromVideoCaptureWithVideoCapture:(FMIceLinkWebRTCVideoCaptureProvider*)videoCapture local:(bool)local;
+ (FMIceLinkWebRTCMediaStreamTrack*) fromVideoCapture:(FMIceLinkWebRTCVideoCaptureProvider*)videoCapture local:(bool)local;
- (id) init;
/// <summary>
/// Gets whether the capture source is muted.
/// </summary>
- (bool) isCaptureMuted;
/// <summary>
/// Gets whether the render target is muted.
/// </summary>
- (bool) isRenderMuted;
/// <summary>
/// Gets the kind of the track.
/// </summary>
- (FMIceLinkWebRTCMediaStreamTrackKind) kind;
/// <summary>
/// Gets the user agent-assigned string that identifies the track source.
/// </summary>
- (NSString*) label;
/// <summary>
/// Gets whether the track is local.
/// </summary>
- (bool) local;
+ (FMIceLinkWebRTCMediaStreamTrack*) mediaStreamTrack;
/// <summary>
/// Mutes the capture source.
/// </summary>
- (bool) muteCapture;
/// <summary>
/// Mutes the render target.
/// </summary>
- (bool) muteRender;
- (bool) removeAudioRenderWithAudioRender:(FMIceLinkWebRTCAudioRenderProvider*)audioRender;
- (bool) removeAudioRender:(FMIceLinkWebRTCAudioRenderProvider*)audioRender;
/// <summary>
/// Removes a handler that is raised when audio is captured.
/// </summary>
- (void) removeOnAudioCapturedWithValue:(FMCallback*)value;
/// <summary>
/// Removes a handler that is raised when audio is captured.
/// </summary>
- (void) removeOnAudioCaptured:(FMCallback*)value;
/// <summary>
/// Removes a handler that is raised when audio is encoded.
/// </summary>
- (void) removeOnAudioEncodedWithValue:(FMCallback*)value;
/// <summary>
/// Removes a handler that is raised when audio is encoded.
/// </summary>
- (void) removeOnAudioEncoded:(FMCallback*)value;
/// <summary>
/// Removes a handler that is raised when the audio level changes.
/// </summary>
- (void) removeOnAudioLevelWithValue:(FMCallback*)value;
/// <summary>
/// Removes a handler that is raised when the audio level changes.
/// </summary>
- (void) removeOnAudioLevel:(FMCallback*)value;
/// <summary>
/// Removes a handler that is raised when the capture source has been muted.
/// </summary>
- (void) removeOnCaptureMutedWithValue:(FMCallback*)value;
/// <summary>
/// Removes a handler that is raised when the capture source has been muted.
/// </summary>
- (void) removeOnCaptureMuted:(FMCallback*)value;
/// <summary>
/// Removes a handler that is raised when the capture source has been unmuted.
/// </summary>
- (void) removeOnCaptureUnmutedWithValue:(FMCallback*)value;
/// <summary>
/// Removes a handler that is raised when the capture source has been unmuted.
/// </summary>
- (void) removeOnCaptureUnmuted:(FMCallback*)value;
/// <summary>
/// Removes a handler that is raised when the source will not provide data.
/// </summary>
- (void) removeOnEndedWithValue:(FMCallback*)value;
/// <summary>
/// Removes a handler that is raised when the source will not provide data.
/// </summary>
- (void) removeOnEnded:(FMCallback*)value;
/// <summary>
/// Removes a handler that is raised when the render target has been muted.
/// </summary>
- (void) removeOnRenderMutedWithValue:(FMCallback*)value;
/// <summary>
/// Removes a handler that is raised when the render target has been muted.
/// </summary>
- (void) removeOnRenderMuted:(FMCallback*)value;
/// <summary>
/// Removes a handler that is raised when the render target has been unmuted.
/// </summary>
- (void) removeOnRenderUnmutedWithValue:(FMCallback*)value;
/// <summary>
/// Removes a handler that is raised when the render target has been unmuted.
/// </summary>
- (void) removeOnRenderUnmuted:(FMCallback*)value;
/// <summary>
/// Removes a handler that is raised when video is captured.
/// </summary>
- (void) removeOnVideoCapturedWithValue:(FMCallback*)value;
/// <summary>
/// Removes a handler that is raised when video is captured.
/// </summary>
- (void) removeOnVideoCaptured:(FMCallback*)value;
/// <summary>
/// Removes a handler that is raised when video is encoded.
/// </summary>
- (void) removeOnVideoEncodedWithValue:(FMCallback*)value;
/// <summary>
/// Removes a handler that is raised when video is encoded.
/// </summary>
- (void) removeOnVideoEncoded:(FMCallback*)value;
- (bool) removeVideoRenderWithVideoRender:(FMIceLinkWebRTCVideoRenderProvider*)videoRender;
- (bool) removeVideoRender:(FMIceLinkWebRTCVideoRenderProvider*)videoRender;
/// <summary>
/// Force-renders audio to the media stream track output.
/// </summary>
/// <param name="audioBuffer">The audio buffer.</param>
- (void) renderAudioWithAudioBuffer:(FMIceLinkWebRTCAudioBuffer*)audioBuffer;
/// <summary>
/// Force-renders audio to the media stream track output.
/// </summary>
/// <param name="audioBuffer">The audio buffer.</param>
- (void) renderAudioWithBuffer:(FMIceLinkWebRTCAudioBuffer*)audioBuffer;
/// <summary>
/// Force-renders video to the media stream track output.
/// </summary>
/// <param name="videoBuffer">The video buffer.</param>
- (void) renderVideoWithVideoBuffer:(FMIceLinkWebRTCVideoBuffer*)videoBuffer;
/// <summary>
/// Force-renders video to the media stream track output.
/// </summary>
/// <param name="videoBuffer">The video buffer.</param>
- (void) renderVideoWithBuffer:(FMIceLinkWebRTCVideoBuffer*)videoBuffer;
/// <summary>
/// Gets the render volume.
/// (1.0 is unity gain. Only applies to audio tracks.)
/// </summary>
- (float) renderVolume;
/// <summary>
/// Sets the capture volume.
/// (1.0 is unity gain. Only applies to audio tracks.)
/// </summary>
- (void) setCaptureVolume:(float)value;
/// <summary>
/// Sets a value indicating whether packet
/// loss concealment (PLC) is disabled on the
/// remote incoming audio stream.
/// </summary>
- (void) setDisablePLC:(bool)value;
/// <summary>
/// Sets a value indicating whether picture
/// loss indications (PLIs) are disabled on the
/// remote incoming video stream.
/// </summary>
- (void) setDisablePLI:(bool)value;
/// <summary>
/// Sets the render volume.
/// (1.0 is unity gain. Only applies to audio tracks.)
/// </summary>
- (void) setRenderVolume:(float)value;
- (void) setVideoCapture:(FMIceLinkWebRTCVideoCaptureProvider*)value;
/// <summary>
/// Gets the track state.
/// </summary>
- (FMIceLinkWebRTCMediaStreamTrackState) state;
/// <summary>
/// Unmutes the capture source.
/// </summary>
- (bool) unmuteCapture;
/// <summary>
/// Unmutes the render target.
/// </summary>
- (bool) unmuteRender;
- (FMIceLinkWebRTCVideoCaptureProvider*) videoCapture;
/// <summary>
/// Gets the video height.
/// </summary>
- (int) videoHeight;
- (NSMutableArray*) videoRenders;
/// <summary>
/// Gets the video width.
/// </summary>
- (int) videoWidth;

@end


@class FMIceLinkWebRTCAudioCodec;
@class FMCallback;
@class FMIceLinkConference;
@class FMIceLinkLink;
@class NSStringFMExtensions;

#pragma clang diagnostic ignored "-Wshorten-64-to-32"
#pragma clang diagnostic ignored "-Wint-to-pointer-cast"

@interface FMIceLinkWebRTCAudioRegistration : FMIceLinkWebRTCRegistration 

+ (FMIceLinkWebRTCAudioRegistration*) audioRegistration;
- (int) channels;
- (FMCallback*) createCodecCallback;
- (FMIceLinkWebRTCAudioCodec*) createCodecWithUsage:(FMIceLinkWebRTCCodecUsage)usage conference:(FMIceLinkConference*)conference link:(FMIceLinkLink*)link peerId:(NSString*)peerId peerState:(NSObject*)peerState;
- (NSString*) encodingParameters;
- (id) init;
- (NSString*) key;
- (void) setChannels:(int)value;
- (void) setCreateCodecCallback:(FMCallback*)value;
- (void) setCreateCodecCallbackBlock:(FMIceLinkWebRTCAudioCodec* (^) ())valueBlock;
- (NSString*) toString;
- (NSString*) description;

@end


@class FMIceLinkWebRTCVideoCodec;
@class FMCallback;
@class FMIceLinkConference;
@class FMIceLinkLink;
@class NSStringFMExtensions;

#pragma clang diagnostic ignored "-Wshorten-64-to-32"
#pragma clang diagnostic ignored "-Wint-to-pointer-cast"

@interface FMIceLinkWebRTCVideoRegistration : FMIceLinkWebRTCRegistration 

- (FMCallback*) createCodecCallback;
- (FMIceLinkWebRTCVideoCodec*) createCodecWithUsage:(FMIceLinkWebRTCCodecUsage)usage conference:(FMIceLinkConference*)conference link:(FMIceLinkLink*)link peerId:(NSString*)peerId peerState:(NSObject*)peerState;
- (NSString*) encodingParameters;
- (id) init;
- (NSString*) key;
- (void) setCreateCodecCallback:(FMCallback*)value;
- (void) setCreateCodecCallbackBlock:(FMIceLinkWebRTCVideoCodec* (^) ())valueBlock;
- (NSString*) toString;
- (NSString*) description;
+ (FMIceLinkWebRTCVideoRegistration*) videoRegistration;

@end


@class FMIceLinkConference;
@class NSMutableArrayFMExtensions;
@class FMIceLinkWebRTCFecProtectionParameters;
@class FMIceLinkWebRTCFecProducer;
@class FMIceLinkStreamFormat;
@class FMIceLinkLink;
@class FMIceLinkWebRTCVideoCodec;
@class FMIceLinkWebRTCVideoRegistration;
@class FMIceLinkWebRTCVideoStream;
@class FMIceLinkWebRTCVideoRenderInitializeArgs;
@class FMIceLinkWebRTCVideoBuffer;

#pragma clang diagnostic ignored "-Wshorten-64-to-32"
#pragma clang diagnostic ignored "-Wint-to-pointer-cast"

@interface FMIceLinkWebRTCRemoteVideoRenderProvider : FMIceLinkWebRTCVideoRenderProvider 

- (bool) burstyFEC;
- (bool) bypassEncode;
- (FMIceLinkConference*) conference;
- (int) delayPacketMaximum;
- (int) delayPacketProbability;
- (FMIceLinkWebRTCFecProtectionParameters*) deltaFecParameters;
- (NSMutableArray*) dequeueRtcpPackets;
- (void) destroy;
- (bool) disableFEC;
- (int) dropPacketProbability;
- (void) enqueueRtcpPacketsWithPackets:(NSMutableArray*)packets;
- (void) enqueueRtcpPackets:(NSMutableArray*)packets;
- (bool) fecActive;
- (FMIceLinkStreamFormat*) format;
- (NSMutableArray*) formats;
- (NSObject*) getControl;
- (void) initializeWithRenderArgs:(FMIceLinkWebRTCVideoRenderInitializeArgs*)renderArgs;
- (id) initWithConference:(FMIceLinkConference*)conference link:(FMIceLinkLink*)link stream:(FMIceLinkWebRTCVideoStream*)stream format:(FMIceLinkStreamFormat*)format formats:(NSMutableArray*)formats registration:(FMIceLinkWebRTCVideoRegistration*)registration disableFEC:(bool)disableFEC burstyFEC:(bool)burstyFEC;
- (FMIceLinkWebRTCFecProtectionParameters*) keyFecParameters;
- (FMIceLinkLink*) link;
- (int) percentLossToTriggerFEC;
- (FMIceLinkWebRTCVideoRegistration*) registration;
+ (FMIceLinkWebRTCRemoteVideoRenderProvider*) remoteVideoRenderProviderWithConference:(FMIceLinkConference*)conference link:(FMIceLinkLink*)link stream:(FMIceLinkWebRTCVideoStream*)stream format:(FMIceLinkStreamFormat*)format formats:(NSMutableArray*)formats registration:(FMIceLinkWebRTCVideoRegistration*)registration disableFEC:(bool)disableFEC burstyFEC:(bool)burstyFEC;
- (void) renderWithFrame:(FMIceLinkWebRTCVideoBuffer*)frame;
- (void) setBypassEncode:(bool)value;
- (void) setDelayPacketMaximum:(int)value;
- (void) setDelayPacketProbability:(int)value;
- (void) setDeltaFecParameters:(FMIceLinkWebRTCFecProtectionParameters*)value;
- (void) setDropPacketProbability:(int)value;
- (void) setKeyFecParameters:(FMIceLinkWebRTCFecProtectionParameters*)value;
- (void) setPercentLossToTriggerFEC:(int)value;
- (FMIceLinkWebRTCVideoStream*) stream;

@end


@class FMIceLinkConference;
@class NSMutableArrayFMExtensions;
@class FMIceLinkStreamFormat;
@class FMIceLinkLink;
@class FMIceLinkWebRTCAudioCodec;
@class FMIceLinkWebRTCAudioRegistration;
@class FMIceLinkWebRTCAudioStream;
@class FMIceLinkWebRTCAudioRenderInitializeArgs;
@class FMIceLinkWebRTCAudioBuffer;

#pragma clang diagnostic ignored "-Wshorten-64-to-32"
#pragma clang diagnostic ignored "-Wint-to-pointer-cast"

@interface FMIceLinkWebRTCRemoteAudioRenderProvider : FMIceLinkWebRTCAudioRenderProvider 

- (bool) bypassEncode;
- (FMIceLinkConference*) conference;
- (int) delayPacketMaximum;
- (int) delayPacketProbability;
- (NSMutableArray*) dequeueRtcpPackets;
- (void) destroy;
- (int) dropPacketProbability;
- (void) enqueueRtcpPacketsWithPackets:(NSMutableArray*)packets;
- (void) enqueueRtcpPackets:(NSMutableArray*)packets;
- (FMIceLinkStreamFormat*) format;
- (void) initializeWithRenderArgs:(FMIceLinkWebRTCAudioRenderInitializeArgs*)renderArgs;
- (id) initWithConference:(FMIceLinkConference*)conference link:(FMIceLinkLink*)link stream:(FMIceLinkWebRTCAudioStream*)stream format:(FMIceLinkStreamFormat*)format registration:(FMIceLinkWebRTCAudioRegistration*)registration;
- (FMIceLinkLink*) link;
- (FMIceLinkWebRTCAudioRegistration*) registration;
+ (FMIceLinkWebRTCRemoteAudioRenderProvider*) remoteAudioRenderProviderWithConference:(FMIceLinkConference*)conference link:(FMIceLinkLink*)link stream:(FMIceLinkWebRTCAudioStream*)stream format:(FMIceLinkStreamFormat*)format registration:(FMIceLinkWebRTCAudioRegistration*)registration;
- (void) renderWithFrame:(FMIceLinkWebRTCAudioBuffer*)frame;
- (void) setBypassEncode:(bool)value;
- (void) setDelayPacketMaximum:(int)value;
- (void) setDelayPacketProbability:(int)value;
- (void) setDropPacketProbability:(int)value;
- (FMIceLinkWebRTCAudioStream*) stream;

@end


@class FMIceLinkWebRTCLocalMediaStream;
@class FMIceLinkWebRTCMediaStream;
@class NSStringFMExtensions;

/// <summary>
/// Arguments for audio render initialization.
/// </summary>
#pragma clang diagnostic ignored "-Wshorten-64-to-32"
#pragma clang diagnostic ignored "-Wint-to-pointer-cast"

@interface FMIceLinkWebRTCAudioRenderInitializeArgs : FMSerializable 

+ (FMIceLinkWebRTCAudioRenderInitializeArgs*) audioRenderInitializeArgs;
/// <summary>
/// Gets the number of channels.
/// </summary>
- (int) channels;
/// <summary>
/// Gets the clock rate.
/// </summary>
- (int) clockRate;
/// <summary>
/// Deserializes an instance from JSON.
/// </summary>
/// <returns></returns>
+ (FMIceLinkWebRTCAudioRenderInitializeArgs*) fromJsonWithInitializeArgsJson:(NSString*)initializeArgsJson;
- (id) init;
/// <summary>
/// Gets the local media stream.
/// </summary>
- (FMIceLinkWebRTCLocalMediaStream*) localStream;
/// <summary>
/// Gets the remote media stream.
/// </summary>
- (FMIceLinkWebRTCMediaStream*) remoteStream;
/// <summary>
/// Sets the number of channels.
/// </summary>
- (void) setChannels:(int)value;
/// <summary>
/// Sets the clock rate.
/// </summary>
- (void) setClockRate:(int)value;
/// <summary>
/// Sets the local media stream.
/// </summary>
- (void) setLocalStream:(FMIceLinkWebRTCLocalMediaStream*)value;
/// <summary>
/// Sets the remote media stream.
/// </summary>
- (void) setRemoteStream:(FMIceLinkWebRTCMediaStream*)value;
/// <summary>
/// Serializes this instance to JSON.
/// </summary>
/// <returns></returns>
- (NSString*) toJson;
/// <summary>
/// Serializes an instance to JSON.
/// </summary>
/// <returns></returns>
+ (NSString*) toJsonWithAudioRenderInitializeArgs:(FMIceLinkWebRTCAudioRenderInitializeArgs*)audioRenderInitializeArgs;

@end


@class FMIceLinkWebRTCLocalMediaStream;
@class FMIceLinkWebRTCMediaStream;
@class NSStringFMExtensions;

/// <summary>
/// Arguments for video render initialization.
/// </summary>
#pragma clang diagnostic ignored "-Wshorten-64-to-32"
#pragma clang diagnostic ignored "-Wint-to-pointer-cast"

@interface FMIceLinkWebRTCVideoRenderInitializeArgs : FMSerializable 

/// <summary>
/// Gets the clock rate.
/// </summary>
- (int) clockRate;
/// <summary>
/// Deserializes an instance from JSON.
/// </summary>
/// <returns></returns>
+ (FMIceLinkWebRTCVideoRenderInitializeArgs*) fromJsonWithInitializeArgsJson:(NSString*)initializeArgsJson;
- (id) init;
/// <summary>
/// Gets the local media stream.
/// </summary>
- (FMIceLinkWebRTCLocalMediaStream*) localStream;
/// <summary>
/// Gets the remote media stream.
/// </summary>
- (FMIceLinkWebRTCMediaStream*) remoteStream;
/// <summary>
/// Sets the clock rate.
/// </summary>
- (void) setClockRate:(int)value;
/// <summary>
/// Sets the local media stream.
/// </summary>
- (void) setLocalStream:(FMIceLinkWebRTCLocalMediaStream*)value;
/// <summary>
/// Sets the remote media stream.
/// </summary>
- (void) setRemoteStream:(FMIceLinkWebRTCMediaStream*)value;
/// <summary>
/// Serializes this instance to JSON.
/// </summary>
/// <returns></returns>
- (NSString*) toJson;
/// <summary>
/// Serializes an instance to JSON.
/// </summary>
/// <returns></returns>
+ (NSString*) toJsonWithVideoRenderInitializeArgs:(FMIceLinkWebRTCVideoRenderInitializeArgs*)videoRenderInitializeArgs;
+ (FMIceLinkWebRTCVideoRenderInitializeArgs*) videoRenderInitializeArgs;

@end


@class FMIceLinkWebRTCAudioRenderProvider;

/// <summary>
/// Arguments for the AudioRenderProvider OnMuted event.
/// </summary>
#pragma clang diagnostic ignored "-Wshorten-64-to-32"
#pragma clang diagnostic ignored "-Wint-to-pointer-cast"

@interface FMIceLinkWebRTCAudioRenderMutedArgs : NSObject 

+ (FMIceLinkWebRTCAudioRenderMutedArgs*) audioRenderMutedArgs;
- (id) init;
/// <summary>
/// Gets the render provider.
/// </summary>
- (FMIceLinkWebRTCAudioRenderProvider*) renderProvider;
/// <summary>
/// Sets the render provider.
/// </summary>
- (void) setRenderProvider:(FMIceLinkWebRTCAudioRenderProvider*)value;

@end


@class FMIceLinkWebRTCAudioRenderProvider;

/// <summary>
/// Arguments for the AudioRenderProvider OnUnmuted event.
/// </summary>
#pragma clang diagnostic ignored "-Wshorten-64-to-32"
#pragma clang diagnostic ignored "-Wint-to-pointer-cast"

@interface FMIceLinkWebRTCAudioRenderUnmutedArgs : NSObject 

+ (FMIceLinkWebRTCAudioRenderUnmutedArgs*) audioRenderUnmutedArgs;
- (id) init;
/// <summary>
/// Gets the render provider.
/// </summary>
- (FMIceLinkWebRTCAudioRenderProvider*) renderProvider;
/// <summary>
/// Sets the render provider.
/// </summary>
- (void) setRenderProvider:(FMIceLinkWebRTCAudioRenderProvider*)value;

@end


@class FMIceLinkWebRTCVideoRenderProvider;

/// <summary>
/// Arguments for the VideoRenderProvider OnMuted event.
/// </summary>
#pragma clang diagnostic ignored "-Wshorten-64-to-32"
#pragma clang diagnostic ignored "-Wint-to-pointer-cast"

@interface FMIceLinkWebRTCVideoRenderMutedArgs : NSObject 

- (id) init;
/// <summary>
/// Gets the render provider.
/// </summary>
- (FMIceLinkWebRTCVideoRenderProvider*) renderProvider;
/// <summary>
/// Sets the render provider.
/// </summary>
- (void) setRenderProvider:(FMIceLinkWebRTCVideoRenderProvider*)value;
+ (FMIceLinkWebRTCVideoRenderMutedArgs*) videoRenderMutedArgs;

@end


@class FMIceLinkWebRTCVideoRenderProvider;

/// <summary>
/// Arguments for the VideoRenderProvider OnUnmuted event.
/// </summary>
#pragma clang diagnostic ignored "-Wshorten-64-to-32"
#pragma clang diagnostic ignored "-Wint-to-pointer-cast"

@interface FMIceLinkWebRTCVideoRenderUnmutedArgs : NSObject 

- (id) init;
/// <summary>
/// Gets the render provider.
/// </summary>
- (FMIceLinkWebRTCVideoRenderProvider*) renderProvider;
/// <summary>
/// Sets the render provider.
/// </summary>
- (void) setRenderProvider:(FMIceLinkWebRTCVideoRenderProvider*)value;
+ (FMIceLinkWebRTCVideoRenderUnmutedArgs*) videoRenderUnmutedArgs;

@end


@class NSMutableArrayFMExtensions;
@class FMIceLinkWebRTCAudioCaptureProvider;
@class FMIceLinkWebRTCGetMediaArgs;
@class FMIceLinkWebRTCVideoCaptureProvider;

/// <summary>
/// Provides static access to local media devices.
/// </summary>
#pragma clang diagnostic ignored "-Wshorten-64-to-32"
#pragma clang diagnostic ignored "-Wint-to-pointer-cast"

@interface FMIceLinkWebRTCUserMedia : NSObject 

/// <summary>
/// Gets a list of connected audio device names using the
/// default audio capture provider.
/// </summary>
/// <returns></returns>
+ (NSMutableArray*) getAudioDeviceNames;
/// <summary>
/// Gets a list of connected audio device names.
/// </summary>
/// <param name="audioCaptureProvider">The audio capture provider.</param>
/// <returns></returns>
+ (NSMutableArray*) getAudioDeviceNamesWithAudioCaptureProvider:(FMIceLinkWebRTCAudioCaptureProvider*)audioCaptureProvider;
/// <summary>
/// Gets a local media stream using the specified arguments.
/// If audio and/or video are requested, the corresponding
/// audio/video capture providers will be initialized. If
/// no audio/video capture providers are defined, default
/// providers will be initialized which use the device
/// microphone/camera as the media source. If no default
/// providers exist for the platform, an error will be
/// thrown during initialization.
/// </summary>
/// <param name="getMediaArgs">The arguments.</param>
+ (void) getMediaWithGetMediaArgs:(FMIceLinkWebRTCGetMediaArgs*)getMediaArgs;
/// <summary>
/// Gets a local media stream using the specified arguments.
/// If audio and/or video are requested, the corresponding
/// audio/video capture providers will be initialized. If
/// no audio/video capture providers are defined, default
/// providers will be initialized which use the device
/// microphone/camera as the media source. If no default
/// providers exist for the platform, an error will be
/// thrown during initialization.
/// </summary>
/// <param name="getMediaArgs">The arguments.</param>
+ (void) getMediaWithArgs:(FMIceLinkWebRTCGetMediaArgs*)getMediaArgs;
/// <summary>
/// Gets a list of connected video device names using the
/// default video capture provider.
/// </summary>
/// <returns></returns>
+ (NSMutableArray*) getVideoDeviceNames;
/// <summary>
/// Gets a list of connected video device names.
/// </summary>
/// <param name="videoCaptureProvider">The video capture provider.</param>
/// <returns></returns>
+ (NSMutableArray*) getVideoDeviceNamesWithVideoCaptureProvider:(FMIceLinkWebRTCVideoCaptureProvider*)videoCaptureProvider;
- (id) init;
+ (FMIceLinkWebRTCUserMedia*) userMedia;

@end


@class NSMutableArrayFMExtensions;
@class NSMutableDataFMExtensions;

/// <summary>
/// An H264 Network Abstraction Layer Unit.
/// </summary>
#pragma clang diagnostic ignored "-Wshorten-64-to-32"
#pragma clang diagnostic ignored "-Wint-to-pointer-cast"

@interface FMIceLinkWebRTCH264Nalu : NSObject 

/// <summary>
/// Gets the bottom_field_flag.
/// </summary>
- (int) bottomFieldFlag;
/// <summary>
/// Gets the pic_order_cnt_lsb
/// </summary>
- (NSMutableArray*) deltaPicOrderCnt;
/// <summary>
/// Gets the forbidden Zero Bit. The H.264 specification declares a
/// value of 1 as a syntax violation.
/// </summary>
- (bool) fBit;
/// <summary>
/// Gets the forbidden zero bit mask.
/// </summary>
+ (uint8_t) fBitMask;
/// <summary>
/// Gets the field_pic_flag.
/// </summary>
- (int) fieldPicFlag;
/// <summary>
/// Scans for the index of the first NAL Unit after start.
/// </summary>
/// <param name="encodedData">The stream to search.</param>
/// <param name="start">The index to start searching from.</param>
/// <returns></returns>
+ (int) findNaluWithEncodedData:(NSMutableData*)encodedData start:(int)start;
/// <summary>
/// Gets the first_mb_in_slice specifies the address of the first macroblock in the slice. When
/// arbitrary slice order is not allowed as specified in Annex A, the value of first_mb_in_slice
/// is constrained as follows:
/// – If separate_colour_plane_flag is equal to 0, the value of first_mb_in_slice shall not
/// be less than the value of first_mb_in_slice for any other slice of the current picture
/// that precedes the current slice in decoding order.
/// – Otherwise (separate_colour_plane_flag is equal to 1), the value of first_mb_in_slice
/// shall not be less than the value of first_mb_in_slice for any other slice of the current
/// picture that precedes the current slice in decoding order and has the same value of
/// colour_plane_id.
/// </summary>
- (int) firstMbInSlice;
/// <summary>
/// Gets the frame_num: The Frame Number is used as an identifier for pictures and shall be represented
/// by log2_max_frame_num_minus4 + 4 bits in the bitstream.
/// </summary>
- (int) frameNum;
/// <summary>
/// Gets the NAL Unit as a byte array that can be passed
/// to an encoder (includes Start Code).
/// </summary>
/// <returns></returns>
- (NSMutableData*) getBytes;
/// <summary>
/// Gets the NAL Unit as a byte array that can be passed
/// to an encoder (includes Start Code).
/// </summary>
/// <param name="nalu">The NAL Unit.</param>
/// <returns></returns>
- (NSMutableData*) getBytesWithNalu:(FMIceLinkWebRTCH264Nalu*)nalu;
/// <summary>
/// Returns the first NAL unit after nalStart.
/// </summary>
/// <param name="encodedData">The byte array to search.</param>
/// <param name="nalStart">The start index of the NAL.</param>
/// <returns></returns>
+ (FMIceLinkWebRTCH264Nalu*) getNaluWithEncodedData:(NSMutableData*)encodedData nalStart:(int)nalStart;
/// <summary>
/// Creates an empty NAL Unit.
/// </summary>
+ (FMIceLinkWebRTCH264Nalu*) h264Nalu;
/// <summary>
/// Creates a NAL Unit from a byte array.
/// </summary>
/// <param name="naluBytes">The NALU bytes.</param>
+ (FMIceLinkWebRTCH264Nalu*) h264NaluWithNaluBytes:(NSMutableData*)naluBytes;
/// <summary>
/// Creates a NAL Unit from a byte array.
/// </summary>
/// <param name="naluBytes">The NALU bytes.</param>
+ (FMIceLinkWebRTCH264Nalu*) h264NaluWithBytes:(NSMutableData*)naluBytes;
/// <summary>
/// Creates a NAL Unit from a byte stream that does not contain a NAL header.
/// </summary>
/// <param name="payload">The NAL Unit's payload.</param>
/// <param name="fbit">The Forbidden Zero Bit.</param>
/// <param name="nri">The nal_ref_idc.</param>
/// <param name="type">The NAL Unit Type.</param>
+ (FMIceLinkWebRTCH264Nalu*) h264NaluWithPayload:(NSMutableData*)payload fbit:(bool)fbit nri:(int)nri type:(int)type;
/// <summary>
/// Gets the NAL header.
/// </summary>
- (uint8_t) header;
/// <summary>
/// Gets the idr_pic_flag.
/// </summary>
- (int) idrPicFlag;
/// <summary>
/// Gets the idr_pic_id: The values of idr_pic_id in all the slices
/// of an IDR picture shall remain unchanged. When two consecutive access units in
/// decoding order are both IDR access units, the value of idr_pic_id in the slices of
/// the first such IDR access unit shall differ from the idr_pic_id in the second such
/// IDR access unit. The value of idr_pic_id shall be in the range of 0 to 65535, inclusive.
/// </summary>
- (int) idrPicId;
/// <summary>
/// Creates an empty NAL Unit.
/// </summary>
- (id) init;
/// <summary>
/// Creates a NAL Unit from a byte array.
/// </summary>
/// <param name="naluBytes">The NALU bytes.</param>
- (id) initWithNaluBytes:(NSMutableData*)naluBytes;
/// <summary>
/// Creates a NAL Unit from a byte stream that does not contain a NAL header.
/// </summary>
/// <param name="payload">The NAL Unit's payload.</param>
/// <param name="fbit">The Forbidden Zero Bit.</param>
/// <param name="nri">The nal_ref_idc.</param>
/// <param name="type">The NAL Unit Type.</param>
- (id) initWithPayload:(NSMutableData*)payload fbit:(bool)fbit nri:(int)nri type:(int)type;
/// <summary>
/// Gets the NRI: 2bits otherwise known as nal_ref_idc.
/// </summary>
- (int) nalRefIdc;
/// <summary>
/// Gets the nal_ref_idc mask.
/// </summary>
+ (uint8_t) nriMask;
/// <summary>
/// Gets the NAL payload.
/// </summary>
- (NSMutableData*) payload;
/// <summary>
/// Gets the pic_order_cnt_lsb.
/// </summary>
- (int) picOrderCntLsb;
/// <summary>
/// Gets the pic_order_cnt_type.
/// </summary>
- (int) picOrderCntType;
/// <summary>
/// Gets the Picture Parameter Set specifies the picture parameter set in use. The
/// value of pic_parameter_set_id shall be in the range of 0 to 255, inclusive.
/// </summary>
- (int) ppsId;
/// <summary>
/// Sets the NAL payload.
/// </summary>
- (void) setPayload:(NSMutableData*)value;
/// <summary>
/// Gets the size of the NAL Unit (including NAL header) in two octets stored in
/// the returned byte array. Useful for creating certain types of H264 such as STAP.
/// </summary>
/// <returns></returns>
- (NSMutableData*) shortLength;
/// <summary>
/// Gets the type of Slice contained in this NAL.
/// </summary>
- (int) sliceType;
/// <summary>
/// Gets the Sequence Parameter Set this NAL references.
/// </summary>
- (int) spsId;
/// <summary>
/// Gets a 4 byte Nalu start code.
/// </summary>
+ (NSMutableData*) startCode;
/// <summary>
/// Gets the NAL Unit Type.
/// </summary>
- (int) type;
/// <summary>
/// Gets the NAL Unit Type mask.
/// </summary>
+ (uint8_t) typeMask;

@end




@interface FMIceLinkWebRTCVideoBuffer (Extensions)

- (CGImageRef)newCGImage;
+ (CGImageRef)newCGImageFromBuffer:(FMIceLinkWebRTCVideoBuffer *)buffer;
+ (FMIceLinkWebRTCVideoBuffer *)newBufferFromCGImage:(CGImageRef)cgImage yuv:(bool)yuv;

- (void)convertToYUV:(FMIceLinkWebRTCVideoBuffer *)buffer;
- (void)convertToBGRA:(FMIceLinkWebRTCVideoBuffer *)buffer;

+ (void)interleaveSourceA:(const uint8_t *)srcA sourceB:(const uint8_t *)srcB destinationAB:(uint8_t *)dstAB destinationLength:(size_t)dstABLength;
+ (void)deinterleaveSourceAB:(const uint8_t*)srcAB destinationA:(uint8_t *)dstA destinationB:(uint8_t *)dstB sourceLength:(size_t)srcABLength;

@end



@interface FMIceLinkWebRTCPcmuCodec : FMIceLinkWebRTCAudioCodec

- (id)init;

@end



@interface FMIceLinkWebRTCPcmaCodec : FMIceLinkWebRTCAudioCodec

- (id)init;

@end



@interface FMIceLinkWebRTCJpegCodec : FMIceLinkWebRTCVideoCodec

@end




@interface FMIceLinkWebRTCAudioUnitCaptureProvider : FMIceLinkWebRTCAudioCaptureProvider

+ (bool)useVoiceProcessingIO;
+ (void)setUseVoiceProcessingIO:(bool)useVoiceProcessingIO;
+ (bool)bypassVoiceProcessing;
+ (void)setBypassVoiceProcessing:(bool)bypassVoiceProcessing;
+ (bool)voiceProcessingEnableAGC;
+ (void)setVoiceProcessingEnableAGC:(bool)voiceProcessingEnableAGC;

#if TARGET_OS_IPHONE

+ (bool)observeInterruptions;
+ (void)setObserveInterruptions:(bool)observeInterruptions;

#endif

+ (double)defaultGain;
+ (void)setDefaultGain:(double)defaultGain;

- (double)gain;
- (void)setGain:(double)gain;

@end




@interface FMIceLinkWebRTCAudioUnitRenderProvider : FMIceLinkWebRTCAudioRenderProvider

+ (bool)useVoiceProcessingIO;
+ (void)setUseVoiceProcessingIO:(bool)useVoiceProcessingIO;

+ (double)defaultGain;
+ (void)setDefaultGain:(double)defaultGain;

- (double)gain;
- (void)setGain:(double)gain;

@end


#if !TARGET_OS_TV



#if TARGET_OS_IPHONE
@interface FMIceLinkWebRTCGetMediaArgs (FMIceLinkWebRTCAVCaptureProviderExtensions)

- (void)setVideoPreset:(NSString *)videoPreset;

@end
#endif

@interface FMIceLinkWebRTCAVCaptureProvider : FMIceLinkWebRTCVideoCaptureProvider

- (id)init;
#if TARGET_OS_IPHONE
- (id)initWithPreviewScale:(FMIceLinkWebRTCLayoutScale)previewScale;
#else
- (id)initWithPreview:(FMIceLinkWebRTCImageViewVideoRenderProvider *)preview;
#endif
- (bool)mirrorPreview;
- (void)setMirrorPreview:(bool)mirrorPreview;

- (AVCaptureSession *)session;
- (AVCaptureDevice *)device;

+ (int)deviceNumberForCaptureDevice:(AVCaptureDevice *)captureDevice;

@end

#endif




@interface FMIceLinkWebRTCScreenCaptureProvider : FMIceLinkWebRTCVideoCaptureProvider

- (id)init;
- (id)initWithPreview:(FMIceLinkWebRTCImageViewVideoRenderProvider *)preview;
#if TARGET_OS_IPHONE
- (id)initWithView:(UIView *)view;
- (id)initWithView:(UIView *)view preview:(FMIceLinkWebRTCImageViewVideoRenderProvider *)preview;
#endif

@end


#if TARGET_OS_IPHONE




@interface FMIceLinkWebRTCOpenGLVideoRenderProvider : FMIceLinkWebRTCVideoRenderProvider

- (id)init;
- (id)initWithScale:(FMIceLinkWebRTCLayoutScale)scale;

@end

#endif


#if TARGET_OS_IPHONE
#else
#endif



@interface FMIceLinkWebRTCImageViewVideoRenderProvider : FMIceLinkWebRTCVideoRenderProvider

- (id)init;
- (id)initWithScale:(FMIceLinkWebRTCLayoutScale)scale;
- (id)initWithImageView:(FM_IMAGE_VIEW *)imageView;
- (id)initWithImageView:(FM_IMAGE_VIEW *)imageView scale:(FMIceLinkWebRTCLayoutScale)scale;
- (id)initWithDisableContextMenu:(bool)disableContextMenu;
- (id)initWithDisableContextMenu:(bool)disableContextMenu scale:(FMIceLinkWebRTCLayoutScale)scale;
- (id)initWithImageView:(FM_IMAGE_VIEW *)imageView disableContextMenu:(bool)disableContextMenu;
- (id)initWithImageView:(FM_IMAGE_VIEW *)imageView disableContextMenu:(bool)disableContextMenu scale:(FMIceLinkWebRTCLayoutScale)scale;
- (void)renderWithImage:(FM_IMAGE *)image;

@end



@interface FMIceLinkWebRTCDefaultProviders : NSObject

+ (bool)isMobile;
+ (void)forceMobile;
+ (void)forceDesktop;
+ (FMIceLinkWebRTCAudioCaptureProvider *)getAudioCaptureProvider;
+ (FMIceLinkWebRTCVideoCaptureProvider *)getVideoCaptureProviderWithPreviewScale:(FMIceLinkWebRTCLayoutScale)previewScale;
+ (FMCallback *)getCreateAudioRenderProvider;
+ (FMCallback *)getCreateVideoRenderProviderWithScale:(FMIceLinkWebRTCLayoutScale)scale;

@end


#if TARGET_OS_IPHONE
#else
#endif


/// <summary>
/// A layout manager for iOS/Mac.
/// </summary>
@interface FMIceLinkWebRTCLayoutManager : FMIceLinkWebRTCBaseLayoutManager

/// <summary>
/// Gets the layout container.
/// </summary>
#if TARGET_OS_IPHONE
- (UIView *)container;
#else
- (NSView *)container;
#endif

/// <summary>
/// Initializes a new instance of the <see cref="LayoutManager"/> class.
/// </summary>
/// <param name="container">The layout container.</param>
#if TARGET_OS_IPHONE
+ (FMIceLinkWebRTCLayoutManager *)layoutManagerWithContainer:(UIView *)container;
#else
+ (FMIceLinkWebRTCLayoutManager *)layoutManagerWithContainer:(NSView *)container;
#endif

/// <summary>
/// Initializes a new instance of the <see cref="LayoutManager"/> class.
/// </summary>
/// <param name="container">The layout container.</param>
/// <param name="preset">The layout preset.</param>
#if TARGET_OS_IPHONE
+ (FMIceLinkWebRTCLayoutManager *)layoutManagerWithContainer:(UIView *)container preset:(FMIceLinkWebRTCLayoutPreset *)preset;
#else
+ (FMIceLinkWebRTCLayoutManager *)layoutManagerWithContainer:(NSView *)container preset:(FMIceLinkWebRTCLayoutPreset *)preset;
#endif

/// <summary>
/// Initializes a new instance of the <see cref="LayoutManager"/> class.
/// </summary>
/// <param name="container">The layout container.</param>
#if TARGET_OS_IPHONE
- (id)initWithContainer:(UIView *)container;
#else
- (id)initWithContainer:(NSView *)container;
#endif

/// <summary>
/// Initializes a new instance of the <see cref="LayoutManager"/> class.
/// </summary>
/// <param name="container">The layout container.</param>
/// <param name="preset">The layout preset.</param>
#if TARGET_OS_IPHONE
- (id)initWithContainer:(UIView *)container preset:(FMIceLinkWebRTCLayoutPreset *)preset;
#else
- (id)initWithContainer:(NSView *)container preset:(FMIceLinkWebRTCLayoutPreset *)preset;
#endif

@end

//
//  FMIceLinkWebRTCContextMenu.h
//  Mac.Conference.WebRTC
//
//  Created by Anton Venema on 2014-05-07.
//  Copyright (c) 2014 Frozen Mountain Software. All rights reserved.
//


#if !TARGET_OS_IPHONE



@interface FMIceLinkWebRTCContextMenu : FMIceLinkWebRTCBaseContextMenu

- (void)attachWithControl:(NSView *)control mediaStream:(FMIceLinkWebRTCMediaStream *)mediaStream;
- (void)detach;

@end

#endif

