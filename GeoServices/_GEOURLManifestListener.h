/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */





#import "GEOResourceManifestTileGroupObserver.h"



@class NSLock, NSMutableArray, NSObject<OS_dispatch_source>;



__attribute__((visibility("hidden")))

@interface _GEOURLManifestListener : NSObject <GEOResourceManifestTileGroupObserver>

{

    NSMutableArray *_handlers;

    NSLock *_handlersLock;

    NSObject<OS_dispatch_source> *_timeoutTimer;

}



+ (id)sharedListener;

- (void)_finish:(_Bool)arg1;

- (void)dealloc;

- (id)init;

- (void)resourceManifestManagerDidChangeActiveTileGroup:(id)arg1;

- (void)resourceManifestManagerWillChangeActiveTileGroup:(id)arg1;

- (void)waitForManifestWithHandler:(id)arg1;



@end

