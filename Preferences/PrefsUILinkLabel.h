/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "UILabel.h"



@class NSURL;



@interface PrefsUILinkLabel : UILabel

{

    NSURL *_url;

    _Bool _touchingURL;

    id _target;

    SEL _action;

    NSURL *_URL;

}



@property(retain, nonatomic) NSURL *URL; // @synthesize URL=_URL;

@property(nonatomic) SEL action; // @synthesize action=_action;

- (id)color:(id)arg1 byMultiplyingSubComponentsBy:(float)arg2;

- (void)dealloc;

- (id)initWithFrame:(struct CGRect)arg1;

- (void)openURL:(id)arg1;

@property(nonatomic) id target; // @synthesize target=_target;

- (void)tappedLink:(id)arg1;

- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;

- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;

- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;

- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;



@end

