//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TBSNSCardView.h"

@class UIImageView, UIView;

@interface TBSNSCardImageTextV : TBSNSCardView
{
    UIImageView *_image;
    UIImageView *_imageState;
    UIView *_imageBg;
}

+ (struct CGSize)getDynamicSizeBySize:(struct CGSize)arg1 andUrl:(id)arg2;
+ (struct CGSize)fixedSize;
@property(retain, nonatomic) UIView *imageBg; // @synthesize imageBg=_imageBg;
@property(retain, nonatomic) UIImageView *imageState; // @synthesize imageState=_imageState;
@property(retain, nonatomic) UIImageView *image; // @synthesize image=_image;
- (void).cxx_destruct;
- (void)reset;
- (void)setStateImage:(id)arg1;
- (void)setImageWithUrl:(id)arg1 withSize:(struct CGSize)arg2;
- (id)initWithFrame:(struct CGRect)arg1;
- (struct CGSize)cardSize;

@end
