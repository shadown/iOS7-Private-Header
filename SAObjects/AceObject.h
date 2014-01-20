/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */





#import "AceObject.h"



@class NSData, NSMutableDictionary, NSString;



@interface AceObject : NSObject <AceObject>

{

    NSString *_aceId;

    NSString *_refId;

    NSData *_plistData;

    NSMutableDictionary *_dict;

}



+ (id)_aceObjectWithMutableDictionary:(id)arg1 context:(id)arg2;

+ (id)_newAceObjectWithMutableDictionary:(id)arg1;

+ (id)aceObjectArrayWithDictionaryArray:(id)arg1 baseClass:(Class)arg2 context:(id)arg3;

+ (id)aceObjectArrayWithDictionaryArray:(id)arg1 baseProtocol:(id)arg2 context:(id)arg3;

+ (id)aceObjectDictionaryWithDictionary:(id)arg1 baseClass:(Class)arg2 context:(id)arg3;

+ (id)aceObjectDictionaryWithDictionary:(id)arg1 baseProtocol:(id)arg2 context:(id)arg3;

+ (id)aceObjectWithDictionary:(id)arg1 context:(id)arg2;

+ (id)aceObjectWithGenericCommand:(id)arg1 context:(id)arg2;

+ (id)aceObjectWithPlistData:(id)arg1;

+ (id)dictionaryArrayWithAceObjectArray:(id)arg1;

+ (id)dictionaryWithAceObjectDictionary:(id)arg1;

+ (id)newAceObjectWithDictionary:(id)arg1 context:(id)arg2;

+ (id)newAceObjectWithGenericCommand:(id)arg1 context:(id)arg2;

+ (_Bool)supportsSecureCoding;

- (void)_appendDescriptionOfObject:(id)arg1 toString:(id)arg2 atDepth:(long long)arg3 withPrefixes:(id)arg4;

- (void)_deserializeFromPlistData;

- (id)_dict;

- (id)_initWithMutableDictionary:(id)arg1;

- (id)_initWithPlistData:(id)arg1 aceId:(id)arg2 refId:(id)arg3;

@property(copy, nonatomic) NSString *aceId; // @synthesize aceId=_aceId;

- (id)copyWithZone:(struct _NSZone *)arg1;

- (void)dealloc;

- (id)description;

@property(readonly, nonatomic) NSMutableDictionary *dict; // @synthesize dict=_dict;

- (id)dictionary;

- (void)encodeWithCoder:(id)arg1;

- (id)encodedClassName;

- (void)forceEagerDeserialization;

- (id)groupIdentifier;

- (_Bool)hasArrayForPropertyForKey:(id)arg1;

- (unsigned long long)hash;

- (id)init;

- (id)initWithCoder:(id)arg1;

- (id)initWithDictionary:(id)arg1;

- (id)initWithDictionary:(id)arg1 context:(id)arg2;

- (_Bool)isEqual:(id)arg1;

- (id)mutableCopyWithZone:(struct _NSZone *)arg1;

@property(readonly, nonatomic) NSData *plistData; // @synthesize plistData=_plistData;

- (id)properties;

- (id)propertyForKey:(id)arg1;

@property(copy, nonatomic) NSString *refId; // @synthesize refId=_refId;

- (void)setProperty:(id)arg1 forKey:(id)arg2;

- (void)setTopLevelProperty:(id)arg1 forKey:(id)arg2;

- (id)topLevelPropertyForKey:(id)arg1;



@end

