//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SBaseComProtocol.h"

@class NSDictionary, ONEGuideReqMsg, SCreateOrderCom, SGuideRespModel;

@protocol SCreateOrderComProtocol <SBaseComProtocol>
- (void)createOrderCom:(SCreateOrderCom *)arg1 requestFailedWithInfo:(NSDictionary *)arg2;
- (void)createOrderCom:(SCreateOrderCom *)arg1 requestSucceedWithInfo:(id)arg2;

@optional
- (void)createOrderComBadDebte:(SCreateOrderCom *)arg1;
- (void)createOrderComGuideToOtherBusiness:(SCreateOrderCom *)arg1 toBid:(long long)arg2 guideInfo:(ONEGuideReqMsg *)arg3 result:(void (^)(_Bool, ONEGuideRespMsg *))arg4;
- (void)createOrderComDismissGuide:(SCreateOrderCom *)arg1;
- (void)createOrderComShowGuide:(SCreateOrderCom *)arg1 guideRespModel:(SGuideRespModel *)arg2 operateBlock:(void (^)(_Bool, SGuideRespModel *))arg3;
- (void)createOrderCom:(SCreateOrderCom *)arg1 needPerformAction:(unsigned long long)arg2 atRequestState:(unsigned long long)arg3;
- (void)createOrderCom:(SCreateOrderCom *)arg1 requestNeedPushPage:(long long)arg2 paramObject:(id)arg3 bringToFront:(_Bool)arg4;
- (void)createOrderCom:(SCreateOrderCom *)arg1 requestSucceedWithoutPushAndInfo:(id)arg2;
- (_Bool)interruptCreateOrderByNicknameAuth;
- (_Bool)interruptCreateOrderByPassengerInfo;
- (_Bool)interruptCreateOrderByPopup;
- (_Bool)interruptCreateOrderByCarpoolSeat;
- (_Bool)interruptCreateOrderByEnterprisePay;
- (_Bool)interruptCreateOrderByDynamicPrice;
@end
