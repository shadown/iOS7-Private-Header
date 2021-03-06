/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "UISlider.h"



#import "MPDetailScrubControllerDelegate.h"

#import "MPDetailedScrubbing.h"



@class MPDetailScrubController, NSString, NSTimer, UIImageView, UILabel, UIView;



@interface MPDetailSlider : UISlider <MPDetailedScrubbing, MPDetailScrubControllerDelegate>

{

    UILabel *_currentTimeInverseLabel;

    UILabel *_currentTimeLabel;

    MPDetailScrubController *_scrubController;

    _Bool _allowsScrubbing;

    _Bool _autoscrubActive;

    NSTimer *_autoscrubTimer;

    double _availableDuration;

    _Bool _canCommit;

    double _currentTime;

    id _delegate;

    UIView *_downloadingTrackOverlay;

    double _duration;

    UIImageView *_glowDetailScrubImageView;

    _Bool _isTracking;

    double _minTimeLabelWidth;

    double _maxTrackWidth;

    struct CGPoint _previousLocationInView;

    long long _style;

    struct UIEdgeInsets _timeLabelInsets;

    long long _timeLabelStyle;

    UIImageView *_thumbImageView;

    double _trackInset;

    double _detailScrubbingVerticalRange;

}



+ (double)defaultHeight;

+ (Class)labelClass;

- (void).cxx_destruct;

- (void)_autoscrubTick:(id)arg1;

- (id)_colorSliceImageWithColor:(id)arg1 height:(double)arg2;

- (void)_commitValue;

- (id)_modernThumbImageWithColor:(id)arg1 height:(double)arg2 includeShadow:(_Bool)arg3;

- (void)_resetScrubInfo;

- (void)_setValueWhileTracking:(float)arg1 duration:(double)arg2;

- (void)_setupControlsForStyle;

- (id)_stringForCurrentTime:(double)arg1;

- (id)_stringForInverseCurrentTime:(double)arg1;

- (id)_stringForTime:(double)arg1;

- (void)_updateForAvailableDuraton;

- (void)_updateTimeDisplayForTime:(double)arg1;

- (void)_updateTimeDisplayForTime:(double)arg1 force:(_Bool)arg2;

- (void)_updateTrackInset;

@property(nonatomic) _Bool allowsDetailScrubbing;

@property(nonatomic) _Bool allowsScrubbing; // @synthesize allowsScrubbing=_allowsScrubbing;

@property(nonatomic) double availableDuration; // @synthesize availableDuration=_availableDuration;

- (_Bool)beginTrackingWithTouch:(id)arg1 withEvent:(id)arg2;

- (void)cancelTracking;

- (void)cancelTrackingWithEvent:(id)arg1;

- (_Bool)continueTrackingWithTouch:(id)arg1 withEvent:(id)arg2;

- (id)createThumbView;

- (id)currentThumbImage;

- (void)dealloc;

@property(nonatomic) __weak id <MPDetailSliderDelegate> delegate; // @synthesize delegate=_delegate;

- (void)detailScrubController:(id)arg1 didChangeScrubSpeed:(long long)arg2;

- (void)detailScrubController:(id)arg1 didChangeValue:(float)arg2;

@property(readonly, nonatomic) _Bool detailScrubbingAvailableForCurrentDuration;

@property(nonatomic) double detailScrubbingVerticalRange; // @synthesize detailScrubbingVerticalRange=_detailScrubbingVerticalRange;

@property(nonatomic) double duration; // @synthesize duration=_duration;

- (void)endTrackingWithTouch:(id)arg1 withEvent:(id)arg2;

- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;

- (id)initWithFrame:(struct CGRect)arg1;

- (id)initWithFrame:(struct CGRect)arg1 style:(long long)arg2;

- (id)initWithFrame:(struct CGRect)arg1 style:(long long)arg2 maxTrackWidth:(double)arg3;

- (_Bool)isTracking;

- (void)layoutSubviews;

@property(readonly, nonatomic) NSString *localizedScrubSpeedText;

@property(nonatomic) double minTimeLabelWidth; // @synthesize minTimeLabelWidth=_minTimeLabelWidth;

- (void)setFrame:(struct CGRect)arg1;

@property(nonatomic) struct UIEdgeInsets timeLabelInsets; // @synthesize timeLabelInsets=_timeLabelInsets;

@property(nonatomic) long long timeLabelStyle; // @synthesize timeLabelStyle=_timeLabelStyle;

- (void)setValue:(float)arg1 animated:(_Bool)arg2;

- (void)setValue:(float)arg1 duration:(double)arg2;

- (struct CGRect)thumbHitRect;

- (struct CGRect)thumbRectForBounds:(struct CGRect)arg1 trackRect:(struct CGRect)arg2 value:(float)arg3;

- (struct CGRect)thumbViewRect;

- (id)timeLabelFontForStyle:(long long)arg1;

- (double)timeLabelHorizontalOffsetForStyle:(long long)arg1;

- (id)timeLabelShadowColorForStyle:(long long)arg1;

- (struct CGSize)timeLabelShadowOffsetForStyle:(long long)arg1;

- (id)timeLabelTextColorForStyle:(long long)arg1;

- (double)timeLabelVerticalOffsetForStyle:(long long)arg1;

- (void)tintColorDidChange;

- (struct CGRect)trackRectForBounds:(struct CGRect)arg1;



@end


