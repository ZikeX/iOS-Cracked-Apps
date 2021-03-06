//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "QYCommonViewController.h"

#import "IQYDataLoadManagerDelegate-Protocol.h"
#import "QYWalletInputPaymentPasswordViewControllerProtocol-Protocol.h"

@class IQYBankCardInfo, IQYCardUnbindManager, NSString, UIActivityIndicatorView, UIControl, UIImageView, UILabel;

@interface QYWalletBankCardDetailViewController : QYCommonViewController <IQYDataLoadManagerDelegate, QYWalletInputPaymentPasswordViewControllerProtocol>
{
    CDUnknownBlockType _unbindSucessBlock;
    CDUnknownBlockType _unbindFailedBlock;
    UIImageView *_cardIcon;
    UILabel *_cardName;
    UILabel *_cardType;
    UILabel *_cardNum;
    UIControl *_unBindCtrl;
    UIActivityIndicatorView *_activityView;
    IQYCardUnbindManager *_cardUnbindManager;
    IQYBankCardInfo *_cardInfo;
}

@property(retain, nonatomic) IQYBankCardInfo *cardInfo; // @synthesize cardInfo=_cardInfo;
@property(retain, nonatomic) IQYCardUnbindManager *cardUnbindManager; // @synthesize cardUnbindManager=_cardUnbindManager;
@property(retain, nonatomic) UIActivityIndicatorView *activityView; // @synthesize activityView=_activityView;
@property(retain, nonatomic) UIControl *unBindCtrl; // @synthesize unBindCtrl=_unBindCtrl;
@property(retain, nonatomic) UILabel *cardNum; // @synthesize cardNum=_cardNum;
@property(retain, nonatomic) UILabel *cardType; // @synthesize cardType=_cardType;
@property(retain, nonatomic) UILabel *cardName; // @synthesize cardName=_cardName;
@property(retain, nonatomic) UIImageView *cardIcon; // @synthesize cardIcon=_cardIcon;
@property(copy, nonatomic) CDUnknownBlockType unbindFailedBlock; // @synthesize unbindFailedBlock=_unbindFailedBlock;
@property(copy, nonatomic) CDUnknownBlockType unbindSucessBlock; // @synthesize unbindSucessBlock=_unbindSucessBlock;
- (void).cxx_destruct;
- (void)didReceiveMemoryWarning;
- (void)getPaymentPasswordVerificationState:(_Bool)arg1 passwordToken:(id)arg2;
- (void)dataLoadManagerFailed:(id)arg1;
- (void)dataLoadManagerFinished:(id)arg1;
- (void)hiddenLoadingActivityView;
- (void)showLoadingActivityView;
- (void)hidenUnbindView;
- (void)showUnbindView;
- (void)managerBankCardAction:(id)arg1;
- (void)createUIWithCardInfo:(id)arg1;
- (void)viewDidLoad;
- (id)initBankCardDetailViewController:(id)arg1;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

