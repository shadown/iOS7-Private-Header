/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */





__attribute__((visibility("hidden")))

@interface TSKChangeCollector : NSObject

{

}



+ (id)_singletonAlloc;

+ (id)allocWithZone:(struct _NSZone *)arg1;

+ (id)threadCollector;

- (id)autorelease;

- (void)beginCollectingChanges;

- (id)copyWithZone:(struct _NSZone *)arg1;

- (id)endCollectingChanges;

- (id)peekCollectedChanges;

- (void)registerChange:(int)arg1 details:(id)arg2 forChangeSource:(id)arg3;

- (oneway void)release;

- (id)retain;

- (unsigned long long)retainCount;



@end

