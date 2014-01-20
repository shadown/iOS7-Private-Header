/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */





@class AVInternalDeviceList;



@interface AVAudioDeviceList : NSObject

{

    AVInternalDeviceList *_internalList;

    id _changeListener;

}



+ (id)currentInputDevice;

+ (id)defaultInputDevice;

+ (id)defaultOutputDevice;

+ (_Bool)setInputDevice:(id)arg1;

@property(copy, nonatomic) id changeListener; // @synthesize changeListener=_changeListener;

- (void)dealloc;

- (id)devices;

- (id)init;

- (id)inputDevices;

- (id)outputDevices;



@end

