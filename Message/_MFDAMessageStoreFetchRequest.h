/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "DAMailboxFetchMessageRequest.h"



#import "MFDAMailAccountRequest.h"



@class MFDAMessageStore, MFMessage, MFMimePart;



@interface _MFDAMessageStoreFetchRequest : DAMailboxFetchMessageRequest <MFDAMailAccountRequest>

{

    id <MFRequestQueueResponseConsumer><DAMailAccountStreamConsumerFactory> consumer;

    MFDAMessageStore *store;

    MFMessage *message;

    MFMimePart *part;

    int format;

    _Bool partial;

}



- (id)deferredOperation;

- (unsigned long long)generationNumber;

- (unsigned long long)hash;

- (_Bool)isEqual:(id)arg1;

@property(readonly, nonatomic) _Bool isUserRequested;

@property(readonly, nonatomic) _Bool shouldSend;



@end


