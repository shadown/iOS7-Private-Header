/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "UIViewController.h"



#import "PLAssetContainerListChangeObserver.h"

#import "PUSessionInfoObserver.h"

#import "UITabBarControllerDelegate.h"



@class PUPhotosPickerSessionInfo, PUPhotosPickerViewControllerSpec, PUTabbedLibraryViewController;



@interface PUPhotosPickerViewController : UIViewController <UITabBarControllerDelegate, PLAssetContainerListChangeObserver, PUSessionInfoObserver>

{

    PUPhotosPickerViewControllerSpec *_spec;

    PUPhotosPickerSessionInfo *_photosPickerSessionInfo;

    int _currentContentMode;

    id _completionHandler;

    PUTabbedLibraryViewController *__tabbedLibraryViewController;

}



- (void).cxx_destruct;

- (id)_initWithSpec:(id)arg1 targetAlbum:(struct NSObject *)arg2 orTargetAlbumName:(id)arg3 isLocal:(_Bool)arg4;

@property(retain, nonatomic, setter=_setTabbedLibraryViewController:) PUTabbedLibraryViewController *_tabbedLibraryViewController; // @synthesize _tabbedLibraryViewController=__tabbedLibraryViewController;

- (void)assetContainerListDidChange:(id)arg1;

@property(copy, nonatomic) id completionHandler; // @synthesize completionHandler=_completionHandler;

@property(nonatomic) int currentContentMode; // @synthesize currentContentMode=_currentContentMode;

- (void)dealloc;

- (void)didReceiveMemoryWarning;

- (id)initWithSpec:(id)arg1 targetAlbum:(struct NSObject *)arg2;

- (id)initWithSpec:(id)arg1 targetAlbumName:(id)arg2 isLocal:(_Bool)arg3;

- (void)loadView;

- (void)sessionInfoStatusDidChange:(id)arg1;

- (_Bool)shouldAutorotate;

- (unsigned long long)supportedInterfaceOrientations;

- (void)tabBarController:(id)arg1 didSelectViewController:(id)arg2;



@end

