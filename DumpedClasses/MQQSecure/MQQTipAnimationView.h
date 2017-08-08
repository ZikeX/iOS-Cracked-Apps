//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class CALayer, UIImageView;

@interface MQQTipAnimationView : UIView
{
    _Bool _show;
    _Bool _animating;
    UIView *_baseView;
    UIView *_targetView;
    UIImageView *_imageView;
    UIImageView *_tipImageView;
    double _lastAngle;
    CALayer *_dotLayer;
    struct CGPoint _centerPoint;
    struct CGPoint _lastTargetCenter;
}

+ (id)showTipAnimationViewInView:(id)arg1 towardView:(id)arg2 withImage:(id)arg3 anchorPoint:(struct CGPoint)arg4;
@property(retain, nonatomic) CALayer *dotLayer; // @synthesize dotLayer=_dotLayer;
@property(nonatomic) _Bool animating; // @synthesize animating=_animating;
@property(nonatomic) _Bool show; // @synthesize show=_show;
@property(nonatomic) struct CGPoint lastTargetCenter; // @synthesize lastTargetCenter=_lastTargetCenter;
@property(nonatomic) struct CGPoint centerPoint; // @synthesize centerPoint=_centerPoint;
@property(nonatomic) double lastAngle; // @synthesize lastAngle=_lastAngle;
@property(retain, nonatomic) UIImageView *tipImageView; // @synthesize tipImageView=_tipImageView;
@property(retain, nonatomic) UIImageView *imageView; // @synthesize imageView=_imageView;
@property(nonatomic) UIView *targetView; // @synthesize targetView=_targetView;
@property(nonatomic) UIView *baseView; // @synthesize baseView=_baseView;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (id)rotationAnimationWithDurationTime:(double)arg1;
- (void)updateTipViewOrientation;
- (void)dissmissCircleDot;
- (void)showView;
- (void)dismissView;
- (void)dealloc;

@end
