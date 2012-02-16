/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: /System/Library/PrivateFrameworks/FTServices.framework/FTServices
 */

#import <FTServices/FTServices-Structs.h>
#import <FTServices/NSCopying.h>
#import <FTServices/FTiMessagePeerMessage.h>

@class NSData;

@interface FTiMessageGenericMessage : FTiMessagePeerMessage <NSCopying> {
	NSData *_data;	// 4 = 0x4
}
@property(copy) NSData *data;	// G=0x2a22d; S=0x2a241; @synthesize=_data
// declared property setter: - (void)setData:(id)data;	// 0x2a241
// declared property getter: - (id)data;	// 0x2a22d
- (id)messageBody;	// 0x2a0f1
- (id)requiredKeys;	// 0x2a055
- (int)command;	// 0x2a051
- (void)dealloc;	// 0x2a00d
- (id)copyWithZone:(NSZone *)zone;	// 0x29fb5
@end
