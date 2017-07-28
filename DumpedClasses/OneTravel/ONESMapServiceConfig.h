//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString, UIView;

@interface ONESMapServiceConfig : NSObject
{
    int _serviceType;
    int _mapType;
    int _instanceType;
    id _container;
    NSString *_mapKey;
    UIView *_superView;
    struct CGRect _frame;
}

+ (id)defaultMapConfig;
@property(nonatomic) int instanceType; // @synthesize instanceType=_instanceType;
@property(nonatomic) struct CGRect frame; // @synthesize frame=_frame;
@property(nonatomic) __weak UIView *superView; // @synthesize superView=_superView;
@property(copy, nonatomic) NSString *mapKey; // @synthesize mapKey=_mapKey;
@property(nonatomic) int mapType; // @synthesize mapType=_mapType;
@property(nonatomic) int serviceType; // @synthesize serviceType=_serviceType;
@property(nonatomic) __weak id container; // @synthesize container=_container;
- (void).cxx_destruct;
- (id)init;

@end
