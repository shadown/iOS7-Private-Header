/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "GKCollectionViewCell.h"


@class UILabel;



@interface GKStatusCell : GKCollectionViewCell

{

    UILabel *_statusLabel;

}



- (_Bool)canRemoveItem;

- (void)dealloc;

- (id)initWithFrame:(struct CGRect)arg1;

- (void)prepareForReuse;

- (void)setStatus:(id)arg1;

@property(retain, nonatomic) UILabel *statusLabel; // @synthesize statusLabel=_statusLabel;



@end

