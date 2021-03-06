/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "CPGraphicObject.h"


@interface CPImage : CPGraphicObject

{

    struct CPPDFImage *imageData;

    _Bool renderedBoundsComputed;

}



- (void)accept:(id)arg1;

- (struct CGRect)bounds;

- (struct CPPDFImage *)imageData;

- (id)initWithBounds:(struct CGRect)arg1;

- (id)initWithPDFImage:(struct CPPDFImage *)arg1;

- (_Bool)isVisible;

- (void)recomputeRenderedBounds;

- (struct CGRect)renderedBounds;

- (long long)zOrder;



@end


