/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "TSDShapeStyle.h"


#import "TSSPreset.h"



@class NSString;



__attribute__((visibility("hidden")))

@interface TSWPShapeStyle : TSDShapeStyle <TSSPreset>

{

}



+ (int)defaultIntValueForProperty:(int)arg1;

+ (id)defaultValueForProperty:(int)arg1;

+ (id)layoutProperties;

+ (void)loadShapeStyleLayoutPropertiesIntoPropertyMap:(id)arg1 fromArchive:(const struct ShapeStylePropertiesArchive *)arg2 unarchiver:(id)arg3;

+ (id)presetStyleDescriptor;

+ (id)properties;

+ (id)propertiesAllowingNSNull;

+ (void)saveShapeStyleLayoutPropertyMap:(id)arg1 toArchive:(struct ShapeStylePropertiesArchive *)arg2 archiver:(id)arg3;

- (id)boxedValueForProperty:(int)arg1 oldBoxedValue:(id)arg2 transformedByTransform:(struct CGAffineTransform)arg3;

- (id)defaultParagraphStyle;

- (id)initFromUnarchiver:(id)arg1;

- (SEL)mapThemePropertyMapSelector;

@property(readonly, nonatomic) NSString *presetKind;

- (void)saveToArchive:(struct ShapeStyleArchive *)arg1 archiver:(id)arg2;

- (void)saveToArchiver:(id)arg1;

- (void)setDefaultParagraphStyle:(id)arg1;

- (const struct ShapeStyleArchive *)shapeStyleArchiveFromUnarchiver:(id)arg1;



@end

