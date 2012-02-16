/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: /System/Library/PrivateFrameworks/iPodUI.framework/iPodUI
 */

#import <iPodUI/XXUnknownSuperclass.h>
#import <iPodUI/iPodUI-Structs.h>
#import <iPodUI/ViewControllerArchiveNode.h>

@class UINavigationController, IUiPodSegmentedViewController, IUiPodTabBarController, NSString, IUiPodViewController, MPMediaItem, MPMediaPlaylist, NSURL, NSArray, UIViewController, IUWildcatVideosViewController;

@interface XXUnknownSuperclass (MMPAdditions)
@property(readonly, assign, nonatomic) NSURL *libraryLinkURL;	// G=0x30e9; 
@property(readonly, assign, nonatomic) NSURL *containerLibraryLinkURL;	// G=0x2f21; 
@property(readonly, assign, nonatomic) NSURL *directStoreURL;	// G=0x2f35; 
@property(readonly, assign, nonatomic) BOOL mediaTypeCanSeedGenius;	// G=0x2855; 
// declared property getter: - (id)libraryLinkURL;	// 0x30e9
// declared property getter: - (id)directStoreURL;	// 0x2f35
// declared property getter: - (id)containerLibraryLinkURL;	// 0x2f21
- (id)_libraryLinkURL:(BOOL)url;	// 0x2aa5
- (id)_libraryLinkPlaylistName;	// 0x2a09
- (id)_libraryLinkKind;	// 0x2945
- (id)_libraryLinkArtist;	// 0x28c9
// declared property getter: - (BOOL)mediaTypeCanSeedGenius;	// 0x2855
- (BOOL)shouldPlayInOppositeApplication;	// 0x27a9
- (id)snapshotAtPlaybackTime:(double)playbackTime startRentalClock:(BOOL)clock timeOut:(double)anOut;	// 0x2411
- (id)snapshotAtPlaybackTime:(double)playbackTime startRentalClock:(BOOL)clock;	// 0x23d9
- (id)uncroppedImageCacheRequestWithSize:(CGSize)size;	// 0x23a5
- (id)uncroppedAlbumImageCacheRequestWithSize:(CGSize)size;	// 0x22e5
- (id)albumImageRequestWithSize:(CGSize)size;	// 0x2225
@end

@interface XXUnknownSuperclass (MMPAdditions)
- (unsigned)indexOfMostLikelyItemForStartingPlayback;	// 0x30fd
@end

