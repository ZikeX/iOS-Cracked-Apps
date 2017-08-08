//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class FXUserInfo, KGThemeImageView, KGThemeLabel, UIImageView, UILabel;

@interface ChargeHeadView : UIView
{
    id <ChargeHeadViewProtocol> _delegate;
    KGThemeLabel *_nameLable;
    KGThemeLabel *_IDLable;
    UIImageView *_starImagView;
    KGThemeLabel *_balanceLable;
    UILabel *_coinLable;
    FXUserInfo *_userInfo;
    KGThemeImageView *_loginView;
}

@property(retain, nonatomic) KGThemeImageView *loginView; // @synthesize loginView=_loginView;
@property(retain, nonatomic) FXUserInfo *userInfo; // @synthesize userInfo=_userInfo;
@property(retain, nonatomic) UILabel *coinLable; // @synthesize coinLable=_coinLable;
@property(retain, nonatomic) KGThemeLabel *balanceLable; // @synthesize balanceLable=_balanceLable;
@property(retain, nonatomic) UIImageView *starImagView; // @synthesize starImagView=_starImagView;
@property(retain, nonatomic) KGThemeLabel *IDLable; // @synthesize IDLable=_IDLable;
@property(retain, nonatomic) KGThemeLabel *nameLable; // @synthesize nameLable=_nameLable;
@property(nonatomic) __weak id <ChargeHeadViewProtocol> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)setStarContentHidden:(_Bool)arg1;
- (void)actionNoLogin:(id)arg1;
- (void)fxloginSucces:(id)arg1;
- (void)getCoinCount;
- (void)reloadCoinData:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1 startInfo:(id)arg2;
- (void)updateUI;
- (void)registerNotification;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

@end
