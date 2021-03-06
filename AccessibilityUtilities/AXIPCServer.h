/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */





@class NSMutableDictionary, NSMutableSet, NSString;



@interface AXIPCServer : NSObject

{

    id _defaultHandler;

    struct __CFRunLoopSource *_serverRunLoopSource;

    struct __CFRunLoopSource *_clientInvalidationSource;

    unsigned int _serverPort;

    unsigned int _clientInvalidationPort;

    NSMutableDictionary *_validSecurityTokens;

    NSMutableSet *_connectedClients;

    id _clientInvalidationHandler;

    NSMutableDictionary *_entitlements;

    unsigned int _assignedServerPort;

    _Bool _running;

    NSString *_serviceName;

    NSMutableDictionary *_handlers;

}



- (id)_clientIdentificationForAuditToken:(CDStruct_4c969caf)arg1;

- (_Bool)_clientWithPort:(unsigned int)arg1 auditToken:(CDStruct_4c969caf)arg2 hasAnyEntitlementRequiredForMessage:(id)arg3;

- (void)_handleClientInvalidation:(unsigned int)arg1;

- (void)_handleClientRegistration:(id)arg1;

- (_Bool)_handleErrorWithMessage:(id)arg1 outError:(id *)arg2;

- (id)_handleIncomingMessage:(id)arg1 securityToken:(CDStruct_52eb0d21)arg2 auditToken:(CDStruct_4c969caf)arg3 clientPort:(unsigned int)arg4;

- (void)_startServerThread;

- (void)addPossibleRequiredEntitlement:(id)arg1 forMessageWithKey:(int)arg2;

@property(copy, nonatomic) id clientInvalidationCallback;

- (void)dealloc;

@property(copy, nonatomic) id defaultHandler;

- (id)description;

@property(retain, nonatomic) NSMutableDictionary *handlers; // @synthesize handlers=_handlers;

- (id)initWithPort:(unsigned int)arg1 serviceRunLoopSource:(struct __CFRunLoopSource *)arg2;

- (id)initWithServiceName:(id)arg1;

@property(nonatomic, getter=isRunning) _Bool running; // @synthesize running=_running;

@property(readonly, nonatomic) unsigned int machPort; // @synthesize machPort=_serverPort;

- (void)removeAllHandlersForTarget:(id)arg1;

- (void)removeHandlerForKey:(int)arg1;

- (void)removePossibleRequiredEntitlement:(id)arg1 forMessageWithKey:(int)arg2;

@property(retain, nonatomic) NSString *serviceName; // @synthesize serviceName=_serviceName;

- (void)setHandler:(id)arg1 forKey:(void)arg2;

- (void)setHandlerWithTarget:(id)arg1 selector:(SEL)arg2 forKey:(int)arg3;

- (void)setHandlerWithTarget:(id)arg1 selector:(SEL)arg2 forKey:(int)arg3 possibleRequiredEntitlements:(id)arg4;

- (void)setServiceRunLoopSource:(struct __CFRunLoopSource *)arg1;

- (_Bool)startServerWithError:(id *)arg1;

- (_Bool)stopServerWithError:(id *)arg1;



@end


