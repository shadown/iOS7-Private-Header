/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */





@protocol AVAssetWriterFinishWritingHelperDelegate <NSObject>

- (void)finishWritingHelper:(id)arg1 didInitiateFinishWritingForFigAssetWriter:(struct OpaqueFigAssetWriter *)arg2;

- (void)finishWritingHelperDidCancelFinishWriting:(id)arg1;

- (void)finishWritingHelperDidFail:(id)arg1;

- (_Bool)shouldHelperPrepareInputs;

@end

