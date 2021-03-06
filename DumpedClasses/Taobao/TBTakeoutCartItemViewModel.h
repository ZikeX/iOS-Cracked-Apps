//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TBTakeoutNewViewModel.h"

@class NSArray, NSIndexPath, NSMutableArray, NSString, TBTakeoutCartItemModel;

@interface TBTakeoutCartItemViewModel : TBTakeoutNewViewModel
{
    _Bool _isPackFeeType;
    NSIndexPath *_indexPath;
    double _packingFee;
    TBTakeoutCartItemModel *_model;
    NSMutableArray *_limitCountDecArray;
}

@property(retain, nonatomic) NSMutableArray *limitCountDecArray; // @synthesize limitCountDecArray=_limitCountDecArray;
@property(retain, nonatomic) TBTakeoutCartItemModel *model; // @synthesize model=_model;
@property(nonatomic) double packingFee; // @synthesize packingFee=_packingFee;
@property(nonatomic) _Bool isPackFeeType; // @synthesize isPackFeeType=_isPackFeeType;
@property(retain, nonatomic) NSIndexPath *indexPath; // @synthesize indexPath=_indexPath;
- (void).cxx_destruct;
@property(nonatomic) long long skuAmount;
@property(copy, nonatomic) NSArray *skuProperties;
@property(readonly, copy, nonatomic) NSString *outIdType;
@property(nonatomic) long long outItemId;
@property(nonatomic) long long skuId;
@property(nonatomic) long long cartId;
@property(nonatomic) long long itemId;
@property(nonatomic) long long surplusAmount;
@property(readonly, copy, nonatomic) NSString *skuDesc;
@property(readonly, copy, nonatomic) NSString *priceDesc;
@property(readonly, nonatomic) double promotionPrice;
@property(readonly, nonatomic) double price;
@property(readonly, copy, nonatomic) NSString *title;
@property(nonatomic) double sumOfPrice;
@property(nonatomic) long long limitQuantity;
@property(nonatomic) long long quantity;
@property(nonatomic) long long amount;
- (void)parseResult:(id)arg1;

@end

