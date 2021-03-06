/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */





#import "DAResolveRecipientsConsumer.h"



@class MFConditionLock, NSDictionary, NSError;



@interface _MFDAResolveRecipientsConsumer : NSObject <DAResolveRecipientsConsumer>

{

    MFConditionLock *_conditionLock;

    NSDictionary *_resolvedRecipientsByEmailAddress;

    NSError *_error;

}



- (void)actionFailed:(int)arg1 forTask:(id)arg2 error:(id)arg3;

- (void)dealloc;

@property(readonly) NSError *error;

- (id)init;

- (void)resolvedRecipientsByEmailAddress:(id)arg1;

- (id)waitForResolvedRecipients;



@end


