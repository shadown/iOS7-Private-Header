/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "DeliveryAccount.h"


@class DAMailAccount;



@interface DADeliveryAccount : DeliveryAccount

{

    DAMailAccount *_DAMailAccount;

}



- (void)dealloc;

- (Class)deliveryClass;

- (id)initWithDAMailAccount:(id)arg1;

- (id)mailAccountIfAvailable;

- (id)newDeliveryWithHeaders:(id)arg1 HTML:(id)arg2 plainTextAlternative:(id)arg3 other:(id)arg4 charsets:(id)arg5;

- (id)newDeliveryWithHeaders:(id)arg1 mixedContent:(id)arg2 textPartsAreHTML:(_Bool)arg3;

- (id)newDeliveryWithMessage:(id)arg1;



@end


