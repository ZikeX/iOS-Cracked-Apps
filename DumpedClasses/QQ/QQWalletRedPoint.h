//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "JceObjectV2.h"

@class QQWalletDateRange;

@interface QQWalletRedPoint : JceObjectV2
{
}

+ (id)jceType;
- (_Bool)isInValidDate;
- (_Bool)canShowForIdentifier:(id)arg1;
- (int)statusWithIdentifier:(id)arg1 type:(unsigned long long)arg2;
- (id)keyForIdentifier:(id)arg1 type:(unsigned long long)arg2;
- (void)saveStatus:(int)arg1 identifier:(id)arg2 type:(unsigned long long)arg3;

// Remaining properties
@property(nonatomic, getter=jce_id, setter=setJce_id:) long long jcev2_p_0_o_id; // @dynamic jcev2_p_0_o_id;
@property(retain, nonatomic, getter=jce_range, setter=setJce_range:) QQWalletDateRange *jcev2_p_1_o_range; // @dynamic jcev2_p_1_o_range;

@end
