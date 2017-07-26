//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "APPBGeneratedMessage.h"

#import "GeneratedMessageProtocol.h"

@class NSString, ProtoOplog;

@interface ProtoOnlineMsg : APPBGeneratedMessage <GeneratedMessageProtocol>
{
    _Bool _hasBizType;
    _Bool _hasOplog;
    _Bool _hasBizName;
    _Bool _hasMultiDevice;
    _Bool _hasPersistentBiz;
    _Bool _multiDevice;
    _Bool _persistentBiz;
    int _bizType;
    ProtoOplog *_oplog;
    NSString *_bizName;
}

+ (id)parseFromData:(id)arg1;
@property(nonatomic) _Bool persistentBiz; // @synthesize persistentBiz=_persistentBiz;
@property(nonatomic) _Bool multiDevice; // @synthesize multiDevice=_multiDevice;
@property(retain, nonatomic) NSString *bizName; // @synthesize bizName=_bizName;
@property(retain, nonatomic) ProtoOplog *oplog; // @synthesize oplog=_oplog;
@property(nonatomic) int bizType; // @synthesize bizType=_bizType;
@property(readonly) _Bool hasPersistentBiz; // @synthesize hasPersistentBiz=_hasPersistentBiz;
@property(readonly) _Bool hasMultiDevice; // @synthesize hasMultiDevice=_hasMultiDevice;
@property(readonly) _Bool hasBizName; // @synthesize hasBizName=_hasBizName;
@property(readonly) _Bool hasOplog; // @synthesize hasOplog=_hasOplog;
@property(readonly) _Bool hasBizType; // @synthesize hasBizType=_hasBizType;
- (void).cxx_destruct;
- (void)mergeFromCodedInputStream:(id)arg1 extensionRegistry:(id)arg2;
- (int)serializedSize;
- (void)writeToCodedOutputStream:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
