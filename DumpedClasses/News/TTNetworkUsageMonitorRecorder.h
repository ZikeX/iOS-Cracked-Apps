//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TTBaseSystemMonitorRecorder.h"

@interface TTNetworkUsageMonitorRecorder : TTBaseSystemMonitorRecorder
{
}

+ (void)updteInfo;
+ (void)initialize;
- (void)recordIfNeeded:(_Bool)arg1;
- (_Bool)isEnabled;
- (double)monitorInterval;
- (id)type;
- (void)resetNetworkData;

@end
