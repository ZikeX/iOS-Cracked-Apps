//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface QQAVNotifyModel_MsgHeader : NSObject
{
    unsigned int _bodyType;
    unsigned int _sessionType;
    unsigned long long _toUin;
    NSString *_toMobile;
    unsigned long long _roomId;
    int _xo;
}

- (void)dealloc;

// Remaining properties
@property(nonatomic) unsigned int bodyType; // @dynamic bodyType;
@property(nonatomic) unsigned long long roomId; // @dynamic roomId;
@property(nonatomic) unsigned int sessionType; // @dynamic sessionType;
@property(retain, nonatomic) NSString *toMobile; // @dynamic toMobile;
@property(nonatomic) unsigned long long toUin; // @dynamic toUin;

@end

