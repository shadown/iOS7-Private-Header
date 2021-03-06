/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "UIView.h"



#import "SKUIMenuViewControllerDelegate.h"

#import "UIPopoverControllerDelegate.h"



@class NSArray, NSString, SKUIMenuViewController, UIButton, UILabel, UIPopoverController;



@interface SKUIPopupMenuHeaderView : UIView <SKUIMenuViewControllerDelegate, UIPopoverControllerDelegate>

{

    id <SKUIPopupMenuDelegate> _delegate;

    UIButton *_menuButton;

    UILabel *_menuLabel;

    NSString *_menuLabelTitle;

    NSArray *_menuItemTitles;

    SKUIMenuViewController *_menuViewController;

    UIPopoverController *_menuPopoverController;

    long long _selectedMenuItemIndex;

    UILabel *_titleLabel;

}



- (void).cxx_destruct;

- (void)_menuButtonAction:(id)arg1;

- (void)_reloadMenuButton;

- (id)_titleLabel;

- (void)dealloc;

@property(nonatomic) __weak id <SKUIPopupMenuDelegate> delegate; // @synthesize delegate=_delegate;

- (id)initWithFrame:(struct CGRect)arg1;

- (void)layoutSubviews;

@property(copy, nonatomic) NSArray *menuItemTitles; // @synthesize menuItemTitles=_menuItemTitles;

@property(copy, nonatomic) NSString *menuLabelTitle; // @synthesize menuLabelTitle=_menuLabelTitle;

- (void)menuViewController:(id)arg1 didSelectItemAtIndex:(long long)arg2;

- (void)popoverControllerDidDismissPopover:(id)arg1;

@property(nonatomic) long long selectedMenuItemIndex; // @synthesize selectedMenuItemIndex=_selectedMenuItemIndex;

- (void)setBackgroundColor:(id)arg1;

- (void)setColoringWithColorScheme:(id)arg1;

@property(copy, nonatomic) NSString *title;

- (struct CGSize)sizeThatFits:(struct CGSize)arg1;



@end


