/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "_UITargetedProxy.h"


#import "_UIViewServiceUIBehaviorInterface.h"



@class _UIViewServiceFencingControlProxy;



__attribute__((visibility("hidden")))

@interface _UIViewServiceUIBehaviorProxy : _UITargetedProxy <_UIViewServiceUIBehaviorInterface>

{

    int _remotePID;

    _UIViewServiceFencingControlProxy *_fencingControlProxy;

    int __automatic_invalidation_retainCount;

    _Bool __automatic_invalidation_invalidated;

}



+ (id)activeFencePort;

+ (id)proxyWrappingExportedObject:(id)arg1 forCommunicationWithPID:(int)arg2 exportedProtocol:(id)arg3;

- (int)__automatic_invalidation_logic;

- (_Bool)_isDeallocating;

- (_Bool)_tryRetain;

- (void)dealloc;

- (oneway void)release;

- (id)retain;

- (unsigned long long)retainCount;



@end

