/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "PBCodable.h"



#import "NSCopying.h"



@class GEOMapRegion, NSData, NSMutableArray;



@interface GEOPlaceSearchResponse : PBCodable <NSCopying>

{

    double _turnaroundTime;

    int _localSearchProviderID;

    GEOMapRegion *_mapRegion;

    NSMutableArray *_placeResults;

    NSMutableArray *_searchs;

    int _status;

    int _statusCodeInfo;

    NSMutableArray *_suggestionEntryLists;

    NSData *_suggestionMetadata;

    _Bool _abTestResponse;

    struct {

        unsigned int turnaroundTime:1;

        unsigned int localSearchProviderID:1;

        unsigned int statusCodeInfo:1;

        unsigned int abTestResponse:1;

    } _has;

}



@property(nonatomic) _Bool abTestResponse; // @synthesize abTestResponse=_abTestResponse;

- (void)addPlaceResult:(id)arg1;

- (void)addSearch:(id)arg1;

- (void)addSuggestionEntryLists:(id)arg1;

- (void)clearPlaceResults;

- (void)clearSearchs;

- (void)clearSuggestionEntryLists;

- (void)copyTo:(id)arg1;

- (id)copyWithZone:(struct _NSZone *)arg1;

- (void)dealloc;

- (id)description;

- (id)dictionaryRepresentation;

@property(nonatomic) _Bool hasAbTestResponse;

@property(nonatomic) _Bool hasLocalSearchProviderID;

@property(readonly, nonatomic) _Bool hasMapRegion;

@property(nonatomic) _Bool hasStatusCodeInfo;

@property(readonly, nonatomic) _Bool hasSuggestionMetadata;

@property(nonatomic) _Bool hasTurnaroundTime;

- (unsigned long long)hash;

- (_Bool)isEqual:(id)arg1;

@property(nonatomic) int localSearchProviderID; // @synthesize localSearchProviderID=_localSearchProviderID;

@property(retain, nonatomic) GEOMapRegion *mapRegion; // @synthesize mapRegion=_mapRegion;

- (id)placeResultAtIndex:(unsigned long long)arg1;

@property(retain, nonatomic) NSMutableArray *placeResults; // @synthesize placeResults=_placeResults;

- (unsigned long long)placeResultsCount;

- (_Bool)readFrom:(id)arg1;

- (id)searchAtIndex:(unsigned long long)arg1;

@property(retain, nonatomic) NSMutableArray *searchs; // @synthesize searchs=_searchs;

- (unsigned long long)searchsCount;

@property(nonatomic) int status; // @synthesize status=_status;

@property(nonatomic) int statusCodeInfo; // @synthesize statusCodeInfo=_statusCodeInfo;

@property(retain, nonatomic) NSMutableArray *suggestionEntryLists; // @synthesize suggestionEntryLists=_suggestionEntryLists;

@property(retain, nonatomic) NSData *suggestionMetadata; // @synthesize suggestionMetadata=_suggestionMetadata;

@property(nonatomic) double turnaroundTime; // @synthesize turnaroundTime=_turnaroundTime;

- (id)suggestionEntryListsAtIndex:(unsigned long long)arg1;

- (unsigned long long)suggestionEntryListsCount;

- (void)writeTo:(id)arg1;



@end


