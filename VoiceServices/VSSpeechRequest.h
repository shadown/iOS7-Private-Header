/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */





#import "NSSecureCoding.h"



@class NSAttributedString, NSString, NSURL;



@interface VSSpeechRequest : NSObject <NSSecureCoding>

{

    _Bool _useCustomVoice;

    _Bool _maintainsInput;

    _Bool _audioSessionIDIsValid;

    unsigned int _audioSessionID;

    unsigned int _audioQueueFlags;

    NSString *_text;

    NSAttributedString *_attributedText;

    NSString *_languageCode;

    NSString *_voiceName;

    long long _footprint;

    long long _gender;

    NSURL *_outputPath;

    double _rate;

    double _pitch;

    double _volume;

    id _stopHandler;

    id _pauseHandler;

}



+ (_Bool)supportsSecureCoding;

- (void).cxx_destruct;

@property(copy, nonatomic) NSAttributedString *attributedText; // @synthesize attributedText=_attributedText;

@property(nonatomic) unsigned int audioQueueFlags; // @synthesize audioQueueFlags=_audioQueueFlags;

@property(nonatomic) unsigned int audioSessionID; // @synthesize audioSessionID=_audioSessionID;

@property(nonatomic) _Bool audioSessionIDIsValid; // @synthesize audioSessionIDIsValid=_audioSessionIDIsValid;

- (id)description;

- (void)encodeWithCoder:(id)arg1;

@property(nonatomic) long long footprint; // @synthesize footprint=_footprint;

@property(nonatomic) long long gender; // @synthesize gender=_gender;

- (id)initWithCoder:(id)arg1;

@property(copy, nonatomic) NSString *languageCode; // @synthesize languageCode=_languageCode;

@property(nonatomic) _Bool maintainsInput; // @synthesize maintainsInput=_maintainsInput;

@property(copy, nonatomic) NSURL *outputPath; // @synthesize outputPath=_outputPath;

@property(copy, nonatomic) id pauseHandler; // @synthesize pauseHandler=_pauseHandler;

@property(nonatomic) double pitch; // @synthesize pitch=_pitch;

@property(nonatomic) double rate; // @synthesize rate=_rate;

@property(copy, nonatomic) id stopHandler; // @synthesize stopHandler=_stopHandler;

@property(copy, nonatomic) NSString *text; // @synthesize text=_text;

@property(nonatomic) _Bool useCustomVoice; // @synthesize useCustomVoice=_useCustomVoice;

@property(copy, nonatomic) NSString *voiceName; // @synthesize voiceName=_voiceName;

@property(nonatomic) double volume; // @synthesize volume=_volume;



@end

