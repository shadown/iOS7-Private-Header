/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "UINavigationController.h"



@class PUAbstractNavigationBanner, _UINavigationControllerPalette;



@interface PUNavigationController : UINavigationController

{

    _Bool _pu_preventsAutorotation;

    PUAbstractNavigationBanner *__banner;

    _UINavigationControllerPalette *__palette;

    unsigned long long _pu_supportedInterfaceOrientations;

}



- (void).cxx_destruct;

@property(retain, nonatomic, setter=_setBanner:) PUAbstractNavigationBanner *_banner; // @synthesize _banner=__banner;

@property(retain, nonatomic, setter=_setPalette:) _UINavigationControllerPalette *_palette; // @synthesize _palette=__palette;

@property(nonatomic) _Bool pu_preventsAutorotation; // @synthesize pu_preventsAutorotation=_pu_preventsAutorotation;

- (void)pu_setPreventsAutorotation:(_Bool)arg1;

- (void)pu_setSupportedInterfaceOrientations:(unsigned long long)arg1;

@property(nonatomic) unsigned long long pu_supportedInterfaceOrientations; // @synthesize pu_supportedInterfaceOrientations=_pu_supportedInterfaceOrientations;

- (void)pu_willShowViewController:(id)arg1 animated:(_Bool)arg2;

- (_Bool)shouldAutorotate;

- (_Bool)shouldAutorotateToInterfaceOrientation:(long long)arg1;

- (unsigned long long)supportedInterfaceOrientations;



@end

