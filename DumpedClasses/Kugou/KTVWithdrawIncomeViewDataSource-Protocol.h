//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class KTVWithdrawIncomeInfo, NSMutableArray;

@protocol KTVWithdrawIncomeViewDataSource <NSObject>
- (void)addMyMessageItems:(NSMutableArray *)arg1;
- (_Bool)haveMoreDataWithdrawIncome;
- (void)deleteWithdrawIncomeItemAtIndex:(long long)arg1;
- (KTVWithdrawIncomeInfo *)myWithdrawIncomeItemAtIndex:(long long)arg1;
- (long long)numberOfWithdrawIncome;
@end
