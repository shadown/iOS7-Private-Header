/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "_UIRemoteViewController.h"



#import "MFMailComposeRemoteHost.h"



@interface MFMailComposeRemoteViewController : _UIRemoteViewController <MFMailComposeRemoteHost>

{

    id <MFMailComposeRemoteViewControllerDelegate> _delegate;

}



+ (id)exportedInterface;

+ (id)requestViewControllerWithConnectionHandler:(id)arg1;

+ (id)serviceViewControllerInterface;

- (void)bodyFinishedDrawing;

@property(nonatomic) id <MFMailComposeRemoteViewControllerDelegate> delegate; // @synthesize delegate=_delegate;

- (void)serviceCompositionFinishedWithResult:(int)arg1 error:(id)arg2;

- (void)viewServiceDidTerminateWithError:(id)arg1;



@end


