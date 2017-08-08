//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MQQBaseViewController.h"

#import "UIScrollViewDelegate-Protocol.h"

@class MQQAsset, MQQPHCProgressView, MQQPHCReduceTagView, NSString, UIColor, UIImage, UIImageView, UILabel, UINavigationController, UIScrollView, UIView;
@protocol MQQPHCBrowserViewControllerDelegate;

@interface MQQPHCBrowserViewController : MQQBaseViewController <UIScrollViewDelegate>
{
    UIView *_contentView;
    UIView *_inputView;
    UIScrollView *_inputScollView;
    UILabel *_originalLabel;
    UIImageView *_originalImageView;
    UIScrollView *_originalScrollView;
    MQQPHCProgressView *_originalProgressView;
    UILabel *_compressionLabel;
    MQQPHCReduceTagView *_compressionSaveTagView;
    UIImageView *_compressionImageView;
    UIScrollView *_compressionScrollView;
    MQQPHCProgressView *_compressionProgressView;
    UIView *_operationTipView;
    long long _imageSpaceSize;
    double _imageScale;
    struct CGSize _imageSize;
    _Bool _needLoadOriginal;
    _Bool _hasCompressed;
    id <MQQPHCBrowserViewControllerDelegate> _delegate;
    MQQAsset *_asset;
    UIImage *_image;
    UINavigationController *_navController;
    UIColor *_preNavigationBarBackground;
    UIImage *_preNavigationBarImage;
}

@property(retain, nonatomic) UIImage *preNavigationBarImage; // @synthesize preNavigationBarImage=_preNavigationBarImage;
@property(retain, nonatomic) UIColor *preNavigationBarBackground; // @synthesize preNavigationBarBackground=_preNavigationBarBackground;
@property(retain, nonatomic) UINavigationController *navController; // @synthesize navController=_navController;
@property(retain, nonatomic) UIImage *image; // @synthesize image=_image;
@property(retain, nonatomic) MQQAsset *asset; // @synthesize asset=_asset;
@property(nonatomic) id <MQQPHCBrowserViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)scrollViewDidScroll:(id)arg1;
- (void)scrollViewDidZoom:(id)arg1;
- (id)viewForZoomingInScrollView:(id)arg1;
- (void)tapGesture:(id)arg1;
- (void)showOperationTip;
- (void)createContentViewsInClipsViewWithFrame:(struct CGRect)arg1 block:(CDUnknownBlockType)arg2;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)dealloc;
- (id)initWithAsset:(id)arg1 size:(long long)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
