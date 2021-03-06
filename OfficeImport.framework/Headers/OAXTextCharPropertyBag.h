/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <OfficeImport/OfficeImport-Structs.h>
#import <OfficeImport/OAXTextCharPropertyBag.h>
#import <OfficeImport/XXUnknownSuperclass.h>


__attribute__((visibility("hidden")))
@interface OAXTextCharPropertyBag : XXUnknownSuperclass {
}
+ (void)readCharacterProperties:(xmlNode *)properties characterProperties:(id)properties2 drawingState:(id)state;	// 0x1abda9
@end

@interface OAXTextCharPropertyBag (Private)
+ (void)readUnderlineType:(id)type underline:(id)underline;	// 0x1c5d2d
+ (void)readUnderlineFill:(xmlNode *)fill underline:(id)underline drawingState:(id)state;	// 0x2a9f85
+ (void)readFormatting:(xmlNode *)formatting characterProperties:(id)properties drawingState:(id)state;	// 0x2aa0b1
+ (void)readFont:(xmlNode *)font characterProperties:(id)properties;	// 0x1ac3f1
@end
