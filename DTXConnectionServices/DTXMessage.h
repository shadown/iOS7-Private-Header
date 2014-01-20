/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */





@class NSDictionary, NSException;



@interface DTXMessage : NSObject

{

    int _messageType;

    int _status;

    id _destructor;

    const char *_internalBuffer;

    unsigned long long _internalBufferLength;

    unsigned long long _cost;

    id <NSCoding><NSObject> _payloadObject;

    void *_auxiliary;

    _Bool _deserialized;

    _Bool _immutable;

    _Bool _expectsReply;

    _Bool _cannotTransmit;

    unsigned int _identifier;

    unsigned int _channelCode;

    unsigned int _conversationIndex;

    NSDictionary *_auxiliaryPromoted;

}



+ (void)initialize;

+ (id)message;

+ (id)messageReferencingBuffer:(const void *)arg1 length:(unsigned long long)arg2 destructor:(id)arg3;

+ (id)messageWithBuffer:(const void *)arg1 length:(unsigned long long)arg2;

+ (id)messageWithObject:(id)arg1;

+ (id)messageWithPrimitive:(void *)arg1;

+ (id)messageWithSelector:(SEL)arg1 objectArguments:(id)arg2;

+ (id)messageWithSelector:(SEL)arg1 typesAndArguments:(int)arg2;

- (void)_appendTypesAndValues:(int)arg1 withKey:(id)arg2 list:(struct __va_list_tag [1])arg3;

- (void)_clearPayloadBuffer;

- (void)_makeBarrier;

- (void)_makeDispatch;

- (void)_makeImmutable;

- (void)_setPayloadBuffer:(const char *)arg1 length:(unsigned long long)arg2 shouldCopy:(_Bool)arg3 destructor:(id)arg4;

- (void)_willModifyAuxiliary;

- (void)appendObject:(id)arg1;

@property(nonatomic) _Bool cannotTransmit; // @synthesize cannotTransmit=_cannotTransmit;

@property(nonatomic) unsigned int channelCode; // @synthesize channelCode=_channelCode;

@property(nonatomic) unsigned int conversationIndex; // @synthesize conversationIndex=_conversationIndex;

@property(readonly, nonatomic) unsigned long long cost; // @synthesize cost=_cost;

- (void)dealloc;

- (id)description;

@property(readonly, nonatomic) _Bool deserialized; // @synthesize deserialized=_deserialized;

- (void)encodeWithCoder:(id)arg1;

@property(nonatomic) int errorStatus;

@property(nonatomic) NSException *exception;

@property(nonatomic) _Bool expectsReply; // @synthesize expectsReply=_expectsReply;

- (const void *)getBufferWithReturnedLength:(unsigned long long *)arg1;

@property(nonatomic) unsigned int identifier; // @synthesize identifier=_identifier;

- (id)initWithCoder:(id)arg1;

- (id)initWithSelector:(SEL)arg1 firstArg:(id)arg2 remainingObjectArgs:(struct __va_list_tag [1])arg3;

- (id)initWithSerializedForm:(const char *)arg1 length:(unsigned long long)arg2 destructor:(id)arg3;

- (id)invokeWithTarget:(id)arg1;

@property(readonly, nonatomic) _Bool isBarrier;

@property(readonly, nonatomic) _Bool isDispatch;

@property(nonatomic) int messageType; // @synthesize messageType=_messageType;

- (id)newReply;

- (id)newReplyWithObject:(id)arg1;

- (id)object;

- (id)orderedValues;

@property(copy, nonatomic) id <NSCoding><NSObject> payloadObject;

- (void)serializedFormApply:(id)arg1;

@property(readonly, nonatomic) unsigned long long serializedLength;

- (void)setData:(id)arg1 forMessageKey:(id)arg2;

- (void)setInteger:(long long)arg1 forMessageKey:(id)arg2;

- (void)setObject:(id)arg1 forMessageKey:(id)arg2;

- (void)setString:(id)arg1 forMessageKey:(id)arg2;

- (_Bool)shouldInvokeWithTarget:(id)arg1;

- (id)valueForMessageKey:(id)arg1;



@end

