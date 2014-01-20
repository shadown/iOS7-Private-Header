/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */





@class NSString;



@interface BluetoothDevice : NSObject

{

    NSString *_name;

    NSString *_address;

    struct BTDeviceImpl *_device;

}



- (void)_clearName;

- (_Bool)_isNameCached;

- (void)acceptSSP:(long long)arg1;

- (id)address;

- (int)batteryLevel;

- (long long)compare:(id)arg1;

- (void)connect;

- (void)connectWithServices:(unsigned int)arg1;

- (_Bool)connected;

- (unsigned long long)connectedServices;

- (unsigned long long)connectedServicesCount;

- (id)copyWithZone:(struct _NSZone *)arg1;

- (void)dealloc;

- (id)description;

- (struct BTDeviceImpl *)device;

- (void)disconnect;

- (void)endVoiceCommand;

- (id)getServiceSetting:(unsigned int)arg1 key:(id)arg2;

- (id)initWithDevice:(struct BTDeviceImpl *)arg1 address:(id)arg2;

- (_Bool)isAccessory;

- (_Bool)isServiceSupported:(unsigned int)arg1;

- (unsigned int)majorClass;

- (unsigned int)minorClass;

- (id)name;

- (_Bool)paired;

- (id)scoUID;

- (void)setDevice:(struct BTDeviceImpl *)arg1;

- (void)setPIN:(id)arg1;

- (void)setServiceSetting:(unsigned int)arg1 key:(id)arg2 value:(id)arg3;

- (void)setSyncGroup:(int)arg1 enabled:(_Bool)arg2;

- (void)setSyncSettings:(CDStruct_8024420c)arg1;

- (void)startVoiceCommand;

- (_Bool)supportsBatteryLevel;

- (id)syncGroups;

- (CDStruct_8024420c)syncSettings;

- (int)type;

- (void)unpair;



@end

