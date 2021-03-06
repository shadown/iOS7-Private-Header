/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */





#import "NSCopying.h"



@class NSString;



@interface CNInstantMessageAddress : NSObject <NSCopying>

{

    NSString *_username;

    NSString *_service;

}



+ (id)instantMessageAddressWithUsername:(id)arg1 service:(id)arg2;

- (id)addressDictionary;

- (id)copyWithZone:(struct _NSZone *)arg1;

- (void)dealloc;

- (id)description;

- (id)initWithUsername:(id)arg1 service:(id)arg2;

- (_Bool)isEqual:(id)arg1;

@property(readonly) NSString *service; // @synthesize service=_service;

@property(readonly) NSString *username; // @synthesize username=_username;



@end


