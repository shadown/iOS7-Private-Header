/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "UIView.h"


#import "UIStatusBarTinting.h"



@class UIColor, _UIHostedWindowHostingHandle;



@interface _UIRemoteView : UIView <UIStatusBarTinting>

{

    _Bool _actsAsTintView;

    UIColor *_statusBarTintColor;

    _UIHostedWindowHostingHandle *_hostedWindowHostingHandle;

    id _tintColorDidChangeHandler;

}



+ (Class)layerClass;

+ (id)viewWithHostedWindowHostingHandle:(id)arg1;

+ (id)viewWithRemoteContextID:(unsigned int)arg1;

@property(nonatomic, setter=_setActsAsTintView:) _Bool _actsAsTintView; // @synthesize _actsAsTintView;

- (void)_didMoveFromWindow:(id)arg1 toWindow:(id)arg2;

@property(retain, nonatomic, setter=_setStatusBarTintColor:) UIColor *_statusBarTintColor; // @synthesize _statusBarTintColor;

- (void)_setStatusBarTintColor:(id)arg1 duration:(double)arg2;

- (void)applyTransformUndoingRemoteRootLayerTransform:(struct CGAffineTransform)arg1 frame:(struct CGRect)arg2;

- (void)dealloc;

@property(retain, nonatomic) _UIHostedWindowHostingHandle *hostedWindowHostingHandle; // @synthesize hostedWindowHostingHandle=_hostedWindowHostingHandle;

- (void)setContextID:(unsigned int)arg1;

@property(copy, nonatomic) id tintColorDidChangeHandler; // @synthesize tintColorDidChangeHandler=_tintColorDidChangeHandler;

- (void)tintColorDidChange;



@end

