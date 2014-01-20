/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "PBCodable.h"



#import "NSCopying.h"



@interface GEOTimeRange : PBCodable <NSCopying>

{

    unsigned int _from;

    unsigned int _to;

    _Bool _allDay;

    struct {

        unsigned int from:1;

        unsigned int to:1;

        unsigned int allDay:1;

    } _has;

}



@property(nonatomic) _Bool allDay; // @synthesize allDay=_allDay;

- (void)copyTo:(id)arg1;

- (id)copyWithZone:(struct _NSZone *)arg1;

- (void)dealloc;

- (id)description;

- (id)dictionaryRepresentation;

@property(nonatomic) unsigned int from; // @synthesize from=_from;

@property(nonatomic) _Bool hasAllDay;

@property(nonatomic) _Bool hasFrom;

@property(nonatomic) _Bool hasTo;

- (unsigned long long)hash;

- (_Bool)isEqual:(id)arg1;

- (_Bool)readFrom:(id)arg1;

@property(nonatomic) unsigned int to; // @synthesize to=_to;

- (void)writeTo:(id)arg1;



@end

