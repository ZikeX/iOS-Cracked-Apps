//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "UITextFieldDelegate.h"

@class FMItemPostCommentView, FMItemPostPriceView, NSString;

@interface FMItemPostCommentFullView : UIView <UITextFieldDelegate>
{
    FMItemPostCommentView *_postCommentView;
    FMItemPostPriceView *_postPriceView;
    UIView *_containerView;
}

@property(readonly, nonatomic) UIView *containerView; // @synthesize containerView=_containerView;
@property(readonly, nonatomic) FMItemPostPriceView *postPriceView; // @synthesize postPriceView=_postPriceView;
@property(readonly, nonatomic) FMItemPostCommentView *postCommentView; // @synthesize postCommentView=_postCommentView;
- (void).cxx_destruct;
- (void)forceEndEditing;
- (void)growingTextViewDidEndEditing:(id)arg1;
- (void)textFieldDidEndEditing:(id)arg1;
- (void)__resignFirstResponder;
- (void)__initGestureRecognizer;
- (void)setPlaceHolderForPriceView:(id)arg1;
- (void)setKeyboardForUser:(_Bool)arg1;
- (void)__initPostPriceView:(struct CGRect)arg1;
- (void)__initPostCommentView:(struct CGRect)arg1;
- (void)__initContainerView:(struct CGRect)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

