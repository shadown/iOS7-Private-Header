/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */





@class NSObject<OS_dispatch_queue>, NSString;



@interface NSXPCListener : NSObject

{

    void *_xconnection;

    NSObject<OS_dispatch_queue> *_userQueue;

    void *reserved0;

    id <NSXPCListenerDelegate> _delegate;

    NSString *_serviceName;

    unsigned long long _state;

    id _reserved1;

    id _reserved2;

}



+ (id)_UUID;

+ (id)anonymousListener;

+ (void)enableTransactions;

+ (id)serviceListener;

- (id)_initShared;

- (id)_queue;

- (void)_setQueue:(id)arg1;

- (void)dealloc;

@property id <NSXPCListenerDelegate> delegate; // @synthesize delegate=_delegate;

- (id)endpoint;

- (void)finalize;

- (id)initWithMachServiceName:(id)arg1;

- (id)initWithServiceName:(id)arg1;

- (void)invalidate;

- (void)resume;

- (id)serviceName;

- (void)setOptions:(unsigned long long)arg1;

- (void)stop;

- (void)suspend;



@end

