/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */





#import "AVAsynchronousKeyValueLoading.h"

#import "NSCopying.h"



@class AVAssetCache, AVWeakReference, NSArray, NSString, NSURL;



@interface AVAssetInspectorLoader : NSObject <NSCopying, AVAsynchronousKeyValueLoading>

{

    AVWeakReference *_weakReference;

}



+ (void)initialize;

@property(readonly, nonatomic) NSURL *URL;

- (void)_ensureAllDependenciesOfKeyAreLoaded:(id)arg1;

@property(readonly, nonatomic, getter=_figAsset) struct OpaqueFigAsset *figAsset;

@property(readonly, nonatomic, getter=_formatReader) struct OpaqueFigFormatReader *formatReader;

@property(readonly, nonatomic, getter=_isStreaming) _Bool streaming;

- (id)_mapFigErrorCodeToNSError:(int)arg1;

@property(readonly, nonatomic, getter=_playbackItem) struct OpaqueFigPlaybackItem *playbackItem;

@property(readonly, nonatomic, getter=_shouldOptimizeAccessForLinearMoviePlayback) _Bool shouldOptimizeAccessForLinearMoviePlayback;

@property(readonly, nonatomic, getter=_weakReference) AVWeakReference *weakReference;

@property(readonly, nonatomic) AVAssetCache *assetCache;

- (id)assetInspector;

- (void)cancelLoading;

@property(readonly, nonatomic) NSArray *chapterGroupInfo;

- (id)copyWithZone:(struct _NSZone *)arg1;

- (void)dealloc;

@property(readonly, nonatomic) NSURL *downloadDestinationURL;

@property(readonly, nonatomic) unsigned long long downloadToken;

@property(readonly, nonatomic) CDStruct_1b6d18a9 duration;

@property(readonly, nonatomic) _Bool hasProtectedContent;

- (id)init;

- (id)initWithURL:(id)arg1;

@property(readonly, nonatomic, getter=isCompatibleWithSavedPhotosAlbum) _Bool compatibleWithSavedPhotosAlbum;

@property(readonly, nonatomic, getter=isComposable) _Bool composable;

@property(readonly, nonatomic, getter=isExportable) _Bool exportable;

@property(readonly, nonatomic, getter=isPlayable) _Bool playable;

@property(readonly, nonatomic, getter=isReadable) _Bool readable;

- (void)loadValuesAsynchronouslyForKeys:(id)arg1 completionHandler:(id)arg2;

- (void)loadValuesAsynchronouslyForKeys:(id)arg1 keysForCollectionKeys:(id)arg2 completionHandler:(id)arg3;

@property(readonly, nonatomic) NSString *lyrics;

@property(readonly, nonatomic) unsigned long long referenceRestrictions;

@property(readonly, nonatomic) NSURL *resolvedURL;

@property(readonly, nonatomic) _Bool shouldMatchDataInCacheByURLPathComponentOnly;

@property(readonly, nonatomic) _Bool shouldMatchDataInCacheByURLWithoutQueryComponent;

- (long long)statusOfValueForKey:(id)arg1 error:(id *)arg2;



@end


