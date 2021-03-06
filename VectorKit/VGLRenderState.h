/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */





__attribute__((visibility("hidden")))

@interface VGLRenderState : NSObject

{

    _Bool _enableDepthTest;

    int _depthMode;

    _Bool _depthMask;

    _Bool _enableCullFace;

    int _blendMode;

    _Bool _stencilTest;

    _Bool _enablePolygonFillOffset;

    CDStruct_e5f4ed30 _polygonOffset;

    _Bool _scissorTest;

}



- (id).cxx_construct;

@property(nonatomic) int blendMode; // @synthesize blendMode=_blendMode;

@property(nonatomic) _Bool depthMask; // @synthesize depthMask=_depthMask;

@property(nonatomic) int depthMode; // @synthesize depthMode=_depthMode;

@property(nonatomic) _Bool enableCullFace; // @synthesize enableCullFace=_enableCullFace;

@property(nonatomic) _Bool enableDepthTest; // @synthesize enableDepthTest=_enableDepthTest;

@property(nonatomic) _Bool enablePolygonFillOffset; // @synthesize enablePolygonFillOffset=_enablePolygonFillOffset;

- (id)init;

- (id)initWithContext:(id)arg1;

- (void)loadStateFromContext:(id)arg1;

@property(nonatomic) CDStruct_e5f4ed30 polygonOffset; // @synthesize polygonOffset=_polygonOffset;

- (void)pushStateIntoContext:(id)arg1;

- (void)reset;

@property(nonatomic) _Bool scissorTest; // @synthesize scissorTest=_scissorTest;

@property(nonatomic) _Bool stencilTest; // @synthesize stencilTest=_stencilTest;



@end


