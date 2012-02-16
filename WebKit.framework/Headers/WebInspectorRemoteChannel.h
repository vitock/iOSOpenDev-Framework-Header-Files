/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: /System/Library/PrivateFrameworks/WebKit.framework/WebKit
 */

#import <WebKit/WebKit-Structs.h>
#import <WebKit/XXUnknownSuperclass.h>

@class WebInspectorServerConnection;

__attribute__((visibility("hidden")))
@interface WebInspectorRemoteChannel : XXUnknownSuperclass {
@private
	WebInspectorServerConnection *_remote;	// 4 = 0x4
	WebInspectorClient *_local;	// 8 = 0x8
}
+ (id)createChannelForPageId:(unsigned)pageId connection:(id)connection;	// 0x8c859
- (id)initWithRemote:(id)remote local:(WebInspectorClient *)local;	// 0x8c805
- (void)closeFromLocalSide;	// 0x8ca1d
- (void)closeFromRemoteSide;	// 0x8ca09
- (void)sendMessageToFrontend:(id)frontend;	// 0x8c9e5
- (void)sendMessageToBackend:(id)backend;	// 0x8c8f1
@end
