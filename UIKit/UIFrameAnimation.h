/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "UIAnimation.h"


@interface UIFrameAnimation : UIAnimation

{

    struct CGRect _startFrame;

    struct CGRect _endFrame;

    int _fieldsToChange;

}



- (struct CGRect)endFrame;

- (id)initWithTarget:(id)arg1;

- (void)setEndFrame:(struct CGRect)arg1;

- (void)setProgress:(float)arg1;

- (void)setSignificantRectFields:(int)arg1;

- (void)setStartFrame:(struct CGRect)arg1;



@end


