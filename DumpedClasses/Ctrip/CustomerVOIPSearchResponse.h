//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CTBusinessBean.h"

@class NSString, NetQuantitySettingModel;

@interface CustomerVOIPSearchResponse : CTBusinessBean
{
    _Bool _isOpenVOIP;
    _Bool _isOpenRTCP;
    _Bool _isServerDecision;
    _Bool _isVoIPCall;
    NSString *_JSONString;
    NSString *_voipID;
    NSString *_voipPassword;
    NSString *_callToNumber;
    long long _codecID;
    NetQuantitySettingModel *_netQuantitySettingModel;
    long long _version;
}

@property(nonatomic) long long version; // @synthesize version=_version;
@property(nonatomic) _Bool isVoIPCall; // @synthesize isVoIPCall=_isVoIPCall;
@property(retain, nonatomic) NetQuantitySettingModel *netQuantitySettingModel; // @synthesize netQuantitySettingModel=_netQuantitySettingModel;
@property(nonatomic) _Bool isServerDecision; // @synthesize isServerDecision=_isServerDecision;
@property(nonatomic) long long codecID; // @synthesize codecID=_codecID;
@property(nonatomic) _Bool isOpenRTCP; // @synthesize isOpenRTCP=_isOpenRTCP;
@property(copy, nonatomic) NSString *callToNumber; // @synthesize callToNumber=_callToNumber;
@property(copy, nonatomic) NSString *voipPassword; // @synthesize voipPassword=_voipPassword;
@property(copy, nonatomic) NSString *voipID; // @synthesize voipID=_voipID;
@property(nonatomic) _Bool isOpenVOIP; // @synthesize isOpenVOIP=_isOpenVOIP;
@property(copy, nonatomic) NSString *JSONString; // @synthesize JSONString=_JSONString;
- (void).cxx_destruct;
- (id)getAnnotationArray;
- (id)init;

@end
