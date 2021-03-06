/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */





#import "TSKSearchReference.h"



@class NSArray, TSDDrawableInfo, TSKDocumentRoot;



__attribute__((visibility("hidden")))

@interface TSDCanvasSearchReference : NSObject <TSKSearchReference>

{

    id <TSDCanvasSelection> mCanvasSelection;

    TSDDrawableInfo *mDrawableInfo;

    TSKDocumentRoot *mDocumentRoot;

    _Bool mAutohideHighlight;

    _Bool mPulseHighlight;

    NSArray *mFindHighlights;

    id <TSKAnnotation> mAnnotation;

    struct CGPoint mSearchReferencePoint;

}



+ (id)searchReferenceWithDrawableInfo:(id)arg1;

@property(retain, nonatomic) id <TSKAnnotation> annotation; // @synthesize annotation=mAnnotation;

@property(nonatomic) _Bool autohideHighlight; // @synthesize autohideHighlight=mAutohideHighlight;

- (id)commandForReplacingWithString:(id)arg1 options:(unsigned long long)arg2;

- (id)copyWithZone:(struct _NSZone *)arg1;

- (void)dealloc;

- (id)description;

- (id)drawableInfo;

@property(retain, nonatomic) NSArray *findHighlights; // @synthesize findHighlights=mFindHighlights;

- (id)initWithDrawableInfo:(id)arg1;

- (_Bool)isEqual:(id)arg1;

- (_Bool)isReplaceable;

- (id)model;

@property(nonatomic) _Bool pulseHighlight; // @synthesize pulseHighlight=mPulseHighlight;

- (id)searchReferenceEnd;

- (id)searchReferenceForReplacingWithString:(id)arg1 options:(unsigned long long)arg2 authorCreatedWithCommand:(id *)arg3;

@property(nonatomic) struct CGPoint searchReferencePoint; // @synthesize searchReferencePoint=mSearchReferencePoint;

- (id)searchReferenceStart;

- (id)selection;



@end


