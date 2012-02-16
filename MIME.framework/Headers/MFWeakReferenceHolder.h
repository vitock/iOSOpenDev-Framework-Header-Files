/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: /System/Library/PrivateFrameworks/MIME.framework/MIME
 */

#import <MIME/XXUnknownSuperclass.h>

@class MFWeakSet, NSLock;
@protocol NSObject;

@interface MFWeakReferenceHolder : XXUnknownSuperclass {
	id<NSObject> _reference;	// 4 = 0x4
	NSLock *_lock;	// 8 = 0x8
	MFWeakSet *_observers;	// 12 = 0xc
}
+ (id)weakReferenceWithObject:(id)object referenceObserver:(id)observer;	// 0x200e1
+ (id)weakReferenceWithObject:(id)object;	// 0x2009d
- (id)init;	// 0x1ff09
- (id)_initWithObject:(id)object;	// 0x2036d
- (void)dealloc;	// 0x2030d
- (void)_override_release;	// 0x201a5
- (void)_addObserver:(id)observer;	// 0x1ff1d
- (void)removeReferenceObserver:(id)observer;	// 0x1ffc5
- (id)retainedReference;	// 0x20029
@end
