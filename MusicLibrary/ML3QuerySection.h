/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */





@interface ML3QuerySection : NSObject

{

    unsigned long long _sectionIndex;

    struct _NSRange _range;

}



- (id)description;

- (unsigned long long)hash;

- (id)initWithRange:(struct _NSRange)arg1 sectionIndex:(unsigned long long)arg2;

- (_Bool)isEqual:(id)arg1;

@property(nonatomic) struct _NSRange range; // @synthesize range=_range;

@property(nonatomic) unsigned long long sectionIndex; // @synthesize sectionIndex=_sectionIndex;



@end

