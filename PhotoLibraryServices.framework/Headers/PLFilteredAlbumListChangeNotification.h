/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

#import <PhotoLibraryServices/PLIndexMapperDataSource.h>
#import <PhotoLibraryServices/PLAlbumListChangeNotification.h>
#import <PhotoLibraryServices/PLFilteredAlbumListChangeNotification.h>

@class NSIndexSet, PLFilteredAlbumList, PLIndexMapper;

@interface PLFilteredAlbumListChangeNotification : PLAlbumListChangeNotification {
@private
	PLFilteredAlbumList *_albumList;	// 4 = 0x4
	NSIndexSet *_oldFilteredIndexes;	// 8 = 0x8
	NSIndexSet *_filteredIndexes;	// 12 = 0xc
	PLIndexMapper *_indexMapper;	// 16 = 0x10
	PLAlbumListChangeNotification *_backingNotification;	// 20 = 0x14
}
@property(readonly, retain) PLFilteredAlbumList *albumList;	// G=0x67b21; converted property
+ (id)notificationForFilteredAlbumList:(id)filteredAlbumList fromAlbumListChangeNotification:(id)albumListChangeNotification;	// 0x67905
- (id)_changedObjects;	// 0x68049
- (BOOL)_getOldSet:(id *)set newSet:(id *)set2;	// 0x67f79
- (id)_diffDescription;	// 0x67cc1
- (id)description;	// 0x67bd5
- (BOOL)countDidChange;	// 0x67b7d
- (BOOL)shouldReload;	// 0x67b31
// converted property getter: - (id)albumList;	// 0x67b21
- (id)object;	// 0x67b11
- (void)dealloc;	// 0x67a49
- (id)initWithFilteredAlbumList:(id)filteredAlbumList albumListChangeNotification:(id)notification;	// 0x67995
- (id)init;	// 0x6797d
@end

@interface PLFilteredAlbumListChangeNotification (Private) <PLIndexMapperDataSource>
@property(readonly, assign, nonatomic) PLIndexMapper *indexMapper;	// G=0x68089; 
@property(copy, nonatomic) NSIndexSet *filteredIndexes;	// G=0x680dd; S=0x680ed; 
@property(readonly, assign, nonatomic) NSIndexSet *updatedFilteredIndexes;	// G=0x68069; 
- (BOOL)shouldIncludeObjectAtIndex:(unsigned)index;	// 0x68131
// declared property setter: - (void)setFilteredIndexes:(id)indexes;	// 0x680ed
// declared property getter: - (id)filteredIndexes;	// 0x680dd
// declared property getter: - (id)indexMapper;	// 0x68089
// declared property getter: - (id)updatedFilteredIndexes;	// 0x68069
@end
