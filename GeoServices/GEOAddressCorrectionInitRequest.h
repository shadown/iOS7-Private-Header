/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "PBRequest.h"



#import "NSCopying.h"



@class NSString;



@interface GEOAddressCorrectionInitRequest : PBRequest <NSCopying>

{

    NSString *_personID;

    NSString *_token;

}



- (void)copyTo:(id)arg1;

- (id)copyWithZone:(struct _NSZone *)arg1;

- (void)dealloc;

- (id)description;

- (id)dictionaryRepresentation;

@property(readonly, nonatomic) _Bool hasPersonID;

@property(readonly, nonatomic) _Bool hasToken;

- (unsigned long long)hash;

- (_Bool)isEqual:(id)arg1;

@property(retain, nonatomic) NSString *personID; // @synthesize personID=_personID;

- (_Bool)readFrom:(id)arg1;

- (unsigned int)requestTypeCode;

- (Class)responseClass;

@property(retain, nonatomic) NSString *token; // @synthesize token=_token;

- (void)writeTo:(id)arg1;



@end


