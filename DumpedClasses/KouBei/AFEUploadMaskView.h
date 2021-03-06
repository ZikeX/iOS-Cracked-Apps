//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSMutableArray, UIImageView;

@interface AFEUploadMaskView : UIView
{
    _Bool _isBusy;
    UIView *_view;
    UIImageView *_mask1;
    UIImageView *_mask2;
    UIImageView *_mask3;
    UIImageView *_mask4;
    UIImageView *_mask5;
    UIImageView *_mask6;
    UIImageView *_mask7;
    UIImageView *_mask8;
    UIImageView *_mask9;
    UIImageView *_mask10;
    NSMutableArray *_showPieces;
    NSMutableArray *_hiddenPieces;
    long long _currentIndex;
}

@property(nonatomic) _Bool isBusy; // @synthesize isBusy=_isBusy;
@property(nonatomic) long long currentIndex; // @synthesize currentIndex=_currentIndex;
@property(retain, nonatomic) NSMutableArray *hiddenPieces; // @synthesize hiddenPieces=_hiddenPieces;
@property(retain, nonatomic) NSMutableArray *showPieces; // @synthesize showPieces=_showPieces;
@property(nonatomic) __weak UIImageView *mask10; // @synthesize mask10=_mask10;
@property(nonatomic) __weak UIImageView *mask9; // @synthesize mask9=_mask9;
@property(nonatomic) __weak UIImageView *mask8; // @synthesize mask8=_mask8;
@property(nonatomic) __weak UIImageView *mask7; // @synthesize mask7=_mask7;
@property(nonatomic) __weak UIImageView *mask6; // @synthesize mask6=_mask6;
@property(nonatomic) __weak UIImageView *mask5; // @synthesize mask5=_mask5;
@property(nonatomic) __weak UIImageView *mask4; // @synthesize mask4=_mask4;
@property(nonatomic) __weak UIImageView *mask3; // @synthesize mask3=_mask3;
@property(nonatomic) __weak UIImageView *mask2; // @synthesize mask2=_mask2;
@property(nonatomic) __weak UIImageView *mask1; // @synthesize mask1=_mask1;
@property(retain, nonatomic) UIView *view; // @synthesize view=_view;
- (void).cxx_destruct;
- (void)stopUploading;
- (void)beginUploading;
- (void)setBackgroundImage:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

