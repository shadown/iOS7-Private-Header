/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "VGLProgram.h"


__attribute__((visibility("hidden")))

@interface VGLTextureProgram : VGLProgram

{

    int _uTextureSampler;

    int _textureSampler;

}



+ (id)fragName;

+ (id)vertName;

@property(nonatomic) int textureSampler; // @synthesize textureSampler=_textureSampler;

- (void)setup;



@end


