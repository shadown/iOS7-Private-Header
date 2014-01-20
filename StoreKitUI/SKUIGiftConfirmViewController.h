/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "SKUIGiftStepViewController.h"


@class SKUIFocusedTouchGestureRecognizer, SKUIGiftConfirmView, SKUIGiftPurchaseRequest;



@interface SKUIGiftConfirmViewController : SKUIGiftStepViewController

{

    SKUIGiftConfirmView *_confirmView;

    _Bool _isShowingConfirmation;

    SKUIGiftPurchaseRequest *_purchaseRequest;

    SKUIFocusedTouchGestureRecognizer *_touchRecognizer;

}



- (void).cxx_destruct;

- (void)_buyButtonAction:(id)arg1;

- (void)_cancelBuyConfirmation:(id)arg1;

- (void)_finishPurchaseWithResult:(_Bool)arg1 errorMessage:(id)arg2;

- (void)_purchaseGift;

- (void)_removeCancelGestureRecognizer;

- (void)_setShowingConfirmation:(_Bool)arg1 animated:(_Bool)arg2;

- (void)_showSuccessPage;

- (void)_termsButtonAction:(id)arg1;

- (void)dealloc;

- (id)initWithGift:(id)arg1 configuration:(id)arg2;

- (void)loadView;



@end