@interface XXUnknownSuperclass (MMPAdditions)
@property(assign, nonatomic) int filteredMediaTypes;	// G=0x5595; S=0x55e5; 
@property(readonly, assign, nonatomic) int comparableGroupingType;	// G=0x5811; 
@property(readonly, assign, nonatomic) MPMediaPlaylist *containingPlaylist;	// G=0x5241; 
@property(readonly, assign, nonatomic) MPMediaItem *containingEntityRepresentativeItem;	// G=0x5189; 
@property(readonly, assign, nonatomic) int containingEntityType;	// G=0x5059; 
@property(readonly, assign, nonatomic) NSArray *playlistsWithoutActivePlaylists;	// G=0x3a19; 
@property(readonly, assign, nonatomic) NSString *bestTitle;	// G=0x4311; 
@property(assign, nonatomic) unsigned groupingThreshold;	// G=0x3dad; S=0x3dd5; 
@property(readonly, assign, nonatomic) NSArray *entities;	// G=0x39d9; 
+ (id)devicePurchasesPlaylist;	// 0x3cbd
+ (id)activeOnTheGoPlaylist;	// 0x3bcd
+ (id)queryForMediaEntityType:(int)mediaEntityType;	// 0x34d9
- (id)displayableStringByStrippingCommonPrefixOffString:(id)string property:(id)property;	// 0x5bd5
- (id)firstFrequentLongPrefixForProperty:(id)property occurrenceCount:(unsigned *)count;	// 0x5aed
- (void)_calculateFirstFrequentLongPrefixInfo:(XXStruct_Q77H7A *)info;	// 0x5841
// declared property getter: - (int)comparableGroupingType;	// 0x5811
- (BOOL)isEqualToNowPlayingQuery:(id)nowPlayingQuery;	// 0x56d9
- (id)nowPlayingComparableQuery;	// 0x5671
// declared property setter: - (void)setFilteredMediaTypes:(int)types;	// 0x55e5
// declared property getter: - (int)filteredMediaTypes;	// 0x5595
- (id)backOfAlbumQueryForItem:(id)item;	// 0x52d5
// declared property getter: - (id)containingPlaylist;	// 0x5241
// declared property getter: - (id)containingEntityRepresentativeItem;	// 0x5189
// declared property getter: - (int)containingEntityType;	// 0x5059
- (void)getListingCountFormatString:(id *)string isFallbackFormatString:(BOOL *)string2;	// 0x4aa1
- (unsigned)randomEntityIndexAvoidingEntityMatchingPredicate:(id)predicate;	// 0x49ed
// declared property getter: - (id)bestTitle;	// 0x4311
- (unsigned)indexOfEntityWithPersistentID:(unsigned long long)persistentID;	// 0x4279
- (unsigned)indexOfFirstEntityMatchingPredicate:(id)firstEntityMatchingPredicate;	// 0x4179
- (id)representativeItemsForAlbumsOfArtistAtIndex:(unsigned)index returningTotalItemCount:(unsigned *)count;	// 0x3f45
- (id)representativeItemForEntityAtIndex:(unsigned)index;	// 0x3e15
// declared property setter: - (void)setGroupingThreshold:(unsigned)threshold;	// 0x3dd5
// declared property getter: - (unsigned)groupingThreshold;	// 0x3dad
// declared property getter: - (id)playlistsWithoutActivePlaylists;	// 0x3a19
// declared property getter: - (id)entities;	// 0x39d9
- (id)queryForDrillingIntoEntityAtIndex:(unsigned)index;	// 0x39a9
- (id)queryForDrillingIntoEntity:(id)drillingIntoEntity;	// 0x38dd
@end

@interface XXUnknownSuperclass (DDScanningAdditions)
- (id)stringByDeletingAnyDateMatching:(id)matching dateStringFormatFunction:(/*function-pointer*/ void *)function;	// 0x5e81
@end

@interface XXUnknownSuperclass (Additions)
- (id)shortcutIdentifier;	// 0x6291
- (BOOL)isPlayImmediatelyURL;	// 0x621d
@end

@interface XXUnknownSuperclass (MMPAdditions)
+ (id)disabledTextColor;	// 0x6331
@end

@interface XXUnknownSuperclass (Additions)
- (void)autoHideTableHeaderIfNecessaryAnimated:(BOOL)animated;	// 0x66cd
- (void)performBlockWhileKeepingHeaderViewHidden:(id)hidden;	// 0x6679
- (void)scrollToEnd;	// 0x65c1
- (void)reloadCellAtIndexPath:(id)indexPath animated:(BOOL)animated;	// 0x64ad
- (BOOL)notifyOfCurrentSelection;	// 0x63f9
- (void)highlightIndexPath:(id)path withFadeOutDelay:(double)fadeOutDelay;	// 0x6361
- (void)_delayedDeselectIndexPath:(id)path;	// 0x634d
@end

@interface XXUnknownSuperclass (SharedLibrariesDataSourceAdditions)
- (int)compareMediaLibrary:(id)library;	// 0x11f79
@end

@interface XXUnknownSuperclass (iPodAccessorySupport)
- (void)remoteEventSelectItem;	// 0x1c0c9
- (void)remoteEventMoveDown;	// 0x1c0c5
- (void)remoteEventMoveUp;	// 0x1c0c1
- (void)viewWillAppearForRemoteEvent;	// 0x1c0bd
@end

@interface XXUnknownSuperclass (MediaTableCellAdditions)
- (void)downloadAsset:(id)asset completionHandler:(id)handler;	// 0x2736d
@end

@interface XXUnknownSuperclass (MoreListDisclosureAdditions)
- (void)setDisclosureStateUsingDefault:(id)aDefault librarySelector:(SEL)selector;	// 0x403ed
- (void)_setDisclosureStateUsingDefault:(id)aDefault librarySelector:(SEL)selector;	// 0x402e9
@end

