//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class CTTelephonyNetworkInfo, NSString;

@interface QYTelephony : NSObject
{
    NSString *_countryCode;
    CTTelephonyNetworkInfo *_telphony;
}

+ (id)sharedInstance;
@property(retain, nonatomic) CTTelephonyNetworkInfo *telphony; // @synthesize telphony=_telphony;
@property(retain, nonatomic) NSString *countryCode; // @synthesize countryCode=_countryCode;
- (void).cxx_destruct;
- (id)init;

@end

