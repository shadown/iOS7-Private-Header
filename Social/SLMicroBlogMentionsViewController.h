/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "UIViewController.h"



#import "UITableViewDataSource.h"

#import "UITableViewDelegate.h"



@class NSArray, NSObject<SLMicroBlogMentionsDelegate>, NSObject<SLMicroBlogSheetDelegate>, NSString, UITableView;



__attribute__((visibility("hidden")))

@interface SLMicroBlogMentionsViewController : UIViewController <UITableViewDataSource, UITableViewDelegate>

{

    NSObject<SLMicroBlogSheetDelegate> *_sheetDelegate;

    NSArray *_mentions;

    NSString *_searchString;

    UITableView *_tableView;

    NSObject<SLMicroBlogMentionsDelegate> *_delegate;

}



+ (id)_blankSurrogateProfileImage;

- (void).cxx_destruct;

- (void)chooseRow:(long long)arg1;

- (void)completeWithSelectedMention:(id)arg1;

- (struct CGSize)contentSizeForViewInPopover;

@property(nonatomic) __weak NSObject<SLMicroBlogMentionsDelegate> *delegate; // @synthesize delegate=_delegate;

- (id)initWithSheetDelegate:(id)arg1;

- (void)loadView;

- (id)mentions;

- (long long)numberOfSectionsInTableView:(id)arg1;

- (void)setMentions:(id)arg1;

- (void)setSearchString:(id)arg1;

- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;

- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;

- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;

- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;

- (void)updateMentions;



@end

