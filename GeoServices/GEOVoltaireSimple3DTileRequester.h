/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "GEOSimpleTileRequester.h"


@interface GEOVoltaireSimple3DTileRequester : GEOSimpleTileRequester

{

}



+ (unsigned char)tileProviderIdentifier;

- (id)_baseURLStringForTileKey:(struct _GEOTileKey *)arg1;

- (struct _GEOTileKey)_patchTileKey:(struct _GEOTileKey *)arg1;

- (unsigned int)tileEditionForKey:(struct _GEOTileKey *)arg1;

- (unsigned int)tileSetForKey:(const struct _GEOTileKey *)arg1;

- (id)urlForTileKey:(struct _GEOTileKey *)arg1;



@end


