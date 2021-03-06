/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: /System/Library/PrivateFrameworks/Message.framework/MailServices/IMAP.framework/IMAP
 */

#import <IMAP/XXUnknownSuperclass.h>

@class YahooAccount;

@interface MFYahooSMTPAccount : XXUnknownSuperclass {
@private
	YahooAccount *_account;	// 48 = 0x30
}
@property(retain, nonatomic, getter=mailAccountIfAvailable) YahooAccount *mailAccount;	// G=0x33399; S=0x35d15; @synthesize=_account
- (BOOL)usesSSL;	// 0x333e9
- (id)displayHostname;	// 0x35ca5
- (id)preferredAuthScheme;	// 0x35851
- (void)dealloc;	// 0x35cc9
- (BOOL)shouldUseSaveSentForAccount:(id)account;	// 0x33381
// declared property getter: - (id)mailAccountIfAvailable;	// 0x33399
// declared property setter: - (void)setMailAccount:(id)account;	// 0x35d15
@end
