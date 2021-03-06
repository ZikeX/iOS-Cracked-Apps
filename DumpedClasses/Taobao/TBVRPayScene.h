//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TBVRBaseScene.h"

#import "AlipayVRDelegate.h"
#import "TBVRPayNoPwdCenterWingNodeDelegate.h"
#import "TBVRPayPwdCenterWingNodeDelegate.h"

@class NSDictionary, NSString, TBVRPayLeftWingNode, TBVRPayLoadingNode, TBVRPayNoPwdCenterWingNode, TBVRPayPwdCenterWingNode, TBVRPayRightWingNode, VUINode;

@interface TBVRPayScene : TBVRBaseScene <AlipayVRDelegate, TBVRPayPwdCenterWingNodeDelegate, TBVRPayNoPwdCenterWingNodeDelegate>
{
    _Bool _needAutoSelect;
    _Bool _pwdSubmitted;
    _Bool _hasInput;
    NSString *_signString;
    VUINode *_mainNode;
    TBVRPayPwdCenterWingNode *_centerPwdNode;
    TBVRPayNoPwdCenterWingNode *_centerNoPwdNode;
    TBVRPayLeftWingNode *_leftNode;
    TBVRPayRightWingNode *_rightNode;
    TBVRPayLoadingNode *_launchNode;
    NSDictionary *_currentChannelData;
    unsigned long long _reqChannelIndex;
    NSString *_payment;
    NSString *_itemId;
}

@property(nonatomic) _Bool hasInput; // @synthesize hasInput=_hasInput;
@property(copy, nonatomic) NSString *itemId; // @synthesize itemId=_itemId;
@property(nonatomic) _Bool pwdSubmitted; // @synthesize pwdSubmitted=_pwdSubmitted;
@property(nonatomic) _Bool needAutoSelect; // @synthesize needAutoSelect=_needAutoSelect;
@property(copy, nonatomic) NSString *payment; // @synthesize payment=_payment;
@property(nonatomic) unsigned long long reqChannelIndex; // @synthesize reqChannelIndex=_reqChannelIndex;
@property(retain, nonatomic) NSDictionary *currentChannelData; // @synthesize currentChannelData=_currentChannelData;
@property(retain, nonatomic) TBVRPayLoadingNode *launchNode; // @synthesize launchNode=_launchNode;
@property(retain, nonatomic) TBVRPayRightWingNode *rightNode; // @synthesize rightNode=_rightNode;
@property(retain, nonatomic) TBVRPayLeftWingNode *leftNode; // @synthesize leftNode=_leftNode;
@property(retain, nonatomic) TBVRPayNoPwdCenterWingNode *centerNoPwdNode; // @synthesize centerNoPwdNode=_centerNoPwdNode;
@property(retain, nonatomic) TBVRPayPwdCenterWingNode *centerPwdNode; // @synthesize centerPwdNode=_centerPwdNode;
@property(retain, nonatomic) VUINode *mainNode; // @synthesize mainNode=_mainNode;
@property(copy, nonatomic) NSString *signString; // @synthesize signString=_signString;
- (void).cxx_destruct;
- (id)flattenHTML:(id)arg1;
- (void)dealloc;
- (void)destroyAllNodes;
- (void)exitCashier;
- (void)loadRightNodeWithData:(id)arg1;
- (void)loadLeftNodeWithData:(id)arg1;
- (void)createNoPwdCenterPanelWithData:(id)arg1;
- (void)createPwdCenterPanelWithData:(id)arg1;
- (void)loadNoPwdSceneWithData:(id)arg1;
- (void)loadPwdSceneWithData:(id)arg1;
- (void)createMainNodesWithPwd:(_Bool)arg1 data:(id)arg2;
- (void)handleUserAvatarResponseWithData:(id)arg1;
- (void)handleChannelItemsResponseWithData:(id)arg1;
- (void)startAlipayCashierWithData:(id)arg1;
- (void)vrp_finishPayWithResult:(id)arg1;
- (void)vrp_loadDialogWithMessage:(id)arg1 actNames:(id)arg2;
- (void)vrp_loadViewWithData:(id)arg1;
- (void)vrp_showLoadingWithMessage:(id)arg1;
- (void)didSelectConfirmButton;
- (void)doPay;
- (void)didReset;
- (void)didDeleteOneNumIndex:(unsigned long long)arg1 nod:(_Bool)arg2;
- (void)didInputOneNum:(id)arg1 index:(unsigned long long)arg2 nod:(_Bool)arg3;
- (void)alertTitle:(id)arg1 message:(id)arg2 buttonTitle:(id)arg3 buttonBlock:(CDUnknownBlockType)arg4;
- (void)hideLoading;
- (void)showLoadingWithMessage:(id)arg1;
- (void)buildPayNodes;
- (void)resetEnv;
- (id)sceneId;
- (void)commitCtrlEvent:(id)arg1;
- (void)commitPageEvent:(id)arg1;
- (void)loadNode;
- (id)initWithNodeTranslation:(id)arg1 towards:(id)arg2 signStr:(id)arg3 itemId:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

