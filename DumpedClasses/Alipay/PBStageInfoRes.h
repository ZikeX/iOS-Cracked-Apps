//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "APPBGeneratedMessage.h"

#import "GeneratedMessageProtocol.h"

@class NSMutableArray, NSString, PBBaseRes;

@interface PBStageInfoRes : APPBGeneratedMessage <GeneratedMessageProtocol>
{
    _Bool _hasBase;
    _Bool _hasLocale;
    _Bool _hasDataversion;
    PBBaseRes *_base;
    NSString *_locale;
    NSString *_dataversion;
    NSMutableArray *_appBaseInfos;
    NSMutableArray *_parentStages;
}

+ (id)parseFromData:(id)arg1;
@property(retain, nonatomic) NSMutableArray *parentStages; // @synthesize parentStages=_parentStages;
@property(retain, nonatomic) NSMutableArray *appBaseInfos; // @synthesize appBaseInfos=_appBaseInfos;
@property(retain, nonatomic) NSString *dataversion; // @synthesize dataversion=_dataversion;
@property(retain, nonatomic) NSString *locale; // @synthesize locale=_locale;
@property(retain, nonatomic) PBBaseRes *base; // @synthesize base=_base;
@property(readonly) _Bool hasDataversion; // @synthesize hasDataversion=_hasDataversion;
@property(readonly) _Bool hasLocale; // @synthesize hasLocale=_hasLocale;
@property(readonly) _Bool hasBase; // @synthesize hasBase=_hasBase;
- (void).cxx_destruct;
- (void)mergeFromCodedInputStream:(id)arg1 extensionRegistry:(id)arg2;
- (void)addParentStages:(id)arg1;
- (void)setParentStagesArray:(id)arg1;
- (void)addAppBaseInfos:(id)arg1;
- (void)setAppBaseInfosArray:(id)arg1;
- (int)serializedSize;
- (void)writeToCodedOutputStream:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

