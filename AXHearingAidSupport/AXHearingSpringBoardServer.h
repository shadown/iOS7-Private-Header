/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "AXServer.h"



@class NSArray, NSMutableDictionary;



@interface AXHearingSpringBoardServer : AXServer

{

    NSMutableDictionary *_availabilityHandlers;

    NSMutableDictionary *_updateHandlers;

    NSMutableDictionary *_liveListenHandlers;

    NSArray *_availableHearingAids;

}



+ (id)sharedInstance;

- (void)_didConnectToServer;

- (id)_serviceName;

- (_Bool)_shouldValidateEntitlements;

- (void)_willClearServer;

- (id)addAvailableDeviceHandler:(id)arg1;

- (id)addLiveListenLevelsHandler:(id)arg1;

- (id)addPropertyUpdateHandler:(id)arg1;

- (id)availableDevicesUpdate:(id)arg1;

@property(retain, nonatomic) NSArray *availableHearingAids; // @synthesize availableHearingAids=_availableHearingAids;

- (void)dealloc;

- (id)devicePropertyUpdate:(id)arg1;

- (void)hearingAidServerReady;

- (id)init;

- (_Bool)liveListenIsListening;

- (id)liveListenLevelsUpdate:(id)arg1;

- (id)readProperty:(long long)arg1 forDeviceID:(id)arg2;

- (void)removeAvailableDeviceHandler:(id)arg1;

- (void)removeLiveListenLevelsHandler:(id)arg1;

- (void)removePropertyUpdateHandler:(id)arg1;

- (_Bool)startLiveListen;

- (void)stopLiveListen;

- (void)writeValue:(id)arg1 forProperty:(long long)arg2 forDeviceID:(id)arg3;



@end


