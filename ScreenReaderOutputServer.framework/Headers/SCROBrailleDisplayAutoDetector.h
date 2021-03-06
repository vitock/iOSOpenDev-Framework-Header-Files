/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: /System/Library/PrivateFrameworks/ScreenReaderOutputServer.framework/ScreenReaderOutputServer
 */

#import <ScreenReaderOutputServer/ScreenReaderOutputServer-Structs.h>
#import <ScreenReaderOutputServer/XXUnknownSuperclass.h>

@class NSMutableDictionary;

// iOSOpenDev: wrapped with define check (since occurs in other dumped files)
#ifndef __SCROBrailleDisplayAutoDetector__
#define __SCROBrailleDisplayAutoDetector__ 1
@interface SCROBrailleDisplayAutoDetector : XXUnknownSuperclass {
	BOOL _isDetectingDisplays;	// 4 = 0x4
	IONotificationPortRef _notificationPort;	// 8 = 0x8
	NSMutableDictionary *_iteratorDict;	// 12 = 0xc
}
+ (id)sharedDetector;	// 0x1e91
+ (void)initialize;	// 0x1db9
+ (id)allocWithZone:(NSZone *)zone;	// 0x1e15
- (id)init;	// 0x1e55
- (id)copyWithZone:(NSZone *)zone;	// 0xbc05
- (id)retain;	// 0x2f59
- (unsigned)retainCount;	// 0xbc09
- (void)release;	// 0x2f5d
- (id)autorelease;	// 0xbc11
- (BOOL)isAutoDetectEnabled;	// 0xbc15
- (void)detectDisplays;	// 0x1ea1
- (void)stopDetectingDisplays;	// 0xbc25
@end
#endif
