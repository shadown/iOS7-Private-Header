/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "MFMessageTextAttachment.h"



@class MFMimeTextAttachment, NSData;



@interface MFMailInlineTextAttachment : MFMessageTextAttachment

{

    MFMimeTextAttachment *_original;

    NSData *_iconImageData;

    struct CGSize _cachedImageSize;

    unsigned int _hasBeenDownloaded:1;

    _Bool _displayableAsIcon;

}



+ (unsigned long long)precedenceLevel;

- (void)_cacheImageSizeIfNecessary;

- (void)_setImageDimensions:(struct CGSize)arg1;

- (unsigned int)approximateSize;

- (double)constrainedWidth;

- (void)dealloc;

@property _Bool displayableAsIcon; // @synthesize displayableAsIcon=_displayableAsIcon;

- (void)download;

- (_Bool)hasBeenDownloaded;

- (struct CGSize)imageDimensions;

- (id)initWithMimeTextAttachment:(id)arg1 andMessageBody:(id)arg2;

- (id)initWithWrapper:(id)arg1;

- (void)inlineDisplayData:(id *)arg1 mimeType:(id *)arg2;

- (_Bool)isDisplayableInline;

- (_Bool)isDisplayableInsidePlugin;

- (id)mimeTextAttachment;

- (_Bool)needsRedownload;

- (id)persistentUniqueIdentifier;

- (void)setDisplayableInline:(_Bool)arg1;

- (void)setDisplayableInsidePlugin:(_Bool)arg1;

- (void)setFileWrapper:(id)arg1;

- (void)setNeedsRedownload:(_Bool)arg1;

- (void)setupForComposition;

- (_Bool)shouldDownloadAttachmentOnDisplay;

- (id)textEncodingGuess;



@end

