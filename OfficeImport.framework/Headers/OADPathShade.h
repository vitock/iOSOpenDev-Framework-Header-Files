/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <OfficeImport/OfficeImport-Structs.h>
#import <OfficeImport/OADShade.h>

@class OADRelativeRect;

__attribute__((visibility("hidden")))
@interface OADPathShade : OADShade {
@private
	OADRelativeRect *mFillToRect;	// 12 = 0xc
	BOOL mIsFillToRectOverridden;	// 16 = 0x10
	int mType;	// 20 = 0x14
	BOOL mIsTypeOverridden;	// 24 = 0x18
}
@property(retain) id fillToRect;	// G=0x14c231; S=0x14b271; converted property
@property(assign) int type;	// G=0x2a10f9; S=0x14b251; converted property
+ (id)defaultProperties;	// 0x14b165
- (id)copyWithZone:(NSZone *)zone;	// 0x1e901d
- (void)dealloc;	// 0x14e245
- (id)initWithDefaults;	// 0x14b1ad
// converted property getter: - (id)fillToRect;	// 0x14c231
// converted property setter: - (void)setFillToRect:(id)rect;	// 0x14b271
- (BOOL)isFillToRectOverridden;	// 0x14c261
// converted property getter: - (int)type;	// 0x2a10f9
// converted property setter: - (void)setType:(int)type;	// 0x14b251
- (BOOL)isTypeOverridden;	// 0x2a1129
- (unsigned)hash;	// 0x2a1161
- (BOOL)isEqual:(id)equal;	// 0x2a11bd
@end
