/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "NSGlyphInfo.h"


@class UIFont;



__attribute__((visibility("hidden")))

@interface NSIdentityGlyphInfo : NSGlyphInfo

{

    UIFont *_font;

    unsigned int _glyph;

}



+ (id)glyphInfoWithGlyph:(unsigned int)arg1 forFont:(id)arg2 baseString:(id)arg3;

+ (void)initialize;

- (id)_font;

- (unsigned int)_glyph;

- (unsigned int)_glyphForFont:(id)arg1 baseString:(id)arg2;

- (void)dealloc;

- (id)description;

- (void)encodeWithCoder:(id)arg1;

- (id)initWithGlyph:(unsigned int)arg1 forFont:(id)arg2 baseString:(id)arg3;



@end


