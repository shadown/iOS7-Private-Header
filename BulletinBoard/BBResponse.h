/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */





#import "NSCoding.h"



@class BBAssertion, NSArray, NSString;



@interface BBResponse : NSObject <NSCoding>

{

    BBAssertion *_lifeAssertion;

    id _sendBlock;

    NSString *_bulletinID;

    _Bool _sent;

    NSString *_replyText;

    NSArray *_lifeAssertions;

    long long _actionType;

    NSString *_buttonID;

}



@property(nonatomic) long long actionType; // @synthesize actionType=_actionType;

@property(retain, nonatomic) NSString *bulletinID; // @synthesize bulletinID=_bulletinID;

@property(copy, nonatomic) NSString *buttonID; // @synthesize buttonID=_buttonID;

- (void)dealloc;

- (void)encodeWithCoder:(id)arg1;

- (id)initWithCoder:(id)arg1;

@property(copy, nonatomic) NSArray *lifeAssertions; // @synthesize lifeAssertions=_lifeAssertions;

@property(copy, nonatomic) NSString *replyText; // @synthesize replyText=_replyText;

- (void)send;

@property(copy, nonatomic) id sendBlock; // @synthesize sendBlock=_sendBlock;



@end

