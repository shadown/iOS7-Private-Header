/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */





#import "NSCopying.h"

#import "NSMutableCopying.h"

#import "TSDMixing.h"



__attribute__((visibility("hidden")))

@interface TSDInfoGeometry : NSObject <TSDMixing, NSCopying, NSMutableCopying>

{

    struct CGPoint mPosition;

    struct CGSize mSize;

    struct {

        unsigned int widthValid:1;

        unsigned int heightValid:1;

        unsigned int horizontalFlip:1;

        unsigned int verticalFlip:1;

    } mFlags;

    double mAngle;

}



+ (id)geometryFromFullTransform:(struct CGAffineTransform)arg1;

+ (id)geometryFromFullTransform:(struct CGAffineTransform)arg1 widthValid:(_Bool)arg2 heightValid:(_Bool)arg3;

+ (id)geometryFromTransform:(struct CGAffineTransform)arg1 withSize:(struct CGSize)arg2;

@property(readonly, nonatomic) double angle; // @synthesize angle=mAngle;

- (struct CGRect)boundsBeforeRotation;

- (struct CGPoint)center;

- (id)copyWithZone:(struct _NSZone *)arg1;

- (id)description;

- (struct CGAffineTransform)fullTransform;

- (id)geometryByAppendingTransform:(struct CGAffineTransform)arg1;

- (id)geometryRelativeToGeometry:(id)arg1;

- (id)geometryWithNewBounds:(struct CGRect)arg1;

- (id)geometryWithParentGeometry:(id)arg1;

- (unsigned long long)hash;

@property(readonly, nonatomic) _Bool heightValid;

@property(readonly, nonatomic) _Bool horizontalFlip;

- (id)init;

- (id)initWithArchive:(const struct GeometryArchive *)arg1;

- (id)initWithCenter:(struct CGPoint)arg1 size:(struct CGSize)arg2;

- (id)initWithFullTransform:(struct CGAffineTransform)arg1 widthValid:(_Bool)arg2 heightValid:(_Bool)arg3;

- (id)initWithHeight:(double)arg1;

- (id)initWithPosition:(struct CGPoint)arg1 size:(struct CGSize)arg2;

- (id)initWithPosition:(struct CGPoint)arg1 size:(struct CGSize)arg2 angle:(double)arg3;

- (id)initWithPosition:(struct CGPoint)arg1 size:(struct CGSize)arg2 widthValid:(_Bool)arg3 heightValid:(_Bool)arg4 horizontalFlip:(_Bool)arg5 verticalFlip:(_Bool)arg6 angle:(double)arg7;

- (id)initWithSize:(struct CGSize)arg1;

- (id)initWithTransform:(struct CGAffineTransform)arg1 size:(struct CGSize)arg2;

- (id)initWithTransformedBoundsOrigin:(struct CGPoint)arg1 size:(struct CGSize)arg2 angle:(double)arg3;

- (id)initWithTransformedBoundsOrigin:(struct CGPoint)arg1 size:(struct CGSize)arg2 horizontalFlip:(_Bool)arg3 verticalFlip:(_Bool)arg4 angle:(double)arg5;

- (id)initWithWidth:(double)arg1;

- (_Bool)isEqual:(id)arg1;

- (_Bool)isEqualExceptForPosition:(id)arg1;

- (id)mixedObjectWithFraction:(double)arg1 ofObject:(id)arg2;

- (long long)mixingTypeWithObject:(id)arg1;

- (id)mutableCopyWithZone:(struct _NSZone *)arg1;

- (id)normalizedGeometry;

@property(readonly, nonatomic) struct CGPoint position; // @synthesize position=mPosition;

- (void)saveToArchive:(struct GeometryArchive *)arg1 archiver:(id)arg2;

@property(readonly, nonatomic) struct CGSize size; // @synthesize size=mSize;

- (struct CGAffineTransform)transform;

- (struct CGAffineTransform)transformBasedOnPoint:(struct CGPoint)arg1 centeredAtPoint:(struct CGPoint)arg2;

- (struct CGAffineTransform)transformBasedOnPoint:(struct CGPoint)arg1 centeredAtPoint:(struct CGPoint)arg2 withFlips:(_Bool)arg3;

- (struct CGAffineTransform)transformBasedOnRect:(struct CGRect)arg1;

- (struct CGAffineTransform)transformWithoutFlips;

- (struct CGRect)transformedBounds;

- (struct CGPoint)transformedBoundsOrigin;

@property(readonly, nonatomic) _Bool verticalFlip;

@property(readonly, nonatomic) _Bool widthValid;



@end

