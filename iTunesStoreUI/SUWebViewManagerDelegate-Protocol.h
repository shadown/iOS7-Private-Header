/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */





@protocol SUWebViewManagerDelegate <NSObject>



@optional

- (id)newScriptInterfaceForWebViewManager:(id)arg1;

- (id)viewControllerForWebViewManager:(id)arg1;

- (void)webViewManager:(id)arg1 didFailLoadWithError:(id)arg2;

- (void)webViewManager:(id)arg1 didReceivePrimaryResponse:(id)arg2;

- (void)webViewManager:(id)arg1 didReceiveTitle:(id)arg2;

- (void)webViewManager:(id)arg1 didRejectInvalidRequest:(id)arg2;

- (void)webViewManager:(id)arg1 webDocumentViewDidSetFrame:(struct CGRect)arg2;

- (void)webViewManager:(id)arg1 willInjectScriptInterface:(id)arg2;

- (void)webViewManagerDidFinishLoad:(id)arg1;

- (void)webViewManagerDidStartLoad:(id)arg1;

@end


