//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NVMModel.h"

@class NSNumber, NSString;

@interface EMKNewUserDeliveryGiftCard : NVMModel
{
    NSString *_name;
    NSString *_deliveryText;
    NSNumber *_amount;
    NSString *_expireDate;
}

+ (id)JSONKeyPathsByPropertyKey;
@property(copy, nonatomic) NSString *expireDate; // @synthesize expireDate=_expireDate;
@property(copy, nonatomic) NSNumber *amount; // @synthesize amount=_amount;
@property(copy, nonatomic) NSString *deliveryText; // @synthesize deliveryText=_deliveryText;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
- (void).cxx_destruct;

@end

