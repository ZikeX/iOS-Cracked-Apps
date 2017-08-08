//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <FBSharedFramework/FBValueObject.h>

#import "NSCopying-Protocol.h"

@class NSString;

@interface FBPageCreationPageAddress : FBValueObject <NSCopying>
{
    NSString *_street;
    NSString *_phone;
    NSString *_cityId;
    NSString *_cityName;
    NSString *_zip;
}

@property(readonly, copy, nonatomic) NSString *zip; // @synthesize zip=_zip;
@property(readonly, copy, nonatomic) NSString *cityName; // @synthesize cityName=_cityName;
@property(readonly, copy, nonatomic) NSString *cityId; // @synthesize cityId=_cityId;
@property(readonly, copy, nonatomic) NSString *phone; // @synthesize phone=_phone;
@property(readonly, copy, nonatomic) NSString *street; // @synthesize street=_street;
- (void).cxx_destruct;
- (id)initWithStreet:(id)arg1 phone:(id)arg2 cityId:(id)arg3 cityName:(id)arg4 zip:(id)arg5;

@end
