/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: /System/Library/PrivateFrameworks/ManagedConfiguration.framework/ManagedConfiguration
 */

#import <ManagedConfiguration/MCPayload.h>

@class NSString;

@interface MCSubCalAccountPayload : MCPayload {
	NSString *_accountDescription;	// 40 = 0x28
	NSString *_hostname;	// 44 = 0x2c
	NSString *_username;	// 48 = 0x30
	NSString *_password;	// 52 = 0x34
	BOOL _useSSL;	// 56 = 0x38
	NSString *_accountPersistentUUID;	// 60 = 0x3c
}
@property(readonly, assign, nonatomic) NSString *accountDescription;	// G=0x25031; @synthesize=_accountDescription
@property(readonly, assign, nonatomic) NSString *hostname;	// G=0x25021; @synthesize=_hostname
@property(readonly, assign, nonatomic) NSString *username;	// G=0x25011; @synthesize=_username
@property(readonly, assign, nonatomic) NSString *password;	// G=0x25001; @synthesize=_password
@property(readonly, assign, nonatomic) BOOL useSSL;	// G=0x24ff1; @synthesize=_useSSL
@property(copy, nonatomic) NSString *accountPersistentUUID;	// G=0x24fe1; S=0x25165; @synthesize=_accountPersistentUUID
+ (id)typeStrings;	// 0x2513d
+ (id)localizedDescriptionForPayloadCount:(unsigned)payloadCount;	// 0x250dd
- (id)initWithDictionary:(id)dictionary profile:(id)profile outError:(id *)error;	// 0x25441
- (void)dealloc;	// 0x25041
- (id)description;	// 0x252dd
- (id)stubDictionary;	// 0x251f9
- (id)title;	// 0x251c9
- (id)subtitle1Label;	// 0x251b9
- (id)subtitle1Description;	// 0x251a9
- (id)subtitle2Label;	// 0x25199
- (id)subtitle2Description;	// 0x25189
// declared property getter: - (id)accountPersistentUUID;	// 0x24fe1
// declared property setter: - (void)setAccountPersistentUUID:(id)uuid;	// 0x25165
// declared property getter: - (BOOL)useSSL;	// 0x24ff1
// declared property getter: - (id)password;	// 0x25001
// declared property getter: - (id)username;	// 0x25011
// declared property getter: - (id)hostname;	// 0x25021
// declared property getter: - (id)accountDescription;	// 0x25031
@end
