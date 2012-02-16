/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: /System/Library/PrivateFrameworks/WebKit.framework/WebKit
 */

#import <WebKit/WebKit-Structs.h>
#import <WebKit/XXUnknownSuperclass.h>

@class WebNodeHighlightView, WebView;

__attribute__((visibility("hidden")))
@interface HighlightLayer : XXUnknownSuperclass {
@private
	WebNodeHighlightView *_view;	// 48 = 0x30
	WebView *_webView;	// 52 = 0x34
}
- (id)initWithHighlightView:(id)highlightView webView:(id)view;	// 0x6860d
- (id)actionForKey:(id)key;	// 0x685b9
- (void)drawInContext:(CGContextRef)context;	// 0x68661
@end
