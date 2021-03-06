/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <OfficeImport/ODIHierarchy.h>
#import <OfficeImport/OfficeImport-Structs.h>
#import <OfficeImport/XXUnknownSuperclass.h>

@class ODIState, NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface ODIHierarchy : XXUnknownSuperclass {
@private
	int mType;	// 4 = 0x4
	int mMaxMappableTreeDepth;	// 8 = 0x8
	ODIState *mState;	// 12 = 0xc
	NSMutableDictionary *mNodeInfoMap;	// 16 = 0x10
}
+ (BOOL)mapIdentifier:(id)identifier state:(id)state;	// 0x2b5235
@end

@interface ODIHierarchy (Private)
- (id)initWithType:(int)type state:(id)state;	// 0x2b530d
- (void)dealloc;	// 0x2b53dd
- (id)infoForNode:(id)node;	// 0x2b543d
- (void)createInfoForNode:(id)node depth:(int)depth;	// 0x2b548d
- (ODIHRangeVector *)mapRangesForNode:(id)node;	// 0x2b5831
- (void)mapLogicalBoundsWithXRanges:(const ODIHRangeVector *)xranges;	// 0x2b56f9
- (void)setAbsolutePositionOfNode:(id)node parentRow:(int)row parentXOffset:(float)offset;	// 0x2b55a9
- (CGRect)boundsOfNode:(id)node;	// 0x2b6045
- (void)mapNode:(id)node;	// 0x2b60c1
- (void)map;	// 0x2b576d
@end
