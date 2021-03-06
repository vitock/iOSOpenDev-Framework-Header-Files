/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

#import <iTunesStoreUI/ISSingleton.h>
#import <iTunesStoreUI/SUDialogDelegate.h>
#import <iTunesStoreUI/XXUnknownSuperclass.h>

@class NSMutableArray;

@interface SUDialogManager : XXUnknownSuperclass <ISSingleton, SUDialogDelegate> {
	NSMutableArray *_dialogs;	// 4 = 0x4
}
@property(readonly, assign, nonatomic) int numberOfPendingDialogs;	// G=0x2b8f9; 
+ (id)sharedInstance;	// 0x2b875
+ (void)setSharedInstance:(id)instance;	// 0x2b821
- (BOOL)_haveEquivalentDialog:(id)dialog;	// 0x2bca5
- (void)_finishDialog:(id)dialog withButtonIndex:(int)buttonIndex;	// 0x2bb75
- (void)dialogDidCancel:(id)dialog;	// 0x2bb61
- (void)dialog:(id)dialog didDismissWithButtonIndex:(int)buttonIndex;	// 0x2bb51
- (void)_dialogNotification:(id)notification;	// 0x2bad9
- (BOOL)presentDialogForError:(id)error;	// 0x2ba21
- (BOOL)presentDialog:(id)dialog;	// 0x2b919
// declared property getter: - (int)numberOfPendingDialogs;	// 0x2b8f9
- (void)dealloc;	// 0x2b76d
- (id)init;	// 0x2b6ed
@end
