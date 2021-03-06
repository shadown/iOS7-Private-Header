/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "TSPObject.h"


#import "NSFastEnumeration.h"



@class TSTCellStyle, TSTTableStyle, TSWPParagraphStyle, TSWPShapeStyle;



__attribute__((visibility("hidden")))

@interface TSTTableStyleNetwork : TSPObject <NSFastEnumeration>

{

    unsigned long long mPresetIndex;

    TSTTableStyle *mTableStyle;

    TSTCellStyle *mHeaderRowCellStyle;

    TSTCellStyle *mHeaderColumnCellStyle;

    TSTCellStyle *mFooterRowCellStyle;

    TSTCellStyle *mBodyCellStyle;

    TSWPParagraphStyle *mHeaderRowTextStyle;

    TSWPParagraphStyle *mHeaderColumnTextStyle;

    TSWPParagraphStyle *mFooterRowTextStyle;

    TSWPParagraphStyle *mBodyTextStyle;

    TSWPParagraphStyle *mTableNameStyle;

    TSWPShapeStyle *mTableNameShapeStyle;

}



+ (id)createStylesInStylesheet:(id)arg1 presetIndex:(unsigned long long)arg2 colors:(id)arg3 alternate:(int)arg4;

+ (id)defaultTableNameShapeStyleWithContext:(id)arg1;

+ (id)identifiersForPresetIndex:(unsigned long long)arg1;

+ (id)networkFromStylesheet:(id)arg1 presetIndex:(unsigned long long)arg2;

+ (id)networkFromTableModel:(id)arg1;

+ (id)networkFromTheme:(id)arg1 presetIndex:(unsigned long long)arg2;

+ (id)networkWithContext:(id)arg1 presetIndex:(unsigned long long)arg2 colors:(id)arg3 alternate:(int)arg4;

+ (id)tableNameShapeStyleIDForPreset:(unsigned long long)arg1;

+ (id)tableNameStyleIDForPreset:(unsigned long long)arg1;

@property(readonly, nonatomic) TSTCellStyle *bodyCellStyle;

@property(readonly, nonatomic) TSWPParagraphStyle *bodyTextStyle;

- (id)cellStyleForTableArea:(int)arg1;

- (id)copy;

- (id)copyWithContext:(id)arg1;

- (id)copyWithZone:(struct _NSZone *)arg1;

- (id)copyWithZone:(struct _NSZone *)arg1 context:(id)arg2;

- (unsigned long long)countByEnumeratingWithState:(CDStruct_70511ce9 *)arg1 objects:(id *)arg2 count:(unsigned long long)arg3;

- (void)dealloc;

- (id)dictionaryWithPreset:(unsigned long long)arg1;

@property(readonly, nonatomic) TSTCellStyle *footerRowCellStyle;

@property(readonly, nonatomic) TSWPParagraphStyle *footerRowTextStyle;

- (unsigned long long)hash;

@property(readonly, nonatomic) TSTCellStyle *headerColumnCellStyle;

@property(readonly, nonatomic) TSWPParagraphStyle *headerColumnTextStyle;

@property(readonly, nonatomic) TSTCellStyle *headerRowCellStyle;

@property(readonly, nonatomic) TSWPParagraphStyle *headerRowTextStyle;

- (id)initFromUnarchiver:(id)arg1;

- (id)initWithArchive:(const struct TableStyleNetworkArchive *)arg1 unarchiver:(id)arg2;

- (id)initWithContext:(id)arg1;

- (id)initWithContext:(id)arg1 fromArray:(id)arg2 presetIndex:(unsigned long long)arg3;

- (id)initWithContext:(id)arg1 fromDictionary:(id)arg2 withPreset:(unsigned long long)arg3;

- (_Bool)isEqual:(id)arg1;

- (void)loadFromArchive:(const struct TableStyleNetworkArchive *)arg1 withUnarchiver:(id)arg2;

@property(nonatomic) unsigned long long presetIndex;

- (void)saveToArchive:(struct TableStyleNetworkArchive *)arg1 archiver:(id)arg2;

- (void)saveToArchiver:(id)arg1;

- (void)setBodyCellStyle:(id)arg1;

- (void)setBodyTextStyle:(id)arg1;

- (void)setCellStyle:(id)arg1 forTableArea:(int)arg2;

- (void)setFooterRowCellStyle:(id)arg1;

- (void)setFooterRowTextStyle:(id)arg1;

- (void)setHeaderColumnCellStyle:(id)arg1;

- (void)setHeaderColumnTextStyle:(id)arg1;

- (void)setHeaderRowCellStyle:(id)arg1;

- (void)setHeaderRowTextStyle:(id)arg1;

- (void)setStylesFromTableModel:(id)arg1;

@property(retain, nonatomic) TSWPShapeStyle *tableNameShapeStyle;

@property(retain, nonatomic) TSWPParagraphStyle *tableNameStyle;

@property(retain, nonatomic) TSTTableStyle *tableStyle;

- (void)setTextStyle:(id)arg1 forTableArea:(int)arg2;

- (id)styleArray;

- (_Bool)stylesInStylesheet:(id)arg1;

- (id)textStyleForTableArea:(int)arg1;

- (_Bool)valid;



@end


