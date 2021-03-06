/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "NSTask.h"


@class NSMutableDictionary, NSObject<OS_dispatch_semaphore>, NSObject<OS_dispatch_source>, NSPort;



__attribute__((visibility("hidden")))

@interface NSConcreteTask : NSTask

{

    NSObject<OS_dispatch_semaphore> *_lock;

    NSMutableDictionary *_dictionary;

    id _terminationHandler;

    NSObject<OS_dispatch_source> *_dsrc;

    NSPort *_tmpPort;

    long long _suspendCount;

    int _pid;

    int _platformExitInfo;

    _Bool _hasExeced;

    _Bool _isRunning;

    _Bool _hasPostedDeathNotification;

    _Bool _terminationRun;

}



- (long long)_platformExitInformation;

- (int)_procid;

- (void)_withTaskDictionary:(id)arg1;

- (id)arguments;

- (id)currentDirectoryPath;

- (void)dealloc;

- (id)environment;

- (void)finalize;

- (id)init;

- (void)interrupt;

- (_Bool)isRunning;

- (void)launch;

- (id)launchPath;

- (void)launchWithDictionary:(id)arg1;

- (id)preferredArchitectures;

- (int)processIdentifier;

- (_Bool)resume;

- (void)setArguments:(id)arg1;

- (void)setCurrentDirectoryPath:(id)arg1;

- (void)setEnvironment:(id)arg1;

- (void)setLaunchPath:(id)arg1;

- (void)setPreferredArchitectures:(id)arg1;

- (void)setStandardError:(id)arg1;

- (void)setStandardInput:(id)arg1;

- (void)setStandardOutput:(id)arg1;

- (void)setStartsNewProcessGroup:(_Bool)arg1;

- (void)setTaskDictionary:(id)arg1;

- (void)setTerminationHandler:(id)arg1;

- (id)standardError;

- (id)standardInput;

- (id)standardOutput;

- (_Bool)suspend;

- (long long)suspendCount;

- (id)taskDictionary;

- (void)terminate;

- (void)terminateTask;

- (id)terminationHandler;

- (long long)terminationReason;

- (int)terminationStatus;

- (void)waitUntilExit;



@end


