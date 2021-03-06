/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */





@class NSManagedObjectContext, NSManagedObjectID;



@interface NSManagedObject : NSObject

{

    int _cd_rc;

    unsigned long long _cd_stateFlags;

    id _cd_rawData;

    id _cd_entity;

    NSManagedObjectContext *_cd_managedObjectContext;

    NSManagedObjectID *_cd_objectID;

    unsigned long long _cd_extraFlags;

    id _cd_observationInfo;

    id *_cd_snapshots;

    unsigned long long _cd_lockingInfo;

    id _cd_queueReference;

}



+ (CDStruct_333eeaad *)_PFMOClassFactoryData;

+ (id)_PFPlaceHolderSingleton;

+ (id)_PFPlaceHolderSingleton_core;

+ (void)_entityDeallocated;

+ (_Bool)_hasOverriddenAwake;

+ (void)_initializeAccessorStubs;

+ (void)_initializePrimitiveAccessorStubs;

+ (_Bool)_isGeneratedClass;

+ (_Bool)_isGeneratedClass_1;

+ (void)_release_1;

+ (id)_retain_1;

+ (char *)_transientPropertiesChangesMask__;

+ (_Bool)_useFastValidationMethod;

+ (id)alloc;

+ (unsigned int)allocBatch:(id *)arg1 withEntity:(id)arg2 count:(unsigned int)arg3;

+ (id)allocWithEntity:(id)arg1;

+ (id)allocWithZone:(struct _NSZone *)arg1;

+ (id)allocWithZone_10_4:(struct _NSZone *)arg1;

+ (id)alloc_10_4;

+ (_Bool)automaticallyNotifiesObserversForKey:(id)arg1;

+ (id)batchAllocateWithEntity:(id)arg1 insertIntoManagedObjectContext:(id)arg2 count:(unsigned int)arg3;

+ (Class)classForEntity:(id)arg1;

+ (_Bool)contextShouldIgnoreUnmodeledPropertyChanges;

+ (void)initialize;

+ (void)release;

+ (_Bool)resolveClassMethod:(SEL)arg1;

+ (_Bool)resolveInstanceMethod:(SEL)arg1;

+ (id)retain;

- (id)_allProperties__;

- (int)_batch_release__;

- (id)_calculateDiffsBetweenOrderedSet:(id)arg1 andOrderedSet:(id)arg2;

- (void)_chainNewError:(id)arg1 toOriginalErrorDoublePointer:(id *)arg2;

- (id)_changedTransientProperties__;

- (id)_changedValuesForCurrentEvent;

- (void)_clearAllChanges__;

- (void)_clearPendingChanges__;

- (void)_clearRawPropertiesWithHint:(struct _NSRange)arg1;

- (void)_clearUnprocessedChanges__;

- (void)_commitPhotoshoperyForRelationshipAtIndex:(unsigned long long)arg1 newValue:(id)arg2;

- (_Bool)_defaultValidation:(id *)arg1 error:(id *)arg2;

- (id)_descriptionValues;

- (void)_didChangeValue:(id)arg1 forRelationship:(id)arg2 named:(id)arg3 withInverse:(id)arg4;

- (void)_excludeObject:(id)arg1 fromPropertyWithKey:(id)arg2 andIndex:(unsigned long long)arg3;

- (id)_faultHandler__;

- (id)_generateErrorDetailForKey:(id)arg1 withValue:(id)arg2;

- (id)_generateErrorWithCode:(int)arg1 andMessage:(id)arg2 forKey:(id)arg3 andValue:(id)arg4 additionalDetail:(id)arg5;

- (id)_genericMutableOrderedSetValueForKey:(id)arg1 withIndex:(long long)arg2 flags:(long long)arg3;

- (id)_genericMutableSetValueForKey:(id)arg1 withIndex:(long long)arg2 flags:(long long)arg3;

- (void)_genericUpdateFromSnapshot:(id)arg1;

- (id)_genericValueForKey:(id)arg1 withIndex:(long long)arg2 flags:(long long)arg3;

- (_Bool)_hasAnyObservers__;

