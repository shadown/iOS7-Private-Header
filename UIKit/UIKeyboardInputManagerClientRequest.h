/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */





@class NSInvocation;



__attribute__((visibility("hidden")))

@interface UIKeyboardInputManagerClientRequest : NSObject

{

    NSInvocation *_invocation;

    unsigned long long _errorCount;

}



- (void)dealloc;

@property(nonatomic) unsigned long long errorCount; // @synthesize errorCount=_errorCount;

- (id)initWithInvocation:(id)arg1;

@property(readonly, nonatomic) NSInvocation *invocation;

- (id)untargetedInvocationWithInvocation:(id)arg1;



@end


