//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSMutableDictionary;

@interface ChannelListCacheManager : NSObject
{
    NSMutableDictionary *_mapChannelListCache;
}

+ (void)releaseInstance;
+ (id)sharedInstance;
@property(retain, nonatomic) NSMutableDictionary *mapChannelListCache; // @synthesize mapChannelListCache=_mapChannelListCache;
- (void)dealloc;
- (void)clearCache;
- (id)init;

@end

