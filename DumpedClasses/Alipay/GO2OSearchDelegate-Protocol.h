//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@protocol GO2OSearchDelegate <NSObject>
- (void)didSelectQuery:(NSString *)arg1 searchSrc:(NSString *)arg2;

@optional
- (void)didCancelQuery;
- (void)willBeginSearch;
@end

