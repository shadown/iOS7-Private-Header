/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "ML3Collection.h"


@interface ML3Artist : ML3Collection

{

}



+ (id)allProperties;

+ (id)countingQueryForBaseQuery:(id)arg1 countProperty:(id)arg2 forIdentifier:(long long)arg3;

+ (id)databaseTable;

+ (id)defaultOrderingProperties;

+ (id)foreignPropertyForProperty:(id)arg1 entityClass:(Class)arg2;

+ (void)initialize;

+ (id)joinClausesForProperty:(id)arg1;

+ (id)predisambiguatedProperties;

+ (id)propertiesForGroupingKey;

+ (_Bool)propertyIsCountProperty:(id)arg1;

+ (long long)revisionTrackingCode;

+ (id)trackForeignPersistentID;

- (void)updateTrackValues:(id)arg1;



@end


