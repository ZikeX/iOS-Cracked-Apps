//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "KBCSARequestData.h"

@class NSArray, NSDictionary, NSString;

@interface KBCSAUserFeedbackClientRequest : KBCSARequestData
{
    NSArray *_type;
    NSString *_shopId;
    NSArray *_images;
    NSString *_content;
    NSDictionary *_params;
    NSString *_userId;
}

+ (Class)paramsElementClass;
+ (Class)imagesElementClass;
+ (Class)typeElementClass;
@property(retain, nonatomic) NSString *userId; // @synthesize userId=_userId;
@property(retain, nonatomic) NSDictionary *params; // @synthesize params=_params;
@property(retain, nonatomic) NSString *content; // @synthesize content=_content;
@property(retain, nonatomic) NSArray *images; // @synthesize images=_images;
@property(retain, nonatomic) NSString *shopId; // @synthesize shopId=_shopId;
@property(retain, nonatomic) NSArray *type; // @synthesize type=_type;
- (void).cxx_destruct;

@end

