/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */





@class NSData, NSMutableDictionary, NSString;



@interface CTMessagePart : NSObject

{

    NSString *_contentType;

    NSMutableDictionary *_contentTypeParams;

    NSString *_contentId;

    NSString *_contentLocation;

    NSData *_data;

}



- (void)addContentTypeParameterWithName:(id)arg1 value:(id)arg2;

- (id)allContentTypeParameterNames;

@property(copy, nonatomic) NSString *contentId; // @synthesize contentId=_contentId;

@property(copy, nonatomic) NSString *contentLocation; // @synthesize contentLocation=_contentLocation;

@property(copy, nonatomic) NSString *contentType; // @synthesize contentType=_contentType;

- (id)contentTypeParameterWithName:(id)arg1;

@property(copy, nonatomic) NSData *data; // @synthesize data=_data;

- (void)dealloc;

- (id)initWithData:(id)arg1 contentType:(id)arg2;



@end


