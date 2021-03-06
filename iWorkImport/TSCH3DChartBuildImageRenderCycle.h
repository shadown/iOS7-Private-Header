/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "TSCH3DChartRenderCycle.h"


@class NSArray;



__attribute__((visibility("hidden")))

@interface TSCH3DChartBuildImageRenderCycle : TSCH3DChartRenderCycle

{

    _Bool mIsAntialiasing;

    _Bool mIsSingleImage;

    _Bool mFlipImages;

    NSArray *mImages;

}



- (_Bool)allocateFramebufferWithAllocationInfo:(const struct FramebufferAllocationInfo *)arg1;

@property(nonatomic) _Bool antialias;

- (void)dealloc;

@property(nonatomic) _Bool flipImages; // @synthesize flipImages=mFlipImages;

- (box_80622335)imageBodyCanvasBounds;

@property(readonly, nonatomic) NSArray *images; // @synthesize images=mImages;

- (id)initWithRenderCycleInfo:(const struct RenderCycleInfo *)arg1;

@property(nonatomic) _Bool isSingleImage; // @synthesize isSingleImage=mIsSingleImage;

- (Class)layerCacheLogicClass;

- (Class)layerClass;

- (void)p_allocateTileFramebuffer;

- (id)p_buildImageSetup;

- (void)p_setClippingRectFromVisibleBodyCanvasBounds:(const struct CGRect *)arg1;

- (void)p_setViewportSpaceImages:(id)arg1 samples:(float)arg2;

- (void)p_setupPipelineWithProcessor:(id)arg1 session:(id)arg2 scene:(id)arg3 antialiasing:(_Bool)arg4;

- (unsigned long long)p_tileSize;

- (void)restoreDefaultRenderPresenter;

- (_Bool)runPipeline:(id)arg1;

- (_Bool)shouldRenderLegendIntoSeparateLayer;

- (void)switchToRenderPresenter:(id)arg1;

- (id)tileFBOResource;

- (id)tilePipeline;



@end


