/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: /System/Library/PrivateFrameworks/iPodUI.framework/iPodUI
 */

#import <iPodUI/IUVideoPartListViewController.h>


@interface IUVideoChaptersViewController : IUVideoPartListViewController {
	unsigned _selectedChapter;	// 232 = 0xe8
}
- (void)_playChapter;	// 0x7305d
- (id)tableView:(id)view cellForRowAtIndexPath:(id)indexPath;	// 0x72fe9
- (int)tableView:(id)view numberOfRowsInSection:(int)section;	// 0x72fbd
- (void)startPlaybackFromIndexPath:(id)indexPath;	// 0x72f81
- (id)mediaItemAtIndexPath:(id)indexPath;	// 0x72f71
- (id)indexPathForMediaItem:(id)mediaItem atTime:(double)time;	// 0x72e01
- (id)indexPathForRowOfContentPosition;	// 0x72db5
- (Class)tableViewCellClass;	// 0x72d99
- (BOOL)shouldDisableWhileDownloading;	// 0x72d95
- (id)title;	// 0x72d3d
@end
