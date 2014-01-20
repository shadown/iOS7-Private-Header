/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */





@class NSMutableArray, NSMutableSet;



@interface MPVolumeHUDController : NSObject

{

    NSMutableArray *_contexts;

    NSMutableSet *_categories;

}



+ (id)sharedInstance;

- (void).cxx_destruct;

- (_Bool)_sliderIsVisible:(id)arg1;

- (void)_updateVisibility;

- (id)init;

@property(readonly, nonatomic) id mainContext;

- (void)popContext;

- (id)pushContext;

- (void)registerView:(id)arg1 inContext:(id)arg2;

- (void)setNeedsUpdate;

- (void)unregisterView:(id)arg1 inContext:(id)arg2;



@end


