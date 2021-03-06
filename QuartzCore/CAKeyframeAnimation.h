/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "CAPropertyAnimation.h"


@class NSArray, NSString;



@interface CAKeyframeAnimation : CAPropertyAnimation

{

}



- (void)CA_prepareRenderValue;

- (struct Animation *)_copyRenderAnimationForLayer:(id)arg1;

- (_Bool)_setCARenderAnimation:(struct Animation *)arg1 layer:(id)arg2;

- (void)applyForTime:(double)arg1 presentationObject:(id)arg2 modelObject:(id)arg3;

@property(copy) NSArray *biasValues;

@property(copy) NSString *calculationMode;

@property(copy) NSArray *continuityValues;

@property(copy) NSArray *keyTimes;

@property struct CGPath *path;

@property(copy) NSString *rotationMode;

@property(copy) NSArray *tensionValues;

@property(copy) NSArray *timingFunctions;

@property(copy) NSArray *values;



@end


