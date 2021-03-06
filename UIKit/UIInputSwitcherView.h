/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "UIKeyboardMenuView.h"


@class NSArray, NSMutableArray;



__attribute__((visibility("hidden")))

@interface UIInputSwitcherView : UIKeyboardMenuView

{

    int m_currentInputModeIndex;

    _Bool m_keyboardSettingsFromSwitcher;

    NSMutableArray *m_inputModes;

}



+ (id)activeInstance;

+ (id)sharedInstance;

- (void)dealloc;

- (long long)defaultSelectedIndex;

- (void)didSelectItemAtIndex:(int)arg1;

- (id)initWithFrame:(struct CGRect)arg1;

@property(retain, nonatomic) NSArray *inputModes; // @synthesize inputModes=m_inputModes;

@property(nonatomic) _Bool keyboardSettingsFromSwitcher; // @synthesize keyboardSettingsFromSwitcher=m_keyboardSettingsFromSwitcher;

- (id)nextInputMode;

- (long long)numberOfItems;

- (struct CGSize)preferredSize;

- (id)previousInputMode;

- (void)selectInputMode:(id)arg1;

- (void)selectNextInputMode;

- (void)selectPreviousInputMode;

- (void)selectRowForInputMode:(id)arg1;

- (id)selectedInputMode;

- (void)setInputMode:(id)arg1;

- (void)show;

- (id)subtitleForItemAtIndex:(int)arg1;

- (id)titleForItemAtIndex:(int)arg1;



@end


