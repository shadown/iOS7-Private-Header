/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "VKTileSetBackedTileSource.h"


@class VKTileCache;



__attribute__((visibility("hidden")))

@interface VKTrafficDynamicTileSource : VKTileSetBackedTileSource

{

    VKTileCache *_recentTrafficDynamicTiles;

}



- (void)clearCaches;

- (void)dealloc;

- (long long)defaultMaximumZoomLevel;

- (long long)defaultMinimumZoomLevel;

- (void)didLoadTile:(id)arg1 forKey:(const struct VKTileKey *)arg2;

- (struct _GEOTileKey)downloadKeyAtX:(unsigned int)arg1 y:(unsigned int)arg2 z:(unsigned int)arg3;

- (void)fetchTileForKey:(const struct VKTileKey *)arg1;

- (id)initWithTileSet:(id)arg1;

- (unsigned long long)mapLayerForZoomLevelRange;

- (_Bool)maximumZoomLevelBoundsCamera;

- (_Bool)minimumZoomLevelBoundsCamera;

- (id)sourceKeysForRenderKey:(const struct VKTileKey *)arg1;

- (id)tileForData:(id)arg1 downloadKey:(const struct _GEOTileKey *)arg2 sourceKey:(const struct VKTileKey *)arg3;



@end


