/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */





__attribute__((visibility("hidden")))

@interface SKTextureCache : NSObject

{

    unsigned int texId;

    int texInternalFormat;

    unsigned int texFormat;

    unsigned int texType;

    struct CGSize size;

    struct CGSize pixelSize;

    _Bool isLoaded;

    _Bool hasAlpha;

    _Bool isPOT;

    char *pixelData;

    unsigned int *alphaMap;

    struct CGSize alphaMapSize;

    int state;

    int lock;

    struct CGImage *collisionMask;

}



- (id).cxx_construct;

@property(nonatomic) unsigned int *alphaMap; // @synthesize alphaMap;

@property(nonatomic) struct CGSize alphaMapSize; // @synthesize alphaMapSize;

- (void)dealloc;

@property(readonly, nonatomic, getter=getLock) int *lock;

@property(nonatomic) _Bool hasAlpha; // @synthesize hasAlpha;

- (id)init;

@property(nonatomic) _Bool isLoaded; // @synthesize isLoaded;

@property(nonatomic) _Bool isPOT; // @synthesize isPOT;

@property(nonatomic) char *pixelData; // @synthesize pixelData;

@property(nonatomic) struct CGSize pixelSize; // @synthesize pixelSize;

@property(nonatomic) struct CGSize size; // @synthesize size;

@property(nonatomic) int state; // @synthesize state;

@property(nonatomic) unsigned int texFormat; // @synthesize texFormat;

@property(nonatomic) unsigned int texId; // @synthesize texId;

@property(nonatomic) int texInternalFormat; // @synthesize texInternalFormat;

@property(nonatomic) unsigned int texType; // @synthesize texType;



@end

