//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NVMModel.h"

#import "IGListDiffable.h"

@class NSArray, NSString;

@interface ESPRestaurantRecommendFoods : NVMModel <IGListDiffable>
{
    NSString *_title;
    NSArray *_foods;
}

+ (id)JSONTransformerForKey:(id)arg1;
+ (id)JSONKeyPathsByPropertyKey;
@property(copy, nonatomic) NSArray *foods; // @synthesize foods=_foods;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
- (void).cxx_destruct;
- (_Bool)isEqualToDiffableObject:(id)arg1;
- (id)diffIdentifier;

@end
