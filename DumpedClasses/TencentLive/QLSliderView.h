//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class UIImage;

@interface QLSliderView : UIView
{
    _Bool _dragging;
    id <QLSliderViewDelegate> _sliderDelegate;
    double _rate;
    UIImage *_imageBegin;
    UIImage *_imageEnd;
    double _imageBeginMargin;
    double _imageEndMargin;
    UIImage *_imageBackgroundLine;
    UIImage *_imageFillLine;
    UIImage *_imageSlider;
}

@property(nonatomic) _Bool dragging; // @synthesize dragging=_dragging;
@property(retain, nonatomic) UIImage *imageSlider; // @synthesize imageSlider=_imageSlider;
@property(retain, nonatomic) UIImage *imageFillLine; // @synthesize imageFillLine=_imageFillLine;
@property(retain, nonatomic) UIImage *imageBackgroundLine; // @synthesize imageBackgroundLine=_imageBackgroundLine;
@property(nonatomic) double imageEndMargin; // @synthesize imageEndMargin=_imageEndMargin;
@property(nonatomic) double imageBeginMargin; // @synthesize imageBeginMargin=_imageBeginMargin;
@property(retain, nonatomic) UIImage *imageEnd; // @synthesize imageEnd=_imageEnd;
@property(retain, nonatomic) UIImage *imageBegin; // @synthesize imageBegin=_imageBegin;
@property(nonatomic) double rate; // @synthesize rate=_rate;
@property(nonatomic) __weak id <QLSliderViewDelegate> sliderDelegate; // @synthesize sliderDelegate=_sliderDelegate;
- (void).cxx_destruct;
- (void)changeImageSlider:(id)arg1;
- (id)imageWithView:(id)arg1;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)didSliderChanged;
- (void)drawRect:(struct CGRect)arg1;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

@end

