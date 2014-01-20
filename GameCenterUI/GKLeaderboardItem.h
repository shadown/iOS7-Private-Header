/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */





@class GKPlayer, GKScore;



@interface GKLeaderboardItem : NSObject

{

    GKPlayer *_player;

    GKScore *_score;

    unsigned long long _totalScores;

}



- (id)_gkViewDebuggingChildKeys;

- (id)copyWithZone:(struct _NSZone *)arg1;

- (void)dealloc;

- (unsigned long long)hash;

- (_Bool)isEqual:(id)arg1;

@property(retain) GKPlayer *player; // @synthesize player=_player;

@property(retain) GKScore *score; // @synthesize score=_score;

@property(nonatomic) unsigned long long totalScores; // @synthesize totalScores=_totalScores;



@end

