//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSObject<OS_dispatch_queue>;

@interface QNBHistoryDBManager : NSObject
{
    id <P_QNBDbConfig> _db;
    NSObject<OS_dispatch_queue> *_queue;
}

+ (id)shareInstance;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(retain, nonatomic) id <P_QNBDbConfig> db; // @synthesize db=_db;
- (void).cxx_destruct;
- (void)query:(id)arg1 withBlock:(CDUnknownBlockType)arg2;
- (void)deleteItems:(id)arg1 withBlock:(CDUnknownBlockType)arg2;
- (void)deleteItemBySql:(id)arg1 withBlock:(CDUnknownBlockType)arg2;
- (void)updateItemsBySqlWithParamArray:(id)arg1 withBlock:(CDUnknownBlockType)arg2;
- (void)exeSql:(id)arg1 withBlock:(CDUnknownBlockType)arg2;
- (void)createDataBase;
- (id)init;

@end

