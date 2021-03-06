/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "UIViewController.h"



#import "SKUIItemCollectionDelegate.h"

#import "UICollectionViewDataSource.h"

#import "UICollectionViewDelegate.h"



@class NSArray, NSMutableArray, NSMutableIndexSet, NSOperationQueue, SKUIClientContext, SKUIIconDataConsumer, SKUIItemArtworkContext, SKUIItemCollectionController, SKUIUber, UICollectionView, UIImage;



@interface SKUIItemGridViewController : UIViewController <SKUIItemCollectionDelegate, UICollectionViewDataSource, UICollectionViewDelegate>

{

    SKUIClientContext *_clientContext;

    UICollectionView *_collectionView;

    id <SKUIItemGridDelegate> _delegate;

    NSMutableIndexSet *_hiddenIconIndexSet;

    SKUIItemCollectionController *_itemCollectionController;

    NSMutableArray *_items;

    struct CGSize _imageBoundingSize;

    NSOperationQueue *_operationQueue;

    UIImage *_placeholderImage;

    double _rowHeight;

    NSMutableIndexSet *_selectedItemIndexSet;

    SKUIUber *_uber;

    SKUIItemArtworkContext *_artworkContext;

}



- (void).cxx_destruct;

- (id)_collectionView;

- (id)_itemCollectionController;

- (long long)_numberOfColumnsForOrientation:(long long)arg1;

@property(retain, nonatomic) SKUIItemArtworkContext *artworkContext; // @synthesize artworkContext=_artworkContext;

@property(retain, nonatomic) SKUIClientContext *clientContext; // @synthesize clientContext=_clientContext;

- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;

- (void)collectionView:(id)arg1 didEndDisplayingCell:(id)arg2 forItemAtIndexPath:(id)arg3;

- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;

- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;

@property(nonatomic) struct CGPoint contentOffset;

- (void)dealloc;

@property(nonatomic) __weak id <SKUIItemGridDelegate> delegate; // @synthesize delegate=_delegate;

@property(retain, nonatomic) SKUIIconDataConsumer *iconDataConsumer;

@property(nonatomic) struct CGSize imageBoundingSize; // @synthesize imageBoundingSize=_imageBoundingSize;

- (id)initWithRowHeight:(double)arg1;

- (id)itemCollectionController:(id)arg1 cellLayoutForItemIndex:(long long)arg2;

- (struct _NSRange)itemCollectionController:(id)arg1 itemPageRangeForOffset:(struct CGPoint)arg2;

- (void)itemCollectionView:(id)arg1 didConfirmItemOfferForCell:(id)arg2;

@property(copy, nonatomic) NSArray *items; // @synthesize items=_items;

- (void)loadNextPageOfArtworkWithReason:(long long)arg1;

- (void)loadView;

@property(retain, nonatomic) NSOperationQueue *operationQueue; // @synthesize operationQueue=_operationQueue;

- (id)popIconImageViewForItemAtIndex:(long long)arg1;

@property(readonly, nonatomic) double rowHeight; // @synthesize rowHeight=_rowHeight;

- (void)scrollViewDidEndDecelerating:(id)arg1;

- (void)scrollViewWillBeginDragging:(id)arg1;

- (void)scrollViewWillEndDragging:(id)arg1 withVelocity:(struct CGPoint)arg2 targetContentOffset:(inout struct CGPoint *)arg3;

- (void)setItemCellClass:(Class)arg1;

@property(retain, nonatomic) SKUIUber *uber; // @synthesize uber=_uber;

- (_Bool)shouldCacheAheadWhenIdleForItemCollectionController:(id)arg1;

- (unsigned long long)supportedInterfaceOrientations;

- (void)unhideIcons;

- (void)viewDidAppear:(_Bool)arg1;

- (void)viewWillAppear:(_Bool)arg1;

- (struct _NSRange)visibleItemRangeForItemCollectionController:(id)arg1;

- (void)willRotateToInterfaceOrientation:(long long)arg1 duration:(double)arg2;



@end


