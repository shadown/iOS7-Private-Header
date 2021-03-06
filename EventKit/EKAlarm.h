/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "EKObject.h"


#import "NSCopying.h"



@class EKCalendarItem, EKObjectToOneRelation, EKStructuredLocation, NSArray, NSDate, NSString;



@interface EKAlarm : EKObject <NSCopying>

{

    EKObjectToOneRelation *_locationRelation;

    EKCalendarItem *_owner;

}



+ (int)_currentAuthorizationStatus;

+ (id)alarmWithAbsoluteDate:(id)arg1;

+ (id)alarmWithRelativeOffset:(double)arg1;

+ (_Bool)areLocationsAllowed;

+ (_Bool)areLocationsAllowedWithAuthorizationStatus:(int)arg1;

+ (_Bool)areLocationsAvailable;

+ (_Bool)areLocationsCurrentlyEnabled;

@property(readonly, nonatomic) NSString *UUID;

- (id)_locationRelation;

- (id)_originalAlarmRelation;

- (id)_snoozedAlarmsRelation;

@property(copy, nonatomic) NSDate *absoluteDate;

@property(copy, nonatomic) NSDate *acknowledgedDate;

- (void)addSnoozedAlarm:(id)arg1;

- (id)copyWithZone:(struct _NSZone *)arg1;

- (void)dealloc;

- (id)description;

@property(readonly, nonatomic) NSString *externalID;

- (id)init;

- (id)initWithAbsoluteDate:(id)arg1;

- (id)initWithRelativeOffset:(double)arg1;

@property(readonly) _Bool isAbsolute;

@property(nonatomic, getter=isDefaultAlarm) _Bool defaultAlarm;

@property(readonly, nonatomic) _Bool isSnoozedAlarm;

- (id)lazyLoadRelationForKey:(id)arg1;

@property(retain, nonatomic) EKObjectToOneRelation *locationRelation; // @synthesize locationRelation=_locationRelation;

@property(retain, nonatomic) EKAlarm *originalAlarm;

@property(retain, nonatomic) EKCalendarItem *owner; // @synthesize owner=_owner;

- (id)ownerUUID;

@property(nonatomic) long long proximity;

- (_Bool)rebase;

@property(nonatomic) double relativeOffset;

- (void)removeSnoozedAlarm:(id)arg1;

@property(copy, nonatomic) NSArray *snoozedAlarms;

@property(copy, nonatomic) EKStructuredLocation *structuredLocation;

- (_Bool)validate:(id *)arg1;



@end


