/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: /System/Library/PrivateFrameworks/RemoteUI.framework/RemoteUI
 */

#import <RemoteUI/RUIElement.h>

@class UIView, NSMutableArray;
@protocol RemoteUITableHeader;

@interface RUITableViewSection : RUIElement {
	NSMutableArray *_rows;	// 8 = 0x8
	UIView<RemoteUITableHeader> *_header;	// 12 = 0xc
}
@property(readonly, assign, nonatomic) NSMutableArray *rows;	// G=0xa755; @synthesize=_rows
@property(retain, nonatomic) UIView<RemoteUITableHeader> *headerView;	// G=0xb49d; S=0xec19; @synthesize=_header
- (id)init;	// 0xebb5
- (Class)_customHeaderClass;	// 0xb359
// declared property getter: - (id)headerView;	// 0xb49d
- (BOOL)hasCustomHeader;	// 0xb515
- (void)populatePostbackDictionary:(id)dictionary;	// 0xeca1
- (void)dealloc;	// 0xec41
// declared property setter: - (void)setHeaderView:(id)view;	// 0xec19
// declared property getter: - (id)rows;	// 0xa755
@end
