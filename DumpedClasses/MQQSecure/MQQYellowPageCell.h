//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MQQTableViewCell.h"

@class UIButton, UILabel;

@interface MQQYellowPageCell : MQQTableViewCell
{
    UILabel *_titleLabel;
    UILabel *_subTitleLabel;
    UIButton *_callButton;
}

@property(retain, nonatomic) UIButton *callButton; // @synthesize callButton=_callButton;
@property(retain, nonatomic) UILabel *subTitleLabel; // @synthesize subTitleLabel=_subTitleLabel;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
- (void)dealloc;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

