/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: /System/Library/PrivateFrameworks/AppSupport.framework/AppSupport
 */

#import <AppSupport/InvocationTrampoline.h>


@interface DelayedInvocationTrampoline : InvocationTrampoline {
	double _delay;	// 8 = 0x8
}
- (id)initWithTarget:(id)target delay:(double)delay;	// 0x15095
- (void)forwardInvocation:(id)invocation;	// 0x14d39
@end
