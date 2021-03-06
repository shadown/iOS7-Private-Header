/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "UIViewController.h"



#import "SKUIFlowcaseViewDelegate.h"



@class NSArray, NSMutableArray, SKUIFlowcaseView;



@interface SKUIFlowcaseViewController : UIViewController <SKUIFlowcaseViewDelegate>

{

    id <SKUIFlowcaseDelegate> _delegate;

    NSMutableArray *_landscapeImages;

    NSMutableArray *_portraitImages;

    NSArray *_flowcaseItems;

    SKUIFlowcaseView *_flowcaseView;

    NSArray *_views;

}



- (void).cxx_destruct;

- (void)_reloadImages;

- (id)_views;

- (void)dealloc;

@property(nonatomic) __weak id <SKUIFlowcaseDelegate> delegate; // @synthesize delegate=_delegate;

@property(readonly, nonatomic) NSArray *flowcaseItems; // @synthesize flowcaseItems=_flowcaseItems;

- (void)flowcaseView:(id)arg1 didSelectViewAtIndex:(long long)arg2;

- (void)flowcaseViewDidEndDecelerating:(id)arg1;

- (struct CGRect)frameForItemAtIndex:(long long)arg1;

- (id)indexSetForVisibleViews;

- (id)initWithFlowcase:(id)arg1;

- (void)loadView;

- (void)setImage:(id)arg1 forItemAtIndex:(long long)arg2 orientation:(long long)arg3;

- (void)viewDidAppear:(_Bool)arg1;

- (void)viewWillAppear:(_Bool)arg1;

- (void)viewWillDisappear:(_Bool)arg1;

- (void)willAnimateRotationToInterfaceOrientation:(long long)arg1 duration:(double)arg2;

- (void)willRotateToInterfaceOrientation:(long long)arg1 duration:(double)arg2;



@end


