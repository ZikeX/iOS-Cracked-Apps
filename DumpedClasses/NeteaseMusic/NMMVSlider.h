//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "NMMVViewFullScreenUpdateDelegate.h"

@class NSString, UIImage, UIImageView, UILabel, UISlider;

@interface NMMVSlider : UIView <NMMVViewFullScreenUpdateDelegate>
{
    _Bool _isFullScreen;
    UISlider *_innerSlider;
    UILabel *_elapsedTimeLabel;
    UILabel *_totalDurationTimeLabel;
    UIImageView *_totalBackgroundImageView;
    UIImageView *_playableBackgroundImageView;
    UIImage *_totalBgImageNormal;
    UIImage *_playableBgImageNormal;
    UIImage *_totalBgImageFull;
    UIImage *_playableBgImageFull;
    UIImage *_thumbImageNormal;
    UIImage *_thumbImageNormalNight;
    UIImage *_minTrackImageNormal;
    UIImage *_maxTrackImageNormal;
    UIImage *_thumbImageFull;
    UIImage *_thumbImageFullBg;
    UIImage *_minTrackImageFull;
    UIImage *_maxTrackImageFull;
    _Bool _isUserTouchingSlider;
    double _totalDuration;
    double _availbleDuration;
    double _playTime;
    id <NMMVSliderDelegate> _delegate;
}

@property(nonatomic) _Bool isUserTouchingSlider; // @synthesize isUserTouchingSlider=_isUserTouchingSlider;
@property(nonatomic) id <NMMVSliderDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) UISlider *innerSlider; // @synthesize innerSlider=_innerSlider;
@property(nonatomic) double playTime; // @synthesize playTime=_playTime;
@property(nonatomic) double availbleDuration; // @synthesize availbleDuration=_availbleDuration;
@property(nonatomic) double totalDuration; // @synthesize totalDuration=_totalDuration;
- (void).cxx_destruct;
- (void)reset;
- (void)updateSliderImage;
- (void)updateViewForFullScreenSwitch:(_Bool)arg1;
- (void)layoutSubviews;
- (void)sliderMoved;
- (void)sliderTouchEnd;
- (void)sliderTouchBegin;
- (double)currentDownloadedPercent;
- (void)refreshTimeLabels;
- (void)refreshSlider;
- (void)changeTrackImageForTheme:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

