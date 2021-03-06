/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "TSCH3DGLHandle.h"


__attribute__((visibility("hidden")))

@interface TSCH3DGLTextureHandle : TSCH3DGLHandle

{

    unsigned int mTarget;

    tvec3_c2818ced mFullSize;

    tvec3_c2818ced mLevel0Size;

}



+ (id)handleWithGLHandle:(unsigned int)arg1 target:(unsigned int)arg2;

- (id).cxx_construct;

- (void)destroyResourcesInContext:(id)arg1;

@property(nonatomic) tvec3_c2818ced fullSize; // @synthesize fullSize=mFullSize;

- (id)initWithGLHandle:(unsigned int)arg1 target:(unsigned int)arg2;

@property(nonatomic) tvec3_c2818ced level0Size; // @synthesize level0Size=mLevel0Size;

@property(readonly, nonatomic) unsigned int target; // @synthesize target=mTarget;



@end


