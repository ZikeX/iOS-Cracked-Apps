//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TBRspGeneralListModel.h"

#import "NSCoding.h"

@class NSString;

@interface TBRspGetUserSelfInfoModel : TBRspGeneralListModel <NSCoding>
{
    unsigned int _isVIP;
    unsigned int _fansCount;
    unsigned int _videoCount;
    unsigned int _visitTotalCount;
    NSString *_unionID;
    NSString *_newestVideoCover;
    NSString *_newestVideoVid;
    NSString *_headUrl;
}

@property(retain, nonatomic) NSString *headUrl; // @synthesize headUrl=_headUrl;
@property(retain, nonatomic) NSString *newestVideoVid; // @synthesize newestVideoVid=_newestVideoVid;
@property(retain, nonatomic) NSString *newestVideoCover; // @synthesize newestVideoCover=_newestVideoCover;
@property(nonatomic) unsigned int visitTotalCount; // @synthesize visitTotalCount=_visitTotalCount;
@property(nonatomic) unsigned int videoCount; // @synthesize videoCount=_videoCount;
@property(retain, nonatomic) NSString *unionID; // @synthesize unionID=_unionID;
@property(nonatomic) unsigned int fansCount; // @synthesize fansCount=_fansCount;
@property(nonatomic) unsigned int isVIP; // @synthesize isVIP=_isVIP;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (_Bool)parsePBData:(char *)arg1 withLength:(int)arg2;

@end
