/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */





#import "SUManagerClientInterface.h"



@class NSXPCConnection, SUDescriptor;



@interface SUManagerClient : NSObject <SUManagerClientInterface>

{

    NSXPCConnection *_serverConnection;

    id <SUManagerClientDelegate> _delegate;

    _Bool _connected;

    _Bool _serverIsExiting;

    int _clientType;

    _Bool _installing;

    SUDescriptor *_installDescriptor;

}



- (void)_invalidateConnection;

- (id)_remoteInterface;

- (id)_remoteInterfaceWithErrorHandler:(id)arg1;

- (id)_remoteInterfaceWithErrorHandler:(id)arg1 connectIfNecessary:(void)arg2;

- (void)_setClientType;

- (void)automaticDownloadDidFailToStartForNewUpdateAvailable:(id)arg1 withError:(id)arg2;

- (void)cancelDownload:(id)arg1;

@property(nonatomic) int clientType; // @synthesize clientType=_clientType;

- (void)connectToServerIfNecessary;

- (void)dealloc;

@property(nonatomic) id <SUManagerClientDelegate> delegate; // @synthesize delegate=_delegate;

- (void)download:(id)arg1;

- (void)downloadDidFail:(id)arg1 withError:(id)arg2;

- (void)downloadDidFinish:(id)arg1;

- (void)downloadDidStart:(id)arg1;

- (void)downloadProgressDidChange:(id)arg1;

- (void)downloadWasInvalidatedForNewUpdateAvailable:(id)arg1;

- (id)init;

- (id)initWithDelegate:(id)arg1;

- (id)initWithDelegate:(id)arg1 clientType:(int)arg2;

@property(retain, nonatomic) SUDescriptor *installDescriptor; // @synthesize installDescriptor=_installDescriptor;

- (void)installDidFail:(id)arg1 withError:(id)arg2;

- (void)installDidFinish:(id)arg1;

- (void)installDidStart:(id)arg1;

- (void)installUpdate:(id)arg1;

- (void)invalidate;

- (void)isDownloading:(id)arg1;

- (void)isScanning:(id)arg1;

- (void)isUpdateReadyForInstallation:(id)arg1;

- (void)noteConnectionDropped;

- (void)noteServerExiting;

- (void)pauseDownload:(id)arg1;

- (void)resumeDownload:(id)arg1;

- (void)scanDidCompleteWithNewUpdateAvailable:(id)arg1 error:(id)arg2;

- (void)scanForUpdates:(id)arg1 withResult:(id)arg2;

- (void)scanRequestDidFinishForOptions:(id)arg1 update:(id)arg2 error:(id)arg3;

- (void)scanRequestDidStartForOptions:(id)arg1;

- (void)startDownload:(id)arg1;

- (void)startDownloadWithMetadata:(id)arg1 withResult:(id)arg2;

- (void)updateDownloadMetadata:(id)arg1 withResult:(id)arg2;



@end

