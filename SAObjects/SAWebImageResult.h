/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "SAWebWebResult.h"


@class NSArray, NSNumber, SAWebAcePicture;



@interface SAWebImageResult : SAWebWebResult

{

}



+ (id)imageResult;

+ (id)imageResultWithDictionary:(id)arg1 context:(id)arg2;

- (id)encodedClassName;

@property(copy, nonatomic) NSNumber *fileSize;

- (id)groupIdentifier;

@property(retain, nonatomic) SAWebAcePicture *picture;

@property(copy, nonatomic) NSArray *thumbNails;



@end

