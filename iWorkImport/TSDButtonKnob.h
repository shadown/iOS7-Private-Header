/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "TSDKnob.h"


@class TSUImage;



__attribute__((visibility("hidden")))

@interface TSDButtonKnob : TSDKnob

{

    TSUImage *mImage;

    _Bool mEnabled;

    _Bool mHighlighted;

}



- (void)dealloc;

- (id)initWithImage:(id)arg1 tag:(unsigned long long)arg2 onRep:(id)arg3;

- (id)initWithType:(int)arg1 position:(struct CGPoint)arg2 radius:(double)arg3 tag:(unsigned long long)arg4 onRep:(id)arg5;

@property(nonatomic, getter=isEnabled) _Bool enabled; // @synthesize enabled=mEnabled;

@property(nonatomic, getter=isHighlighted) _Bool highlighted; // @synthesize highlighted=mHighlighted;

- (_Bool)isHitByUnscaledPoint:(struct CGPoint)arg1 andRep:(id)arg2 returningDistance:(double *)arg3;

- (id)knobImage;

- (void)p_updateLayerImage;



@end

