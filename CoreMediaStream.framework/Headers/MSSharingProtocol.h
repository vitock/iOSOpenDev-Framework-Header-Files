/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: /System/Library/PrivateFrameworks/CoreMediaStream.framework/CoreMediaStream
 */

#import <CoreMediaStream/XXUnknownSuperclass.h>
#import <CoreMediaStream/CoreMediaStream-Structs.h>

@class NSString, NSArray, NSURL;
@protocol MSSharingProtocolDelegate;

@interface MSSharingProtocol : XXUnknownSuperclass {
@private
	MSShPCContext _context;	// 4 = 0x4
	NSString *_personID;	// 88 = 0x58
	NSURL *_inviteURL;	// 92 = 0x5c
	NSURL *_manageURL;	// 96 = 0x60
	NSURL *_respondURL;	// 100 = 0x64
	NSURL *_statusURL;	// 104 = 0x68
	NSArray *_shares;	// 108 = 0x6c
	int _transactionType;	// 112 = 0x70
	id<MSSharingProtocolDelegate> _delegate;	// 116 = 0x74
}
@property(readonly, assign) NSString *personID;	// G=0x1d669; @synthesize=_personID
@property(assign, nonatomic) id<MSSharingProtocolDelegate> delegate;	// G=0x1d649; S=0x1d659; @synthesize=_delegate
+ (id)shareFromPushUserInfo:(id)pushUserInfo outSourcePersonID:(id *)anId outTargetPersonID:(id *)anId3 outError:(id *)error;	// 0x1d1cd
+ (id)_invalidFieldErrorWithFieldName:(id)fieldName;	// 0x1d151
+ (id)shareStateFromProtocol:(id)protocol;	// 0x1d115
+ (id)_shareDictsArrayFromShares:(id)shares;	// 0x1c9e1
+ (id)_sharesFromShareDictsArray:(id)shareDictsArray;	// 0x1c8fd
+ (id)_shareDictFromShare:(id)share;	// 0x1c715
+ (id)_shareFromShareDict:(id)shareDict;	// 0x1c585
+ (id)_dictShareStateFromShareState:(int)shareState;	// 0x1c561
+ (int)_shareStateFromShareDictShareState:(id)shareDictShareState;	// 0x1c541
// declared property getter: - (id)personID;	// 0x1d669
// declared property setter: - (void)setDelegate:(id)delegate;	// 0x1d659
// declared property getter: - (id)delegate;	// 0x1d649
- (void)abort;	// 0x1d0d5
- (void)_didFindServerSideConfigurationVersion:(id)version;	// 0x1d089
- (void)_didFailAuthenticationWithError:(id)error;	// 0x1d065
- (void)_didFinishTransactionWithResponseObject:(id)responseObject error:(id)error;	// 0x1cfdd
- (void)_checkForFailedInvitesWithResponse:(id)response;	// 0x1cd4d
- (void)_didFindShareState:(id)state;	// 0x1cd01
- (void)deleteShares:(id)shares;	// 0x1cc8d
- (void)modifyShares:(id)shares;	// 0x1cc19
- (void)requestCurrentShareState;	// 0x1cbd5
- (void)sendResponseToInvitation:(id)invitation accept:(BOOL)accept;	// 0x1cb59
- (void)sendInvitations:(id)invitations;	// 0x1cac5
- (void)dealloc;	// 0x1c46d
- (id)initWithPersonID:(id)personID baseURL:(id)url;	// 0x1c171
@end
