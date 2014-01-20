/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "MFMailMessage.h"


@class DAMailMessage, MFMailboxUid, MFMessage, NSString;



@interface MFDAMessage : MFMailMessage

{

    DAMailMessage *_DAMailMessage;

    MFMessage *_rfc822CreatedMessage;

    MFMailboxUid *_mailbox;

    NSString *_externalConversationID;

}



@property(readonly, nonatomic) DAMailMessage *DAMailMessage; // @synthesize DAMailMessage=_DAMailMessage;

- (void)dealloc;

- (id)externalConversationID;

- (id)headers;

- (id)headersIfAvailable;

- (id)initWithDAMailMessage:(id)arg1 mailbox:(id)arg2;

- (id)mailbox;

- (id)messageBody;

- (_Bool)messageData:(id *)arg1 messageSize:(unsigned long long *)arg2 isComplete:(_Bool *)arg3 downloadIfNecessary:(_Bool)arg4;

- (unsigned long long)messageFlags;

- (unsigned long long)messageSize;

- (id)remoteID;

- (id)remoteMailboxURL;



@end

