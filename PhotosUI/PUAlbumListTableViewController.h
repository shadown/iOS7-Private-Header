/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "PUAbstractAlbumListViewController.h"


#import "PUAlbumListTableViewCellDelegate.h"

#import "UITableViewDataSource.h"

#import "UITableViewDelegate.h"



@class UITableView;



@interface PUAlbumListTableViewController : PUAbstractAlbumListViewController <PUAlbumListTableViewCellDelegate, UITableViewDataSource, UITableViewDelegate>

{

    UITableView *__mainTableView;

    long long __ignoredReorderNotificationCount;

}



- (void).cxx_destruct;

@property(nonatomic, setter=_setIgnoredReorderNotificationCount:) long long _ignoredReorderNotificationCount; // @synthesize _ignoredReorderNotificationCount=__ignoredReorderNotificationCount;

@property(retain, nonatomic, setter=_setMainTableView:) UITableView *_mainTableView; // @synthesize _mainTableView=__mainTableView;

- (void)albumListTableViewCell:(id)arg1 willChangeState:(unsigned long long)arg2;

- (id)backgroundColorForTableView;

- (void)dealloc;

- (void)deselectSelectedItemAnimated:(_Bool)arg1;

- (id)indexPathForAlbumListCellContentView:(id)arg1;

- (id)indexPathForItemAtPoint:(struct CGPoint)arg1;

- (id)indexPathsForVisibleItems;

- (id)mainScrollView;

- (id)newGridViewControllerForStandInAlbum:(struct NSObject *)arg1;

- (long long)numberOfSectionsInTableView:(id)arg1;

- (void)performBatchUpdatesWithDeletedIndexPaths:(id)arg1 insertedIndexPaths:(id)arg2 changedIndexPaths:(id)arg3 movedFromIndexPaths:(id)arg4 movedToIndexPaths:(id)arg5 completionHandler:(id)arg6;

- (void)reloadContentView;

- (void)scrollToItemAtIndexPath:(id)arg1 centered:(_Bool)arg2 animated:(_Bool)arg3;

- (void)selectItemAtIndexPath:(id)arg1 animated:(_Bool)arg2;

- (void)setEditing:(_Bool)arg1 animated:(_Bool)arg2;

- (void)setSyncProgressVisible:(_Bool)arg1;

- (_Bool)shouldBeginRetitlingAlbumAtIndexPath:(id)arg1;

- (_Bool)tableView:(id)arg1 canEditRowAtIndexPath:(id)arg2;

- (_Bool)tableView:(id)arg1 canMoveRowAtIndexPath:(id)arg2;

- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;

- (void)tableView:(id)arg1 commitEditingStyle:(long long)arg2 forRowAtIndexPath:(id)arg3;

- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;

- (long long)tableView:(id)arg1 editingStyleForRowAtIndexPath:(id)arg2;

- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;

- (void)tableView:(id)arg1 moveRowAtIndexPath:(id)arg2 toIndexPath:(id)arg3;

- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;

- (_Bool)tableView:(id)arg1 shouldHighlightRowAtIndexPath:(id)arg2;

- (id)tableView:(id)arg1 targetIndexPathForMoveFromRowAtIndexPath:(id)arg2 toProposedIndexPath:(id)arg3;

- (id)tableView:(id)arg1 titleForDeleteConfirmationButtonForRowAtIndexPath:(id)arg2;

- (id)tableView:(id)arg1 viewForFooterInSection:(long long)arg2;

- (long long)tableViewStyle;

- (void)viewDidLoad;

- (id)visibleAlbumListCellContentViewAtIndexPath:(id)arg1;

- (struct PUAlbumListCellContentView *)visiblePlaceholderListCellContentViewAtIndexPath:(id)arg1;

- (void)visiblyInsertItemAtIndexPath:(id)arg1 completionHandler:(id)arg2;



@end


