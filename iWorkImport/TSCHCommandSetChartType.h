/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "TSCHChartCommand.h"


@class TSCHChartType, TSDInfoGeometryCommand, TSKCommand;



__attribute__((visibility("hidden")))

@interface TSCHCommandSetChartType : TSCHChartCommand

{

    TSCHChartType *mOldType;

    TSCHChartType *mNewType;

    TSDInfoGeometryCommand *mCleanupInfoGeometryCommand;

    TSKCommand *mAnchorAttachmentCommand;

    struct CGRect mLegendRect;

    long long mUndoCollectionDepth;

}



- (id).cxx_construct;

- (void)beginCollectingUndo;

- (const struct ChartCommandArchive *)chartCommandArchiveFromUnarchiver:(id)arg1;

- (void)commitPrimitive;

- (void)dealloc;

- (id)initFromUnarchiver:(id)arg1;

- (id)initWithChartInfo:(id)arg1 chartType:(id)arg2 interactiveCanvasController:(id)arg3;

- (void)p_commit;

- (void)p_commitNewGeometry:(id)arg1;

- (_Bool)p_hasDifferentChartBodyBoundsDefinitions;

- (_Bool)p_isSwitchingToPie;

- (void)p_loadFromArchive:(const struct CommandSetChartTypeArchive *)arg1 unarchiver:(id)arg2;

- (void)p_saveToArchive:(struct CommandSetChartTypeArchive *)arg1 archiver:(id)arg2;

- (_Bool)process;

- (void)redoPrimitive;

- (void)saveToArchiver:(id)arg1;

- (id)stopCollectingUndo;

- (void)undoPrimitive;



@end

