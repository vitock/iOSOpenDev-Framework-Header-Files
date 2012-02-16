/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: /System/Library/PrivateFrameworks/PhotoLibrary.framework/PhotoLibrary
 */

#import <PhotoLibrary/PhotoLibrary-Structs.h>
#import <PhotoLibrary/XXUnknownSuperclass.h>

@class NSTimer, UIScrollView;

@interface PLAutoScroller : XXUnknownSuperclass {
	UIScrollView *_targetScrollView;	// 4 = 0x4
	CGPoint _targetPoint;	// 8 = 0x8
	float _thresholdDistance;	// 16 = 0x10
	NSTimer *_autoscrollTimer;	// 20 = 0x14
}
@property(readonly, assign) float thresholdDistance;	// G=0xd9869; @synthesize=_thresholdDistance
@property(assign, nonatomic) CGPoint targetPoint;	// G=0xd984d; S=0xd923d; @synthesize=_targetPoint
// declared property getter: - (float)thresholdDistance;	// 0xd9869
// declared property getter: - (CGPoint)targetPoint;	// 0xd984d
- (void)_stopAutoscrollTimer;	// 0xd980d
- (void)_updateAutoscrollTimer:(id)timer;	// 0xd947d
- (void)stopAndInvalidate;	// 0xd946d
// declared property setter: - (void)setTargetPoint:(CGPoint)point;	// 0xd923d
- (void)dealloc;	// 0xd91dd
- (id)initWithTargetScrollView:(id)targetScrollView thresholdDistance:(float)distance;	// 0xd9165
- (id)init;	// 0xd90e9
@end
