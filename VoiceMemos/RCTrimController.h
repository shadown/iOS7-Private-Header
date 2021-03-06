/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */





#import "RCAVPreviewControllerObserver.h"

#import "RCTrimControlDelegate.h"



@class AVAssetExportSession, AVItem, NSString, RCAVPreviewController, RCSavedRecording, RCTrimControl, UIButton, UIView, UIWindow;



@interface RCTrimController : NSObject <RCTrimControlDelegate, RCAVPreviewControllerObserver>

{

    id _completionHandler;

    NSString *_confirmButtonTitle;

    UIButton *_confirmButton;

    UIButton *_cancelButton;

    UIButton *_playButton;

    UIView *_containerView;

    UIView *_dimmingView;

    AVAssetExportSession *_exportSession;

    AVItem *_recordingItem;

    NSString *_recordingPath;

    NSString *_remadeRecordingPath;

    _Bool _playing;

    RCAVPreviewController *_previewController;

    double _startTimeInterval;

    double _endTimeInterval;

    double _minTrimmedDuration;

    double _maxTrimmedDuration;

    UIWindow *_statusBarDimmingWindow;

    RCTrimControl *_trimControl;

    UIView *_view;

    id <RCTrimControllerDelegate> _delegate;

    RCSavedRecording *_recording;

}



- (void).cxx_destruct;

- (void)_applicationWillResignActive:(id)arg1;

- (void)_beginPreview;

- (void)_cancel:(id)arg1;

- (void)_confirm:(id)arg1;

- (void)_dismiss;

- (void)_endPreview;

- (void)_initialize;

- (id)_newButtonWithStyle:(long long)arg1;

- (void)_pausePreview;

- (void)_play:(id)arg1;

- (id)_recordingAVItem;

- (double)_recordingDuration;

- (id)_recordingPath;

- (void)_resumePreview;

- (id)_view;

@property(copy, nonatomic) NSString *confirmButtonTitle;

- (void)dealloc;

@property(nonatomic) __weak id <RCTrimControllerDelegate> delegate; // @synthesize delegate=_delegate;

@property(nonatomic) double endTimeInterval; // @synthesize endTimeInterval=_endTimeInterval;

- (id)init;

- (id)initWithRecordingPath:(id)arg1;

- (id)initWithSavedRecording:(id)arg1;

@property(readonly, nonatomic) _Bool isTrimming;

@property(nonatomic) double maxTrimmedDuration; // @synthesize maxTrimmedDuration=_maxTrimmedDuration;

@property(nonatomic) double minTrimmedDuration; // @synthesize minTrimmedDuration=_minTrimmedDuration;

- (void)presentInWindow:(id)arg1 completionHandler:(id)arg2;

- (void)previewController:(id)arg1 playbackDidBeginWithRate:(float)arg2;

- (void)previewController:(id)arg1 playbackDidStopPlayingWithError:(id)arg2;

- (void)previewController:(id)arg1 playbackTimeDidJumpWithPreviousTime:(double)arg2;

- (void)previewController:(id)arg1 playbackTimeDidUpdateToCurrentTime:(double)arg2;

@property(readonly, nonatomic) RCSavedRecording *recording; // @synthesize recording=_recording;

@property(readonly, nonatomic) NSString *recordingPath; // @synthesize recordingPath=_recordingPath;

@property(nonatomic) double startTimeInterval; // @synthesize startTimeInterval=_startTimeInterval;

- (void)trimControl:(id)arg1 didScrubToTimeInterval:(double)arg2;

- (void)trimControlDidBeginScrubbing:(id)arg1;

- (void)trimControlDidBeginTrimming:(id)arg1;

- (void)trimControlDidEndScrubbing:(id)arg1;

@property(readonly, nonatomic) float trimmingProgress;



@end


