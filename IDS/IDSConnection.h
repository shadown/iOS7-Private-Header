/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */





@class IDSAccount, _IDSConnection;



@interface IDSConnection : NSObject

{

    _IDSConnection *_internal;

}



- (id)_initWithAccount:(id)arg1 commands:(id)arg2;

@property(readonly, nonatomic) _IDSConnection *_internal;

@property(readonly, nonatomic) IDSAccount *account;

- (void)addDelegate:(id)arg1 queue:(id)arg2;

- (void)dealloc;

- (id)initWithAccount:(id)arg1;

- (id)initWithAccount:(id)arg1 commands:(id)arg2;

@property(readonly, nonatomic) _Bool isActive;

- (void)removeDelegate:(id)arg1;

- (void)requestKeepAlive;

- (_Bool)sendMessage:(id)arg1 toDestinations:(id)arg2 options:(id)arg3 identifier:(id *)arg4 error:(id *)arg5;

- (_Bool)sendMessage:(id)arg1 toDestinations:(id)arg2 priority:(long long)arg3 options:(id)arg4 identifier:(id *)arg5 error:(id *)arg6;



@end


