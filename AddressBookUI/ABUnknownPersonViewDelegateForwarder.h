/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */





#import "UITableViewDataSource.h"

#import "UITableViewDelegate.h"



@class ABUnknownPersonViewController;



@interface ABUnknownPersonViewDelegateForwarder : NSObject <UITableViewDelegate, UITableViewDataSource>

{

    ABUnknownPersonViewController *_viewController;

}



- (id)initWithUnknownPersonViewController:(id)arg1;

- (long long)numberOfSectionsInTableView:(id)arg1;

- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;

- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;

- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;



@end


