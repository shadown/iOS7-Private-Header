/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "NSTextCheckingResult.h"


@class NSDictionary;



@interface NSTransitInformationCheckingResult : NSTextCheckingResult

{

    struct _NSRange _range;

    NSDictionary *_components;

    id _underlyingResult;

}



- (_Bool)_adjustRangesWithOffset:(long long)arg1;

- (id)components;

- (void)dealloc;

- (void)encodeWithCoder:(id)arg1;

- (id)initWithCoder:(id)arg1;

- (id)initWithRange:(struct _NSRange)arg1 components:(id)arg2;

- (id)initWithRange:(struct _NSRange)arg1 components:(id)arg2 underlyingResult:(void *)arg3;

- (struct _NSRange)range;

- (id)resultByAdjustingRangesWithOffset:(long long)arg1;

- (unsigned long long)resultType;

@property(readonly) void *underlyingResult;



@end

