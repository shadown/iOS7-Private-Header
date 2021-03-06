/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */





@class NSLock, NSMutableDictionary, NSMutableSet, NSString, NSURLCacheNode, NSURLQueue;



__attribute__((visibility("hidden")))

@interface NSURLCacheInternal : NSObject

{

    unsigned long long memoryCapacity;

    unsigned long long diskCapacity;

    NSString *diskPath;

    unsigned long long currentMemoryUsage;

    unsigned long long currentDiskUsage;

    NSMutableDictionary *memoryCache;

    NSLock *memoryCacheGuard;

    NSURLCacheNode *memoryCacheLRUHead;

    NSURLCacheNode *memoryCacheLRUTail;

    unsigned long long memoryCacheItemLengthThreshold;

    NSLock *diskCacheGuard;

    NSMutableDictionary *diskCachePendingWrites;

    NSMutableSet *diskCachePendingRemovals;

    NSURLQueue *diskCachePendingOperations;

    unsigned long long diskCacheItemLengthThreshold;

    double diskCacheTouchTime;

    struct NSLRUFileList *diskCacheLRUList;

    unsigned long long timerResetCount;

    unsigned long long syncSkipCount;

    struct _CFURLCache *_cacheRef;

    _Bool diskCacheLeftoverFilesRemovedFlag;

    _Bool _pad1;

    _Bool _pad2;

    _Bool _pad3;

}



- (void)dealloc;

- (void)finalize;



@end


