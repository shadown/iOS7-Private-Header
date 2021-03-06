/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "UIView.h"



@class UILabel;



@interface CAMAvalancheIndicatorView : UIView

{

    _Bool _showsWhenStarted;

    UIView *__backgroundView;

    UILabel *__countLabel;

    long long __numberOfPhotos;

}



@property(readonly, nonatomic) UIView *_backgroundView; // @synthesize _backgroundView=__backgroundView;

- (void)_commonCAMAvalancheIndicatorViewInitialization;

@property(readonly, nonatomic) UILabel *_countLabel; // @synthesize _countLabel=__countLabel;

@property(readonly, nonatomic) long long _numberOfPhotos; // @synthesize _numberOfPhotos=__numberOfPhotos;

- (void)_performCaptureAnimation;

- (void)_updateCountLabelWithNumberOfPhotos;

- (void)dealloc;

- (void)finishIncrementingWithCompletionHandler:(id)arg1;

- (void)incrementWithCaptureAnimation:(_Bool)arg1;

- (id)initWithCoder:(id)arg1;

- (id)initWithFrame:(struct CGRect)arg1;

- (void)layoutSubviews;

- (void)reset;

@property(nonatomic) _Bool showsWhenStarted; // @synthesize showsWhenStarted=_showsWhenStarted;

- (struct CGSize)sizeThatFits:(struct CGSize)arg1;



@end


