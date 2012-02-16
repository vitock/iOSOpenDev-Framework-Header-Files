/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

#import <iTunesStoreUI/iTunesStoreUI-Structs.h>
#import <iTunesStoreUI/XXUnknownSuperclass.h>

@class NSString, CPRegularExpression;

@interface SUOverlayConfiguration : XXUnknownSuperclass {
@private
	CPRegularExpression *_bagKeyPattern;	// 4 = 0x4
	int _cornerRadius;	// 8 = 0x8
	BOOL _shouldShowNavigationBar;	// 12 = 0xc
	CGSize _size;	// 16 = 0x10
	NSString *_transitionName;	// 24 = 0x18
	CPRegularExpression *_urlPattern;	// 28 = 0x1c
}
@property(readonly, assign, nonatomic) NSString *transitionName;	// G=0xa74c1; @synthesize=_transitionName
@property(readonly, assign, nonatomic) CGSize size;	// G=0xa74a5; @synthesize=_size
@property(readonly, assign, nonatomic) BOOL shouldShowNavigationBar;	// G=0xa7495; @synthesize=_shouldShowNavigationBar
@property(readonly, assign, nonatomic) int cornerRadius;	// G=0xa7485; @synthesize=_cornerRadius
// declared property getter: - (id)transitionName;	// 0xa74c1
// declared property getter: - (CGSize)size;	// 0xa74a5
// declared property getter: - (BOOL)shouldShowNavigationBar;	// 0xa7495
// declared property getter: - (int)cornerRadius;	// 0xa7485
- (BOOL)matchesURLBagKey:(id)key;	// 0xa741d
- (BOOL)matchesURL:(id)url;	// 0xa7381
- (void)dealloc;	// 0xa730d
- (id)initWithDictionary:(id)dictionary;	// 0xa6f65
- (id)init;	// 0xa6f51
@end
