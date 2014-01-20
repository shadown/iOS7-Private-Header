/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */





#import "AXTimer.h"



@class AXAccessQueue, NSObject<OS_dispatch_source>, NSString;



@interface AXTimer : NSObject <AXTimer>

{

    _Bool _automaticallyCancelPendingBlockUponSchedulingNewBlock;

    _Bool _active;

    _Bool _accessQueueIsExternal;

    int _state;

    NSString *_label;

    AXAccessQueue *_accessQueue;

    NSObject<OS_dispatch_source> *_dispatchTimer;

}



+ (void)initialize;

+ (id)timerTargettingMainAccessQueue;

- (void)_afterDelay:(double)arg1 processBlock:(id)arg2 shouldTreatAsWritingBlock:(void)arg3;

- (void)_didFinishProcessingBlock;

- (void)_performEnqueuedWritingBlock:(id)arg1 asynchronousExecutionWarningHandler:(void)arg2;

- (void)_reallyCancel;

- (void)_warnAboutAsynchronousCancelling;

- (void)_warnAboutAsynchronousScheduling;

@property(retain, nonatomic) AXAccessQueue *accessQueue; // @synthesize accessQueue=_accessQueue;

@property(nonatomic) _Bool accessQueueIsExternal; // @synthesize accessQueueIsExternal=_accessQueueIsExternal;

- (void)afterDelay:(double)arg1 processBlock:(id)arg2;

- (void)afterDelay:(double)arg1 processReadingBlock:(id)arg2;

- (void)afterDelay:(double)arg1 processWritingBlock:(id)arg2;

@property(nonatomic) _Bool automaticallyCancelPendingBlockUponSchedulingNewBlock; // @synthesize automaticallyCancelPendingBlockUponSchedulingNewBlock=_automaticallyCancelPendingBlockUponSchedulingNewBlock;

- (void)cancel;

- (void)dealloc;

- (id)description;

@property(retain, nonatomic) NSObject<OS_dispatch_source> *dispatchTimer; // @synthesize dispatchTimer=_dispatchTimer;

- (id)init;

- (id)initWithTargetAccessQueue:(id)arg1;

@property(nonatomic, getter=isActive) _Bool active; // @synthesize active=_active;

@property(readonly, nonatomic, getter=isPending) _Bool pending;

@property(copy) NSString *label; // @synthesize label=_label;

@property(nonatomic) int state; // @synthesize state=_state;



@end

