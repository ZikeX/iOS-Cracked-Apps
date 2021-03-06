//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "APCacheProtocol-Protocol.h"

@class APLRUMemoryCache, NSString;
@protocol APLRUDiskCacheProtocol, OS_dispatch_queue;

@interface APLRUDiskCache : NSObject <APCacheProtocol>
{
    long long _capacity;
    long long _removeSemaphore;
    id <APLRUDiskCacheProtocol> _proxy;
    NSObject<OS_dispatch_queue> *_detachedDBQueue;
    APLRUMemoryCache *_memoryCache;
    _Bool _crypted;
    _Bool _userDependent;
    NSString *_name;
}

+ (id)sharedPreferencesOfLibraryCaches;
+ (id)sharedPreferencesOfTmp;
+ (id)sharedPreferences;
@property(readonly, nonatomic) _Bool userDependent; // @synthesize userDependent=_userDependent;
@property(readonly, nonatomic) _Bool crypted; // @synthesize crypted=_crypted;
@property(readonly, nonatomic) NSString *name; // @synthesize name=_name;
@property(readonly, nonatomic) long long capacity; // @synthesize capacity=_capacity;
- (void).cxx_destruct;
- (void)removeObjectsWithKeys:(id)arg1;
- (void)removeObjectsWithSqlLike:(id)arg1;
- (void)addObjects:(id)arg1;
- (void)removeAllObjects;
- (void)removeObjectForKey:(id)arg1;
- (void)doRemoveObjectForKey:(id)arg1;
- (id)objectForKey:(id)arg1;
- (void)setObject:(id)arg1 forKey:(id)arg2 expire:(double)arg3;
- (void)setObject:(id)arg1 forKey:(id)arg2;
- (void)enqueue:(CDUnknownBlockType)arg1;
- (void)currentUserUpdated:(id)arg1;
- (void)updateTableName;
- (void)dealloc;
- (id)initWithName:(id)arg1 capacity:(long long)arg2 userDependent:(_Bool)arg3 crypted:(_Bool)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

