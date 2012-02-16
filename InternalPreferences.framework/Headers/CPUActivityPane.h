/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: /System/Library/PrivateFrameworks/InternalPreferences.framework/InternalPreferences
 */

#import <InternalPreferences/InternalPreferences-Structs.h>


@class UITextView, NSThread;

@interface CPUActivityPane : NSObject {
	NSThread *_worker;	// 80 = 0x50
	UITextView *_textView;	// 84 = 0x54
	BOOL _buf1[4096];	// 88 = 0x58
	BOOL _buf2[4096];	// 4184 = 0x1058
	char *_readBuffer;	// 8280 = 0x2058
	char *_writeBuffer;	// 8284 = 0x205c
}
- (id)initWithFrame:(CGRect)frame;	// 0x42f5
- (void)dealloc;	// 0x3e8d
- (void)_cleanupTextView;	// 0x42b9
- (void)_startWorker;	// 0x423d
- (void)_killWorker;	// 0x41f5
- (void)willMoveToSuperview:(id)superview;	// 0x41d9
- (void)setPreferenceSpecifier:(id)specifier;	// 0x4199
- (void)_switchBuffers:(id)buffers;	// 0x40ed
- (void)_worker;	// 0x3ef1
@end
