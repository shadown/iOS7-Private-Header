/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */





#import "NSFilePresenter.h"



@class NSDictionary, NSMutableArray, NSMutableDictionary, NSObject<OS_dispatch_queue>, NSOperationQueue, NSString, NSURL, PFUbiquityLocation;



__attribute__((visibility("hidden")))

@interface PFUbiquityFilePresenter : NSObject <NSFilePresenter>

{

    PFUbiquityLocation *_ubiquityRootLocation;

    NSString *_localPeerID;

    NSURL *_presentedItemURL;

    NSObject<OS_dispatch_queue> *_processingQueue;

    _Bool _scheduledProcessingBlock;

    NSMutableArray *_pendingURLs;

    int _pendingURLsLock;

    NSMutableDictionary *_locationToSafeSaveFile;

    NSMutableDictionary *_locationToStatus;

}



+ (void)initialize;

+ (void)registerInitialSyncHandlerForURL:(id)arg1 onQueue:(id)arg2 withBlock:(id)arg3;

+ (id)sharedPrivateOperationQueue;

+ (void)startDownloadForItems:(id)arg1 onQueue:(id)arg2 withBlock:(id)arg3;

- (void)dealloc;

- (id)description;

- (void)exporterDidMoveLog:(id)arg1;

- (id)init;

- (id)initWithUbiquityRootLocation:(id)arg1 localPeerID:(id)arg2 processingQueue:(id)arg3;

@property(readonly) NSString *localPeerID; // @synthesize localPeerID=_localPeerID;

@property(readonly, nonatomic) NSDictionary *locationToSafeSaveFile; // @synthesize locationToSafeSaveFile=_locationToSafeSaveFile;

@property(readonly, nonatomic) NSDictionary *locationToStatus; // @synthesize locationToStatus=_locationToStatus;

- (void)logImportWasCancelled:(id)arg1;

- (void)logWasExported:(id)arg1;

- (void)logWasImported:(id)arg1;

- (void)logsWereScheduled:(id)arg1;

@property(readonly) NSOperationQueue *presentedItemOperationQueue;

@property(readonly) NSURL *presentedItemURL;

- (void)presentedSubitemDidChangeAtURL:(id)arg1;

- (void)presentedSubitemUbiquityDidChangeAtURL:(id)arg1;

- (void)printStatus:(id)arg1;

- (void)processPendingURLs;

- (void)registerSafeSaveFile:(id)arg1;

- (void)relinquishPresentedItemToReader:(id)arg1;

- (void)relinquishPresentedItemToWriter:(id)arg1;

- (id)retainedStatusForLocation:(id)arg1;

- (void)setupAssistantDiscoveredPathsFromMetadataQuery:(id)arg1;

@property(readonly) PFUbiquityLocation *ubiquityRootLocation; // @synthesize ubiquityRootLocation=_ubiquityRootLocation;

- (void)unregisterSafeSaveFile:(id)arg1;



// Remaining properties

@property(readonly) NSURL *primaryPresentedItemURL;



@end


