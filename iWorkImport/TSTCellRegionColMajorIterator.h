/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */





#import "TSTCellRegionIterating.h"



__attribute__((visibility("hidden")))

@interface TSTCellRegionColMajorIterator : NSObject <TSTCellRegionIterating>

{

    set_1b864098 mCellRangeSet;

    CDStruct_0441cfb5 mCellID;

    CDStruct_5f1f7aa9 mBoundingCellRange;

}



- (id).cxx_construct;

- (void).cxx_destruct;

- (void)dealloc;

- (CDStruct_0441cfb5)getNext;

- (id)initWithCellRegion:(id)arg1;

- (void)terminate;



@end

