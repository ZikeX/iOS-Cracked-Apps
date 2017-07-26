//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSMutableArray;

@interface StockService : NSObject
{
    NSMutableArray *_orders;
    NSArray *_dataSet;
}

+ (void)cleanResources;
+ (id)shredInstance;
@property(retain, nonatomic) NSArray *dataSet; // @synthesize dataSet=_dataSet;
@property(retain, nonatomic) NSMutableArray *orders; // @synthesize orders=_orders;
- (void).cxx_destruct;
- (long long)numberOfStockType:(long long)arg1;
- (void)doFavorite:(id)arg1 submit:(_Bool)arg2 block:(CDUnknownBlockType)arg3;
- (void)doFavorite:(id)arg1 block:(CDUnknownBlockType)arg2;
- (id)doSubimit;
- (_Bool)isInFav:(id)arg1;
- (void)cleanAllOrder;
- (void)setLastestDataSet:(id)arg1;

@end
