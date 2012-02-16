/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <OfficeImport/CHBGraphicProperties.h>
#import <OfficeImport/OfficeImport-Structs.h>
#import <OfficeImport/XXUnknownSuperclass.h>


__attribute__((visibility("hidden")))
@interface CHBGraphicProperties : XXUnknownSuperclass {
}
+ (id)oadGraphicPropertiesFromXlChartFrameType:(XlChartFrameType *)xlChartFrameType state:(id)state;	// 0x163745
+ (id)oadGraphicPropertiesFromXlChartSeriesFormat:(const XlChartSeriesFormat *)xlChartSeriesFormat state:(id)state;	// 0x16e571
+ (id)oadGraphicPropertiesFromState:(id)state xlLineStyle:(const XlChartLineStyle *)style xlFillStyle:(const XlChartFillStyle *)style3;	// 0x16b065
+ (id)oadStrokeFrom:(const XlChartLineStyle *)from;	// 0x163c19
+ (id)oadGraphicPropertiesFromXlMarkerStyle:(const XlChartMarkerStyle *)xlMarkerStyle complex:(bool)complex state:(id)state;	// 0x16d225
@end

@interface CHBGraphicProperties (Private)
+ (id)mapPresetDashFromPattern:(int)pattern;	// 0x163e41
+ (id)mapFillStyle:(const XlChartFillStyle *)style xlPictureFormat:(const XlChartPicF *)format state:(id)state;	// 0x163885
+ (id)mapFillStyleForMarker:(const XlChartMarkerStyle *)marker complex:(bool)complex state:(id)state;	// 0x171d01
+ (id)mapAssociatedEscherObjectstate:(id)objectstate;	// 0x2099b5
+ (int)oaPresetDashTypeFromLinePatternEnum:(int)linePatternEnum;	// 0x163ec9
+ (float)widthFromLineWeightEnum:(int)lineWeightEnum;	// 0x163e09
+ (int)presetLinePatternEnumFromDash:(id)dash;	// 0x25e161
+ (int)lineWeightEnumFromWidth:(float)width;	// 0x25e125
@end
