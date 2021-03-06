/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */





__attribute__((visibility("hidden")))

@interface _UIMotionEffectEngineLogger : NSObject

{

    long long _motionLevelSamples[8];

    long long _sampleCount;

    long long _updateFreqency;

    double _lastUpdateTimeStamp;

}



- (void)_dumpToAggregated;

- (id)initWithFastUpdateInterval:(double)arg1 slowUpdateInterval:(double)arg2;

- (double)lastRecordedTimestamp;

- (void)recordMotionMagnitude:(double)arg1 atTimestamp:(double)arg2;



@end


