/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "WMStyle.h"


__attribute__((visibility("hidden")))

@interface WMParagraphStyle : WMStyle

{

    _Bool mIsInTextFrame;

}



+ (_Bool)isShadingNull:(id)arg1;

- (void)addListProperties:(id)arg1;

- (void)addParagraphProperties:(id)arg1;

- (void)addParagraphStyleCharacterProperties:(id)arg1;

- (id)initWithWDParagraphProperties:(id)arg1 isInTextFrame:(_Bool)arg2;

- (id)initWithWDStyle:(id)arg1 isInTextFrame:(_Bool)arg2;

- (void)mapBorders:(id)arg1;



@end

