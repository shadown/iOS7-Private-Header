/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "TSCH3DChartResizer.h"


__attribute__((visibility("hidden")))

@interface TSCH3DChartPieResizer : TSCH3DChartResizer

{

    tvec2_01ee4891 mDirections;

}



+ (tvec2_84d5962d)adjustLabelWrapSize:(const tvec2_84d5962d *)arg1;

+ (float)perspectiveness;

- (id).cxx_construct;

- (tvec3_17f03ce0)adjust:(tvec3_17f03ce0 *)arg1 by:(float)arg2;

- (tvec2_01ee4891)canImprove;

- (void)setScale:(tvec3_17f03ce0 *)arg1;

- (tvec2_84d5962d)squareSize:(const tvec2_84d5962d *)arg1;

- (tvec2_84d5962d)updateDirectionsFromRequestedSize:(const tvec2_84d5962d *)arg1 startingSize:(tvec2_84d5962d *)arg2;

- (tvec2_84d5962d)updateResizerFromRequestedSize:(const tvec2_84d5962d *)arg1 startingSize:(tvec2_84d5962d *)arg2;



@end

