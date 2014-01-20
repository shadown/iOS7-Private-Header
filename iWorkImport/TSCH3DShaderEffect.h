/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */





#import "TSCH3DShaderEffectStateInfo.h"



__attribute__((visibility("hidden")))

@interface TSCH3DShaderEffect : NSObject <TSCH3DShaderEffectStateInfo>

{

}



+ (id)effect;

+ (Class)stateClass;

+ (id)stateSharingID;

- (void)addVariables:(id)arg1;

- (_Bool)alwaysUploadData;

- (unsigned long long)hash;

- (_Bool)isEqual:(id)arg1;

- (Class)stateClass;

- (id)stateSharingID;

- (void)updateState:(id)arg1 effectsStates:(id)arg2;

- (void)uploadData:(id)arg1 effectsStates:(id)arg2;

- (void)uploadData:(id)arg1 effectsStates:(id)arg2 updateCurrentStates:(id)arg3;



@end

