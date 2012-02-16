/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: /System/Library/PrivateFrameworks/iLifeSlideshow.framework/iLifeSlideshow
 */

#import <iLifeSlideshow/MCObject.h>

@class NSString, NSMutableSet;

@interface MCAsset : MCObject {
	NSString *mPath;	// 12 = 0xc
	NSString *mCachedWorkingPath;	// 16 = 0x10
	NSMutableSet *mTexts;	// 20 = 0x14
}
@property(copy, nonatomic) NSString *path;	// G=0x5345; S=0x5881; @synthesize=mPath
@property(readonly, assign) BOOL isInUse;	// G=0x5521; 
@property(copy) NSString *workingPath;	// G=0x5645; S=0x5551; 
- (id)init;	// 0x5355
- (id)initWithImprint:(id)imprint andMontage:(id)montage;	// 0x5a81
- (void)demolish;	// 0x5a09
- (id)imprint;	// 0x59ad
// declared property setter: - (void)setPath:(id)path;	// 0x5881
// declared property getter: - (id)workingPath;	// 0x5645
// declared property setter: - (void)setWorkingPath:(id)path;	// 0x5551
// declared property getter: - (BOOL)isInUse;	// 0x5521
- (void)learnText:(id)text;	// 0x54fd
- (void)forgetText:(id)text;	// 0x54d9
- (id)snapshot;	// 0x5475
- (void)_copySelfToSnapshot:(id)snapshot;	// 0x53a1
// declared property getter: - (id)path;	// 0x5345
@end
