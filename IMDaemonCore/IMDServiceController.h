/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */





@class NSArray, NSMutableDictionary;



@interface IMDServiceController : NSObject

{

    NSMutableDictionary *_services;

}



+ (id)sharedInstance;

@property(readonly, nonatomic) NSArray *allServices;

- (void)dealloc;

- (id)init;

- (void)registerSessionClassWithBundle:(id)arg1;

- (id)serviceWithName:(id)arg1;



@end

