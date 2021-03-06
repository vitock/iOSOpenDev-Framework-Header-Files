/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: /System/Library/PrivateFrameworks/CorePDF.framework/CorePDF
 */

#import <CorePDF/CorePDF-Structs.h>
#import <CorePDF/CPRegion.h>


@interface CPTextBox : CPRegion {
	float rotationAngle;	// 68 = 0x44
}
@property(assign) float rotationAngle;	// G=0xbae9; S=0xbcad; converted property
- (id)init;	// 0xbb51
- (id)copyWithZone:(NSZone *)zone;	// 0xbce9
- (BOOL)isBoxRegion;	// 0xbae5
- (void)accept:(id)accept;	// 0xbcd1
// converted property setter: - (void)setRotationAngle:(float)angle;	// 0xbcad
// converted property getter: - (float)rotationAngle;	// 0xbae9
- (BOOL)isRotated;	// 0xbaf9
- (CGRect)bounds;	// 0xbbd1
- (id)description;	// 0xbb7d
@end
