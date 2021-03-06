/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */





#import "NSSecureCoding.h"



@class ACAccountCredential, ACAccountStore, ACAccountType, NSArray, NSDate, NSDictionary, NSMutableDictionary, NSMutableSet, NSSet, NSString, NSURL;



@interface ACAccount : NSObject <NSSecureCoding>

{

    ACAccountStore *_store;

    NSString *_identifier;

    NSString *_accountDescription;

    NSString *_owningBundleID;

    NSString *_username;

    NSString *_authenticationType;

    NSString *_credentialType;

    NSString *_clientToken;

    _Bool _haveCheckedForClientToken;

    ACAccountType *_accountType;

    ACAccountCredential *_credential;

    NSMutableDictionary *_properties;

    NSMutableDictionary *_dataclassProperties;

    _Bool _accountAccessAvailable;

    _Bool _authenticated;

    _Bool _active;

    _Bool _supportsAuthentication;

    NSURL *_objectID;

    NSDate *_date;

    NSDate *_lastCredentialRenewalRejectionDate;

    ACAccount *_parentAccount;

    _Bool _haveCheckedForParentAccount;

    NSString *_parentAccountIdentifier;

    _Bool _haveCheckedForChildAccounts;

    NSArray *_childAccounts;

    NSMutableSet *_enabledDataclasses;

    NSMutableSet *_provisionedDataclasses;

    NSMutableSet *_dirtyProperties;

    NSMutableSet *_dirtyAccountProperties;

    id _credentialsDidChangeObserver;

    id _accountPropertiesTransformer;

    _Bool _creatingFromManagedObject;

}



+ (id)_createNewAccountUID;

+ (_Bool)supportsSecureCoding;

- (void).cxx_destruct;

- (void)_clearCachedChildAccounts;

- (void)_clearCachedCredentials;

- (void)_clearDirtyProperties;

- (void)_installCredentialsChangedObserver;

- (void)_loadAllCachedProperties;

- (void)_markAccountPropertyDirty:(id)arg1;

- (void)_markCredentialDirty;

- (void)_markPropertyDirty:(id)arg1;

- (void)_setAccountStore:(id)arg1;

- (void)_setObjectID:(id)arg1;

- (_Bool)_useParentForCredentials;

- (id)accountByCleaningThirdPartyTransformations;

@property(copy, nonatomic) NSString *accountDescription;

@property(readonly, nonatomic) NSDictionary *accountProperties;

@property(copy) id accountPropertiesTransformer; // @synthesize accountPropertiesTransformer=_accountPropertiesTransformer;

- (id)accountPropertyForKey:(id)arg1;

@property(readonly, nonatomic) ACAccountStore *accountStore;

@property(retain, nonatomic) ACAccountType *accountType;

- (_Bool)addClientToken:(id)arg1;

- (_Bool)authenticated;

@property(readonly, nonatomic) NSString *authenticationType;

@property(readonly, nonatomic) NSArray *childAccounts;

- (id)childAccountsWithAccountTypeIdentifier:(id)arg1;

@property(readonly, nonatomic) NSString *clientToken;

- (id)copyWithZone:(struct _NSZone *)arg1;

@property(retain, nonatomic) NSDate *creationDate;

@property(retain, nonatomic) ACAccountCredential *credential;

@property(readonly, nonatomic) NSString *credentialType;

- (id)credentialWithError:(id *)arg1;

- (void)credentialsChanged:(id)arg1;

@property(readonly, nonatomic) NSDictionary *dataclassProperties;

- (void)dealloc;

- (id)description;

- (id)diffAccount:(id)arg1;

@property(readonly, nonatomic) NSSet *dirtyAccountProperties; // @synthesize dirtyAccountProperties=_dirtyAccountProperties;

@property(readonly, nonatomic) NSSet *dirtyProperties; // @synthesize dirtyProperties=_dirtyProperties;

@property(readonly, nonatomic) ACAccount *displayAccount;

- (id)enabledAndSyncableDataclasses;

@property(retain, nonatomic) NSMutableSet *enabledDataclasses;

- (void)encodeWithCoder:(id)arg1;

@property(readonly, nonatomic) NSString *identifier;

- (id)initWithAccountType:(id)arg1;

- (id)initWithCoder:(id)arg1;

- (id)initWithManagedAccount:(id)arg1;

- (id)initWithManagedAccount:(id)arg1 accountStore:(id)arg2;

@property(nonatomic, getter=isActive) _Bool active;

@property(nonatomic, getter=isAuthenticated) _Bool authenticated;

@property(readonly, nonatomic, getter=isDirty) _Bool dirty;

- (_Bool)isEnabledForDataclass:(id)arg1;

- (_Bool)isEnabledToSyncDataclass:(id)arg1;

- (_Bool)isPropertyDirty:(id)arg1;

- (_Bool)isProvisionedForDataclass:(id)arg1;

@property(retain, nonatomic) NSDate *lastCredentialRenewalRejectionDate;

- (void)markAllPropertiesDirty;

@property(readonly, nonatomic) NSURL *objectID;

- (id)owningBundleID;

@property(retain, nonatomic) ACAccount *parentAccount;

@property(readonly, nonatomic) NSString *parentAccountIdentifier;

- (id)propertiesForDataclass:(id)arg1;

@property(retain, nonatomic) NSMutableSet *provisionedDataclasses;

- (void)refresh;

- (void)reload;

- (void)setAccountProperties:(id)arg1;

- (void)setAccountProperty:(id)arg1 forKey:(id)arg2;

- (void)setAuthenticationType:(id)arg1;

- (void)setCreatingFromManagedObject:(_Bool)arg1;

- (void)setCredentialType:(id)arg1;

- (void)setDataclassProperties:(id)arg1;

- (void)setEnabled:(_Bool)arg1 forDataclass:(id)arg2;

- (void)setIdentifier:(id)arg1;

- (void)setOwningBundleID:(id)arg1;

- (void)setProperties:(id)arg1 forDataclass:(id)arg2;

@property(nonatomic) _Bool supportsAuthentication;

@property(copy, nonatomic) NSString *username;

@property(readonly, nonatomic) NSString *shortDebugName;

@property(readonly, nonatomic) _Bool supportsPush;

- (void)takeValuesFromModifiedAccount:(id)arg1;

@property(readonly, nonatomic) NSString *userFullName;



@end


