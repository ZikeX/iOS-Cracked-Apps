//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UICollectionViewCell.h"

@class ESPEntryInfo, UIImageView;

@interface ESPBigSaleEntryTemplateCell : UICollectionViewCell
{
    ESPEntryInfo *_entryInfo;
    UIImageView *_entryImageView;
}

+ (double)cellHeight;
@property(retain, nonatomic) UIImageView *entryImageView; // @synthesize entryImageView=_entryImageView;
@property(retain, nonatomic) ESPEntryInfo *entryInfo; // @synthesize entryInfo=_entryInfo;
- (void).cxx_destruct;
- (void)tapEntryImageView:(id)arg1;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

