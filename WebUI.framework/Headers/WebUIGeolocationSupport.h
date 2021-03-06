/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: /System/Library/PrivateFrameworks/WebUI.framework/WebUI
 */

#import <WebUI/XXUnknownSuperclass.h>

@class NSMutableDictionary, NSString;

@interface WebUIGeolocationSupport : XXUnknownSuperclass {
@private
	NSMutableDictionary *_sites;	// 4 = 0x4
	BOOL _allowed;	// 8 = 0x8
	int _challengeCount;	// 12 = 0xc
	NSString *_key;	// 16 = 0x10
}
+ (id)sharedWebUIGeolocationSupport;	// 0x2829
- (id)siteFile;	// 0x2c59
- (void)load;	// 0x2489
- (void)save;	// 0x2595
- (void)clear;	// 0x2609
- (void)alertView:(id)view clickedButtonAtIndex:(int)index;	// 0x267d
- (BOOL)webFrame:(id)frame decidePolicyForGeolocationRequestFromOrigin:(id)origin;	// 0x2939
- (void)webView:(id)view decidePolicyForGeolocationRequestFromOrigin:(id)origin frame:(id)frame listener:(id)listener;	// 0x2871
@end
