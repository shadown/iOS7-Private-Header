/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */





@class NSString;



@interface MLEQPreset : NSObject

{

    NSString *_name;

    NSString *_localizedName;

    int _builtInPresetType;

}



+ (id)eqPresetForBuiltInPresetType:(int)arg1;

+ (id)eqPresetForName:(id)arg1;

- (void).cxx_destruct;

- (int)builtInPresetType;

- (id)initWithBuiltInPresetType:(int)arg1;

- (id)localizedName;

- (id)name;

- (int)typeForAVController;



@end


