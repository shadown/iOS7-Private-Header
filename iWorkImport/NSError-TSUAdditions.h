/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "NSError.h"



@interface NSError (TSUAdditions)

+ (id)errorWithDomain:(id)arg1 code:(long long)arg2 alertTitle:(id)arg3 alertMessage:(id)arg4;

+ (id)errorWithDomain:(id)arg1 code:(long long)arg2 alertTitle:(id)arg3 alertMessage:(id)arg4 underlyingError:(id)arg5;

+ (id)errorWithDomain:(id)arg1 code:(long long)arg2 description:(id)arg3 recoverySuggestion:(id)arg4;

+ (id)tsuErrorWithCode:(long long)arg1;

- (_Bool)isCancelError;

- (_Bool)isOutOfSpaceError;

- (id)localizedAlertMessage;

- (id)localizedAlertTitle;

@end

