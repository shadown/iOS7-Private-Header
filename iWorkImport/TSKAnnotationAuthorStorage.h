/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "TSPObject.h"


@class NSMutableSet, NSSet;



__attribute__((visibility("hidden")))

@interface TSKAnnotationAuthorStorage : TSPObject

{

    NSMutableSet *mAuthors;

}



- (void)addAuthor:(id)arg1;

- (id)authorWithName:(id)arg1;

@property(readonly, nonatomic) NSSet *authors; // @synthesize authors=mAuthors;

- (void)dealloc;

- (unsigned int)delayedArchivingPriority;

- (id)description;

- (void)didAddAuthorRelationshipToDocument;

- (void)didLoadChildObjectFromDocumentSupport:(id)arg1;

- (void)didRemoveAuthorRelationshipFromDocument;

- (id)initFromUnarchiver:(id)arg1;

- (id)nextAuthorColor;

- (void)p_addAuthor:(id)arg1 isFromDocumentSupport:(_Bool)arg2;

- (id)packageLocator;

- (void)removeAuthor:(id)arg1;

- (void)saveToArchiver:(id)arg1;

- (_Bool)shouldDelayArchiving;



@end

