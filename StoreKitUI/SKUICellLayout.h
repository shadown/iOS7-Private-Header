/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */





@class SKUIClientContext, UIView;



@interface SKUICellLayout : NSObject

{

    UIView *_cell;

    SKUIClientContext *_clientContext;

    UIView *_contentView;

    _Bool _parentWantsCellNeedsLayout;

}



- (void).cxx_destruct;

@property(retain, nonatomic) SKUIClientContext *clientContext; // @synthesize clientContext=_clientContext;

@property(readonly, nonatomic) UIView *contentView; // @synthesize contentView=_contentView;

- (id)initWithCollectionViewCell:(id)arg1;

- (id)initWithParentView:(id)arg1;

- (id)initWithTableViewCell:(id)arg1;

- (void)layoutSubviews;

@property(readonly, nonatomic) UIView *parentCellView; // @synthesize parentCellView=_cell;

- (void)prepareForReuse;

- (void)resetLayout;

- (void)setBackgroundColor:(id)arg1;

- (void)setColoringWithColorScheme:(id)arg1;

- (void)setHighlighted:(_Bool)arg1;

- (void)setNeedsLayout;

- (void)setSelected:(_Bool)arg1;



@end


