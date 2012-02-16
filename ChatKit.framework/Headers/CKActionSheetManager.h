/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

#import <ChatKit/XXUnknownSuperclass.h>

@class UIActionSheet;

@interface CKActionSheetManager : XXUnknownSuperclass {
@private
	UIActionSheet *_actionSheet;	// 4 = 0x4
	id _handler;	// 8 = 0x8
	id _presenter;	// 12 = 0xc
	BOOL _dismissingActionSheetForRotation;	// 16 = 0x10
}
@property(copy, nonatomic) id handler;	// G=0x79f79; S=0x79fe1; @synthesize=_handler
@property(copy, nonatomic) id presenter;	// G=0x79f69; S=0x7a005; @synthesize=_presenter
@property(retain, nonatomic) UIActionSheet *actionSheet;	// G=0x79f59; S=0x7a029; @synthesize=_actionSheet
+ (id)sharedInstance;	// 0x79fb5
- (id)init;	// 0x79f89
- (void)dealloc;	// 0x7a479
- (void)showActionSheet:(id)sheet withPresenter:(id)presenter withHandler:(id)handler;	// 0x7a3b5
- (void)dismissCurrentActionSheet;	// 0x7a2fd
- (void)willStartRotating;	// 0x7a241
- (void)didFinishRotating;	// 0x7a1a5
- (void)actionSheet:(id)sheet didDismissWithButtonIndex:(int)buttonIndex;	// 0x7a101
- (void)actionSheet:(id)sheet clickedButtonAtIndex:(int)index;	// 0x7a051
// declared property getter: - (id)actionSheet;	// 0x79f59
// declared property setter: - (void)setActionSheet:(id)sheet;	// 0x7a029
// declared property getter: - (id)presenter;	// 0x79f69
// declared property setter: - (void)setPresenter:(id)presenter;	// 0x7a005
// declared property getter: - (id)handler;	// 0x79f79
// declared property setter: - (void)setHandler:(id)handler;	// 0x79fe1
@end
