/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "VKIconArtwork.h"


__attribute__((visibility("hidden")))

@interface _VKPOIIconArtwork : VKIconArtwork

{

    struct CGImage *_glyphImage;

    CDStruct_cf20f7af _style;

    double _contentScale;

}



- (id).cxx_construct;

- (void)_cleanUpAfterDrawing;

- (id)_newIcon;

- (void)dealloc;

- (id)initWithGlyph:(struct CGImage *)arg1 style:(CDStruct_cf20f7af *)arg2 contentScale:(double)arg3;

- (struct CGSize)size;



@end


