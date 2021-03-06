//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class NSString, UIImageView;

@interface FALCImageNumberView : UIView
{
    UIImageView *_XimageView;
    long long _number;
    NSString *_imageNamePrefix;
}

@property(retain, nonatomic) NSString *imageNamePrefix; // @synthesize imageNamePrefix=_imageNamePrefix;
@property(nonatomic) long long number; // @synthesize number=_number;
@property(retain, nonatomic) UIImageView *XimageView; // @synthesize XimageView=_XimageView;
- (void).cxx_destruct;
- (void)addNumberImageViewWithNumber:(long long)arg1 beginX:(double)arg2 imageNamePrefix:(id)arg3 imageScale:(double)arg4;
- (void)setImageNamePrefixWithNumType:(unsigned long long)arg1;
- (void)renewViewWithNumber:(long long)arg1 numberType:(unsigned long long)arg2 imageScale:(double)arg3;
- (void)renewViewWithNumber:(long long)arg1 numberType:(unsigned long long)arg2;
- (void)copyWithNumberView:(id)arg1;
- (void)configSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

