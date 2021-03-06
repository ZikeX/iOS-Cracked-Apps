//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "FBCompleteProfileMegaphoneFooterDelegate-Protocol.h"
#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"

@class CAShapeLayer, FBCompleteProfileMegaphoneConfigurator, FBCompleteProfileMegaphoneFooter, FBCompleteProfileMegaphoneHeader, FBCompleteProfileMegaphoneQuestionView, FBMemProfileQuestion, FBUserSession, NSIndexPath, NSString, UIButton, UITableView;
@protocol FBCompleteProfileMegaphoneViewDelegate;

@interface FBCompleteProfileMegaphoneView : UIView <UITableViewDelegate, UITableViewDataSource, FBCompleteProfileMegaphoneFooterDelegate>
{
    UITableView *_megaphoneTableView;
    UIView *_shadowView;
    FBCompleteProfileMegaphoneQuestionView *_accessoryQuestionView;
    CAShapeLayer *_borderLayer;
    CAShapeLayer *_roundCorderMaskLayer;
    FBCompleteProfileMegaphoneFooter *_megaphoneTableViewFooter;
    FBMemProfileQuestion *_profileQuestion;
    NSIndexPath *_selectedInferenceRow;
    FBUserSession *_session;
    FBCompleteProfileMegaphoneConfigurator *_configurator;
    UIButton *_closeButton;
    int _state;
    id <FBCompleteProfileMegaphoneViewDelegate> _delegate;
    unsigned long long _privacyIconType;
    FBCompleteProfileMegaphoneHeader *_megaphoneTableViewHeader;
}

@property(readonly, nonatomic) FBCompleteProfileMegaphoneHeader *megaphoneTableViewHeader; // @synthesize megaphoneTableViewHeader=_megaphoneTableViewHeader;
@property(nonatomic) unsigned long long privacyIconType; // @synthesize privacyIconType=_privacyIconType;
@property(nonatomic) int state; // @synthesize state=_state;
@property(nonatomic) __weak id <FBCompleteProfileMegaphoneViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)typeaheadSelectedWithPage:(id)arg1;
@property(readonly, nonatomic) double height;
- (void)completeProfileMegaphoneFooterDidTapPrivacySelector:(id)arg1 withPrivacyButton:(id)arg2;
- (void)completeProfileMegaphoneFooterDidTapSkip:(id)arg1;
- (void)completeProfileMegaphoneFooterDidTapSave:(id)arg1;
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForFooterInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)setProfileCompletePercentage:(id)arg1;
- (void)setProfileQuestion:(id)arg1;
- (void)layoutSubviews;
- (void)_closeMegaphone;
- (void)dealloc;
- (void)_buildCloseButton;
- (id)initWithFrame:(struct CGRect)arg1 session:(id)arg2 configurator:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

