/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
 */

#import <MediaRemote/XXUnknownSuperclass.h>

@class NSDictionary, NSData;

__attribute__((visibility("hidden")))
@interface MRMediaRemoteState : XXUnknownSuperclass {
@private
	BOOL _canBeNowPlayingApp;	// 4 = 0x4
	id _commandHandlerBlock;	// 8 = 0x8
	BOOL _includeVideoRoutes;	// 12 = 0xc
	BOOL _isOverrideApp;	// 13 = 0xd
	int _notifyLaunchedToken;	// 16 = 0x10
	NSData *_nowPlayingArtworkData;	// 20 = 0x14
	NSDictionary *_nowPlayingInfo;	// 24 = 0x18
	unsigned _routeDiscoveryCount;	// 28 = 0x1c
}
@property(assign, nonatomic) BOOL canBeNowPlayingApp;	// G=0x1029; S=0x1039; @synthesize=_canBeNowPlayingApp
@property(copy, nonatomic) id commandHandlerBlock;	// G=0x1019; S=0x1091; @synthesize=_commandHandlerBlock
@property(assign, nonatomic) BOOL includeVideoRoutes;	// G=0xff9; S=0x1009; @synthesize=_includeVideoRoutes
@property(assign, nonatomic) BOOL isOverrideApp;	// G=0xfd9; S=0xfe9; @synthesize=_isOverrideApp
@property(retain, nonatomic) NSData *nowPlayingArtworkData;	// G=0xfc9; S=0x10b5; @synthesize=_nowPlayingArtworkData
@property(retain, nonatomic) NSDictionary *nowPlayingInfo;	// G=0xfb9; S=0x10dd; @synthesize=_nowPlayingInfo
- (id)init;	// 0x133d
- (void)dealloc;	// 0x126d
- (void)_avSystemControllerServerConnectionDiedNotification:(id)notification;	// 0x1105
- (void)beginRouteDiscovery;	// 0xf8d
- (void)endRouteDiscovery;	// 0xfa1
// declared property getter: - (id)nowPlayingInfo;	// 0xfb9
// declared property setter: - (void)setNowPlayingInfo:(id)info;	// 0x10dd
// declared property getter: - (id)nowPlayingArtworkData;	// 0xfc9
// declared property setter: - (void)setNowPlayingArtworkData:(id)data;	// 0x10b5
// declared property getter: - (BOOL)isOverrideApp;	// 0xfd9
// declared property setter: - (void)setIsOverrideApp:(BOOL)app;	// 0xfe9
// declared property getter: - (BOOL)includeVideoRoutes;	// 0xff9
// declared property setter: - (void)setIncludeVideoRoutes:(BOOL)routes;	// 0x1009
// declared property getter: - (id)commandHandlerBlock;	// 0x1019
// declared property setter: - (void)setCommandHandlerBlock:(id)block;	// 0x1091
// declared property getter: - (BOOL)canBeNowPlayingApp;	// 0x1029
// declared property setter: - (void)setCanBeNowPlayingApp:(BOOL)app;	// 0x1039
@end
