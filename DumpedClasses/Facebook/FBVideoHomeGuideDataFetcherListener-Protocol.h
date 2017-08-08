//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class FBVideoHomeGuideDataFetcher, NSError, NSOrderedSet, NSString;

@protocol FBVideoHomeGuideDataFetcherListener <NSObject>
- (void)videoHomeGuideDataFetcherDidMarkDataDirty:(FBVideoHomeGuideDataFetcher *)arg1 withReason:(NSString *)arg2;
- (void)videoHomeGuideDataFetcherDidClearDataAndRequests:(FBVideoHomeGuideDataFetcher *)arg1;
- (void)videoHomeGuideDataFetcher:(FBVideoHomeGuideDataFetcher *)arg1 didLoadUnits:(NSOrderedSet *)arg2 loadType:(unsigned long long)arg3 requestType:(unsigned long long)arg4 error:(NSError *)arg5;
- (void)videoHomeGuideDataFetcherWillLoadUnits:(FBVideoHomeGuideDataFetcher *)arg1 loadType:(unsigned long long)arg2;
@end
