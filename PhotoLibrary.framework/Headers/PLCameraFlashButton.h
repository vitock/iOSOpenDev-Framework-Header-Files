/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: /System/Library/PrivateFrameworks/PhotoLibrary.framework/PhotoLibrary
 */

#import <PhotoLibrary/PhotoLibrary-Structs.h>
#import <PhotoLibrary/PLReorientingButton.h>

@class UIImageView, PLCameraOverlayButtonLabel, PLCameraFlashButtonSpacerView;
@protocol PLCameraFlashButtonDelegate;

@interface PLCameraFlashButton : PLReorientingButton {
	int _flashMode;	// 192 = 0xc0
	BOOL _isExpanded;	// 196 = 0xc4
	float _fixedLeftWidth;	// 200 = 0xc8
	float _fixedRightWidth;	// 204 = 0xcc
	UIImageView *_flashIconView;	// 208 = 0xd0
	PLCameraOverlayButtonLabel *_autoLabel;	// 212 = 0xd4
	PLCameraOverlayButtonLabel *_onLabel;	// 216 = 0xd8
	PLCameraOverlayButtonLabel *_offLabel;	// 220 = 0xdc
	PLCameraOverlayButtonLabel *_currentLabel;	// 224 = 0xe0
	UIImageView *_warningImageView;	// 228 = 0xe4
	PLCameraFlashButtonSpacerView *_spacer1;	// 232 = 0xe8
	PLCameraFlashButtonSpacerView *_spacer2;	// 236 = 0xec
	id<PLCameraFlashButtonDelegate> _delegate;	// 240 = 0xf0
@private
	BOOL autoHidden;	// 244 = 0xf4
	BOOL showWarningIndicator;	// 245 = 0xf5
}
@property(readonly, assign, nonatomic, getter=isExpanded) BOOL expanded;	// G=0xbb989; @synthesize=_isExpanded
@property(assign, nonatomic, getter=isShowingWarningIndicator) BOOL showWarningIndicator;	// G=0xbb979; S=0xba6a1; @synthesize
@property(assign, nonatomic, getter=isAutoHidden) BOOL autoHidden;	// G=0xbb969; S=0xba561; @synthesize
@property(assign, nonatomic) int flashMode;	// G=0xbb939; S=0xbb605; @synthesize=_flashMode
@property(assign, nonatomic) id<PLCameraFlashButtonDelegate> delegate;	// G=0xbb949; S=0xbb959; @synthesize=_delegate
// declared property getter: - (BOOL)isExpanded;	// 0xbb989
// declared property getter: - (BOOL)isShowingWarningIndicator;	// 0xbb979
// declared property getter: - (BOOL)isAutoHidden;	// 0xbb969
// declared property setter: - (void)setDelegate:(id)delegate;	// 0xbb959
// declared property getter: - (id)delegate;	// 0xbb949
// declared property getter: - (int)flashMode;	// 0xbb939
- (void)setButtonOrientation:(int)orientation animated:(BOOL)animated;	// 0xbb8dd
- (void)_scheduleCollapse;	// 0xbb881
- (void)_cancelCollapse;	// 0xbb845
- (void)_collapseAnimated;	// 0xbb825
- (void)collapse;	// 0xbb805
- (void)setFlashMode:(int)mode notifyDelegate:(BOOL)delegate;	// 0xbb619
// declared property setter: - (void)setFlashMode:(int)mode;	// 0xbb605
- (void)toggleTap:(id)tap;	// 0xbb42d
- (void)_collapseAndSetMode:(int)mode animated:(BOOL)animated;	// 0xbb35d
- (void)_expandAnimated:(BOOL)animated;	// 0xbb1cd
- (float)_currentWidth;	// 0xbaf89
- (void)layoutSubviews;	// 0xba709
// declared property setter: - (void)setShowWarningIndicator:(BOOL)indicator;	// 0xba6a1
- (void)_loadWarningResources;	// 0xba5cd
// declared property setter: - (void)setAutoHidden:(BOOL)hidden;	// 0xba561
- (void)dealloc;	// 0xba48d
- (id)initWithFrame:(CGRect)frame;	// 0xb9df9
@end
