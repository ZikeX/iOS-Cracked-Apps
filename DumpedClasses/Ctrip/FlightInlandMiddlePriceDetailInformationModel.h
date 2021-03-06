//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CTBusinessBean.h"

@class NSString, PriceType;

@interface FlightInlandMiddlePriceDetailInformationModel : CTBusinessBean
{
    int passengerType;
    _Bool isApplyChild;
    _Bool isApplyBaby;
    PriceType *standPrice;
    PriceType *price;
    NSString *discount;
    PriceType *fuelCharge;
    PriceType *tax;
    long long flag;
}

@property(nonatomic) long long flag; // @synthesize flag;
@property(retain, nonatomic) PriceType *tax; // @synthesize tax;
@property(retain, nonatomic) PriceType *fuelCharge; // @synthesize fuelCharge;
@property(copy, nonatomic) NSString *discount; // @synthesize discount;
@property(retain, nonatomic) PriceType *price; // @synthesize price;
@property(retain, nonatomic) PriceType *standPrice; // @synthesize standPrice;
@property(nonatomic) _Bool isApplyBaby; // @synthesize isApplyBaby;
@property(nonatomic) _Bool isApplyChild; // @synthesize isApplyChild;
@property(nonatomic) int passengerType; // @synthesize passengerType;
- (void).cxx_destruct;
- (id)getPBAnnotationArray;
- (id)init;

@end

