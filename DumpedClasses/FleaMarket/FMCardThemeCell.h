//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITableViewCell.h"

#import "FMComponentCellProtocol.h"

@class FMAnimationLabel, FMCardBannerPicsView, MSWeakTimer, NSDate, NSString, UILabel, UIView;

@interface FMCardThemeCell : UITableViewCell <FMComponentCellProtocol>
{
    double _interval;
    NSDate *_endDate;
    MSWeakTimer *_timer;
    UILabel *_titleLabel;
    UILabel *_subTitleLabel;
    FMAnimationLabel *_hourLabel;
    FMAnimationLabel *_minuteLabel;
    FMAnimationLabel *_secondLabel;
    UILabel *_locationLabel;
    FMCardBannerPicsView *_picView;
    UIView *_bottomLine;
}

+ (double)rowHeightForComponent:(id)arg1;
@property(retain, nonatomic) UIView *bottomLine; // @synthesize bottomLine=_bottomLine;
@property(retain, nonatomic) FMCardBannerPicsView *picView; // @synthesize picView=_picView;
@property(retain, nonatomic) UILabel *locationLabel; // @synthesize locationLabel=_locationLabel;
@property(retain, nonatomic) FMAnimationLabel *secondLabel; // @synthesize secondLabel=_secondLabel;
@property(retain, nonatomic) FMAnimationLabel *minuteLabel; // @synthesize minuteLabel=_minuteLabel;
@property(retain, nonatomic) FMAnimationLabel *hourLabel; // @synthesize hourLabel=_hourLabel;
@property(retain, nonatomic) UILabel *subTitleLabel; // @synthesize subTitleLabel=_subTitleLabel;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
- (void).cxx_destruct;
- (void)updateTimeLabelText;
- (void)countdownToDate:(id)arg1 finished:(CDUnknownBlockType)arg2;
- (void)setCountdownLabelHidden:(_Bool)arg1;
- (void)updateConstraints;
- (void)didSelectCell;
- (void)bindComponent:(id)arg1;
- (void)addSubViews;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
