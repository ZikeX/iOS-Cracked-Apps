//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug  6 2017 20:42:30).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GWPagingProvider.h"

@class NSString;

@interface GWNSearchCinemaProvider : GWPagingProvider
{
    NSString *citycode;
    NSString *name;
    NSString *_movieid;
}

@property(copy, nonatomic) NSString *movieid; // @synthesize movieid=_movieid;
@property(copy, nonatomic) NSString *name; // @synthesize name;
- (void)setCitycode:(id)arg1;
- (id)citycode;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;

@end
