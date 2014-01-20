/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "UIViewController.h"



#import "ABPeoplePickerNavigationControllerDelegate.h"

#import "ABPersonViewControllerDelegate.h"

#import "ABUnknownPersonViewControllerDelegate.h"

#import "MFComposeRecipientViewDelegate.h"

#import "MFContactsSearchConsumer.h"

#import "UITableViewDataSource.h"

#import "UITableViewDelegate.h"



@class MFComposeRecipientView, MFContactsSearchManager, MFContactsSearchResultsModel, MFSearchShadowView, NSArray, NSNumber, NSString, UIKeyboard, UIScrollView, UITableView;



__attribute__((visibility("hidden")))

@interface EKEventAttendeePicker : UIViewController <UITableViewDataSource, UITableViewDelegate, MFContactsSearchConsumer, MFComposeRecipientViewDelegate, ABPeoplePickerNavigationControllerDelegate, ABPersonViewControllerDelegate, ABUnknownPersonViewControllerDelegate>

{

    NSArray *_recipients;

    MFComposeRecipientView *_composeRecipientView;

    UIScrollView *_recipientScrollView;

    UITableView *_searchResultsView;

    MFSearchShadowView *_shadowView;

    _Bool _showingSearchField;

    UIKeyboard *_keyboard;

    NSNumber *_lastSearchId;

    _Bool _ABAccessDenied;

    MFContactsSearchManager *_searchManager;

    MFContactsSearchResultsModel *_searchResultsModel;

    NSArray *_searchResults;

    _Bool _shouldReenableAutomaticKeyboard;

    struct CGRect _initialFrame;

    NSString *_searchAccountID;

    id <EKEventAttendeePickerDelegate> _emailValidationDelegate;

}



- (void).cxx_destruct;

- (unsigned long long)_atomPresentationOptionsForRecipient:(id)arg1;

- (void)_copyRecipientsFromComposeView;

- (void)_hideSearchFieldAndCancelOutstandingSearches:(_Bool)arg1;

- (double)_maxScrollerHeight;

- (double)_properHeight;

- (id)_searchManager;

- (id)_searchResultsView;

- (void)_setRecipientsOnComposeView;

- (id)_shadowView;

- (void)_showSearchField;

@property(readonly, nonatomic) NSArray *addresses;

- (void)animationDidStop:(id)arg1;

- (void)beganNetworkActivity;

- (void)commitRemainingText;

- (id)composeRecipientView:(id)arg1 composeRecipientForAddress:(id)arg2;

- (id)composeRecipientView:(id)arg1 composeRecipientForRecord:(void *)arg2 identifier:(int)arg3;

- (void)composeRecipientView:(id)arg1 didAddRecipient:(id)arg2;

- (void)composeRecipientView:(id)arg1 didChangeSize:(struct CGSize)arg2;

- (void)composeRecipientView:(id)arg1 didFinishEnteringAddress:(id)arg2;

- (void)composeRecipientView:(id)arg1 didRemoveRecipient:(id)arg2;

- (void)composeRecipientView:(id)arg1 showPersonCardForAtom:(id)arg2;

- (void)composeRecipientView:(id)arg1 textDidChange:(id)arg2;

- (void)composeRecipientViewDidFinishPickingRecipient:(id)arg1;

- (void)composeRecipientViewRequestAddRecipient:(id)arg1;

- (void)consumeSearchResults:(id)arg1 type:(int)arg2 taskID:(id)arg3;

- (void)dealloc;

@property(nonatomic) __weak id <EKEventAttendeePickerDelegate> emailValidationDelegate; // @synthesize emailValidationDelegate=_emailValidationDelegate;

- (void)endedNetworkActivity;

- (void)finishedSearchingForType:(int)arg1;

- (void)finishedTaskWithID:(id)arg1;

- (id)initWithFrame:(struct CGRect)arg1;

- (void)loadView;

- (_Bool)peoplePickerNavigationController:(id)arg1 shouldContinueAfterSelectingPerson:(void *)arg2;

- (_Bool)peoplePickerNavigationController:(id)arg1 shouldContinueAfterSelectingPerson:(void *)arg2 property:(int)arg3 identifier:(int)arg4;

- (void)peoplePickerNavigationControllerDidCancel:(id)arg1;

- (id)peoplePickerPrompt;

- (_Bool)personViewController:(id)arg1 shouldPerformDefaultActionForPerson:(void *)arg2 property:(int)arg3 identifier:(int)arg4;

@property(copy, nonatomic) NSArray *recipients;

@property(readonly, nonatomic) NSString *remainingText;

@property(copy, nonatomic) NSString *searchAccountID; // @synthesize searchAccountID=_searchAccountID;

- (void)searchWithText:(id)arg1;

- (_Bool)tableView:(id)arg1 canEditRowAtIndexPath:(id)arg2;

- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;

- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;

- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;

- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;

- (void)unknownPersonViewController:(id)arg1 didResolveToPerson:(void *)arg2;

- (_Bool)unknownPersonViewController:(id)arg1 shouldPerformDefaultActionForPerson:(void *)arg2 property:(int)arg3 identifier:(int)arg4;

- (void)viewDidLoad;

- (void)viewWillAppear:(_Bool)arg1;

- (void)willAnimateRotationToInterfaceOrientation:(long long)arg1 duration:(double)arg2;



@end

