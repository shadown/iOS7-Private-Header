/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */





@class NSMutableArray;



@interface ABFavoritesListManager : NSObject

{

    void *_addressBook;

    NSMutableArray *_list;

    struct __CFDictionary *_uidToEntry;

    struct {

        unsigned int dirty:1;

        unsigned int postCount:1;

        unsigned int needsReload:1;

        unsigned int unused:29;

    } _flags;

}



+ (id)sharedInstance;

+ (id)sharedInstanceWithAddressBook:(void *)arg1;

- (void)_addEntryToMap:(id)arg1;

- (void)_delayedLookup;

- (void)_entryIdentityChanged:(id)arg1;

- (_Bool)_isValueForEntry:(id)arg1 equalToValue:(id)arg2;

- (void)_listChangedExternally;

- (void)_loadList;

- (void)_loadListWithAddressBook:(void *)arg1;

- (void)_postChangeNotification;

- (void)_removeEntryFromMap:(id)arg1 withUid:(int)arg2;

- (void)_scheduleSave;

- (_Bool)_writeFavoritesToFile:(id)arg1;

- (void)addEntry:(id)arg1;

- (_Bool)addEntryForPerson:(void *)arg1 property:(int)arg2 withIdentifier:(int)arg3;

- (_Bool)containsEntryWithIdentifier:(int)arg1 forPerson:(void *)arg2;

- (_Bool)containsEntryWithType:(int)arg1 forPerson:(void *)arg2 property:(int)arg3 identifier:(int)arg4;

- (void)dealloc;

- (id)entries;

- (id)entriesForPeople:(id)arg1;

- (id)entriesForPerson:(void *)arg1;

- (id)entryFromEntries:(id)arg1 type:(int)arg2 property:(int)arg3 identifier:(int)arg4 value:(id)arg5 label:(id)arg6;

- (id)entryFromEntries:(id)arg1 type:(int)arg2 property:(int)arg3 value:(id)arg4 label:(id)arg5;

- (_Bool)entryIsDuplicateAndThusRemoved:(id)arg1 oldUid:(int)arg2;

- (id)entryWithIdentifier:(int)arg1 forPerson:(void *)arg2;

- (id)entryWithType:(int)arg1 forPerson:(void *)arg2 property:(int)arg3 identifier:(int)arg4;

- (id)initWithAddressBook:(void *)arg1;

- (_Bool)isFull;

- (void)moveEntryAtIndex:(long long)arg1 toIndex:(long long)arg2;

- (void)recacheIdentitiesSoon;

- (void)removeAllEntries;

- (void)removeEntryAtIndex:(long long)arg1;

- (void)save;

- (void)saveImmediately;



@end


