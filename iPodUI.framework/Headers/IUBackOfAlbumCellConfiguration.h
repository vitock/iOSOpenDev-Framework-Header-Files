/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: /System/Library/PrivateFrameworks/iPodUI.framework/iPodUI
 */

#import <iPodUI/IUArrayCellConfiguration.h>

@class NSString;

@interface IUBackOfAlbumCellConfiguration : IUArrayCellConfiguration {
	double _duration;	// 80 = 0x50
	unsigned _index;	// 88 = 0x58
	unsigned _cellIndex;	// 92 = 0x5c
	unsigned _playing : 1;	// 96 = 0x60
	unsigned _isItemChapterData : 1;	// 96 = 0x60
}
@property(assign, nonatomic) BOOL isItemChapterData;	// G=0x1e819; S=0x1e82d; 
@property(retain, nonatomic) NSString *artist;	// G=0x1eba9; S=0x1eba5; 
@property(retain, nonatomic) NSString *title;	// G=0x1eb91; S=0x1eb31; 
@property(assign, nonatomic, getter=isPlaying) BOOL playing;	// G=0x1e855; S=0x1eae5; 
@property(assign, nonatomic) unsigned cellIndex;	// G=0x1ebad; S=0x1e9a1; @synthesize=_cellIndex
@property(assign, nonatomic) unsigned index;	// G=0x1ebd5; S=0x1ea51; @synthesize=_index
@property(assign, nonatomic) double duration;	// G=0x1ebbd; S=0x1e9d1; @synthesize=_duration
+ (float)rowHeightForGlobalContext:(id)globalContext;	// 0x1e471
+ (float)widthForIndex:(unsigned)index;	// 0x1e3dd
+ (float)widthForDuration:(double)duration;	// 0x1e359
// declared property getter: - (unsigned)index;	// 0x1ebd5
// declared property getter: - (double)duration;	// 0x1ebbd
// declared property getter: - (unsigned)cellIndex;	// 0x1ebad
// declared property getter: - (id)artist;	// 0x1eba9
// declared property setter: - (void)setArtist:(id)artist;	// 0x1eba5
// declared property getter: - (id)title;	// 0x1eb91
// declared property setter: - (void)setTitle:(id)title;	// 0x1eb31
// declared property setter: - (void)setPlaying:(BOOL)playing;	// 0x1eae5
// declared property setter: - (void)setIndex:(unsigned)index;	// 0x1ea51
// declared property setter: - (void)setDuration:(double)duration;	// 0x1e9d1
// declared property setter: - (void)setCellIndex:(unsigned)index;	// 0x1e9a1
- (id)untruncationCalloutString;	// 0x1e869
// declared property getter: - (BOOL)isPlaying;	// 0x1e855
// declared property setter: - (void)setIsItemChapterData:(BOOL)data;	// 0x1e82d
// declared property getter: - (BOOL)isItemChapterData;	// 0x1e819
- (void)reloadLayoutInformation;	// 0x1e68d
- (void)reloadData;	// 0x1e67d
- (id)fontForLabelAtIndex:(unsigned)index;	// 0x1e659
- (void)drawWithModifiers:(unsigned)modifiers;	// 0x1e495
- (id)colorForLabelAtIndex:(unsigned)index withModifiers:(unsigned)modifiers;	// 0x1e479
- (id)init;	// 0x1e331
@end
