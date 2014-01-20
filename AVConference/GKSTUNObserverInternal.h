/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "GKSTUNObserver.h"


@class NSObject<OS_dispatch_queue>;



__attribute__((visibility("hidden")))

@interface GKSTUNObserverInternal : GKSTUNObserver

{

    struct __SCDynamicStore *_dynamicStore;

    NSObject<OS_dispatch_queue> *_stunDiscoveryQueue;

    _Bool _fStunDiscoveryQueued;

}



- (void)cleanUp;

- (void)dealloc;

- (void)deregisterForNetworkChanges;

- (id)init;

- (_Bool)initialize;

- (void)registerForNetworkChanges;

- (void)trySTUNDiscovery;



@end

