/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */





@class PBCodable;



@interface AWDMetricContainer : NSObject

{

    PBCodable *_metric;

    unsigned int _metricId;

}



- (void)dealloc;

- (id)initWithMetricId:(unsigned int)arg1;

@property(retain, nonatomic) PBCodable *metric; // @synthesize metric=_metric;

@property(readonly, nonatomic) unsigned int metricId; // @synthesize metricId=_metricId;



@end

