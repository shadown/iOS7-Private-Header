/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "TSKCommand.h"


#import "TSDPropagatableCommand.h"



@class NSArray;



__attribute__((visibility("hidden")))

@interface TSDImageReplaceCommand : TSKCommand <TSDPropagatableCommand>

{

    NSArray *mIndirectCommandsToCommit;

}



- (void)commit;

- (void)dealloc;

- (id)initFromUnarchiver:(id)arg1;

- (id)initWithImageInfo:(id)arg1 imageData:(id)arg2 originalImageData:(id)arg3 instantAlphaPath:(id)arg4 naturalSizeForIAPath:(struct CGSize)arg5;

- (id)initWithImageInfo:(id)arg1 imageData:(id)arg2 originalImageData:(id)arg3 instantAlphaPath:(id)arg4 naturalSizeForIAPath:(struct CGSize)arg5 targetGeometry:(id)arg6 targetMaskGeometry:(id)arg7;

- (void)loadFromArchive:(const struct ImageReplaceCommandArchive *)arg1 unarchiver:(id)arg2;

- (_Bool)modifiesAnyObjectPassingTest:(id)arg1;

- (void)populateChangePropagationMapAfterCommit:(id)arg1;

- (_Bool)process;

- (void)redo;

- (void)saveToArchive:(struct ImageReplaceCommandArchive *)arg1 archiver:(id)arg2;

- (void)saveToArchiver:(id)arg1;

- (void)undo;



@end

