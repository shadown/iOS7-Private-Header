/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "CALayer.h"



__attribute__((visibility("hidden")))

@interface MKLayer : CALayer

{

    struct CGRect _hitBounds;

    struct CGPoint _hitOffset;

    struct CGPoint _hitOutset;

}



- (_Bool)containsPoint:(struct CGPoint)arg1;

@property(readonly, nonatomic) struct CGRect hitBounds; // @synthesize hitBounds=_hitBounds;

@property(nonatomic) struct CGPoint hitOffset; // @synthesize hitOffset=_hitOffset;

@property(nonatomic) struct CGPoint hitOutset; // @synthesize hitOutset=_hitOutset;

- (void)setBounds:(struct CGRect)arg1;



@end

