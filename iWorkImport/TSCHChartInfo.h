/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */





#import "NSCopying.h"

#import "TSCHStyleOwning.h"

#import "TSCHUnretainedParent.h"



@class NSArray, NSMutableArray, NSMutableDictionary, NSString, TSCHChartDrawableInfo, TSCHChartLayoutCache, TSCHChartMediator, TSCHChartModel, TSCHChartStylePreset, TSCHChartType, TSCHLegendModel, TSDInfoGeometry, TSPLazyReference, TSSStylesheet;



__attribute__((visibility("hidden")))

@interface TSCHChartInfo : NSObject <TSCHStyleOwning, TSCHUnretainedParent, NSCopying>

{

    TSCHChartModel *mModel;

    id <TSCHStyleActAlike> mStyle;

    id <TSCHStyleActAlike> mNonStyle;

    TSCHChartType *mChartType;

    TSCHLegendModel *mLegendModel;

    TSCHChartMediator *mChartMediator;

    TSPLazyReference *mLazyPreset;

    struct CGRect mInnerChartFrame;

    id <TSCHStyleActAlike> mLegendStyle;

    id <TSCHStyleActAlike> mLegendNonStyle;

    NSMutableArray *mValueAxisStyles;

    NSMutableArray *mCategoryAxisStyles;

    NSMutableArray *mValueAxisNonStyles;

    NSMutableArray *mCategoryAxisNonStyles;

    NSMutableArray *mThemeSeriesStyles;

    NSMutableArray *mPrivateSeriesStyles;

    NSMutableArray *mSeriesNonStyles;

    NSMutableArray *mParagraphStyles;

    struct CGPoint mPreviewOrigin;

    _Bool mDisplayMessageOnRepCreation;

    NSString *mMessageString;

    double mMessageDuration;

    TSDInfoGeometry *mNonInfoGeometry;

    TSCHChartDrawableInfo *mDrawableInfo;

    _Bool mNeedsCalcEngineDependentUpgrade;

    _Bool mNeedsCalcEngineDependentImport;

    NSMutableDictionary *mStyleViewProxyMap;

    NSArray *mStyleViewProxyParagraphStyleArray;

    unsigned long long mLastSeriesIndex;

}



+ (double)beginValueForStackedBarSeries:(id)arg1 index:(unsigned long long)arg2 unitSpaceIntercept:(double)arg3 relativelyPositive:(_Bool)arg4 valueAxis:(id)arg5;

+ (id)categoryAxisStyleIdentifierForRoleIndex:(unsigned long long)arg1 ordinal:(unsigned long long)arg2;

+ (id)chartStyleIdentifierForRoleIndex:(unsigned long long)arg1;

+ (Class)classForAxisNonstyle;

+ (Class)classForAxisStyle;

+ (Class)classForChartNonstyle;

+ (Class)classForChartStyle;

+ (Class)classForLegendNonstyle;

+ (Class)classForLegendStyle;

+ (Class)classForSeriesNonstyle;

+ (Class)classForSeriesStyle;

+ (_Bool)groupedShadowsForChartModel:(id)arg1;

+ (id)legendStyleIdentifierForRoleIndex:(unsigned long long)arg1;

+ (id)p_currentThreadSceneAreaLayoutCache;

+ (id)p_stylesheetFromOrderedArrayOfSources:(id)arg1;

+ (id)paragraphStyleIdentifierForRoleIndex:(unsigned long long)arg1 ordinal:(unsigned long long)arg2;

+ (id)paragraphStyleIndexProperties;

+ (id)paragraphStylePropertiesChartsUse;

+ (id)propertiesThatInvalidateModel;

+ (id)seriesStyleIdentifierForRoleIndex:(unsigned long long)arg1 ordinal:(unsigned long long)arg2;

+ (void)setCurrentThreadSceneAreaLayoutCache:(id)arg1;

+ (id)swapTuplesForParagraphStyleMutations:(id)arg1 forReferencingProperty:(int)arg2 forStyleOwner:(id)arg3;

+ (id)valueAxisStyleIdentifierForRoleIndex:(unsigned long long)arg1 ordinal:(unsigned long long)arg2;

