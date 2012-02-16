/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: /System/Library/PrivateFrameworks/CalDAV.framework/CalDAV
 */

#import <CalDAV/CoreDAVPostTaskDelegate.h>
#import <CalDAV/XXUnknownSuperclass.h>

@class NSMutableSet, NSURL, NSSet, NSString;
@protocol CoreDAVTaskGroupDelegate;

@interface CalDAVModifySharedCalendarShareeListTaskGroup : XXUnknownSuperclass <CoreDAVPostTaskDelegate> {
	NSSet *_shareesToRemove;	// 44 = 0x2c
	NSSet *_shareesToSet;	// 48 = 0x30
	NSURL *_calendarURL;	// 52 = 0x34
	NSString *_summary;	// 56 = 0x38
	NSMutableSet *_invalidSharees;	// 60 = 0x3c
}
@property(assign, nonatomic) id<CoreDAVTaskGroupDelegate> delegate;	// @dynamic
@property(retain) NSSet *shareesToRemove;	// G=0xe981; S=0xe95d; @synthesize=_shareesToRemove
@property(retain) NSSet *shareesToSet;	// G=0xe9bd; S=0xe999; @synthesize=_shareesToSet
@property(retain) NSURL *calendarURL;	// G=0xe9f9; S=0xe9d5; @synthesize=_calendarURL
@property(retain) NSString *summary;	// G=0xea35; S=0xea11; @synthesize=_summary
@property(retain) NSMutableSet *invalidSharees;	// G=0xea71; S=0xea4d; @synthesize=_invalidSharees
- (id)initWithAccountInfoProvider:(id)accountInfoProvider taskManager:(id)manager;	// 0xe865
- (id)initWithShareesToSet:(id)set shareesToRemove:(id)remove summary:(id)summary atCalendarURL:(id)calendarURL accountInfoProvider:(id)provider taskManager:(id)manager;	// 0xe8ad
- (void)dealloc;	// 0xf351
- (id)description;	// 0xf325
- (void)startTaskGroup;	// 0xe6d9
- (id)generateModificationMessageBody;	// 0xeef1
- (void)task:(id)task didFinishWithError:(id)error;	// 0xea89
// declared property getter: - (id)invalidSharees;	// 0xea71
// declared property setter: - (void)setInvalidSharees:(id)sharees;	// 0xea4d
// declared property getter: - (id)summary;	// 0xea35
// declared property setter: - (void)setSummary:(id)summary;	// 0xea11
// declared property getter: - (id)calendarURL;	// 0xe9f9
// declared property setter: - (void)setCalendarURL:(id)url;	// 0xe9d5
// declared property getter: - (id)shareesToSet;	// 0xe9bd
// declared property setter: - (void)setShareesToSet:(id)set;	// 0xe999
// declared property getter: - (id)shareesToRemove;	// 0xe981
// declared property setter: - (void)setShareesToRemove:(id)remove;	// 0xe95d
@end
