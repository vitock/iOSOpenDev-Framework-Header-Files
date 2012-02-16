/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: /System/Library/PrivateFrameworks/PhotoLibrary.framework/PhotoLibrary
 */

#import <PhotoLibrary/PhotoLibrary-Structs.h>
#import <PhotoLibrary/MFMailComposeViewControllerDelegate.h>
#import <PhotoLibrary/XXUnknownSuperclass.h>

@class UIViewController, NSMutableDictionary, UIView, NSMutableArray, NSArray, MFMailComposeViewController;

@interface PLSharingController : XXUnknownSuperclass <MFMailComposeViewControllerDelegate> {
	UIViewController *_parentController;	// 4 = 0x4
	MFMailComposeViewController *_composeController;	// 8 = 0x8
	NSArray *_photos;	// 12 = 0xc
	NSMutableArray *_views;	// 16 = 0x10
	NSMutableDictionary *_trimmedFilePaths;	// 20 = 0x14
	NSArray *_attachmentIdentifiers;	// 24 = 0x18
	UIView *_animationSuperview;	// 28 = 0x1c
	UIView *_referenceView;	// 32 = 0x20
	SEL _photoAction;	// 36 = 0x24
	int _sendingEmailCount;	// 40 = 0x28
	BOOL _composeSheetIsReady;	// 44 = 0x2c
	unsigned _didDisplayComposeSheet : 1;	// 45 = 0x2d
	unsigned _didSlideImageDown : 1;	// 45 = 0x2d
	unsigned _isAnimatingSendToEmail : 1;	// 45 = 0x2d
	unsigned _delegateWillSetComposeFrame : 1;	// 45 = 0x2d
	unsigned _delegateDidFinishMail : 1;	// 45 = 0x2d
	unsigned _delegateViewForPhoto : 1;	// 45 = 0x2d
}
@property(retain) id autosaveIdentifier;	// G=0xc6d25; S=0xc6c49; converted property
@property(readonly, retain) NSMutableArray *views;	// G=0xc6ea9; converted property
+ (void)copyItemsToPasteboard:(id)pasteboard;	// 0xc49d5
+ (BOOL)canSendEmail;	// 0xc49a1
// converted property getter: - (id)views;	// 0xc6ea9
- (void)mailComposeController:(id)controller bodyFinishedLoadingWithResult:(BOOL)result error:(id)error;	// 0xc6e89
- (void)mailComposeController:(id)controller didFinishWithResult:(int)result error:(id)error;	// 0xc6d81
// converted property getter: - (id)autosaveIdentifier;	// 0xc6d25
// converted property setter: - (void)setAutosaveIdentifier:(id)identifier;	// 0xc6c49
- (void)_discardTrimmedFiles;	// 0xc6b49
- (void)setTrimmedPath:(id)path forVideo:(id)video;	// 0xc6ac9
- (BOOL)isComposeSheetReady;	// 0xc6ab9
- (void)_setComposeParentViewController:(id)controller;	// 0xc69e9
- (void)_dismissMailComposeController;	// 0xc6991
- (id)_addAudio:(id)audio toCompositionContext:(id)compositionContext;	// 0xc698d
- (id)_addVideo:(id)video toCompositionContext:(id)compositionContext;	// 0xc67f5
- (id)_addPhoto:(id)photo toCompositionContext:(id)compositionContext index:(unsigned)index;	// 0xc6711
- (void)_autosaveMailComposition;	// 0xc6675
- (void)_showMailComposeSheetForAutosavedMessageWithIdentifier:(id)identifier;	// 0xc64dd
- (void)composeMailForPhotos:(id)photos;	// 0xc60a9
- (CGRect)_animationDestinationRectForView:(id)view;	// 0xc5f5d
- (CGRect)_animationDestinationRectForImageSize:(CGSize)imageSize;	// 0xc5e09
- (void)_commonDidFinishEmailAnimation:(BOOL)_common;	// 0xc5cc9
- (void)_composeSheetDidDisplay;	// 0xc5c0d
- (void)_finishedSlidingImagesDown:(id)down finished:(id)finished context:(void *)context;	// 0xc5b85
- (void)_slideImagesOverMessage;	// 0xc55a5
- (void)_displayComposeSheet;	// 0xc4eed
- (void)_finishedSlidingImageUp:(id)up finished:(id)finished context:(void *)context;	// 0xc4e25
- (void)_animateSendToEmail;	// 0xc4c09
- (void)_reallySendViaEmail:(id)email animated:(BOOL)animated;	// 0xc4be1
- (void)_performSendViaEmail;	// 0xc4bcd
- (void)emailPhotos:(id)photos;	// 0xc4b55
- (void)dealloc;	// 0xc4aa5
- (id)initWithController:(id)controller photos:(id)photos views:(id)views;	// 0xc4a0d
@end
