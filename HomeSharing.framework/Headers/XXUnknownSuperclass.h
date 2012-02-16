/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: /System/Library/PrivateFrameworks/HomeSharing.framework/HomeSharing
 */

#import <HomeSharing/XXUnknownSuperclass.h>


@interface XXUnknownSuperclass (HSAdditions)
+ (id)mappedDataWithContentsOfTemporaryFile:(id)temporaryFile error:(id *)error;	// 0x6e3d
- (id)decompressedGzipDataUsingTemporaryFile;	// 0x6fb1
- (id)decompressedGzipData;	// 0x6ec9
@end

@interface XXUnknownSuperclass (HomeSharingAdditions)
+ (void)buildDatabaseFromHomeSharingConnection:(id)homeSharingConnection atPath:(id)path completionHandler:(id)handler progressHandler:(id)handler4;	// 0x10ee5
+ (void)buildDatabaseFromHomeSharingConnection:(id)homeSharingConnection atPath:(id)path completionHandler:(id)handler;	// 0x10435
- (void)checkForChangesOnConnection:(id)changesOnConnection completionHandler:(id)handler;	// 0x10459
- (void)fillContainerForHomeSharingConnection:(id)homeSharingConnection containerID:(long long)anId completionHandler:(id)handler;	// 0x100cd
@end
