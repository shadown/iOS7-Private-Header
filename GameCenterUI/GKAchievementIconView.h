/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "UIImageView.h"



@class GKAchievement;



@interface GKAchievementIconView : UIImageView

{

    GKAchievement *_achievement;

    GKAchievement *_localAchievement;

}



+ (id)progressSource;

@property(retain, nonatomic) GKAchievement *achievement; // @synthesize achievement=_achievement;

- (void)configureImage;

- (void)dealloc;

- (id)initWithFrame:(struct CGRect)arg1;

- (void)invalidateIntrinsicContentSize;

- (void)loadAndProcessAchievementProgressImageForAchievement:(id)arg1 withHandler:(id)arg2;

@property(retain, nonatomic) GKAchievement *localAchievement; // @synthesize localAchievement=_localAchievement;

- (id)processProgressImageForAchievementImage:(id)arg1;

- (id)progressIdentifierForAchievement:(id)arg1;

- (void)setupForAchievement:(id)arg1 localAchievement:(id)arg2;



@end

