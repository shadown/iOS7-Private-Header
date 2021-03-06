/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "MPVideoViewController.h"


#import "MPSwipableViewDelegate.h"



@interface MPAbstractFullScreenVideoViewController : MPVideoViewController <MPSwipableViewDelegate>

{

    unsigned int _requestExitAfterHidingControls:1;

    unsigned int _rotateAfterHidingControls:1;

    unsigned int _showControlsAfterRotate:1;

    unsigned int _autoHidingForItemChange:1;

    unsigned int _scheduledAutoHide:1;

}



- (void)_applicationDidBecomeActive:(id)arg1;

- (void)_autohideControlsOverlay;

- (void)_hideOverlayWithAnimation:(_Bool)arg1;

- (void)_hideOverlayWithAnimation:(_Bool)arg1 shouldUpdateAutohideFlag:(_Bool)arg2;

- (void)_resumedEventsOnlyNotification:(id)arg1;

- (_Bool)_shouldUseFullScreenLayoutInWindow:(id)arg1 parentViewController:(id)arg2;

- (long long)_validInterfaceOrientation;

- (_Bool)canDisplayItem:(id)arg1 withInterfaceOrientation:(long long)arg2;

- (_Bool)canHideOverlay:(_Bool)arg1;

- (_Bool)canShowControlsOverlay;

- (void)cancelControlsOverlayAutohide;

- (_Bool)controlsOverlayVisible;

- (void)dealloc;

- (void)displayVideoViewOnScreen;

- (_Bool)forceScaleToFitInPortrait;

- (void)hideOverlayAnimated:(_Bool)arg1;

- (_Bool)inhibitOverlay;

- (id)init;

- (void)loadView;

- (id)newAlternateTracksTransition;

- (void)overlayDidBeginScrubbing:(id)arg1;

- (void)overlayDidEndScrubbing:(id)arg1;

- (void)scheduleControlsOverlayAutohideAfterDelay:(double)arg1;

- (void)setCanShowControlsOverlay:(_Bool)arg1;

- (void)setControlsOverlayVisible:(_Bool)arg1 animate:(_Bool)arg2 force:(_Bool)arg3;

- (void)setDesiredParts:(unsigned long long)arg1 animate:(_Bool)arg2;

- (void)setDisableControlsAutohide:(_Bool)arg1;

- (void)setDisabledParts:(unsigned long long)arg1;

- (void)setInhibitOverlay:(_Bool)arg1;

- (void)setItem:(id)arg1;

- (void)setOrientation:(long long)arg1 animate:(_Bool)arg2;

- (void)setPlayer:(id)arg1;

- (void)setVisibleParts:(unsigned long long)arg1 animate:(_Bool)arg2;

- (void)showOverlayAnimated:(_Bool)arg1;

- (void)showOverlayIfNecessary;

- (void)swipableView:(id)arg1 tappedWithCount:(unsigned long long)arg2 atLocation:(struct CGPoint)arg3;

- (void)swipableViewHadActivity:(id)arg1;

- (void)transformVideoForInterfaceOrientation:(long long)arg1 animate:(_Bool)arg2;

- (_Bool)transportControls:(id)arg1 heldButtonPart:(unsigned long long)arg2;

- (_Bool)transportControls:(id)arg1 releasedHeldButtonPart:(unsigned long long)arg2;

- (_Bool)transportControls:(id)arg1 tappedButtonPart:(unsigned long long)arg2;

- (void)videoView_bufferingStateChangedNotification:(id)arg1;

- (void)videoView_playbackStateChangedNotification:(id)arg1;

- (void)viewDidAppear:(_Bool)arg1;

- (void)viewWillAppear:(_Bool)arg1;

- (void)viewWillDisappear:(_Bool)arg1;



@end


