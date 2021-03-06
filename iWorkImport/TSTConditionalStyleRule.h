/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */





#import "NSCopying.h"



@class TSTCellStyle, TSTFormulaPredicate, TSWPParagraphStyle;



__attribute__((visibility("hidden")))

@interface TSTConditionalStyleRule : NSObject <NSCopying>

{

    TSTFormulaPredicate *mPredicate;

    TSWPParagraphStyle *mTextStyle;

    TSTCellStyle *mCellStyle;

    int _predicateType;

}



+ (id)conditionalStyleRuleWithRule:(id)arg1;

@property(readonly, nonatomic) TSTCellStyle *cellStyle;

- (id)copyByOffsettingRelativeReferencesWithColumnOffset:(short)arg1 rowOffset:(int)arg2;

- (id)copyByRemappingFormulaIDsWithMap:(struct __CFDictionary *)arg1 calcEngine:(id)arg2 error:(_Bool *)arg3;

- (id)copyByRewritingWithSpec:(id)arg1 inOwner:(id)arg2 inCellCoordinate:(CDStruct_0441cfb5)arg3;

- (id)copyWithContext:(id)arg1;

- (id)copyWithZone:(struct _NSZone *)arg1;

- (void)dealloc;

- (id)description;

- (_Bool)evaluateFormulaAtCellID:(CDStruct_0441cfb5)arg1 withCalcEngine:(id)arg2 withFormulaTableID:(struct __CFUUID *)arg3;

@property(readonly, nonatomic) struct TSCEFormula *formula;

- (id)initWithPredicate:(id)arg1 cellStyle:(id)arg2 textStyle:(id)arg3;

- (_Bool)isEqual:(id)arg1;

@property(readonly, nonatomic) TSTFormulaPredicate *predicate;

@property(readonly, nonatomic) int predicateType; // @synthesize predicateType=_predicateType;

@property(readonly, nonatomic) TSWPParagraphStyle *textStyle;



@end


