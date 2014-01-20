/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */





@class UIStatusBarViewController, UIView, UIWindow, UIZoomViewController;



@interface UIClassicController : NSObject

{

    UIWindow *_window;

    UIView *_chromeView;

    UIStatusBarViewController *_statusBarViewController;

    UIZoomViewController *_zoomViewController;

    _Bool _hidesClassicChrome;

    _Bool _hidesStatusBarFiller;

}



+ (id)sharedClassicController;

- (void)_classicChangeStatusBarOrientation:(id)arg1;

- (void)_classicChangeStatusBarOrientationFinished:(id)arg1 finished:(_Bool)arg2 context:(id)arg3;

- (void)_initializeStatusBarOrientation;

- (void)_setupWindow;

- (_Bool)_shouldHideStatusBar;

- (_Bool)_supportsZoom;

- (id)_window;

- (void)dealloc;

- (_Bool)drawsStatusBarFiller;

- (_Bool)isClassicControlWindow:(id)arg1;

- (_Bool)isZoomed;

- (void)setDrawsStatusBarFiller:(_Bool)arg1;

- (void)setStatusBarHidden:(_Bool)arg1 animationParameters:(id)arg2;

- (void)setStatusBarOrientation:(long long)arg1 animationParameters:(id)arg2;

- (void)setStatusBarStyle:(long long)arg1 animationParameters:(id)arg2;

- (void)setZoomed:(_Bool)arg1;

- (void)setZoomed:(_Bool)arg1 animated:(_Bool)arg2;



@end

