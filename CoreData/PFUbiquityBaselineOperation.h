/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "PFUbiquityImportOperation.h"


@class NSManagedObjectModel, NSString;



__attribute__((visibility("hidden")))

@interface PFUbiquityBaselineOperation : PFUbiquityImportOperation

{

    NSString *_modelVersionHash;

    NSManagedObjectModel *_model;

}



- (void)dealloc;

- (id)description;

- (id)initWithPersistentStore:(id)arg1 localPeerID:(id)arg2 andUbiquityRootLocation:(id)arg3;

@property(readonly, nonatomic) NSManagedObjectModel *model; // @synthesize model=_model;

@property(readonly, nonatomic) NSString *modelVersionHash; // @synthesize modelVersionHash=_modelVersionHash;



@end


