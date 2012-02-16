/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <OfficeImport/OfficeImport-Structs.h>
#import <OfficeImport/XXUnknownSuperclass.h>
#import <OfficeImport/CHXSeries.h>


__attribute__((visibility("hidden")))
@interface CHXSeries : XXUnknownSuperclass {
}
+ (id)readFrom:(xmlNode *)from state:(id)state;	// 0x1e2691
+ (id)chdSeriesFromXmlSeriesElement:(xmlNode *)xmlSeriesElement state:(id)state;	// 0x2012b1
+ (void)resolveSeriesStyle:(id)style state:(id)state;	// 0x1e5b6d
@end

@interface CHXSeries (Private)
+ (Class)chxSeriesClassWithState:(id)state;	// 0x1e2f09
@end
