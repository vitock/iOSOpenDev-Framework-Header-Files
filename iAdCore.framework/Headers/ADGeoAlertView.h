/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: /System/Library/PrivateFrameworks/iAdCore.framework/iAdCore
 */

#import <iAdCore/ADAlertView.h>

@class NSString;

@interface ADGeoAlertView : ADAlertView {
@private
	NSString *_guid;	// 156 = 0x9c
	id _block;	// 160 = 0xa0
}
@property(copy, nonatomic) id locationBlock;	// G=0xe9d1; S=0xe9e1; @synthesize=_block
@property(retain, nonatomic) NSString *guid;	// G=0xea05; S=0xea15; @synthesize=_guid
// declared property setter: - (void)setGuid:(id)guid;	// 0xea15
// declared property getter: - (id)guid;	// 0xea05
// declared property setter: - (void)setLocationBlock:(id)block;	// 0xe9e1
// declared property getter: - (id)locationBlock;	// 0xe9d1
- (void)dealloc;	// 0xe971
@end
