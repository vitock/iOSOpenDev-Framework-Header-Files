/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: /System/Library/PrivateFrameworks/DataAccess.framework/DataAccess
 */

#import <DataAccess/DAMailboxRequest.h>


@interface DAMailboxGetUpdatesRequest : DAMailboxRequest {
	int _maxSize;	// 8 = 0x8
	int _bodyFormat;	// 12 = 0xc
}
@property(readonly, assign) int maxSize;	// G=0xd091; converted property
@property(readonly, assign) int bodyFormat;	// G=0xd0a1; converted property
- (id)description;	// 0xd1c5
- (BOOL)isEqual:(id)equal;	// 0xd13d
- (unsigned)hash;	// 0xd0b1
// converted property getter: - (int)bodyFormat;	// 0xd0a1
// converted property getter: - (int)maxSize;	// 0xd091
- (id)initRequestForBodyFormat:(int)bodyFormat withBodySizeLimit:(int)bodySizeLimit;	// 0xd031
@end