/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "SABaseClientBoundCommand.h"


@class NSArray, NSDate, NSNumber, NSString, NSURL;



@interface SACalendarEventSearch : SABaseClientBoundCommand

{

}



+ (id)eventSearch;

+ (id)eventSearchWithDictionary:(id)arg1 context:(id)arg2;

- (id)encodedClassName;

@property(copy, nonatomic) NSDate *endDate;

@property(copy, nonatomic) NSURL *eventId;

- (id)groupIdentifier;

@property(retain, nonatomic) NSNumber *limit;

@property(copy, nonatomic) NSString *location;

@property(copy, nonatomic) NSString *notes;

@property(copy, nonatomic) NSArray *participants;

- (_Bool)requiresResponse;

@property(copy, nonatomic) NSDate *startDate;

@property(copy, nonatomic) NSURL *targetAppId;

@property(copy, nonatomic) NSString *timeZoneId;

@property(copy, nonatomic) NSString *title;



@end


