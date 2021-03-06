/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "UIView.h"


@class NSMutableArray, UIKBScreenTraits, UIKeyboardTaskQueue, UITextInputTraits, UITouch;



@interface UIKeyboardLayout : UIView

{

    UITextInputTraits *_inputTraits;

    UIKBScreenTraits *_screenTraits;

    NSMutableArray *_uncommittedTouches;

    UITouch *_activeTouch;

    UITouch *_shiftKeyTouch;

    UIKeyboardTaskQueue *_taskQueue;

}



- (_Bool)acceptsDirectionInput;

- (id)activationIndicatorView;

@property(retain, nonatomic) UITouch *activeTouch; // @synthesize activeTouch=_activeTouch;

- (void)addWipeRecognizer;

- (id)baseKeyForString:(id)arg1;

- (_Bool)canForceTouchCommit:(id)arg1;

- (_Bool)canMultitap;

- (_Bool)canProduceString:(id)arg1;

- (id)candidateList;

- (void)changeToKeyplane:(id)arg1;

- (void)clearShiftIfNecessaryForEndedTouch:(id)arg1;

- (void)clearUnusedObjects:(_Bool)arg1;

- (void)commitTouches:(id)arg1;

- (void)commitTouches:(id)arg1 executionContext:(id)arg2;

- (id)currentKeyplane;

- (void)deactivateActiveKeys;

- (void)deactivateActiveKeysClearingTouchInfo:(_Bool)arg1 clearingDimming:(_Bool)arg2;

- (void)dealloc;

- (void)didClearInput;

- (void)didCommitTouch:(id)arg1;

- (struct CGSize)dragGestureSize;

- (void)fadeWithInvocation:(id)arg1;

- (double)flickDistance;

- (void)forceUpdatesForCommittedTouch;

- (struct CGRect)frameForKeylayoutName:(id)arg1;

- (SEL)handlerForNotification:(id)arg1;

- (_Bool)hasAccentKey;

- (_Bool)hasCandidateKeys;

- (double)hitBuffer;

- (_Bool)ignoresShiftState;

- (id)initWithFrame:(struct CGRect)arg1;

- (_Bool)isAlphabeticPlane;

- (_Bool)isShiftKeyBeingHeld;

- (_Bool)isShiftKeyPlaneChooser;

- (id)keyplaneForKey:(id)arg1;

- (id)keyplaneNamed:(id)arg1;

- (void)longPressAction;

@property(readonly, nonatomic) long long orientation;

- (_Bool)performReturnAction;

- (_Bool)performSpaceAction;

- (void)physicalKeyDownWithEvent:(id)arg1;

- (void)physicalKeyUpWithEvent:(id)arg1;

- (void)remoteControlReceivedWithEvent:(id)arg1;

- (void)restoreDefaultsForAllKeys;

- (void)restoreDefaultsForKey:(id)arg1;

- (void)setAction:(SEL)arg1 forKey:(id)arg2;

- (void)setAutoshift:(_Bool)arg1;

- (void)setLabel:(id)arg1 forKey:(id)arg2;

- (void)setLayoutTag:(id)arg1;

- (void)setLongPressAction:(SEL)arg1 forKey:(id)arg2;

- (void)setRenderConfig:(id)arg1;

- (void)setReturnKeyEnabled:(_Bool)arg1 withDisplayName:(id)arg2 withType:(int)arg3;

- (void)setShift:(_Bool)arg1;

@property(retain, nonatomic) UITouch *shiftKeyTouch; // @synthesize shiftKeyTouch=_shiftKeyTouch;

- (void)setTarget:(id)arg1 forKey:(id)arg2;

@property(retain, nonatomic) UIKeyboardTaskQueue *taskQueue;

- (_Bool)shouldFadeFromLayout;

- (_Bool)shouldFadeToLayout;

- (_Bool)shouldShowIndicator;

- (void)showKeyboardWithInputTraits:(id)arg1 screenTraits:(id)arg2 splitTraits:(id)arg3;

- (id)simulateTouch:(struct CGPoint)arg1;

- (id)simulateTouchForCharacter:(id)arg1 errorVector:(struct CGPoint)arg2 shouldTypeVariants:(_Bool)arg3 baseKeyForVariants:(_Bool)arg4;

- (void)touchCancelled:(id)arg1;

- (void)touchCancelled:(id)arg1 executionContext:(id)arg2;

- (void)touchDown:(id)arg1;

- (void)touchDown:(id)arg1 executionContext:(id)arg2;

- (void)touchDragged:(id)arg1;

- (void)touchDragged:(id)arg1 executionContext:(id)arg2;

- (void)touchUp:(id)arg1;

- (void)touchUp:(id)arg1 executionContext:(id)arg2;

- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;

- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;

- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;

- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;

- (id)touchesToCommitBeforeTouch:(id)arg1;

- (void)updateBackgroundCorners;

- (void)updateLocalizedKeys:(_Bool)arg1;

- (_Bool)usesAutoShift;

- (void)wipeGestureRecognized:(id)arg1;



@end


