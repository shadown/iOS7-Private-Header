/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */





#import "TSCH3DLayerCacheLogicProtocol.h"

#import "TSCHUnretainedParent.h"



@class CALayer;



__attribute__((visibility("hidden")))

@interface TSCH3DLayerCacheLogic : NSObject <TSCHUnretainedParent, TSCH3DLayerCacheLogicProtocol>

{

    CALayer *mParent;

    struct CGRect mDrawingBounds;

    id mRepLayerDelegate;

}



+ (_Bool)cacheable;

- (id).cxx_construct;

- (void)clearParent;

- (_Bool)contentsIsHighQuality;

- (_Bool)contentsIsValid;

- (void)dealloc;

- (id)description;

- (id)initWithParent:(id)arg1;

- (_Bool)isClipped;

- (_Bool)isClippedAreaVisibleInRect:(struct CGRect)arg1;

@property(nonatomic) id repLayerDelegate; // @synthesize repLayerDelegate=mRepLayerDelegate;

- (void)setContentsIsValid:(_Bool)arg1;

- (void)setContentsIsValid:(_Bool)arg1 highQuality:(_Bool)arg2;

- (void)setDrawingBounds:(struct CGRect)arg1;

- (void)setFrame:(struct CGRect)arg1;



@end


