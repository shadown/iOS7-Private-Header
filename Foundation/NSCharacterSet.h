/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */





#import "NSCoding.h"

#import "NSCopying.h"

#import "NSMutableCopying.h"



@interface NSCharacterSet : NSObject <NSCopying, NSMutableCopying, NSCoding>

{

}



+ (id)URLFragmentAllowedCharacterSet;

+ (id)URLHostAllowedCharacterSet;

+ (id)URLPasswordAllowedCharacterSet;

+ (id)URLPathAllowedCharacterSet;

+ (id)URLQueryAllowedCharacterSet;

+ (id)URLUserAllowedCharacterSet;

+ (id)alphanumericCharacterSet;

+ (id)capitalizedLetterCharacterSet;

+ (id)characterSetWithBitmapRepresentation:(id)arg1;

+ (id)characterSetWithCharactersInString:(id)arg1;

+ (id)characterSetWithContentsOfFile:(id)arg1;

+ (id)characterSetWithRange:(struct _NSRange)arg1;

+ (id)controlCharacterSet;

+ (id)decimalDigitCharacterSet;

+ (id)decomposableCharacterSet;

+ (id)illegalCharacterSet;

+ (void)initialize;

+ (id)letterCharacterSet;

+ (id)lowercaseLetterCharacterSet;

+ (id)newlineCharacterSet;

+ (id)nonBaseCharacterSet;

+ (id)punctuationCharacterSet;

+ (id)symbolCharacterSet;

+ (id)uppercaseLetterCharacterSet;

+ (id)whitespaceAndNewlineCharacterSet;

+ (id)whitespaceCharacterSet;

- (unsigned long long)_cfTypeID;

- (struct __CFCharacterSet *)_expandedCFCharacterSet;

- (id)_retainedBitmapRepresentation;

- (id)bitmapRepresentation;

- (_Bool)characterIsMember:(unsigned short)arg1;

- (id)copyWithZone:(struct _NSZone *)arg1;

- (unsigned long long)count;

- (void)encodeWithCoder:(id)arg1;

- (_Bool)hasMemberInPlane:(unsigned char)arg1;

- (unsigned long long)hash;

- (id)init;

- (id)initWithCoder:(id)arg1;

- (id)invertedSet;

- (_Bool)isEmpty;

- (_Bool)isEqual:(id)arg1;

- (_Bool)isMutable;

- (_Bool)isSupersetOfSet:(id)arg1;

- (_Bool)longCharacterIsMember:(unsigned int)arg1;

- (void)makeImmutable;

- (id)mutableCopyWithZone:(struct _NSZone *)arg1;

- (id)replacementObjectForPortCoder:(id)arg1;



@end

