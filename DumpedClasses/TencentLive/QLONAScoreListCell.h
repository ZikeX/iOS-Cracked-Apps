//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "QLBaseTabelViewCell.h"

@class QLJCEONAScoreList, QLSImageView, UIImageView, UILabel;

@interface QLONAScoreListCell : QLBaseTabelViewCell
{
    QLJCEONAScoreList *_scoreList;
    UIImageView *_bgImg;
    QLSImageView *_leftAdImg;
    QLSImageView *_rankIdBgImgLeft;
    UILabel *_rankIdLblLeft;
    QLSImageView *_medalBgImgLeft;
    UILabel *_medalNumLblLeft;
    UILabel *_ranKTitleLblLeft;
    QLSImageView *_rankIdBgImgRight;
    UILabel *_rankIdLblRight;
    QLSImageView *_medalBgImgRight;
    UILabel *_medalNumLblRight;
    UILabel *_ranKTitleLblRight;
}

+ (double)getHeightWithPosterObj:(id)arg1 uInfo:(id)arg2;
@property(retain, nonatomic) UILabel *ranKTitleLblRight; // @synthesize ranKTitleLblRight=_ranKTitleLblRight;
@property(retain, nonatomic) UILabel *medalNumLblRight; // @synthesize medalNumLblRight=_medalNumLblRight;
@property(retain, nonatomic) QLSImageView *medalBgImgRight; // @synthesize medalBgImgRight=_medalBgImgRight;
@property(retain, nonatomic) UILabel *rankIdLblRight; // @synthesize rankIdLblRight=_rankIdLblRight;
@property(retain, nonatomic) QLSImageView *rankIdBgImgRight; // @synthesize rankIdBgImgRight=_rankIdBgImgRight;
@property(retain, nonatomic) UILabel *ranKTitleLblLeft; // @synthesize ranKTitleLblLeft=_ranKTitleLblLeft;
@property(retain, nonatomic) UILabel *medalNumLblLeft; // @synthesize medalNumLblLeft=_medalNumLblLeft;
@property(retain, nonatomic) QLSImageView *medalBgImgLeft; // @synthesize medalBgImgLeft=_medalBgImgLeft;
@property(retain, nonatomic) UILabel *rankIdLblLeft; // @synthesize rankIdLblLeft=_rankIdLblLeft;
@property(retain, nonatomic) QLSImageView *rankIdBgImgLeft; // @synthesize rankIdBgImgLeft=_rankIdBgImgLeft;
@property(retain, nonatomic) QLSImageView *leftAdImg; // @synthesize leftAdImg=_leftAdImg;
@property(retain, nonatomic) UIImageView *bgImg; // @synthesize bgImg=_bgImg;
@property(retain, nonatomic) QLJCEONAScoreList *scoreList; // @synthesize scoreList=_scoreList;
- (void).cxx_destruct;
- (void)reportShowUp;
- (void)layoutSubviews;
- (void)tapClick:(id)arg1;
- (void)startLoadModel;
- (void)setObject:(id)arg1;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end
