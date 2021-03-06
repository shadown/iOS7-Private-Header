/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */





@class GKLeaderboardInternal, GKScore, NSArray, NSObject<GKLeaderboardDelegate>, NSString;



@interface GKLeaderboard : NSObject

{

    int _loadingCount;

    long long _timeScope;

    long long _playerScope;

    NSArray *_playerIDs;

    NSArray *_scores;

    GKScore *_localPlayerScore;

    NSObject<GKLeaderboardDelegate> *_weakDelegate;

    GKLeaderboardInternal *_internal;

    struct _NSRange _range;

}



+ (id)instanceMethodSignatureForSelector:(SEL)arg1;

+ (_Bool)instancesRespondToSelector:(SEL)arg1;

+ (void)loadCategoriesWithCompletionHandler:(id)arg1;

+ (void)loadLeaderboardWithIdentifier:(id)arg1 forGame:(id)arg2 withPlayer:(id)arg3 withCompletionHandler:(id)arg4;

+ (void)loadLeaderboardsForGame:(id)arg1 forSet:(id)arg2 withPlayer:(id)arg3 withCompletionHandler:(id)arg4;

+ (void)loadLeaderboardsForGame:(id)arg1 withCompletionHandler:(id)arg2;

+ (void)loadLeaderboardsForGame:(id)arg1 withPlayer:(id)arg2 withCompletionHandler:(id)arg3;

+ (void)loadLeaderboardsWithCompletionHandler:(id)arg1;

+ (void)setDefaultLeaderboard:(id)arg1 withCompletionHandler:(id)arg2;

- (void)dealloc;

- (void)decrementLoadingCountAtomically;

@property(nonatomic) NSObject<GKLeaderboardDelegate> *delegate; // @synthesize delegate=_weakDelegate;

- (id)description;

- (id)forwardingTargetForSelector:(SEL)arg1;

- (unsigned long long)hash;

- (void)incrementLoadingCountAtomically;

- (id)init;

- (id)initWithInternalRepresentation:(id)arg1;

- (id)initWithPlayerIDs:(id)arg1;

@property(retain) GKLeaderboardInternal *internal; // @synthesize internal=_internal;

- (_Bool)isEqual:(id)arg1;

@property(readonly, getter=isLoading) _Bool loading; // @dynamic loading;

- (void)loadScoresForGame:(id)arg1 withCompletionHandler:(id)arg2;

- (void)loadScoresForRequest:(id)arg1 handler:(id)arg2;

- (void)loadScoresWithCompletionHandler:(id)arg1;

@property(nonatomic) int loadingCount; // @synthesize loadingCount=_loadingCount;

@property(retain, nonatomic) GKScore *localPlayerScore; // @synthesize localPlayerScore=_localPlayerScore;

- (id)methodSignatureForSelector:(SEL)arg1;

@property(retain, nonatomic) NSArray *playerIDs; // @synthesize playerIDs=_playerIDs;

@property(nonatomic) long long playerScope; // @synthesize playerScope=_playerScope;

@property(nonatomic) struct _NSRange range; // @synthesize range=_range;

- (_Bool)respondsToSelector:(SEL)arg1;

- (id)scoreRequestForGame:(id)arg1;

@property(retain, nonatomic) NSArray *scores; // @synthesize scores=_scores;

@property(nonatomic) long long timeScope; // @synthesize timeScope=_timeScope;

- (void)setValue:(id)arg1 forUndefinedKey:(id)arg2;

- (id)valueForUndefinedKey:(id)arg1;



// Remaining properties

@property(copy, nonatomic) NSString *category; // @dynamic category;

@property(readonly, nonatomic) long long friendRank; // @dynamic friendRank;

@property(readonly, nonatomic) long long friendRankCount; // @dynamic friendRankCount;

@property(readonly, nonatomic) NSString *groupIdentifier; // @dynamic groupIdentifier;

@property(copy, nonatomic) NSString *identifier; // @dynamic identifier;

@property(readonly, nonatomic) NSString *localizedTitle; // @dynamic localizedTitle;

@property(readonly, nonatomic) unsigned long long maxRange; // @dynamic maxRange;

@property(readonly, nonatomic) long long overallRank; // @dynamic overallRank;

@property(readonly, nonatomic) long long overallRankCount; // @dynamic overallRankCount;

@property(readonly, nonatomic) NSString *title; // @dynamic title;



@end


