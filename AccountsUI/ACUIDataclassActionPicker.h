/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */





@class ACAccount, ACDataclassAction, NSArray, NSMutableArray;



@interface ACUIDataclassActionPicker : NSObject

{

    NSMutableArray *_affectedDataclasses;

    ACAccount *_affectedAccount;

    NSArray *_actions;

}



- (void).cxx_destruct;

@property(readonly, nonatomic) NSArray *actions; // @synthesize actions=_actions;

- (void)addAffectedDataclass:(id)arg1;

@property(readonly, nonatomic) ACAccount *affectedAccount; // @synthesize affectedAccount=_affectedAccount;

@property(copy, nonatomic) NSArray *affectedDataclasses; // @synthesize affectedDataclasses=_affectedDataclasses;

- (id)descriptionForDataclassAction:(id)arg1;

@property(readonly, nonatomic) ACDataclassAction *firstDestructiveAction;

- (_Bool)hasActionOfType:(long long)arg1;

@property(readonly, nonatomic) _Bool hasDestructiveActions;

- (id)initWithActions:(id)arg1 affectingAccount:(id)arg2;

- (id)message;

@property(readonly, nonatomic) long long priorityIndex;

- (id)showInViewController:(id)arg1;

- (id)title;



@end

