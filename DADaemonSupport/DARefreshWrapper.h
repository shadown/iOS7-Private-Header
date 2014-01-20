/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */





@class NSDate, NSMutableSet, NSTimer, PCConnectionManager;



@interface DARefreshWrapper : NSObject

{

    id <DARefreshManagerDelegate> _delegate;

    int _pushState;

    NSDate *_pushRegistrationTime;

    PCConnectionManager *_manager;

    int _curStyle;

    NSMutableSet *_tokenRegistrations;

    NSTimer *_retryTimer;

    NSTimer *_dailyRefreshTimer;

}



- (void)_dailyRefreshTimerFired:(id)arg1;

- (void)_retryTimerFired:(id)arg1;

- (id)_stringForStyle:(int)arg1;

- (void)cancelAllTokenRegistrations;

- (void)cancelDailyRefreshTimer;

- (void)cancelRetryTimer;

@property int curStyle; // @synthesize curStyle=_curStyle;

- (void)dealloc;

@property id <DARefreshManagerDelegate> delegate; // @synthesize delegate=_delegate;

- (id)description;

- (id)init;

@property(retain) PCConnectionManager *manager; // @synthesize manager=_manager;

- (void)performTokenRegistrationRequestsWithToken:(id)arg1 onBehalfOf:(id)arg2;

@property(retain) NSDate *pushRegistrationTime; // @synthesize pushRegistrationTime=_pushRegistrationTime;

@property int pushState; // @synthesize pushState=_pushState;

- (void)refreshCollections:(id)arg1 withReason:(int)arg2;

- (void)retryCollections:(id)arg1 after:(double)arg2 reason:(int)arg3;

- (void)shutdown;

- (void)startDailyRefreshTimer;

- (void)tokenRegistrationRequest:(id)arg1 finishedWithError:(id)arg2;



@end

