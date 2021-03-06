/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */





@class NSArray, NSDictionary, NSString;



@interface FTRegion : NSObject

{

    NSDictionary *_dictionary;

    NSArray *_subRegions;

    FTRegion *_parentRegion;

}



@property(retain) NSDictionary *_dictionary; // @synthesize _dictionary;

- (id)_initWithDictionary:(id)arg1;

@property(retain) FTRegion *_parentRegion; // @synthesize _parentRegion;

- (void)_setParentRegion:(id)arg1;

@property(readonly) NSString *basePhoneNumber;

- (void)dealloc;

- (id)description;

@property(readonly) NSString *isoCode;

@property(readonly) NSString *label;

@property(readonly) FTRegion *parentRegion;

@property(readonly) NSString *regionID;

- (id)regionWithID:(id)arg1;

@property(readonly) NSArray *subRegions; // @synthesize subRegions=_subRegions;



@end


