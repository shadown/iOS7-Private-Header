/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */





#import "NSCopying.h"

#import "NSSecureCoding.h"



@interface NSNull : NSObject <NSCopying, NSSecureCoding>

{

}



+ (id)allocWithZone:(struct _NSZone *)arg1;

+ (id)null;

+ (_Bool)supportsSecureCoding;

- (unsigned long long)_cfTypeID;

- (id)copyWithZone:(struct _NSZone *)arg1;

- (void)dealloc;

- (id)description;

- (void)encodeWithCoder:(id)arg1;

- (id)initWithCoder:(id)arg1;

- (oneway void)release;

- (id)retain;

- (unsigned long long)retainCount;



@end