- (unsigned long long)addParagraphStyle:(id)arg1;

- (void)addViewStyleProxyForMutationTuples:(id)arg1 layouts:(id)arg2;

- (void)adoptStylesheet:(id)arg1 withMapper:(id)arg2;

- (void)applyChartStyleState:(id)arg1;

- (id)applyStyleSwapTuple:(id)arg1;

- (id)applyStyleSwapTuples:(id)arg1;

- (id)categoryAxisNonstyleAtIndex:(unsigned long long)arg1;

- (id)categoryAxisStyleAtIndex:(unsigned long long)arg1;

- (unsigned long long)categoryAxisStyleCount;

- (struct CGRect)chartBodyBoundsForSageImportWithSageChartType:(_Bool)arg1;

- (void)chartDidInvalidateWithProperties:(id)arg1;

- (id)chartInfo;

- (void)chartMoveToPosition:(struct CGPoint)arg1 size:(struct CGSize)arg2;

- (id)chartStyleState;

@property(retain, nonatomic) TSCHChartType *chartType; // @synthesize chartType=mChartType;

- (void)chartTypeDidChangeWithDetails:(id)arg1;

- (id)childCommandForApplyThemeCommand:(id)arg1;

- (id)childInfos;

- (id)clamped3DRotationPropertyObject;

- (void)clearParent;

- (void)clearViewStyleProxyForLayouts:(id)arg1;

- (id)commandForTransformingByTransform:(struct CGAffineTransform)arg1 context:(id)arg2 transformedObjects:(id)arg3 inBounds:(struct CGRect)arg4;

- (id)commandSetCategoryName:(id)arg1 forCategoryIndex:(unsigned long long)arg2;

- (id)commandSetSeriesName:(id)arg1 forSeriesIndex:(unsigned long long)arg2;

- (id)commandToApplyViewProxiesToModel;

- (id)commandToChangeAllChartFontsToFamilyName:(id)arg1;

- (id)commandToScaleAllChartFontsBy:(double)arg1;

- (id)context;

- (id)copyWithContext:(id)arg1;

- (id)copyWithZone:(struct _NSZone *)arg1;

- (id)copyWithZone:(struct _NSZone *)arg1 context:(id)arg2;

- (id)create3DSceneWithLayoutSettings:(const CDStruct_9aa9521f *)arg1;

- (void)dealloc;

- (void)debugLayoutCache;

@property(nonatomic) CDStruct_9aa9521f defaultLayoutSettings;

- (id)defaultProperties;

- (int)defaultPropertyForGeneric:(int)arg1;

@property(nonatomic) _Bool displayMessageOnRepCreation; // @synthesize displayMessageOnRepCreation=mDisplayMessageOnRepCreation;

@property(readonly, nonatomic) TSSStylesheet *documentStylesheet;

@property(readonly, nonatomic) TSCHChartDrawableInfo *drawableInfo; // @synthesize drawableInfo=mDrawableInfo;

- (Class)editorClass;

- (int)elementKind;

- (id)fillsForSeriesAndTheme;

- (float)floatValueForProperty:(int)arg1 defaultValue:(float)arg2;

- (id)g_genericToDefaultPropertyMap;

@property(copy, nonatomic) TSDInfoGeometry *geometry;

@property(readonly, nonatomic) int gridDirection;

- (_Bool)hasFloatValueForProperty:(int)arg1 value:(float *)arg2;

- (_Bool)hasIntValueForProperty:(int)arg1 value:(int *)arg2;

- (_Bool)hasObjectValueForProperty:(int)arg1 value:(id *)arg2;

@property(readonly, nonatomic) _Bool hasSetDefaultLayoutSettings;

- (id)infoGeometryForDesiredLayoutGeometry:(id)arg1;

- (id)infoGeometryForVisuallyCenteringOnUnscaledCanvasPoint:(struct CGPoint)arg1;

@property(nonatomic) double informationalMessageDuration; // @synthesize informationalMessageDuration=mMessageDuration;

@property(retain, nonatomic) NSString *informationalMessageString; // @synthesize informationalMessageString=mMessageString;

- (id)init;