@interface XXUnknownSuperclass (GeniusMixQueueFeederAdditions)
@property(retain) id mix;	// G=0x51881; S=0x51871; converted property
// converted property getter: - (id)mix;	// 0x51881
// converted property setter: - (void)setMix:(id)mix;	// 0x51871
@end

@interface XXUnknownSuperclass (iPodConvenience)
- (void)switchToContextForQuery:(id)query behindTopController:(BOOL)controller;	// 0x5262d
- (BOOL)reloadWithDataSource:(id)dataSource keepPlayingCurrentItemIfPossible:(BOOL)possible;	// 0x525ad
- (BOOL)reloadWithDataSource:(id)dataSource;	// 0x52595
- (id)currentMediaItem;	// 0x5252d
- (id)currentMediaQuery;	// 0x524c5
- (void)_updateFeederModeFromCurrentItem;	// 0x52461
@end

@interface XXUnknownSuperclass (MediaQueryNowPlayingItemAdditions)
@property(readonly, assign, nonatomic) NSURL *protectedContentSupportStorageURL;	// G=0x554f1; 
// declared property getter: - (id)protectedContentSupportStorageURL;	// 0x554f1
@end

@interface XXUnknownSuperclass (SegmentedViewControllerSupport)
@property(readonly, assign, nonatomic) IUiPodSegmentedViewController *segmentedViewController;	// G=0x76aa5; @dynamic
// declared property getter: - (id)segmentedViewController;	// 0x76aa5
@end

@interface XXUnknownSuperclass (WildcatVideosViewControllerAdditions)
@property(readonly, assign, nonatomic) IUWildcatVideosViewController *wildcatVideosViewController;	// G=0x7f455; 
// declared property getter: - (id)wildcatVideosViewController;	// 0x7f455
@end

@interface XXUnknownSuperclass (RotationSupport)
- (void)updateInterfaceOrientation;	// 0x7fd7d
- (BOOL)rotationDisabled;	// 0x7fd79
@end

@interface XXUnknownSuperclass (iPodConvenience) <ViewControllerArchiveNode>
@property(readonly, assign, nonatomic) UIViewController *firstViewController;	// G=0x80a31; 
- (void)swapInPreviouslySkippedViewControllers;	// 0x810a9
- (void)swapTopViewControllerWithContext:(id)context;	// 0x80e2d
- (void)pushControllerForContext:(id)context animated:(BOOL)animated;	// 0x80c5d
- (id)viewControllersForTopContext:(id)topContext;	// 0x80ab1
- (int)localizedCompare:(id)compare;	// 0x80a79
// declared property getter: - (id)firstViewController;	// 0x80a31
- (void)restoreArchivedContexts:(id)contexts;	// 0x80761
- (id)copyArchivableContexts;	// 0x805a1
@end

@interface XXUnknownSuperclass (iPodNavigationController)
- (BOOL)shouldDisableWhileDownloading;	// 0x81539
- (BOOL)shouldBeCustomizableInTabBar;	// 0x81509
- (id)_rootControllerIfRespondsToSelector:(SEL)selector;	// 0x814a5
- (BOOL)isTransitionInProgress;	// 0x81451
@end

@interface XXUnknownSuperclass (iPodConvenience)
@property(readonly, assign, nonatomic) UINavigationController *selectedNavigationController;	// G=0x867dd; 
@property(readonly, assign, nonatomic) UINavigationController *activeNavigationController;	// G=0x8675d; 
// declared property getter: - (id)selectedNavigationController;	// 0x867dd
// declared property getter: - (id)activeNavigationController;	// 0x8675d
@end

