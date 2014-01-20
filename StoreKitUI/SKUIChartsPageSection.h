/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "SKUIStorePageSection.h"


#import "SKUIChartsViewControllerDelegate.h"

#import "SKUIProductPageOverlayDelegate.h"



@class SKUIChartsComponent, SKUIIPadChartsViewController, SKUIIPhoneChartsViewController, SKUIProductPageOverlayController;



@interface SKUIChartsPageSection : SKUIStorePageSection <SKUIChartsViewControllerDelegate, SKUIProductPageOverlayDelegate>

{

    SKUIIPadChartsViewController *_ipadViewController;

    SKUIIPhoneChartsViewController *_iphoneViewController;

    SKUIProductPageOverlayController *_overlayController;

    long long _selectedChartIndex;

    long long _selectedItemIndex;

}



- (void).cxx_destruct;

- (id)_chartsViewController;

- (void)_recordClickEvent:(id)arg1 withItem:(id)arg2 itemIndex:(long long)arg3 chartIndex:(long long)arg4;

- (void)addImpressionsForIndexPath:(id)arg1 toSession:(id)arg2;

- (id)cellForIndexPath:(id)arg1;

- (struct CGSize)cellSizeForIndexPath:(id)arg1;

- (id)chartsViewController:(id)arg1 didConfirmItemOfferForItem:(id)arg2 atIndex:(long long)arg3 chartIndex:(long long)arg4;

- (void)chartsViewController:(id)arg1 didSelectItem:(id)arg2 atIndex:(long long)arg3 chartIndex:(long long)arg4;

- (void)chartsViewController:(id)arg1 willDisplayItem:(id)arg2 atIndex:(long long)arg3 chartIndex:(long long)arg4;

- (_Bool)collectionViewShouldHighlightItemAtIndexPath:(id)arg1;

- (_Bool)collectionViewShouldSelectItemAtIndexPath:(id)arg1;

- (void)dealloc;

- (_Bool)fitsToHeight;

- (id)initWithPageComponent:(id)arg1;

- (long long)numberOfCells;

- (void)prefetchResourcesWithReason:(long long)arg1;

- (id)productPageOverlay:(id)arg1 flipSourceViewToDismissItem:(id)arg2;

- (id)productPageOverlay:(id)arg1 flipSourceViewToPresentItem:(id)arg2;

- (void)productPageOverlayDidDismiss:(id)arg1;

- (void)willAppearInContext:(id)arg1;



// Remaining properties

@property(readonly, nonatomic) SKUIChartsComponent *pageComponent; // @dynamic pageComponent;



@end

