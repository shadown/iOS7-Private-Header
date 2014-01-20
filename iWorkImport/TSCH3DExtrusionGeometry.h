/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "TSCH3DGeometry.h"


__attribute__((visibility("hidden")))

@interface TSCH3DExtrusionGeometry : TSCH3DGeometry

{

    vector_35283da1 mCrossSection;

    vector_45b393db mSpine;

    vector_35283da1 mScale;

    _Bool mBeginCap;

    _Bool mEndCap;

    float mCrossSectionCreaseAngle;

    float mSpineCreaseAngle;

    unsigned int mEndCapOffset;

    int mEndCapCount;

    unsigned int mBeginCapOffset;

    int mBeginCapCount;

    tvec3_17f03ce0 mNormalBias;

    tvec3_17f03ce0 mSpineDirectionBias;

}



- (id).cxx_construct;

- (void).cxx_destruct;

@property(nonatomic) _Bool beginCap; // @synthesize beginCap=mBeginCap;

@property(readonly, nonatomic) int capCount; // @synthesize capCount=mEndCapCount;

@property(readonly, nonatomic) unsigned int capOffset; // @synthesize capOffset=mEndCapOffset;

- (const vector_35283da1 *)crossSection;

@property(nonatomic) float crossSectionCreaseAngle; // @synthesize crossSectionCreaseAngle=mCrossSectionCreaseAngle;

- (void)dealloc;

- (void)debug_dumpGeometryBounds;

@property(nonatomic) _Bool endCap; // @synthesize endCap=mEndCap;

- (void)generateArrays;

- (id)init;

@property(nonatomic) tvec3_17f03ce0 normalBias; // @synthesize normalBias=mNormalBias;

- (const vector_35283da1 *)scale;

- (void)setCrossSection:(const vector_35283da1 *)arg1;

- (void)setScale:(const vector_35283da1 *)arg1;

- (void)setSpine:(const vector_45b393db *)arg1;

@property(nonatomic) float spineCreaseAngle; // @synthesize spineCreaseAngle=mSpineCreaseAngle;

@property(nonatomic) tvec3_17f03ce0 spineDirectionBias; // @synthesize spineDirectionBias=mSpineDirectionBias;

- (const vector_45b393db *)spine;



@end

