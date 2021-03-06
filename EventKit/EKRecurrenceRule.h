/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "EKObject.h"


#import "NSCopying.h"



@class EKCalendarItem, EKRecurrenceEnd, NSArray, NSDate, NSString;



@interface EKRecurrenceRule : EKObject <NSCopying>

{

    _Bool _usesEndDate;

    EKRecurrenceEnd *_cachedEnd;

    EKCalendarItem *_owner;

}



+ (id)iCalendarValueFromDate:(id)arg1 isDateOnly:(_Bool)arg2 isFloating:(_Bool)arg3;

+ (id)iCalendarValueFromDayOfTheWeek:(unsigned long long)arg1;

+ (id)iCalendarValueFromRecurrenceType:(int)arg1;

+ (id)recurrenceRuleWithType:(int)arg1 interval:(unsigned long long)arg2 end:(id)arg3;

@property(readonly, nonatomic) NSString *UUID;

- (id)_persistentRule;

@property(retain, nonatomic) EKRecurrenceEnd *cachedEnd; // @synthesize cachedEnd=_cachedEnd;

@property(readonly, nonatomic) NSDate *cachedEndDate;

@property(readonly, nonatomic) NSString *calendarIdentifier;

- (id)copyWithZone:(struct _NSZone *)arg1;

@property(readonly, nonatomic) NSArray *daysOfTheMonth;

@property(readonly, nonatomic) NSArray *daysOfTheWeek;

@property(readonly, nonatomic) NSArray *daysOfTheYear;

- (void)dealloc;

- (id)description;

@property(readonly, nonatomic) _Bool dirtyStateMayAffectExceptionDates;

@property(readonly, nonatomic) long long firstDayOfTheWeek;

@property(readonly, nonatomic) int frequency;

@property(readonly) CDStruct_6e43267c gregorianUnits;

- (id)init;

- (id)initRecurrenceWithFrequency:(int)arg1 interval:(long long)arg2 daysOfTheWeek:(id)arg3 daysOfTheMonth:(id)arg4 monthsOfTheYear:(id)arg5 weeksOfTheYear:(id)arg6 daysOfTheYear:(id)arg7 setPositions:(id)arg8 end:(id)arg9;

- (id)initRecurrenceWithFrequency:(int)arg1 interval:(long long)arg2 end:(id)arg3;

@property(readonly, nonatomic) long long interval;

- (id)lazyLoadRelationForKey:(id)arg1;

- (_Bool)mayOccurAfterDate:(id)arg1;

@property(readonly, nonatomic) NSArray *monthsOfTheYear;

@property(retain, nonatomic) EKCalendarItem *owner; // @synthesize owner=_owner;

- (void)pinToEndsOfMonthsWithCalendarItem:(id)arg1;

@property(copy, nonatomic) EKRecurrenceEnd *recurrenceEnd;

- (void)reset;

- (void)setDaysOfTheMonth:(id)arg1;

- (void)setDaysOfTheWeek:(id)arg1;

- (void)setDaysOfTheYear:(id)arg1;

- (void)setFirstDayOfTheWeek:(unsigned long long)arg1;

- (void)setFrequency:(int)arg1;

- (void)setInterval:(unsigned long long)arg1;

- (void)setMonthsOfTheYear:(id)arg1;

@property(readonly, nonatomic) NSArray *setPositions;

- (void)setSetPositions:(id)arg1;

- (void)setWeeksOfTheYear:(id)arg1;

@property(readonly, nonatomic) _Bool shouldPinMonthDays;

- (id)stringValueAsDateOnly:(_Bool)arg1 isFloating:(_Bool)arg2;

@property(readonly) _Bool usesEndDate; // @synthesize usesEndDate=_usesEndDate;

@property(readonly, nonatomic) NSArray *weeksOfTheYear;



@end


