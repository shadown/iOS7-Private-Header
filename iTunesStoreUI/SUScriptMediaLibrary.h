/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "SUScriptObject.h"


@class NSMutableArray, NSString;



@interface SUScriptMediaLibrary : SUScriptObject

{

    NSMutableArray *_musicPlayers;

}



+ (void)initialize;

+ (id)webScriptNameForKeyName:(id)arg1;

+ (id)webScriptNameForSelector:(SEL)arg1;

- (id)_className;

- (void)_connectNativeObject;

- (_Bool)_isRestricted;

- (void)_launchMusicApp;

- (void)_launchMusicAppAfterPlayback:(id)arg1 firstItem:(id)arg2;

- (id)attributeKeys;

- (id)containsAdamID:(id)arg1;

- (id)containsAdamIDs:(id)arg1;

- (void)dealloc;

- (void)getProperties:(id)arg1 ofAdamIDs:(id)arg2 withCompletionFunction:(id)arg3;

@property(readonly) NSString *itemPropertyAlbumArtist;

@property(readonly) NSString *itemPropertyAlbumTitle;

@property(readonly) NSString *itemPropertyArtist;

@property(readonly) NSString *itemPropertyComposer;

@property(readonly) NSString *itemPropertyDiscCount;

@property(readonly) NSString *itemPropertyDiscNumber;

@property(readonly) NSString *itemPropertyGenre;

@property(readonly) NSString *itemPropertyIsCompilation;

@property(readonly) NSString *itemPropertyIsHD;

@property(readonly) NSString *itemPropertyIsRental;

@property(readonly) NSString *itemPropertyLastPlayedDate;

@property(readonly) NSString *itemPropertyLyrics;

@property(readonly) NSString *itemPropertyMediaType;

@property(readonly) NSString *itemPropertyPersistentID;

@property(readonly) NSString *itemPropertyPlayCount;

@property(readonly) NSString *itemPropertyPlaybackDuration;

@property(readonly) NSString *itemPropertyPodcastTitle;

@property(readonly) NSString *itemPropertyRating;

@property(readonly) NSString *itemPropertySkipCount;

@property(readonly) NSString *itemPropertyStoreID;

@property(readonly) NSString *itemPropertyTitle;

@property(readonly) NSString *itemPropertyTrackCount;

@property(readonly) NSString *itemPropertyTrackNumber;

- (id)makeCollectionWithItems:(id)arg1;

- (id)makePickerWithMediaTypes:(id)arg1;

- (id)makeQueryWithPreset:(id)arg1;

@property(readonly) NSString *mediaTypeAny;

@property(readonly) NSString *mediaTypeAnyAudio;

@property(readonly) NSString *mediaTypeAnyVideo;

@property(readonly) NSString *mediaTypeAudiobook;

@property(readonly) NSString *mediaTypeMovie;

@property(readonly) NSString *mediaTypeMusic;

@property(readonly) NSString *mediaTypeMusicVideo;

@property(readonly) NSString *mediaTypePodcast;

@property(readonly) NSString *mediaTypeTVShow;

@property(readonly) NSString *mediaTypeVideoPodcast;

- (id)musicPlayerForType:(id)arg1;

- (id)playSongsInCollectionWithAdamID:(id)arg1 firstItemID:(id)arg2;

- (id)playSongsWithAdamIDs:(id)arg1;

- (id)playVideoWithAdamID:(id)arg1;

@property(readonly) NSString *playerTypeApplication;

@property(readonly) NSString *playerTypeIPod;

@property(readonly) NSString *queryPresetAlbums;

@property(readonly) NSString *queryPresetArtists;

@property(readonly) NSString *queryPresetAudiobooks;

@property(readonly) NSString *queryPresetCompilations;

@property(readonly) NSString *queryPresetComposers;

@property(readonly) NSString *queryPresetGenres;

@property(readonly) NSString *queryPresetMovies;

@property(readonly) NSString *queryPresetMusicVideos;

@property(readonly) NSString *queryPresetPlaylists;

@property(readonly) NSString *queryPresetPodcasts;

@property(readonly) NSString *queryPresetSongs;

@property(readonly) NSString *queryPresetTVShows;

@property(readonly) NSString *queryPresetVideoPodcasts;

- (id)scriptAttributeKeys;



@end


