/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "SAGKDomainObject.h"


@class NSArray, NSString;



@interface SAGKEncyclopediaDomainObject : SAGKDomainObject

{

}



+ (id)encyclopediaDomainObject;

+ (id)encyclopediaDomainObjectWithDictionary:(id)arg1 context:(id)arg2;

- (id)encodedClassName;

- (id)groupIdentifier;

@property(copy, nonatomic) NSArray *linkedAnswerGroups;

@property(copy, nonatomic) NSString *name;

@property(copy, nonatomic) NSString *nameAnnotation;

@property(copy, nonatomic) NSArray *structuredAnswers;

- (void)updateUsingSet:(id)arg1 add:(id)arg2 remove:(id)arg3;



@end


