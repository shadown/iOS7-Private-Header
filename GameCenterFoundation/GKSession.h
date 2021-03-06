/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */





@class GKConnection, NSString;



@interface GKSession : NSObject

{

    id _session;

}



+ (void)initialize;

- (_Bool)acceptConnectionFromPeer:(id)arg1 error:(id *)arg2;

- (void)cancelConnectToPeer:(id)arg1;

- (void)connectToPeer:(id)arg1 withTimeout:(double)arg2;

@property(readonly) GKConnection *connection;

- (void)dealloc;

@property id <GKSessionDelegate> delegate;

- (void)denyConnectionFromPeer:(id)arg1;

- (id)description;

- (void)disconnectFromAllPeers;

- (void)disconnectPeerFromAllPeers:(id)arg1;

@property double disconnectTimeout;

@property(readonly) NSString *displayName;

- (id)displayNameForPeer:(id)arg1;

- (id)initWithConnection:(id)arg1 delegate:(id)arg2;

- (id)initWithSessionID:(id)arg1 displayName:(id)arg2 sessionMode:(int)arg3;

@property(getter=isAvailable) _Bool available;

@property(getter=isBusy) _Bool busy;

- (_Bool)isPeerBusy:(id)arg1;

@property(readonly) NSString *peerID;

- (id)peersWithConnectionState:(int)arg1;

@property id <GKSessionPrivateDelegate> privateDelegate;

- (id)privateImpl;

- (_Bool)sendData:(id)arg1 toPeers:(id)arg2 withDataMode:(int)arg3 error:(id *)arg4;

- (_Bool)sendDataToAllPeers:(id)arg1 withDataMode:(int)arg2 error:(id *)arg3;

@property(readonly) NSString *sessionID;

@property(readonly) int sessionMode;

- (void)setDataReceiveHandler:(id)arg1 withContext:(void *)arg2;

@property _Bool wifiEnabled;



@end


