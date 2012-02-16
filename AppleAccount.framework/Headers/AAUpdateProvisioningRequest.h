/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: /System/Library/PrivateFrameworks/AppleAccount.framework/AppleAccount
 */

#import <AppleAccount/AARequest.h>

@class AAAccount;

@interface AAUpdateProvisioningRequest : AARequest {
	AAAccount *_account;	// 12 = 0xc
}
@property(retain, nonatomic) AAAccount *account;	// G=0x950d; S=0x951d; @synthesize=_account
+ (Class)responseClass;	// 0x90b5
// declared property setter: - (void)setAccount:(id)account;	// 0x951d
// declared property getter: - (id)account;	// 0x950d
- (id)urlRequest;	// 0x9285
- (id)urlString;	// 0x923d
- (id)urlCredential;	// 0x91c5
- (void)dealloc;	// 0x9179
- (id)initWithURLString:(id)urlstring account:(id)account;	// 0x9119
- (id)initWithAccount:(id)account;	// 0x90d1
@end
