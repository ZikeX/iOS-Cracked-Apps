//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSNumber, NSString;

@interface APLogAutoPageInfo : NSObject
{
    _Bool _didEnd;
    NSObject *_weakIndex;
    NSString *_abTestInfo;
    NSString *_entityId;
    NSString *_spmId;
    NSString *_paramString;
    NSString *_pageId;
    NSNumber *_t1;
    NSString *_startTime;
    NSString *_level;
    NSString *_bizType;
    NSString *_xPath;
    NSString *_header;
    NSString *_needRpcStr;
    NSString *_startTimeString;
    NSString *_appId;
    NSString *_h5PageURL;
}

+ (void)filterPageInfo:(id)arg1;
@property(copy) NSString *h5PageURL; // @synthesize h5PageURL=_h5PageURL;
@property _Bool didEnd; // @synthesize didEnd=_didEnd;
@property(copy) NSString *appId; // @synthesize appId=_appId;
@property(copy) NSString *startTimeString; // @synthesize startTimeString=_startTimeString;
@property(copy) NSString *needRpcStr; // @synthesize needRpcStr=_needRpcStr;
@property(copy) NSString *header; // @synthesize header=_header;
@property(copy) NSString *xPath; // @synthesize xPath=_xPath;
@property(copy) NSString *bizType; // @synthesize bizType=_bizType;
@property(copy) NSString *level; // @synthesize level=_level;
@property(copy) NSString *startTime; // @synthesize startTime=_startTime;
@property(retain) NSNumber *t1; // @synthesize t1=_t1;
@property(copy) NSString *pageId; // @synthesize pageId=_pageId;
@property(copy) NSString *paramString; // @synthesize paramString=_paramString;
@property(copy) NSString *spmId; // @synthesize spmId=_spmId;
@property(copy) NSString *entityId; // @synthesize entityId=_entityId;
@property(copy) NSString *abTestInfo; // @synthesize abTestInfo=_abTestInfo;
@property __weak NSObject *weakIndex; // @synthesize weakIndex=_weakIndex;
- (void).cxx_destruct;

@end