- (id)initWithChartType:(id)arg1 legendShowing:(id)arg2 chartBodyFrame:(id)arg3 chartAreaFrame:(id)arg4 circumscribingFrame:(id)arg5 legendFrame:(id)arg6 stylePreset:(id)arg7 privateSeriesStyles:(id)arg8 chartNonStyle:(id)arg9 legendNonStyle:(id)arg10 valueAxisNonStyles:(id)arg11 categoryAxisNonStyles:(id)arg12 seriesNonStyles:(id)arg13;

- (int)intValueForProperty:(int)arg1 defaultValue:(int)arg2;

@property(readonly, nonatomic) _Bool isPhantom;

- (_Bool)isSingleCircleSpecialCase;

- (_Bool)isSingleCircleSpecialCaseOutSeries:(id *)arg1;

- (Class)layoutClass;

@property(retain, nonatomic) TSCHLegendModel *legend; // @synthesize legend=mLegendModel;

- (id)legendNonStyle;

- (id)legendStyle;

- (void)loadFromPreUFFArchive:(const struct ChartInfoArchive *)arg1 unarchiver:(id)arg2 persistentChartInfo:(id)arg3;

- (void)loadFromUnityArchive:(const struct ChartArchive *)arg1 unarchiver:(id)arg2 persistentChartInfo:(id)arg3;

- (float)maximumExplosion;

- (float)maximumExplosionOfAllSeriesExcept:(id)arg1;

@property(retain, nonatomic) TSCHChartMediator *mediator; // @synthesize mediator=mChartMediator;

- (float)minFrameDimensionForRadius:(float)arg1 withMaxExplosion:(float)arg2;

@property(readonly, nonatomic) struct CGSize minimumChartBodySize;

@property(retain, nonatomic) TSCHChartModel *model; // @synthesize model=mModel;

- (void)modelDidInvalidateWithDetails:(id)arg1;

- (id)modelForDataSetIndex:(unsigned long long)arg1;

- (id)newChartStylePresetByExampleWithPresetIndex:(unsigned long long)arg1 forTheme:(id)arg2;

- (id)newChartStylePresetByExampleWithPresetIndex:(unsigned long long)arg1 withSeriesCount:(unsigned long long)arg2 forTheme:(id)arg3;

- (id)nonStyleForAxis:(id)arg1;

- (id)nonStyleForSeries:(id)arg1;

- (id)nonstyle;

- (unsigned long long)numberOfThemeSeriesStyles;

- (id)objectValueForProperty:(int)arg1;

- (void)p_breakUpFontName:(id)arg1 isBold:(_Bool *)arg2 isItalic:(_Bool *)arg3;

- (id)p_copyNonStyleArray:(id)arg1 inContext:(id)arg2;

- (id)p_copyStyleAndNonStyleArray:(id)arg1 withZone:(struct _NSZone *)arg2 context:(id)arg3;

- (id)p_copyStyleArray:(id)arg1 inContext:(id)arg2;

- (double)p_dataSetNameAccomodationWithOptionalLayout:(id)arg1;

- (void)p_duplicatePersistableMembersOfCopiedChartUsingContext:(id)arg1;

- (id)p_genericToDefaultPropertyMap;

- (id)p_init;

- (void)p_invalidateCachesInLayouts:(id)arg1;

- (unsigned long long)p_paragraphStyleIndexOfFirstCategoryAxisParagraphStyle;

- (void)p_setChartType:(id)arg1 andSetLegendDefaults:(_Bool)arg2;

- (void)p_setDrawableInfo:(id)arg1;

- (id)p_swapTuplesForApplyingPreset:(id)arg1 preservingAppearance:(_Bool)arg2;

- (id)p_swapTuplesForApplyingPresetRemovingOverrides:(id)arg1;

- (id)p_swapTuplesForMutations:(id)arg1 isForImport:(_Bool)arg2;

- (double)p_titleAccommodationWithLegendSize:(struct CGSize)arg1 optionalLayout:(id)arg2;

- (id)paragraphStyle;

- (id)paragraphStyleAtIndex:(unsigned long long)arg1;

- (id)paragraphStyleForSelectionPath:(id)arg1;

- (int)paragraphStylePropertyForSelectionPath:(id)arg1;

