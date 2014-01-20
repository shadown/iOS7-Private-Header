/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */





@class NSMutableArray;



__attribute__((visibility("hidden")))

@interface _UIGestureRecognizerFailureMap : NSObject

{

    NSMutableArray *_gestureRecognizers;

    char *_failureMap;

    int _unmetFailureRequirementCount;

    int _unmetFailureDependentCount;

}



+ (void)buildFailureMapForGestureRecognizer:(id)arg1;

+ (void)buildFailureMapForGestureRecognizers:(id)arg1;

- (void)_gestureRecognizerFinished:(id)arg1 withEvent:(id)arg2;

- (void)_queueRecognizersForResetIfFinished;

- (void)dealloc;

- (id)description;

- (void)gestureRecognizerBecameDirty:(id)arg1;

- (void)gestureRecognizerDeallocated:(id)arg1;

- (void)gestureRecognizerFinished:(id)arg1 withEvent:(id)arg2;

@property(readonly) _Bool hasUnmetFailureRequirementsOrDependents;

- (id)initWithRelatedGestures:(id)arg1;

- (_Bool)isGestureRecognizerWaitingForGestureRecognizersToFail:(id)arg1;

- (void)rebuildFailureMap;

- (void)reloadFailureMap;



@end

