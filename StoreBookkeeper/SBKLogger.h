/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */





@class NSFileHandle, NSLock, NSRegularExpression, NSString;



@interface SBKLogger : NSObject

{

    NSString *_auxPath;

    NSFileHandle *_fileHandle;

    NSString *_filter;

    NSString *_runtimeOverride;

    int _pid;

    NSString *_procName;

    NSRegularExpression *_runtimeOverrideRegex;

    NSLock *_lock;

}



+ (_Bool)debugLoggingEnabled;

+ (id)sharedLogger;

+ (_Bool)verboseLoggingEnabled;

- (void).cxx_destruct;

- (void)_updateSettingsFromPreferences:(id)arg1;

- (void)addRuntimeOverride:(id)arg1;

- (id)auxPath;

- (void)dealloc;

@property(copy) NSString *filter; // @synthesize filter=_filter;

- (id)init;

- (void)logFile:(const char *)arg1 lineNumber:(int)arg2 format:(id)arg3;

- (void)logFunction:(const char *)arg1 format:(id)arg2;

- (void)logString:(id)arg1;

- (void)performLoggingBlock:(id)arg1;

- (void)removeRuntimeOverride:(id)arg1;

@property(copy) NSString *runtimeOverride; // @synthesize runtimeOverride=_runtimeOverride;

- (void)setAuxPath:(id)arg1;

- (_Bool)shouldOverrideCondition:(id)arg1 file:(id)arg2;



@end

