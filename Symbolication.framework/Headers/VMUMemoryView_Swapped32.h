/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: /System/Library/PrivateFrameworks/Symbolication.framework/Symbolication
 */

#import <Symbolication/Symbolication-Structs.h>
#import <Symbolication/VMUMemoryView_Swapped.h>


@interface VMUMemoryView_Swapped32 : VMUMemoryView_Swapped {
}
+ (id)memoryViewWithAddressRange:(VMURange)addressRange data:(char *)data memory:(id)memory;	// 0x13318
- (BOOL)isCursorPointerAligned;	// 0x132f4
- (void)pointerAlignCursor;	// 0x13388
@end
