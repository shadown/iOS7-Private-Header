/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */





@class NSObject<OS_dispatch_queue>;



__attribute__((visibility("hidden")))

@interface VKDispatch : NSObject

{

    NSObject<OS_dispatch_queue> *_homeQueue;

    NSObject<OS_dispatch_queue> *_layoutQueue;

    NSObject<OS_dispatch_queue> *_renderQueue;

}



+ (id)defaultDispatch;

- (id)_initWithHomeQueue:(id)arg1 layoutQueue:(id)arg2 renderQueue:(id)arg3;

- (id)_newLayoutQueue:(const char *)arg1;

- (id)_newRenderQueue:(const char *)arg1;

- (void)dealloc;

- (id)description;

@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *homeQueue; // @synthesize homeQueue=_homeQueue;

- (id)initWithHomeQueue:(id)arg1;

@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *layoutQueue; // @synthesize layoutQueue=_layoutQueue;

@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *renderQueue; // @synthesize renderQueue=_renderQueue;



@end


