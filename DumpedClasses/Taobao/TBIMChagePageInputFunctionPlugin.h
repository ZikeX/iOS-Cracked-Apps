//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "MCPluginBaseProtocol.h"

@class NSDictionary, NSString;

@interface TBIMChagePageInputFunctionPlugin : NSObject <MCPluginBaseProtocol>
{
    NSString *_sessionID;
    NSString *_pageName;
    NSString *_moduleSPM;
    id <MCPluginChatPageContextProtocol> _pluginContext;
}

@property(retain, nonatomic) id <MCPluginChatPageContextProtocol> pluginContext; // @synthesize pluginContext=_pluginContext;
@property(retain, nonatomic) NSString *moduleSPM; // @synthesize moduleSPM=_moduleSPM;
@property(retain, nonatomic) NSString *pageName; // @synthesize pageName=_pageName;
@property(retain, nonatomic) NSString *sessionID; // @synthesize sessionID=_sessionID;
- (void).cxx_destruct;
- (void)inputFunctionsFromConfig:(unsigned long long)arg1 sessionId:(id)arg2 serviceType:(int)arg3 pageName:(id)arg4 moduleSPM:(id)arg5;
- (void)processPage:(id)arg1;
- (id)getKey;
- (id)getPageName;
- (id)initWithConfig:(id)arg1 sesssionID:(id)arg2 pageName:(id)arg3 moduleSPM:(id)arg4;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(retain, nonatomic) NSDictionary *userInfo;

@end

