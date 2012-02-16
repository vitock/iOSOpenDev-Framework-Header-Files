/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: /System/Library/PrivateFrameworks/AccountSettingsUI.framework/AccountSettingsUI
 */

#import <AccountSettingsUI/AccountSettingsUI-Structs.h>
#import <AccountSettingsUI/PreferencesTableCustomView.h>
#import <AccountSettingsUI/XXUnknownSuperclass.h>

@class UIButton;

@interface AccountSettingsUIDeleteButtonView : XXUnknownSuperclass <PreferencesTableCustomView> {
	UIButton *_deleteButton;	// 48 = 0x30
}
@property(readonly, retain) UIButton *deleteButton;	// G=0xe9d9; converted property
+ (id)newDeleteButtonSpecifier;	// 0xea51
- (id)initWithSpecifier:(id)specifier;	// 0xebe5
- (float)preferredHeightForWidth:(float)width;	// 0xe9d1
- (void)layoutSubviews;	// 0xeacd
// converted property getter: - (id)deleteButton;	// 0xe9d9
- (void)setFrame:(CGRect)frame;	// 0xe9e9
@end
