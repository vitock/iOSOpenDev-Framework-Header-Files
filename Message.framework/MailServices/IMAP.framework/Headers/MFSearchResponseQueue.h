/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: /System/Library/PrivateFrameworks/Message.framework/MailServices/IMAP.framework/IMAP
 */

#import <IMAP/MFBaseSyncResponseQueue.h>

@class NSMutableIndexSet, NSIndexSet;

@interface MFSearchResponseQueue : MFBaseSyncResponseQueue {
	NSMutableIndexSet *indexSet;	// 60 = 0x3c
	unsigned limit;	// 64 = 0x40
}
@property(readonly, retain, nonatomic) NSIndexSet *indexSet;	// G=0x1bbd1; @synthesize
- (id)init;	// 0x1f999
- (BOOL)addItem:(id)item;	// 0x1fb4d
- (BOOL)flush;	// 0x1fa75
- (unsigned)uidForItem:(id)item;	// 0x1bda9
- (unsigned long long)flagsForItem:(id)item;	// 0x1bbc9
- (void)dealloc;	// 0x1fa21
// declared property getter: - (id)indexSet;	// 0x1bbd1
@end
