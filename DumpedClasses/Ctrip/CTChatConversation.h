//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class CTChatMessage, CTChatThreadInfo, NSString;

@interface CTChatConversation : NSObject
{
    _Bool _isBlock;
    _Bool _isShrink;
    _Bool _isFromHTTP;
    long long _conversationId;
    NSString *_ownerJid;
    NSString *_partnerJid;
    long long _conversationType;
    NSString *_conversationTitile;
    NSString *_avatar;
    NSString *_createAt;
    NSString *_lastActivityTime;
    NSString *_categoryCode;
    long long _unReadCount;
    CTChatMessage *_lastMessage;
    CTChatThreadInfo *_threadInfo;
    long long _bizType;
    NSString *_infoUpdateAt;
    NSString *_msgUpdateAt;
    NSString *_msgUpdateTimeStamp;
    NSString *_lastSyncMsgId;
}

@property(nonatomic) _Bool isFromHTTP; // @synthesize isFromHTTP=_isFromHTTP;
@property(copy, nonatomic) NSString *lastSyncMsgId; // @synthesize lastSyncMsgId=_lastSyncMsgId;
@property(copy, nonatomic) NSString *msgUpdateTimeStamp; // @synthesize msgUpdateTimeStamp=_msgUpdateTimeStamp;
@property(copy, nonatomic) NSString *msgUpdateAt; // @synthesize msgUpdateAt=_msgUpdateAt;
@property(copy, nonatomic) NSString *infoUpdateAt; // @synthesize infoUpdateAt=_infoUpdateAt;
@property(nonatomic) long long bizType; // @synthesize bizType=_bizType;
@property(retain, nonatomic) CTChatThreadInfo *threadInfo; // @synthesize threadInfo=_threadInfo;
@property(retain, nonatomic) CTChatMessage *lastMessage; // @synthesize lastMessage=_lastMessage;
@property(nonatomic) long long unReadCount; // @synthesize unReadCount=_unReadCount;
@property(retain, nonatomic) NSString *categoryCode; // @synthesize categoryCode=_categoryCode;
@property(nonatomic) _Bool isShrink; // @synthesize isShrink=_isShrink;
@property(nonatomic) _Bool isBlock; // @synthesize isBlock=_isBlock;
@property(copy, nonatomic) NSString *lastActivityTime; // @synthesize lastActivityTime=_lastActivityTime;
@property(copy, nonatomic) NSString *createAt; // @synthesize createAt=_createAt;
@property(copy, nonatomic) NSString *avatar; // @synthesize avatar=_avatar;
@property(copy, nonatomic) NSString *conversationTitile; // @synthesize conversationTitile=_conversationTitile;
@property(nonatomic) long long conversationType; // @synthesize conversationType=_conversationType;
@property(retain, nonatomic) NSString *partnerJid; // @synthesize partnerJid=_partnerJid;
@property(retain, nonatomic) NSString *ownerJid; // @synthesize ownerJid=_ownerJid;
@property(nonatomic) long long conversationId; // @synthesize conversationId=_conversationId;
- (void).cxx_destruct;
- (id)initWithDic:(id)arg1;
- (id)description;

@end
