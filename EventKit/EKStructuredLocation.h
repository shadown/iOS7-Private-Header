/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "EKObject.h"


#import "NSCopying.h"



@class CLLocation, NSString;



@interface EKStructuredLocation : EKObject <NSCopying>

{

}



+ (id)locationWithTitle:(id)arg1;

- (id)_persistentLocation;

@property(copy, nonatomic) NSString *addressBookEntityID;

- (id)copyWithZone:(struct _NSZone *)arg1;

- (id)description;

@property(retain, nonatomic) CLLocation *geoLocation;

- (id)init;

@property(readonly, nonatomic) _Bool isStructured;

@property(nonatomic) double radius;

@property(retain, nonatomic) NSString *title;

- (void)updatePersistentObject;



@end


