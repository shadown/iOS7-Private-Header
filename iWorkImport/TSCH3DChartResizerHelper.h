/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */





@class TSCH3DChartBoundsLayout, TSCH3DVector, TSCHChartInfo;



__attribute__((visibility("hidden")))

@interface TSCH3DChartResizerHelper : NSObject

{

    TSCHChartInfo *mChartInfo;

    tvec2_3b141483 mContainingViewport;

    tvec2_3b141483 mOriginalContainingViewport;

    TSCH3DChartBoundsLayout *mBoundsLayout;

    CDStruct_9aa9521f mLayoutSettings;

}



+ (tvec2_3b141483)containingViewportForVector:(id)arg1;

+ (id)helperWithInfo:(id)arg1;

+ (id)vectorForContainingViewport:(const tvec2_3b141483 *)arg1;

- (id).cxx_construct;

- (id)boundsLayoutForScene:(id)arg1 mode:(int)arg2;

- (id)boundsLayoutResizedForScene:(id)arg1 bounds:(const box_80622335 *)arg2 resizeStartingSize:(tvec2_84d5962d *)arg3 mode:(int)arg4 returningResultSize:(tvec2_84d5962d *)arg5;

- (tvec2_84d5962d)chartBodyLayoutOffsetInChartAreaLayoutSpaceUsingConverter:(const struct ChartProjectedBoundsConverter *)arg1;

- (tvec2_84d5962d)chartBodySizeByResizingScene:(id)arg1 toLayoutSize:(const tvec2_84d5962d *)arg2 resizeStartingSize:(tvec2_84d5962d *)arg3 returningChartBodyLayoutOffsetInChartAreaLayoutSpace:(tvec2_84d5962d *)arg4 resultLayoutSize:(tvec2_84d5962d *)arg5;

@property(readonly, nonatomic) TSCHChartInfo *chartInfo; // @synthesize chartInfo=mChartInfo;

@property(nonatomic) tvec2_3b141483 containingViewport; // @synthesize containingViewport=mContainingViewport;

@property(readonly, nonatomic) TSCH3DVector *containingViewportVector;

- (void)dealloc;

- (id)initWithInfo:(id)arg1;

- (void)initializeOriginalContainingViewport;

- (void)invalidateBounds;

- (void)invalidateLabelsBoundsForSceneObjectClass:(Class)arg1 boundsIndex:(long long)arg2;

@property(nonatomic) CDStruct_9aa9521f layoutSettings; // @synthesize layoutSettings=mLayoutSettings;

- (tvec2_84d5962d)layoutSizeByResizingScene:(id)arg1 toChartBodyLayoutSize:(const tvec2_84d5962d *)arg2 resizeStartingSize:(tvec2_84d5962d *)arg3 returningChartBodyLayoutBoundsInChartAreaLayoutSpace:(box_80622335 *)arg4;

@property(readonly, nonatomic) tvec2_3b141483 originalContainingViewport; // @synthesize originalContainingViewport=mOriginalContainingViewport;



@end

