/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "EKPersistentObject.h"


@class EKPersistentAttendee, EKPersistentCalendar, EKPersistentLocation, EKPersistentOrganizer, NSData, NSDate, NSSet, NSString, NSTimeZone, NSURL;



__attribute__((visibility("hidden")))

@interface EKPersistentCalendarItem : EKPersistentObject

{

}



+ (id)defaultPropertiesToLoad;

+ (id)relations;

@property(copy, nonatomic) NSURL *URL;

@property(readonly, nonatomic) NSString *UUID;

@property(copy, nonatomic) NSURL *action;

- (void)addAlarm:(id)arg1;

- (void)addAttachment:(id)arg1;

- (void)addAttendee:(id)arg1;

- (void)addDetachedItem:(id)arg1;

- (void)addExceptionDate:(id)arg1;

- (void)addRecurrenceRule:(id)arg1;

@property(copy, nonatomic) NSSet *alarms;

@property(copy, nonatomic) NSSet *attachments;

- (int)attendeeCount;

@property(copy, nonatomic) NSSet *attendees;

@property(retain, nonatomic) EKPersistentCalendar *calendar;

@property(copy, nonatomic) NSDate *creationDate;

- (void)deleteSelfAndDetached;

@property(copy, nonatomic) NSSet *detachedItems;

@property(copy, nonatomic) NSSet *exceptionDates;

@property(copy, nonatomic) NSData *externalData;

@property(copy, nonatomic) NSString *externalID;

- (id)externalModificationTag;

@property(readonly, nonatomic) _Bool hasAlarms;

- (_Bool)hasAttachments;

@property(readonly, nonatomic) _Bool hasAttendees;

@property(readonly, nonatomic) _Bool hasNotes;

@property(readonly, nonatomic) _Bool hasRecurrenceRules;

- (id)init;

@property(nonatomic, getter=isAllDay) _Bool allDay;

@property(nonatomic, getter=isDefaultAlarmRemoved) _Bool defaultAlarmRemoved;

@property(readonly, nonatomic, getter=isDetached) _Bool detached;

- (void)itemDidReplicateInNewCalendar:(id)arg1;

@property(copy, nonatomic) NSDate *lastModifiedDate;

@property(copy, nonatomic) EKPersistentLocation *location;

- (id)moveToCalendar:(id)arg1;

- (id)moveToCalendar:(id)arg1 skipItem:(id)arg2;

@property(copy, nonatomic) NSString *notes;

@property(retain, nonatomic) EKPersistentOrganizer *organizer;

@property(retain, nonatomic) EKPersistentCalendarItem *originalItem;

@property(copy, nonatomic) NSDate *participationStatusModifiedDate;

- (void)primitiveValueChangedForKey:(id)arg1;

@property(nonatomic) int priority;

@property(copy, nonatomic) NSSet *recurrenceRules;

- (void)removeAlarm:(id)arg1;

- (void)removeAttachment:(id)arg1;

- (void)removeAttendee:(id)arg1;

- (void)removeDetachedItem:(id)arg1;

- (void)removeExceptionDate:(id)arg1;

- (void)removeRecurrenceRule:(id)arg1;

@property(retain, nonatomic) EKPersistentAttendee *selfAttendee;

@property(readonly, nonatomic) int selfParticipantStatus;

@property(nonatomic) int sequence;

- (void)setExternalModificationTag:(id)arg1;

@property(copy, nonatomic) NSString *sharedItemCreatedByDisplayName;

@property(copy, nonatomic) NSString *sharedItemCreatedByEmailAddress;

@property(copy, nonatomic) NSString *sharedItemCreatedByFirstName;

@property(copy, nonatomic) NSString *sharedItemCreatedByLastName;

@property(copy, nonatomic) NSDate *sharedItemCreatedDate;

@property(copy, nonatomic) NSTimeZone *sharedItemCreatedTimeZone;

@property(copy, nonatomic) NSString *sharedItemModifiedByDisplayName;

@property(copy, nonatomic) NSString *sharedItemModifiedByEmailAddress;

@property(copy, nonatomic) NSString *sharedItemModifiedByFirstName;

@property(copy, nonatomic) NSString *sharedItemModifiedByLastName;

@property(copy, nonatomic) NSDate *sharedItemModifiedDate;

@property(copy, nonatomic) NSTimeZone *sharedItemModifiedTimeZone;

@property(copy, nonatomic) NSDate *startDate;

@property(copy, nonatomic) NSTimeZone *timeZone;

@property(copy, nonatomic) NSString *title;

@property(copy, nonatomic) NSString *uniqueID;

- (_Bool)validate:(id *)arg1;



@end


