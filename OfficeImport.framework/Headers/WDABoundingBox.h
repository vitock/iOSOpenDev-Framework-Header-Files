/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <OfficeImport/OfficeImport-Structs.h>
#import <OfficeImport/XXUnknownSuperclass.h>


__attribute__((visibility("hidden")))
@interface WDABoundingBox : XXUnknownSuperclass {
@private
	CGRect mRect;	// 4 = 0x4
	float mRotation;	// 20 = 0x14
	BOOL mFlipX;	// 24 = 0x18
	BOOL mFlipY;	// 25 = 0x19
}
@property(assign) CGRect rect;	// G=0x2867a5; S=0x2867c9; converted property
@property(assign) float rotation;	// G=0x2867ed; S=0x2867fd; converted property
@property(assign) BOOL flipX;	// G=0x28680d; S=0x28681d; converted property
@property(assign) BOOL flipY;	// G=0x28682d; S=0x28683d; converted property
- (id)initWithRect:(CGRect)rect rotation:(float)rotation flipX:(BOOL)x flipY:(BOOL)y;	// 0x28684d
// converted property getter: - (CGRect)rect;	// 0x2867a5
// converted property setter: - (void)setRect:(CGRect)rect;	// 0x2867c9
// converted property getter: - (float)rotation;	// 0x2867ed
// converted property setter: - (void)setRotation:(float)rotation;	// 0x2867fd
// converted property getter: - (BOOL)flipX;	// 0x28680d
// converted property setter: - (void)setFlipX:(BOOL)x;	// 0x28681d
// converted property getter: - (BOOL)flipY;	// 0x28682d
// converted property setter: - (void)setFlipY:(BOOL)y;	// 0x28683d
@end