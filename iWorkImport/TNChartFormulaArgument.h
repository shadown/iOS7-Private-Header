/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */





__attribute__((visibility("hidden")))

@interface TNChartFormulaArgument : NSObject

{

    int mType;

    void *mData;

}



@property(readonly) CDStruct_78b871e1 cellReference;

- (void)dealloc;

- (id)description;

- (id)initWithCellReference:(CDStruct_78b871e1)arg1;

- (id)initWithRangeReference:(CDStruct_5744d895)arg1;

- (id)initWithStaticValue:(const struct TSCEValue *)arg1;

@property(readonly) _Bool isCellReference;

@property(readonly) _Bool isRangeReference;

@property(readonly) _Bool isReference;

@property(readonly) _Bool isStaticValue;

@property(readonly) CDStruct_5744d895 rangeReference;

@property(readonly) struct TSCEValue *staticValue;

@property(readonly) int type; // @synthesize type=mType;



@end

