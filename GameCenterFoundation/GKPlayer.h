/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */





#import "NSCoding.h"

#import "NSSecureCoding.h"



@class GKGame, GKPlayerInternal, NSArray, NSDate, NSString;



@interface GKPlayer : NSObject <NSCoding, NSSecureCoding>

{

    GKPlayerInternal *_internal;

    NSArray *_friends;

    GKGame *_lastPlayedGame;

}



+ (void)acceptFriendRequestsFromPlayerIDs:(id)arg1 withHandles:(id)arg2 handler:(id)arg3;

+ (id)anonymousPlayer;

+ (id)automatchPlayer;

+ (id)cacheKeyForPlayerID:(id)arg1;

+ (void)declineFriendRequestsFromPlayerIDs:(id)arg1 handler:(id)arg2;

+ (id)instanceMethodSignatureForSelector:(SEL)arg1;

+ (_Bool)instancesRespondToSelector:(SEL)arg1;

+ (void)loadPlayersForIdentifiers:(id)arg1 withCompletionHandler:(id)arg2;

+ (_Bool)supportsSecureCoding;

+ (id)unknownPlayer;

- (void)_postChangeNotification;

- (void)acceptFriendRequestWithCompletionHandler:(id)arg1;

@property(readonly, nonatomic) NSString *cacheKey;

- (void)dealloc;

- (void)declineFriendRequestWithCompletionHandler:(id)arg1;

- (id)description;

@property(readonly, nonatomic) NSString *displayName;

- (id)displayNameWithOptions:(unsigned char)arg1;

- (id)email;

- (id)emails;

- (void)encodeWithCoder:(id)arg1;

- (id)forwardingTargetForSelector:(SEL)arg1;

@property(retain, nonatomic) NSArray *friends; // @synthesize friends=_friends;

@property(readonly, nonatomic) _Bool hasPhoto;

- (unsigned long long)hash;

- (id)init;

- (id)initWithCoder:(id)arg1;

- (id)initWithInternalRepresentation:(id)arg1;

- (id)initWithPendingFriendRequest:(id)arg1;

@property(retain) GKPlayerInternal *internal; // @synthesize internal=_internal;

- (_Bool)isEqual:(id)arg1;

@property(readonly, nonatomic) _Bool isFriendRecommendation; // @dynamic isFriendRecommendation;

@property(readonly, nonatomic) _Bool isFriendRequest; // @dynamic isFriendRequest;

@property(readonly, nonatomic) GKGame *lastPlayedGame; // @synthesize lastPlayedGame=_lastPlayedGame;

- (void)loadCommonFriends:(_Bool)arg1 asPlayersWithCompletionHandler:(id)arg2;

- (void)loadFriendsAsPlayersWithCompletionHandler:(id)arg1;

- (void)loadGamesPlayed:(id)arg1;

- (void)loadGamesPlayedDetailsWithCompletionHandler:(id)arg1;

- (void)loadGamesPlayedIncludingInstalledGames:(_Bool)arg1 completionHandler:(id)arg2;

- (void)loadProfileWithCompletionHandler:(id)arg1;

- (void)loadRecentMatchesForGame:(id)arg1 block:(id)arg2;

- (id)methodSignatureForSelector:(SEL)arg1;

- (void)postChangeNotification;

- (_Bool)respondsToSelector:(SEL)arg1;

- (void)setValue:(id)arg1 forUndefinedKey:(id)arg2;

- (id)sortName;

@property(readonly, nonatomic) CDStruct_c6d350ec stats;

- (id)valueForUndefinedKey:(id)arg1;



// Remaining properties

@property(copy, nonatomic) NSString *alias; // @dynamic alias;

@property(retain, nonatomic) NSDate *date; // @dynamic date;

@property(readonly, nonatomic) NSString *firstName; // @dynamic firstName;

@property(readonly, nonatomic) _Bool isAnonymousPlayer; // @dynamic isAnonymousPlayer;

@property(readonly, nonatomic) _Bool isAutomatchPlayer; // @dynamic isAutomatchPlayer;

@property(readonly, nonatomic) _Bool isFriend; // @dynamic isFriend;

@property(readonly, nonatomic) _Bool isLocalPlayer; // @dynamic isLocalPlayer;

@property(readonly, nonatomic) _Bool isUnknownPlayer; // @dynamic isUnknownPlayer;

@property(readonly, nonatomic) NSString *lastName; // @dynamic lastName;

@property(readonly, nonatomic) NSDate *lastPlayedDate; // @dynamic lastPlayedDate;

@property(readonly, nonatomic, getter=isLoaded) _Bool loaded; // @dynamic loaded;

@property(retain, nonatomic) NSString *message; // @dynamic message;

@property(nonatomic) unsigned long long numberOfFriends; // @dynamic numberOfFriends;

@property(retain, nonatomic) NSString *playerID; // @dynamic playerID;

@property(retain, nonatomic) NSString *reason; // @dynamic reason;

@property(retain, nonatomic) NSString *reason2; // @dynamic reason2;

@property(nonatomic) unsigned int rid; // @dynamic rid;

@property(nonatomic) int source; // @dynamic source;

@property(copy, nonatomic) NSString *status; // @dynamic status;



@end

