/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "CPExclusiveLock.h"



@interface ACAccountMigrationLock : CPExclusiveLock

{

}



+ (id)_currentSystemVersion;

+ (id)createAccountMigrationLock;

+ (_Bool)migrationFinished;

+ (void)signalMigrationFinished;

+ (void)writeMigrationVersionPref;



@end


