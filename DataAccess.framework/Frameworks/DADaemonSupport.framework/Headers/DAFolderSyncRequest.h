/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: /System/Library/PrivateFrameworks/DataAccess.framework/Frameworks/DADaemonSupport.framework/DADaemonSupport
 */

#import <DADaemonSupport/XXUnknownSuperclass.h>

@class DAFolder, NSArray;

@interface DAFolderSyncRequest : XXUnknownSuperclass {
	DAFolder *_folder;	// 4 = 0x4
	BOOL _hasRemoteChanges;	// 8 = 0x8
	BOOL _isInitialUberSync;	// 9 = 0x9
	NSArray *_actions;	// 12 = 0xc
	BOOL _isResyncAfterConnectionFailed;	// 16 = 0x10
}
@property(assign) BOOL isResyncAfterConnectionFailed;	// G=0x10941; S=0x10951; @synthesize=_isResyncAfterConnectionFailed
@property(retain) NSArray *actions;	// G=0x10909; S=0x1091d; @synthesize=_actions
@property(assign) BOOL isInitialUberSync;	// G=0x108e9; S=0x108f9; @synthesize=_isInitialUberSync
@property(assign) BOOL hasRemoteChanges;	// G=0x108c9; S=0x108d9; @synthesize=_hasRemoteChanges
@property(retain) DAFolder *folder;	// G=0x10891; S=0x108a5; @synthesize=_folder
// declared property setter: - (void)setIsResyncAfterConnectionFailed:(BOOL)failed;	// 0x10951
// declared property getter: - (BOOL)isResyncAfterConnectionFailed;	// 0x10941
// declared property setter: - (void)setActions:(id)actions;	// 0x1091d
// declared property getter: - (id)actions;	// 0x10909
// declared property setter: - (void)setIsInitialUberSync:(BOOL)sync;	// 0x108f9
// declared property getter: - (BOOL)isInitialUberSync;	// 0x108e9
// declared property setter: - (void)setHasRemoteChanges:(BOOL)changes;	// 0x108d9
// declared property getter: - (BOOL)hasRemoteChanges;	// 0x108c9
// declared property setter: - (void)setFolder:(id)folder;	// 0x108a5
// declared property getter: - (id)folder;	// 0x10891
- (id)description;	// 0x107e9
- (void)dealloc;	// 0x10789
- (id)initWithFolder:(id)folder hasRemoteChanges:(BOOL)changes isInitialUberSync:(BOOL)sync;	// 0x106f9
@end
