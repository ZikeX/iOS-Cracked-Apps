//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PersonalInfoManagerBasicResponse.h"

@class MyDetailInfo;

@interface MyDetailInfoResponse : PersonalInfoManagerBasicResponse
{
    MyDetailInfo *_myDetailInfo;
}

+ (id)createWithDictionary:(id)arg1;
@property(retain, nonatomic) MyDetailInfo *myDetailInfo; // @synthesize myDetailInfo=_myDetailInfo;
- (void).cxx_destruct;

@end
