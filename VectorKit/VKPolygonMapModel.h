/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "VKVectorMapModel.h"


#import "VKStylesheetObserver.h"



@class VGLRenderState, VKStylesheet;



__attribute__((visibility("hidden")))

@interface VKPolygonMapModel : VKVectorMapModel <VKStylesheetObserver>

{

    _Bool _drawShapes;

    struct RenderStepsSet _renderStepsSet;

    struct RenderStepsSet _transitRenderStepsSet;

    VGLRenderState *_transparentRenderState;

    VGLRenderState *_renderState;

}



- (id).cxx_construct;

- (void).cxx_destruct;

- (void)dealloc;

- (void)drawCoastlinesWithContext:(id)arg1;

- (void)drawDebugScene:(id)arg1 withContext:(id)arg2;

- (void)drawRenderStepSet:(const struct RenderStepsSet *)arg1 scene:(id)arg2 withContext:(id)arg3;

- (void)drawScene:(id)arg1 withContext:(id)arg2 pass:(unsigned int)arg3;

@property(nonatomic) _Bool drawShapes; // @synthesize drawShapes=_drawShapes;

- (void)drawTransparentPolygonStrokesInRenderStepSet:(const struct RenderStepsSet *)arg1 withWidth:(float)arg2 minDepth:(float)arg3 context:(id)arg4;

- (void)drawTransparentPolygonsInRenderStepSet:(const struct RenderStepsSet *)arg1 withContext:(id)arg2 stencil:(int)arg3;

- (id)init;

- (void)layoutScene:(id)arg1 withContext:(id)arg2;

- (unsigned long long)mapLayerPosition;

- (void)renderNormalPolygonsInRenderStepSet:(const struct RenderStepsSet *)arg1 withWidth:(float)arg2 minDepth:(float)arg3 context:(id)arg4;

- (struct RenderStepsSet *)renderStepSetForFeatureWithAttributes:(id)arg1;

- (void)renderTransparentPolygonsInRenderStepSet:(const struct RenderStepsSet *)arg1 withWidth:(float)arg2 minDepth:(float)arg3 context:(id)arg4;

- (void)reset;

- (void)stylesheetDidChange;

- (void)stylesheetWillChange;

- (unsigned int)supportedRenderPasses;

- (unsigned long long)textureSize;



// Remaining properties

@property(readonly, nonatomic) VKStylesheet *stylesheet;



@end


