//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class NSArray, NSString;

@interface OMGActionSheetView : UIView
{
    UIView *_backView;
    UIView *_actionSheetView;
    double _actionSheetHeight;
    _Bool _isShow;
    _Bool _autoDismissWhenClickButton;
    NSString *_title;
    NSString *_cancelButtonTitle;
    NSString *_destructiveButtonTitle;
    NSArray *_otherButtonTitles;
    NSArray *_otherButtonImages;
    NSArray *_otherButtonBadges;
    NSArray *_otherButtonTags;
    CDUnknownBlockType _selectRowBlock;
    CDUnknownBlockType _cancelBlock;
}

+ (id)showActionSheetWithTitle:(id)arg1 cancelButtonTitle:(id)arg2 destructiveButtonTitle:(id)arg3 otherButtonTitles:(id)arg4 otherButtonImages:(id)arg5 otherButtonBadges:(id)arg6 otherButtonTags:(id)arg7 handler:(CDUnknownBlockType)arg8 cancel:(CDUnknownBlockType)arg9;
@property(copy, nonatomic) CDUnknownBlockType cancelBlock; // @synthesize cancelBlock=_cancelBlock;
@property(copy, nonatomic) CDUnknownBlockType selectRowBlock; // @synthesize selectRowBlock=_selectRowBlock;
@property(copy, nonatomic) NSArray *otherButtonTags; // @synthesize otherButtonTags=_otherButtonTags;
@property(copy, nonatomic) NSArray *otherButtonBadges; // @synthesize otherButtonBadges=_otherButtonBadges;
@property(copy, nonatomic) NSArray *otherButtonImages; // @synthesize otherButtonImages=_otherButtonImages;
@property(copy, nonatomic) NSArray *otherButtonTitles; // @synthesize otherButtonTitles=_otherButtonTitles;
@property(copy, nonatomic) NSString *destructiveButtonTitle; // @synthesize destructiveButtonTitle=_destructiveButtonTitle;
@property(copy, nonatomic) NSString *cancelButtonTitle; // @synthesize cancelButtonTitle=_cancelButtonTitle;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(nonatomic) _Bool autoDismissWhenClickButton; // @synthesize autoDismissWhenClickButton=_autoDismissWhenClickButton;
- (void).cxx_destruct;
- (void)dismissWithCompletion:(CDUnknownBlockType)arg1;
- (void)showInView:(id)arg1 animated:(_Bool)arg2;
- (void)didSelectAction:(id)arg1;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (id)initWithTitle:(id)arg1 cancelButtonTitle:(id)arg2 destructiveButtonTitle:(id)arg3 otherButtonTitles:(id)arg4 otherButtonImages:(id)arg5 otherButtonBadges:(id)arg6 otherButtonTags:(id)arg7 handler:(CDUnknownBlockType)arg8 cancel:(CDUnknownBlockType)arg9;
- (id)init;
- (void)dealloc;

@end
