/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

#import <iTunesStoreUI/iTunesStoreUI-Structs.h>
#import <iTunesStoreUI/XXUnknownSuperclass.h>

@class SURatingControl;

@interface SURatingAlertView : XXUnknownSuperclass {
	SURatingControl *_ratingControl;	// 156 = 0x9c
}
@property(assign, nonatomic) float rating;	// G=0x41a39; S=0x41a59; 
- (void)_ratingControlChanged:(id)changed;	// 0x41a79
// declared property setter: - (void)setRating:(float)rating;	// 0x41a59
// declared property getter: - (float)rating;	// 0x41a39
- (void)layout;	// 0x41799
- (void)dealloc;	// 0x41729
- (id)initWithFrame:(CGRect)frame;	// 0x414ad
@end
