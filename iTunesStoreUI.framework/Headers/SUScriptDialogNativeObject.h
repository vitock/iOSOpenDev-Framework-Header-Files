/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

#import <iTunesStoreUI/iTunesStoreUI-Structs.h>
#import <iTunesStoreUI/SUScriptNativeObject.h>
#import <iTunesStoreUI/UIAlertViewDelegate.h>
#import <iTunesStoreUI/UIActionSheetDelegate.h>


@interface SUScriptDialogNativeObject : SUScriptNativeObject <UIActionSheetDelegate, UIAlertViewDelegate> {
}
- (void)_tearDownForDismissWithButtonIndex:(int)buttonIndex;	// 0x51459
- (id)_newActionSheetForDialog:(id)dialog;	// 0x512b9
- (void)_addScriptButton:(id)button toAlert:(id)alert atIndex:(int)index;	// 0x511d5
- (void)alertView:(id)view didDismissWithButtonIndex:(int)buttonIndex;	// 0x511c1
- (void)actionSheet:(id)sheet clickedButtonAtIndex:(int)index;	// 0x511ad
- (void)destroyNativeObject;	// 0x51159
- (void)showSheet;	// 0x5109d
- (void)showFromRect:(CGRect)rect inView:(id)view;	// 0x50ff1
- (void)show;	// 0x50ce1
- (void)dismiss;	// 0x50cb1
@end
