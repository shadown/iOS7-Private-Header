/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "DDAction.h"


#import "EKEventEditViewDelegate.h"



@interface DDCreateEventAction : DDAction <EKEventEditViewDelegate>

{

}



- (void)eventEditViewController:(id)arg1 didCompleteWithAction:(int)arg2;

- (int)interactionType;

- (id)localizedName;

- (void)prepareViewControllerForActionController:(id)arg1;



@end


