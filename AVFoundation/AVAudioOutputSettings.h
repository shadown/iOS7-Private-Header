/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "AVOutputSettings.h"


@class NSDictionary;



@interface AVAudioOutputSettings : AVOutputSettings

{

}



+ (id)_audioOutputSettingsWithAudioSettingsDictionary:(id)arg1 exceptionReason:(id *)arg2;

+ (id)_outputSettingsWithOutputSettingsDictionary:(id)arg1 exceptionReason:(id *)arg2;

+ (id)audioConverterPropertiesForAudioSettingsDictionary:(id)arg1;

+ (id)audioOutputSettingsWithAudioSettingsDictionary:(id)arg1;

+ (id)audioOutputSettingsWithTrustedAudioSettingsDictionary:(id)arg1;

+ (id)defaultAudioOutputSettings;

+ (id)registeredOutputSettingsClasses;

@property(readonly, nonatomic) NSDictionary *audioSettingsDictionary;

- (id)compatibleMediaTypes;

- (id)initWithAudioSettingsDictionary:(id)arg1 exceptionReason:(id *)arg2;

- (_Bool)validateUsingOutputSettingsValidator:(id)arg1 reason:(id *)arg2;



@end

