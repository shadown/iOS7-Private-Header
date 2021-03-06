/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "TSPContainedObject.h"


__attribute__((visibility("hidden")))

@interface TSTTileIDKeyDict : TSPContainedObject

{

    struct hash_map<unsigned int, SFUtility::ObjcSharedPtr<NSObject>, TSTIntHasher, std::__1::equal_to<unsigned int>, std::__1::allocator<std::__1::pair<const unsigned int, SFUtility::ObjcSharedPtr<NSObject>>>> *mMap;

}



- (void)applyFunction:(void *)arg1 withState:(void *)arg2;

- (long long)count;

- (void)dealloc;

- (id)initWithArchive:(const struct TileStorage *)arg1 unarchiver:(id)arg2 owner:(id)arg3;

- (id)initWithOwner:(id)arg1;

- (void)makeTilesPerformSelector:(SEL)arg1;

- (void)removeAllTiles;

- (void)removeTileForID:(CDStruct_d65e47c4)arg1;

- (void)saveToArchive:(struct TileStorage *)arg1 archiver:(id)arg2;

- (void)setTile:(id)arg1 forID:(CDStruct_d65e47c4)arg2;

- (id)tileForID:(CDStruct_d65e47c4)arg1;



@end


