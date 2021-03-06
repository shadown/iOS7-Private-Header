/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */





#import "TSKStyleMapper.h"



__attribute__((visibility("hidden")))

@interface TSCHStyleMapper : NSObject <TSKStyleMapper>

{

    id <TSKStyleMapper> mUnderlyingMapper;

    _Bool mVaryInThemeStylesheet;

}



- (void)dealloc;

- (id)init;

- (id)initWithMapper:(id)arg1;

- (id)mappedStyleForStyle:(id)arg1;

- (id)mappedStyleForStyle:(id)arg1 bakeComputable:(_Bool)arg2;

- (id)mappedStyleForStyle:(id)arg1 inThemeStylesheet:(_Bool)arg2;

- (void)popMappingContext:(id)arg1;

- (void)pushMappingContext:(id)arg1;

- (id)targetStylesheet;

- (void)varyInThemeStylesheetForDurationOfBlock:(id)arg1;

- (void)varyInThemeStylesheetIf:(_Bool)arg1 forDurationOfBlock:(id)arg2;



@end


