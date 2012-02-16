/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: /System/Library/PrivateFrameworks/iTunesStore.framework/iTunesStore
 */

#import <iTunesStore/ISOperation.h>
#import <iTunesStore/XXUnknownSuperclass.h>

@class NSLock, NSRunLoop, SSOperationProgress, NSArray, NSString, NSError;
@protocol ISOperationDelegate;

@interface ISOperation : XXUnknownSuperclass {
	id<ISOperationDelegate> _delegate;	// 12 = 0xc
	NSError *_error;	// 16 = 0x10
	NSLock *_lock;	// 20 = 0x14
	NSRunLoop *_operationRunLoop;	// 24 = 0x18
	ISOperation *_parentOperation;	// 28 = 0x1c
	SSOperationProgress *_progress;	// 32 = 0x20
	BOOL _shouldMessageMainThread;	// 36 = 0x24
	NSString *_powerAssertionIdentifier;	// 40 = 0x28
	ISOperation *_subOperation;	// 44 = 0x2c
	NSArray *_serializationLockIdentifiers;	// 48 = 0x30
	BOOL _shouldRunWithBackgroundPriority;	// 52 = 0x34
	BOOL _success;	// 53 = 0x35
	id _threadSafeDelegate;	// 56 = 0x38
}
@property(retain) ISOperation *subOperation;	// G=0x70a1; S=0x70b5; @synthesize=_subOperation
@property(copy) NSArray *serializationLockIdentifiers;	// G=0x6a95; S=0x6af5; 
@property(readonly, assign) id threadSafeDelegate;	// G=0x62d5; 
@property(retain) NSRunLoop *operationRunLoop;	// G=0x6fd9; S=0x6fed; @synthesize=_operationRunLoop
@property(readonly, assign, nonatomic) SSOperationProgress *progress;	// G=0x5cd1; 
@property(retain) ISOperation *parentOperation;	// G=0x7011; S=0x7025; @synthesize=_parentOperation
@property(readonly, assign) int progressWeight;	// G=0x5ce1; 
@property(assign) BOOL success;	// G=0x70d9; S=0x70e9; @synthesize=_success
@property(retain) NSError *error;	// G=0x6fa1; S=0x6fb5; @synthesize=_error
@property(assign) BOOL shouldRunWithBackgroundPriority;	// G=0x7081; S=0x7091; @synthesize=_shouldRunWithBackgroundPriority
@property(readonly, assign) NSString *uniqueKey;	// G=0x6335; 
@property(retain) NSString *powerAssertionIdentifier;	// G=0x7049; S=0x705d; @synthesize=_powerAssertionIdentifier
@property(assign) BOOL shouldMessageMainThread;	// G=0x6299; S=0x6235; 
@property(assign) id<ISOperationDelegate> delegate;	// G=0x60dd; S=0x613d; 
// declared property setter: - (void)setSuccess:(BOOL)success;	// 0x70e9
// declared property getter: - (BOOL)success;	// 0x70d9
// declared property setter: - (void)setSubOperation:(id)operation;	// 0x70b5
// declared property getter: - (id)subOperation;	// 0x70a1
// declared property setter: - (void)setShouldRunWithBackgroundPriority:(BOOL)runWithBackgroundPriority;	// 0x7091
// declared property getter: - (BOOL)shouldRunWithBackgroundPriority;	// 0x7081
// declared property setter: - (void)setPowerAssertionIdentifier:(id)identifier;	// 0x705d
// declared property getter: - (id)powerAssertionIdentifier;	// 0x7049
// declared property setter: - (void)setParentOperation:(id)operation;	// 0x7025
// declared property getter: - (id)parentOperation;	// 0x7011
// declared property setter: - (void)setOperationRunLoop:(id)loop;	// 0x6fed
// declared property getter: - (id)operationRunLoop;	// 0x6fd9
// declared property setter: - (void)setError:(id)error;	// 0x6fb5
// declared property getter: - (id)error;	// 0x6fa1
- (void)_sendWillStartToDelegate;	// 0x6f31
- (void)_sendSuccessToDelegate;	// 0x6ec1
- (void)_sendErrorToDelegate:(id)delegate;	// 0x6e45
- (void)_main:(BOOL)main;	// 0x6c65
- (void)_failAfterException;	// 0x6c11
- (void)_dispatchCompletionBlock;	// 0x6b7d
- (void)unlock;	// 0x6b5d
// declared property setter: - (void)setSerializationLockIdentifiers:(id)identifiers;	// 0x6af5
// declared property getter: - (id)serializationLockIdentifiers;	// 0x6a95
- (void)sendProgressToDelegate;	// 0x6a2d
- (void)run:(BOOL)run;	// 0x6a0d
- (void)lock;	// 0x69ed
- (id)copySerializationLocks;	// 0x68cd
- (id)copyActivePowerAssertionIdentifiers;	// 0x684d
- (void)main;	// 0x6391
- (void)cancel;	// 0x6339
// declared property getter: - (id)uniqueKey;	// 0x6335
// declared property getter: - (id)threadSafeDelegate;	// 0x62d5
// declared property getter: - (BOOL)shouldMessageMainThread;	// 0x6299
- (BOOL)shouldFailAfterUniquePredecessorError:(id)error;	// 0x6295
// declared property setter: - (void)setShouldMessageMainThread:(BOOL)messageMainThread;	// 0x6235
// declared property setter: - (void)setDelegate:(id)delegate;	// 0x613d
// declared property getter: - (id)delegate;	// 0x60dd
- (void)stopRunLoop;	// 0x6085
- (BOOL)runSubOperation:(id)operation onQueue:(id)queue error:(id *)error;	// 0x5fb5
- (BOOL)runSubOperation:(id)operation returningError:(id *)error;	// 0x5da1
- (long)runRunLoopUntilStopped;	// 0x5d19
- (void)run;	// 0x5ce5
// declared property getter: - (int)progressWeight;	// 0x5ce1
// declared property getter: - (id)progress;	// 0x5cd1
- (void)dealloc;	// 0x5bf9
- (id)init;	// 0x5b95
@end

@interface ISOperation (ISLoadURLBagAdditions)
- (BOOL)loadURLBagWithContext:(id)context returningError:(id *)error;	// 0xf321
@end

@interface ISOperation (ISLoadSoftwareMapAdditions)
- (BOOL)loadSoftwareMapReturningError:(id *)error;	// 0x18d3d
@end

@interface ISOperation (ISAuthentication)
- (BOOL)copyAccountID:(id *)anId byAuthenticatingWithContext:(id)context returningError:(id *)error;	// 0x19589
- (id)authenticatedAccountDSID;	// 0x19561
@end
