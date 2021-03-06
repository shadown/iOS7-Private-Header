/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */





@class NSDictionary, NSMutableDictionary, NSPersistentStore, NSString;



__attribute__((visibility("hidden")))

@interface PFUbiquityPeerRangeCache : NSObject

{

    NSMutableDictionary *_cachedRanges;

    NSMutableDictionary *_allEntityRanges;

    NSMutableDictionary *_translatedGlobalIDs;

    NSString *_localPeerID;

    NSString *_storeName;

    NSPersistentStore *_privateStore;

    _Bool _cachedStorePeerRanges;

}



+ (void)initialize;

+ (long long)integerFromPrimaryKeyString:(id)arg1;

+ (unsigned long long)peerRangeStartForPrimaryKey:(unsigned long long)arg1;

- (_Bool)cachePeerRanges:(id *)arg1;

- (_Bool)cacheSQLCorePeerRange:(id)arg1 error:(id *)arg2;

- (id)cachedRangeForLocalPrimaryKey:(unsigned long long)arg1 ofEntityNamed:(id)arg2;

- (id)cachedRangeForOwningPeerID:(id)arg1 andEntityName:(id)arg2 withPrimaryKey:(unsigned long long)arg3;

- (id)createGlobalObjectIDForManagedObjectID:(id)arg1;

- (id)createMapOfManagedObjectIDsForGlobalIDs:(id)arg1 count:(long long)arg2 error:(id *)arg3;

- (id)createMapOfManagedObjectIDsForStoreSaveSnapshot:(id)arg1 error:(id *)arg2;

- (void)dealloc;

- (id)describeCaches;

- (id)describeCachesVerbose;

- (id)description;

- (id)initWithPrivateStore:(id)arg1 storeName:(id)arg2 andLocalPeerID:(id)arg3;

@property(readonly, nonatomic) NSString *localPeerID; // @synthesize localPeerID=_localPeerID;

- (unsigned long long)localPrimaryKeyForOwningPeerID:(id)arg1 andEntityName:(id)arg2 withPrimaryKey:(unsigned long long)arg3;

@property(readonly, nonatomic) NSPersistentStore *privateStore; // @synthesize privateStore=_privateStore;

- (_Bool)refreshPeerRangeCache:(id *)arg1;

@property(readonly, nonatomic) NSString *storeName; // @synthesize storeName=_storeName;

@property(readonly, nonatomic) NSDictionary *translatedGlobalIDs; // @synthesize translatedGlobalIDs=_translatedGlobalIDs;



@end


