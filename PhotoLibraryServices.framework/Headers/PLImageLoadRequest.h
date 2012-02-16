/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

#import <PhotoLibraryServices/XXUnknownSuperclass.h>

@class PLLoadRequestKey, NSArray, NSMutableArray, NSManagedObjectID, PLImageSource, NSMutableSet;

@interface PLImageLoadRequest : XXUnknownSuperclass {
	NSManagedObjectID *_assetID;	// 4 = 0x4
	PLImageSource *_source;	// 8 = 0x8
	NSMutableSet *_queues;	// 12 = 0xc
	int _priority;	// 16 = 0x10
	NSMutableArray *_completionBlocks;	// 20 = 0x14
	PLLoadRequestKey *_key;	// 24 = 0x18
}
@property(readonly, assign, nonatomic) PLLoadRequestKey *key;	// G=0x1fa99; 
@property(readonly, assign, nonatomic) PLImageSource *source;	// G=0x1fe69; @synthesize=_source
@property(readonly, assign, nonatomic) NSArray *completionBlocks;	// G=0x1fb31; 
@property(assign, nonatomic) int priority;	// G=0x1fe49; S=0x1fe59; @synthesize=_priority
+ (id)requestWithAsset:(id)asset source:(id)source priority:(int)priority completion:(id)completion loadingQueue:(id)queue;	// 0x1f77d
// declared property getter: - (id)source;	// 0x1fe69
// declared property setter: - (void)setPriority:(int)priority;	// 0x1fe59
// declared property getter: - (int)priority;	// 0x1fe49
- (void)notifyImageLoadingQueuesOfImageAvailability:(id)imageAvailability;	// 0x1fd4d
- (BOOL)someImageLoadingQueuesRegistered;	// 0x1fd1d
- (BOOL)isImageLoadingQueueRegistered:(id)registered;	// 0x1fcf9
- (void)deregisterImageLoadingQueue:(id)queue;	// 0x1fcd9
- (void)registerImageLoadingQueue:(id)queue;	// 0x1fc75
- (id)debugDescription;	// 0x1fbf9
- (void)addCompletionBlock:(id)block;	// 0x1fb69
// declared property getter: - (id)completionBlocks;	// 0x1fb31
- (BOOL)isEqual:(id)equal;	// 0x1faa9
// declared property getter: - (id)key;	// 0x1fa99
- (id)assetInPhotoLibrary:(id)photoLibrary;	// 0x1fa75
- (void)dealloc;	// 0x1f9d1
- (id)initWithAsset:(id)asset source:(id)source priority:(int)priority;	// 0x1f855
@end
