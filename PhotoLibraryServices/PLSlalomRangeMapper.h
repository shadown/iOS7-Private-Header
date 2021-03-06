/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */





@class NSMutableArray;



@interface PLSlalomRangeMapper : NSObject

{

    NSMutableArray *_originalLengths;

    NSMutableArray *_scaledLengths;

    NSMutableArray *_scaledRegions;

}



- (float)_mapTime:(float)arg1 fromLengths:(id)arg2 toLengths:(id)arg3;

- (void)addNextRange:(float)arg1 scaledLength:(float)arg2;

- (void)dealloc;

- (void)enumerateScaledRegionsUsingBlock:(id)arg1;

- (id)init;

- (void)markScaledRegionWithRate:(float)arg1 rampInStartTime:(float)arg2 rampInEndTime:(float)arg3 rampOutStartTime:(float)arg4 rampOutEndTime:(float)arg5;

- (float)originalTimeForScaledTime:(float)arg1;

- (float)scaledTimeForOriginalTime:(float)arg1;



@end


