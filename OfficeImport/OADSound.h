/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "OCDDelayedMedia.h"


@class NSData, NSString;



__attribute__((visibility("hidden")))

@interface OADSound : OCDDelayedMedia

{

    NSData *mSoundData;

    NSString *mName;

    int mSizeInBytes;

}



- (void)dealloc;

- (id)init;

- (_Bool)isLoaded;

- (id)name;

- (void)setName:(id)arg1;

- (void)setSizeInBytes:(int)arg1;

- (void)setSoundData:(id)arg1;

- (int)sizeInBytes;

- (id)soundData;



@end


