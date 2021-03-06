//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "CAAnimationDelegate-Protocol.h"

@class NSMutableArray, NSString, UILabel, UIWindow;

@interface MQQAlertView : UIView <CAAnimationDelegate>
{
    id _delegate;
    _Bool _autoDismissWhenEnteringBackground;
    NSString *_title;
    NSString *_message;
    long long _cancelButtonIndex;
    long long _firstOtherButtonIndex;
    long long _clickedButtonIndex;
    UIWindow *_dimWindow;
    UILabel *_titleLabel;
    UILabel *_messageLabel;
    NSMutableArray *_buttonArray;
    _Bool _dismissed;
    id _userInfo;
}

+ (id)animationForDismissingAlertView;
+ (id)animationForDismissingDimWindow;
+ (id)animationForShowingAlertView;
+ (id)animationForShowingDimWindow;
+ (void)clearDelegate:(id)arg1;
@property(retain, nonatomic) id userInfo; // @synthesize userInfo=_userInfo;
@property(retain, nonatomic) NSMutableArray *buttonArray; // @synthesize buttonArray=_buttonArray;
@property(retain, nonatomic) UILabel *messageLabel; // @synthesize messageLabel=_messageLabel;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UIWindow *dimWindow; // @synthesize dimWindow=_dimWindow;
@property(readonly, nonatomic) long long firstOtherButtonIndex; // @synthesize firstOtherButtonIndex=_firstOtherButtonIndex;
@property(readonly, nonatomic) long long cancelButtonIndex; // @synthesize cancelButtonIndex=_cancelButtonIndex;
@property(copy, nonatomic) NSString *message; // @synthesize message=_message;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(nonatomic) _Bool autoDismissWhenEnteringBackground; // @synthesize autoDismissWhenEnteringBackground=_autoDismissWhenEnteringBackground;
@property(nonatomic) id delegate; // @synthesize delegate=_delegate;
- (void)buttonClicked:(id)arg1;
- (void)activeTextField;
- (void)cancelEventsForView:(id)arg1;
- (void)animationDidStop:(id)arg1 finished:(_Bool)arg2;
- (void)clearDelegateAndDismiss;
- (void)setAutoDismissWhenEnteringBackground;
- (void)didDismissWithButtonIndex:(long long)arg1;
- (void)willDismissWithButtonIndex:(long long)arg1;
- (void)dismissWithClickedButtonIndex:(long long)arg1 animated:(_Bool)arg2;
- (void)showImmediately;
- (void)show;
- (id)buttonAtIndex:(long long)arg1;
- (id)buttonTitleAtIndex:(long long)arg1;
@property(readonly, nonatomic) unsigned long long numberOfButtons;
- (void)layoutMainView;
- (void)layoutButtons;
- (void)addSeparatorLineOnButton:(id)arg1 extensional:(_Bool)arg2;
- (void)loadMessageLabel:(id)arg1;
- (void)loadTitleLabel:(id)arg1;
- (void)loadMainView;
- (long long)addButtonWithTitle:(id)arg1;
- (void)loadDimWindow;
- (void)dealloc;
- (id)_initWithTitle:(id)arg1 message:(id)arg2 delegate:(id)arg3 cancelButtonTitle:(id)arg4 otherButtonTitles:(id)arg5 valList:(char *)arg6;
- (id)initWithTitle:(id)arg1 message:(id)arg2 delegate:(id)arg3 cancelButtonTitle:(id)arg4 otherButtonTitles:(id)arg5;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

