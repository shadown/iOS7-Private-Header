/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */





@interface UpdateAndReportServices : NSObject

{

    _Bool _update;

    _Bool _report;

    id _block;

}



@property(copy) id block; // @synthesize block=_block;

- (void)dealloc;

- (id)initWithServices:(_Bool)arg1 needToReport:(_Bool)arg2 service:(id)arg3;

@property(readonly) _Bool report; // @synthesize report=_report;

@property(readonly) _Bool update; // @synthesize update=_update;



@end

