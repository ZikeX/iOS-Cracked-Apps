//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITableViewCell.h"

@class HPPublishSyncModel, UILabel, UISwitch, UIView;

@interface HPPublishSyncCell : UITableViewCell
{
    HPPublishSyncModel *_publishSyncModel;
    UILabel *_titleLabel;
    UISwitch *_syncSwitch;
    UIView *_bottomLine;
}

@property(retain, nonatomic) UIView *bottomLine; // @synthesize bottomLine=_bottomLine;
@property(retain, nonatomic) UISwitch *syncSwitch; // @synthesize syncSwitch=_syncSwitch;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) HPPublishSyncModel *publishSyncModel; // @synthesize publishSyncModel=_publishSyncModel;
- (void).cxx_destruct;
- (void)turnSwitch;
- (void)layoutSubviews;
- (void)setupCell;
- (id)attributeStrWith:(id)arg1 andSubString:(id)arg2;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

