//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class CTGeoAddress;

@protocol CTHotelMainLocationUtilDelegate <NSObject>

@optional
- (void)locationFail:(int)arg1;
- (void)locationSuccessWithGeoAddress:(CTGeoAddress *)arg1;
- (void)locationSuccessWithCoordinate:(struct CLLocationCoordinate2D)arg1;
@end

