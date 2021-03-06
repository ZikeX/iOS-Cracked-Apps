//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "AMapRequestReformerProtocol-Protocol.h"

@class NSData, NSDictionary, NSString, NSURL;

@interface AMapRequestReformer : NSObject <AMapRequestReformerProtocol>
{
    _Bool _enableHTTPS;
    long long _timeout;
    NSDictionary *_additionalParameters;
    NSDictionary *_HTTPHeaders;
}

+ (unsigned long long)cachePolicy;
+ (id)requestWithReformer:(id)arg1;
+ (id)reformerWithShareSearchRequest:(id)arg1;
+ (id)reformerWithCloudPOILocalSearchRequest:(id)arg1;
+ (id)reformerWithCloudPOIIDSearchRequest:(id)arg1;
+ (id)reformerWithCloudPOIPolygonSearchRequest:(id)arg1;
+ (id)reformerWithCloudPOIAroundSearchRequest:(id)arg1;
+ (id)reformerWithNearbySearchRequest:(id)arg1;
+ (id)reformerWithUserID:(id)arg1;
+ (id)reformerWithUploadInfo:(id)arg1;
+ (id)reformerWithRidingRouteSearchRequest:(id)arg1;
+ (id)reformerWithTransitRouteSearchRequest:(id)arg1;
+ (id)reformerWithWalkingRouteSearchRequest:(id)arg1;
+ (id)reformerWithDrivingRouteSearchRequest:(id)arg1;
+ (id)reformerWithWeatherSearchRequest:(id)arg1;
+ (id)reformerWithDistrictSearchRequest:(id)arg1;
+ (id)reformerWithBusLineNameSearchRequest:(id)arg1;
+ (id)reformerWithBusLineIDSearchRequest:(id)arg1;
+ (id)reformerWithBusStopSearchRequest:(id)arg1;
+ (id)reformerWithGeocodeSearchRequest:(id)arg1;
+ (id)reformerWithInputTipSearchRequest:(id)arg1;
+ (id)reformerWithReGeocodeSearchRequest:(id)arg1;
+ (id)reformerWithRoutePOISearchRequest:(id)arg1;
+ (id)reformerWithPOISearchRequest:(id)arg1;
@property(retain, nonatomic) NSDictionary *HTTPHeaders; // @synthesize HTTPHeaders=_HTTPHeaders;
@property(retain, nonatomic) NSDictionary *additionalParameters; // @synthesize additionalParameters=_additionalParameters;
@property(nonatomic) long long timeout; // @synthesize timeout=_timeout;
@property(nonatomic) _Bool enableHTTPS; // @synthesize enableHTTPS=_enableHTTPS;
- (void).cxx_destruct;
- (void)reformParameters:(id)arg1 result:(CDUnknownBlockType)arg2;
@property(readonly, nonatomic) NSDictionary *parameters;
@property(readonly, nonatomic) NSString *URLPath;
@property(readonly, nonatomic) NSData *postData;
@property(readonly, nonatomic) NSURL *url;
@property(readonly, nonatomic) NSString *baseURL;
@property(readonly, nonatomic) NSString *method;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

