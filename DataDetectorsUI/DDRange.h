/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */





@class DOMNode;



__attribute__((visibility("hidden")))

@interface DDRange : NSObject

{

    DOMNode *_node;

    long long _startOffset;

    long long _endOffset;

}



+ (id)rangeWithDOMRange:(id)arg1;

- (void)dealloc;

- (id)description;

@property(nonatomic) long long endOffset; // @synthesize endOffset=_endOffset;

- (id)initWithDOMRange:(id)arg1;

@property(retain, nonatomic) DOMNode *node; // @synthesize node=_node;

@property(nonatomic) long long startOffset; // @synthesize startOffset=_startOffset;



@end

