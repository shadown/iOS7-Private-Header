/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "UIApplication.h"



#import "MFMailComposeViewControllerDelegate.h"

#import "PLDebugViewControllerDelegate.h"

#import "PLPublishingAgentDelegate.h"

#import "UIApplicationDelegate.h"



@class NSDictionary, NSMutableDictionary, NSMutableSet, NSString, PLDebugViewController, PLLibraryImageDataProvider, PLUIController, UIViewController, UIWindow;



@interface PLPhotosApplication : UIApplication <PLDebugViewControllerDelegate, UIApplicationDelegate, PLPublishingAgentDelegate, MFMailComposeViewControllerDelegate>

{

    PLUIController *_uiController;

    int _delaySuspendCount;

    int _sendingEmailCount;

    _Bool _receivingRemoteControlEvents;

    _Bool _wantsToSuspend;

    unsigned long long _backgroundTaskIdentifier;

    _Bool _isRemaking;

    _Bool _cameraCancelledRemaking;

    UIWindow *_window;

    PLLibraryImageDataProvider *_imageDataProvider;

    NSMutableSet *_publishingAgents;

    NSMutableDictionary *_publishingAgentsByMediaItem;

    int _enableNetworkingFlagsCount;

    NSString *_trimmedFilePath;

    UIViewController *_composeParentViewController;

    _Bool _composeSheetIsReady;

    _Bool _inactiveUnderTaskSwitcher;

    _Bool _urlNeedsHandling;

    _Bool _shouldCancelPublishAfterRemaking;

    int _observeForRechabilityChanges;

    _Bool _isReachable;

    _Bool _isOnWifi;

    int _observeForiMessageAvailability;

    _Bool _photoStreamIsBusy;

    _Bool _sharedPhotoStreamIsBusy;

    int _photoStreamActivityToken;

    int _sharedPhotoStreamActivityToken;

    int _sharedPhotoStreamInvitationFailureToken;

    PLDebugViewController *_debugViewController;

    NSString *_currentTestName;

    NSDictionary *_currentTestOptions;

}



+ (void)initialize;

- (void)_applicationDidBecomeActive:(id)arg1;

- (void)_applicationDidResignActive:(id)arg1;

- (void)_autosaveMailComposition;

- (void)_cancelPublish;

- (void)_cancelRemaking;

- (void)_cleanUpPendingRemakingAndPublishIfNeeded;

- (void)_clearPublishingSheetResponders;

- (void)_discardMediaFilesForPublishingAgentsIfNeeded;

- (void)_discardTrimmedFile;

- (void)_dismissMailComposeController;

- (id)_extendLaunchTest;

- (void)_finishExtendedTest;

- (void)_networkReachabilityDidChange:(id)arg1;

- (void)_registerForPhotoStreamActivityNotifications;

- (void)_setComposeParentViewController:(id)arg1;

- (void)_setImageOptions;

- (void)_showAlertForInterruptionDuringRemaking;

- (void)_showMailComposeSheetForAutosavedMessageWithIdentifier:(id)arg1;

- (void)_startObservingForiMessageAvailability;

- (void)_startObservingReachabilityChanges;

- (void)_statusBarDoubleTap:(id)arg1;

- (void)_stopObservingForiMessageAvailability;

- (void)_stopObservingReachabilityChanges;

- (void)_unregisterForPhotoStreamActivityNotifications;

- (void)_updateNetworkActivityIndicatorAsync;

- (void)_updatePhotoStreamProgressDisplay;

- (void)_updateSharedPhotoStreamProgressDisplay;

- (void)_updateSuspensionSettings;

- (void)addPublishingAgent:(id)arg1;

- (void)applicationDidEnterBackground:(id)arg1;

- (void)applicationDidFinishLaunching:(id)arg1;

- (_Bool)applicationSuspend:(struct __GSEvent *)arg1 settings:(id)arg2;

- (void)applicationWillEnterForeground:(id)arg1;

@property(nonatomic) id <NSCoding> autosaveIdentifier;

- (void)cleanStateAfterPublishForAgent:(id)arg1;

- (id)composeMailForPhotoData:(id)arg1 attachmentName:(id)arg2 withMimeType:(id)arg3 extension:(id)arg4 parentViewController:(id)arg5;

- (void)composeMailForPhotos:(id)arg1 parentViewController:(id)arg2;

- (void)composeMailForVideo:(id)arg1 trimmedFilePath:(id)arg2 parentViewController:(id)arg3;

@property(retain, nonatomic) NSString *currentTestName; // @synthesize currentTestName=_currentTestName;

@property(retain, nonatomic) NSDictionary *currentTestOptions; // @synthesize currentTestOptions=_currentTestOptions;

- (id)currentUIConfiguration;

- (void)dealloc;

- (void)debugViewControllerDidDismiss:(id)arg1;

- (void)disableNetworkObservation;

- (void)disableObservingForiMessageAvailability;

- (void)dismissPublishingViewControllers;

- (void)enableNetworkObservation;

- (void)enableObservingForiMessageAvailability;

- (void *)getSharedAddressBook;

- (id)imageDataProvider;

- (_Bool)isCameraApp;

- (_Bool)isComposeSheetReady;

- (_Bool)isComposingEmail;

@property(readonly, nonatomic) _Bool isOnWifi; // @synthesize isOnWifi=_isOnWifi;

@property(readonly, nonatomic) _Bool isReachable; // @synthesize isReachable=_isReachable;

- (_Bool)isiMessageEnabed;

- (void)mailComposeController:(id)arg1 bodyFinishedLoadingWithResult:(_Bool)arg2 error:(id)arg3;

- (void)mailComposeController:(id)arg1 didFinishWithResult:(int)arg2 error:(id)arg3;

- (id)mainWindow;

- (id)newMailComposeViewControllerWithPhotoData:(id)arg1 attachmentName:(id)arg2 withMimeType:(id)arg3 extension:(id)arg4 identifier:(id *)arg5;

- (void)photosPreferencesChanged;

- (void)presentMailComposeController:(id)arg1 parentViewController:(id)arg2;

- (void)publishingAgentCancelButtonClicked:(id)arg1;

- (void)publishingAgentDidBeginPublishing:(id)arg1;

- (void)publishingAgentDidEndPublishing:(id)arg1 error:(id)arg2;

- (void)publishingAgentDidEndRemaking:(id)arg1 didSucceed:(_Bool)arg2;

- (void)publishingAgentDidStartRemaking:(id)arg1;

- (void)publishingAgentDoneButtonClicked:(id)arg1;

- (id)publishingAgentForMediaItem:(id)arg1;

- (void)publishingAgentWillBeDisplayed:(id)arg1;

- (id)rootViewController;

@property(nonatomic) _Bool sendingEmail;

- (void)setDelaySuspend:(_Bool)arg1;

- (void)setEnableNetworkingFlags:(_Bool)arg1;

- (void)setIsRemaking:(_Bool)arg1;

- (void)setReceivingRemoteControlEvents:(_Bool)arg1;

- (void)setStatusBarStyleIfNecessary:(long long)arg1;

- (void)sharedFinishedLaunching:(_Bool)arg1;

- (_Bool)shouldAllowSBAlertSupression;

- (_Bool)useCompatibleSuspensionAnimation;

- (_Bool)visitViewControllersWithBlock:(id)arg1;



// Remaining properties

@property(retain, nonatomic) UIWindow *window;



@end


