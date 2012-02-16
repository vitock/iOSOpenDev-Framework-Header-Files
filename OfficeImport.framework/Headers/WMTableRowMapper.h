/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <OfficeImport/CMMapper.h>
#import <OfficeImport/WMTableRowMapper.h>

@class WDTableRow;

__attribute__((visibility("hidden")))
@interface WMTableRowMapper : CMMapper {
@private
	WDTableRow *mWdTableRow;	// 8 = 0x8
	double mHeight;	// 12 = 0xc
}
+ (BOOL)isTableRowDeleted:(id)deleted;	// 0x146799
- (id)initWithWDTableRow:(id)wdtableRow parent:(id)parent;	// 0x14691d
- (double)height;	// 0x146e71
- (void)mapAt:(id)at withState:(id)state;	// 0x146b29
@end

@interface WMTableRowMapper (Private)
- (void)setRowProperties:(id)properties;	// 0x14699d
@end
