//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class TMMarketPopupContentView, UIButton, UIImageView;

@interface TMMarketPopupView : UIView
{
    TMMarketPopupContentView *_contentView;
    UIButton *_tabbarButton;
    UIView *_backgroundView;
    UIImageView *_iconImageView;
}

@property(retain, nonatomic) UIImageView *iconImageView; // @synthesize iconImageView=_iconImageView;
@property(retain, nonatomic) UIView *backgroundView; // @synthesize backgroundView=_backgroundView;
@property(retain, nonatomic) UIButton *tabbarButton; // @synthesize tabbarButton=_tabbarButton;
@property(retain, nonatomic) TMMarketPopupContentView *contentView; // @synthesize contentView=_contentView;
- (void).cxx_destruct;
- (void)dismiss:(CDUnknownBlockType)arg1;
- (void)dismiss;
- (void)show;
- (void)doAddContentView;
- (id)init;

@end

