/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */





@class NSMutableArray, NSMutableDictionary, NSString;



@interface PLPhotoDCIMDirectory : NSObject

{

    NSString *_dcimPath;

    NSString *_miscPath;

    NSString *_posterImagePath;

    NSMutableArray *_topLevelDirectories;

    struct __CFDictionary *_topLevelDirectoriesByNumber;

    struct __CFSet *_unusableTopLevelDirectoryNumbers;

    int _lastUsedDirectoryNumber;

    NSMutableDictionary *_userInfo;

    _Bool _userInfoDidChange;

    struct flock *_dcimDirectoryLock;

    int _dcimDirectoryLockDescriptor;

}



- (id)_userInfoPath;

- (void)clearDCFDirectories;

- (void)countOfAllPhotos:(int *)arg1 andVideos:(int *)arg2 stopAfterFirst:(_Bool)arg3;

- (id)countOfAllPhotosAndVideos;

- (id)dcfDirectories;

- (id)dcimPath;

- (void)dealloc;

- (_Bool)hasChangedExternally;

- (id)initWithDCIMPath:(id)arg1;

- (_Bool)isValidImageExtension:(id)arg1;

- (_Bool)isValidVideoExtension:(id)arg1;

- (void)lockDirectory;

- (id)miscPath;

- (id)nextAvailableDirectory;

- (id)posterImagePath;

- (void)recreateInfoPlist;

- (void)reloadUserInfo;

- (void)saveUserInfo;

- (void)setHasChangedExternally:(_Bool)arg1;

- (void)setUserInfoObject:(id)arg1 forKey:(id)arg2;

- (void)unlockDirectory;

- (id)userInfo;

- (id)userInfoObjectForKey:(id)arg1;



@end


