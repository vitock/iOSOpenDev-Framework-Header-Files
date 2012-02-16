/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
 */

#import <Celestial/Celestial-Structs.h>
#import <Celestial/XXUnknownSuperclass.h>


@interface AVRemaker : XXUnknownSuperclass {
	AVRemakerPrivate *_priv;	// 4 = 0x4
}
@property(readonly, assign) double progress;	// G=0x2d801; 
@property(readonly, assign) long long approximateByteSize;	// G=0x2d30d; 
@property(readonly, assign) double maxDurationWithinLimits;	// G=0x2da69; 
@property(readonly, assign) double sourceDuration;	// G=0x2dba1; 
+ (id)figRemakerNotificationNames;	// 0x2d779
+ (id)settingForMode:(id)mode;	// 0x2d73d
+ (double)maximumDurationWithinLimitsForMode:(id)mode options:(id)options;	// 0x2d545
+ (long long)approximateByteSizeForMode:(id)mode duration:(double)duration options:(id)options;	// 0x2d399
- (void)removeListeners;	// 0x30071
- (void)addListeners;	// 0x2ff7d
- (BOOL)multipleNonEmptyEditsInTrackReader:(OpaqueFigTrackReader *)trackReader;	// 0x2fe85
- (id)audioPropertiesForTrackReader:(OpaqueFigTrackReader *)trackReader;	// 0x2fc49
- (id)videoPropertiesForTrackReader:(OpaqueFigTrackReader *)trackReader;	// 0x2f8c1
- (void)discoverSourceProperties;	// 0x2f741
- (CGSize)calculateDimensionsOfSource;	// 0x2f6a5
- (BOOL)sourceHasPortraitOrientationVideo;	// 0x2d2bd
- (id)fileFormatForURL:(id)url;	// 0x2f3b5
- (id)settingForFigRemaker;	// 0x2f2a9
- (BOOL)canPassThroughAudio:(id)audio;	// 0x2f025
- (BOOL)canPassThroughVideo:(id)video;	// 0x2ea3d
- (OpaqueFigRemaker *)createFigRemaker;	// 0x2de8d
- (id)initWithSource:(id)source dest:(id)dest mode:(id)mode options:(id)options;	// 0x2dd51
- (void)dealloc;	// 0x2dc49
// declared property getter: - (double)sourceDuration;	// 0x2dba1
// declared property getter: - (double)maxDurationWithinLimits;	// 0x2da69
// declared property getter: - (long long)approximateByteSize;	// 0x2d30d
- (void)setRangeStartTime:(double)time endTime:(double)time2;	// 0x2d981
- (id)start;	// 0x2d8f9
- (void)cancel;	// 0x2d89d
// declared property getter: - (double)progress;	// 0x2d801
@end
