/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "OADProperties.h"


@class OADTextBodyAutoFit, OADTextWarp;



__attribute__((visibility("hidden")))

@interface OADTextBodyProperties : OADProperties

{

    OADTextBodyAutoFit *mAutoFit;

    OADTextWarp *mTextWarp;

    double mTopInset;

    double mLeftInset;

    double mBottomInset;

    double mRightInset;

    double mRotation;

    double mColumnSpacing;

    unsigned short mColumnCount;

    unsigned short mTextBodyId;

    unsigned char mTextAnchorType;

    unsigned char mFlowType;

    unsigned char mWrapType;

    unsigned char mVerticalOverflowType;

    unsigned char mHorizontalOverflowType;

    unsigned int mRepectFirstLastParagraphSpacing:1;

    unsigned int mIsUpright:1;

    unsigned int mIsAnchorCenter:1;

    unsigned int mIsLeftToRightColumns:1;

    unsigned int mHasVerticalOverflowType:1;

    unsigned int mHasHorizontalOverflowType:1;

    unsigned int mHasTextBodyId:1;

    unsigned int mHasFlowType:1;

    unsigned int mHasWrapType:1;

    unsigned int mHasTextAnchorType:1;

    unsigned int mHasIsAnchorCenter:1;

    unsigned int mHasIsUpright:1;

    unsigned int mHasRotation:1;

    unsigned int mHasColumnCount:1;

    unsigned int mHasColumnSpacing:1;

    unsigned int mHasIsLeftToRightColumns:1;

    unsigned int mHasRepectFirstLastParagraphSpacing:1;

    unsigned int mHasTopInset:1;

    unsigned int mHasLeftInset:1;

    unsigned int mHasRightInset:1;

    unsigned int mHasBottomInset:1;

}



+ (id)defaultEscherWordArtProperties;

+ (id)defaultProperties;

- (id)autoFit;

- (double)bottomInset;

- (int)columnCount;

- (double)columnSpacing;

- (void)dealloc;

- (int)flowType;

- (_Bool)hasAutoFit;

- (_Bool)hasBottomInset;

- (_Bool)hasColumnCount;

- (_Bool)hasColumnSpacing;

- (_Bool)hasFlowType;

- (_Bool)hasHorizontalOverflowType;

- (_Bool)hasIsAnchorCenter;

- (_Bool)hasIsLeftToRightColumns;

- (_Bool)hasIsUpright;

- (_Bool)hasLeftInset;

- (_Bool)hasRespectLastFirstLineSpacing;

- (_Bool)hasRightInset;

- (_Bool)hasRotation;

- (_Bool)hasTextAnchorType;

- (_Bool)hasTextBodyId;

- (_Bool)hasTextWarp;

- (_Bool)hasTopInset;

- (_Bool)hasVerticalOverflowType;

- (_Bool)hasWrapType;

- (unsigned long long)hash;

- (int)horizontalOverflowType;

- (id)init;

- (id)initWithDefaults;

- (_Bool)isAnchorCenter;

- (_Bool)isEqual:(id)arg1;

- (_Bool)isLeftToRightColumns;

- (_Bool)isUpright;

- (double)leftInset;

- (void)removeUnnecessaryOverrides;

- (_Bool)respectLastFirstLineSpacing;

- (double)rightInset;

- (double)rotation;

- (void)setAutoFit:(id)arg1;

- (void)setBottomInset:(double)arg1;

- (void)setColumnCount:(int)arg1;

- (void)setColumnSpacing:(double)arg1;

- (void)setFlowType:(int)arg1;

- (void)setHorizontalOverflowType:(int)arg1;

- (void)setIsAnchorCenter:(_Bool)arg1;

- (void)setIsLeftToRightColumns:(_Bool)arg1;

- (void)setIsUpright:(_Bool)arg1;

- (void)setLeftInset:(double)arg1;

- (void)setRespectLastFirstLineSpacing:(_Bool)arg1;

- (void)setRightInset:(double)arg1;

- (void)setRotation:(double)arg1;

- (void)setTextAnchorType:(int)arg1;

- (void)setTextBodyId:(int)arg1;

- (void)setTextWarp:(id)arg1;

- (void)setTopInset:(double)arg1;

- (void)setVerticalOverflowType:(int)arg1;

- (void)setWrapType:(int)arg1;

- (int)textAnchorType;

- (int)textBodyId;

- (id)textWarp;

- (double)topInset;

- (int)verticalOverflowType;

- (int)wrapType;



@end

