/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */





__attribute__((visibility("hidden")))

@interface MFPStringFormat : NSObject

{

    int mAlignment;

    unsigned short mDigitSubstitutionLanguage;

    int mDigitSubstitutionMethod;

    unsigned int mFormatFlags;

    int mHotkeyPrefix;

    int mLineAlignment;

    float mFirstTabOffset;

    int mTabStopCount;

    float *mTabStops;

    int mTrimming;

}



- (int)alignment;

- (void)dealloc;

- (unsigned short)digitSubstitutionLanguage;

- (int)digitSubstitutionMethod;

- (float)firstTabOffset;

- (unsigned int)formatFlags;

- (int)hotkeyPrefix;

- (id)init;

- (int)lineAlignment;

- (void)setAlignment:(int)arg1;

- (void)setDigitSubstitutionLanguage:(unsigned short)arg1;

- (void)setDigitSubstitutionMethod:(int)arg1;

- (void)setFirstTabOffset:(float)arg1;

- (void)setFormatFlags:(unsigned int)arg1;

- (void)setHotkeyPrefix:(int)arg1;

- (void)setLineAlignment:(int)arg1;

- (void)setTabStops:(const float *)arg1 count:(int)arg2;

- (void)setTrimming:(int)arg1;

- (int)tabStopCount;

- (const float *)tabStops;

- (int)trimming;



@end


