/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "UIActivityViewController.h"


@class UIDocumentInteractionController;



__attribute__((visibility("hidden")))

@interface _UIDocumentActivityViewController : UIActivityViewController

{

    _Bool hideSystemActivities;

    UIDocumentInteractionController *_documentInteractionController;

    _Bool _hideSystemActivities;

}



- (void)_performActivity:(id)arg1;

- (void)_prepareActivity:(id)arg1;

- (_Bool)_shouldShowSystemActivity:(id)arg1;

@property(nonatomic) UIDocumentInteractionController *documentInteractionController; // @synthesize documentInteractionController=_documentInteractionController;

@property(nonatomic) _Bool hideSystemActivities; // @synthesize hideSystemActivities=_hideSystemActivities;

- (_Bool)sourceIsManaged;

- (void)viewDidDisappear:(_Bool)arg1;



@end


