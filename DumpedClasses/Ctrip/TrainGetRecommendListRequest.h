//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CTBusinessBean.h"

@class NSString;

@interface TrainGetRecommendListRequest : CTBusinessBean
{
    int serviceVersion;
    NSString *departName;
    NSString *arriveName;
    NSString *departDate;
    int trainCount;
    NSString *recommendType;
}

@property(copy, nonatomic) NSString *recommendType; // @synthesize recommendType;
@property(nonatomic) int trainCount; // @synthesize trainCount;
@property(copy, nonatomic) NSString *departDate; // @synthesize departDate;
@property(copy, nonatomic) NSString *arriveName; // @synthesize arriveName;
@property(copy, nonatomic) NSString *departName; // @synthesize departName;
@property(nonatomic) int serviceVersion; // @synthesize serviceVersion;
- (void).cxx_destruct;
- (id)getAnnotationArray;
- (id)init;

@end
