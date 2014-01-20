/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */





#import "SKUIArtworkRequestDelegate.h"

#import "SKUIItemStateCenterObserver.h"

#import "SKUIResourceLoaderDelegate.h"



@class NSArray, NSMutableDictionary, SKUIClientContext, SKUIIconDataConsumer, SKUIItemArtworkContext, SKUIResourceLoader, SKUIScreenshotDataConsumer, UIImage;



@interface SKUIItemCollectionController : NSObject <SKUIArtworkRequestDelegate, SKUIItemStateCenterObserver, SKUIResourceLoaderDelegate>

{

    SKUIItemArtworkContext *_artworkContext;

    SKUIResourceLoader *_artworkLoader;

    SKUIClientContext *_clientContext;

    id <SKUIItemCollectionDelegate> _delegate;

    _Bool _delegateProvidesScreenshots;

    NSMutableDictionary *_iconArtworkRequestIDs;

    SKUIIconDataConsumer *_iconDataConsumer;

    NSArray *_items;

    SKUIScreenshotDataConsumer *_landscapeScreenshotDataConsumer;

    UIImage *_landscapeScreenshotPlaceholderImage;

    long long _numberOfItemsPerPage;

    double _numberOfPagesToCacheAhead;

    SKUIScreenshotDataConsumer *_portraitScreenshotDataConsumer;

    UIImage *_portraitScreenshotPlaceholderImage;

    UIImage *_placeholderImage;

    NSMutableDictionary *_screenshotArtworkRequestIDs;

}



- (void).cxx_destruct;

- (id)_artworkLoader;

- (void)_enumerateVisibleCellLayoutsWithBlock:(id)arg1;

- (id)_iconArtworkRequestWithItem:(id)arg1;

- (id)_initSKUIItemCollectionController;

- (_Bool)_loadArtworkForItem:(id)arg1 reason:(long long)arg2;

- (void)_memoryWarningNotification:(id)arg1;

- (id)_placeholderImageForItem:(id)arg1;

- (id)_placeholderImageForScreenshot:(id)arg1;

- (void)_reloadForItemStateChange:(id)arg1;

- (void)_reloadForRestrictionsChange;

- (void)_reloadScreenshotForCellLayout:(id)arg1 item:(id)arg2 isRestricted:(_Bool)arg3;

- (id)_screenshotArtworkRequestWithItem:(id)arg1;

- (id)_screenshotForItem:(id)arg1;

- (struct _NSRange)_visibleItemRange;

@property(retain, nonatomic) SKUIItemArtworkContext *artworkContext; // @synthesize artworkContext=_artworkContext;

@property(retain, nonatomic) SKUIResourceLoader *artworkLoader; // @synthesize artworkLoader=_artworkLoader;

- (void)artworkLoaderDidIdle:(id)arg1;

- (void)artworkRequest:(id)arg1 didLoadImage:(id)arg2;

- (void)cancelArtworkLoadForItemIndex:(long long)arg1;

- (void)configureCellLayout:(id)arg1 forIndex:(long long)arg2;

- (void)dealloc;

@property(nonatomic) __weak id <SKUIItemCollectionDelegate> delegate; // @synthesize delegate=_delegate;

@property(retain, nonatomic) SKUIIconDataConsumer *iconDataConsumer; // @synthesize iconDataConsumer=_iconDataConsumer;

- (id)init;

- (id)initWithClientContext:(id)arg1;

- (void)itemStateCenter:(id)arg1 itemStatesChanged:(id)arg2;

- (void)itemStateCenterRestrictionsChanged:(id)arg1;

@property(copy, nonatomic) NSArray *items; // @synthesize items=_items;

@property(retain, nonatomic) SKUIScreenshotDataConsumer *landscapeScreenshotDataConsumer; // @synthesize landscapeScreenshotDataConsumer=_landscapeScreenshotDataConsumer;

- (void)loadNextPageOfArtworkWithReason:(long long)arg1;

@property(nonatomic) long long numberOfItemsPerPage; // @synthesize numberOfItemsPerPage=_numberOfItemsPerPage;

@property(nonatomic) double numberOfPagesToCacheAhead; // @synthesize numberOfPagesToCacheAhead=_numberOfPagesToCacheAhead;

- (id)performActionForItemAtIndex:(long long)arg1;

@property(retain, nonatomic) SKUIScreenshotDataConsumer *portraitScreenshotDataConsumer; // @synthesize portraitScreenshotDataConsumer=_portraitScreenshotDataConsumer;

- (void)precacheNextPageArtworkForOffset:(struct CGPoint)arg1 direction:(double)arg2;

- (void)removeAllCachedResources;

- (void)scrollViewDidEndDecelerating:(id)arg1;

- (void)scrollViewWillBeginDragging:(id)arg1;

- (void)scrollViewWillEndDragging:(id)arg1 withVelocity:(struct CGPoint)arg2 targetContentOffset:(inout struct CGPoint *)arg3;



@end

