/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */





#import "CKFileTransfer.h"



@class NSDictionary, NSError, NSString, NSURL;



@interface CKDBFileTransfer : NSObject <CKFileTransfer>

{

    NSString *_guid;

    NSURL *_fileURL;

    NSDictionary *_transcoderUserInfo;

    id <CKMessage> _message;

    NSString *_filename;

    long long _transferState;

}



@property(readonly, nonatomic) unsigned long long currentBytes;

- (void)dealloc;

- (id)description;

@property(readonly, nonatomic) NSError *error;

@property(readonly, nonatomic) NSURL *fileURL; // @synthesize fileURL=_fileURL;

@property(copy, nonatomic) NSString *filename; // @synthesize filename=_filename;

@property(readonly, nonatomic) NSString *guid; // @synthesize guid=_guid;

- (id)initWithFileURL:(id)arg1 transcoderUserInfo:(id)arg2;

- (id)initWithTransferGUID:(id)arg1 message:(id)arg2;

@property(readonly, nonatomic, getter=isDownloadable) _Bool downloadable;

@property(readonly, nonatomic, getter=isDownloading) _Bool downloading;

@property(readonly, nonatomic, getter=isFileDataReady) _Bool fileDataReady;

@property(readonly, nonatomic, getter=isFileURLFinalized) _Bool fileURLFinalized;

@property(readonly, nonatomic, getter=isRestoring) _Bool restoring;

- (void)mediaObjectAdded;

- (void)mediaObjectRemoved;

@property(retain, nonatomic) id <CKMessage> message; // @synthesize message=_message;

@property(nonatomic) long long transferState; // @synthesize transferState=_transferState;

@property(readonly, nonatomic) unsigned long long totalBytes;

@property(readonly, nonatomic) NSDictionary *transcoderUserInfo; // @synthesize transcoderUserInfo=_transcoderUserInfo;



@end

