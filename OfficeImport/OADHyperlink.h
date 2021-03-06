/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */





@class NSString, NSURL;



__attribute__((visibility("hidden")))

@interface OADHyperlink : NSObject

{

    NSURL *mTargetLocation;

    int mTargetMode;

    NSString *mTargetFrame;

    NSString *mAction;

    NSString *mTooltip;

    NSString *mInvalidUrl;

    _Bool mDoEndSound;

    _Bool mIsVisited;

    _Bool mDoAddToHistory;

}



- (id)action;

- (void)dealloc;

@property(nonatomic) _Bool doAddToHistory; // @synthesize doAddToHistory=mDoAddToHistory;

@property(nonatomic) _Bool doEndSound; // @synthesize doEndSound=mDoEndSound;

- (unsigned long long)hash;

- (id)init;

- (id)invalidUrl;

- (_Bool)isEqual:(id)arg1;

@property(nonatomic) _Bool isVisited; // @synthesize isVisited=mIsVisited;

- (void)setAction:(id)arg1;

- (void)setInvalidUrl:(id)arg1;

- (void)setTargetFrame:(id)arg1;

- (void)setTargetLocation:(id)arg1;

- (void)setTargetMode:(int)arg1;

- (void)setTooltip:(id)arg1;

- (id)targetFrame;

- (id)targetLocation;

- (int)targetMode;

- (id)tooltip;



@end


