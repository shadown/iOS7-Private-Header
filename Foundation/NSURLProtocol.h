/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */





@class NSURLProtocolInternal;



@interface NSURLProtocol : NSObject

{

    NSURLProtocolInternal *_internal;

}



+ (id)_canonicalRequestForRequest:(id)arg1 allowCF:(_Bool)arg2;

+ (id)_makeRequestCanonicalByMakingRequestURLCanonical:(id)arg1;

+ (Class)_protocolClassForRequest:(id)arg1;

+ (Class)_protocolClassForRequest:(id)arg1 allowCF:(_Bool)arg2;

+ (id)_registeredClasses;

+ (void)_removePropertyForKey:(id)arg1 inRequest:(id)arg2;

+ (_Bool)_requestIsCacheEquivalent:(id)arg1 toRequest:(id)arg2 allowCF:(_Bool)arg3;

+ (_Bool)canInitWithRequest:(id)arg1;

+ (id)canonicalRequestForRequest:(id)arg1;

+ (id)propertyForKey:(id)arg1 inRequest:(id)arg2;

+ (_Bool)registerClass:(Class)arg1;

+ (void)removePropertyForKey:(id)arg1 inRequest:(id)arg2;

+ (_Bool)requestIsCacheEquivalent:(id)arg1 toRequest:(id)arg2;

+ (void)setProperty:(id)arg1 forKey:(id)arg2 inRequest:(id)arg3;

+ (void)unregisterClass:(Class)arg1;

- (void)_releaseProtocolClientReference;

- (void)_resumeLoading;

- (void)_suspendLoading;

- (id)cachedResponse;

- (id)client;

- (void)dealloc;

- (id)initWithRequest:(id)arg1 cachedResponse:(id)arg2 client:(id)arg3;

- (id)request;

- (void)startLoading;

- (void)stopLoading;



@end

