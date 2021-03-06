/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */





@class NSMutableDictionary;



__attribute__((visibility("hidden")))

@interface OABReaderState : NSObject

{

    Class mClient;

    NSMutableDictionary *mShapeIdMap;

    NSMutableDictionary *mEshContentIdMap;

    id <OADColorPalette> mColorPalette;

    NSMutableDictionary *mBlipIdMap;

}



- (Class)client;

- (id)colorPalette;

- (void)dealloc;

- (id)drawableForBlipId:(int)arg1;

- (id)drawableForShapeId:(int)arg1;

- (struct EshContent *)eshContentForId:(int)arg1;

- (id)init;

- (id)initWithClient:(Class)arg1;

- (void)setColorPalette:(id)arg1;

- (void)setDrawable:(id)arg1 forBlipId:(int)arg2;

- (void)setDrawable:(id)arg1 forShapeId:(unsigned long long)arg2;

- (void)setEshContent:(struct EshContent *)arg1 forId:(int)arg2;



@end


