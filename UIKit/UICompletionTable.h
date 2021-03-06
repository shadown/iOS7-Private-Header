/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "UIView.h"


#import "UITableViewDataSource.h"

#import "UITableViewDelegate.h"



@class UICompletionTablePrivate;



@interface UICompletionTable : UIView <UITableViewDelegate, UITableViewDataSource>

{

    UICompletionTablePrivate *_private;

}



+ (id)_cellFont;

+ (id)_shadowImage;

- (id)_completionForRow:(long long)arg1;

@property(nonatomic) struct UIEdgeInsets contentInset;

- (void)dealloc;

@property(nonatomic) id delegate;

- (id)dequeueReusableCellWithIdentifier:(id)arg1;

- (id)initWithFrame:(struct CGRect)arg1;

- (void)layoutSubviews;

- (void)reloadData;

@property(nonatomic) struct UIEdgeInsets scrollIndicatorInsets;

- (void)setTopStrokeColor:(id)arg1;

- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;

- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;

- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;



@end


