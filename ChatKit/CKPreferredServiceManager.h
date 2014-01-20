/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */





@class NSArray, NSMutableArray;



@interface CKPreferredServiceManager : NSObject

{

    NSArray *_servicePrecedence;

    NSArray *_potentialServices;

    NSMutableArray *_knownHandles;

}



+ (id)alloc;

+ (id)sharedPreferredServiceManager;

- (unsigned long long)__preferredServiceTypeForRecipientCount:(long long)arg1 options:(unsigned long long)arg2 error:(char *)arg3;

- (unsigned long long)__preferrediMessageFallbackServiceForRecipientCount:(long long)arg1 iMessageAvailable:(_Bool)arg2 options:(unsigned long long)arg3 error:(char *)arg4;

- (BOOL)_availabilityForHandle:(id)arg1 onService:(id)arg2 checkWithServer:(_Bool)arg3 actualHandle:(id *)arg4;

- (void)_clearCaches;

- (void)_handleConnectionChanged:(id)arg1;

- (void)_handleDeviceCapabilitiesChanged:(id)arg1;

- (void)_handleIMHandleIDStatusChanged:(id)arg1;

- (void)_handleLoginStatusChange:(id)arg1;

- (void)_handleOperationalAccountsChanged:(id)arg1;

- (void)_handleServiceAvailabilityChanged:(id)arg1;

- (_Bool)_isiMessageAvailable;

- (unsigned long long)_optionsForRecipients:(id)arg1;

- (id)_preferredServiceForAddressStrings:(id)arg1 newComposition:(_Bool)arg2 checkWithServer:(_Bool)arg3 error:(char *)arg4;

- (id)_preferredServiceForHandles:(id)arg1 allowUnknown:(_Bool)arg2 checkWithServer:(_Bool)arg3;

- (id)_preferredServiceForHandles:(id)arg1 newComposition:(_Bool)arg2 checkWithServer:(_Bool)arg3 error:(char *)arg4;

- (id)_preferredServiceForHandles:(id)arg1 options:(unsigned long long)arg2 error:(char *)arg3;

- (id)_preferredServiceForRecipientsCount:(long long)arg1 options:(unsigned long long)arg2 error:(char *)arg3;

- (void)_updatePotentialServices;

- (BOOL)availabilityForAddress:(id)arg1 onService:(id)arg2 checkWithServer:(_Bool)arg3;

- (BOOL)availabilityForHandle:(id)arg1 onService:(id)arg2 checkWithServer:(_Bool)arg3;

- (void)dealloc;

- (id)init;

- (_Bool)isMultiService;

- (void)notifyOfPotentialServicesChange;

- (void)notifyOfServiceAvailabilityChange;

@property(copy, nonatomic) NSArray *potentialServices; // @synthesize potentialServices=_potentialServices;

- (id)preferredService;

- (id)preferredServiceForAddressString:(id)arg1 newComposition:(_Bool)arg2 checkWithServer:(_Bool)arg3 error:(char *)arg4;

- (id)preferredServiceForConversation:(id)arg1 newComposition:(_Bool)arg2 checkWithServer:(_Bool)arg3 error:(char *)arg4;

- (id)preferredServiceForHandle:(id)arg1 newComposition:(_Bool)arg2 checkWithServer:(_Bool)arg3 error:(char *)arg4;

- (void)preferredServiceForHandles:(id)arg1 newComposition:(_Bool)arg2 checkWithServer:(_Bool)arg3 completion:(id)arg4;

- (id)preferredServiceForHandles:(id)arg1 newComposition:(_Bool)arg2 checkWithServer:(_Bool)arg3 error:(char *)arg4;

- (id)preferredServiceForMFComposeRecipients:(id)arg1 newComposition:(_Bool)arg2 checkWithServer:(_Bool)arg3 error:(char *)arg4;

- (void)prepareForResume;

- (void)refreshAvailabilityForAddressStrings:(id)arg1;

- (void)refreshAvailabilityForConversation:(id)arg1;

- (void)refreshAvailabilityForMFComposeRecipients:(id)arg1;

@property(copy, nonatomic) NSArray *servicePrecedence; // @synthesize servicePrecedence=_servicePrecedence;



@end

