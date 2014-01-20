/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */





@class TSPData, TSUFlushingManager;



__attribute__((visibility("hidden")))

@interface TSDImageProvider : NSObject

{

    int mLoadState;

    TSPData *mImageData;

    int mRetainCount;

    int mOwnerCount;

    TSUFlushingManager *mFlushingManager;

    int mInterest;

}



+ (id)allocWithZone:(struct _NSZone *)arg1;

- (void)addInterest;

- (void)addOwner;

- (void)dealloc;

- (struct CGSize)dpiAdjustedNaturalSize;

- (void)drawImageInContext:(struct CGContext *)arg1 rect:(struct CGRect)arg2;

- (void)flush;

- (_Bool)hasFlushableContent;

- (void)i_commonInit;

- (id)imageData;

- (id)initWithImageData:(id)arg1;

- (int)interest;

- (_Bool)isError;

- (_Bool)isValid;

- (struct CGSize)naturalSize;

- (void)ownerAccess;

- (oneway void)release;

- (void)removeInterest;

- (void)removeOwner;

- (id)retain;

- (unsigned long long)retainCount;

- (void)setFlushingManager:(id)arg1;



@end

