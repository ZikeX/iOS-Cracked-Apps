//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug  6 2017 20:42:30).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "YLUTDBaseModel.h"

@class NSArray, NSString, YLUTDAction, YLUTDAppContext, YLUTDAppProfile, YLUTDDeviceProfile, YLUTDSDKProfile, YLUTDUser;

@interface YLUTDEvent : YLUTDBaseModel
{
    _Bool _emulator;
    YLUTDUser *_user;
    YLUTDDeviceProfile *_device;
    YLUTDAppProfile *_app;
    YLUTDSDKProfile *_sdk;
    NSArray *_networks;
    NSArray *_locations;
    YLUTDAppContext *_appContext;
    long long _ts;
    NSString *_fingerprint;
    YLUTDAction *_action;
    NSString *_version;
}

@property(retain, nonatomic) NSString *version; // @synthesize version=_version;
@property(retain, nonatomic) YLUTDAction *action; // @synthesize action=_action;
@property(nonatomic) _Bool emulator; // @synthesize emulator=_emulator;
@property(retain, nonatomic) NSString *fingerprint; // @synthesize fingerprint=_fingerprint;
@property(nonatomic) long long ts; // @synthesize ts=_ts;
@property(retain, nonatomic) YLUTDAppContext *appContext; // @synthesize appContext=_appContext;
@property(retain, nonatomic) NSArray *locations; // @synthesize locations=_locations;
@property(retain, nonatomic) NSArray *networks; // @synthesize networks=_networks;
@property(retain, nonatomic) YLUTDSDKProfile *sdk; // @synthesize sdk=_sdk;
@property(retain, nonatomic) YLUTDAppProfile *app; // @synthesize app=_app;
@property(retain, nonatomic) YLUTDDeviceProfile *device; // @synthesize device=_device;
@property(retain, nonatomic) YLUTDUser *user; // @synthesize user=_user;
- (void).cxx_destruct;
- (id)archiveToDictionaryInsertAppcontext:(id)arg1;
- (id)archiveToDictionary;

@end
