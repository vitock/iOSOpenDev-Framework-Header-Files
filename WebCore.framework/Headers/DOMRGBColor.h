/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: /System/Library/PrivateFrameworks/WebCore.framework/WebCore
 */

#import <WebCore/DOMRGBColor.h>
#import <WebCore/WebCore-Structs.h>
#import <WebCore/DOMObject.h>

@class DOMCSSPrimitiveValue;

__attribute__((visibility("hidden")))
@interface DOMRGBColor : DOMObject {
}
@property(readonly, retain) DOMCSSPrimitiveValue *alpha;	// G=0x349859; 
@property(readonly, retain) DOMCSSPrimitiveValue *blue;	// G=0x3499a1; 
@property(readonly, retain) DOMCSSPrimitiveValue *green;	// G=0x349ae9; 
@property(readonly, retain) DOMCSSPrimitiveValue *red;	// G=0x349c31; 
- (void)dealloc;	// 0x349725
- (void)finalize;	// 0x349d79
// declared property getter: - (id)red;	// 0x349c31
// declared property getter: - (id)green;	// 0x349ae9
// declared property getter: - (id)blue;	// 0x3499a1
// declared property getter: - (id)alpha;	// 0x349859
- (CGColorRef)color;	// 0x349799
@end

@interface DOMRGBColor (WebPrivate)
@end
