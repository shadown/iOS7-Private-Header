/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */





@interface MCPasscodeManager : NSObject

{

}



+ (_Bool)_passcodeCharacteristics:(id)arg1 compliesWithPolicyFromRestrictions:(id)arg2 outError:(id *)arg3;

+ (id)characteristicsDictionaryFromPasscode:(id)arg1;

+ (id)deviceLockedError;

+ (id)generateSalt;

+ (id)hashForPasscode:(id)arg1 usingMethod:(int)arg2 salt:(id)arg3;

+ (_Bool)isDeviceUnlocked;

+ (id)localizedDescriptionOfPasscodePolicyFromRestrictions:(id)arg1;

+ (_Bool)passcode:(id)arg1 compliesWithPolicyFromRestrictions:(id)arg2 checkHistory:(_Bool)arg3 outError:(id *)arg4;

+ (id)sharedManager;

+ (int)unlockScreenTypeForPasscodeCharacteristics:(id)arg1;

+ (int)unlockScreenTypeForRestrictions:(id)arg1;

- (_Bool)_checkPasscode:(id)arg1 againstHistoryWithRestrictions:(id)arg2 outError:(id *)arg3;

- (id)_passcodeCharacteristics;

- (id)_privatePasscodeDict;

- (id)_publicPasscodeDict;

- (id)_wrongPasscodeError;

- (_Bool)currentPasscodeCompliesWithPolicyFromRestrictions:(id)arg1 outError:(id *)arg2;

- (int)currentUnlockScreenType;

- (_Bool)isCurrentPasscodeCompliantOutError:(id *)arg1;

- (_Bool)isDeviceLocked;

- (_Bool)isPasscodeSet;

- (id)localizedDescriptionOfPasscodePolicy;

- (void)lockDevice;

- (void)lockDeviceImmediately:(_Bool)arg1;

- (int)newPasscodeEntryScreenType;

- (_Bool)passcode:(id)arg1 compliesWithPolicyCheckHistory:(_Bool)arg2 outError:(id *)arg3;

- (void)passcodeExpiryDateCompletionBlock:(id)arg1;

- (id)passcodeExpiryDateOutError:(id *)arg1;

- (_Bool)unlockDeviceWithPasscode:(id)arg1 outError:(id *)arg2;



@end


