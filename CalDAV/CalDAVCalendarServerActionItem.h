/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "CoreDAVItem.h"



@class CalDAVCalendarServerCancelItem, CalDAVCalendarServerReplyItem, CalDAVCalendarServerUpdateItem, CoreDAVItemWithNoChildren;



@interface CalDAVCalendarServerActionItem : CoreDAVItem

{

    CoreDAVItemWithNoChildren *_create;

    CalDAVCalendarServerUpdateItem *_update;

    CalDAVCalendarServerCancelItem *_cancel;

    CalDAVCalendarServerReplyItem *_reply;

}



@property(retain) CalDAVCalendarServerCancelItem *cancel; // @synthesize cancel=_cancel;

- (id)copyParseRules;

@property(retain) CoreDAVItemWithNoChildren *create; // @synthesize create=_create;

- (void)dealloc;

- (id)description;

- (id)init;

- (id)initWithNameSpace:(id)arg1 andName:(id)arg2;

@property(retain) CalDAVCalendarServerReplyItem *reply; // @synthesize reply=_reply;

@property(retain) CalDAVCalendarServerUpdateItem *update; // @synthesize update=_update;



@end

