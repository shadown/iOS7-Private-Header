/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */





#import "TSCH3DGLBindable.h"



__attribute__((visibility("hidden")))

@interface TSCH3DGLRenderBuffer : NSObject <TSCH3DGLBindable>

{

    unsigned int mBuffer;

}



- (void)bindInSession:(id)arg1;

- (void)deactivateInContext:(id)arg1;

- (void)dealloc;

- (id)description;

- (void)destroyResourcesInContext:(id)arg1;

- (id)initWithGLBuffer:(unsigned int)arg1;

- (_Bool)valid;



@end

