//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class FMDatabase;

@interface FMVoiceMessageManager : NSObject
{
    FMDatabase *_db;
}

+ (id)sharedInstance;
- (void).cxx_destruct;
- (void)insertReadMessage:(id)arg1;
- (_Bool)isMessageRead:(id)arg1;
- (_Bool)setupLocalDB;
- (void)dealloc;
- (id)init;

@end
