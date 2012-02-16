/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <OfficeImport/ODDFillColorList.h>
#import <OfficeImport/XXUnknownSuperclass.h>

@class NSArray;

__attribute__((visibility("hidden")))
@interface ODDFillColorList : XXUnknownSuperclass {
@private
	NSArray *mColors;	// 4 = 0x4
	int mHueDirection;	// 8 = 0x8
	int mMethod;	// 12 = 0xc
}
- (void)dealloc;	// 0x1d08a9
- (id)colorAtIndex:(unsigned)index count:(unsigned)count state:(id)state;	// 0x1ceb45
- (void)setColors:(id)colors;	// 0x1c8639
- (void)setHueDirection:(int)direction;	// 0x1c8591
- (void)setMethod:(int)method;	// 0x1c8629
@end

@interface ODDFillColorList (Private)
- (id)cycleColorAtIndex:(unsigned)index;	// 0x20663d
- (id)repeatColorAtIndex:(unsigned)index;	// 0x1cebd1
- (id)spanColorAtIndex:(unsigned)index count:(unsigned)count state:(id)state;	// 0x1f1db1
- (void)getComponentsForIndex:(unsigned)index hue:(float *)hue saturation:(float *)saturation brightness:(float *)brightness state:(id)state;	// 0x2af401
@end
