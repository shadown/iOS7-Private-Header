/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "PBCodable.h"



#import "NSCopying.h"



@class GEONameInfo;



@interface GEORouteName : PBCodable <NSCopying>

{

    int _lastZilchStitchedIndex;

    GEONameInfo *_nameInfo;

    struct {

        unsigned int lastZilchStitchedIndex:1;

    } _has;

}



- (void)copyTo:(id)arg1;

- (id)copyWithZone:(struct _NSZone *)arg1;

- (void)dealloc;

- (id)description;

- (id)dictionaryRepresentation;

@property(nonatomic) _Bool hasLastZilchStitchedIndex;

@property(readonly, nonatomic) _Bool hasNameInfo;

- (unsigned long long)hash;

- (_Bool)isEqual:(id)arg1;

@property(nonatomic) int lastZilchStitchedIndex; // @synthesize lastZilchStitchedIndex=_lastZilchStitchedIndex;

@property(retain, nonatomic) GEONameInfo *nameInfo; // @synthesize nameInfo=_nameInfo;

- (_Bool)readFrom:(id)arg1;

- (void)writeTo:(id)arg1;



@end


