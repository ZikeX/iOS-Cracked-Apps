//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TBJSONModel.h"

@class NSArray, NSString;

@interface TBTakeoutCartItemModel : TBJSONModel
{
    _Bool _valid;
    int _type;
    long long _quantity;
    double _discountedPrice;
    long long _outItemId;
    long long _cartId;
    long long _amount;
    long long _limitQuantity;
    NSString *_pic;
    NSString *_priceDesc;
    NSString *_title;
    long long _skuId;
    NSString *_skuName;
    NSString *_createTime;
    double _unitPrice;
    double _totalPrice;
    double _totalPromotionPrice;
    double _sum;
    long long _itemId;
    NSString *_outIdType;
    NSArray *_skuProperties;
    NSString *_limitCountDesc;
    long long _skuAmount;
}

+ (id)modelContainerClassMapDictioanry;
+ (id)modelWithJSONDictionary:(id)arg1;
@property(nonatomic) long long skuAmount; // @synthesize skuAmount=_skuAmount;
@property(copy, nonatomic) NSString *limitCountDesc; // @synthesize limitCountDesc=_limitCountDesc;
@property(nonatomic) int type; // @synthesize type=_type;
@property(copy, nonatomic) NSArray *skuProperties; // @synthesize skuProperties=_skuProperties;
@property(copy, nonatomic) NSString *outIdType; // @synthesize outIdType=_outIdType;
@property(nonatomic) long long itemId; // @synthesize itemId=_itemId;
@property(nonatomic) double sum; // @synthesize sum=_sum;
@property(nonatomic) double totalPromotionPrice; // @synthesize totalPromotionPrice=_totalPromotionPrice;
@property(nonatomic) double totalPrice; // @synthesize totalPrice=_totalPrice;
@property(nonatomic) double unitPrice; // @synthesize unitPrice=_unitPrice;
@property(copy, nonatomic) NSString *createTime; // @synthesize createTime=_createTime;
@property(copy, nonatomic) NSString *skuName; // @synthesize skuName=_skuName;
@property(nonatomic) long long skuId; // @synthesize skuId=_skuId;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(copy, nonatomic) NSString *priceDesc; // @synthesize priceDesc=_priceDesc;
@property(copy, nonatomic) NSString *pic; // @synthesize pic=_pic;
@property(nonatomic) long long limitQuantity; // @synthesize limitQuantity=_limitQuantity;
@property(nonatomic) long long amount; // @synthesize amount=_amount;
@property(nonatomic) long long cartId; // @synthesize cartId=_cartId;
@property(nonatomic) _Bool valid; // @synthesize valid=_valid;
@property(nonatomic) long long outItemId; // @synthesize outItemId=_outItemId;
@property(nonatomic) double discountedPrice; // @synthesize discountedPrice=_discountedPrice;
@property(nonatomic) long long quantity; // @synthesize quantity=_quantity;
- (void).cxx_destruct;
- (id)initWithJSONDictionary:(id)arg1;

@end
