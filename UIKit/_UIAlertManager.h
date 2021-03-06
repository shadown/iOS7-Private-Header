/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */





__attribute__((visibility("hidden")))

@interface _UIAlertManager : NSObject

{

}



+ (struct CGAffineTransform)_alertTranslationForInterfaceOrientation:(long long)arg1 andTranslation:(double)arg2;

+ (void)_applyAlertTransforms;

+ (void)addToStack:(id)arg1 dontDimBackground:(_Bool)arg2;

+ (void)alertPopoutCompleted;

+ (void)alertWindowAnimationDidStop:(id)arg1 finished:(id)arg2 context:(void *)arg3;

+ (void)applyClientWindowTransform:(struct CGAffineTransform)arg1;

+ (void)applyInternalWindowTransform:(struct CGAffineTransform)arg1;

+ (struct CGAffineTransform)calculatedAlertTransform;

+ (_Bool)cancelAlertsAnimated:(_Bool)arg1;

+ (_Bool)cancelTopMostAlertAnimated:(_Bool)arg1;

+ (void)createAlertWindowIfNeeded:(_Bool)arg1;

+ (void)createAlertWindowIfNeeded:(_Bool)arg1 deferDisplay:(_Bool)arg2;

+ (void)hideAlertsForTermination;

+ (void)hideDimmingViewAnimated:(_Bool)arg1;

+ (_Bool)hideTopMostAlertAnimated:(_Bool)arg1;

+ (void)hideTopmostMiniAlert;

+ (void)initialize;

+ (void)noteOrientationChangingTo:(long long)arg1;

+ (void)noteOrientationChangingTo:(long long)arg1 animated:(_Bool)arg2;

+ (void)removeFromStack:(id)arg1;

+ (void)reorientAlertWindowTo:(long long)arg1 animated:(_Bool)arg2 keyboard:(id)arg3;

+ (void)showDimmingViewAnimated:(_Bool)arg1;

+ (void)showTopmostMiniAlertWithSynchronizationPort:(unsigned int)arg1;

+ (void)sizeAlertWindowForCurrentOrientation;

+ (_Bool)stackContainsAlert:(id)arg1;

+ (void)tellSpringboardHidingAlert:(id)arg1 animated:(_Bool)arg2 forSpringBoardAlertTransition:(_Bool)arg3;

+ (void)tellSpringboardShowingAlert:(id)arg1 animated:(_Bool)arg2 forSpringBoardAlertTransition:(_Bool)arg3;

+ (id)topMostAlert;

+ (id)visibleAlert;

- (void)_didHideDimmingView:(id)arg1 finished:(id)arg2;



@end


