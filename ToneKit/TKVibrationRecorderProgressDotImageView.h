/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "UIImageView.h"



@interface TKVibrationRecorderProgressDotImageView : UIImageView

{

    double _timeInterval;

    double _duration;

    double _previousPauseTimeInterval;

    double _previousPauseDuration;

    double _accessibilityFrameAdditionalHeight;

}



- (struct CGRect)accessibilityFrame;

@property(nonatomic) double accessibilityFrameAdditionalHeight; // @synthesize accessibilityFrameAdditionalHeight=_accessibilityFrameAdditionalHeight;

- (id)accessibilityLabel;

- (unsigned long long)accessibilityTraits;

- (id)accessibilityValue;

@property(nonatomic) double duration; // @synthesize duration=_duration;

- (_Bool)isAccessibilityElement;

@property(nonatomic) double previousPauseDuration; // @synthesize previousPauseDuration=_previousPauseDuration;

@property(nonatomic) double previousPauseTimeInterval; // @synthesize previousPauseTimeInterval=_previousPauseTimeInterval;

@property(nonatomic) double timeInterval; // @synthesize timeInterval=_timeInterval;



@end


