/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "OADCharacterProperties.h"


@class NSMutableArray, OADBulletColor, OADBulletFont, OADBulletProperties, OADBulletSize, OADTextSpacing;



__attribute__((visibility("hidden")))

@interface OADParagraphProperties : OADCharacterProperties

{

    OADBulletSize *mBulletSize;

    OADBulletColor *mBulletColor;

    OADBulletFont *mBulletFont;

    OADBulletProperties *mBulletProperties;

    OADTextSpacing *mLineSpacing;

    OADTextSpacing *mBeforeSpacing;

    OADTextSpacing *mAfterSpacing;

    NSMutableArray *mTabStops;

    double mLeftMargin;

    double mRightMargin;

    double mIndent;

    double mDefaultTab;

    int mLevel;

    int mBulletCharSet;

    unsigned char mAlign;

    unsigned char mWrap;

    unsigned char mFontAlign;

    unsigned int mIsRightToLeft:1;

    unsigned int mIsLatinLineBreak:1;

    unsigned int mIsHangingPunctuation:1;

    unsigned int mHasTabStops:1;

    unsigned int mHasLeftMargin:1;

    unsigned int mHasRightMargin:1;

    unsigned int mHasLevel:1;

    unsigned int mHasIndent:1;

    unsigned int mHasAlign:1;

    unsigned int mHasDefaultTab:1;

    unsigned int mHasIsRightToLeft:1;

    unsigned int mHasWrap:1;

    unsigned int mHasFontAlign:1;

    unsigned int mHasIsLatinLineBreak:1;

    unsigned int mHasIsHangingPunctuation:1;

    unsigned int mHasBulletCharSet:1;

}



+ (id)defaultProperties;

- (id)addTabStop;

- (id)afterSpacing;

- (int)align;

- (id)beforeSpacing;

- (int)bulletCharSet;

- (id)bulletColor;

- (id)bulletFont;

- (id)bulletProperties;

- (id)bulletSize;

- (void)clearTabStops;

- (void)dealloc;

- (double)defaultTab;

- (int)fontAlign;

- (_Bool)hasAfterSpacing;

- (_Bool)hasAlign;

- (_Bool)hasBeforeSpacing;

- (_Bool)hasBulletCharSet;

- (_Bool)hasBulletColor;

- (_Bool)hasBulletFont;

- (_Bool)hasBulletProperties;

- (_Bool)hasBulletSize;

- (_Bool)hasDefaultTab;

- (_Bool)hasFontAlign;

- (_Bool)hasIndent;

- (_Bool)hasIsHangingPunctuation;

- (_Bool)hasIsLatinLineBreak;

- (_Bool)hasIsRightToLeft;

- (_Bool)hasLeftMargin;

- (_Bool)hasLevel;

- (_Bool)hasLineSpacing;

- (_Bool)hasRightMargin;

- (_Bool)hasTabStops;

- (_Bool)hasWrap;

- (unsigned long long)hash;

- (double)indent;

- (id)init;

- (id)initWithDefaults;

- (_Bool)isEqual:(id)arg1;

- (_Bool)isHangingPunctuation;

- (_Bool)isLatinLineBreak;

- (_Bool)isRightToLeft;

- (double)leftMargin;

- (int)level;

- (id)lineSpacing;

- (double)nonOveridenLeftMargin;

- (void)overrideWithProperties:(id)arg1;

- (void)removeUnnecessaryOverrides;

- (double)rightMargin;

- (void)setAfterSpacing:(id)arg1;

- (void)setAlign:(int)arg1;

- (void)setBeforeSpacing:(id)arg1;

- (void)setBulletCharSet:(int)arg1;

- (void)setBulletColor:(id)arg1;

- (void)setBulletFont:(id)arg1;

- (void)setBulletProperties:(id)arg1;

- (void)setBulletSize:(id)arg1;

- (void)setDefaultTab:(double)arg1;

- (void)setFontAlign:(int)arg1;

- (void)setIndent:(double)arg1;

- (void)setIsHangingPunctuation:(_Bool)arg1;

- (void)setIsLatinLineBreak:(_Bool)arg1;

- (void)setIsRightToLeft:(_Bool)arg1;

- (void)setLeftMargin:(double)arg1;

- (void)setLevel:(int)arg1;

- (void)setLineSpacing:(id)arg1;

- (void)setRightMargin:(double)arg1;

- (void)setWrap:(int)arg1;

- (id)tabStopAtIndex:(unsigned long long)arg1;

- (unsigned long long)tabStopCount;

- (id)tabStops;

- (int)wrap;



@end


