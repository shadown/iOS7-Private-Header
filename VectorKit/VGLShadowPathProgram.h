/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "VGLProgram.h"


__attribute__((visibility("hidden")))

@interface VGLShadowPathProgram : VGLProgram

{

    int _uDirection;

    CDStruct_03942939 _direction;

    int _uWidth;

    float _width;

    int _uColor;

    struct _VGLColor _color;

}



+ (id)fragName;

+ (id)vertName;

- (id).cxx_construct;

@property(nonatomic) struct _VGLColor color; // @synthesize color=_color;

@property(nonatomic) CDStruct_03942939 direction; // @synthesize direction=_direction;

@property(nonatomic) float width; // @synthesize width=_width;

- (void)setup;



@end

