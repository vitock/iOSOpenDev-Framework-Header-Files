/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: /System/Library/PrivateFrameworks/WebKit.framework/WebKit
 */

#import <WebKit/XXUnknownSuperclass.h>

@class WebUserContentURLPatternPrivate;

@interface WebUserContentURLPattern : XXUnknownSuperclass {
@private
	WebUserContentURLPatternPrivate *_private;	// 4 = 0x4
}
- (id)initWithPatternString:(id)patternString;	// 0x75295
- (void)dealloc;	// 0x750c5
- (BOOL)isValid;	// 0x75045
- (id)scheme;	// 0x7525d
- (id)host;	// 0x75225
- (BOOL)matchesSubdomains;	// 0x7506d
- (BOOL)matchesURL:(id)url;	// 0x75119
@end
