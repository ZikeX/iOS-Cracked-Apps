//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UICollectionViewCell.h"

@class UIImageView;

@interface CTGalleryThumbnailCell : UICollectionViewCell
{
    UIImageView *_imageView;
    id <CTImageItem> _model;
}

@property(retain, nonatomic) id <CTImageItem> model; // @synthesize model=_model;
@property(nonatomic) __weak UIImageView *imageView; // @synthesize imageView=_imageView;
- (void).cxx_destruct;
- (struct CGSize)cellSize;
- (void)setupData:(id)arg1;

@end
