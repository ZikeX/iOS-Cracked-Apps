//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITableViewCell.h"

@class CAGradientLayer, TXDPayCodeView, UILabel;

@interface TXDPayCodeCell : UITableViewCell
{
    TXDPayCodeView *_payCodeView;
    UILabel *_promotionLabel;
    CAGradientLayer *_gradientLayer;
}

@property(retain, nonatomic) CAGradientLayer *gradientLayer; // @synthesize gradientLayer=_gradientLayer;
@property(retain, nonatomic) UILabel *promotionLabel; // @synthesize promotionLabel=_promotionLabel;
@property(retain, nonatomic) TXDPayCodeView *payCodeView; // @synthesize payCodeView=_payCodeView;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)prepareForReuse;
- (void)setupViews;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

