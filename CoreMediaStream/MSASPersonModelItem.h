/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */





#import "NSCopying.h"



@class MSASAlbum, NSString;



@interface MSASPersonModelItem : NSObject <NSCopying>

{

    int _errorCount;

    MSASAlbum *_album;

    NSString *_albumGUID;

    id <NSObject> _object;

}



- (void).cxx_destruct;

@property(retain, nonatomic) MSASAlbum *album; // @synthesize album=_album;

@property(retain, nonatomic) NSString *albumGUID; // @synthesize albumGUID=_albumGUID;

- (id)copyWithZone:(struct _NSZone *)arg1;

@property(nonatomic) int errorCount; // @synthesize errorCount=_errorCount;

- (_Bool)isEqual:(id)arg1;

@property(retain, nonatomic) id <NSObject> object; // @synthesize object=_object;



@end


