/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "PBCodable.h"



@class NSMutableArray;



__attribute__((visibility("hidden")))

@interface VKPIconPack : PBCodable

{

    NSMutableArray *_atlas;

    NSMutableArray *_icons;

    unsigned int _identifier;

}



- (void)addAtlas:(id)arg1;

- (void)addIcons:(id)arg1;

@property(retain, nonatomic) NSMutableArray *atlas; // @synthesize atlas=_atlas;

- (id)atlasAtIndex:(unsigned long long)arg1;

- (unsigned long long)atlasCount;

- (void)clearAtlas;

- (void)clearIcons;

- (void)copyTo:(id)arg1;

- (void)dealloc;

- (id)description;

- (id)dictionaryRepresentation;

- (unsigned long long)hash;

@property(retain, nonatomic) NSMutableArray *icons; // @synthesize icons=_icons;

- (id)iconsAtIndex:(unsigned long long)arg1;

- (unsigned long long)iconsCount;

@property(nonatomic) unsigned int identifier; // @synthesize identifier=_identifier;

- (_Bool)isEqual:(id)arg1;

- (_Bool)readFrom:(id)arg1;

- (void)writeTo:(id)arg1;



@end

