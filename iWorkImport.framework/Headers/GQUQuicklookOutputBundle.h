/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

#import <iWorkImport/XXUnknownSuperclass.h>
#import <iWorkImport/iWorkImport-Structs.h>
#import <iWorkImport/GQUOutputBundle.h>


__attribute__((visibility("hidden")))
@interface GQUQuicklookOutputBundle : XXUnknownSuperclass <GQUOutputBundle> {
@private
	CFDictionaryRef mQuicklookProperties;	// 4 = 0x4
	CFDictionaryRef mAttachments;	// 8 = 0x8
	CFDataRef mMainHtmlData;	// 12 = 0xc
	CFStringRef mUriScheme;	// 16 = 0x10
	CFStringRef mUuidStr;	// 20 = 0x14
}
- (id)init;	// 0x483dd
- (id)initWithUriScheme:(CFStringRef)uriScheme;	// 0x48865
- (void)dealloc;	// 0x487c9
- (CFDataRef)mainHtmlData;	// 0x48369
- (CFDictionaryRef)quicklookDictionary;	// 0x48379
- (BOOL)giveOutputToPreviewRequest:(QLPreviewRequestRef)previewRequest;	// 0x48389
- (CFStringRef)createUriForResource:(CFStringRef)resource;	// 0x48785
- (BOOL)setDataForMainHtmlResource:(CFDataRef)mainHtmlResource;	// 0x48765
- (BOOL)setData:(CFDataRef)data mimeType:(CFStringRef)type forNamedResource:(CFStringRef)namedResource;	// 0x48679
- (void)setDocumentSize:(CGSize)size;	// 0x48605
- (void)setPageElementXPath:(CFStringRef)path withThumbnailsOnLeft:(BOOL)thumbnailsOnLeft;	// 0x483a1
@end
