/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "UICollectionViewFlowLayout.h"



@class UIColor;



@interface SKUISwooshCollectionViewLayout : UICollectionViewFlowLayout

{

    UIColor *_backgroundColor;

    _Bool _snapsToItemBoundaries;

    _Bool _snapsToItemCenters;

}



+ (Class)layoutAttributesClass;

+ (float)snapToBoundariesDecelerationRate;

- (void).cxx_destruct;

@property(copy, nonatomic) UIColor *backgroundColor; // @synthesize backgroundColor=_backgroundColor;

- (id)init;

- (id)layoutAttributesForElementsInRect:(struct CGRect)arg1;

@property(nonatomic) _Bool snapsToItemBoundaries; // @synthesize snapsToItemBoundaries=_snapsToItemBoundaries;

@property(nonatomic) _Bool snapsToItemCenters; // @synthesize snapsToItemCenters=_snapsToItemCenters;

- (struct CGPoint)targetContentOffsetForProposedContentOffset:(struct CGPoint)arg1 withScrollingVelocity:(struct CGPoint)arg2;



@end


