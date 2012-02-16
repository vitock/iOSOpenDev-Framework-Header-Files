/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: /System/Library/PrivateFrameworks/PhotoLibrary.framework/PhotoLibrary
 */

#import <PhotoLibrary/XXUnknownSuperclass.h>
#import <PhotoLibrary/PhotoLibrary-Structs.h>

@class UILabel, UIImageView, UIImage, NSString;

@interface PLEmptyAlbumView : XXUnknownSuperclass {
	UIImage *_image;	// 48 = 0x30
	UIImage *_landscapeImage;	// 52 = 0x34
	NSString *_title;	// 56 = 0x38
	NSString *_message;	// 60 = 0x3c
	NSObject *_album;	// 64 = 0x40
@private
	UIImageView *_imageView;	// 68 = 0x44
	UILabel *_titleLabel;	// 72 = 0x48
	UILabel *_messageLabel;	// 76 = 0x4c
	int _filter;	// 80 = 0x50
	BOOL _isCameraAlbum;	// 84 = 0x54
	BOOL _useLargeImages;	// 85 = 0x55
	BOOL _filterInUse;	// 86 = 0x56
	int _currentOrientation;	// 88 = 0x58
	UIEdgeInsets _edgeInsets;	// 92 = 0x5c
}
@property(assign, nonatomic) UIEdgeInsets edgeInsets;	// G=0x4f481; S=0x4df61; @synthesize=_edgeInsets
@property(assign, nonatomic) int filter;	// G=0x4f471; S=0x4e329; @synthesize=_filter
// declared property getter: - (UIEdgeInsets)edgeInsets;	// 0x4f481
// declared property getter: - (int)filter;	// 0x4f471
- (void)_sizeLabelToFitView:(id)fitView;	// 0x4f329
- (id)_newTextViewWithText:(id)text;	// 0x4f175
- (id)_newLabelWithText:(id)text;	// 0x4ef7d
- (id)_messageForAlbum:(NSObject *)album;	// 0x4ed21
- (id)_titleForAlbum:(NSObject *)album;	// 0x4ec0d
- (id)_emptyRollImageForAlbum:(NSObject *)album interfaceOrientation:(int)orientation;	// 0x4e949
- (void)layoutSubviews;	// 0x4e3c1
- (void)setIsCameraAlbum:(BOOL)album;	// 0x4e3a1
// declared property setter: - (void)setFilter:(int)filter;	// 0x4e329
- (void)setPortraitImage:(id)image landscapeImage:(id)image2;	// 0x4e275
- (void)setImage:(id)image;	// 0x4e1d5
- (void)setMessage:(id)message;	// 0x4e151
- (void)setTitle:(id)title;	// 0x4e0cd
- (void)setAlbum:(NSObject *)album;	// 0x4dfed
// declared property setter: - (void)setEdgeInsets:(UIEdgeInsets)insets;	// 0x4df61
- (void)dealloc;	// 0x4dec5
- (id)initWithFrame:(CGRect)frame;	// 0x4de99
- (id)initWithFrame:(CGRect)frame useLargeImages:(BOOL)images;	// 0x4dda5
@end
