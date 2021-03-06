/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */





#import "PUPhotoSelectionManagerDelegate.h"



@class NSObject<PLAlbumProtocol>, NSOrderedSet, NSPointerArray, NSString, PUPhotoSelectionManager;



@interface PUSessionInfo : NSObject <PUPhotoSelectionManagerDelegate>

{

    NSPointerArray *_observers;

    _Bool _selectingAssets;

    _Bool _selectingTargetAlbum;

    _Bool _targetAlbumIsNewLocalAlbum;

    long long _status;

    PUPhotoSelectionManager *_photoSelectionManager;

    struct NSObject *_sourceAlbum;

    NSOrderedSet *_transferredAssets;

    struct NSObject *_targetAlbum;

    NSString *_localizedPrompt;

    long long _promptLocation;

    id _bannerGenerator;

}



- (void).cxx_destruct;

- (void)_enumerateObserversWithBlock:(id)arg1;

- (void)addSessionInfoObserver:(id)arg1;

@property(copy, nonatomic) id bannerGenerator; // @synthesize bannerGenerator=_bannerGenerator;

- (id)init;

@property(readonly, nonatomic, getter=isSelectingAssets) _Bool selectingAssets; // @synthesize selectingAssets=_selectingAssets;

@property(readonly, nonatomic, getter=isSelectingTargetAlbum) _Bool selectingTargetAlbum; // @synthesize selectingTargetAlbum=_selectingTargetAlbum;

@property(copy, nonatomic) NSString *localizedPrompt; // @synthesize localizedPrompt=_localizedPrompt;

@property(retain, nonatomic) PUPhotoSelectionManager *photoSelectionManager; // @synthesize photoSelectionManager=_photoSelectionManager;

- (void)photoSelectionManagerSelectionDidChange:(id)arg1;

@property(nonatomic) long long promptLocation; // @synthesize promptLocation=_promptLocation;

- (void)removeSessionInfoObserver:(id)arg1;

@property(retain, nonatomic) NSObject<PLAlbumProtocol> *sourceAlbum; // @synthesize sourceAlbum=_sourceAlbum;

@property(nonatomic) long long status; // @synthesize status=_status;

@property(retain, nonatomic) NSObject<PLAlbumProtocol> *targetAlbum; // @synthesize targetAlbum=_targetAlbum;

@property(nonatomic) _Bool targetAlbumIsNewLocalAlbum; // @synthesize targetAlbumIsNewLocalAlbum=_targetAlbumIsNewLocalAlbum;

@property(copy, nonatomic) NSOrderedSet *transferredAssets; // @synthesize transferredAssets=_transferredAssets;



@end


