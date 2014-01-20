/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "RUIHTTPRequest.h"


@class NSURL, RUIParser;



@interface RUILoader : RUIHTTPRequest

{

    RUIParser *_parser;

    NSURL *_url;

    _Bool _allowNonSecureHTTP;

}



- (id)URL;

- (void)_finishLoad;

- (void)alertView:(id)arg1 didDismissWithButtonIndex:(long long)arg2;

- (void)allWebViewsFinishedLoading;

@property(nonatomic) _Bool allowNonSecureHTTP; // @synthesize allowNonSecureHTTP=_allowNonSecureHTTP;

- (_Bool)anyWebViewLoading;

- (void)cancel;

- (void)dealloc;

- (void)didParseData;

- (void)failWithError:(id)arg1;

- (void)loadRequest:(id)arg1;

- (void)loadXMLUIWithData:(id)arg1 baseURL:(id)arg2;

- (void)loadXMLUIWithRequest:(id)arg1;

- (void)loadXMLUIWithURL:(id)arg1;

- (void)parseData:(id)arg1;

- (void)webViewFinishedLoading;



@end

