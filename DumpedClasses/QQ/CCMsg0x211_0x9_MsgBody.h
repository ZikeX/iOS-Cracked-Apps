//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class CCMsg0x211_0x9_MsgPrinter, NSString;

@interface CCMsg0x211_0x9_MsgBody : NSObject
{
    NSString *_strService;
    unsigned int _uCMD;
    CCMsg0x211_0x9_MsgPrinter *_msgPrinter;
    int _xo;
}

+ (id)parseFromMsgBodyPack:(struct CPBMessageDecoder *)arg1;
- (void)dealloc;
- (void)parseToMsgBodyPack:(struct CPBMessageEncoder *)arg1;

// Remaining properties
@property(retain, nonatomic) CCMsg0x211_0x9_MsgPrinter *msgPrinter; // @dynamic msgPrinter;
@property(copy, nonatomic) NSString *strService; // @dynamic strService;
@property(nonatomic) unsigned int uCMD; // @dynamic uCMD;

@end
