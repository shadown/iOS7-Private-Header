/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */





@class NSObject<OS_dispatch_queue>;



@interface DAAccountMonitor : NSObject

{

    struct __CFSet *_accounts;

    NSObject<OS_dispatch_queue> *_accountsQueue;

}



+ (id)sharedMonitor;

- (void)dealloc;

- (id)init;

- (void)monitorAccount:(id)arg1;

- (id)monitoredAccounts;

- (void)unmonitorAccount:(id)arg1;



@end


