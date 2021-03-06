/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "EKObject.h"


#import "EKIdentityProtocol.h"

#import "NSCopying.h"



@class EKCalendarItem, NSString, NSURL;



@interface EKParticipant : EKObject <EKIdentityProtocol, NSCopying>

{

    EKCalendarItem *_owner;

}



+ (void *)findABPersonByURL:(id)arg1 inAddressBook:(void *)arg2;

- (void *)ABRecordWithAddressBook:(void *)arg1;

@property(readonly, nonatomic) NSURL *URL;

@property(readonly, nonatomic) NSString *UUID;

- (id)_persistentItem;

@property(copy, nonatomic) NSURL *address;

@property(copy, nonatomic) NSString *comment;

- (id)copyWithZone:(struct _NSZone *)arg1;

@property(copy, nonatomic) NSString *emailAddress;

@property(copy, nonatomic) NSString *firstName;

@property(readonly, nonatomic) _Bool isCurrentUser;

- (_Bool)isEqualToParticipant:(id)arg1;

@property(copy, nonatomic) NSString *lastName;

@property(readonly, nonatomic) NSString *name;

@property(readonly, nonatomic) EKCalendarItem *owner; // @synthesize owner=_owner;

@property(readonly, nonatomic) int participantRole;

@property(readonly, nonatomic) int participantStatus;

@property(readonly, nonatomic) int participantType;

- (void)setDisplayName:(id)arg1;



@end


