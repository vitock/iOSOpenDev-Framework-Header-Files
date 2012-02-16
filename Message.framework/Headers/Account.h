/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: /System/Library/PrivateFrameworks/Message.framework/Message
 */

#import <Message/Message-Structs.h>
#import <Message/XXUnknownSuperclass.h>
#import <Message/AccountCreationProtocol.h>
#import <Message/ASDynamicAccountClassLoader.h>


@interface Account : XXUnknownSuperclass <ASDynamicAccountClassLoader, AccountCreationProtocol> {
	unsigned _isOffline : 1;	// 24 = 0x18
	unsigned _autosynchronizingEnabled : 1;	// 24 = 0x18
	unsigned _isActive : 2;	// 24 = 0x18
}
@property(assign) BOOL isActive;	// G=0x3d39; S=0x20109; converted property
@property(assign) BOOL isOffline;	// G=0x2c8f9; S=0x2c90d; converted property
@property(retain) id displayName;	// G=0x2e099; S=0x2e011; converted property
@property(retain) id username;	// G=0x541d; S=0x2df41; converted property
@property(retain) id hostname;	// G=0x53c9; S=0x2de4d; converted property
@property(retain) id password;	// G=0x124e5; S=0x2dd8d; converted property
@property(assign) unsigned portNumber;	// G=0x94e5; S=0x2db75; converted property
@property(assign) BOOL usesSSL;	// G=0x9589; S=0x2dab9; converted property
@property(retain) id domain;	// G=0x2d9b9; S=0x2d8f1; converted property
@property(retain) id preferredAuthScheme;	// G=0x12541; S=0x2d875; converted property
+ (id)basicAccountProperties;	// 0x360d
+ (id)newAccountWithDictionary:(id)dictionary;	// 0x2d09d
+ (void)loadBundleForAccountClass:(id)accountClass;	// 0x44c1
+ (BOOL)loadBundleForAccountWithProperties:(id)properties;	// 0x2f71
+ (BOOL)_shouldUpdateAccountsInPlace;	// 0x3115
+ (id)accountWithBasicAccount:(id)basicAccount;	// 0x2fc9
+ (BOOL)haveAccountsBeenConfigured;	// 0x2c8a1
+ (BOOL)isPredefinedAccountType;	// 0x2c8a5
+ (id)predefinedValueForKey:(id)key;	// 0x2c8a9
+ (id)supportedDataclasses;	// 0x2d07d
+ (id)propertiesWhichRequireValidation;	// 0x2d001
+ (id)readAccountsUsingKey:(id)key;	// 0x2e11
+ (void)saveAccounts:(id)accounts usingKey:(id)key;	// 0x2ce91
+ (void)saveAccountInfoToDefaults;	// 0x2c8ad
+ (id)accountTypeString;	// 0x2c8b1
+ (id)displayedAccountTypeString;	// 0x36c9
+ (id)displayedShortAccountTypeString;	// 0x36e5
+ (void *)keychainProtocol;	// 0x2c8bd
+ (id)myFullName;	// 0x2ce29
+ (id)accountPropertiesValueForKey:(id)key value:(id)value;	// 0x2cdd5
+ (BOOL)allObjectsInArrayAreOffline:(id)arrayAreOffline;	// 0x2ccb9
+ (id)hostname;	// 0x2c935
+ (BOOL)isSSLEditable;	// 0x2cc81
+ (id)saslProfileName;	// 0x2c975
- (id)init;	// 0x2c98d
- (void)_initializeState;	// 0x36f5
- (id)initWithProperties:(id)properties;	// 0x358d
- (void)dealloc;	// 0x2e3c1
- (id)copyWithZone:(NSZone *)zone;	// 0x2c9c9
- (void)setAutosynchronizingEnabled:(BOOL)enabled;	// 0x2c8cd
- (void)_queueAccountInfoDidChange;	// 0x5a91
- (id)propertiesToSave;	// 0x2e375
- (void)_setAccountProperties:(id)properties;	// 0x38a9
- (void)setValueInAccountProperties:(id)accountProperties forKey:(id)key;	// 0x2c9d9
- (void)removeValueInAccountPropertiesForKey:(id)key;	// 0x2e34d
- (id)valueInAccountPropertiesForKey:(id)key;	// 0x2e1ed
// converted property getter: - (BOOL)isActive;	// 0x3d39
// converted property setter: - (void)setIsActive:(BOOL)active;	// 0x20109
- (BOOL)canGoOffline;	// 0x2c8f5
// converted property getter: - (BOOL)isOffline;	// 0x2c8f9
// converted property setter: - (void)setIsOffline:(BOOL)offline;	// 0x2c90d
// converted property getter: - (id)displayName;	// 0x2e099
// converted property setter: - (void)setDisplayName:(id)name;	// 0x2e011
// converted property getter: - (id)username;	// 0x541d
// converted property setter: - (void)setUsername:(id)username;	// 0x2df41
// converted property getter: - (id)hostname;	// 0x53c9
// converted property setter: - (void)setHostname:(id)hostname;	// 0x2de4d
- (void *)keychainAccessibility;	// 0x2c939
- (void)setPasswordInKeychain:(id)keychain;	// 0x2cadd
- (void)_removePasswordInKeychain;	// 0x2cb85
// converted property setter: - (void)setPassword:(id)password;	// 0x2dd8d
- (id)passwordFromStoredUserInfo;	// 0x12609
- (id)passwordFromKeychain;	// 0x12619
// converted property getter: - (id)password;	// 0x124e5
- (id)promptUserForPasswordWithMessage:(id)message;	// 0x2dd35
- (BOOL)storesPassword;	// 0x2c949
- (BOOL)needsCredentials;	// 0x2c94d
- (BOOL)acquireCredentialsWithPassword:(id)password;	// 0x2c951
- (id)managedTag;	// 0x2dce1
- (id)promptUserIfNeededForPasswordWithMessage:(id)message;	// 0x2dc49
// converted property getter: - (unsigned)portNumber;	// 0x94e5
- (unsigned)defaultPortNumber;	// 0xe61d
- (unsigned)defaultSecurePortNumber;	// 0x2c955
- (unsigned)keychainPortNumber;	// 0x12731
// converted property setter: - (void)setPortNumber:(unsigned)number;	// 0x2db75
- (BOOL)isCommonPortNumber:(unsigned)number;	// 0x126f5
- (id)serviceName;	// 0x2c959
- (id)secureServiceName;	// 0x2c95d
- (CFStringRef)connectionServiceType;	// 0x2c961
- (void)releaseAllConnections;	// 0x2c965
- (void)releaseAllForcedConnections;	// 0x2c969
- (void)validateConnections;	// 0x2c96d
// converted property getter: - (BOOL)usesSSL;	// 0x9589
// converted property setter: - (void)setUsesSSL:(BOOL)ssl;	// 0x2dab9
- (BOOL)allowsTrustPrompt;	// 0x2c971
- (void)setTryDirectSSL:(BOOL)ssl;	// 0x2da0d
// converted property getter: - (id)domain;	// 0x2d9b9
// converted property setter: - (void)setDomain:(id)domain;	// 0x2d8f1
- (void)accountInfoDidChange;	// 0x9e59
// converted property getter: - (id)preferredAuthScheme;	// 0x12541
// converted property setter: - (void)setPreferredAuthScheme:(id)scheme;	// 0x2d875
- (id)_newConnection;	// 0x1247d
- (Class)connectionClass;	// 0x2d831
- (BOOL)requiresAuthentication;	// 0x2c979
- (id)authenticatedConnection;	// 0x2d7d1
- (id)certUIService;	// 0x2d7a5
- (id)defaultConnectionSettings;	// 0x2d5b9
- (void)applySettingsAsDefault:(id)aDefault;	// 0x2d535
- (id)alternateConnectionSettings;	// 0x2c97d
- (id)insecureConnectionSettings;	// 0x2d4d5
- (id)secureConnectionSettings;	// 0x2d44d
- (BOOL)_shouldTryDirectSSLConnectionOnPort:(unsigned)port;	// 0x2d3c9
- (id)customTitleForError:(id)error authScheme:(id)scheme defaultTitle:(id)title;	// 0x2d361
- (id)customTitleForAuthenticationError:(id)authenticationError authScheme:(id)scheme defaultTitle:(id)title;	// 0x2c981
- (id)customDescriptionForError:(id)error authScheme:(id)scheme defaultDescription:(id)description;	// 0x2d2ad
- (BOOL)isPasswordMissing;	// 0x124b5
- (void)reportAuthenticationError:(id)error authScheme:(id)scheme;	// 0x2d1dd
- (BOOL)_connectAndAuthenticate:(id)authenticate;	// 0x2d0d9
- (id)uniqueId;	// 0x4cd5
- (id)syncStoreIdentifier;	// 0x3e75
- (id)nameForMailboxUid:(id)mailboxUid;	// 0x2d0c5
- (BOOL)shouldEnableAfterError:(id)error;	// 0x2c985
- (BOOL)enableAccount;	// 0x2c989
- (BOOL)shouldDisplayHostnameInErrorMessages;	// 0x16b09
- (id)missingPasswordErrorWithTitle:(id)title;	// 0x12981
@end
