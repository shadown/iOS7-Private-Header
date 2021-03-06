/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */





@class NSDictionary;



@interface VVCarrierParameters : NSObject

{

    NSDictionary *_parameterValues;

}



+ (id)carrierServiceName;

+ (_Bool)ignoresRoamingSwitch;

+ (id)messageNotificationFallbackTimeout;

+ (id)retryIntervals;

+ (_Bool)supportsDetachedStorage;

+ (_Bool)supportsGreetingChanges;

+ (_Bool)supportsPasswordChanges;

- (void)_initForBundle:(id)arg1;

- (void)dealloc;

- (id)initForService:(id)arg1;

- (id)initForServiceBundleId:(id)arg1;

- (id)parameterValueForKey:(id)arg1;



@end


