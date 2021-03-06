//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SDraftOrderModel.h"

@class DiDiBoardingPOIEntityModel, NSDate<Optional>, NSDictionary<Optional>, NSNumber, NSNumber<Optional>, NSString, NSString<Optional>, TRStationInfoModel<Optional>, TRWanliuComboModel<Optional>;

@interface SCOrderModel : SDraftOrderModel
{
    _Bool _canUseInsure;
    _Bool _isFromOrderRecover;
    _Bool _callcar_type;
    _Bool _isChangeDriverOrder;
    _Bool _isResendOrder;
    NSNumber *_orderType;
    NSNumber<Optional> *_scene_type;
    NSString<Optional> *_estimate_trace_id;
    NSNumber *_carLevel;
    NSString *_tip;
    NSNumber *_area;
    DiDiBoardingPOIEntityModel *_onPosition;
    NSDate<Optional> *_createOrderTime;
    NSNumber<Optional> *_isCarPool;
    NSNumber<Optional> *_carpool_show;
    NSString<Optional> *_otype;
    NSString<Optional> *_airport_id;
    NSString<Optional> *_traffic_dep_time;
    NSString<Optional> *_FlightArrcode;
    NSString<Optional> *_FlightDepcode;
    NSString<Optional> *_traffic_number;
    NSString<Optional> *_is_cip;
    NSString<Optional> *_is_traffic_insure;
    NSString<Optional> *_is_airport_guide;
    NSString<Optional> *_depart_delay_time;
    NSString<Optional> *_depart_ahead_time;
    NSString<Optional> *_order_source;
    long long _productLine;
    NSString<Optional> *_callcar_name;
    NSString<Optional> *_callcar_phone;
    NSString<Optional> *_business_submit;
    NSString<Optional> *_estimate_price;
    NSString<Optional> *_pay_type;
    NSString<Optional> *_enterprise_user;
    NSString<Optional> *_phone_protect_on;
    NSString<Optional> *_like_wait;
    NSString<Optional> *_wait_extra_price;
    NSString<Optional> *_is_region;
    NSString<Optional> *_guidance_id;
    NSString<Optional> *_custom_feature;
    NSDictionary<Optional> *_transData;
    NSString *_pool_seat;
    NSString *_xActivity_id;
    NSString *_xActivity_type;
    TRWanliuComboModel<Optional> *_combo_info;
    NSNumber<Optional> *_is_station;
    TRStationInfoModel<Optional> *_station_info;
    NSString<Optional> *_extraInfo;
    NSString *_changeDriverMsg;
    NSString<Optional> *_source;
    NSString<Optional> *_guide_scene;
    NSString<Optional> *_source_scene;
    NSString<Optional> *_source_product;
    NSString<Optional> *_guide_api_info;
    NSString<Optional> *_athena_params;
    NSString<Optional> *_specialPoiid;
    NSString<Optional> *_specialPoiName;
    NSString<Optional> *_specialPoiSceneType;
    NSString<Optional> *_specialHistory;
    NSString<Optional> *_guideState;
    NSNumber<Optional> *_combo_id;
    NSString<Optional> *_rented_info;
    NSNumber<Optional> *_too_far_order_limit;
}

