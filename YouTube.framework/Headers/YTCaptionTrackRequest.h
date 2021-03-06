/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: /System/Library/PrivateFrameworks/YouTube.framework/YouTube
 */

#import <YouTube/YouTube-Structs.h>
#import <YouTube/XMLSAXHTTPRequest.h>

@class NSMutableURLRequest, YTCaptionTrack;
@protocol YTCaptionTrackRequestDelegate;

@interface YTCaptionTrackRequest : XMLSAXHTTPRequest {
	id<YTCaptionTrackRequestDelegate> _delegate;	// 148 = 0x94
	YTCaptionTrack *_captionTrack;	// 152 = 0x98
	NSMutableURLRequest *_deferredRequest;	// 156 = 0x9c
	BOOL _isLoading;	// 160 = 0xa0
}
@property(readonly, retain) YTCaptionTrack *captionTrack;	// G=0x17345; converted property
- (id)initCaptionTrackDataRequest:(id)request withDelegate:(id)delegate;	// 0x17355
- (void)dealloc;	// 0x17ead
// converted property getter: - (id)captionTrack;	// 0x17345
- (void)_listenForAuthenticationNotifications:(BOOL)authenticationNotifications;	// 0x17dd1
- (void)loadRequest:(id)request;	// 0x17cd5
- (void)_requestCaptionTrackDataWithURL:(id)url;	// 0x17c3d
- (int)parseData:(id)data;	// 0x17599
- (void)_didAuthenticate:(id)authenticate;	// 0x174fd
- (void)_failedToAuthenticate:(id)authenticate;	// 0x17479
- (void)failWithError:(id)error;	// 0x173f5
@end
