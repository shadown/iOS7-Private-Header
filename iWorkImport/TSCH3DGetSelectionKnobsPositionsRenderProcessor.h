/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "TSCH3DTransformGeometryRenderProcessor.h"


@class NSMutableArray, TSCH3DGetSelectionKnobsPositionsPipelineDelegate;



__attribute__((visibility("hidden")))

@interface TSCH3DGetSelectionKnobsPositionsRenderProcessor : TSCH3DTransformGeometryRenderProcessor

{

    NSMutableArray *mProjectedPoints;

    TSCH3DGetSelectionKnobsPositionsPipelineDelegate *mSceneObjectDelegate;

    float mNormalizedKnobRadius;

}



- (void)dealloc;

- (tmat4x4_3074befe)modelViewNormalizedProjection;

@property(nonatomic) float normalizedKnobRadius; // @synthesize normalizedKnobRadius=mNormalizedKnobRadius;

@property(retain, nonatomic) NSMutableArray *projectedPoints; // @synthesize projectedPoints=mProjectedPoints;

@property(retain, nonatomic) TSCH3DGetSelectionKnobsPositionsPipelineDelegate *sceneObjectDelegate; // @synthesize sceneObjectDelegate=mSceneObjectDelegate;

- (void)submit:(const struct PrimitiveInfo *)arg1;



@end


