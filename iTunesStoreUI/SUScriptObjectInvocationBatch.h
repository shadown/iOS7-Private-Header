/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */





@class NSLock, NSMutableArray, SUScriptObject;



@interface SUScriptObjectInvocationBatch : NSObject

{

    NSMutableArray *_invocationQueue;

    NSLock *_lock;

    struct __CFDictionary *_proxies;

    SUScriptObject *_rootObject;

}



- (void)_delayedDequeueInvocations;

- (id)batchProxyForObject:(id)arg1;

- (void)checkOutBatchTarget:(id)arg1;

- (id)copyQueuedInvocationsForObject:(id)arg1;

- (void)dealloc;

- (void)dequeueInvocations;

- (void)enqueueInvocation:(id)arg1;

- (id)init;

@property SUScriptObject *rootObject;



@end

