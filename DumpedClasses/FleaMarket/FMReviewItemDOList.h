//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableArray<FMReviewItemDO>, NSNumber, NSString;

@interface FMReviewItemDOList : NSObject
{
    _Bool _nextPage;
    NSMutableArray<FMReviewItemDO> *_items;
    NSString *_serverTime;
    NSNumber *_totalCount;
    NSNumber *_totalGoodRateCount;
}

@property(retain, nonatomic) NSNumber *totalGoodRateCount; // @synthesize totalGoodRateCount=_totalGoodRateCount;
@property(retain, nonatomic) NSNumber *totalCount; // @synthesize totalCount=_totalCount;
@property(retain, nonatomic) NSString *serverTime; // @synthesize serverTime=_serverTime;
@property(nonatomic) _Bool nextPage; // @synthesize nextPage=_nextPage;
@property(retain, nonatomic) NSMutableArray<FMReviewItemDO> *items; // @synthesize items=_items;
- (void).cxx_destruct;

@end
