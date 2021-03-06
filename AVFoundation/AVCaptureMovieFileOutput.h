/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "AVCaptureFileOutput.h"


@class AVCaptureMovieFileOutputInternal, NSArray;



@interface AVCaptureMovieFileOutput : AVCaptureFileOutput

{

    AVCaptureMovieFileOutputInternal *_internal;

}



+ (_Bool)consolidateMovieFragmentsInFile:(id)arg1 error:(id *)arg2;

+ (void)initialize;

+ (id)recorderCommonMetadataForAVMetadataItemArray:(id)arg1;

+ (_Bool)updateMovieMetadataInFile:(id)arg1 withMetadata:(id)arg2 error:(id *)arg3;

- (void)_applyOverridesToCaptureOptions:(id)arg1;

- (id)_avErrorUserInfoDictionaryForError:(int)arg1 wrapper:(id)arg2;

- (void)_handleStartRecordingError:(int)arg1 info:(id)arg2;

- (int)_startRecording:(id)arg1;

- (int)_stopRecording;

- (id)connectionMediaTypes;

- (void)dealloc;

- (void)didStopForSession:(id)arg1 error:(id)arg2;

- (_Bool)getRecorderBoolForKey:(id)arg1 withDefault:(_Bool)arg2;

- (void)handleEnabledChangedForConnection:(id)arg1;

- (void)handleNotification:(id)arg1 payload:(id)arg2;

- (id)init;

- (_Bool)isRecording;

- (_Bool)isRecordingPaused;

@property(copy, nonatomic) NSArray *metadata;

@property(nonatomic) CDStruct_1b6d18a9 movieFragmentInterval;

- (id)outputFileURL;

- (id)outputSettingsForConnection:(id)arg1;

- (void)pauseRecording;

- (void)resumeRecording;

- (_Bool)sendsLastVideoPreviewFrame;

- (void)setSendsLastVideoPreviewFrame:(_Bool)arg1;

- (void)startRecordingToOutputFileURL:(id)arg1 recordingDelegate:(id)arg2;

- (void)stopRecording;



@end


