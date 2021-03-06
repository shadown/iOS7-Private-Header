/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "UIViewController.h"



#import "SBFLockScreenDateFormatter.h"



@class NSDictionary, NSTimer, SBFLockScreenDateView;



@interface _SBFMagicWallpaperPreviewViewController : UIViewController <SBFLockScreenDateFormatter>

{

    id <SBFProceduralWallpaper> _proceduralWallpaper;

    NSDictionary *_wallpaper;

    NSDictionary *_options;

    SBFLockScreenDateView *_dateView;

    NSTimer *_updateTimer;

}



- (void)_layoutDateView;

- (void)_startUpdateTimer;

- (void)_stopUpdateTimer;

- (double)_timeBaselineY;

- (void)_updateView;

- (void)dealloc;

- (id)formatDateAsDayOfWeekMonthDayStyle:(id)arg1;

- (id)formatDateAsTimeNoAMPM:(id)arg1;

- (id)initWithWallpaper:(id)arg1 options:(id)arg2;

- (void)loadView;

- (void)resetFormattersIfNecessary;

- (void)viewDidDisappear:(_Bool)arg1;

- (void)viewWillAppear:(_Bool)arg1;



@end