- (_Bool)_hasPendingChanges;

- (_Bool)_hasRetainedStoreResources__;

- (_Bool)_hasUnprocessedChanges__;

- (id)_implicitObservationInfo;

- (void)_includeObject:(id)arg1 intoPropertyWithKey:(id)arg2 andIndex:(unsigned long long)arg3;

- (id)_initWithEntity:(id)arg1 withID:(id)arg2 withHandler:(id)arg3 withContext:(id)arg4;

- (_Bool)_isDeallocating;

- (_Bool)_isKindOfEntity:(id)arg1;

- (_Bool)_isPendingDeletion__;

- (_Bool)_isPendingInsertion__;

- (_Bool)_isPendingUpdate__;

- (_Bool)_isSuppressingChangeNotifications__;

- (_Bool)_isSuppressingKVO__;

- (_Bool)_isUnprocessedDeletion__;

- (_Bool)_isUnprocessedInsertion__;

- (_Bool)_isUnprocessedUpdate__;

- (_Bool)_isValidRelationshipDestination__;

- (id)_lastSnapshot__;

- (void)_maintainInverseRelationship:(id)arg1 forProperty:(id)arg2 forChange:(unsigned long long)arg3 onSet:(id)arg4;

- (void)_maintainInverseRelationship:(id)arg1 forProperty:(id)arg2 oldDestination:(id)arg3 newDestination:(id)arg4;

- (id)_newAllPropertiesWithRelationshipFaultsIntact__;

- (id)_newChangedValuesForRefresh__;

- (id)_newCommittedSnapshotValues;

- (id)_newNestedSaveChangedValuesForParent:(id)arg1;

- (id)_newPersistentPropertiesForConflictRecordFaultsIntact__;

- (id)_newPersistentPropertiesWithRelationshipFaultsIntact__;

- (id)_newPropertiesForRetainedTypes:(unsigned int *)arg1 andCopiedTypes:(unsigned int *)arg2 preserveFaults:(_Bool)arg3;

- (id)_newSetFromSet:(id)arg1 byApplyingDiffs:(id)arg2;

- (id)_newSnapshotForUndo__;

- (void)_nilOutReservedCurrentEventSnapshot__;

- (id)_originalSnapshot__;

- (id)_persistentProperties__;

- (void)_prepropagateDeleteForMerge;

- (void)_propagateDelete;

- (void)_propagateDelete:(unsigned int)arg1;

- (id)_referenceQueue__;

- (id)_reservedCurrentEventSnapshot;

- (void)_setGenericValue:(id)arg1 forKey:(id)arg2 withIndex:(long long)arg3 flags:(long long)arg4;

- (void)_setHasRetainedStoreResources__:(_Bool)arg1;

- (void)_setLastSnapshot__:(id)arg1;

- (void)_setObjectID__:(id)arg1;

- (void)_setOriginalSnapshot__:(id)arg1;

- (void)_setPendingDeletion__:(_Bool)arg1;

- (void)_setPendingInsertion__:(_Bool)arg1;

- (void)_setPendingUpdate__:(_Bool)arg1;

- (void)_setSuppressingChangeNotifications__:(_Bool)arg1;

- (void)_setSuppressingKVO__:(_Bool)arg1;

- (void)_setUnprocessedDeletion__:(_Bool)arg1;

- (void)_setUnprocessedInsertion__:(_Bool)arg1;

- (void)_setUnprocessedUpdate__:(_Bool)arg1;

- (void)_setVersionReference__:(unsigned int)arg1;

- (unsigned int)_stateFlags;

- (id)_substituteEntityAndProperty:(id)arg1 inString:(id)arg2;

- (id)_transientProperties__;

- (_Bool)_tryRetain;

- (void)_updateFromRefreshSnapshot:(id)arg1 includingTransients:(_Bool)arg2;

- (void)_updateFromSnapshot:(id)arg1;

- (void)_updateFromUndoSnapshot:(id)arg1;

- (void)_updateToManyRelationship:(id)arg1 from:(id)arg2 to:(id)arg3 with:(id)arg4;