@interface XXUnknownSuperclass (iPodConvenience)
@property(assign, nonatomic) BOOL allowsCustomizing;	// G=0x88ffd; S=0x88ff9; 
@property(readonly, assign, nonatomic) BOOL isStatusBarHidden;	// G=0x88f11; 
@property(readonly, assign, nonatomic) int statusBarStyle;	// G=0x88e29; 
@property(readonly, assign, nonatomic) BOOL shouldShowNowPlayingButton;	// G=0x88d9d; 
- (BOOL)shouldHideContainerNavigationBar;	// 0x89009
- (BOOL)shouldBeCustomizableInTabBar;	// 0x89005
- (BOOL)shouldDisableWhileDownloading;	// 0x89001
// declared property getter: - (BOOL)allowsCustomizing;	// 0x88ffd
// declared property setter: - (void)setAllowsCustomizing:(BOOL)customizing;	// 0x88ff9
// declared property getter: - (BOOL)isStatusBarHidden;	// 0x88f11
// declared property getter: - (int)statusBarStyle;	// 0x88e29
// declared property getter: - (BOOL)shouldShowNowPlayingButton;	// 0x88d9d
- (int)localizedCompare:(id)compare;	// 0x88d65
- (BOOL)handlePlaybackDataSource:(id)source;	// 0x88d39
- (id)player;	// 0x88d1d
- (id)query;	// 0x88d19
- (id)modalContext;	// 0x88cf1
- (id)rootIdentifier;	// 0x88cc9
- (id)context;	// 0x88cc5
@end

@interface XXUnknownSuperclass (FoldingTransitionAdditions)
- (CGRect)foldingTransitionFrontFaceFrame;	// 0xb45c5
- (id)foldingTransitionFaceWithFrame:(CGRect)frame antiAliasedEdgeMask:(unsigned long)mask;	// 0xb4521
- (id)_snapshotViewFromBounds:(CGRect)bounds antiAliasedEdgeMask:(unsigned long)mask;	// 0xb449d
- (id)newSnapshotFaceViewWithBounds:(CGRect)bounds antiAliasedEdgeMask:(unsigned long)mask;	// 0xb43dd
- (void)foldingTransitionViewDidTakeSnapshot;	// 0xb43d9
- (void)foldingTransitionViewWillTakeSnapshot;	// 0xb43d5
@end

@interface XXUnknownSuperclass (VideoSummarySubviewHelpers)
- (id)_videoSummary_viewForTag:(unsigned)tag class:(Class)aClass;	// 0xbb2d1
- (id)_videoSummary_viewForTag:(unsigned)tag newViewHandler:(id)handler;	// 0xbb261
- (id)_videoSummary_labelForTag:(unsigned)tag font:(id)font emboss:(BOOL)emboss lineSpacing:(unsigned)spacing color:(id)color;	// 0xbb169
- (id)_videoSummary_headerLabelForTag:(unsigned)tag;	// 0xbb0d9
- (id)_videoSummary_contentLabelForTag:(unsigned)tag;	// 0xbb051
- (id)_videoSummary_contentTextViewForTag:(unsigned)tag;	// 0xbb019
@end

@interface XXUnknownSuperclass (VideoSummaryViewAdditions)
@property(readonly, assign, nonatomic) NSArray *formatDetailsForTracks;	// G=0xbb365; 
// declared property getter: - (id)formatDetailsForTracks;	// 0xbb365
@end

@interface XXUnknownSuperclass (IUAdditions)
+ (id)iPodUIBundle;	// 0xbedd1
@end

@interface XXUnknownSuperclass (IUAdditions)
@property(readonly, assign, nonatomic) UIViewController *IUTopViewController;	// G=0xc0431; 
@property(readonly, assign, nonatomic) UINavigationController *IUTopNavigationController;	// G=0xc042d; 
@property(readonly, assign, nonatomic) IUiPodTabBarController *IUTabBarController;	// G=0xc0429; 
@property(readonly, assign, nonatomic) IUiPodViewController *IUFullScreenViewController;	// G=0xc0425; 
@property(readonly, assign, nonatomic) UIViewController *IURootViewController;	// G=0xc0421; 
@property(readonly, assign, nonatomic) int IUInterfaceType;	// G=0xc041d; 
// declared property getter: - (id)IUTopViewController;	// 0xc0431
// declared property getter: - (id)IUTopNavigationController;	// 0xc042d
// declared property getter: - (id)IUTabBarController;	// 0xc0429
// declared property getter: - (id)IUFullScreenViewController;	// 0xc0425
// declared property getter: - (id)IURootViewController;	// 0xc0421
// declared property getter: - (int)IUInterfaceType;	// 0xc041d
@end
