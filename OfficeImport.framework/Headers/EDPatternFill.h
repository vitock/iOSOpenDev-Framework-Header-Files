/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <OfficeImport/OfficeImport-Structs.h>
#import <OfficeImport/EDPatternFill.h>
#import <OfficeImport/EDFill.h>

@class EDColorReference;

__attribute__((visibility("hidden")))
@interface EDPatternFill : EDFill {
@private
	int mType;	// 8 = 0x8
	EDColorReference *mBackColorReference;	// 12 = 0xc
	EDColorReference *mForeColorReference;	// 16 = 0x10
}
+ (id)patternFillWithType:(int)type resources:(id)resources;	// 0x250c69
+ (id)patternFillWithType:(int)type foreColor:(id)color resources:(id)resources;	// 0x250c39
+ (id)patternFillWithType:(int)type foreColor:(id)color backColor:(id)color3 resources:(id)resources;	// 0x250c01
- (id)initWithResources:(id)resources;	// 0xdfec5
- (id)initWithType:(int)type foreColor:(id)color backColor:(id)color3 resources:(id)resources;	// 0x1fa4b9
- (void)dealloc;	// 0xe7435
- (id)copyWithZone:(NSZone *)zone;	// 0x250cbd
- (BOOL)isEqualToPatternFill:(id)patternFill;	// 0xe0611
- (BOOL)isEqual:(id)equal;	// 0xe05b5
- (unsigned)hash;	// 0x250c91
- (bool)isEmpty;	// 0x250bc9
- (int)type;	// 0xfbdc9
- (id)foreColor;	// 0x106fdd
- (id)backColor;	// 0x153f59
@end

@interface EDPatternFill (Private)
- (void)setType:(int)type;	// 0xdffad
- (void)setForeColor:(id)color;	// 0x24dae9
- (void)setBackColor:(id)color;	// 0x24db55
- (void)setBackColorReference:(id)reference;	// 0xe0009
- (void)setForeColorReference:(id)reference;	// 0xdffc1
@end

@interface EDPatternFill (EDInternal)
+ (id)patternFillWithType:(int)type foreColorReference:(id)reference backColorReference:(id)reference3 resources:(id)resources;	// 0x1a35b1
- (id)initWithType:(int)type foreColorReference:(id)reference backColorReference:(id)reference3 resources:(id)resources;	// 0x1a35fd
- (id)foreColorReference;	// 0x250be1
- (id)backColorReference;	// 0x250bf1
@end