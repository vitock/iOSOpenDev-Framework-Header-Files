/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: /System/Library/PrivateFrameworks/iPodUI.framework/iPodUI
 */

#import <iPodUI/XXUnknownSuperclass.h>
#import <iPodUI/iPodUI-Structs.h>

@class NSString;

@interface FoldingTransitionViewFaceParameters : XXUnknownSuperclass {
	CGRect _sourceFrame;	// 4 = 0x4
	int _pivotEdge;	// 20 = 0x14
	float _skewDegrees;	// 24 = 0x18
	float _partialSkewDegrees;	// 28 = 0x1c
	float _beginFractionFold;	// 32 = 0x20
	float _durationFractionFold;	// 36 = 0x24
	float _beginFractionUnfold;	// 40 = 0x28
	float _durationFractionUnfold;	// 44 = 0x2c
	float _heightShrink;	// 48 = 0x30
	BOOL _doubleSided;	// 52 = 0x34
	BOOL _slowDarkeningFold;	// 53 = 0x35
	NSString *_timingFunction;	// 56 = 0x38
}
@property(copy, nonatomic) NSString *timingFunction;	// G=0xaf2fd; S=0xaf30d; @synthesize=_timingFunction
@property(assign, nonatomic) BOOL slowDarkeningFold;	// G=0xaf2dd; S=0xaf2ed; @synthesize=_slowDarkeningFold
@property(assign, nonatomic) BOOL doubleSided;	// G=0xaf2bd; S=0xaf2cd; @synthesize=_doubleSided
@property(assign, nonatomic) float heightShrink;	// G=0xaf29d; S=0xaf2ad; @synthesize=_heightShrink
@property(assign, nonatomic) float durationFractionUnfold;	// G=0xaf27d; S=0xaf28d; @synthesize=_durationFractionUnfold
@property(assign, nonatomic) float beginFractionUnfold;	// G=0xaf25d; S=0xaf26d; @synthesize=_beginFractionUnfold
@property(assign, nonatomic) float durationFractionFold;	// G=0xaf23d; S=0xaf24d; @synthesize=_durationFractionFold
@property(assign, nonatomic) float beginFractionFold;	// G=0xaf21d; S=0xaf22d; @synthesize=_beginFractionFold
@property(assign, nonatomic) float partialSkewDegrees;	// G=0xaf1fd; S=0xaf20d; @synthesize=_partialSkewDegrees
@property(assign, nonatomic) float skewDegrees;	// G=0xaf1dd; S=0xaf1ed; @synthesize=_skewDegrees
@property(assign, nonatomic) int pivotEdge;	// G=0xaf1bd; S=0xaf1cd; @synthesize=_pivotEdge
@property(assign, nonatomic) CGRect sourceFrame;	// G=0xaf17d; S=0xaf1a1; @synthesize=_sourceFrame
// declared property setter: - (void)setTimingFunction:(id)function;	// 0xaf30d
// declared property getter: - (id)timingFunction;	// 0xaf2fd
// declared property setter: - (void)setSlowDarkeningFold:(BOOL)fold;	// 0xaf2ed
// declared property getter: - (BOOL)slowDarkeningFold;	// 0xaf2dd
// declared property setter: - (void)setDoubleSided:(BOOL)sided;	// 0xaf2cd
// declared property getter: - (BOOL)doubleSided;	// 0xaf2bd
// declared property setter: - (void)setHeightShrink:(float)shrink;	// 0xaf2ad
// declared property getter: - (float)heightShrink;	// 0xaf29d
// declared property setter: - (void)setDurationFractionUnfold:(float)unfold;	// 0xaf28d
// declared property getter: - (float)durationFractionUnfold;	// 0xaf27d
// declared property setter: - (void)setBeginFractionUnfold:(float)unfold;	// 0xaf26d
// declared property getter: - (float)beginFractionUnfold;	// 0xaf25d
// declared property setter: - (void)setDurationFractionFold:(float)fold;	// 0xaf24d
// declared property getter: - (float)durationFractionFold;	// 0xaf23d
// declared property setter: - (void)setBeginFractionFold:(float)fold;	// 0xaf22d
// declared property getter: - (float)beginFractionFold;	// 0xaf21d
// declared property setter: - (void)setPartialSkewDegrees:(float)degrees;	// 0xaf20d
// declared property getter: - (float)partialSkewDegrees;	// 0xaf1fd
// declared property setter: - (void)setSkewDegrees:(float)degrees;	// 0xaf1ed
// declared property getter: - (float)skewDegrees;	// 0xaf1dd
// declared property setter: - (void)setPivotEdge:(int)edge;	// 0xaf1cd
// declared property getter: - (int)pivotEdge;	// 0xaf1bd
// declared property setter: - (void)setSourceFrame:(CGRect)frame;	// 0xaf1a1
// declared property getter: - (CGRect)sourceFrame;	// 0xaf17d
- (void)dealloc;	// 0xaf131
- (id)init;	// 0xaf0d1
@end
