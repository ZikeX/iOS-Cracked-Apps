//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface SDDJPaymentModuleLogic : NSObject
{
    long long _orderID;
}

+ (_Bool)stopServerChangePaymentListener;
+ (_Bool)startServerChangePaymentListener;
+ (void)doEnterprisePayWithOrderID:(long long)arg1 money:(double)arg2 succeed:(CDUnknownBlockType)arg3 failed:(CDUnknownBlockType)arg4;
+ (void)getPayConfigWithOrderID:(long long)arg1 channel:(unsigned long long)arg2 money:(double)arg3 succeed:(CDUnknownBlockType)arg4 paySuccedd:(CDUnknownBlockType)arg5 failed:(CDUnknownBlockType)arg6;
+ (id)getPayDetailsWithOrderID:(long long)arg1 channel:(long long)arg2 succeed:(CDUnknownBlockType)arg3 failed:(CDUnknownBlockType)arg4;
@property(nonatomic) long long orderID; // @synthesize orderID=_orderID;

@end
