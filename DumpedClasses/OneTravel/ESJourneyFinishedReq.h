//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "GPBMessage.h"

@class ESCheat, ESJourneyFeeInfo, GPBInt32Array, NSString;

@interface ESJourneyFinishedReq : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) int balanceStatus; // @dynamic balanceStatus;
@property(copy, nonatomic) NSString *balanceTip; // @dynamic balanceTip;
@property(retain, nonatomic) ESCheat *cheat; // @dynamic cheat;
@property(copy, nonatomic) NSString *commonMsg; // @dynamic commonMsg;
@property(retain, nonatomic) ESJourneyFeeInfo *feeInfo; // @dynamic feeInfo;
@property(nonatomic) _Bool hasBalanceStatus; // @dynamic hasBalanceStatus;
@property(nonatomic) _Bool hasBalanceTip; // @dynamic hasBalanceTip;
@property(nonatomic) _Bool hasCheat; // @dynamic hasCheat;
@property(nonatomic) _Bool hasCommonMsg; // @dynamic hasCommonMsg;
@property(nonatomic) _Bool hasFeeInfo; // @dynamic hasFeeInfo;
@property(nonatomic) _Bool hasMsg; // @dynamic hasMsg;
@property(nonatomic) _Bool hasMsgPTip; // @dynamic hasMsgPTip;
@property(nonatomic) _Bool hasOid; // @dynamic hasOid;
@property(nonatomic) _Bool hasPayStatus; // @dynamic hasPayStatus;
@property(nonatomic) _Bool hasRechangeFinishPriceTip; // @dynamic hasRechangeFinishPriceTip;
@property(nonatomic) _Bool hasRechangePersonalPrice; // @dynamic hasRechangePersonalPrice;
@property(nonatomic) _Bool hasRechangePriceTip; // @dynamic hasRechangePriceTip;
@property(nonatomic) _Bool hasSettlementType; // @dynamic hasSettlementType;
@property(nonatomic) _Bool hasShowWithHold; // @dynamic hasShowWithHold;
@property(nonatomic) _Bool hasWithHoldMsg; // @dynamic hasWithHoldMsg;
@property(copy, nonatomic) NSString *msg; // @dynamic msg;
@property(copy, nonatomic) NSString *msgPTip; // @dynamic msgPTip;
@property(copy, nonatomic) NSString *oid; // @dynamic oid;
@property(nonatomic) int payStatus; // @dynamic payStatus;
@property(retain, nonatomic) GPBInt32Array *paymentModesArray; // @dynamic paymentModesArray;
@property(readonly, nonatomic) unsigned long long paymentModesArray_Count; // @dynamic paymentModesArray_Count;
@property(copy, nonatomic) NSString *rechangeFinishPriceTip; // @dynamic rechangeFinishPriceTip;
@property(copy, nonatomic) NSString *rechangePersonalPrice; // @dynamic rechangePersonalPrice;
@property(copy, nonatomic) NSString *rechangePriceTip; // @dynamic rechangePriceTip;
@property(nonatomic) int settlementType; // @dynamic settlementType;
@property(copy, nonatomic) NSString *showWithHold; // @dynamic showWithHold;
@property(copy, nonatomic) NSString *withHoldMsg; // @dynamic withHoldMsg;

@end
