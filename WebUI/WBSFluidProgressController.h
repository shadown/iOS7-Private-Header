/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */





@interface WBSFluidProgressController : NSObject

{

    id <WBSFluidProgressControllerDelegate> _delegate;

    id <WBSFluidProgressControllerWindowDelegate> _windowDelegate;

}



- (void)_updateFluidProgressWithProgressStateSource:(id)arg1;

- (void)animationStepCompleted:(id)arg1;

- (void)cancelFluidProgressWithProgressStateSource:(id)arg1;

@property id <WBSFluidProgressControllerDelegate> delegate; // @synthesize delegate=_delegate;

- (void)finishFluidProgressWithProgressStateSource:(id)arg1;

- (void)frontmostTabDidChange;

- (void)progressStateSourceDidCommitLoad:(id)arg1 loadingSingleResource:(_Bool)arg2;

@property id <WBSFluidProgressControllerWindowDelegate> windowDelegate; // @synthesize windowDelegate=_windowDelegate;

- (void)startFluidProgressWithProgressStateSource:(id)arg1;

- (void)startRocketEffectWithProgressStateSource:(id)arg1;

- (void)updateFluidProgressWithProgressStateSource:(id)arg1;



@end


