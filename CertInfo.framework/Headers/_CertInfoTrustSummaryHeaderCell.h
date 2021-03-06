/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: /System/Library/PrivateFrameworks/CertInfo.framework/CertInfo
 */


#import <CertInfo/CertInfo-Structs.h>

@class _CertInfoActionButton, UIImage, UILabel, NSString, _CertInfoGradientLabel;

@interface _CertInfoTrustSummaryHeaderCell : NSObject {
	UIImage *_certificateImage;	// 244 = 0xf4
	UIImage *_notTrustedGradient;	// 248 = 0xf8
	UILabel *_titleLabel;	// 252 = 0xfc
	UILabel *_subtitleLabel;	// 256 = 0x100
	_CertInfoActionButton *_actionButton;	// 260 = 0x104
	_CertInfoGradientLabel *_trustedLabel;	// 264 = 0x108
	BOOL _trusted;	// 268 = 0x10c
}
@property(assign, nonatomic, getter=isTrusted) BOOL trusted;	// G=0x701d; S=0x702d; @synthesize=_trusted
@property(copy, nonatomic) NSString *trustSubtitle;	// G=0x6519; S=0x64d5; 
@property(copy, nonatomic) NSString *trustTitle;	// G=0x64ad; S=0x6469; 
@property(readonly, assign, nonatomic) float rowHeight;	// G=0x65a1; 
@property(readonly, assign, nonatomic) _CertInfoActionButton *actionButton;	// G=0x63d9; 
// declared property setter: - (void)setTrusted:(BOOL)trusted;	// 0x702d
// declared property getter: - (BOOL)isTrusted;	// 0x701d
- (id)_trustedLabel;	// 0x6f85
- (id)_subtitleLabel;	// 0x6e29
- (id)_titleLabel;	// 0x6d05
- (void)_layoutSubviewsWithActionButtonSize:(CGSize)actionButtonSize;	// 0x6871
- (void)layoutSubviews;	// 0x6801
- (void)setActionButtonTitle:(id)title destructive:(BOOL)destructive animated:(BOOL)animated;	// 0x65f9
// declared property getter: - (float)rowHeight;	// 0x65a1
- (void)setExpired:(BOOL)expired;	// 0x6541
// declared property getter: - (id)trustSubtitle;	// 0x6519
// declared property setter: - (void)setTrustSubtitle:(id)subtitle;	// 0x64d5
// declared property getter: - (id)trustTitle;	// 0x64ad
// declared property setter: - (void)setTrustTitle:(id)title;	// 0x6469
// declared property getter: - (id)actionButton;	// 0x63d9
- (void)dealloc;	// 0x633d
- (id)initWithStyle:(int)style reuseIdentifier:(id)identifier;	// 0x6255
@end
