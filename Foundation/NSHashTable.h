/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */





#import "NSCoding.h"

#import "NSCopying.h"

#import "NSFastEnumeration.h"



@interface NSHashTable : NSObject <NSCopying, NSCoding, NSFastEnumeration>

{

}



+ (id)alloc;

+ (id)allocWithZone:(struct _NSZone *)arg1;

+ (id)hashTableWithOptions:(unsigned long long)arg1;

+ (id)hashTableWithWeakObjects;

+ (id)weakObjectsHashTable;

- (void)addObject:(id)arg1;

- (id)allObjects;

- (id)anyObject;

- (_Bool)containsObject:(id)arg1;

- (id)copy;

- (id)copyWithZone:(struct _NSZone *)arg1;

- (unsigned long long)count;

- (unsigned long long)countByEnumeratingWithState:(CDStruct_70511ce9 *)arg1 objects:(id *)arg2 count:(unsigned long long)arg3;

- (id)description;

- (void)encodeWithCoder:(id)arg1;

- (void *)getItem:(const void *)arg1;

- (void)getKeys:(const void **)arg1 count:(unsigned long long *)arg2;

- (id)init;

- (id)initWithCoder:(id)arg1;

- (id)initWithOptions:(unsigned long long)arg1 capacity:(unsigned long long)arg2;

- (id)initWithPointerFunctions:(id)arg1 capacity:(unsigned long long)arg2;

- (void)insertKnownAbsentItem:(const void *)arg1;

- (void)intersectHashTable:(id)arg1;

- (_Bool)intersectsHashTable:(id)arg1;

- (_Bool)isEqualToHashTable:(id)arg1;

- (_Bool)isSubsetOfHashTable:(id)arg1;

- (id)member:(id)arg1;

- (void)minusHashTable:(id)arg1;

- (id)mutableCopyWithZone:(struct _NSZone *)arg1;

- (id)mutableSet;

- (id)objectEnumerator;

- (id)pointerFunctions;

- (void)removeAllItems;

- (void)removeAllObjects;

- (void)removeItem:(const void *)arg1;

- (void)removeObject:(id)arg1;

- (id)setRepresentation;

- (void)unionHashTable:(id)arg1;

- (unsigned long long)weakCount;



@end


