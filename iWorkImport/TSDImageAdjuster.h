/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */





@class TSDImageAdjustments;



__attribute__((visibility("hidden")))

@interface TSDImageAdjuster : NSObject

{

    TSDImageAdjustments *mImageAdjustments;

}



- (void)dealloc;

- (id)init;

- (id)initWithImageAdjustments:(id)arg1;

- (struct CGImage *)newFilteredImageForImage:(struct CGImage *)arg1 enhancedImage:(struct CGImage **)arg2;

- (struct CGImage *)p_newImageFromCIImage:(id)arg1 underlyingImage:(struct CGImage *)arg2;



@end

