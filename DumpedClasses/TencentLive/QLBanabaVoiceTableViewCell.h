//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "QLBanabaTableViewCell.h"

@class QLCommonVoiceView, QLHTMLFontLabel;

@interface QLBanabaVoiceTableViewCell : QLBanabaTableViewCell
{
    QLCommonVoiceView *_voiceView;
    QLHTMLFontLabel *_nameLabel;
}

+ (id)getVoiceData:(id)arg1;
+ (double)cellHeightWithBanabaItem:(id)arg1;
- (void).cxx_destruct;
- (void)responseUserClick:(id)arg1;
- (struct CGSize)getContentSize;
- (void)layoutSubviews;
- (void)setBanabaItem:(id)arg1;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end
