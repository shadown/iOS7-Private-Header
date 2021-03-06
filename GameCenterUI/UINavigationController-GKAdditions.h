/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "UINavigationController.h"



#import "GKContentRefresh.h"

#import "GKURLHandling.h"



@interface UINavigationController (GKAdditions) <GKContentRefresh, GKURLHandling>

- (id)_gkAlertViewControllerWithTitle:(id)arg1 message:(id)arg2 cancelButtonTitle:(id)arg3 dismissHandler:(id)arg4;

- (void)_gkForceNextContentUpdate;

- (void)_gkHandleURLPathComponents:(id)arg1 query:(id)arg2;

- (void)_gkRefreshContentsForDataType:(unsigned int)arg1 userInfo:(id)arg2;

- (void)_gkResetContents;

- (void)_gkSetContentsNeedUpdateWithHandler:(id)arg1;

- (_Bool)_gkShouldRefreshContentsForDataType:(unsigned int)arg1 userInfo:(id)arg2;

- (void)_gkUpdateContentsWithCompletionHandlerAndError:(id)arg1;

@end


