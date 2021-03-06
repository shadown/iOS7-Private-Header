/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */





@class NSString;



__attribute__((visibility("hidden")))

@interface NSSQLAliasGenerator : NSObject

{

    unsigned int _nextTableAlias;

    unsigned int _nextVariableAlias;

    unsigned int _nextTempTableAlias;

    NSString *_tableBase;

    NSString *_variableBase;

}



- (void)dealloc;

- (id)generateSubqueryVariableAlias;

- (id)generateTableAlias;

- (id)generateTempTableName;

- (id)init;

- (id)initWithNestingLevel:(unsigned int)arg1;



@end


