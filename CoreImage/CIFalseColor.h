/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "CIFilter.h"


@class CIColor, CIImage;



__attribute__((visibility("hidden")))

@interface CIFalseColor : CIFilter

{

    CIImage *inputImage;

    CIColor *inputColor0;

    CIColor *inputColor1;

}



+ (id)customAttributes;

- (id)_kernel;

@property(retain, nonatomic) CIColor *inputColor0; // @synthesize inputColor0;

@property(retain, nonatomic) CIColor *inputColor1; // @synthesize inputColor1;

@property(retain, nonatomic) CIImage *inputImage; // @synthesize inputImage;

- (id)outputImage;

- (void)setDefaults;



@end


