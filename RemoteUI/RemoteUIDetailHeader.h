/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "UIView.h"



#import "RemoteUITableHeader.h"



@class UILabel;



@interface RemoteUIDetailHeader : UIView <RemoteUITableHeader>

{

    UILabel *_headerLabel;

    UILabel *_detailHeaderLabel;

    _Bool _isFirstSection;

}



- (void)dealloc;

- (double)headerHeightForWidth:(double)arg1 inTableView:(id)arg2;

- (id)initWithAttributes:(id)arg1;

- (void)layoutSubviews;

- (void)setSectionIsFirst:(_Bool)arg1;



@end


