/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */





@class NSString;



@interface IMAVCamera : NSObject

{

    id _internalDevice;

}



- (id)_AVCamera;

- (id)_initWithAVCamera:(id)arg1;

@property(readonly, nonatomic) long long cameraStyle;

- (void)dealloc;

- (id)description;

@property(readonly, nonatomic) _Bool hasShutter;

- (id)init;

@property(readonly, nonatomic) _Bool isShutterOpen;

@property(readonly, nonatomic) _Bool isSuspended;

@property(readonly, nonatomic) _Bool isWideScreen;

@property(readonly, nonatomic) NSString *name;

@property(readonly, nonatomic) NSString *uniqueID;



@end


