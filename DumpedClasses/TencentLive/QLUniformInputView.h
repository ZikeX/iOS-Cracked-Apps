//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "QLBaseInputView.h"

@class NSMutableDictionary, UIColor;

@interface QLUniformInputView : QLBaseInputView
{
    _Bool _keyboardDidShow;
    _Bool _isSwitchingStateMachineStatus;
    NSMutableDictionary *_stateTaskMap;
    NSMutableDictionary *_stateMachine;
    NSMutableDictionary *_sourcesMgrCenter;
    long long _curStateMachineStatus;
    long long _initialStateMachineStatus__;
    id _owner;
    id <QLUniformInputKeyBoardStateJumpProtocal> _stateMachineListener;
    id <QLUniformInputKeyBoardDressUpVisitorProtocal> _dressUpVisitor;
    id <QLUniformInputKeyboardNotifyDealProtocal> _notifyDealer;
    id <QLUniformInputKeyBoardParamSetProtocal> _paramSetDelegate;
    id <QLUniformInputKeyBoardSourceProviderProtocal> _sourceProvider;
    CDUnknownBlockType _outerUIAddBlock;
    CDUnknownBlockType _outerCleanBlock;
    UIColor *_inputTextViewBgColor;
    double _preActionTimestamp;
}

+ (id)sharedInstance;
+ (id)customUIHashcodeFor:(id)arg1 withKeyState:(long long)arg2;
+ (void)dismiss;
+ (void)show:(id)arg1 content:(id)arg2 msgid:(id)arg3 delegate:(id)arg4;
+ (_Bool)readyToWork;
+ (void)configCustomInputViewWithKeyBoardOwner:(id)arg1;
@property(nonatomic) double preActionTimestamp; // @synthesize preActionTimestamp=_preActionTimestamp;
@property(nonatomic) _Bool isSwitchingStateMachineStatus; // @synthesize isSwitchingStateMachineStatus=_isSwitchingStateMachineStatus;
@property(nonatomic) _Bool keyboardDidShow; // @synthesize keyboardDidShow=_keyboardDidShow;
@property(retain, nonatomic) UIColor *inputTextViewBgColor; // @synthesize inputTextViewBgColor=_inputTextViewBgColor;
@property(copy, nonatomic) CDUnknownBlockType outerCleanBlock; // @synthesize outerCleanBlock=_outerCleanBlock;
@property(copy, nonatomic) CDUnknownBlockType outerUIAddBlock; // @synthesize outerUIAddBlock=_outerUIAddBlock;
@property(nonatomic) __weak id <QLUniformInputKeyBoardSourceProviderProtocal> sourceProvider; // @synthesize sourceProvider=_sourceProvider;
@property(nonatomic) __weak id <QLUniformInputKeyBoardParamSetProtocal> paramSetDelegate; // @synthesize paramSetDelegate=_paramSetDelegate;
@property(nonatomic) __weak id <QLUniformInputKeyboardNotifyDealProtocal> notifyDealer; // @synthesize notifyDealer=_notifyDealer;
@property(nonatomic) __weak id <QLUniformInputKeyBoardDressUpVisitorProtocal> dressUpVisitor; // @synthesize dressUpVisitor=_dressUpVisitor;
@property(nonatomic) __weak id <QLUniformInputKeyBoardStateJumpProtocal> stateMachineListener; // @synthesize stateMachineListener=_stateMachineListener;
@property(nonatomic) __weak id owner; // @synthesize owner=_owner;
@property(nonatomic) long long initialStateMachineStatus__; // @synthesize initialStateMachineStatus__=_initialStateMachineStatus__;
@property(nonatomic) long long curStateMachineStatus; // @synthesize curStateMachineStatus=_curStateMachineStatus;
@property(retain, nonatomic) NSMutableDictionary *sourcesMgrCenter; // @synthesize sourcesMgrCenter=_sourcesMgrCenter;
@property(retain, nonatomic) NSMutableDictionary *stateMachine; // @synthesize stateMachine=_stateMachine;
@property(retain, nonatomic) NSMutableDictionary *stateTaskMap; // @synthesize stateTaskMap=_stateTaskMap;
- (void).cxx_destruct;
- (void)scrollViewDidScroll:(id)arg1;
- (_Bool)shouldDealWithNotify:(id)arg1;
- (void)alertViewWillShowNotification:(id)arg1;
- (void)keyboardDidHideNotification:(id)arg1;
- (void)keyboardWillHideNotification:(id)arg1;
- (struct CGRect)keyboardEndRectFromUIKeyboardShowNoti:(id)arg1;
- (void)keyboardDidShowNotification:(id)arg1;
- (void)keyboardWillShowNotification:(id)arg1;
- (void)textViewDidEndEditing:(id)arg1;
- (void)textViewDidBeginEditing:(id)arg1;
- (void)didPressSendButtonAction:(id)arg1;
- (id)keyboardInferiorToLowerBoundPromptStr;
- (id)keyboardExceedToUpperBoundPromptStr;
- (long long)contentLengthLowerBound;
- (long long)contentLengthUpperBound;
- (_Bool)checkInputContent;
- (void)applyExtendLayoutSubviews;
- (void)handleSingleTap;
- (void)didTapMaskView;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)templateViewInSourceCenter:(id)arg1 stateKey:(long long)arg2;
- (void)setMaskTo:(id)arg1 byRoundingCorners:(unsigned long long)arg2;
- (void)inviteVisitorToDressUp:(id)arg1;
- (void)setCustomInputView:(id)arg1;
- (void)setInputTextViewBackground:(id)arg1;
- (void)showKeyboardCaret:(_Bool)arg1;
- (void)decorateInputViewForState:(long long)arg1;
- (long long)setInitialStateMachineStatus:(long long)arg1;
- (_Bool)curStateMachineStatusIsValid;
- (_Bool)stateKeyValidCheck:(id)arg1;
- (void)removeOuterUIBlock;
- (void)resetInitialRespondMarker;
- (void)resetInitialTemplateViews;
- (void)resetInitialStateMachine;
- (void)resetInitialStatus;
- (void)stateMachineStepNextWithActionSender:(id)arg1;
- (void)stateMachineStepNextToState:(long long)arg1;
- (void)stateMachineStepNextFromState:(long long)arg1;
- (void)configSourceForState:(long long)arg1;

@end
