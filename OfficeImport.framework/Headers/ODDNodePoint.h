/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <OfficeImport/ODDDataPoint.h>

@class NSMutableArray, ODDTransitionPoint;

__attribute__((visibility("hidden")))
@interface ODDNodePoint : ODDDataPoint {
@private
	ODDNodePoint *mParent;	// 24 = 0x18
	NSMutableArray *mChildren;	// 28 = 0x1c
	ODDTransitionPoint *mParentTransition;	// 32 = 0x20
	ODDTransitionPoint *mSiblingTransition;	// 36 = 0x24
}
@property(retain) id parentTransition;	// G=0x20645d; S=0x1ca0f5; converted property
@property(retain) id siblingTransition;	// G=0x1f0819; S=0x1ca1d1; converted property
- (void)dealloc;	// 0x1d0499
- (void)setType:(int)type;	// 0x1c9069
- (id)parent;	// 0x1f6275
- (id)children;	// 0x1ca9f9
- (void)addChild:(id)child order:(unsigned long)order;	// 0x1c9ef9
// converted property getter: - (id)parentTransition;	// 0x20645d
// converted property setter: - (void)setParentTransition:(id)transition;	// 0x1ca0f5
// converted property getter: - (id)siblingTransition;	// 0x1f0819
// converted property setter: - (void)setSiblingTransition:(id)transition;	// 0x1ca1d1
@end
