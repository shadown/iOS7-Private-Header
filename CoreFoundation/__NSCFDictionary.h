/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "NSMutableDictionary.h"


__attribute__((visibility("hidden")))

@interface __NSCFDictionary : NSMutableDictionary

{

    unsigned char _cfinfo[4];

    unsigned int _rc;

    unsigned int _bits[4];

    void *_callbacks;

    id *_values;

    id *_keys;

}



+ (_Bool)automaticallyNotifiesObserversForKey:(id)arg1;

- (_Bool)_isDeallocating;

- (_Bool)_tryRetain;

- (Class)classForCoder;

- (id)copyWithZone:(struct _NSZone *)arg1;

- (unsigned long long)count;

- (unsigned long long)countByEnumeratingWithState:(CDStruct_70511ce9 *)arg1 objects:(id *)arg2 count:(unsigned long long)arg3;

- (void)finalize;

- (unsigned long long)hash;

- (_Bool)isEqual:(id)arg1;

- (id)keyEnumerator;

- (id)mutableCopyWithZone:(struct _NSZone *)arg1;

- (id)objectForKey:(id)arg1;

- (oneway void)release;

- (void)removeAllObjects;

- (void)removeObjectForKey:(id)arg1;

- (id)retain;

- (unsigned long long)retainCount;

- (void)setObject:(id)arg1 forKey:(id)arg2;

- (void)setObservationInfo:(void *)arg1;



@end

