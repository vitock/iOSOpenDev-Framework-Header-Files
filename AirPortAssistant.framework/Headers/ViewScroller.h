/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: /System/Library/PrivateFrameworks/AirPortAssistant.framework/AirPortAssistant
 */

#import <AirPortAssistant/ViewScroller.h>
#import <AirPortAssistant/UIScrollViewDelegate.h>
#import <AirPortAssistant/XXUnknownSuperclass.h>
#import <AirPortAssistant/AirPortAssistant-Structs.h>

@class NSMutableSet, NSMutableArray;

__attribute__((visibility("hidden")))
@interface ViewScroller : XXUnknownSuperclass <UIScrollViewDelegate> {
	NSMutableSet *recycledViews;	// 388 = 0x184
	NSMutableSet *visibleViews;	// 392 = 0x188
	NSMutableArray *views;	// 396 = 0x18c
	unsigned currentViewIndex;	// 400 = 0x190
}
@property(assign, nonatomic) unsigned currentViewIndex;	// G=0x81f61; S=0x81f71; @synthesize
@property(retain, nonatomic) NSMutableArray *views;	// G=0x81f2d; S=0x81f3d; @synthesize
@property(retain, nonatomic) NSMutableSet *visibleViews;	// G=0x81ef9; S=0x81f09; @synthesize
@property(retain, nonatomic) NSMutableSet *recycledViews;	// G=0x81ec5; S=0x81ed5; @synthesize
// declared property setter: - (void)setCurrentViewIndex:(unsigned)index;	// 0x81f71
// declared property getter: - (unsigned)currentViewIndex;	// 0x81f61
// declared property setter: - (void)setViews:(id)views;	// 0x81f3d
// declared property getter: - (id)views;	// 0x81f2d
// declared property setter: - (void)setVisibleViews:(id)views;	// 0x81f09
// declared property getter: - (id)visibleViews;	// 0x81ef9
// declared property setter: - (void)setRecycledViews:(id)views;	// 0x81ed5
// declared property getter: - (id)recycledViews;	// 0x81ec5
- (void)updateVisibleViews;	// 0x81bc1
- (void)scrollViewDidScroll:(id)scrollView;	// 0x81bad
- (void)removeAllViews;	// 0x81b89
- (void)addView:(id)view;	// 0x81b5d
- (void)dealloc;	// 0x81af9
- (void)awakeFromNib;	// 0x81ae5
- (id)initWithFrame:(CGRect)frame;	// 0x81a99
- (void)initializeCommon;	// 0x81a11
@end

@interface ViewScroller (private)
- (CGSize)viewScrollerContentSize;	// 0x821e5
- (CGRect)frameForViewAtIndex:(unsigned)index;	// 0x82191
- (void)configureView:(id)view forIndex:(unsigned)index;	// 0x820c1
- (BOOL)isDisplayingViewForIndex:(unsigned)index;	// 0x81fed
- (id)dequeueRecycledView;	// 0x81f81
@end
