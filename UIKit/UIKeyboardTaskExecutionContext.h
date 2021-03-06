/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */





@class UIKeyboardTaskQueue;



__attribute__((visibility("hidden")))

@interface UIKeyboardTaskExecutionContext : NSObject

{

    UIKeyboardTaskExecutionContext *_parentExecutionContext;

    id _continuation;

    UIKeyboardTaskQueue *_executionQueue;

}



- (id)childWithContinuation:(id)arg1;

- (void)dealloc;

@property(readonly, nonatomic) UIKeyboardTaskQueue *executionQueue; // @synthesize executionQueue=_executionQueue;

- (id)init;

- (id)initWithExecutionQueue:(id)arg1;

- (id)initWithParentContext:(id)arg1 continuation:(id)arg2;

- (void)returnExecutionToParent;

- (void)transferExecutionToMainThreadWithTask:(id)arg1;



@end


