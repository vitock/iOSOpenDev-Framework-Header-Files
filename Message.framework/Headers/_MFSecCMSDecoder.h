/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: /System/Library/PrivateFrameworks/Message.framework/Message
 */

#import <Message/Message-Structs.h>
#import <Message/MFCollectingDataConsumer.h>
#import <Message/XXUnknownSuperclass.h>

@class NSArray;

@interface _MFSecCMSDecoder : XXUnknownSuperclass <MFCollectingDataConsumer> {
	int _SecCMSError;	// 4 = 0x4
	SecCmsMessageStr *_message;	// 8 = 0x8
	SecCmsDigestContextStr *_digest;	// 12 = 0xc
	NSArray *_signers;	// 16 = 0x10
	SecCmsSignedDataStr *_signedData;	// 20 = 0x14
	SecCmsEnvelopedDataStr *_envelopedData;	// 24 = 0x18
	BOOL _isEncrypted;	// 28 = 0x1c
}
@property(readonly, assign, nonatomic) int lastSecCMSError;	// G=0x7f981; @synthesize=_SecCMSError
@property(readonly, assign, nonatomic) NSArray *signers;	// G=0x7f971; @synthesize=_signers
- (id)initWithPartData:(id)partData error:(id *)error;	// 0x807d1
- (void)dealloc;	// 0x80759
- (int)appendData:(id)data;	// 0x80675
- (void)done;	// 0x80611
- (id)data;	// 0x8059d
- (id)verifyAgainstSenders:(id)senders signingError:(id *)error;	// 0x801a9
- (BOOL)isContentEncrypted;	// 0x7f949
- (BOOL)isContentSigned;	// 0x7f959
- (id)signedData;	// 0x80135
// declared property getter: - (id)signers;	// 0x7f971
// declared property getter: - (int)lastSecCMSError;	// 0x7f981
@end
