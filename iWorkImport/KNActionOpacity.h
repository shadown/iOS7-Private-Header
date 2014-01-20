/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "KNAnimationEffect.h"


#import "KNActionEffectBuildAnimator.h"

#import "KNAnimationPluginArchiving.h"

#import "KNAnimationPluginObsoleteNames.h"



__attribute__((visibility("hidden")))

@interface KNActionOpacity : KNAnimationEffect <KNActionEffectBuildAnimator, KNAnimationPluginArchiving, KNAnimationPluginObsoleteNames>

{

}



+ (id)actionEffectStyle;

+ (int)animationCategory;

+ (id)animationFilter;

+ (id)animationName;

+ (id)applyActionEffect:(id)arg1 toAttributes:(id)arg2;

+ (id)defaultAttributes;

+ (unsigned long long)directionType;

+ (void)downgradeAttributes:(id *)arg1 animationName:(id *)arg2 warning:(id *)arg3 type:(int)arg4 isToClassic:(_Bool)arg5 version:(unsigned long long)arg6;

+ (void)fillLocalizedDirectionMenu:(id)arg1 forType:(int)arg2;

+ (id)localizedMenuString:(int)arg1;

+ (id)obsoleteAnimationNames;

+ (_Bool)requiresHighQualityTextures;

+ (id)supportedTypes;

+ (id)thumbnailImageNameForType:(int)arg1;

+ (void)upgradeAttributes:(id *)arg1 animationName:(id)arg2 warning:(id *)arg3 type:(int)arg4 isFromClassic:(_Bool)arg5 version:(unsigned long long)arg6;

- (id)animationsForTextureSet:(id)arg1 finalTextureSet:(id)arg2 duration:(double)arg3 attributes:(id)arg4 previousAttributes:(id)arg5;



@end

