/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "PLManagedAsset.h"


@class NSDictionary, NSURL;



@interface PLWallpaperAsset : PLManagedAsset

{

}



+ (id)entityInManagedObjectContext:(id)arg1;

+ (id)entityName;

+ (id)insertIntoPhotoLibrary:(id)arg1 withImageURL:(id)arg2 thumbnailURL:(id)arg3;

- (id)_image;

- (id)_thumbnailImage;

- (_Bool)allowsWallpaperEditing;

@property(retain, nonatomic) NSURL *imageURL;

- (id)imageWithFormat:(int)arg1;

- (id)imageWithFormat:(int)arg1 outImageProperties:(const struct __CFDictionary **)arg2;

- (id)indexSheetImage;

- (_Bool)isIncludedInMoments;

- (id)newFullScreenImage:(const struct __CFDictionary **)arg1;

- (void)prepareForDeletion;

@property(retain, nonatomic) NSURL *thumbnailURL;

- (void)setURL:(id)arg1 forKey:(id)arg2;

@property(retain, nonatomic) NSDictionary *wallpaperOptions;

- (id)urlForKey:(id)arg1;

- (id)wallpaperFullScreenImage;



@end

