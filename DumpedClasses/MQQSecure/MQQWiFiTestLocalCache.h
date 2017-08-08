//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary;
@protocol OS_dispatch_queue;

@interface MQQWiFiTestLocalCache : NSObject
{
    NSObject<OS_dispatch_queue> *_wifiTestLocalCacheQueue;
    NSDictionary *_localWiFiCacheData;
    NSDictionary *_localWiFiCacheUpdateTime;
    NSDictionary *_localSSIDs;
    long long _lastPushTime;
}

+ (id)sharedInstance;
@property(nonatomic) long long lastPushTime; // @synthesize lastPushTime=_lastPushTime;
@property(retain, nonatomic) NSDictionary *localSSIDs; // @synthesize localSSIDs=_localSSIDs;
@property(retain, nonatomic) NSDictionary *localWiFiCacheUpdateTime; // @synthesize localWiFiCacheUpdateTime=_localWiFiCacheUpdateTime;
@property(retain, nonatomic) NSDictionary *localWiFiCacheData; // @synthesize localWiFiCacheData=_localWiFiCacheData;
- (void)saveWiFiWithBSSID:(id)arg1 SSID:(id)arg2 securityType:(long long)arg3;
- (long long)getWiFiSecurityTypeWithBSSID:(id)arg1 SSID:(id)arg2;
- (_Bool)isNeedToUpdateWithBSSID:(id)arg1 SSID:(id)arg2;
- (_Bool)isUnkownWiFiWithBSSID:(id)arg1 SSID:(id)arg2;
- (_Bool)isNeedToPushWithSSID:(id)arg1;
- (void)setupDefaultData;
- (void)dealloc;
- (id)init;

@end
