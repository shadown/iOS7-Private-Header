/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */





@class CPImportTracing, NSData, NSError, NSString;



__attribute__((visibility("hidden")))

@interface OCDReader : NSObject

{

    id <OCCancelDelegate> mCancelDelegate;

    id <OCDReaderDelegate> mDelegate;

    _Bool mIsThumbnail;

    CPImportTracing *mTracing;

    NSString *mFileName;

    NSData *mData;

    NSError *mStartError;

}



@property(retain, nonatomic) id <OCCancelDelegate> cancelDelegate; // @synthesize cancelDelegate=mCancelDelegate;

@property(retain, nonatomic) NSData *data; // @synthesize data=mData;

- (void)dealloc;

@property(nonatomic) id <OCDReaderDelegate> delegate; // @synthesize delegate=mDelegate;

@property(retain, nonatomic) NSString *fileName; // @synthesize fileName=mFileName;

- (id)initWithCancelDelegate:(id)arg1 tracing:(id)arg2;

- (_Bool)isBinaryReader;

@property(nonatomic) _Bool isThumbnail; // @synthesize isThumbnail=mIsThumbnail;

- (id)read;

@property(retain, nonatomic) NSError *startError; // @synthesize startError=mStartError;

- (void)setStartErrorMessageFromException:(id)arg1;

@property(retain, nonatomic) CPImportTracing *tracing; // @synthesize tracing=mTracing;

- (_Bool)start;

- (_Bool)verifyFileFormat;



@end

