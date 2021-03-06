/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "CoreDAVItem.h"



@class CoreDAVErrorItem, CoreDAVItemWithHrefChildItem, CoreDAVLeafItem, ICSDocument, NSString;



@interface CalDAVScheduleResponseDetailsItem : CoreDAVItem

{

    CoreDAVItemWithHrefChildItem *_recipientHREF;

    CoreDAVLeafItem *_requestStatus;

    ICSDocument *_calendarData;

    CoreDAVErrorItem *_topLevelErrorItem;

    NSString *_responseDescription;

}



- (void)_setCalendarDataWithLeafItem:(id)arg1;

@property(retain) ICSDocument *calendarData; // @synthesize calendarData=_calendarData;

- (id)copyParseRules;

- (void)dealloc;

- (id)description;

- (id)initWithNameSpace:(id)arg1 andName:(id)arg2;

@property(retain) CoreDAVItemWithHrefChildItem *recipientHREF; // @synthesize recipientHREF=_recipientHREF;

@property(readonly) NSString *recipientString;

@property(retain) CoreDAVLeafItem *requestStatus; // @synthesize requestStatus=_requestStatus;

@property(retain) NSString *responseDescription; // @synthesize responseDescription=_responseDescription;

@property(retain) CoreDAVErrorItem *topLevelErrorItem; // @synthesize topLevelErrorItem=_topLevelErrorItem;



@end


