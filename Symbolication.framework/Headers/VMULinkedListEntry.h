/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: /System/Library/PrivateFrameworks/Symbolication.framework/Symbolication
 */

#import <Foundation/NSObject.h>

@class VMUSymbolOwner;

@interface VMULinkedListEntry : NSObject {
	VMULinkedListEntry *_prev;	// 4 = 0x4
	VMULinkedListEntry *_next;	// 8 = 0x8
	unsigned _size;	// 12 = 0xc
	VMUSymbolOwner *_symbolOwner;	// 16 = 0x10
}
@property(retain) VMULinkedListEntry *prev;	// G=0x32c14; S=0x32c3c; converted property
@property(retain) VMULinkedListEntry *next;	// G=0x32c28; S=0x32c50; converted property
@property(readonly, assign) unsigned size;	// G=0x32bec; converted property
@property(readonly, retain) VMUSymbolOwner *symbolOwner;	// G=0x32c00; converted property
+ (id)linkedListEntryWithSymbolOwner:(id)symbolOwner;	// 0x32d00
- (id)initWithSymbolOwner:(id)symbolOwner;	// 0x32c64
// converted property getter: - (unsigned)size;	// 0x32bec
// converted property getter: - (id)symbolOwner;	// 0x32c00
// converted property getter: - (id)prev;	// 0x32c14
// converted property getter: - (id)next;	// 0x32c28
// converted property setter: - (void)setPrev:(id)prev;	// 0x32c3c
// converted property setter: - (void)setNext:(id)next;	// 0x32c50
- (id)description;	// 0x32dd8
- (void)dealloc;	// 0x32d44
@end

