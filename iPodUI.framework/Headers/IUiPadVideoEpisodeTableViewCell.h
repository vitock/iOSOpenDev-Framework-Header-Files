/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: /System/Library/PrivateFrameworks/iPodUI.framework/iPodUI
 */

#import <iPodUI/iPodUI-Structs.h>
#import <iPodUI/IUiPadVideoPartTableViewCell.h>

@class IUiPadVideoEpisodeTableViewCellContentView, MPMediaItem;

@interface IUiPadVideoEpisodeTableViewCell : IUiPadVideoPartTableViewCell {
	id _moreButtonTarget;	// 268 = 0x10c
	SEL _moreButtonAction;	// 272 = 0x110
	MPMediaItem *_mediaItem;	// 276 = 0x114
}
@property(readonly, assign, nonatomic) IUiPadVideoEpisodeTableViewCellContentView *videoEpisodeContentView;	// G=0x35a75; 
@property(assign, nonatomic) BOOL expanded;	// G=0x359c9; S=0x359f1; 
@property(retain, nonatomic) MPMediaItem *mediaItem;	// G=0x361e9; S=0x35a1d; @synthesize=_mediaItem
@property(assign, nonatomic) id moreButtonTarget;	// G=0x36219; S=0x36229; @synthesize=_moreButtonTarget
@property(assign, nonatomic) SEL moreButtonAction;	// G=0x361f9; S=0x36209; @synthesize=_moreButtonAction
+ (Class)contentViewClass;	// 0x359ad
// declared property setter: - (void)setMoreButtonTarget:(id)target;	// 0x36229
// declared property getter: - (id)moreButtonTarget;	// 0x36219
// declared property setter: - (void)setMoreButtonAction:(SEL)action;	// 0x36209
// declared property getter: - (SEL)moreButtonAction;	// 0x361f9
// declared property getter: - (id)mediaItem;	// 0x361e9
- (void)_moreButtonSelected:(id)selected;	// 0x361a1
- (BOOL)imageRequestIsValid:(id)valid;	// 0x36155
- (id)videoImageRequest;	// 0x36061
- (void)updateContentView;	// 0x35f61
- (void)setEditing:(BOOL)editing animated:(BOOL)animated;	// 0x35f05
- (void)setEditing:(BOOL)editing;	// 0x35eb9
- (void)prepareForReuse;	// 0x35e45
- (id)initWithStyle:(int)style reuseIdentifier:(id)identifier;	// 0x35ded
- (CGSize)sizeThatFits:(CGSize)fits;	// 0x35da5
- (void)layoutSubviews;	// 0x35c29
- (void)dealloc;	// 0x35bdd
- (void)hideDeleteConfirmationView;	// 0x35a85
// declared property getter: - (id)videoEpisodeContentView;	// 0x35a75
// declared property setter: - (void)setMediaItem:(id)item;	// 0x35a1d
// declared property setter: - (void)setExpanded:(BOOL)expanded;	// 0x359f1
// declared property getter: - (BOOL)expanded;	// 0x359c9
@end
