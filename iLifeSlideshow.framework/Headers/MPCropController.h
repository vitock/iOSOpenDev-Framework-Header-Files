/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: /System/Library/PrivateFrameworks/iLifeSlideshow.framework/iLifeSlideshow
 */

#import <iLifeSlideshow/iLifeSlideshow-Structs.h>
#import <iLifeSlideshow/MPCropController.h>
#import <iLifeSlideshow/XXUnknownSuperclass.h>

@class MPDocument;

@interface MPCropController : XXUnknownSuperclass {
	id _delegate;	// 4 = 0x4
	BOOL _hasCache;	// 8 = 0x8
	MPDocument *_authoredDocument;	// 12 = 0xc
}
@property(assign) id delegate;	// G=0x38f65; S=0x38f75; converted property
+ (id)sharedController;	// 0x38fc5
- (id)init;	// 0x38f85
// converted property getter: - (id)delegate;	// 0x38f65
// converted property setter: - (void)setDelegate:(id)delegate;	// 0x38f75
- (void)batchCrop:(id)crop;	// 0x39979
- (void)cropSlidesInDocument:(id)document withOptions:(id)options;	// 0x3940d
- (void)applyCropToSlidesInEffectContainers:(id)effectContainers inDocument:(id)document withOptions:(id)options;	// 0x39059
- (void)applyCropToSlide:(id)slide inDocument:(id)document withOptions:(id)options;	// 0x3900d
@end

@interface MPCropController (Private)
- (void)setupWithDocument:(id)document andOptions:(id)options;	// 0x39b1d
- (void)cleanup;	// 0x39bcd
- (void)applyCropToSlide:(id)slide withOptions:(id)options;	// 0x39cb1
- (void)applyAnimatedCropToSlide:(id)slide withOptions:(id)options;	// 0x39c29
- (void)applyAnimatedCropWithROIsToSlide:(id)slide withOptions:(id)options;	// 0x39fdd
- (void)applyStationaryCropToSlide:(id)slide withOptions:(id)options;	// 0x3ae41
- (CGPoint)checkFarApartROIs:(id)rois withImageSize:(CGSize)imageSize visibleAspectRatio:(float)ratio roiCenter:(CGPoint)center;	// 0x3b269
- (void)applyAnimatedCropToSlide:(id)slide withOptions:(id)options centeredAt:(CGPoint)at alwaysZoomIn:(BOOL)anIn;	// 0x3bb7d
- (void)applyTwoFaceAnimatedCropToSlide:(id)slide withOptions:(id)options;	// 0x3a1f1
- (void)applyMultiFaceAnimatedCropToSlide:(id)slide withOptions:(id)options;	// 0x3a73d
- (double)durationOfSlide:(id)slide;	// 0x39c55
@end
