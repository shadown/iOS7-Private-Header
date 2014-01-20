/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "SUScriptObject.h"


@class MPMediaItem;



@interface SUScriptMediaItem : SUScriptObject

{

}



+ (id)copyScriptMediaTypesForNativeMediaTypes:(unsigned long long)arg1;

+ (void)initialize;

+ (unsigned long long)nativeMediaTypesForScriptMediaTypes:(id)arg1;

+ (id)scriptMediaTypeForNativeMediaType:(unsigned long long)arg1;

+ (id)webScriptNameForSelector:(SEL)arg1;

- (id)_className;

- (id)imageURLWithWidth:(id)arg1 height:(id)arg2;

@property(readonly, nonatomic) MPMediaItem *nativeItem;

- (id)valueForProperty:(id)arg1;



@end

