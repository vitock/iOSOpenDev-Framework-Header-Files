/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: /System/Library/PrivateFrameworks/AirPortAssistant.framework/AirPortAssistant
 */

#import <AirPortAssistant/AssistantSubUIViewController.h>

@class UILabel, UIActivityIndicatorView, NetTopoMiniStaticLayout, UIView;

__attribute__((visibility("hidden")))
@interface StepByStepUIViewController : AssistantSubUIViewController {
	UIView *topoContainerView;	// 188 = 0xbc
	UIView *topoView;	// 192 = 0xc0
	NetTopoMiniStaticLayout *topoLayout;	// 196 = 0xc4
	UIView *tableFooterContainerView;	// 200 = 0xc8
	UIView *spinnerWithStatusBelowView;	// 204 = 0xcc
	UILabel *spinnerWithStatusBelowLabel;	// 208 = 0xd0
	UIActivityIndicatorView *spinnerWithStatusBelowSpinner;	// 212 = 0xd4
	int sbsMode;	// 216 = 0xd8
}
@property(assign, nonatomic) int sbsMode;	// G=0x1292d; S=0x1293d; @synthesize
@property(retain, nonatomic) UIActivityIndicatorView *spinnerWithStatusBelowSpinner;	// G=0x128f9; S=0x12909; @synthesize
@property(retain, nonatomic) UILabel *spinnerWithStatusBelowLabel;	// G=0x128c5; S=0x128d5; @synthesize
@property(retain, nonatomic) UIView *spinnerWithStatusBelowView;	// G=0x12891; S=0x128a1; @synthesize
@property(retain, nonatomic) UIView *tableFooterContainerView;	// G=0x1285d; S=0x1286d; @synthesize
@property(retain, nonatomic) NetTopoMiniStaticLayout *topoLayout;	// G=0x12829; S=0x12839; @synthesize
@property(retain, nonatomic) UIView *topoView;	// G=0x127f5; S=0x12805; @synthesize
@property(retain, nonatomic) UIView *topoContainerView;	// G=0x127c1; S=0x127d1; @synthesize
// declared property setter: - (void)setSbsMode:(int)mode;	// 0x1293d
// declared property getter: - (int)sbsMode;	// 0x1292d
// declared property setter: - (void)setSpinnerWithStatusBelowSpinner:(id)statusBelowSpinner;	// 0x12909
// declared property getter: - (id)spinnerWithStatusBelowSpinner;	// 0x128f9
// declared property setter: - (void)setSpinnerWithStatusBelowLabel:(id)statusBelowLabel;	// 0x128d5
// declared property getter: - (id)spinnerWithStatusBelowLabel;	// 0x128c5
// declared property setter: - (void)setSpinnerWithStatusBelowView:(id)statusBelowView;	// 0x128a1
// declared property getter: - (id)spinnerWithStatusBelowView;	// 0x12891
// declared property setter: - (void)setTableFooterContainerView:(id)view;	// 0x1286d
// declared property getter: - (id)tableFooterContainerView;	// 0x1285d
// declared property setter: - (void)setTopoLayout:(id)layout;	// 0x12839
// declared property getter: - (id)topoLayout;	// 0x12829
// declared property setter: - (void)setTopoView:(id)view;	// 0x12805
// declared property getter: - (id)topoView;	// 0x127f5
// declared property setter: - (void)setTopoContainerView:(id)view;	// 0x127d1
// declared property getter: - (id)topoContainerView;	// 0x127c1
- (BOOL)updateUIStr1:(id)a1 forTag1:(unsigned)tag1 matchesStr2:(id)a2 forTag2:(unsigned)tag2;	// 0x12691
- (void)stepByStepUpdateProgress:(id)progress forState:(int)state;	// 0x124e9
- (void)syncTopoUIForTarget:(id)target andSource:(id)source andNetwork:(id)network connectionType:(id)type;	// 0x123ad
- (void)syncTopoUIForTargetProductID:(id)targetProductID targetName:(id)name sourceProductID:(id)anId sourceName:(id)name4 networkName:(id)name5 connectionType:(id)type;	// 0x1232d
- (id)syncTopoUIInLayer:(id)layer withLayout:(id)layout targetProductID:(id)anId targetName:(id)name sourceProductID:(id)anId5 sourceName:(id)name6 networkName:(id)name7 connectionType:(id)type;	// 0x122e1
- (void)viewWillAppear:(BOOL)view;	// 0x12291
- (void)dealloc;	// 0x12251
@end
