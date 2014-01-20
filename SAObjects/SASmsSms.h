/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "SADomainObject.h"


@class NSArray, NSDate, NSNumber, NSString, NSURL, SAPersonAttribute;



@interface SASmsSms : SADomainObject

{

}



+ (id)sms;

+ (id)smsWithDictionary:(id)arg1 context:(id)arg2;

@property(copy, nonatomic) NSURL *attachment;

@property(copy, nonatomic) NSDate *dateSent;

- (id)encodedClassName;

- (id)groupIdentifier;

@property(copy, nonatomic) NSString *message;

@property(copy, nonatomic) NSArray *msgRecipients;

@property(retain, nonatomic) SAPersonAttribute *msgSender;

@property(copy, nonatomic) NSNumber *outgoing;

@property(copy, nonatomic) NSArray *recipients;

@property(copy, nonatomic) NSString *sender;

@property(copy, nonatomic) NSString *subject;

@property(copy, nonatomic) NSString *timezoneId;

- (void)updateUsingSet:(id)arg1 add:(id)arg2 remove:(id)arg3;



@end

