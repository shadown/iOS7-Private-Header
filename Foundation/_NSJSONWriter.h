/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */





@class NSOutputStream;



@interface _NSJSONWriter : NSObject

{

    NSOutputStream *outputStream;

    int kind;

    char *dataBuffer;

    unsigned long long dataBufferLen;

    unsigned long long dataLen;

    _Bool freeDataBuffer;

    char *tempBuffer;

    unsigned long long tempBufferLen;

    long long totalDataWritten;

}



- (long long)appendString:(id)arg1 range:(struct _NSRange)arg2;

- (id)dataWithRootObject:(id)arg1 options:(unsigned long long)arg2 error:(id *)arg3;

- (void)dealloc;

- (void)finalize;

- (id)init;

- (void)resizeTemporaryBuffer:(unsigned long long)arg1;

- (long long)writeRootObject:(id)arg1 toStream:(id)arg2 options:(unsigned long long)arg3 error:(id *)arg4;



@end


