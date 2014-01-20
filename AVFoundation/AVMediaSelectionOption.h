/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */





#import "NSCopying.h"



@class AVMediaSelectionOptionInternal, NSArray, NSLocale, NSString;



@interface AVMediaSelectionOption : NSObject <NSCopying>

{

    AVMediaSelectionOptionInternal *_mediaSelectionOption;

}



+ (id)mediaSelectionOptionForAsset:(id)arg1 group:(id)arg2 dictionary:(id)arg3 hasUnderlyingTrack:(_Bool)arg4;

- (id)_ancillaryDescription;

- (id)_groupID;

- (id)_groupMediaType;

- (_Bool)_isDesignatedDefault;

- (id)_title;

- (id)associatedExtendedLanguageTag;

- (id)associatedMediaSelectionOptionInMediaSelectionGroup:(id)arg1;

- (id)associatedPersistentIDs;

@property(readonly, nonatomic) NSArray *availableMetadataFormats;

@property(readonly, nonatomic) NSArray *commonMetadata;

- (id)copyWithZone:(struct _NSZone *)arg1;

- (void)dealloc;

- (id)description;

- (id)dictionary;

@property(readonly, nonatomic) NSString *displayName;

- (id)displayNameWithLocale:(id)arg1;

- (_Bool)displaysNonForcedSubtitles;

@property(readonly, nonatomic) NSString *extendedLanguageTag;

- (id)group;

- (_Bool)hasMediaCharacteristic:(id)arg1;

- (id)init;

@property(readonly, nonatomic, getter=isPlayable) _Bool playable;

@property(readonly, nonatomic) NSLocale *locale;

@property(readonly, nonatomic) NSArray *mediaSubTypes;

@property(readonly, nonatomic) NSString *mediaType;

- (id)metadataForFormat:(id)arg1;

- (id)optionID;

- (id)propertyList;



@end

