/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "DADisableableObject.h"



@class NSObject<OS_xpc_object>;



@interface DADAccessManager : DADisableableObject

{

    NSObject<OS_xpc_object> *_mainConnection;

}



+ (id)sharedManager;

- (id)_init;

- (void)_setupServerConnection;

- (void)dealloc;

- (id)init;



@end


