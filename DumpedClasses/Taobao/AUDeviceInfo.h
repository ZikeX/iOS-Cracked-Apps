//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSTimer;

@interface AUDeviceInfo : NSObject
{
    _Bool _isRunning;
    NSTimer *_deviceInfoTimer;
}

+ (id)uploadDeviceInfo;
+ (id)deviceInfo;
+ (void)refreshDeviceInfo;
+ (void)stop;
+ (void)start;
+ (id)sharedInstance;
@property(retain, nonatomic) NSTimer *deviceInfoTimer; // @synthesize deviceInfoTimer=_deviceInfoTimer;
@property(nonatomic) _Bool isRunning; // @synthesize isRunning=_isRunning;
- (void).cxx_destruct;
- (void)startMonitor;
- (id)deviceInfo;
- (void)refreshDeviceInfo;
- (void)stopTimer;
- (void)stop;
- (void)start;

@end
