/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */





@class NSMutableArray, NSObject<OS_dispatch_queue>, RadioFairPlaySAPContext;



@interface RadioFairPlaySAPSessionController : NSObject

{

    NSObject<OS_dispatch_queue> *_accessQueue;

    NSMutableArray *_SAPContextLoadBlocks;

    RadioFairPlaySAPContext *_SAPContext;

}



+ (id)_sharedController;

+ (void)warmSAPSession;

- (void).cxx_destruct;

- (id)_init;

- (id)_loadCertificateDataWithCertificateURL:(id)arg1 error:(id *)arg2;

- (void)_loadSAPContextWithBag:(id)arg1 completionHandler:(id)arg2;

- (id)_performSetupWithURL:(id)arg1 inputData:(id)arg2 error:(id *)arg3;

- (void)_removeCachedSAPContext;

- (id)_setupMescalSessionWithBag:(id)arg1 canUseCachedCertificateData:(_Bool)arg2 error:(id *)arg3;

- (void)_verifyWithURL:(id)arg1 data:(id)arg2 headerFields:(id)arg3 completionHandler:(id)arg4;

- (id)init;



@end