@property(retain, nonatomic) NSNumber<Optional> *too_far_order_limit; // @synthesize too_far_order_limit=_too_far_order_limit;
@property(retain, nonatomic) NSString<Optional> *rented_info; // @synthesize rented_info=_rented_info;
@property(retain, nonatomic) NSNumber<Optional> *combo_id; // @synthesize combo_id=_combo_id;
@property(nonatomic) _Bool isResendOrder; // @synthesize isResendOrder=_isResendOrder;
@property(retain, nonatomic) NSString<Optional> *guideState; // @synthesize guideState=_guideState;
@property(retain, nonatomic) NSString<Optional> *specialHistory; // @synthesize specialHistory=_specialHistory;
@property(retain, nonatomic) NSString<Optional> *specialPoiSceneType; // @synthesize specialPoiSceneType=_specialPoiSceneType;
@property(retain, nonatomic) NSString<Optional> *specialPoiName; // @synthesize specialPoiName=_specialPoiName;
@property(retain, nonatomic) NSString<Optional> *specialPoiid; // @synthesize specialPoiid=_specialPoiid;
@property(copy, nonatomic) NSString<Optional> *athena_params; // @synthesize athena_params=_athena_params;
@property(copy, nonatomic) NSString<Optional> *guide_api_info; // @synthesize guide_api_info=_guide_api_info;
@property(retain, nonatomic) NSString<Optional> *source_product; // @synthesize source_product=_source_product;
@property(retain, nonatomic) NSString<Optional> *source_scene; // @synthesize source_scene=_source_scene;
@property(retain, nonatomic) NSString<Optional> *guide_scene; // @synthesize guide_scene=_guide_scene;
@property(retain, nonatomic) NSString<Optional> *source; // @synthesize source=_source;
@property(copy, nonatomic) NSString *changeDriverMsg; // @synthesize changeDriverMsg=_changeDriverMsg;
@property(nonatomic) _Bool isChangeDriverOrder; // @synthesize isChangeDriverOrder=_isChangeDriverOrder;
@property(copy, nonatomic) NSString<Optional> *extraInfo; // @synthesize extraInfo=_extraInfo;
@property(retain, nonatomic) TRStationInfoModel<Optional> *station_info; // @synthesize station_info=_station_info;
@property(retain, nonatomic) NSNumber<Optional> *is_station; // @synthesize is_station=_is_station;
@property(retain, nonatomic) TRWanliuComboModel<Optional> *combo_info; // @synthesize combo_info=_combo_info;
@property(copy, nonatomic) NSString *xActivity_type; // @synthesize xActivity_type=_xActivity_type;
@property(copy, nonatomic) NSString *xActivity_id; // @synthesize xActivity_id=_xActivity_id;
@property(copy, nonatomic) NSString *pool_seat; // @synthesize pool_seat=_pool_seat;
@property(retain, nonatomic) NSDictionary<Optional> *transData; // @synthesize transData=_transData;
@property(retain, nonatomic) NSString<Optional> *custom_feature; // @synthesize custom_feature=_custom_feature;
@property(retain, nonatomic) NSString<Optional> *guidance_id; // @synthesize guidance_id=_guidance_id;
@property(copy, nonatomic) NSString<Optional> *is_region; // @synthesize is_region=_is_region;
@property(copy, nonatomic) NSString<Optional> *wait_extra_price; // @synthesize wait_extra_price=_wait_extra_price;
@property(copy, nonatomic) NSString<Optional> *like_wait; // @synthesize like_wait=_like_wait;
@property(copy, nonatomic) NSString<Optional> *phone_protect_on; // @synthesize phone_protect_on=_phone_protect_on;
@property(copy, nonatomic) NSString<Optional> *enterprise_user; // @synthesize enterprise_user=_enterprise_user;
@property(copy, nonatomic) NSString<Optional> *pay_type; // @synthesize pay_type=_pay_type;
@property(copy, nonatomic) NSString<Optional> *estimate_price; // @synthesize estimate_price=_estimate_price;
@property(copy, nonatomic) NSString<Optional> *business_submit; // @synthesize business_submit=_business_submit;
@property(copy, nonatomic) NSString<Optional> *callcar_phone; // @synthesize callcar_phone=_callcar_phone;
@property(copy, nonatomic) NSString<Optional> *callcar_name; // @synthesize callcar_name=_callcar_name;
@property(nonatomic) _Bool callcar_type; // @synthesize callcar_type=_callcar_type;
@property(nonatomic) long long productLine; // @synthesize productLine=_productLine;
@property(copy, nonatomic) NSString<Optional> *order_source; // @synthesize order_source=_order_source;
@property(nonatomic) _Bool isFromOrderRecover; // @synthesize isFromOrderRecover=_isFromOrderRecover;
@property(copy, nonatomic) NSString<Optional> *depart_ahead_time; // @synthesize depart_ahead_time=_depart_ahead_time;
@property(copy, nonatomic) NSString<Optional> *depart_delay_time; // @synthesize depart_delay_time=_depart_delay_time;
@property(retain, nonatomic) NSString<Optional> *is_airport_guide; // @synthesize is_airport_guide=_is_airport_guide;
@property(nonatomic) _Bool canUseInsure; // @synthesize canUseInsure=_canUseInsure;
@property(copy, nonatomic) NSString<Optional> *is_traffic_insure; // @synthesize is_traffic_insure=_is_traffic_insure;
@property(copy, nonatomic) NSString<Optional> *is_cip; // @synthesize is_cip=_is_cip;
@property(copy, nonatomic) NSString<Optional> *traffic_number; // @synthesize traffic_number=_traffic_number;
@property(copy, nonatomic) NSString<Optional> *FlightDepcode; // @synthesize FlightDepcode=_FlightDepcode;
@property(copy, nonatomic) NSString<Optional> *FlightArrcode; // @synthesize FlightArrcode=_FlightArrcode;
@property(copy, nonatomic) NSString<Optional> *traffic_dep_time; // @synthesize traffic_dep_time=_traffic_dep_time;
@property(copy, nonatomic) NSString<Optional> *airport_id; // @synthesize airport_id=_airport_id;
@property(copy, nonatomic) NSString<Optional> *otype; // @synthesize otype=_otype;
@property(retain, nonatomic) NSNumber<Optional> *carpool_show; // @synthesize carpool_show=_carpool_show;
@property(retain, nonatomic) NSNumber<Optional> *isCarPool; // @synthesize isCarPool=_isCarPool;
@property(retain, nonatomic) NSDate<Optional> *createOrderTime; // @synthesize createOrderTime=_createOrderTime;
@property(retain, nonatomic) DiDiBoardingPOIEntityModel *onPosition; // @synthesize onPosition=_onPosition;
@property(retain, nonatomic) NSNumber *area; // @synthesize area=_area;
@property(copy, nonatomic) NSString *tip; // @synthesize tip=_tip;
@property(retain, nonatomic) NSNumber *carLevel; // @synthesize carLevel=_carLevel;
@property(retain, nonatomic) NSString<Optional> *estimate_trace_id; // @synthesize estimate_trace_id=_estimate_trace_id;
@property(retain, nonatomic) NSNumber<Optional> *scene_type; // @synthesize scene_type=_scene_type;
@property(retain, nonatomic) NSNumber *orderType; // @synthesize orderType=_orderType;
- (void).cxx_destruct;
- (id)toAddress;
- (id)fromAddress;
- (void)setToPoiModel:(id)arg1;
- (id)toPoiModel;
- (void)setFromPoiModel:(id)arg1;
- (id)fromPoiModel;
- (id)initWithONE:(id)arg1;

@end

