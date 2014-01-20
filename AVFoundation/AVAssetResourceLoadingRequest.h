/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */





@class AVAssetResourceLoadingContentInformationRequest, AVAssetResourceLoadingDataRequest, AVAssetResourceLoadingRequestInternal, NSURLRequest, NSURLResponse;



@interface AVAssetResourceLoadingRequest : NSObject

{

    AVAssetResourceLoadingRequestInternal *_loadingRequest;

}



- (void)_addFigPlaybackItemListeners;

- (void)_appendToCachedData:(id)arg1;

- (id)_getAndClearCachedData;

- (void)_removeFigPlaybackItemListeners;

- (id)_requestDictionary;

- (id)_resourceLoader;

- (void)_sendDataIncrementally:(id)arg1 data:(id)arg2;

- (void)_sendDictionaryForURLRequest:(id)arg1 context:(id)arg2;

- (void)_setContentInformationRequest:(id)arg1;

- (void)_setDataRequest:(id)arg1;

- (_Bool)_tryToMarkAsCancelled;

- (id)_weakReference;

@property(readonly, nonatomic) AVAssetResourceLoadingContentInformationRequest *contentInformationRequest;

@property(readonly, nonatomic) AVAssetResourceLoadingDataRequest *dataRequest;

- (void)dealloc;

- (id)description;

- (void)finalize;

- (void)finishLoading;

- (void)finishLoadingWithError:(id)arg1;

- (void)finishLoadingWithResponse:(id)arg1 data:(id)arg2 redirect:(id)arg3;

- (_Bool)finished;

- (void)generateStreamingContentKeyRequestDataAsynchronouslyForApp:(id)arg1 contentIdentifier:(id)arg2 options:(id)arg3 completionHandler:(id)arg4;

- (id)initWithResourceLoader:(id)arg1 requestDictionary:(id)arg2;

@property(readonly, nonatomic, getter=isCancelled) _Bool cancelled;

@property(readonly, nonatomic, getter=isFinished) _Bool finished;

@property(copy, nonatomic) NSURLRequest *redirect;

@property(readonly, nonatomic) NSURLRequest *request;

@property(copy, nonatomic) NSURLResponse *response;

- (id)serializableRepresentation;

- (id)streamingContentKeyRequestDataForApp:(id)arg1 contentIdentifier:(id)arg2 options:(id)arg3 error:(id *)arg4;



@end

