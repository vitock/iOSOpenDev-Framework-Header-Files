/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: /System/Library/PrivateFrameworks/ScreenReaderOutputServer.framework/ScreenReaderOutputServer
 */

#import <ScreenReaderOutputServer/ScreenReaderOutputServer-Structs.h>
#import <ScreenReaderOutputServer/XXUnknownSuperclass.h>

@class SCROBrailleEvent, NSLock;

@interface SCROBrailleEventDispatcher : XXUnknownSuperclass {
	NSLock *_queueLock;	// 4 = 0x4
	CFRunLoopRef _runLoop;	// 8 = 0x8
	CFRunLoopSourceRef _queueSource;	// 12 = 0xc
	CFArrayRef _queue;	// 16 = 0x10
	SCROBrailleEvent *_brailleQueue;	// 20 = 0x14
	id _target;	// 24 = 0x18
	BOOL _isValid;	// 28 = 0x1c
}
@property(readonly, assign) BOOL isValid;	// G=0x15889; converted property
- (id)initWithTarget:(id)target;	// 0x15a8d
- (void)dealloc;	// 0x155c1
- (void)start;	// 0x159c1
- (void)invalidate;	// 0x158d5
// converted property getter: - (BOOL)isValid;	// 0x15889
- (void)enqueueEvent:(id)event;	// 0x15769
- (void)_processQueue;	// 0x15649
@end