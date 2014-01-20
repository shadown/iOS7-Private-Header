/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "TIKeyboardOperation.h"


@class NSDictionary, NSString;



@interface TIKeyboardOperationSetTypologyLog : TIKeyboardOperation

{

    NSString *_typedString;

    NSDictionary *_logDictionary;

}



+ (id)operationWithTypedString:(id)arg1 logDictionary:(id)arg2;

+ (_Bool)supportsSecureCoding;

- (void)dealloc;

- (void)encodeWithCoder:(id)arg1;

- (id)initWithCoder:(id)arg1;

- (id)initWithTypedString:(id)arg1 logDictionary:(id)arg2;

@property(readonly, nonatomic) NSDictionary *logDictionary; // @synthesize logDictionary=_logDictionary;

- (id)propertiesForDescription;

@property(readonly, nonatomic) NSString *typedString; // @synthesize typedString=_typedString;



@end

