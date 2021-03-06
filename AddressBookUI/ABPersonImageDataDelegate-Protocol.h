/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



@protocol ABPersonImageDataDelegate

- (_Bool)didChangePreferredPersonForImage;

- (_Bool)hasImageChanges;

- (_Bool)hasImageDataForPerson:(id)arg1;

- (id)imageDataWithFormat:(int)arg1 cropRect:(struct CGRect *)arg2 forPerson:(id)arg3;

- (void)imageWillSave;

- (id)people;

- (id)personForImageData;

- (void)refreshImageData;

- (void)reloadImageData;

- (void)removeImageDataForPerson:(id)arg1;

- (void)resetImageData;

- (void)setImageData:(id)arg1 withFormat:(int)arg2 cropRect:(struct CGRect)arg3 forPerson:(id)arg4;

- (void)setPersonForImageData:(id)arg1;

- (void)updateRecordImages;

- (id)writablePeople;



@optional

- (_Bool)shouldUseSourceTypeSpecificStrings;

@end


