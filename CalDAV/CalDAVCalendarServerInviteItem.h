/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "CoreDAVItem.h"



@class NSMutableSet;



@interface CalDAVCalendarServerInviteItem : CoreDAVItem

{

    NSMutableSet *_users;

}



- (void)addUser:(id)arg1;

- (id)copyParseRules;

- (void)dealloc;

- (id)description;

- (id)init;

- (id)initWithNameSpace:(id)arg1 andName:(id)arg2;

@property(retain) NSMutableSet *users; // @synthesize users=_users;



@end


