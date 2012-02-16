/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: /System/Library/PrivateFrameworks/CoreDAV.framework/CoreDAV
 */

#import <CoreDAV/CoreDAVPostOrPutTask.h>

@class NSString;
@protocol CoreDAVTaskDelegate;

@interface CoreDAVPutTask : CoreDAVPostOrPutTask {
	NSString *_nextETag;	// 148 = 0x94
}
@property(retain) NSString *nextETag;	// G=0x15139; S=0x1514d; @synthesize=_nextETag
@property(assign, nonatomic) id<CoreDAVTaskDelegate> delegate;	// @dynamic
// declared property setter: - (void)setNextETag:(id)tag;	// 0x1514d
// declared property getter: - (id)nextETag;	// 0x15139
- (void)finishCoreDAVTaskWithError:(id)error;	// 0x14fcd
- (id)httpMethod;	// 0x14fc1
- (id)description;	// 0x14efd
- (void)dealloc;	// 0x14eb1
@end
