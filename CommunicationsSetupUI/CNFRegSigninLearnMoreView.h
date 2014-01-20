/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "UIView.h"



#import "PSHeaderFooterView.h"



@class CNFRegSplashSignInController, PSSpecifier, UIButton, UIImageView, UILabel, UIProgressIndicator, UITextField, UserPassBox;



@interface CNFRegSigninLearnMoreView : UIView <PSHeaderFooterView>

{

    long long _serviceType;

    PSSpecifier *_specifier;

    UIButton *_learnMoreButton;

    UIImageView *_splashImageView;

    UILabel *_titleLabel;

    UILabel *_verbiageLabel;

    UserPassBox *_userPassBox;

    UILabel *_appleIDLabel;

    UITextField *_usernameField;

    UILabel *_passwordLabel;

    UITextField *_passwordField;

    UIButton *_signInButton;

    UIProgressIndicator *_signInSpinner;

    UIButton *_forgotIDButton;

    UIButton *_createNewButton;

    CNFRegSplashSignInController *_controller;

}



- (void)_learnMorePressed:(id)arg1;

- (id)_splashImage;

- (void)_textDidChange:(id)arg1;

- (void)_updateSignInButton;

- (id)appleIDLabel;

@property(nonatomic) CNFRegSplashSignInController *controller; // @synthesize controller=_controller;

- (id)createNewButton;

- (void)dealloc;

- (id)forgotIDButton;

- (id)initWithSpecifier:(id)arg1;

- (void)layoutSubviews;

- (id)learnMoreButton;

- (id)passwordField;

- (id)passwordLabel;

- (id)passwordTextField;

- (double)preferredHeightForWidth:(double)arg1;

@property(nonatomic) long long serviceType; // @synthesize serviceType=_serviceType;

- (void)setCreateNewButtonTarget:(id)arg1 selector:(SEL)arg2;

- (void)setFieldsEnabled:(_Bool)arg1;

- (void)setForgotIDButtonTarget:(id)arg1 selector:(SEL)arg2;

- (void)setSignInButtonTarget:(id)arg1 selector:(SEL)arg2;

- (id)signInButton;

- (id)signInSpinner;

- (id)splashImageView;

- (id)titleLabel;

- (id)userPassBox;

- (id)usernameField;

- (id)usernameTextField;

- (id)verbiageLabel;



@end

