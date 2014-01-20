/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "MFPriorityDesignator.h"



@class MFError, MFInvocationQueue, MFMailboxUid, NSString, NSThread;



@interface MFActivityMonitor : MFPriorityDesignator

{

    NSThread *_runningThread;

    NSString *_taskName;

    NSString *_displayName;

    NSString *_statusMessage;

    NSString *_descriptionString;

    MFInvocationQueue *_ourQueue;

    double _percentDone;

    unsigned int _key:13;

    unsigned int _canCancel:1;

    unsigned int _shouldCancel:1;

    unsigned int _isActive:1;

    unsigned int _changeCount:8;

    id _delegate;

    id _target;

    MFError *_error;

    unsigned long long _expectedLength;

    unsigned long long _maxCount;

    unsigned long long _currentCount;

    double _currentItemPercentDone;

    unsigned int _supportsPerItemProgress:1;

    MFMailboxUid *_mailbox;

    double _lastTime;

    double _startTime;

    unsigned long long _gotNewMessagesState;

}



+ (id)currentMonitor;

+ (void)destroyMonitor;

- (void)_didChange;

- (_Bool)_lockedAddActivityTarget:(id)arg1;

- (id)_ntsThrottledUserInfoDict;

- (int)acquireExclusiveAccessKey;

- (id)activityTarget;

- (id)activityTargets;

- (void)addActivityTarget:(id)arg1;

- (void)addActivityTargets:(id)arg1;

- (_Bool)canBeCancelled;

- (void)cancel;

- (void)cancelMessage;

- (int)changeCount;

- (void)dealloc;

- (id)description;

- (id)displayName;

- (id)error;

- (unsigned long long)expectedLength;

- (void)finishedActivity:(id)arg1;

- (unsigned long long)gotNewMessagesState;

- (id)init;

- (_Bool)isActive;

@property(retain) MFMailboxUid *mailbox; // @synthesize mailbox=_mailbox;

- (void)notifyConnectionEstablished;

- (double)percentDone;

- (void)postActivityFinished:(id)arg1;

- (void)postActivityStarting;

- (void)postDidChangeWithUserInfo:(id)arg1;

- (id)primaryTarget;

- (void)relinquishExclusiveAccessKey:(int)arg1;

- (void)removeActivityTarget:(id)arg1;

- (void)reset;

- (void)setActivityTarget:(id)arg1;

- (void)setCanBeCancelled:(_Bool)arg1;

- (void)setCurrentCount:(unsigned long long)arg1;

- (void)setDelegate:(id)arg1;

- (void)setDisplayName:(id)arg1;

- (void)setDisplayName:(id)arg1 maxCount:(unsigned long long)arg2;

- (void)setError:(id)arg1;

- (void)setExpectedLength:(unsigned long long)arg1;

- (void)setGotNewMessagesState:(unsigned long long)arg1;

- (void)setInvocationQueue:(id)arg1;

- (void)setMaxCount:(unsigned long long)arg1;

- (void)setPercentDone:(double)arg1;

- (void)setPercentDone:(double)arg1 withKey:(int)arg2;

- (void)setPercentDoneOfCurrentItem:(double)arg1;

- (void)setPrimaryTarget:(id)arg1;

- (void)setShouldCancel:(_Bool)arg1;

- (void)setStatusMessage:(id)arg1;

- (void)setStatusMessage:(id)arg1 percentDone:(double)arg2;

- (void)setStatusMessage:(id)arg1 percentDone:(double)arg2 withKey:(int)arg3;

- (void)setStatusMessage:(id)arg1 withKey:(int)arg2;

- (void)setSupportsPerItemProgress:(_Bool)arg1;

- (void)setTaskName:(id)arg1;

- (_Bool)shouldCancel;

- (void)startActivity;

- (id)statusMessage;

- (id)taskName;

- (id)userInfoForNotification;



@end

