/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */





@class ACAccount;



@interface ACDAccountChange : NSObject

{

    int _changeType;

    ACAccount *_account;

    ACAccount *_oldAccount;

}



+ (id)changeWithChangeType:(int)arg1 account:(id)arg2 oldAccount:(id)arg3;

- (void).cxx_destruct;

@property(retain, nonatomic) ACAccount *account; // @synthesize account=_account;

@property(nonatomic) int changeType; // @synthesize changeType=_changeType;

- (id)initWithChangeType:(int)arg1 account:(id)arg2 oldAccount:(id)arg3;

@property(retain, nonatomic) ACAccount *oldAccount; // @synthesize oldAccount=_oldAccount;



@end

