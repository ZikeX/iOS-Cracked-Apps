//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableArray, NSTimer;

@interface TADLogManager : NSObject
{
    NSMutableArray *_adFillArray;
    NSMutableArray *_adCostArray;
    NSMutableArray *_splash_videoArray;
    NSTimer *_sendTimer;
    double _sendTimerTimeInterval;
}

+ (id)sharedInstance;
@property(nonatomic) double sendTimerTimeInterval; // @synthesize sendTimerTimeInterval=_sendTimerTimeInterval;
@property(nonatomic) __weak NSTimer *sendTimer; // @synthesize sendTimer=_sendTimer;
@property(retain, nonatomic) NSMutableArray *splash_videoArray; // @synthesize splash_videoArray=_splash_videoArray;
@property(retain, nonatomic) NSMutableArray *adCostArray; // @synthesize adCostArray=_adCostArray;
@property(retain, nonatomic) NSMutableArray *adFillArray; // @synthesize adFillArray=_adFillArray;
- (void).cxx_destruct;
- (void)appWillResignActive:(id)arg1;
- (void)appDidBecomeActive:(id)arg1;
- (void)appDidFinishLaunch:(id)arg1;
- (void)sendTimerFired;
- (void)send;
- (_Bool)adTypeNeedMonitor:(id)arg1 inChannel:(id)arg2;
- (void)logSplashVideo:(id)arg1;
- (void)logAdCostWithNetStatus:(id)arg1 source:(id)arg2 time:(long long)arg3;
- (void)logAdFillWithChannel:(id)arg1 adType:(id)arg2 request:(long long)arg3 response:(long long)arg4 hit:(long long)arg5;
- (void)logAdFillWithAdChannel:(id)arg1 adType:(id)arg2 response:(long long)arg3;
- (void)logAdFillWithAdChannel:(id)arg1 adType:(id)arg2 hit:(long long)arg3;
- (void)logAdFillWithAdChannel:(id)arg1 adType:(id)arg2 request:(long long)arg3;
- (void)reset;
- (void)dealloc;
- (id)init;

@end

