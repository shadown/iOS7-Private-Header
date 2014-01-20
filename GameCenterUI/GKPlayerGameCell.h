/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "GKBaseGameCell.h"


@class UILabel;



@interface GKPlayerGameCell : GKBaseGameCell

{

    UILabel *_statsLabel;

    UILabel *_dateLabel;

}



+ (id)_gkStandardConstraintMetrics;

- (id)achievementsStringWithGameRecord:(id)arg1;

- (_Bool)canRemoveItem;

@property(retain, nonatomic) UILabel *dateLabel; // @synthesize dateLabel=_dateLabel;

- (void)dealloc;

- (void)didUpdateModel;

- (id)initWithFrame:(struct CGRect)arg1;

- (id)leaderboardStringWithGameRecord:(id)arg1;

- (void)prepareForReuse;

@property(retain, nonatomic) UILabel *statsLabel; // @synthesize statsLabel=_statsLabel;



@end

