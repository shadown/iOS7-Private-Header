/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */





#import "PKPassLibraryExportedInterface.h"



@interface PKPassLibraryExportedProxy : NSObject <PKPassLibraryExportedInterface>

{

    id <PKPassLibraryExportedInterface> _delegate;

}



- (void)catalogChanged:(id)arg1 withNewPasses:(id)arg2;

@property(nonatomic) id <PKPassLibraryExportedInterface> delegate; // @synthesize delegate=_delegate;

- (id)initWithDelegate:(id)arg1;

- (void)passAdded:(id)arg1;

- (void)passRemoved:(id)arg1;

- (void)passUpdated:(id)arg1;



@end


