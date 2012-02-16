/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

#import <PhotoLibraryServices/PhotoLibraryServices-Structs.h>
#import <PhotoLibraryServices/XXUnknownSuperclass.h>
#import <PhotoLibraryServices/PLMappedImageData.h>

@class PLImageTableSegment, NSString;

@interface PLMappedImageData : XXUnknownSuperclass {
@private
	PLImageTableSegment *_segment;	// 4 = 0x4
	void *_bytes;	// 8 = 0x8
	unsigned long _length;	// 12 = 0xc
}
@property(assign, nonatomic) BOOL isPlaceholder;	// G=0x60251; S=0x60271; 
@property(copy, nonatomic) NSString *photoUUID;	// G=0x601c5; S=0x60231; 
@property(assign, nonatomic) unsigned imageHeight;	// G=0x60191; S=0x601a9; 
@property(assign, nonatomic) unsigned imageWidth;	// G=0x6015d; S=0x60175; 
- (void)dealloc;	// 0x6028d
// declared property setter: - (void)setIsPlaceholder:(BOOL)placeholder;	// 0x60271
// declared property getter: - (BOOL)isPlaceholder;	// 0x60251
// declared property setter: - (void)setPhotoUUID:(id)uuid;	// 0x60231
// declared property getter: - (id)photoUUID;	// 0x601c5
// declared property setter: - (void)setImageHeight:(unsigned)height;	// 0x601a9
// declared property getter: - (unsigned)imageHeight;	// 0x60191
// declared property setter: - (void)setImageWidth:(unsigned)width;	// 0x60175
// declared property getter: - (unsigned)imageWidth;	// 0x6015d
- (int)lengthIncludingFooter;	// 0x6014d
- (unsigned)length;	// 0x60139
- (void *)mutableBytes;	// 0x60129
- (const void *)bytes;	// 0x60119
- (PLImageTableEntryFooter_s *)_footer;	// 0x600f1
- (id)initWithImageTableSegment:(id)imageTableSegment bytes:(void *)bytes length:(unsigned long)length;	// 0x60049
@end

@interface PLMappedImageData (madvise)
- (void)adviceDoNotNeed;	// 0x60329
- (void)adviceWillNeed;	// 0x602d9
@end
