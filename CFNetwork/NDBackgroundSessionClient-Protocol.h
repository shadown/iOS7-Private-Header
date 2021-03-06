/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */





@protocol NDBackgroundSessionClient <NSObject>

- (void)backgroundDownloadTask:(unsigned long long)arg1 didFinishDownloadingToURL:(id)arg2 reply:(id)arg3;

- (void)backgroundDownloadTask:(unsigned long long)arg1 didWriteData:(long long)arg2 totalBytesWritten:(long long)arg3 totalBytesExpectedToWrite:(long long)arg4;

- (void)backgroundSessionDidFinishAppWake:(id)arg1 reply:(id)arg2;

- (void)backgroundSessionDidStartAppWake:(id)arg1 reply:(id)arg2;

- (void)backgroundTask:(unsigned long long)arg1 didCompleteWithError:(id)arg2 reply:(id)arg3;

- (void)backgroundTask:(unsigned long long)arg1 didReceiveChallenge:(id)arg2 reply:(id)arg3;

- (void)backgroundTask:(unsigned long long)arg1 didReceiveResponse:(id)arg2;

- (void)backgroundTask:(unsigned long long)arg1 didSendBodyData:(long long)arg2 totalBytesSent:(long long)arg3 totalBytesExpectedToSend:(long long)arg4;

- (void)backgroundTaskDidResume:(unsigned long long)arg1;

- (void)backgroundTaskDidSuspend:(unsigned long long)arg1;

- (void)credStorage_allCredentialsWithReply:(id)arg1;

- (void)credStorage_credentialsForProtectionSpace:(id)arg1 reply:(id)arg2;

- (void)credStorage_defaultCredentialForProtectionSpace:(id)arg1 reply:(id)arg2;

- (void)credStorage_getInitialCredentialDictionariesWithReply:(id)arg1;

- (void)credStorage_removeCredential:(id)arg1 forProtectionSpace:(id)arg2;

- (void)credStorage_setCredential:(id)arg1 forProtectionSpace:(id)arg2;

- (void)credStorage_setDefaultCredential:(id)arg1 forProtectionSpace:(id)arg2;

@end


