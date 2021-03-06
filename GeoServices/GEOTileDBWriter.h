/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */





@class GEOTileDBMRU, NSLock, NSMutableArray, NSMutableSet, NSObject<OS_dispatch_queue>, NSString;



@interface GEOTileDBWriter : NSObject

{

    NSString *_path;

    struct sqlite3 *_db;

    struct sqlite3_stmt *_versionQuery;

    struct sqlite3_stmt *_versionInsert;

    struct sqlite3_stmt *_editionQuery;

    struct sqlite3_stmt *_editionDelete;

    struct sqlite3_stmt *_editionUpdate;

    struct sqlite3_stmt *_tileInsert;

    struct sqlite3_stmt *_tileDelete;

    struct sqlite3_stmt *_tileSize;

    struct sqlite3_stmt *_sizeQuery;

    long long _lastRowID;

    unsigned long long _databaseSize;

    unsigned long long _maxDatabaseSize;

    _Bool _closed;

    _Bool _defunct;

    NSMutableArray *_writeList;

    NSMutableSet *_uncommitedWriteSet;

    unsigned long long _pendingWriteBytes;

    NSLock *_writeListLock;

    NSObject<OS_dispatch_queue> *_writeQueue;

    void *_editionMap;

    long long _evictionRowsThreshold;

    GEOTileDBMRU *_tileDBMRU;

    CDStruct_e4886f83 *_expirationRecords;

    unsigned long long _expirationRecordCount;

    _Bool _preloading;

    double _lastCheckedGeneralExpiration;

}



- (void)_assertDatabaseSize;

- (void)_closeDB;

- (void)_createTables;

- (unsigned long long)_dbFileSize;

- (void)_deleteKey:(struct _GEOTileKey)arg1;

- (void)_deviceLocked;

- (void)_dropWritesOnFloor:(id)arg1;

- (void)_editionUpdate:(id)arg1;

- (void)_evict;

- (void)_localeChanged:(id)arg1;

- (void)_openDBForceRecreate:(_Bool)arg1;

- (void)_openIfNecessary;

- (void)_performWrites:(_Bool)arg1;

- (void)_prepareStatements;

- (void)_printDBStatus:(const char *)arg1;

- (_Bool)_readEditions;

- (void)_shrinkToUnderSize:(unsigned long long)arg1 vacuum:(_Bool)arg2;

- (_Bool)_tileSetExpires:(unsigned int)arg1;

- (void)_updateEdition:(unsigned int)arg1 forTileset:(unsigned int)arg2 provider:(unsigned int)arg3;

- (void)_updateSize;

- (void)_writeEntry:(id)arg1;

- (void)_writeVersion;

- (void)addTile:(id)arg1 forKey:(struct _GEOTileKey *)arg2 edition:(unsigned int)arg3 tileSet:(unsigned int)arg4;

- (void)beginPreloadSessionOfSize:(unsigned long long)arg1;

@property _Bool closed;

@property(readonly, nonatomic) unsigned long long databaseSize; // @synthesize databaseSize=_databaseSize;

- (void)dealloc;

- (void)deleteTile:(const struct _GEOTileKey *)arg1;

- (void)endPreloadSession;

- (void)flushPendingWrites;

- (id)initWithPath:(id)arg1;

@property(nonatomic) unsigned long long maxDatabaseSize; // @synthesize maxDatabaseSize=_maxDatabaseSize;

@property(readonly, nonatomic) NSString *path; // @synthesize path=_path;

- (id)pendingWriteForKey:(struct _GEOTileKey *)arg1;

- (void)pendingWritesForKeys:(id)arg1 handler:(id)arg2;

- (void)setExpirationRecords:(CDStruct_e4886f83 *)arg1 count:(unsigned long long)arg2;

@property(retain, nonatomic) GEOTileDBMRU *tileDBMRU; // @synthesize tileDBMRU=_tileDBMRU;

- (void)shrinkToSize:(unsigned long long)arg1 finished:(id)arg2;



@end


