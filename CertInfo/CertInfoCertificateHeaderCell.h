/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "UITableViewCell.h"



@class CertInfoGradientLabel, UIImage, UILabel;



@interface CertInfoCertificateHeaderCell : UITableViewCell

{

    UIImage *_certificateImage;

    UIImage *_notTrustedGradient;

    UILabel *_titleLabel;

    UILabel *_subtitleLabel;

    CertInfoGradientLabel *_trustedLabel;

}



- (id)_certificateImage;

- (id)_notTrustedGradient;

- (id)_subtitleLabel;

- (id)_titleLabel;

- (id)_trustedLabel;

- (void)dealloc;

- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

- (void)layoutSubviews;

- (double)rowHeight;

- (void)setExpired:(_Bool)arg1;

- (void)setTrustSubtitle:(id)arg1;

- (void)setTrustTitle:(id)arg1;



@end


