/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: /System/Library/PrivateFrameworks/CoreDAV.framework/CoreDAV
 */

#import <CoreDAV/CoreDAVTaskGroup.h>
#import <CoreDAV/CoreDAVPropPatchTaskDelegate.h>

@class NSURL;

@interface CardDAVUpdateMeCardTaskGroup : CoreDAVTaskGroup <CoreDAVPropPatchTaskDelegate> {
	NSURL *_homeURL;	// 44 = 0x2c
	NSURL *_cardURL;	// 48 = 0x30
}
@property(readonly, assign) NSURL *homeURL;	// G=0x3a369; @synthesize=_homeURL
@property(readonly, assign) NSURL *cardURL;	// G=0x3a359; @synthesize=_cardURL
// declared property getter: - (id)homeURL;	// 0x3a369
// declared property getter: - (id)cardURL;	// 0x3a359
- (void)propPatchTask:(id)task parsedResponses:(id)responses error:(id)error;	// 0x3a2b9
- (void)startTaskGroup;	// 0x3a1e5
- (id)_newPropPatchTask;	// 0x3a099
- (void)taskGroupWillCancelWithError:(id)taskGroup;	// 0x3a045
- (id)description;	// 0x39fe5
- (void)dealloc;	// 0x39f85
- (id)initWithAccountInfoProvider:(id)accountInfoProvider taskManager:(id)manager homeURL:(id)url cardURL:(id)url4;	// 0x39f19
@end
