//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class MQQAsset, MQQSystemAlbumViewController, NSArray;

@protocol MQQSystemAlbumViewControllerDelegate <NSObject>

@optional
- (void)systemAlbumViewController:(MQQSystemAlbumViewController *)arg1 didClickWithAsset:(MQQAsset *)arg2;
- (void)systemAlbumViewController:(MQQSystemAlbumViewController *)arg1 didSelectAssetArray:(NSArray *)arg2;
- (_Bool)systemAlbumViewController:(MQQSystemAlbumViewController *)arg1 shouldSelectAsset:(MQQAsset *)arg2;
- (void)systemAlbumViewControllerDidCancel:(MQQSystemAlbumViewController *)arg1;
@end
