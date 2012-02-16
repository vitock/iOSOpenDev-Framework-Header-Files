/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

#import <iWorkImport/iWorkImport-Structs.h>
#import <iWorkImport/GQDPointPath.h>
#import <iWorkImport/GQDPath.h>


__attribute__((visibility("hidden")))
@interface GQDPointPath : GQDPath {
@private
	int mType;	// 8 = 0x8
	CGPoint mPoint;	// 12 = 0xc
	CGSize mSize;	// 20 = 0x14
}
- (int)type;	// 0x50e51
- (CGPoint)point;	// 0x50e61
- (CGSize)size;	// 0x50e79
- (CGPathRef)createBezierPath;	// 0x5107d
@end

@interface GQDPointPath (Private)
- (int)readAttributesFromReader:(xmlTextReader *)reader processor:(id)processor;	// 0x514a9
- (int)mapStrType:(CFStringRef)type;	// 0x51505
@end
