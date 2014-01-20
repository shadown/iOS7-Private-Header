/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "UIView.h"


#import "UIPickerTableViewContainerDelegate.h"

#import "UITableViewDataSource.h"



@class UIColor, UIPickerTableView, UIPickerView;



__attribute__((visibility("hidden")))

@interface UIPickerColumnView : UIView <UIPickerTableViewContainerDelegate, UITableViewDataSource>

{

    UIPickerTableView *_topTable;

    UIPickerTableView *_middleTable;

    UIPickerTableView *_bottomTable;

    UIView *_topContainerView;

    UIView *_middleContainerView;

    UIView *_bottomContainerView;

    double _middleBarHeight;

    double _rowHeight;

    UIPickerView *_pickerView;

    struct CGRect _tableFrame;

    struct CATransform3D _perspectiveTransform;

    UIColor *__textColor;

}



- (id)_allVisibleCells;

- (void)_centerTableInContainer:(id)arg1;

- (_Bool)_containsTable:(id)arg1;

- (id)_createContainerViewWithFrame:(struct CGRect)arg1;

- (id)_createTableViewWithFrame:(struct CGRect)arg1 containingFrame:(struct CGRect)arg2;

- (double)_horizontalBiasForEndTables;

- (void)_moveTableViewIfNecessary:(id)arg1 toContentOffset:(struct CGPoint)arg2;

- (void)_pickerTableViewDidChangeContentOffset:(id)arg1;

- (id)_preferredTable;

- (_Bool)_scrollRowAtIndexPathToSelectionBar:(id)arg1 animated:(_Bool)arg2;

- (void)_sendCheckedRow:(long long)arg1 inTableView:(id)arg2 checked:(_Bool)arg3;

- (void)_sendSelectionChangedFromTable:(id)arg1;

@property(retain, nonatomic, getter=_textColor, setter=_setTextColor:) UIColor *_textColor; // @synthesize _textColor=__textColor;

- (_Bool)_soundsEnabled;

- (struct CGRect)_tableFrame;

- (struct CATransform3D)_transformForTableWithPerspectiveTranslationX:(double)arg1;

- (struct CATransform3D)_transformForTableWithTranslationX:(double)arg1;

- (_Bool)_usesCheckSelection;

- (struct _NSRange)_visibleGlobalRows;

- (void)beginUpdates;

- (id)cellForRowAtIndexPath:(id)arg1;

- (void)clearDataSourceAndDelegate;

- (void)dealloc;

- (void)endUpdates;

- (id)initWithFrame:(struct CGRect)arg1 tableFrame:(struct CGRect)arg2 middleBarHeight:(double)arg3 rowHeight:(double)arg4 pickerView:(id)arg5 transform:(struct CATransform3D)arg6;

- (_Bool)isRowChecked:(long long)arg1;

- (long long)numberOfRowsInSection:(long long)arg1;

@property(nonatomic) struct CATransform3D perspectiveTransform; // @synthesize perspectiveTransform=_perspectiveTransform;

- (void)pickerTableView:(id)arg1 didChangeSelectionBarRowFrom:(long long)arg2 to:(long long)arg3;

- (void)reloadData;

@property(nonatomic) double rowHeight; // @synthesize rowHeight=_rowHeight;

- (_Bool)selectRow:(long long)arg1 animated:(_Bool)arg2 notify:(_Bool)arg3;

@property(nonatomic) struct CGRect selectionBarRect;

@property(readonly, nonatomic) long long selectionBarRow;

- (void)setAllowsMultipleSelection:(_Bool)arg1;

- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;

- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;



@end

