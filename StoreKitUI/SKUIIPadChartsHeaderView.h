/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "UIControl.h"



@class NSArray;



@interface SKUIIPadChartsHeaderView : UIControl

{

    NSArray *_buttons;

    long long _selectedTitleIndex;

}



- (void).cxx_destruct;

- (void)_buttonAction:(id)arg1;

- (void)_reloadSelectedButton;

- (void)dealloc;

- (void)layoutSubviews;

@property(nonatomic) long long selectedTitleIndex; // @synthesize selectedTitleIndex=_selectedTitleIndex;

- (void)setBackgroundColor:(id)arg1;

@property(copy, nonatomic) NSArray *titles;

- (void)sizeToFit;



@end


