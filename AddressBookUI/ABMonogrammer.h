/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */





@class NSString, UIColor, UIFont, UIImage;



@interface ABMonogrammer : NSObject

{

    UIImage *_silhouetteMonogram;

    UIImage *_questionMarkMonogram;

    UIImage *_knockoutMaskMonogram;

    double _innerBorderWidth;

    NSString *_silhouetteImageName;

    long long _monogrammerStyle;

    _Bool _textKnockout;

    double _diameter;

    UIColor *_backgroundColor;

    UIFont *_font;

    UIColor *_textColor;

}



- (void)_clearMonogramCache;

- (id)_copyMonogramWithImageData:(struct __CFData *)arg1;

- (id)_copyMonogramWithInitials:(id)arg1;

- (id)_copyMonogramWithKnockoutMask;

- (id)_copyMonogramWithSilhouette;

- (id)_initialsForFirstName:(id)arg1 lastName:(id)arg2;

- (id)_initialsForPerson:(void *)arg1;

@property(retain, nonatomic) UIColor *backgroundColor; // @synthesize backgroundColor=_backgroundColor;

- (void)dealloc;

- (id)defaultMonogram;

@property(nonatomic) double diameter; // @synthesize diameter=_diameter;

@property(retain, nonatomic) UIFont *font; // @synthesize font=_font;

- (_Bool)hasImageOrInitialsForPerson:(void *)arg1;

- (_Bool)hasMonogramForPerson:(void *)arg1;

- (id)init;

- (id)initWithStyle:(long long)arg1 diameter:(double)arg2;

- (double)innerBorderWidth;

- (id)knockoutMaskMonogram;

- (id)maskForMonogram;

- (id)monogramForPerson:(void *)arg1;

- (id)monogramForPerson:(void *)arg1 isPersonImage:(_Bool *)arg2;

- (id)monogramForPersonWithFirstName:(id)arg1 lastName:(id)arg2;

- (void)monogramsAsFlatImages;

- (id)questionMarkMonogram;

@property(retain, nonatomic) UIColor *textColor; // @synthesize textColor=_textColor;

@property(nonatomic) _Bool textKnockout; // @synthesize textKnockout=_textKnockout;

- (id)silhouetteImageName;

- (id)silhouetteMonogram;



@end

