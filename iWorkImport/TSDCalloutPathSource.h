/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "TSDPathSource.h"


#import "TSDMixing.h"

#import "TSDSmartPathSource.h"



__attribute__((visibility("hidden")))

@interface TSDCalloutPathSource : TSDPathSource <TSDSmartPathSource, TSDMixing>

{

    double mCornerRadius;

    double mTailSize;

    struct CGPoint mTailPosition;

    struct CGSize mNaturalSize;

    _Bool mIsTailAtCenter;

}



+ (id)calloutWithCornerRadius:(double)arg1 tailPosition:(struct CGPoint)arg2 tailSize:(double)arg3 naturalSize:(struct CGSize)arg4;

+ (id)quoteBubbleWithTailPosition:(struct CGPoint)arg1 tailSize:(double)arg2 naturalSize:(struct CGSize)arg3;

- (id)bezierPathWithoutFlips;

- (id)copyWithZone:(struct _NSZone *)arg1;

@property(nonatomic) double cornerRadius;

- (id)description;

- (struct CGPoint)getControlKnobPosition:(unsigned long long)arg1;

- (id)getFeedbackStringForKnob:(unsigned long long)arg1;

- (unsigned long long)hash;

- (id)init;

- (id)initWithArchive:(const struct PathSourceArchive *)arg1;

- (id)initWithCornerRadius:(double)arg1 tailPosition:(struct CGPoint)arg2 tailSize:(double)arg3 naturalSize:(struct CGSize)arg4 tailAtCenter:(_Bool)arg5;

- (id)interiorWrapPath;

- (_Bool)isCircular;

- (_Bool)isEqual:(id)arg1;

- (_Bool)isOval;

- (_Bool)isRectangular;

@property(readonly, nonatomic) _Bool isTailAtCenter;

@property(readonly, nonatomic) double maxCornerRadius;

@property(readonly, nonatomic) double maxTailSize;

- (id)mixedObjectWithFraction:(double)arg1 ofObject:(id)arg2;

- (long long)mixingTypeWithObject:(id)arg1;

- (struct CGSize)naturalSize;

- (struct CGPath *)newFeedbackPathForKnob:(unsigned long long)arg1;

@property(readonly) unsigned long long numberOfControlKnobs;

- (struct CGPoint)p_adjustedCenterForPath:(id)arg1;

- (id)p_basePath;

- (id)p_buildPath;

- (struct CGPoint)p_getControlKnobPointForRoundedRect;

- (void)p_getTailPath:(id)arg1 center:(struct CGPoint *)arg2 tailSize:(double *)arg3 intersections:(struct CGPoint [2])arg4;

- (void)p_setControlKnobPointForRoundedRect:(struct CGPoint)arg1;

- (void)p_setCornerRadius:(double)arg1;

- (void)p_setNaturalSize:(struct CGSize)arg1;

- (void)p_setTailAtCenter:(_Bool)arg1;

- (void)p_setTailPosition:(struct CGPoint)arg1;

- (void)p_setTailSize:(double)arg1;

- (struct CGPoint)p_tailPosition;

- (void)saveToArchive:(struct PathSourceArchive *)arg1;

- (void)scaleToNaturalSize:(struct CGSize)arg1;

- (void)setControlKnobPosition:(unsigned long long)arg1 toPoint:(struct CGPoint)arg2;

- (void)setNaturalSize:(struct CGSize)arg1;

@property(nonatomic) struct CGPoint tailKnobPosition;

@property(nonatomic) double tailSize;

@property(nonatomic) struct CGPoint tailSizeKnobPosition;

@property(readonly, nonatomic) struct CGPoint tailCenter;

- (id)valueForSetSelector:(SEL)arg1;



@end


