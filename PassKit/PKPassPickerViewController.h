/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "UIViewController.h"



#import "UIScrollViewDelegate.h"

#import "WLCardViewDelegate.h"



@class NSArray, NSLayoutConstraint, PKPassLibrary, UINavigationBar, UIPageControl, UIScrollView;



@interface PKPassPickerViewController : UIViewController <UIScrollViewDelegate, WLCardViewDelegate>

{

    PKPassLibrary *_library;

    UINavigationBar *_navigationBar;

    UIScrollView *_passScrollView;

    NSArray *_passViews;

    NSLayoutConstraint *_scrollViewYConstraint;

    UIPageControl *_pageControl;

    long long _oldStatusBarStyle;

    NSArray *_passes;

    id <PKPassPickerViewControllerDelegate> _delegate;

}



+ (_Bool)_preventsAppearanceProxyCustomization;

- (unsigned long long)_displayIndex;

- (void)_handleHideNoDelegate;

- (void)_pageControlChanged;

- (_Bool)_passBacksAreTall;

- (double)_scrollViewYOffsetWithTallPass:(_Bool)arg1;

- (void)_setupPassViews;

- (void)_setupScrollViewYConstraintForTallPass:(_Bool)arg1;

- (void)_updatePageControl;

- (void)cancel;

- (void)dealloc;

@property(nonatomic) id <PKPassPickerViewControllerDelegate> delegate; // @synthesize delegate=_delegate;

- (_Bool)hidesBottomBarWhenPushed;

- (id)init;

- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

- (id)initWithPasses:(id)arg1;

- (long long)modalPresentationStyle;

- (void)passView:(id)arg1 flipButtonPressedForPass:(id)arg2;

- (_Bool)passViewBackGrowsCentered:(id)arg1;

@property(retain, nonatomic) NSArray *passes; // @synthesize passes=_passes;

- (void)scrollViewDidEndDecelerating:(id)arg1;

- (void)scrollViewDidEndScrollingAnimation:(id)arg1;

- (unsigned long long)supportedInterfaceOrientations;

- (void)use;

- (void)viewDidLoad;

- (void)viewWillAppear:(_Bool)arg1;

- (void)viewWillDisappear:(_Bool)arg1;



@end


