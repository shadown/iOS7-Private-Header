/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */





@class NSSet, TSDDrawableInfo<TSDContainerInfo>;



@protocol TSDCanvasSelection <NSObject>

+ (id)emptySelection;

@property(readonly, nonatomic) TSDDrawableInfo<TSDContainerInfo> *container;

- (_Bool)containsKindOfClass:(Class)arg1;

- (_Bool)containsUnlockedKindOfClass:(Class)arg1;

- (id)copyExcludingInfo:(id)arg1;

- (id)copyIncludingInfo:(id)arg1;

@property(readonly, nonatomic) unsigned long long infoCount;

@property(readonly, nonatomic) NSSet *infos;

- (id)infosOfClass:(Class)arg1;

@property(readonly, nonatomic) _Bool isEmpty;

@property(readonly, nonatomic) unsigned long long unlockedInfoCount;

@property(readonly, nonatomic) NSSet *unlockedInfos;

@end

