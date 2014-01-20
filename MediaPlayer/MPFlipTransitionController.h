/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "MPTransitionController.h"


@class UIView;



@interface MPFlipTransitionController : MPTransitionController

{

    UIView *_fromView;

    struct CGRect _toFrame;

    double _topMargin;

}



- (void).cxx_destruct;

- (id)_subtypeForTransitionType:(unsigned long long)arg1;

- (void)animationDidStop:(id)arg1 finished:(_Bool)arg2;

@property(retain, nonatomic) UIView *fromView; // @synthesize fromView=_fromView;

- (id)init;

- (void)performTransition:(unsigned long long)arg1;

@property(nonatomic) struct CGRect toFrame; // @synthesize toFrame=_toFrame;

@property(nonatomic) double topMargin; // @synthesize topMargin=_topMargin;



@end

