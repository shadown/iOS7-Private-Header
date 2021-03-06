/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */





@class NSArray, NSData, NSString;



@interface IMPerson : NSObject

{

    _Bool _registered;

    int _recordID;

}



+ (id)_cachedRecordResultForQuery:(id)arg1 addressBook:(void *)arg2;

+ (void)_setCachedQueriesEnabled:(_Bool)arg1;

+ (void)_setCachedRecordResult:(int)arg1 identifier:(int)arg2 forQuery:(id)arg3 addressBook:(void *)arg4;

+ (id)allPeople;

+ (id)existingABPeopleWithInstantMessageAddress:(id)arg1 onServices:(id)arg2 allowSubstringMatch:(_Bool)arg3;

+ (id)existingABPersonForPerson:(id)arg1;

+ (id)existingABPersonWithFirstName:(id)arg1 andLastName:(id)arg2 andNickName:(id)arg3 orEmail:(id)arg4 orNumber:(id)arg5;

+ (id)existingABPersonWithFirstName:(id)arg1 andLastName:(id)arg2 andNickName:(id)arg3 orEmail:(id)arg4 orNumber:(id)arg5 countryCode:(id)arg6 identifier:(int *)arg7;

+ (id)existingABPersonWithFirstName:(id)arg1 andLastName:(id)arg2 andNickName:(id)arg3 orEmail:(id)arg4 orNumber:(id)arg5 identifier:(int *)arg6;

+ (id)existingABPersonWithFirstName:(id)arg1 andLastName:(id)arg2 orEmail:(id)arg3;

+ (id)existingABPersonWithFirstName:(id)arg1 andLastName:(id)arg2 orEmail:(id)arg3 orNumber:(id)arg4;

+ (id)existingABPersonWithFirstName:(id)arg1 lastName:(id)arg2;

+ (id)existingABPersonWithInstantMessageAddress:(id)arg1 onServices:(id)arg2 allowSubstringMatch:(_Bool)arg3;

- (void)_abPersonChanged:(id)arg1;

@property(readonly, nonatomic) int _recordID; // @synthesize _recordID;

@property(readonly, nonatomic) void *_recordRef;

@property(readonly, nonatomic) _Bool _registered; // @synthesize _registered;

@property(readonly, nonatomic) NSString *abbreviatedName;

@property(readonly, nonatomic) NSArray *allEmails;

- (id)allHandlesForProperty:(id)arg1;

- (void)appendID:(id)arg1 toProperty:(id)arg2;

@property(readonly, nonatomic) NSString *companyName;

- (_Bool)containsHandle:(id)arg1 forServiceProperty:(id)arg2;

- (void)dealloc;

- (id)description;

@property(readonly, nonatomic) NSString *displayName;

- (id)emailHandlesForService:(id)arg1;

- (id)emailHandlesForService:(id)arg1 includeBaseEmail:(_Bool)arg2;

@property(copy, nonatomic) NSArray *emails;

- (void)finalize;

@property(copy, nonatomic) NSString *firstName;

@property(readonly, nonatomic) NSString *fullName;

@property(readonly, nonatomic) NSArray *groups;

- (unsigned long long)hash;

- (id)imHandleRegistrarGUID;

@property(retain, nonatomic) NSData *imageData;

@property(readonly, nonatomic) NSData *imageDataWithoutLoading;

- (id)init;

- (id)initWithABRecordID:(int)arg1;

@property(readonly, nonatomic) _Bool isCompany;

- (_Bool)isEqual:(id)arg1;

- (_Bool)isEqualToIMPerson:(id)arg1;

@property(readonly, nonatomic) _Bool isInAddressBook;

@property(copy, nonatomic) NSString *lastName;

@property(readonly, nonatomic) NSArray *mobileNumbers;

@property(readonly, nonatomic) NSString *name;

@property(copy, nonatomic) NSString *nickname;

@property(nonatomic) NSArray *phoneNumbers;

@property(readonly, nonatomic) int recordID;

- (void)save;

- (void)setFirstName:(id)arg1 lastName:(id)arg2;

- (void)setValues:(id)arg1 forIMProperty:(id)arg2;

- (void)setValues:(id)arg1 forProperty:(id)arg2;

@property(readonly, nonatomic) unsigned long long status;

@property(readonly, nonatomic) NSString *uniqueID;

- (id)valuesForIMProperty:(id)arg1;

- (id)valuesForProperty:(id)arg1;



@end


