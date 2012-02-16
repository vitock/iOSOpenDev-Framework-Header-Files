/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: /System/Library/PrivateFrameworks/GMM.framework/GMM
 */

#import <GMM/GMM-Structs.h>
#import <GMM/XXUnknownSuperclass.h>
#import <GMM/GEOTileSetProfile.h>

@class NSString, NSURL;

__attribute__((visibility("hidden")))
@interface GMMGEOTileSetProfile : XXUnknownSuperclass <GEOTileSetProfile> {
	BOOL _isChina;	// 4 = 0x4
}
@property(readonly, assign, nonatomic) int scale;	// G=0x431d1; 
@property(readonly, assign, nonatomic) int size;	// G=0x431ad; 
@property(readonly, assign, nonatomic) unsigned operatingEdition;	// G=0x431f1; 
@property(readonly, assign, nonatomic) NSURL *multiTileURL;	// G=0x431ed; 
@property(readonly, assign, nonatomic) NSString *baseURLString;	// G=0x431e9; 
@property(readonly, assign, nonatomic) int style;	// G=0x431a9; 
@property(assign, nonatomic) BOOL isChina;	// G=0x43915; S=0x43925; @synthesize=_isChina
+ (id)sharedProfile;	// 0x43119
// declared property setter: - (void)setIsChina:(BOOL)china;	// 0x43925
// declared property getter: - (BOOL)isChina;	// 0x43915
- (id)attributionInfoForTileKeys:(id)tileKeys;	// 0x4350d
- (void)loadAttributionBadgeDataHiDPI:(BOOL)dpi isIPad:(BOOL)pad handler:(id)handler;	// 0x433cd
- (BOOL)needsAttributionBadge;	// 0x433c9
- (unsigned)minZoomLevelForTileKey:(const GEOTileKey *)tileKey;	// 0x433a9
- (unsigned)maxZoomLevelForTileKey:(const GEOTileKey *)tileKey;	// 0x431f9
- (BOOL)isAvailableForTileKey:(const GEOTileKey *)tileKey;	// 0x431f5
// declared property getter: - (unsigned)operatingEdition;	// 0x431f1
// declared property getter: - (id)multiTileURL;	// 0x431ed
// declared property getter: - (id)baseURLString;	// 0x431e9
// declared property getter: - (int)scale;	// 0x431d1
// declared property getter: - (int)size;	// 0x431ad
// declared property getter: - (int)style;	// 0x431a9
- (int)maxChinaZoomLevel;	// 0x431a5
@end
