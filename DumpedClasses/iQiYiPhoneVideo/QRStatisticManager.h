//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@interface QRStatisticManager : NSObject
{
}

+ (id)APIWithNoParam:(id)arg1;
+ (void)statistic_API:(id)arg1 withTime:(int)arg2;
+ (void)statistic_addShelfSuccessWith:(id)arg1;
+ (void)statistic_startDownLoad;
+ (void)statistic_paySuccessWith:(id)arg1 qnum:(id)arg2;
+ (void)statistic_paySuccessWith:(id)arg1 pnum:(id)arg2;
+ (void)statistic_passportWithRseat:(id)arg1 page:(id)arg2 block:(id)arg3 packageName:(id)arg4;
+ (void)statistic_click:(id)arg1 WithBlock:(id)arg2 rpage:(id)arg3;
+ (void)statistic_click:(id)arg1 WithBlock:(id)arg2 rpage:(id)arg3 cardID:(id)arg4;
+ (void)statistic_clickWith:(id)arg1 page:(id)arg2;
+ (void)statistic_CardpvWith:(id)arg1;
+ (void)statistic_pvWith:(id)arg1 page:(id)arg2;
+ (void)statistic_readerExit:(id)arg1;
+ (void)statistic_readerEnter:(id)arg1 BookId:(id)arg2;
+ (id)blockpvIndex:(id)arg1;
+ (id)blockpvrpage:(id)arg1;
+ (void)statistic_specialBlockpv:(id)arg1 WithRpage:(id)arg2;
+ (void)statistic_blockpv:(id)arg1;
+ (void)statistic_click:(id)arg1;
+ (void)statistic_detailspg:(id)arg1 Pgrfr:(id)arg2;
+ (void)statistic_detailspg:(id)arg1;
+ (void)statistic_bookDetail:(id)arg1 withPgrfr:(id)arg2 BookId:(id)arg3;
+ (void)statistic_start:(id)arg1;
+ (void)statisticEventWithName:(id)arg1 Type:(long long)arg2 parameters:(id)arg3;
+ (id)deviceModelName;
+ (id)netWorkStatus;
+ (id)resolution;
+ (id)publicParam;

@end

