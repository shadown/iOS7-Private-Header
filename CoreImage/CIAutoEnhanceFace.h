/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */





__attribute__((visibility("hidden")))

@interface CIAutoEnhanceFace : NSObject

{

    int size;

    int centerX;

    int centerY;

    double I;

    double Q;

}



@property(readonly) double I; // @synthesize I;

@property(readonly) double Q; // @synthesize Q;

@property(readonly) int centerX; // @synthesize centerX;

@property(readonly) int centerY; // @synthesize centerY;

- (id)description;

- (struct CGRect)faceRect;

- (id)initWithBounds:(struct CGRect)arg1 andImage:(id)arg2 usingContext:(id)arg3;

@property(readonly) int size; // @synthesize size;



@end

