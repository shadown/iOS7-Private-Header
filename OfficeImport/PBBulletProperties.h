/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */





__attribute__((visibility("hidden")))

@interface PBBulletProperties : NSObject

{

}



+ (int)readBulletNumberScheme:(int)arg1;

+ (int)readBulletNumberSchemeFromExtended:(unsigned int)arg1;

+ (id)readBulletProperties:(struct PptParaProperty9 *)arg1 state:(id)arg2;

+ (int)writeBulletNumberScheme:(int)arg1;

+ (void)writeBulletProperties:(id)arg1 toBulletStyle:(struct PptParaProperty9 *)arg2 state:(id)arg3;



@end


