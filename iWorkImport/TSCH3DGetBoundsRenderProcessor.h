/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "TSCH3DTransformGeometryRenderProcessor.h"


__attribute__((visibility("hidden")))

@interface TSCH3DGetBoundsRenderProcessor : TSCH3DTransformGeometryRenderProcessor

{

    int mMode;

    struct ObjectBounds mBounds;

}



- (id).cxx_construct;

- (void).cxx_destruct;

@property(readonly, nonatomic) const struct ObjectBounds *bounds;

- (void)extend2DProjectedBounds:(const box_a3bd9649 *)arg1;

- (id)init;

@property(nonatomic) int mode; // @synthesize mode=mMode;

- (void)resetBounds;

- (void)submit:(const struct PrimitiveInfo *)arg1;



@end


