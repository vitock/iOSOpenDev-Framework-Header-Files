/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <OfficeImport/OfficeImport-Structs.h>
#import <OfficeImport/NSCopying.h>
#import <OfficeImport/XXUnknownSuperclass.h>


__attribute__((visibility("hidden")))
@interface PBOutlineBulletKey : XXUnknownSuperclass <NSCopying> {
@private
	unsigned mSlideId;	// 4 = 0x4
	int mTextType;	// 8 = 0x8
	unsigned mPlaceholderIndex;	// 12 = 0xc
}
- (id)initWithOutlineBullet:(id)outlineBullet;	// 0x15b701
- (id)initWithSlideId:(unsigned long)slideId textType:(int)type placeholderIndex:(unsigned long)index;	// 0x15b771
- (id)copyWithZone:(NSZone *)zone;	// 0x15b7d1
- (unsigned)hash;	// 0x15b7e1
- (BOOL)isEqual:(id)equal;	// 0x15b9b1
@end
