//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CTBusinessBean.h"

@class NSMutableArray, NSString;

@interface DayTourPackageCardInformationModel : CTBusinessBean
{
    int _cityId;
    NSString *_cityName;
    NSString *_departureDate;
    NSString *_departureTimeZone;
    NSString *_title;
    NSString *_subtitle;
    NSMutableArray *_imageList;
    NSString *_packageDetailUrl;
}

@property(copy, nonatomic) NSString *packageDetailUrl; // @synthesize packageDetailUrl=_packageDetailUrl;
@property(retain, nonatomic) NSMutableArray *imageList; // @synthesize imageList=_imageList;
@property(copy, nonatomic) NSString *subtitle; // @synthesize subtitle=_subtitle;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(copy, nonatomic) NSString *departureTimeZone; // @synthesize departureTimeZone=_departureTimeZone;
@property(copy, nonatomic) NSString *departureDate; // @synthesize departureDate=_departureDate;
@property(copy, nonatomic) NSString *cityName; // @synthesize cityName=_cityName;
@property(nonatomic) int cityId; // @synthesize cityId=_cityId;
- (void).cxx_destruct;
- (id)getAnnotationArray;
- (id)init;

@end

