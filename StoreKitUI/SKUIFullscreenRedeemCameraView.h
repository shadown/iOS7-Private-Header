/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "UIView.h"



#import "UITextFieldDelegate.h"



@class NSString, SKUIRedeemTextField, UIImage;



@interface SKUIFullscreenRedeemCameraView : UIView <UITextFieldDelegate>

{

    id <SKUIRedeemCameraViewDelegate> _delegate;

    UIView *_overlay;

    UIView *_redeemerView;

    SKUIRedeemTextField *_textField;

    struct CGRect _keyboardRect;

    _Bool _enabled;

}



- (void).cxx_destruct;

- (void)_hideKeyboard;

- (id)_newTextFieldWithClientContext:(id)arg1;

- (void)_pauseRedeemer;

- (void)_resumeRedeemer;

- (void)_tapGestureAction:(id)arg1;

- (void)dealloc;

@property(nonatomic) __weak id <SKUIRedeemCameraViewDelegate> delegate; // @synthesize delegate=_delegate;

@property(nonatomic) _Bool enabled;

@property(retain, nonatomic) UIImage *image;

- (id)initWithClientContext:(id)arg1;

- (void)keyboardDidHide:(id)arg1;

- (void)keyboardDidShow:(id)arg1;

- (void)keyboardWillHide:(id)arg1;

- (void)keyboardWillShow:(id)arg1;

- (void)layoutSubviews;

@property(copy, nonatomic) NSString *text;

- (void)showKeyboard;

- (void)start;

- (void)textFieldDidBeginEditing:(id)arg1;

- (void)textFieldDidEndEditing:(id)arg1;

- (_Bool)textFieldShouldReturn:(id)arg1;

- (void)textFieldTextDidChange:(id)arg1;



@end

