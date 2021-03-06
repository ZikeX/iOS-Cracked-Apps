//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSMutableArray;

@interface PPao_IMSessionBusiness : NSObject
{
    NSMutableArray *_memorySessions;
}

+ (id)sharedInstance;
- (void).cxx_destruct;
- (id)getJsonWithMsgIds;
- (id)getChatSessionsTopDisturbInfos;
- (void)updateSessionsWithTopDisturbInfos:(id)arg1;
- (void)updateSessionAfterClearMessages:(id)arg1;
- (void)setSessionWithRosterJidStr:(id)arg1 showTags:(_Bool)arg2;
- (void)updateSessionWithRoster:(id)arg1 needCreate:(_Bool)arg2;
- (void)updateSessionWithPaopaoModel:(id)arg1 needCreate:(_Bool)arg2;
- (void)updateSessionWithUpdateObject:(id)arg1;
- (_Bool)allowsUpdateSessionWithIType:(id)arg1;
- (void)updateCircleNotificationWithSenderName:(id)arg1 content:(id)arg2 unread:(id)arg3 totUnread:(id)arg4 time:(id)arg5 notificationJid:(id)arg6;
- (void)updateSessionWithBaselineMessageDict:(id)arg1 isInMessageVC:(_Bool)arg2;
- (void)updateSessionLastMessageWithModel:(id)arg1;
- (void)setNeedRefresh;
- (_Bool)isSessionNoDisturb:(id)arg1;
- (void)setSessionNoDisturb:(_Bool)arg1 session:(id)arg2;
- (void)addSessionUnRead:(long long)arg1 session:(id)arg2;
- (void)clearUnreadNumberForSession:(id)arg1 autIncId:(long long)arg2;
- (void)clearUnreadNumberForSession:(id)arg1;
- (void)setGroupSessionState:(unsigned long long)arg1 session:(id)arg2;
- (_Bool)isSessionOnTop:(id)arg1;
- (void)setSessionOnTopOrNot:(_Bool)arg1 session:(id)arg2;
- (void)setLocalSessionOnTopOrNot:(_Bool)arg1 session:(id)arg2;
- (void)deleteSession:(id)arg1;
- (void)getSessionsWithFinishBlock:(CDUnknownBlockType)arg1;
- (id)getSessionInfoDic:(id)arg1;
- (id)createSession:(id)arg1;
- (id)getSession:(id)arg1;
- (id)getAllLocalSessions;
- (void)_updateAndMakeNotifactoinWithNewModel:(id)arg1;
- (void)_refeshAndMakeNotificationDelay;
- (void)_refreshAndMakeNotification;
- (void)initializeSessions;
- (id)init;

@end

