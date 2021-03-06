/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "UINavigationController.h"



@class GKComposeHostedViewController, NSString;



@interface GKFriendRequestComposeViewController : UINavigationController

{

    id <GKFriendRequestComposeViewControllerDelegate> _composeViewDelegateWeak;

    GKComposeHostedViewController *_composeController;

    NSString *_message;

    unsigned long long _recipientCount;

}



+ (_Bool)_preventsAppearanceProxyCustomization;

+ (unsigned long long)maxNumberOfRecipients;

- (void)__viewControllerWillBePresented:(_Bool)arg1;

- (void)addRecipientsWithEmailAddresses:(id)arg1;

- (void)addRecipientsWithPlayerIDs:(id)arg1;

- (_Bool)automaticallyForwardAppearanceAndRotationMethodsToChildViewControllers;

@property(retain, nonatomic) GKComposeHostedViewController *composeController; // @synthesize composeController=_composeController;

@property(nonatomic) id <GKFriendRequestComposeViewControllerDelegate> composeViewDelegate; // @synthesize composeViewDelegate=_composeViewDelegateWeak;

- (void)dealloc;

- (id)init;

@property(retain, nonatomic) NSString *message; // @synthesize message=_message;

- (_Bool)navigationBarHidden;

- (void)prepareForNewRecipients:(id)arg1;

@property(nonatomic) unsigned long long recipientCount; // @synthesize recipientCount=_recipientCount;

@property(nonatomic) unsigned int rid;

- (void)sendFinishedMessageToDelegateCancelled:(_Bool)arg1;

- (_Bool)shouldAutomaticallyForwardAppearanceMethods;

- (_Bool)shouldAutomaticallyForwardRotationMethods;

- (_Bool)shouldAutorotateToInterfaceOrientation:(long long)arg1;

- (unsigned long long)supportedInterfaceOrientations;

- (void)viewDidAppear:(_Bool)arg1;

- (void)viewDidLoad;

- (void)viewWillAppear:(_Bool)arg1;

- (void)viewWillDisappear:(_Bool)arg1;



@end


