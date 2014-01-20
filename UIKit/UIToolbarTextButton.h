/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "UIToolbarButton.h"


@class NSSet, NSString;



__attribute__((visibility("hidden")))

@interface UIToolbarTextButton : UIToolbarButton

{

    NSString *_title;

    NSString *_pressedTitle;

    NSSet *_possibleTitles;

}



- (void)_UIAppearance_setTitleTextAttributes:(id)arg1 forState:(unsigned long long)arg2;

- (id)_scriptingInfo;

- (void)_setPressed:(_Bool)arg1;

- (void)_setTitleTextAttributes:(id)arg1 forState:(unsigned long long)arg2;

- (void)_setWantsLetterpressTitle;

- (struct UIEdgeInsets)alignmentRectInsets;

- (void)dealloc;

- (id)initWithTitle:(id)arg1 pressedTitle:(id)arg2 withFont:(id)arg3 withBarStyle:(long long)arg4 withStyle:(long long)arg5 withTitleWidth:(float)arg6 possibleTitles:(id)arg7 withToolbarTintColor:(id)arg8;

- (void)layoutSubviews;



@end

