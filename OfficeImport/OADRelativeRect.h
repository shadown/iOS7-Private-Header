/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */





#import "NSCopying.h"



__attribute__((visibility("hidden")))

@interface OADRelativeRect : NSObject <NSCopying>

{

    float mLeft;

    float mTop;

    float mRight;

    float mBottom;

}



- (float)bottom;

- (id)copyWithZone:(struct _NSZone *)arg1;

- (unsigned long long)hash;

- (id)init;

- (id)initWithLeft:(float)arg1 top:(float)arg2 right:(float)arg3 bottom:(float)arg4;

- (_Bool)isEqual:(id)arg1;

- (float)left;

- (float)right;

- (void)setBottom:(float)arg1;

- (void)setLeft:(float)arg1;

- (void)setRight:(float)arg1;

- (void)setTop:(float)arg1;

- (float)top;



@end


