/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "UIKeyboard.h"



@class SBUIPasscodeLockViewWithKeyboard;



@interface SBPasscodeKeyboard : UIKeyboard

{

    SBUIPasscodeLockViewWithKeyboard *_lockView;

}



- (_Bool)canDismiss;

- (id)initWithFrame:(struct CGRect)arg1 lockView:(id)arg2;

- (_Bool)isActive;

- (void)maximize;

- (void)minimize;

- (_Bool)shouldSaveMinimizationState;



@end


