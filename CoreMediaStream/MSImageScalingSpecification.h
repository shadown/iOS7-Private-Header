/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */





@interface MSImageScalingSpecification : NSObject

{

    int _assetTypeFlags;

    double _nominalShortSideLength;

    double _minimumLongSideLength;

    double _maximumLongSideLength;

}



+ (id)assetsToGenerateFromImageWithInputSize:(struct CGSize)arg1 toConformToSpecifications:(id)arg2;

+ (id)specificationWithSharedAlbumSpecificationString:(id)arg1;

@property(nonatomic) int assetTypeFlags; // @synthesize assetTypeFlags=_assetTypeFlags;

- (id)description;

@property(nonatomic) double maximumLongSideLength; // @synthesize maximumLongSideLength=_maximumLongSideLength;

@property(nonatomic) double minimumLongSideLength; // @synthesize minimumLongSideLength=_minimumLongSideLength;

@property(nonatomic) double nominalShortSideLength; // @synthesize nominalShortSideLength=_nominalShortSideLength;

- (double)scaleFactorForInputSize:(struct CGSize)arg1;



@end