- (id)paragraphStyles;

- (void)performDeferredUpgradeAndImportOperations;

- (void)performUpgradeForPersistentChartInfo:(id)arg1 archiveVersion:(unsigned long long)arg2 innerChartFrame:(struct CGRect)arg3 isFromPasteboard:(_Bool)arg4;

@property(readonly, nonatomic) TSCHChartStylePreset *preset;

@property(nonatomic) struct CGPoint previewOrigin; // @synthesize previewOrigin=mPreviewOrigin;

- (float)radiusForFrame:(struct CGRect)arg1 withMaxExplosion:(float)arg2;

- (Class)repClass;

- (struct CGRect)resizedLegendFrame:(struct CGRect)arg1 oldChartSize:(struct CGSize)arg2 newChartSize:(struct CGSize)arg3;

- (double)sageDepthFactorForExport;

- (void)saveToUnityArchive:(struct ChartArchive *)arg1 persistentChartInfo:(id)arg2 archiver:(id)arg3;

- (id)scaleAllStrokesInStyle:(id)arg1 byRatio:(double)arg2;

@property(readonly, nonatomic) TSCHChartLayoutCache *sceneAreaLayoutItemCache;

- (id)seriesNonstyleForSeriesIndex:(unsigned long long)arg1;

- (id)seriesStyleForSeries:(id)arg1;

- (id)seriesStyleForSeriesIndex:(unsigned long long)arg1;

- (_Bool)seriesStyleIsPrivate:(id)arg1;

- (void)setCategoryAxisNonstyle:(id)arg1 atIndex:(unsigned long long)arg2;

- (void)setChartNonstyle:(id)arg1;

- (void)setDefaultLegendPositionIfNeededWithOptionalLayout:(id)arg1;

- (void)setGeometry:(id)arg1 clearObjectPlaceholderFlag:(_Bool)arg2;

- (void)setGeometry:(id)arg1 omitLegendResize:(_Bool)arg2;

- (void)setGeometry:(id)arg1 omitLegendResize:(_Bool)arg2 clearObjectPlaceholderFlag:(_Bool)arg3;

- (void)setInfoGeometryByUpdatingLegendGeometryAccommodatedForInitialLayoutGeometry:(id)arg1;

- (void)setPreset:(id)arg1;

- (void)setSeriesNonstyle:(id)arg1 atIndex:(unsigned long long)arg2;

- (void)setValueAxisNonstyle:(id)arg1 atIndex:(unsigned long long)arg2;

- (void)setViewStyleProxyParagraphStyleArray:(id)arg1 layouts:(id)arg2;

- (int)specificPropertyForGeneric:(int)arg1;

- (id)stringForSelectionPath:(id)arg1;

- (int)stringPropertyForSelectionPath:(id)arg1;

- (id)style;

- (id)styleForAxis:(id)arg1;

- (id)styleOwnerForRef:(CDStruct_fca5f1f5)arg1;

- (id)styleOwnerForSelectionPath:(id)arg1;

- (id)styleOwnerFromSwapType:(int)arg1 andIndex:(unsigned long long)arg2;

- (CDStruct_fca5f1f5)styleOwnerRefForStyleOwner:(id)arg1;

- (id)swapTuplesForApplyingPreset:(id)arg1 withBehavior:(unsigned long long)arg2;

- (id)swapTuplesForMutations:(id)arg1;

- (id)swapTuplesForMutationsForImport:(id)arg1;

- (id)swapTuplesForParagraphStyleMutations:(id)arg1 forReferencingProperty:(int)arg2;

- (id)themeStylesheet;

- (id)tuplesToApplyState:(id)arg1;

- (void)updateTitlesForExportingModel:(id)arg1;

- (id)valueAxisNonstyleAtIndex:(unsigned long long)arg1;

- (id)valueAxisStyleAtIndex:(unsigned long long)arg1;

- (unsigned long long)valueAxisStyleCount;

- (id)valueForProperty:(int)arg1;

- (id)viewOverrideMapForStyleOwner:(id)arg1;

@property(readonly, nonatomic) _Bool wantsDeferredUpgradeOrImport;

- (void)willModify;



@end

