/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "WBSFormAutoFillItem.h"


@class NSURLCredential, NSURLProtectionSpace;



@interface WBSCredentialMatch : WBSFormAutoFillItem

{

    NSURLCredential *_credential;

    NSURLProtectionSpace *_protectionSpace;

}



- (id)completion;

@property(readonly, nonatomic) NSURLCredential *credential; // @synthesize credential=_credential;

- (void)dealloc;

- (id)initWithCredential:(id)arg1;

- (id)initWithCredential:(id)arg1 protectionSpace:(id)arg2;

@property(readonly, nonatomic) NSURLProtectionSpace *protectionSpace; // @synthesize protectionSpace=_protectionSpace;



@end


