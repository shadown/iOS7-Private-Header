/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */





@class NSMutableArray, NSString;



@interface SCRCArgumentSubcommand : NSObject

{

    NSString *_subcommandName;

    NSMutableArray *_optionArray;

}



+ (id)subcommandWithName:(id)arg1;

- (void)addOption:(id)arg1 argument:(id)arg2 target:(id)arg3 action:(SEL)arg4 argumentDescription:(id)arg5 required:(_Bool)arg6;

- (void)addOptions;

- (long long)compare:(id)arg1;

- (void)dealloc;

- (id)description;

- (id)formattedHelpFooter;

- (id)formattedHelpHeader;

- (unsigned long long)hash;

- (id)initWithName:(id)arg1;

- (_Bool)isEqual:(id)arg1;

- (id)optionArray;

- (int)run;

- (void)showHelp;

- (void)stop;

- (void)stopDueToSigTerm;

- (id)subcommandName;



@end


