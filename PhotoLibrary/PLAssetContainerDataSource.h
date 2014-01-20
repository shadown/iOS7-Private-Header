/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */





@interface PLAssetContainerDataSource : NSObject

{

    id <PLAssetContainerList> _assetContainerList;

    unsigned long long _allAssetsCount;

    unsigned long long *_containerCounts;

    _Bool _cachedValuesNeedUpdate;

}



+ (id)assetInAssetContainer:(id)arg1 atIndex:(unsigned long long)arg2;

- (unsigned long long)_indexOfNextNonEmptyAssetContainerAfterContainerIndex:(unsigned long long)arg1 wrap:(_Bool)arg2;

- (unsigned long long)_indexOfPreviousNonEmptyAssetContainerBeforeContainerIndex:(unsigned long long)arg1 wrap:(_Bool)arg2;

- (void)_updateCachedCount:(unsigned long long)arg1 forContainerAtContainerIndex:(unsigned long long)arg2;

- (void)_updateCachedValues;

- (unsigned long long)allAssetsCount;

- (id)assetAtGlobalIndex:(unsigned long long)arg1;

- (id)assetAtIndexPath:(id)arg1;

- (id)assetContainerAtIndex:(unsigned long long)arg1;

- (void)assetContainerDidChange:(id)arg1 updateIndexPaths:(id)arg2 preferNextAssetOnDeleteForKeys:(id)arg3;

- (id)assetContainerForAsset:(id)arg1;

- (id)assetContainerForAssetGlobalIndex:(unsigned long long)arg1;

@property(readonly, nonatomic) id <PLAssetContainerList> assetContainerList; // @synthesize assetContainerList=_assetContainerList;

- (void)assetContainerListDidChange:(id)arg1;

- (id)assetContainerWithObjectID:(id)arg1;

- (id)assetContainerWithUUID:(id)arg1;

- (unsigned long long)assetCountForContainer:(id)arg1;

- (unsigned long long)assetCountForContainerAtIndex:(unsigned long long)arg1;

- (id)assetWithObjectID:(id)arg1;

- (id)assetWithUUID:(id)arg1;

- (unsigned long long)containerAssetCountForAssetIndex:(unsigned long long)arg1;

- (void)dealloc;

- (id)decrementAssetIndexPath:(id)arg1 insideCurrentAssetContainer:(_Bool)arg2 andWrap:(_Bool)arg3;

- (unsigned long long)decrementGlobalIndex:(unsigned long long)arg1 insideCurrentAssetContainer:(_Bool)arg2 andWrap:(_Bool)arg3;

- (id)fetchAllAssets;

- (id)firstAssetIndexPath;

- (unsigned long long)globalIndexForIndexPath:(id)arg1;

- (unsigned long long)globalIndexOfAsset:(id)arg1;

- (_Bool)hasAssetAtIndexPath:(id)arg1;

- (id)incrementAssetIndexPath:(id)arg1 insideCurrentAssetContainer:(_Bool)arg2 andWrap:(_Bool)arg3;

- (unsigned long long)incrementGlobalIndex:(unsigned long long)arg1 insideCurrentAssetContainer:(_Bool)arg2 andWrap:(_Bool)arg3;

- (unsigned long long)indexOfContainer:(id)arg1;

- (unsigned long long)indexOffsetForAssetContainerAtAssetIndex:(unsigned long long)arg1;

- (id)indexPathForGlobalIndex:(unsigned long long)arg1;

- (id)indexPathOfAsset:(id)arg1;

- (id)initWithAssetContainerList:(id)arg1;

- (void)shuffleAssets:(_Bool)arg1 startingAsset:(id)arg2;



@end

