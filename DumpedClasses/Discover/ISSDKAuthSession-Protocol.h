//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDictionary, NSString;

@protocol ISSDKAuthSession <NSObject>
- (void)setStateChangedHandler:(void (^)(unsigned long long, SSDKUser *, NSError *))arg1;
- (void (^)(unsigned long long, SSDKUser *, NSError *))stateChangedHandler;
- (NSDictionary *)settings;
- (unsigned long long)platformType;
- (NSString *)sessionId;
@end

