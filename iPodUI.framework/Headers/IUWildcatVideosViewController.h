/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: /System/Library/PrivateFrameworks/iPodUI.framework/iPodUI
 */

#import <iPodUI/iPodUI-Structs.h>
#import <iPodUI/IUFoldingTransitionDelegate.h>
#import <iPodUI/IUDoorSwingTransitionViewDelegate.h>
#import <iPodUI/IUWildcatViewController.h>
#import <iPodUI/ViewControllerArchiveNode.h>
#import <iPodUI/IUSegmentedViewControllerDelegate.h>

@class IUVideosBackstopView, IUiPodSegmentedViewController, UIViewController, IUVideoPlaybackViewController, IUWildcatVideoDetailViewController, UISnapshotView, MPMediaLibrary;

@interface IUWildcatVideosViewController : IUWildcatViewController <IUFoldingTransitionDelegate, IUDoorSwingTransitionViewDelegate, IUSegmentedViewControllerDelegate, ViewControllerArchiveNode> {
	IUVideosBackstopView *_backstopView;	// 152 = 0x98
	IUiPodSegmentedViewController *_browserViewController;	// 156 = 0x9c
	IUiPodSegmentedViewController *_deviceBrowserViewController;	// 160 = 0xa0
	IUiPodSegmentedViewController *_sharedLibraryBrowserViewController;	// 164 = 0xa4
	MPMediaLibrary *_currentSharedLibrary;	// 168 = 0xa8
	IUWildcatVideoDetailViewController *_detailViewController;	// 172 = 0xac
	IUVideoPlaybackViewController *_playbackViewController;	// 176 = 0xb0
	struct {
		UIViewController *fromViewController;
		UIViewController *toViewController;
		BOOL animated;
	} _transitionContext;	// 180 = 0xb4
	UISnapshotView *_prerotationSnapshotView;	// 192 = 0xc0
	int _lastOrientation;	// 196 = 0xc4
}
@property(readonly, assign, nonatomic) IUVideoPlaybackViewController *playbackViewController;	// G=0x7f445; @synthesize=_playbackViewController
@property(readonly, assign, nonatomic) IUWildcatVideoDetailViewController *detailViewController;	// G=0x7f435; @synthesize=_detailViewController
@property(readonly, assign, nonatomic) IUiPodSegmentedViewController *browserViewController;	// G=0x7f425; @synthesize=_browserViewController
// declared property getter: - (id)playbackViewController;	// 0x7f445
// declared property getter: - (id)detailViewController;	// 0x7f435
// declared property getter: - (id)browserViewController;	// 0x7f425
- (void)_transitionFromViewController:(id)viewController toViewController:(id)viewController2 withFoldingTransition:(id)foldingTransition;	// 0x7efd9
- (void)_transition:(int)transition fromViewController:(id)viewController toViewController:(id)viewController3;	// 0x7ebe1
- (void)_rotationAnimationDidStop:(id)_rotationAnimation finished:(id)finished context:(void *)context;	// 0x7eba1
- (void)_readyToBeginTransitionToBrowserView:(id)browserView;	// 0x7eae1
- (void)_popSharedLibraryAnimated:(BOOL)animated;	// 0x7e619
- (id)_newSegmentedController:(BOOL)controller;	// 0x7e391
- (BOOL)_isPlaybackViewController:(id)controller;	// 0x7e359
- (CGRect)_frameForViewController:(id)viewController;	// 0x7e2c9
- (void)_finishTransitionAnimation:(BOOL)animation;	// 0x7e1ed
- (void)_cancelCurrentTransition;	// 0x7e121
- (void)_backgroundAnimationDidStop:(id)_backgroundAnimation finished:(id)finished context:(void *)context;	// 0x7e0c9
- (void)_animateBackgroundForBookTransitionToViewController:(id)viewController;	// 0x7ddd1
- (CGRect)_albumFrameForBrowserControllerTransition:(id)browserControllerTransition;	// 0x7dc81
- (id)_albumGridViewControllerFromBrowserController:(id)browserController;	// 0x7dbf5
- (void)_sharedLibraryPickedNotification:(id)notification;	// 0x7dba1
- (void)_availableMediaLibrariesDidChangeNotification:(id)_availableMediaLibraries;	// 0x7db19
- (void)_popSharedLibrary:(id)library;	// 0x7db05
- (void)segmentedViewController:(id)controller didSelectViewController:(id)controller2;	// 0x7da6d
- (id)segmentedControlForSegmentedViewController:(id)segmentedViewController;	// 0x7da29
- (void)doorSwingTransitionView:(id)view didFinishTransition:(int)transition;	// 0x7d9ed
- (void)foldingTransitionDidStop:(id)foldingTransition finished:(BOOL)finished;	// 0x7d85d
- (id)browserSegmentedViewController;	// 0x7d84d
- (id)directChildViewController;	// 0x7d83d
- (id)topViewController;	// 0x7d7a9
- (BOOL)restoreArchivedContexts:(id)contexts;	// 0x7cf99
- (id)copyArchivableContexts;	// 0x7cd65
- (void)didRotateFromInterfaceOrientation:(int)interfaceOrientation;	// 0x7cd11
- (void)willAnimateRotationToInterfaceOrientation:(int)interfaceOrientation duration:(double)duration;	// 0x7cb41
- (void)willRotateToInterfaceOrientation:(int)interfaceOrientation duration:(double)duration;	// 0x7c941
- (void)loadView;	// 0x7c62d
- (BOOL)_isSupportedInterfaceOrientation:(int)orientation;	// 0x7c629
- (void)_getRotationContentSettings:(XXStruct_3uUjXA *)settings;	// 0x7c5ed
- (void)setPlaybackViewController:(id)controller makeChildController:(BOOL)controller2;	// 0x7c5bd
- (void)setDetailViewController:(id)controller makeChildController:(BOOL)controller2;	// 0x7c58d
- (void)setBrowserViewController:(id)controller makeChildController:(BOOL)controller2;	// 0x7c55d
- (void)_setViewController:(id)controller into:(id *)into makeChildController:(BOOL)controller3;	// 0x7c4f1
- (CGSize)detailSizeFromArtSizeForBrowserControllerTransition:(CGSize)browserControllerTransition;	// 0x7c46d
- (void)pushSharedLibrary:(id)library animated:(BOOL)animated;	// 0x7bbb9
- (void)pushPlaybackViewController:(id)controller animated:(BOOL)animated;	// 0x7bac1
- (void)popToDetailViewControllerAnimated:(BOOL)detailViewControllerAnimated;	// 0x7b869
- (void)popToBrowserViewControllerAnimated:(BOOL)browserViewControllerAnimated;	// 0x7b675
- (void)performPushDetailViewControllerInTransitionView:(id)transitionView;	// 0x7b59d
- (id)newTransitionViewToPushDetailViewContoller:(id)pushDetailViewContoller animated:(BOOL)animated fromFrame:(CGRect)frame;	// 0x7b3ad
- (void)pushDetailViewContoller:(id)contoller animated:(BOOL)animated fromFrame:(CGRect)frame;	// 0x7b339
- (void)dealloc;	// 0x7b161
- (id)init;	// 0x7b0a1
@end
