/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: /System/Library/PrivateFrameworks/Message.framework/Message
 */

#import <Message/DAMessageFetchAttachmentConsumer.h>
#import <Message/MFDAMailAccountConsumer.h>

@class NSData, ActivityMonitor, NSMutableData;

@interface _MFDAMessageFetchAttachmentConsumer : MFDAMailAccountConsumer <DAMessageFetchAttachmentConsumer> {
	NSMutableData *_accumulatedData;	// 12 = 0xc
	unsigned _expectedLength;	// 16 = 0x10
	ActivityMonitor *_monitor;	// 20 = 0x14
	BOOL _dataWasBase64;	// 24 = 0x18
	BOOL _fetchSucceeded;	// 25 = 0x19
}
@property(readonly, assign, nonatomic) NSData *accumulatedData;	// G=0x62d3d; @synthesize=_accumulatedData
@property(assign, nonatomic) unsigned expectedLength;	// G=0x62d1d; S=0x62d2d; @synthesize=_expectedLength
@property(readonly, assign) BOOL dataWasBase64;	// G=0x62d0d; @synthesize=_dataWasBase64
@property(readonly, assign) BOOL fetchSucceeded;	// G=0x62cfd; @synthesize=_fetchSucceeded
- (void)consumeData:(id)data ofContentType:(id)contentType forAttachmentNamed:(id)attachmentNamed ofMessageWithServerID:(id)serverID;	// 0x6715d
- (void)attachmentFetchCompletedWithStatus:(int)status forAttachmentNamed:(id)attachmentNamed ofMessageWithServerID:(id)serverID dataWasBase64:(BOOL)a64;	// 0x67249
- (id)initWithActivityMonitor:(id)activityMonitor;	// 0x67289
- (void)dealloc;	// 0x672e1
// declared property getter: - (BOOL)fetchSucceeded;	// 0x62cfd
// declared property getter: - (BOOL)dataWasBase64;	// 0x62d0d
// declared property getter: - (unsigned)expectedLength;	// 0x62d1d
// declared property setter: - (void)setExpectedLength:(unsigned)length;	// 0x62d2d
// declared property getter: - (id)accumulatedData;	// 0x62d3d
@end
