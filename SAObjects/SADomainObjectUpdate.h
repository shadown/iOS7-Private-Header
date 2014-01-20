/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "SABaseClientBoundCommand.h"


#import "SADomainObjectCommand.h"



@class SADomainObject;



@interface SADomainObjectUpdate : SABaseClientBoundCommand <SADomainObjectCommand>

{

}



+ (id)domainObjectUpdate;

+ (id)domainObjectUpdateWithDictionary:(id)arg1 context:(id)arg2;

@property(retain, nonatomic) SADomainObject *addFields;

- (id)encodedClassName;

- (id)groupIdentifier;

@property(retain, nonatomic) SADomainObject *identifier;

@property(retain, nonatomic) SADomainObject *removeFields;

- (_Bool)requiresResponse;

@property(retain, nonatomic) SADomainObject *setFields;



@end

