/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: /System/Library/PrivateFrameworks/SportsVoices.framework/SportsVoices
 */

#import <SportsVoices/Slot.h>

@class Cell;

@interface SimpleSlot : Slot {
	Cell *_cell;	// 4 = 0x4
}
@property(retain) Cell *cell;	// G=0x6c95; S=0x6ca9; @synthesize=_cell
+ (id)simpleSlotWithCell:(id)cell;	// 0x6bc1
+ (id)empty;	// 0x6a7d
+ (id)instanceFromPlist:(id)plist;	// 0x6a35
+ (id)blank;	// 0x6995
// declared property setter: - (void)setCell:(id)cell;	// 0x6ca9
// declared property getter: - (id)cell;	// 0x6c95
- (id)description;	// 0x6c75
- (BOOL)matches:(id)matches;	// 0x6c29
- (id)attributeForKey:(id)key;	// 0x6c09
- (id)overlayedOn:(id)on;	// 0x6b65
- (id)reversed;	// 0x6b61
- (void)dealloc;	// 0x6b15
- (id)initWithCell:(id)cell;	// 0x6ac1
- (id)initFromPlist:(id)plist;	// 0x69f9
- (id)content;	// 0x69d9
@end
