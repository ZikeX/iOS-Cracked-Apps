//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "KGThemeButton.h"

@class KGThemeImageView, KGThemeLabel, NSString;

@interface FollowReBtn : KGThemeButton
{
    KGThemeImageView *typeimg;
    KGThemeLabel *typelab;
    long long _playerId;
    unsigned long long _followtype;
    NSString *_nickname;
}

@property(retain, nonatomic) NSString *nickname; // @synthesize nickname=_nickname;
@property(nonatomic) unsigned long long followtype; // @synthesize followtype=_followtype;
@property(nonatomic) long long playerId; // @synthesize playerId=_playerId;
- (void).cxx_destruct;
- (void)updateFollowBtn:(id)arg1;
- (void)dealloc;
- (void)unRegisterNotification;
- (void)registerNotification;
- (void)layoutSubviews;
- (id)init;

@end
