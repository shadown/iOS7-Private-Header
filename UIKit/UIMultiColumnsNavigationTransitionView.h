/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "UIView.h"


#import "NSCoding.h"



@class NSArray, UIColor;



@interface UIMultiColumnsNavigationTransitionView : UIView <NSCoding>

{

    id _delegate;

    long long _transition;

    UIView *_firstResponderViewToRestore;

    unsigned int _isTransitioning:1;

    double _columnWidth;

    int _columnCount;

    NSArray *_fromViews;

    NSArray *_toViews;

    NSArray *_viewsToRemove;

    NSArray *_viewsToAdd;

    NSArray *_displayedViews;

    struct __CFDictionary *_dividerViews;

    struct __CFDictionary *_containerViews;

    UIColor *_dividersColor;

    double _dividersWidth;

}



+ (double)defaultDurationForTransition:(long long)arg1;

- (id)_containerViewForView:(id)arg1;

- (id)_dividerViewForView:(id)arg1;

- (_Bool)_isTransitioningFromView:(id)arg1;

- (void)_navigationTransitionDidStop;

- (void)_removeContainerViewForView:(id)arg1;

- (void)_removeDividerViewForView:(id)arg1;

@property(nonatomic) int columnCount; // @synthesize columnCount=_columnCount;

@property(nonatomic) double columnWidth; // @synthesize columnWidth=_columnWidth;

- (void)dealloc;

@property(nonatomic) id delegate; // @synthesize delegate=_delegate;

- (void)encodeWithCoder:(id)arg1;

- (id)initWithCoder:(id)arg1;

- (id)initWithFrame:(struct CGRect)arg1;

- (_Bool)isTransitioning;

- (_Bool)transition:(long long)arg1 fromViews:(id)arg2 toViews:(id)arg3;

- (_Bool)transition:(long long)arg1 toViews:(id)arg2;



@end


