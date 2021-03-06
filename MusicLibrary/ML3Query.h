/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */





#import "NSCoding.h"



@class ML3AggregateQuery, ML3MusicLibrary, ML3Predicate, NSArray, NSString;



@interface ML3Query : NSObject <NSCoding>

{

    ML3MusicLibrary *_library;

    Class _entityClass;

    ML3Predicate *_predicate;

    NSArray *_orderingTerms;

    NSString *_propertyToCount;

    ML3AggregateQuery *_nonDirectAggregateQuery;

    _Bool _usingSections;

    _Bool _ignoreSystemFilterPredicates;

    _Bool _filtersOnDynamicProperties;

}



- (void).cxx_destruct;

@property(readonly) long long anyEntityPersistentID;

- (unsigned long long)countOfDistinctRowsForColumn:(id)arg1;

@property(readonly) unsigned long long countOfEntities;

- (id)countStatementParameters;

- (_Bool)deleteAllEntitiesFromLibrary;

- (_Bool)deleteAllEntitiesFromLibraryWithDeletionType:(int)arg1;

- (_Bool)deleteAllEntitiesFromLibraryWithDeletionType:(int)arg1 usingConnection:(id)arg2;

- (id)description;

- (void)encodeWithCoder:(id)arg1;

@property(readonly) Class entityClass; // @synthesize entityClass=_entityClass;

- (void)enumeratePersistentIDsAndProperties:(id)arg1 ordered:(_Bool)arg2 cancelBlock:(id)arg3 usingBlock:(void)arg4;

- (void)enumeratePersistentIDsAndProperties:(id)arg1 ordered:(_Bool)arg2 usingBlock:(id)arg3;

- (void)enumeratePersistentIDsAndProperties:(id)arg1 usingBlock:(id)arg2;

- (void)enumeratePersistentIDsUsingBlock:(id)arg1;

- (void)enumerateSectionsUsingBlock:(id)arg1;

- (id)enumerationDatabaseResultForSQL:(id)arg1 onConnection:(id)arg2 withParameters:(id)arg3;

@property(readonly) _Bool filtersOnDynamicProperties; // @synthesize filtersOnDynamicProperties=_filtersOnDynamicProperties;

@property(readonly) _Bool hasEntities;

- (_Bool)hasRowForColumn:(id)arg1;

@property(nonatomic) _Bool ignoreSystemFilterPredicates; // @synthesize ignoreSystemFilterPredicates=_ignoreSystemFilterPredicates;

- (id)initWithCoder:(id)arg1;

- (id)initWithLibrary:(id)arg1 entityClass:(Class)arg2 predicate:(id)arg3 orderingTerms:(id)arg4 usingSections:(_Bool)arg5 nonDirectAggregateQuery:(id)arg6 propertyToCount:(id)arg7;

- (_Bool)isEqual:(id)arg1;

@property(readonly) ML3MusicLibrary *library; // @synthesize library=_library;

- (void)loadNamesFromLibrary:(id)arg1 onConnection:(id)arg2 forPredicate:(id)arg3 loadAllNames:(_Bool)arg4 cancelHandler:(id)arg5;

- (id)lowerBoundParametersForOrderingTerms:(id)arg1 lowerBoundPersistentID:(long long)arg2;

- (id)nameOrderPropertyForProperty:(id)arg1;

@property(readonly) ML3AggregateQuery *nonDirectAggregateQuery; // @synthesize nonDirectAggregateQuery=_nonDirectAggregateQuery;

@property(readonly) NSArray *orderingTerms; // @synthesize orderingTerms=_orderingTerms;

- (id)persistentIDParameters;

@property(readonly) NSString *persistentIDProperty;

@property(readonly) ML3Predicate *predicate; // @synthesize predicate=_predicate;

@property(readonly) ML3Predicate *predicateIncludingSystemwidePredicates;

@property(readonly) NSString *propertyToCount; // @synthesize propertyToCount=_propertyToCount;

@property(readonly) NSString *sectionProperty;

- (id)sections;

- (id)sectionsParameters;

@property(readonly) NSString *selectCountSQL;

@property(readonly) NSString *selectPersistentIDsSQL;

- (id)selectPersistentIDsSQLAndProperties:(id)arg1 ordered:(_Bool)arg2;

- (id)selectPersistentIDsSQLAndProperties:(id)arg1 ordered:(_Bool)arg2 distinct:(_Bool)arg3;

- (id)selectSQLWithColumns:(id)arg1 groupBy:(id)arg2;

- (id)selectSQLWithColumns:(id)arg1 groupBy:(id)arg2 distinct:(_Bool)arg3;

- (id)selectSQLWithColumns:(id)arg1 groupBy:(id)arg2 orderingTerms:(id)arg3;

- (id)selectSQLWithColumns:(id)arg1 groupBy:(id)arg2 orderingTerms:(id)arg3 directionality:(id)arg4 usingLowerBound:(_Bool)arg5;

- (id)selectSQLWithColumns:(id)arg1 groupBy:(id)arg2 orderingTerms:(id)arg3 directionality:(id)arg4 usingLowerBound:(_Bool)arg5 distinct:(_Bool)arg6 limit:(unsigned long long)arg7;

- (id)selectSQLWithColumns:(id)arg1 orderingTerms:(id)arg2;

- (id)selectSQLWithColumns:(id)arg1 orderingTerms:(id)arg2 directionality:(id)arg3;

- (id)selectSQLWithColumns:(id)arg1 orderingTerms:(id)arg2 distinct:(_Bool)arg3;

- (id)selectSQLWithColumns:(id)arg1 orderingTerms:(id)arg2 limit:(unsigned long long)arg3;

- (id)selectSectionsSQL;

- (id)selectUnorderedPersistentIDsSQL;

@property(readonly) _Bool usingSections; // @synthesize usingSections=_usingSections;

- (id)valueForAggregateFunction:(id)arg1 onEntitiesForProperty:(id)arg2;



@end


