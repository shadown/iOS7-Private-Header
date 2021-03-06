/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "BBXPCConnection.h"


@class NSInvocation, NSString;



@interface BBXPCOutgoingConnection : BBXPCConnection

{

    NSString *_name;

    _Bool _autoReconnect;

    NSInvocation *_connectionEstablishmentInvocation;

}



- (void)_configureRemoteProxy;

- (void)_connectionEstablishedResponse:(id)arg1;

- (id)_signatureForSelectorInRemoteProtocol:(SEL)arg1;

@property(nonatomic) _Bool autoReconnects; // @synthesize autoReconnects=_autoReconnect;

@property(retain, nonatomic) NSInvocation *connectionEstablishmentInvocation; // @synthesize connectionEstablishmentInvocation=_connectionEstablishmentInvocation;

- (void)dealloc;

- (id)description;

- (id)initWithServiceName:(id)arg1 queue:(id)arg2 target:(id)arg3 remoteProtocol:(id)arg4;

- (void)invalidate;

- (void)resume;

@property(readonly, nonatomic) NSString *serviceName; // @synthesize serviceName=_name;

- (void)setEstablishmentSelector:(SEL)arg1 andSendObject:(id)arg2;



@end


