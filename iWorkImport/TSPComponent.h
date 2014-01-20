/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */





#import "NSCopying.h"

#import "NSDiscardableContent.h"



@class NSHashTable, NSMutableSet, NSObject<OS_dispatch_queue>, NSString, TSPComponentExternalReferenceMap, TSPObject;



__attribute__((visibility("hidden")))

@interface TSPComponent : NSObject <NSCopying, NSDiscardableContent>

{

    int _accessCount;

    id <TSPComponentDelegate> _delegate;

    NSObject<OS_dispatch_queue> *_accessQueue;

    long long _identifier;

    NSString *_preferredLocator;

    NSString *_locator;

    unsigned long long _readVersion;

    unsigned long long _writeVersion;

    TSPObject *_strongRootObject;

    TSPObject *_weakRootObject;

    NSHashTable *_writtenObjects;

    TSPComponentExternalReferenceMap *_externalReferenceMap;

    NSMutableSet *_dataReferences;

    struct {

        unsigned int usesDelayedArchiving:1;

        unsigned int allowsDuplicatesOutsideOfDocumentPackage:1;

        unsigned int dirtiesDocumentPackage:1;

        unsigned int modified:1;

        unsigned int persisted:1;

        unsigned int isStoredOutsideObjectArchive:1;

        unsigned int packageIdentifier:2;

    } _flags;

    TSPComponent *_originalDocumentComponent;

}



- (id).cxx_construct;

- (void).cxx_destruct;

- (_Bool)addExternalReferenceToObjectOrLazyReference:(id)arg1 isWeak:(_Bool)arg2 externalReferenceMap:(id)arg3 delegate:(id)arg4;

- (_Bool)allowsDuplicatesOutsideOfDocumentPackageQueryingRootObject:(_Bool)arg1;

- (_Bool)beginContentAccess;

- (id)copyWithZone:(struct _NSZone *)arg1;

- (void)didReadObjects:(id)arg1;

- (_Bool)dirtiesDocumentPackageQueryingRootObject:(_Bool)arg1;

- (void)discardContentIfPossible;

- (void)endContentAccess;

- (void)enumerateDataReferences:(id)arg1;

- (void)enumerateExternalReferences:(id)arg1;

- (struct ComponentExternalReferenceInfo)externalReferenceInfoForObjectIdentifier:(long long)arg1;

@property(readonly, nonatomic) long long identifier; // @synthesize identifier=_identifier;

- (id)init;

- (id)initWithDelegate:(id)arg1 identifier:(long long)arg2 preferredLocator:(id)arg3 packageIdentifier:(unsigned char)arg4 isStoredOutsideObjectArchive:(_Bool)arg5 allowsDuplicatesOutsideOfDocumentPackage:(_Bool)arg6 dirtiesDocumentPackage:(_Bool)arg7;

- (id)initWithDelegate:(id)arg1 identifier:(long long)arg2 preferredLocator:(id)arg3 packageIdentifier:(unsigned char)arg4 isStoredOutsideObjectArchive:(_Bool)arg5 allowsDuplicatesOutsideOfDocumentPackage:(_Bool)arg6 dirtiesDocumentPackage:(_Bool)arg7 originalDocumentComponent:(id)arg8;

- (id)initWithDelegate:(id)arg1 message:(const struct ComponentInfo *)arg2 packageIdentifier:(unsigned char)arg3 originalDocumentComponent:(id)arg4;

- (id)initWithDelegate:(id)arg1 rootObject:(id)arg2;

- (_Bool)isCachingEnabled;

- (_Bool)isContentDiscarded;

@property(readonly, nonatomic) _Bool isStoredOutsideObjectArchive;

@property(readonly, nonatomic) _Bool isTransientComponent;

@property(readonly, nonatomic) NSString *locator;

@property(readonly) _Bool modified;

@property(readonly) _Bool needsArchiving;

- (_Bool)needsArchivingImpl;

- (id)newExternalReferenceMapWithStrongReferences:(id)arg1 weakReferences:(id)arg2 delegate:(id)arg3;

- (id)newUpdatedExternalReferenceMapUsingDelegate:(id)arg1;

@property(readonly, nonatomic) TSPComponent *originalDocumentComponent; // @synthesize originalDocumentComponent=_originalDocumentComponent;

@property(readonly) unsigned char packageIdentifier;

@property(readonly) _Bool persisted;

@property(readonly, nonatomic) NSString *preferredLocator; // @synthesize preferredLocator=_preferredLocator;

@property(readonly, nonatomic) unsigned long long readVersion; // @synthesize readVersion=_readVersion;

@property(retain) TSPObject *rootObject;

- (void)saveToMessage:(struct ComponentInfo *)arg1 writtenComponentInfo:(const struct WrittenComponentInfo *)arg2;

- (void)setArchivedObjectsImpl:(id)arg1;

- (void)setLocator:(id)arg1;

- (void)setModified:(_Bool)arg1 forObject:(id)arg2;

- (void)setModified:(_Bool)arg1 forObject:(id)arg2 isDocumentUpgrade:(_Bool)arg3;

- (void)setModifiedImpl:(_Bool)arg1 forObject:(id)arg2;

- (void)setPackageIdentifier:(unsigned char)arg1 preferredLocator:(id)arg2 locator:(id)arg3 isStoredOutsideObjectArchive:(_Bool)arg4 rootObjectOrNil:(id)arg5 archivedObjects:(id)arg6 externalReferenceMap:(id)arg7 dataReferences:(id)arg8 readVersion:(unsigned long long)arg9 writeVersion:(unsigned long long)arg10 wasCopied:(_Bool)arg11 wasModifiedDuringWrite:(_Bool)arg12;

- (_Bool)shouldForceCaching;

- (_Bool)shouldKeepStrongObjectImpl;

- (void)updateComponentPropertiesUsingRootObjectOrNil:(id)arg1;

- (void)willDiscardComponent;

@property(readonly, nonatomic) unsigned long long writeVersion; // @synthesize writeVersion=_writeVersion;



@end

