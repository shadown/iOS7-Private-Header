/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */





#import "IDSPushHandlerDelegate.h"



@class NSData, NSMutableArray;



@interface IDSRegistrationPushHandler : NSObject <IDSPushHandlerDelegate>

{

    NSMutableArray *_handlers;

    _Bool _registeredForPush;

    _Bool _isListening;

}



+ (id)commandToHandlerBlock;

- (void)_acceptIncomingPushes;

- (void)_ignoreIncomingPushes;

- (id)_pushTopics;

- (void)_updateListenerIfNeeded;

- (void)addListener:(id)arg1;

- (id)copyHandlersForEnumerating;

- (void)dealloc;

- (void)handler:(id)arg1 didReceiveMessage:(id)arg2 forTopic:(id)arg3 fromID:(id)arg4 messageContext:(id)arg5;

- (void)handler:(id)arg1 pushTokenChanged:(id)arg2;

@property(readonly, nonatomic) NSData *pushToken;

@property(nonatomic) _Bool registered;

- (void)removeListener:(id)arg1;



@end


