//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class QLShareServer;

@protocol QLShareDelegate <NSObject>

@optional
- (void)server:(QLShareServer *)arg1 willStartShare:(unsigned long long)arg2;
- (void)serverDidShare:(unsigned long long)arg1 platformMask:(unsigned long long)arg2;
@end
