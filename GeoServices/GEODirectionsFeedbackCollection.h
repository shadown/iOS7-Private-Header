/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "PBCodable.h"



#import "NSCopying.h"



@class GEOLocation, NSMutableArray;



@interface GEODirectionsFeedbackCollection : PBCodable <NSCopying>

{

    double _endTimeStamp;

    double _startTimeStamp;

    NSMutableArray *_directionsFeedbacks;

    GEOLocation *_routeCancelledLocation;

    struct {

        unsigned int endTimeStamp:1;

        unsigned int startTimeStamp:1;

    } _has;

}



- (void)addDirectionsFeedback:(id)arg1;

- (void)clearDirectionsFeedbacks;

- (void)copyTo:(id)arg1;

- (id)copyWithZone:(struct _NSZone *)arg1;

- (void)dealloc;

- (id)description;

- (id)dictionaryRepresentation;

- (id)directionsFeedbackAtIndex:(unsigned long long)arg1;

@property(retain, nonatomic) NSMutableArray *directionsFeedbacks; // @synthesize directionsFeedbacks=_directionsFeedbacks;

- (unsigned long long)directionsFeedbacksCount;

@property(nonatomic) double endTimeStamp; // @synthesize endTimeStamp=_endTimeStamp;

@property(nonatomic) _Bool hasEndTimeStamp;

@property(readonly, nonatomic) _Bool hasRouteCancelledLocation;

@property(nonatomic) _Bool hasStartTimeStamp;

- (unsigned long long)hash;

- (_Bool)isEqual:(id)arg1;

- (_Bool)readFrom:(id)arg1;

@property(retain, nonatomic) GEOLocation *routeCancelledLocation; // @synthesize routeCancelledLocation=_routeCancelledLocation;

@property(nonatomic) double startTimeStamp; // @synthesize startTimeStamp=_startTimeStamp;

- (void)writeTo:(id)arg1;



@end


