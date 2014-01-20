/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */





#import "NSLocking.h"



@interface NSMultiReadUniWriteLock : NSObject <NSLocking>

{

    void *_priv;

}



+ (id)allocWithZone:(struct _NSZone *)arg1;

- (void)dealloc;

- (id)description;

- (void)finalize;

- (id)init;

- (void)lock;

- (void)lockForReading;

- (_Bool)lockForReadingBeforeDate:(id)arg1;

- (void)lockForWriting;

- (_Bool)lockForWritingBeforeDate:(id)arg1;

- (id)name;

- (void)setName:(id)arg1;

- (_Bool)tryLockForReading;

- (_Bool)tryLockForWriting;

- (void)unlock;



@end