- (_Bool)_validateForSave:(id *)arg1;

- (_Bool)_validatePropertiesWithError:(id *)arg1;

- (_Bool)_validateValue:(id *)arg1 forProperty:(id)arg2 andKey:(id)arg3 withIndex:(unsigned long long)arg4 error:(id *)arg5;

- (unsigned int)_versionReference__;

- (void)awakeFromFetch;

- (void)awakeFromInsert;

- (void)awakeFromSnapshotEvents:(unsigned long long)arg1;

- (id)changedValues;

- (id)changedValuesForCurrentEvent;

- (id)committedValuesForKeys:(id)arg1;

- (void)dealloc;

- (id)description;

- (id)dictionaryWithValuesForKeys:(id)arg1;

- (void)didAccessValueForKey:(id)arg1;

- (void)didChange:(unsigned long long)arg1 valuesAtIndexes:(id)arg2 forKey:(id)arg3;

- (void)didChangeValueForKey:(id)arg1;

- (void)didChangeValueForKey:(id)arg1 withSetMutation:(unsigned long long)arg2 usingObjects:(id)arg3;

- (void)didFireFault;

- (void)didRefresh:(_Bool)arg1;

- (void)didSave;

- (void)didTurnIntoFault;

- (void)diffOrderedSets:(id)arg1:(id)arg2:(id *)arg3:(id *)arg4:(id *)arg5:(id *)arg6:(id *)arg7;

- (id)entity;

- (unsigned long long)faultingState;

- (void)finalize;

- (_Bool)hasChanges;

- (_Bool)hasFaultForRelationshipNamed:(id)arg1;

- (_Bool)hasPersistentChangedValues;

- (unsigned long long)hash;

- (_Bool)implementsSelector:(SEL)arg1;

- (id)init;

- (id)initWithEntity:(id)arg1 insertIntoManagedObjectContext:(id)arg2;

- (_Bool)isDeleted;

- (_Bool)isEqual:(id)arg1;

- (_Bool)isFault;

- (_Bool)isInserted;

- (_Bool)isUpdated;

- (id)managedObjectContext;

- (void *)methodForSelector:(SEL)arg1;

- (id)methodSignatureForSelector:(SEL)arg1;

- (id)mutableArrayValueForKey:(id)arg1;

- (id)mutableOrderedSetValueForKey:(id)arg1;

- (id)mutableSetValueForKey:(id)arg1;

- (id)objectID;

- (id)observationInfo;

- (void)prepareForDeletion;

- (id)primitiveValueForKey:(id)arg1;

- (oneway void)release;

- (_Bool)respondsToSelector:(SEL)arg1;

- (id)retain;

- (unsigned long long)retainCount;

- (void)setNilValueForKey:(id)arg1;

- (void)setObservationInfo:(id)arg1;

- (void)setPrimitiveValue:(id)arg1 forKey:(id)arg2;

- (void)setValue:(id)arg1 forKey:(id)arg2;

- (void)setValue:(id)arg1 forUndefinedKey:(id)arg2;

- (void)setValuesForKeysWithDictionary:(id)arg1;

- (_Bool)validateForDelete:(id *)arg1;

- (_Bool)validateForInsert:(id *)arg1;

- (_Bool)validateForUpdate:(id *)arg1;

- (_Bool)validateValue:(id *)arg1 forKey:(id)arg2 error:(id *)arg3;

- (id)valueForKey:(id)arg1;

- (id)valueForUndefinedKey:(id)arg1;

- (_Bool)wasForgotten;

- (void)willAccessValueForKey:(id)arg1;

- (void)willChange:(unsigned long long)arg1 valuesAtIndexes:(id)arg2 forKey:(id)arg3;

- (void)willChangeValueForKey:(id)arg1;

- (void)willChangeValueForKey:(id)arg1 withSetMutation:(unsigned long long)arg2 usingObjects:(id)arg3;

- (void)willFireFault;

- (void)willRefresh:(_Bool)arg1;

- (void)willSave;

- (void)willTurnIntoFault;



@end


