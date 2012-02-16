/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: /System/Library/PrivateFrameworks/DataAccess.framework/Frameworks/DADaemonSupport.framework/DADaemonSupport
 */

#import <DADaemonSupport/XXUnknownSuperclass.h>

@class NSTimer;

@interface DADMain : XXUnknownSuperclass {
@private
	NSTimer *_delayedShutdownTimer;	// 8 = 0x8
	BOOL *_runLoopStoppedRef;	// 12 = 0xc
}
+ (id)sharedMain;	// 0xfba5
- (void)dealloc;	// 0x100d5
- (id)init;	// 0xffe5
- (void)disable;	// 0xff3d
- (void)setRunLoopStoppedRef:(BOOL *)ref;	// 0xff2d
- (void)waitForSystemAvailability;	// 0xfc71
- (void)_shutdownNotification:(id)notification;	// 0xfc61
- (void)shutdownDAD;	// 0xfc4d
- (void)addSignalHandler;	// 0xfaed
- (void)addToOperationsQueueDisabledCheckAndGoBlock:(id)operationsQueueDisabledCheckAndGoBlock wrappedBlock:(id)block;	// 0xf9a1
- (void)shutdownDaemonIfNoAccountsExist;	// 0xf98d
- (void)_shutdownDaemonIfNoAccountsExistInTimeInterval:(int)timeInterval;	// 0xf835
- (void)delayedShutdownTimerFired:(id)fired;	// 0xf7f1
- (void)_shutdownDaemonCheckingForAccounts:(BOOL)accounts;	// 0xf5e1
@end
