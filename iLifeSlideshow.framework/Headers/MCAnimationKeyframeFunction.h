/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: /System/Library/PrivateFrameworks/iLifeSlideshow.framework/iLifeSlideshow
 */

#import <iLifeSlideshow/MCAnimationKeyframe.h>

@class NSString;

@interface MCAnimationKeyframeFunction : MCAnimationKeyframe {
	double mDuration;	// 48 = 0x30
	NSString *mFunction;	// 56 = 0x38
	double mFunctionTimeOffset;	// 60 = 0x3c
	double mFunctionTimeFactor;	// 68 = 0x44
	double mInnerEaseInControl;	// 76 = 0x4c
	double mInnerEaseOutControl;	// 84 = 0x54
}
@property(assign, nonatomic) double duration;	// G=0x1a5d; S=0x2c31; @synthesize=mDuration
@property(assign, nonatomic) double functionTimeOffset;	// G=0x1a45; S=0x2985; @synthesize=mFunctionTimeOffset
@property(assign, nonatomic) double functionTimeFactor;	// G=0x1a2d; S=0x2905; @synthesize=mFunctionTimeFactor
@property(assign, nonatomic) double innerEaseInControl;	// G=0x1a15; S=0x2885; @synthesize=mInnerEaseInControl
@property(assign, nonatomic) double innerEaseOutControl;	// G=0x19fd; S=0x2805; @synthesize=mInnerEaseOutControl
@property(copy) NSString *function;	// G=0x2b5d; S=0x2a05; 
- (id)init;	// 0x26a1
- (id)initWithImprint:(id)imprint andMontage:(id)montage;	// 0x2e9d
- (void)dealloc;	// 0x2e49
- (id)imprint;	// 0x2cb1
// declared property setter: - (void)setDuration:(double)duration;	// 0x2c31
// declared property getter: - (id)function;	// 0x2b5d
// declared property setter: - (void)setFunction:(id)function;	// 0x2a05
// declared property setter: - (void)setFunctionTimeOffset:(double)offset;	// 0x2985
// declared property setter: - (void)setFunctionTimeFactor:(double)factor;	// 0x2905
// declared property setter: - (void)setInnerEaseInControl:(double)control;	// 0x2885
// declared property setter: - (void)setInnerEaseOutControl:(double)control;	// 0x2805
- (id)description;	// 0x2735
// declared property getter: - (double)innerEaseOutControl;	// 0x19fd
// declared property getter: - (double)innerEaseInControl;	// 0x1a15
// declared property getter: - (double)functionTimeFactor;	// 0x1a2d
// declared property getter: - (double)functionTimeOffset;	// 0x1a45
// declared property getter: - (double)duration;	// 0x1a5d
@end
