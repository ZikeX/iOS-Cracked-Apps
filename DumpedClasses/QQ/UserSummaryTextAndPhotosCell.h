//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UserSummarySimpleTextCell.h"

@class NSMutableArray;

@interface UserSummaryTextAndPhotosCell : UserSummarySimpleTextCell
{
    NSMutableArray *_imageUrlArray;
    NSMutableArray *_imageViewArray;
    NSMutableArray *_urlArray;
    int _totalCount;
}

@property(nonatomic) int totalCount; // @synthesize totalCount=_totalCount;
@property(retain, nonatomic) NSMutableArray *imageViewArray; // @synthesize imageViewArray=_imageViewArray;
@property(retain, nonatomic) NSMutableArray *imageUrlArray; // @synthesize imageUrlArray=_imageUrlArray;
- (void).cxx_destruct;
- (void)requestFinished:(id)arg1;
- (void)layoutSubviews;
- (void)setSumUrlArray:(id)arg1;
- (void)dealloc;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end
