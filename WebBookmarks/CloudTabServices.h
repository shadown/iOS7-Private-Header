/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */





@interface CloudTabServices : NSObject

{

}



+ (id)_serverConnection;

+ (void)clearAllCloudTabDevices;

+ (void)clearTabsForCurrentDevice;

+ (void)didToggleCloudTabs:(_Bool)arg1;

+ (void)didToggleCloudTabs:(_Bool)arg1 terminateAfterUpdating:(_Bool)arg2;

+ (void)didTogglePrivateBrowsing:(_Bool)arg1;



@end


