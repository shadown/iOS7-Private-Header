/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */





#import "NSCoding.h"

#import "NSCopying.h"



@class NSArray, NSData, NSDictionary, NSInputStream, NSLock, NSString, NSURL, SSMutableURLRequestProperties;



@interface ISURLRequest : NSObject <NSCoding, NSCopying>

{

    NSLock *_lock;

    SSMutableURLRequestProperties *_properties;

}



+ (id)requestWithURL:(id)arg1;

@property(retain) NSData *HTTPBody;

@property(retain) NSInputStream *HTTPBodyStream;

@property(retain) NSString *HTTPMethod;

@property long long URLBagType;

@property(retain) NSArray *URLs;

- (id)_initCommon;

@property long long allowedRetryCount;

@property(retain) NSString *appleClientApplication;

@property unsigned long long cachePolicy;

- (id)copyWithZone:(struct _NSZone *)arg1;

@property(retain) NSDictionary *customHeaders;

- (void)dealloc;

- (void)encodeWithCoder:(id)arg1;

@property long long expectedContentLength;

- (id)init;

- (id)initWithCoder:(id)arg1;

- (id)initWithRequestProperties:(id)arg1;

- (id)initWithURL:(id)arg1;

- (id)initWithURLRequest:(id)arg1;

- (_Bool)isEqual:(id)arg1;

@property(readonly) NSURL *primaryURL;

@property(retain) NSDictionary *queryStringDictionary;

- (id)requestProperties;

@property double timeoutInterval;

- (void)setValue:(id)arg1 forHeaderField:(id)arg2;

- (void)setValue:(id)arg1 forQueryStringParameter:(id)arg2;



@end

