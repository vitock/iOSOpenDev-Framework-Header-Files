/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: /System/Library/PrivateFrameworks/CoreDAV.framework/CoreDAV
 */

#import <CoreDAV/CoreDAVItem.h>

@class NSMutableSet;

@interface CoreDAVCurrentUserPrivilegeSetItem : CoreDAVItem {
	NSMutableSet *_privileges;	// 24 = 0x18
}
@property(retain) NSMutableSet *privileges;	// G=0x2767d; S=0x27691; @synthesize=_privileges
// declared property setter: - (void)setPrivileges:(id)privileges;	// 0x27691
// declared property getter: - (id)privileges;	// 0x2767d
- (BOOL)hasPrivilegeWithNameSpace:(id)nameSpace andName:(id)name;	// 0x27481
- (void)addPrivilege:(id)privilege;	// 0x273e5
- (id)copyParseRules;	// 0x272e1
- (id)description;	// 0x2721d
- (void)dealloc;	// 0x271d1
- (id)init;	// 0x271a5
@end
