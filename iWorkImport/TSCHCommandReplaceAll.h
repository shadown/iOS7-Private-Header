/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "TSKReplaceAllChildCommand.h"


@class NSMutableArray, TSCHChartDrawableInfo;



__attribute__((visibility("hidden")))

@interface TSCHCommandReplaceAll : TSKReplaceAllChildCommand

{

    TSCHChartDrawableInfo *mInfo;

    NSMutableArray *mCommands;

}



- (void)commit;

- (void)dealloc;

- (id)initFromUnarchiver:(id)arg1;

- (id)initWithParentCommand:(id)arg1 chartInfo:(id)arg2;

- (void)p_addSubcommandsForStyleOwner:(id)arg1 property:(int)arg2;

- (_Bool)process;

- (void)redo;

- (void)saveToArchiver:(id)arg1;

- (_Bool)shouldRunSynchronously;

- (void)undo;



@end

