/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */





@interface WBSURLCompletionMatch : NSObject

{

    long long _matchLocation;

}



+ (long long)matchLocationForString:(id)arg1 inTitle:(id)arg2;

+ (long long)matchLocationForString:(id)arg1 inURLString:(id)arg2;

- (id)initWithMatchLocation:(long long)arg1;

@property(readonly, nonatomic) long long matchLocation; // @synthesize matchLocation=_matchLocation;

- (id)matchingStringWithUserTypedPrefix:(id)arg1;

- (id)originalURLString;

- (id)title;

- (id)userVisibleURLString;



@end


