/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

#import <iTunesStoreUI/SUInputSource.h>

@class NSData;

@interface SUDataInputSource : SUInputSource {
	NSData *_data;	// 4 = 0x4
	int _offset;	// 8 = 0x8
	id _promiseBlock;	// 12 = 0xc
}
@property(readonly, assign, nonatomic) NSData *data;	// G=0xc9bc5; 
- (int)read:(char *)read maxLength:(unsigned)length error:(id *)error;	// 0xc9cb9
- (BOOL)open:(id *)open;	// 0xc9c95
- (BOOL)hasBytesAvailable;	// 0xc9c59
- (long long)expectedLength;	// 0xc9c31
// declared property getter: - (id)data;	// 0xc9bc5
- (id)copyAllData:(id *)data;	// 0xc9b9d
- (void)dealloc;	// 0xc9b3d
- (id)initWithDataPromise:(id)dataPromise;	// 0xc9ae9
- (id)initWithData:(id)data;	// 0xc9a95
@end
