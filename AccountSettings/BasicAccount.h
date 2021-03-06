/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */





#import "AccountFullAccountProtocol.h"



@class NSDictionary, NSMutableDictionary;



@interface BasicAccount : NSObject <AccountFullAccountProtocol>

{

    NSDictionary *_originalProperties;

    NSMutableDictionary *_properties;

    id <AccountFullAccountProtocol> _fullAccount;

    id <AccountRefreshProtocol> _syncAccount;

    BasicAccount *_parentAccount;

}



+ (id)_accountCreationMap;

+ (id)_creatorsInfo;

+ (id)_dataclassesProperties;

+ (_Bool)_isValidAccountType:(id)arg1;

+ (id)accountWithProperties:(id)arg1;

+ (id)accountWithType:(id)arg1 class:(id)arg2;

+ (id)allSupportedDataclasses;

+ (id)createNewAccountUID;

+ (id)deleteAccountActionsForAccountType:(id)arg1;

+ (_Bool)displayToggleForDataclass:(id)arg1;

+ (void)initialize;

+ (_Bool)isMultitaskingEnabled;

+ (_Bool)multipleStoresSupportedByDataclass:(id)arg1;

+ (id)removeActionsIncompatibleWithSingleStoreDataclass:(id)arg1;

+ (_Bool)showRemindersSeparatelyForAccountType:(id)arg1;

+ (id)supportedDataclassesForAccountType:(id)arg1;

+ (id)userActionsToDisableDataclass:(id)arg1 forAccountType:(id)arg2;

+ (id)userActionsToEnableDataclass:(id)arg1 forAccountType:(id)arg2;

+ (_Bool)userConfirmationIsRequiredByDataclass:(id)arg1;

- (id)_cachedSyncAccount;

- (id)_creatorClassNameForAccountType:(id)arg1 creatorType:(id)arg2 loader:(id)arg3;

- (void)_forcedSetAccountProperty:(id)arg1 forKey:(id)arg2;

- (void)_forcedSetEnabled:(_Bool)arg1 forDataclass:(id)arg2;

- (id)_initWithType:(id)arg1 class:(id)arg2;

- (id)_orderedDataclasses:(id)arg1;

- (id)_profileRestrictedDataclasses;

- (id)accountClass;

- (id)accountPropertyForKey:(id)arg1;

- (void)dealloc;

- (id)displayName;

- (id)enabledDataclasses;

- (id)fullAccountCreatorClassNameForAccountType:(id)arg1 loader:(id)arg2;

- (id)fullAccountUsingLoader:(id)arg1;

- (id)identifier;

- (id)init;

- (id)initWithProperties:(id)arg1;

- (_Bool)isEnabledForDataclass:(id)arg1;

@property(retain, nonatomic) NSDictionary *originalProperties; // @synthesize originalProperties=_originalProperties;

- (id)parentAccount;

- (id)parentAccountIdentifier;

- (id)properties;

- (id)propertiesToSave;

- (id)provisionedDataclasses;

- (_Bool)refreshContainerListForDataclass:(id)arg1;

- (_Bool)refreshContainerListForDataclass:(id)arg1 isUserRequested:(_Bool)arg2;

- (_Bool)refreshContainerWithIdentifier:(id)arg1 forDataclass:(id)arg2;

- (_Bool)refreshContainerWithIdentifier:(id)arg1 forDataclass:(id)arg2 isUserRequested:(_Bool)arg3;

- (_Bool)refreshContainersForDataclass:(id)arg1;

- (_Bool)refreshContainersForDataclass:(id)arg1 isUserRequested:(_Bool)arg2;

- (void)removeAccountPropertyForKey:(id)arg1;

- (void)renewAccountCredentialsWithHandler:(id)arg1;

- (void)setAccountClass:(id)arg1;

- (void)setAccountProperty:(id)arg1 forKey:(id)arg2;

- (void)setDisplayName:(id)arg1;

- (void)setEnabled:(_Bool)arg1 forDataclass:(id)arg2;

- (void)setEnabledForDataclasses:(id)arg1;

- (void)setFullAccount:(id)arg1;

- (void)setParentAccount:(id)arg1;

- (id)shortTypeString;

- (id)supportedDataclasses;

- (id)syncAccountCreatorClassNameForAccountType:(id)arg1;

- (id)syncStoreIdentifier;

- (id)type;

- (id)typeString;



@end


