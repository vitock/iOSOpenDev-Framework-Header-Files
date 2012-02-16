/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: /System/Library/PrivateFrameworks/WebCore.framework/WebCore
 */

#import <WebCore/WebCore-Structs.h>
#import <WebCore/XXUnknownSuperclass.h>
#import <WebCore/NSCopying.h>


@interface WebEventRegion : XXUnknownSuperclass <NSCopying> {
@private
	CGPoint p1;	// 4 = 0x4
	CGPoint p2;	// 12 = 0xc
	CGPoint p3;	// 20 = 0x14
	CGPoint p4;	// 28 = 0x1c
}
- (id)initWithPoints:(CGPoint)points :(CGPoint)arg2 :(CGPoint)arg3 :(CGPoint)arg4;	// 0x24a901
- (id)copyWithZone:(NSZone *)zone;	// 0x6dc5ad
- (id)description;	// 0x6dc4ed
- (BOOL)hitTest:(CGPoint)test;	// 0x24a9ad
- (BOOL)isEqual:(id)equal;	// 0x6dc3b1
- (FloatQuad)quad;	// 0x24a9f1
@end
