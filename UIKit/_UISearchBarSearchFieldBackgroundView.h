/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "_UITextFieldRoundedRectBackgroundViewNeue.h"


__attribute__((visibility("hidden")))

@interface _UISearchBarSearchFieldBackgroundView : _UITextFieldRoundedRectBackgroundViewNeue

{

    _Bool _backgroundContainer;

    long long _barStyle;

    unsigned long long _searchBarStyle;

}



- (id)_fillColor:(_Bool)arg1;

- (id)_strokeColor:(_Bool)arg1;

@property(nonatomic) _Bool backgroundContainer; // @synthesize backgroundContainer=_backgroundContainer;

@property(nonatomic) long long barStyle; // @synthesize barStyle=_barStyle;

- (id)initWithFrame:(struct CGRect)arg1 active:(_Bool)arg2;

- (id)initWithFrame:(struct CGRect)arg1 active:(_Bool)arg2 updateView:(_Bool)arg3;

@property(nonatomic) unsigned long long searchBarStyle; // @synthesize searchBarStyle=_searchBarStyle;

- (void)updateView;



@end

