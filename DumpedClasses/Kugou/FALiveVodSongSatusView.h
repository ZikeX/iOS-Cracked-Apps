//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "FAView.h"

@class NSString, UIImageView, UILabel;

@interface FALiveVodSongSatusView : FAView
{
    UILabel *_titleLabel;
    UIImageView *_iconImageView;
    NSString *_name;
    NSString *_songName;
    long long _status;
    NSString *_typeName;
}

@property(retain, nonatomic) NSString *typeName; // @synthesize typeName=_typeName;
@property(nonatomic) long long status; // @synthesize status=_status;
@property(retain, nonatomic) NSString *songName; // @synthesize songName=_songName;
@property(retain, nonatomic) NSString *name; // @synthesize name=_name;
@property(retain, nonatomic) UIImageView *iconImageView; // @synthesize iconImageView=_iconImageView;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
- (void).cxx_destruct;
- (void)hidden;
- (void)show;
- (void)layoutSubviews;
- (void)createSubViews;
- (id)initWithTitle:(id)arg1 andSongName:(id)arg2 andStatus:(unsigned long long)arg3 andTypeName:(id)arg4;

@end

