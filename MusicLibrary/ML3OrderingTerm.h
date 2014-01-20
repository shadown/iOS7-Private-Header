/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */





#import "NSCoding.h"

#import "NSCopying.h"



@class NSString;



@interface ML3OrderingTerm : NSObject <NSCopying, NSCoding>

{

    int _direction;

    NSString *_property;

    NSString *_collation;

}



- (void).cxx_destruct;

- (void)appendSQLToMutableString:(id)arg1 entityClass:(Class)arg2;

@property(readonly, nonatomic) NSString *collation; // @synthesize collation=_collation;

- (id)copyWithZone:(struct _NSZone *)arg1;

- (id)description;

@property(readonly, nonatomic) int direction; // @synthesize direction=_direction;

- (void)encodeWithCoder:(id)arg1;

- (unsigned long long)hash;

- (id)initWithCoder:(id)arg1;

- (id)initWithProperty:(id)arg1;

- (id)initWithProperty:(id)arg1 direction:(int)arg2;

- (id)initWithProperty:(id)arg1 direction:(int)arg2 collation:(id)arg3;

- (_Bool)isEqual:(id)arg1;

@property(readonly, nonatomic) NSString *property; // @synthesize property=_property;



@end

