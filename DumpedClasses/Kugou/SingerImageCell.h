//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "KugouGridViewCell.h"

#import "UIGestureRecognizerDelegate.h"

@class KGSingerImgBox, NSString, UIImageView;

@interface SingerImageCell : KugouGridViewCell <UIGestureRecognizerDelegate>
{
    _Bool _selected;
    UIImageView *_ImgView;
    UIImageView *_selectedImg;
    KGSingerImgBox *_box;
}

@property(retain, nonatomic) KGSingerImgBox *box; // @synthesize box=_box;
@property(nonatomic) _Bool selected; // @synthesize selected=_selected;
@property(retain, nonatomic) UIImageView *selectedImg; // @synthesize selectedImg=_selectedImg;
@property(retain, nonatomic) UIImageView *ImgView; // @synthesize ImgView=_ImgView;
- (void).cxx_destruct;
- (void)initcell;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
