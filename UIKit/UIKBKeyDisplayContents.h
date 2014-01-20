/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */





@class NSArray, NSString;



__attribute__((visibility("hidden")))

@interface UIKBKeyDisplayContents : NSObject

{

    _Bool _isCustomGlyph;

    _Bool _secondaryIsCustomGlyph;

    _Bool _fallbackIsCustomGlyph;

    _Bool _fillPath;

    NSString *_displayString;

    NSString *_displayStringImage;

    NSString *_secondaryDisplayString;

    NSString *_fallbackDisplayString;

    NSArray *_variantDisplayStrings;

    NSArray *_variantDisplayImages;

    long long _highlightedVariantIndex;

    long long _displayPathType;

}



+ (id)displayContents;

- (void)dealloc;

- (id)description;

@property(nonatomic) long long displayPathType; // @synthesize displayPathType=_displayPathType;

@property(retain, nonatomic) NSString *displayString; // @synthesize displayString=_displayString;

@property(retain, nonatomic) NSString *displayStringImage; // @synthesize displayStringImage=_displayStringImage;

@property(retain, nonatomic) NSString *fallbackDisplayString; // @synthesize fallbackDisplayString=_fallbackDisplayString;

@property(nonatomic) _Bool fallbackIsCustomGlyph; // @synthesize fallbackIsCustomGlyph=_fallbackIsCustomGlyph;

@property(nonatomic) _Bool fillPath; // @synthesize fillPath=_fillPath;

@property(nonatomic) long long highlightedVariantIndex; // @synthesize highlightedVariantIndex=_highlightedVariantIndex;

@property(nonatomic) _Bool isCustomGlyph; // @synthesize isCustomGlyph=_isCustomGlyph;

@property(retain, nonatomic) NSString *secondaryDisplayString; // @synthesize secondaryDisplayString=_secondaryDisplayString;

@property(nonatomic) _Bool secondaryIsCustomGlyph; // @synthesize secondaryIsCustomGlyph=_secondaryIsCustomGlyph;

@property(retain, nonatomic) NSArray *variantDisplayImages; // @synthesize variantDisplayImages=_variantDisplayImages;

@property(retain, nonatomic) NSArray *variantDisplayStrings; // @synthesize variantDisplayStrings=_variantDisplayStrings;



@end

