/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */





#import "VGLCanvas.h"



@class VGLContext, VGLFramebuffer, VGLTexture;



__attribute__((visibility("hidden")))

@interface VGLImageCanvas : NSObject <VGLCanvas>

{

    VGLContext *_targetContext;

    VGLFramebuffer *_targetFramebuffer;

    VGLTexture *_targetTexture;

    struct CGSize _size;

    double _contentScale;

    _Bool _useDepthBuffer;

    _Bool _useStencilBuffer;

    struct _VGLColor _glClearColor;

    _Bool _canMakeImage;

    _Bool _recreateFramebuffer;

}



+ (void *)bitmapData:(unsigned long long *)arg1 fromTexture:(id)arg2;

+ (Class)contextClass;

+ (struct CGImage *)newImageFromTargetTexture:(id)arg1;

- (id).cxx_construct;

- (void)_createFramebuffer;

- (void)_destroyFramebuffer;

- (void *)bitmapData:(unsigned long long *)arg1;

@property(nonatomic) double contentScale; // @synthesize contentScale=_contentScale;

- (void)dealloc;

- (void)didDrawView;

@property(nonatomic) struct _VGLColor glClearColor; // @synthesize glClearColor=_glClearColor;

- (id)initWithSize:(struct CGSize)arg1 scale:(double)arg2 context:(id)arg3;

- (struct CGImage *)newImage;

@property(nonatomic) struct CGSize size; // @synthesize size=_size;

@property(nonatomic) _Bool useDepthBuffer; // @synthesize useDepthBuffer=_useDepthBuffer;

@property(nonatomic) _Bool useMultisampling;

@property(nonatomic) _Bool useStencilBuffer; // @synthesize useStencilBuffer=_useStencilBuffer;

@property(readonly, nonatomic) struct CGSize sizeInPixels;

@property(readonly, nonatomic) VGLContext *vglContext; // @synthesize vglContext=_targetContext;

- (void)willDrawView;



@end

