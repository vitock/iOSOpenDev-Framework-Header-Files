/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <OfficeImport/ESDRoot.h>
#import <OfficeImport/OfficeImport-Structs.h>
#import <OfficeImport/ESDObject.h>

@class NSMutableArray;

__attribute__((visibility("hidden")))
@interface ESDRoot : ESDObject {
@private
	NSMutableArray *mChildren;	// 16 = 0x10
}
- (id)initWithEshObject:(EshObject *)eshObject;	// 0xac9f1
- (id)init;	// 0xac8cd
- (id)initFromReader:(OcReader *)reader;	// 0x137991
- (void)dealloc;	// 0x8cb29
- (EshRoot *)eshRoot;	// 0xaca61
- (unsigned)childCount;	// 0x8e49
- (id)childAt:(unsigned)at;	// 0x8e69
- (void)addChild:(id)child;	// 0x2ad1a1
@end

@interface ESDRoot (PBAdditions)
- (id)pbInitWithState:(id)state;	// 0xac685
- (id)pbReferenceWithID:(unsigned long)anId;	// 0x8da9
@end