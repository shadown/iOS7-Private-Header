/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "NSOperation.h"


@interface NSBlockOperation : NSOperation

{

    id _private2;

    void *_reserved2;

}



+ (id)blockOperationWithBlock:(id)arg1;

- (void)addExecutionBlock:(id)arg1;

- (void)dealloc;

- (id)executionBlocks;

- (void)finalize;

- (id)init;

- (id)initWithBlock:(id)arg1;

- (void)main;



@end

