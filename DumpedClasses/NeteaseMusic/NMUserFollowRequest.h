//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NMBaseRequest.h"

@class NSString;

@interface NMUserFollowRequest : NMBaseRequest
{
    _Bool _isFollow;
    NSString *_userId;
    _Bool _alreadyNotifyBlackListIssue;
    id _customUserInfo;
}

@property(nonatomic) _Bool alreadyNotifyBlackListIssue; // @synthesize alreadyNotifyBlackListIssue=_alreadyNotifyBlackListIssue;
@property(retain, nonatomic) id customUserInfo; // @synthesize customUserInfo=_customUserInfo;
@property(readonly, nonatomic) _Bool isFollow; // @synthesize isFollow=_isFollow;
@property(readonly, nonatomic) NSString *userId; // @synthesize userId=_userId;
- (void)start;
- (void)dealloc;
- (id)initWithUserId:(id)arg1 isFollow:(_Bool)arg2;

@end

