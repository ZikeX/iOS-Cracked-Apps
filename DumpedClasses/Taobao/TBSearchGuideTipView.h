//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class NSString, UIButton, UILabel;

@interface TBSearchGuideTipView : UIView
{
    NSString *_iconfontName;
    NSString *_tipText;
    UILabel *_iconLabel;
    UILabel *_tipTextLabel;
    UIButton *_closeButton;
    id <TBSearchGuideTipViewDelegate> _delegate;
}

@property(nonatomic) __weak id <TBSearchGuideTipViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) UIButton *closeButton; // @synthesize closeButton=_closeButton;
@property(retain, nonatomic) UILabel *tipTextLabel; // @synthesize tipTextLabel=_tipTextLabel;
@property(retain, nonatomic) UILabel *iconLabel; // @synthesize iconLabel=_iconLabel;
@property(retain, nonatomic) NSString *tipText; // @synthesize tipText=_tipText;
@property(retain, nonatomic) NSString *iconfontName; // @synthesize iconfontName=_iconfontName;
- (void).cxx_destruct;
- (void)onCloseButtonClick:(id)arg1;
- (void)render;
- (id)initWithFrame:(struct CGRect)arg1;

@end

