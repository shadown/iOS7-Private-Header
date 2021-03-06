/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "ASTask.h"


@class NSError, NSMutableDictionary, NSString;



@interface ASAutodiscoverTask : ASTask

{

    NSString *_serverURL;

    NSString *_emailAddress;

    NSString *_redirectEmail;

    NSString *_authUsername;

    NSMutableDictionary *_accountInfo;

    NSError *_discoveryError;

}



- (id)_HTTPMethodForRequest:(id)arg1;

- (void)_addAuthToRequest:(id)arg1;

- (id)_easVersion;

- (void)_handleActionNode:(struct _xmlNode *)arg1;

- (void)_handleErrorNode:(struct _xmlNode *)arg1;

- (void)_handleServerNode:(struct _xmlNode *)arg1;

- (void)_handleUserNode:(struct _xmlNode *)arg1;

- (id)_policyKey;

- (void)_setAccountInfoFromAutoDiscoveryXML:(id)arg1;

- (_Bool)_shouldRedirectToHTTPForRequest:(id)arg1;

- (_Bool)_shouldSendAuthForRequest:(id)arg1;

- (id)_url;

- (id)contentType;

- (void)dealloc;

- (void)didProcessContext:(id)arg1;

- (void)finishWithError:(id)arg1;

- (id)initWithURL:(id)arg1 emailAddress:(id)arg2 authUsername:(id)arg3;

- (id)localizedErrorStringForCertificateErrorCode:(int)arg1 host:(id)arg2;

- (_Bool)processContext:(id)arg1;

- (id)requestBody;

- (_Bool)requiresEASVersionInformaton;

- (_Bool)shouldHandlePasswordErrors;

- (_Bool)shouldLogIncomingData;

- (_Bool)shouldStallAfterConnectionLost;

- (double)timeoutInterval;



@end


