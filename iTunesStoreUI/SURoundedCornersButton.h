/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "SUSubtitledButton.h"


@class UIBezierPath, UIView;



@interface SURoundedCornersButton : SUSubtitledButton

{

    UIBezierPath *_bezierPath;

    UIView *_highlightedBackgroundView;

    UIBezierPath *_shadowPath;

}



- (id)_highlightedBackgroundView;

- (void)dealloc;

- (void)drawRect:(struct CGRect)arg1;

- (id)initWithFrame:(struct CGRect)arg1;

- (void)setFrame:(struct CGRect)arg1;



@end

