/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "UIView.h"



@class NSString, UIActivityIndicatorView, UILabel;



@interface QLProgressView : UIView

{

    int _backgroundColorType;

    UIActivityIndicatorView *_progressIndicator;

    UILabel *_loadingTextLabel;

}



- (void)_update;

@property int backgroundColorType;

- (void)dealloc;

- (id)init;

- (void)layoutSubviews;

@property(copy) NSString *loadingText;



@end


