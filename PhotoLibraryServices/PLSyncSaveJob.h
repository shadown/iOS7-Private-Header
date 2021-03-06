/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */





@class CLLocation, NSArray, NSDate, NSNumber, NSSet, NSString, NSURL;



@interface PLSyncSaveJob : NSObject

{

    _Bool isVideo;

    _Bool isSyncComplete;

    _Bool _cleanupSyncState;

    NSArray *facesInfo;

    NSURL *originalAssetURL;

    NSString *uuid;

    NSDate *creationDate;

    NSDate *modificationDate;

    NSSet *albumURIs;

    CLLocation *location;

    NSNumber *sortToken;

    NSString *originalFileName;

    NSDate *_cleanupBeforeDate;

    id _finishedBlock;

}



@property(copy, nonatomic) NSSet *albumURIs; // @synthesize albumURIs;

@property(copy, nonatomic) NSDate *cleanupBeforeDate; // @synthesize cleanupBeforeDate=_cleanupBeforeDate;

@property(nonatomic) _Bool cleanupSyncState; // @synthesize cleanupSyncState=_cleanupSyncState;

@property(copy, nonatomic) NSDate *creationDate; // @synthesize creationDate;

- (void)dealloc;

- (id)description;

@property(retain, nonatomic) NSArray *facesInfo; // @synthesize facesInfo;

@property(copy, nonatomic) id finishedBlock; // @synthesize finishedBlock=_finishedBlock;

- (id)initFromSerializedData:(id)arg1;

@property(nonatomic) _Bool isSyncComplete; // @synthesize isSyncComplete;

@property(nonatomic) _Bool isVideo; // @synthesize isVideo;

@property(copy, nonatomic) CLLocation *location; // @synthesize location;

@property(copy, nonatomic) NSDate *modificationDate; // @synthesize modificationDate;

@property(retain, nonatomic) NSURL *originalAssetURL; // @synthesize originalAssetURL;

@property(retain, nonatomic) NSString *originalFileName; // @synthesize originalFileName;

- (void)processFacesWithBlock:(id)arg1;

- (id)serializedData;

@property(retain, nonatomic) NSNumber *sortToken; // @synthesize sortToken;

@property(copy, nonatomic) NSString *uuid; // @synthesize uuid;



@end


