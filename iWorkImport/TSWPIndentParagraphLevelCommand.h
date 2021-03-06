/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "TSWPTextCommand.h"


__attribute__((visibility("hidden")))

@interface TSWPIndentParagraphLevelCommand : TSWPTextCommand

{

    long long _delta;

}



+ (_Bool)canIndentStorage:(id)arg1 selection:(id)arg2 delta:(long long)arg3;

- (id)actionString;

- (void)dealloc;

- (void)doCommit;

- (id)initWithStorage:(id)arg1 selection:(id)arg2 delta:(long long)arg3;

- (void)invalidateSelection:(id)arg1 onStorage:(id)arg2;

- (id)paragraphLevelDeltas;

- (int)persistenceKind;

- (_Bool)process;



@end


