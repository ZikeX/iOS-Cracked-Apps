//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "JceObjectV2.h"

@class NSDictionary, NSString;

@interface QLJCELiveWaitPollRequest : JceObjectV2
{
    int jcev2_p_2_o_requestType;
    NSString *jcev2_p_0_r_pollDataKey;
    NSString *jcev2_p_1_o_pollContext;
    NSString *jcev2_p_3_o_waitSessionKey;
    NSDictionary *jcev2_p_4_o_curSupportMap__b0x9i_M09ONSStringONSNumber;
}

+ (id)jceType;
+ (void)initialize;
@property(retain, nonatomic, getter=jce_curSupportMap, setter=setJce_curSupportMap:) NSDictionary *jcev2_p_4_o_curSupportMap__b0x9i_M09ONSStringONSNumber; // @synthesize jcev2_p_4_o_curSupportMap__b0x9i_M09ONSStringONSNumber;
@property(retain, nonatomic, getter=jce_waitSessionKey, setter=setJce_waitSessionKey:) NSString *jcev2_p_3_o_waitSessionKey; // @synthesize jcev2_p_3_o_waitSessionKey;
@property(nonatomic, getter=jce_requestType, setter=setJce_requestType:) int jcev2_p_2_o_requestType; // @synthesize jcev2_p_2_o_requestType;
@property(retain, nonatomic, getter=jce_pollContext, setter=setJce_pollContext:) NSString *jcev2_p_1_o_pollContext; // @synthesize jcev2_p_1_o_pollContext;
@property(retain, nonatomic, getter=jce_pollDataKey, setter=setJce_pollDataKey:) NSString *jcev2_p_0_r_pollDataKey; // @synthesize jcev2_p_0_r_pollDataKey;
- (void).cxx_destruct;
- (id)init;

@end
