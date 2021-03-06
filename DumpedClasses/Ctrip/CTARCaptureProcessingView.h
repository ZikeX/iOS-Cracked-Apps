//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class CTARCaptureViewController, CTARObjectModel, CTImageView, NSTimer, UIImageView, UILabel;

@interface CTARCaptureProcessingView : UIView
{
    float _process;
    UILabel *_processLabel;
    CTARCaptureViewController *_currentCaptureVC;
    UIImageView *_CTARCaptureBigCircleImageView;
    UIImageView *_CTARCaptureSmallCircleImageView;
    UIView *_contentView;
    CTImageView *_objectImageView;
    CTARObjectModel *_objectModel;
    NSTimer *_timer1;
    NSTimer *_timer2;
    NSTimer *_timerForProcess;
}

@property(retain, nonatomic) NSTimer *timerForProcess; // @synthesize timerForProcess=_timerForProcess;
@property(retain, nonatomic) NSTimer *timer2; // @synthesize timer2=_timer2;
@property(retain, nonatomic) NSTimer *timer1; // @synthesize timer1=_timer1;
@property(retain, nonatomic) CTARObjectModel *objectModel; // @synthesize objectModel=_objectModel;
@property(retain, nonatomic) CTImageView *objectImageView; // @synthesize objectImageView=_objectImageView;
@property(retain, nonatomic) UIView *contentView; // @synthesize contentView=_contentView;
@property(retain, nonatomic) UIImageView *CTARCaptureSmallCircleImageView; // @synthesize CTARCaptureSmallCircleImageView=_CTARCaptureSmallCircleImageView;
@property(retain, nonatomic) UIImageView *CTARCaptureBigCircleImageView; // @synthesize CTARCaptureBigCircleImageView=_CTARCaptureBigCircleImageView;
@property(retain, nonatomic) CTARCaptureViewController *currentCaptureVC; // @synthesize currentCaptureVC=_currentCaptureVC;
@property(nonatomic) float process; // @synthesize process=_process;
@property(retain, nonatomic) UILabel *processLabel; // @synthesize processLabel=_processLabel;
- (void).cxx_destruct;
- (void)doAnimation3;
- (void)doAnimation2;
- (void)doAnimation1;
- (void)addMiddleLayer;
- (void)initTimer;
- (void)initProcess;
- (void)initContentView;
- (void)configData;
- (id)initWithObjectModel:(id)arg1;
- (void)awakeFromNib;

@end

