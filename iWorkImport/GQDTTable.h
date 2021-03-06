/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "GQDGraphic.h"


#import "GQDNameMappable.h"



@class GQDSStyle, GQDTTableModel;



__attribute__((visibility("hidden")))

@interface GQDTTable : GQDGraphic <GQDNameMappable>

{

    GQDTTableModel *mModel;

    GQDSStyle *mStyle;

    _Bool mIsStreamed;

}



+ (const struct StateSpec *)stateForReading;

- (void)dealloc;

- (id)defaultVectorStyleForVectorType:(int)arg1;

- (_Bool)isStreamed;

- (id)model;

- (void)setModel:(id)arg1;

- (void)setTableStyle:(id)arg1;

- (id)tableStyle;

- (int)walkTableWithGenerator:(Class)arg1 state:(id)arg2;



@end


