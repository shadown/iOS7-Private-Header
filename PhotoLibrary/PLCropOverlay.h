/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "UIView.h"



@class CAMBottomBar, PLContactPhotoOverlay, PLCropOverlayBottomBar, PLCropOverlayCropView, PLCropOverlayWallpaperBottomBar, PLProgressHUD, TPBottomDoubleButtonBar, TPButton, TPCameraButton, UIButton, UIImageView, UILabel, UIToolbar;



@interface PLCropOverlay : UIView

{

    id _delegate;

    PLCropOverlayCropView *_cropView;

    UIImageView *_shadowView;

    UIView *_overlayContainerView;

    struct CGRect _cropRect;

    UIToolbar *_customToolbar;

    UILabel *_titleLabel;

    UIImageView *_topShineView;

    TPBottomDoubleButtonBar *_oldBottomBar;

    TPButton *_cancelPushButton;

    TPCameraButton *_okPushButton;

    PLProgressHUD *_hud;

    float _statusBarHeight;

    int _mode;

    unsigned int _previewMode:1;

    unsigned int _cropRectIsVisible:1;

    unsigned int _offsetStatusBar:1;

    unsigned int _tookPhoto:1;

    unsigned int _showsCropRegion:1;

    unsigned int _controlsAreVisible:1;

    unsigned int _isDisplayedInPopover:1;

    UIImageView *_bottomShineView;

    UIButton *_okButton;

    UIButton *_cancelButton;

    UIView *_wildcatPickerTopView;

    UIView *_wildcatPickerBottomView;

    PLContactPhotoOverlay *_contactPhotoOverlay;

    PLCropOverlayBottomBar *__bottomBar;

    UIButton *__cameraCancelButton;

}



- (void)_backgroundSavePhoto:(id)arg1;

@property(readonly, nonatomic) PLCropOverlayBottomBar *_bottomBar; // @synthesize _bottomBar=__bottomBar;

@property(readonly, nonatomic) UIButton *_cameraCancelButton; // @synthesize _cameraCancelButton=__cameraCancelButton;

- (void)_createCropView;

- (void)_fadeOutCompleted:(id)arg1;

- (id)_irisView;

- (id)_newOverlayViewWithFrame:(struct CGRect)arg1 lighterEdgeOnTop:(_Bool)arg2;

- (void)_pauseButtonPressed:(id)arg1;

- (void)_playButtonPressed:(id)arg1;

- (void)_savePhotoFinished:(id)arg1;

- (void)_setMode:(int)arg1;

- (void)_tappedBottomBarCancelButton:(id)arg1;

- (void)_tappedBottomBarDoneButton:(id)arg1;

- (void)_tappedBottomBarPlaybackButton:(id)arg1;

- (void)_tappedBottomBarSetBothButton;

- (void)_tappedBottomBarSetHomeButton;

- (void)_tappedBottomBarSetLockButton;

- (void)_updateCropRectInRect:(struct CGRect)arg1;

- (void)_updateTitle;

- (void)_updateToolbarItems:(_Bool)arg1;

- (void)beginBackgroundSaveWithTile:(id)arg1 progressTitle:(id)arg2 completionCallbackTarget:(id)arg3 options:(int)arg4;

- (id)bottomBar;

- (struct CGRect)bottomBarFrame;

@property(retain, nonatomic) CAMBottomBar *cameraBottomBar;

- (void)cancelButtonClicked:(id)arg1;

@property(readonly, nonatomic) PLContactPhotoOverlay *contactPhotoOverlay; // @synthesize contactPhotoOverlay=_contactPhotoOverlay;

- (_Bool)controlsAreVisible;

- (void)cropOverlayBottomBarPauseButtonClicked:(id)arg1;

- (void)cropOverlayBottomBarPlayButtonClicked:(id)arg1;

- (struct CGRect)cropRect;

- (void)dealloc;

- (void)didCapturePhoto;

- (void)didCaptureVideo;

- (void)didPauseVideo;

- (void)didPlayVideo;

- (void)dismiss;

- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;

- (id)initWithFrame:(struct CGRect)arg1;

- (id)initWithFrame:(struct CGRect)arg1 mode:(int)arg2;

- (id)initWithFrame:(struct CGRect)arg1 mode:(int)arg2 offsettingStatusBar:(_Bool)arg3 isDisplayedInPopover:(_Bool)arg4 buttonBarStyle:(int)arg5;

- (void)insertIrisView:(id)arg1;

- (_Bool)isTelephonyUIMode:(int)arg1;

- (_Bool)isWallpaperUIMode:(int)arg1;

- (void)layoutSubviews;

- (int)mode;

- (void)okButtonClicked:(id)arg1;

- (id)overlayContainerView;

@property(nonatomic) _Bool previewMode;

- (void)removeProgress;

- (void)setCancelButtonHidden:(_Bool)arg1;

- (void)setCancelButtonTitle:(id)arg1;

- (void)setControlsAreVisible:(_Bool)arg1;

- (void)setCropRectVisible:(_Bool)arg1 duration:(float)arg2;

- (void)setDelegate:(id)arg1;

- (void)setEnabled:(_Bool)arg1;

- (void)setOKButtonColor:(long long)arg1;

- (void)setOKButtonShowsCamera:(_Bool)arg1;

- (void)setOKButtonTitle:(id)arg1;

- (void)setOverlayContainerView:(id)arg1;

- (void)setProgressDone;

- (void)setShowProgress:(_Bool)arg1 title:(id)arg2;

- (void)setShowsCropRegion:(_Bool)arg1;

- (void)setTitle:(id)arg1;

- (void)setTitle:(id)arg1 okButtonTitle:(id)arg2;

- (void)setTitleHidden:(_Bool)arg1 animationDuration:(double)arg2;

- (void)statusBarHeightDidChange:(id)arg1;

- (id)telephonyUIBottomBar;

- (id)telephonyUIShutterButton;

- (struct CGRect)titleRect;

@property(readonly, nonatomic) PLCropOverlayWallpaperBottomBar *wallpaperBottomBar;



@end

