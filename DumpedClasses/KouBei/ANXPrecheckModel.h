//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "ANXBaseServiceModel.h"

@class NSString;

@interface ANXPrecheckModel : ANXBaseServiceModel
{
    NSString *_insidePushKey;
    NSString *_alipayUserId;
}

@property(copy, nonatomic) NSString *alipayUserId; // @synthesize alipayUserId=_alipayUserId;
@property(copy, nonatomic) NSString *insidePushKey; // @synthesize insidePushKey=_insidePushKey;
- (void).cxx_destruct;
- (unsigned long long)serviceName;
- (id)childHookParams;

@end

