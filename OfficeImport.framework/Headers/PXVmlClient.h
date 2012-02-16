/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <OfficeImport/OfficeImport-Structs.h>
#import <OfficeImport/PXVmlClient.h>
#import <OfficeImport/OAVClient.h>
#import <OfficeImport/XXUnknownSuperclass.h>


__attribute__((visibility("hidden")))
@interface PXVmlClient : XXUnknownSuperclass <OAVClient> {
}
+ (void)readClientDataFromShape:(xmlNode *)shape toGraphic:(id)graphic state:(id)state;	// 0x1c6949
+ (void)readClientDataFromGroup:(xmlNode *)group toGroup:(id)group2 state:(id)state;	// 0x21bcbd
+ (int)vmlSupportLevel;	// 0x1c67ed
@end

@interface PXVmlClient (Private)
+ (id)colorWithRecolorInfoColorString:(id)recolorInfoColorString;	// 0x21bcc1
@end