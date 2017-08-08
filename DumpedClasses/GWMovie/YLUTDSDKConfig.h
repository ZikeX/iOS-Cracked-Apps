//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug  6 2017 20:42:30).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSString;

@interface YLUTDSDKConfig : NSObject
{
    _Bool _isExceptionReportEnabled;
    _Bool _isSignalReportEnabled;
    double _latitude;
    double _longitude;
    NSString *_appVersionCode;
    NSString *_appVersionName;
    NSString *_savedIp;
}

+ (id)getDeviceId;
+ (id)sharedSDKConfig;
@property(retain, nonatomic) NSString *savedIp; // @synthesize savedIp=_savedIp;
@property(retain, nonatomic) NSString *appVersionName; // @synthesize appVersionName=_appVersionName;
@property(retain, nonatomic) NSString *appVersionCode; // @synthesize appVersionCode=_appVersionCode;
@property(nonatomic) double longitude; // @synthesize longitude=_longitude;
@property(nonatomic) double latitude; // @synthesize latitude=_latitude;
@property(nonatomic) _Bool isSignalReportEnabled; // @synthesize isSignalReportEnabled=_isSignalReportEnabled;
@property(nonatomic) _Bool isExceptionReportEnabled; // @synthesize isExceptionReportEnabled=_isExceptionReportEnabled;
- (void).cxx_destruct;
- (void)setSignalReportEnabled:(_Bool)arg1;
- (void)setExceptionReportEnabled:(_Bool)arg1;
- (id)init;

@end
