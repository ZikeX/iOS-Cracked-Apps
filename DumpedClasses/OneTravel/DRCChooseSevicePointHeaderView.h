//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class UIImageView, UILabel;

@interface DRCChooseSevicePointHeaderView : UIView
{
    UIImageView *_carImageView;
    UILabel *_carNameLabel;
}

@property(retain, nonatomic) UILabel *carNameLabel; // @synthesize carNameLabel=_carNameLabel;
@property(retain, nonatomic) UIImageView *carImageView; // @synthesize carImageView=_carImageView;
- (void).cxx_destruct;
- (void)setConstraints;
- (id)initWithCarName:(id)arg1 CarImageUrl:(id)arg2;

@end
