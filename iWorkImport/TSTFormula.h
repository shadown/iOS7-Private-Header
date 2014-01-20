/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */





#import "NSCopying.h"



@class NSString, TSCECalculationEngine, TSTExpressionNode, TSTTableInfo;



__attribute__((visibility("hidden")))

@interface TSTFormula : NSObject <NSCopying>

{

    TSTExpressionNode *mExpressionTree;

    TSCECalculationEngine *mCalculationEngine;

    TSTTableInfo *mHostInfo;

    NSString *mInitialWhitespace;

    CDStruct_0441cfb5 mHostCell;

    _Bool mSyntaxError;

    _Bool mFixupFormulas;

    _Bool mFormulaWasFixable;

    _Bool mFormulaFixupsShouldStick;

    _Bool mEmpty;

    _Bool mRequireEqualsToken;

}



+ (id)doubleQuoteCharacters;

+ (id)equalsCharacters;

+ (int)formulaQuoteContextAtCharIndex:(unsigned long long)arg1 inStorage:(id)arg2;

+ (id)leadingSingleQuoteEscapeCharacters;

+ (id)leftParenCharacters;

+ (id)p_charactersToTemporarilyChopOffEndToFixSyntaxError;

+ (id)rightParenCharacters;

+ (id)singleQuoteCharacters;

- (id).cxx_construct;

@property(retain, nonatomic) TSCECalculationEngine *calculationEngine; // @synthesize calculationEngine=mCalculationEngine;

- (id)copyWithZone:(struct _NSZone *)arg1;

- (void)dealloc;

@property(retain, nonatomic) TSTExpressionNode *expressionTree; // @synthesize expressionTree=mExpressionTree;

@property(nonatomic) _Bool fixupFormulas; // @synthesize fixupFormulas=mFixupFormulas;

@property(readonly, nonatomic) struct TSCEFormula formula;

@property(readonly, nonatomic) _Bool formulaFixupsShouldStick; // @synthesize formulaFixupsShouldStick=mFormulaFixupsShouldStick;

@property(readonly, nonatomic) _Bool formulaWasFixable; // @synthesize formulaWasFixable=mFormulaWasFixable;

- (_Bool)hasBareArgumentPlaceholders;

- (id)initWithCalculationEngine:(id)arg1 expressionTree:(id)arg2 hostCell:(CDStruct_0441cfb5)arg3 hostTable:(id)arg4;

- (id)initWithCalculationEngine:(id)arg1 hostCell:(CDStruct_0441cfb5)arg2 hostTable:(id)arg3;

- (id)initWithContext:(id)arg1 calculationEngine:(id)arg2 hostCell:(CDStruct_0441cfb5)arg3 TSCEFormula:(const struct TSCEFormula *)arg4 ownerID:(struct __CFUUID *)arg5;

@property(copy, nonatomic) NSString *initialWhitespace; // @synthesize initialWhitespace=mInitialWhitespace;

- (void)insertFormulaText:(id)arg1 includeWhitespace:(_Bool)arg2;

@property(nonatomic, getter=isEmpty) _Bool empty; // @synthesize empty=mEmpty;

@property(nonatomic, getter=isSyntaxError) _Bool syntaxError; // @synthesize syntaxError=mSyntaxError;

- (id)nodesToCheckForBareArgumentPlaceholders;

- (id)p_fixFormula:(id)arg1;

- (void)reparseWithStorage:(id)arg1;

- (void)reparseWithStorage:(id)arg1 adjustExpressionTree:(id)arg2;

@property(nonatomic) _Bool requireEqualsToken; // @synthesize requireEqualsToken=mRequireEqualsToken;

- (void)reset;



@end

