//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class UIImageView, UILabel;

@interface RedEnvelopeView : UIView
{
    float _width;
    UIImageView *_icon;
    UILabel *_titleLabel;
    UIView *_buttonBackgroundView;
    UILabel *_buttonLabel;
}

@property(retain, nonatomic) UILabel *buttonLabel; // @synthesize buttonLabel=_buttonLabel;
@property(retain, nonatomic) UIView *buttonBackgroundView; // @synthesize buttonBackgroundView=_buttonBackgroundView;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UIImageView *icon; // @synthesize icon=_icon;
@property(nonatomic) float width; // @synthesize width=_width;
- (void).cxx_destruct;
- (void)autoSetFrame;
- (void)commonInit;
- (id)init;

@end
