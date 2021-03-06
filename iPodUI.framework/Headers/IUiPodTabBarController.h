/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: /System/Library/PrivateFrameworks/iPodUI.framework/iPodUI
 */

#import <iPodUI/XXUnknownSuperclass.h>
#import <iPodUI/ViewControllerArchiveNode.h>
#import <iPodUI/UINavigationControllerDelegate.h>

@class NSString, IUMoreListDelegateProxy, UIViewController, NSArray, IUModalContext;

@interface IUiPodTabBarController : XXUnknownSuperclass <UINavigationControllerDelegate, ViewControllerArchiveNode> {
	IUModalContext *_modalContext;	// 200 = 0xc8
	IUMoreListDelegateProxy *_moreListDelegateProxy;	// 204 = 0xcc
	IUModalContext *_presentedModalContext;	// 208 = 0xd0
	NSArray *_availableIdentifiers;	// 212 = 0xd4
	unsigned _allowsSearch : 1;	// 216 = 0xd8
	int _archivedContextsToBeRestored;	// 220 = 0xdc
	NSString *_initialIdentifier;	// 224 = 0xe0
}
@property(assign, nonatomic) BOOL allowsSearch;	// G=0x84171; S=0x84185; 
@property(readonly, assign, nonatomic) UIViewController *topViewController;	// G=0x840e5; 
@property(readonly, assign, nonatomic) NSString *selectedIdentifier;	// G=0x837a1; 
@property(retain, nonatomic) IUModalContext *modalContext;	// G=0x8674d; S=0x839cd; @synthesize=_modalContext
@property(readonly, assign, nonatomic) NSArray *identifiers;	// G=0x83275; 
+ (id)_newNavigationControllerWithRootContextIdentifier:(id)rootContextIdentifier;	// 0x854fd
+ (Class)_moreNavigationControllerClass;	// 0x84225
+ (id)defaultIdentifiers;	// 0x83225
// declared property getter: - (id)modalContext;	// 0x8674d
- (id)_navigationControllerForIdentifier:(id)identifier outIndex:(unsigned *)index;	// 0x865c5
- (void)_updateViewControllersModalContext;	// 0x86491
- (void)_switchToContextBehindCurrentController:(id)contextBehindCurrentController withRootControllerIdentifier:(id)rootControllerIdentifier;	// 0x862a1
- (void)_setNavigationControllerDelegates:(id)delegates;	// 0x861bd
- (void)_reloadIPodViewControllers;	// 0x85f85
- (BOOL)_pushContextForSpecifier:(id)specifier unlessMatchesFinalIdentifier:(id)identifier animated:(BOOL)animated;	// 0x85dad
- (void)_fixMoreListNavigationBar;	// 0x85aed
- (id)_copyTabBarOrdering;	// 0x85775
- (BOOL)_shouldPushContextDuringSwitch:(id)aSwitch;	// 0x855bd
- (void)_defaultMediaLibraryDidChangeNotification:(id)_defaultMediaLibrary;	// 0x853f5
- (void)_updateControllersAvailable;	// 0x84e69
- (BOOL)_canDisplayItemWithIdentifier:(id)identifier;	// 0x84e2d
- (BOOL)restoreArchivedContexts:(id)contexts;	// 0x84ca1
- (id)copyArchivableContexts;	// 0x84c79
- (void)_delayedPopViewController:(id)controller;	// 0x84c2d
- (void)tabBar:(id)bar willEndCustomizingItems:(id)items changed:(BOOL)changed;	// 0x84bd1
- (void)setViewControllers:(id)controllers animated:(BOOL)animated;	// 0x8494d
- (void)_setSelectedViewController:(id)controller;	// 0x84285
- (id)moreNavigationController;	// 0x84241
- (void)dismissModalViewControllerAnimated:(BOOL)animated;	// 0x841a9
// declared property setter: - (void)setAllowsSearch:(BOOL)search;	// 0x84185
// declared property getter: - (BOOL)allowsSearch;	// 0x84171
// declared property getter: - (id)topViewController;	// 0x840e5
- (void)switchToShortcutIdentifier:(id)shortcutIdentifier;	// 0x83f69
- (void)switchToPlaylistContextForSpecifier:(id)specifier behindTopController:(BOOL)controller;	// 0x83ded
- (void)switchToContext:(id)context withRootControllerIdentifier:(id)rootControllerIdentifier;	// 0x83b2d
- (void)switchToAlbumContextForSpecifier:(id)specifier behindTopController:(BOOL)controller;	// 0x83a69
// declared property setter: - (void)setModalContext:(id)context;	// 0x839cd
- (void)selectNextIdentifier;	// 0x83925
// declared property getter: - (id)selectedIdentifier;	// 0x837a1
- (id)_rawSelectedIdentifier;	// 0x8367d
- (void)selectControllerWithIdentifier:(id)identifier;	// 0x834c1
- (id)visibleCustomViewControllers;	// 0x83495
- (void)saveOrderingToDefaults;	// 0x83451
- (void)willRestoreArchivedContexts:(id)contexts;	// 0x833ed
- (void)presentModalContext:(id)context animated:(BOOL)animated;	// 0x83355
// declared property getter: - (id)identifiers;	// 0x83275
- (void)dealloc;	// 0x830f5
- (id)initWithControllersWithAvailableIdentifiers:(id)availableIdentifiers initialIdentifier:(id)identifier maximumNumberOfItems:(int)items;	// 0x82ba9
- (id)initWithControllersWithAvailableIdentifiers:(id)availableIdentifiers initialIdentifier:(id)identifier;	// 0x82b85
- (id)initWithControllersWithAvailableIdentifiers:(id)availableIdentifiers;	// 0x82b71
- (id)init;	// 0x82b5d
@end
