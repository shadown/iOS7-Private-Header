/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "TSDInfoImporter.h"


@class NSError, NSObject<OS_dispatch_queue>, TSDDrawableInfo, TSUBasicProgress;



__attribute__((visibility("hidden")))

@interface TSDImageInfoImporter : TSDInfoImporter

{

    NSObject<OS_dispatch_queue> *mImportQueue;

    TSUBasicProgress *mProgress;

    TSDDrawableInfo *mInfo;

    NSError *mError;

    int mIsCancelled;

}



+ (id)i_supportedFileTypesForSubclass;

- (void)cancel;

- (void)dealloc;

- (id)error;

- (void)importInfoWithCompletionHandler:(id)arg1;

- (id)info;

- (id)initWithContext:(id)arg1 URL:(id)arg2 theme:(id)arg3;

- (id)initWithContext:(id)arg1 imageData:(id)arg2 theme:(id)arg3;

- (id)p_emptyImageStyle;

- (void)p_finishImportingWithInfo:(id)arg1 error:(id)arg2 completionHandler:(id)arg3;

- (id)progress;



@end


