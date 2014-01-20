/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */





@class NSObject<OS_dispatch_queue>, NSTimer;



@interface MSDaemon : NSObject

{

    _Bool _stabilizedIsBusy;

    int _busyCount;

    int _UIBusyCount;

    NSObject<OS_dispatch_queue> *_idleCountQueue;

    NSTimer *_hysteresisTimer;

}



- (void).cxx_destruct;

@property(nonatomic) int UIBusyCount; // @synthesize UIBusyCount=_UIBusyCount;

- (void)_didChangeIdleBusyState:(_Bool)arg1;

- (void)_hysteresisTimerDidFire:(id)arg1;

@property(nonatomic) int busyCount; // @synthesize busyCount=_busyCount;

- (void)dealloc;

- (void)didIdle;

- (void)didUnidle;

@property(retain, nonatomic) NSTimer *hysteresisTimer; // @synthesize hysteresisTimer=_hysteresisTimer;

@property(retain, nonatomic) NSObject<OS_dispatch_queue> *idleCountQueue; // @synthesize idleCountQueue=_idleCountQueue;

- (id)init;

- (_Bool)isBusy;

- (void)releaseBusy;

- (void)releasePowerAssertion;

- (void)releaseUIBusy;

- (void)retainBusy;

- (void)retainPowerAssertion;

- (void)retainUIBusy;

@property(nonatomic) _Bool stabilizedIsBusy; // @synthesize stabilizedIsBusy=_stabilizedIsBusy;

- (void)stabilizedDidIdle;

- (void)stabilizedDidUnidle;



@end

