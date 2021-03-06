//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "TVKLitePreCacheManagerDelegate.h"

@class NSMutableDictionary, NSString, PAAdFakeViewController;

@interface PAAdMsgUtility : NSObject <TVKLitePreCacheManagerDelegate>
{
    _Bool _muted;
    _Bool _allowWWANAutoPlay;
    PAAdFakeViewController *_fakeVC;
    NSMutableDictionary *_preloadVideoDic;
}

+ (id)sharedInstance;
@property(retain, nonatomic) NSMutableDictionary *preloadVideoDic; // @synthesize preloadVideoDic=_preloadVideoDic;
@property(retain, nonatomic) PAAdFakeViewController *fakeVC; // @synthesize fakeVC=_fakeVC;
@property(nonatomic) _Bool allowWWANAutoPlay; // @synthesize allowWWANAutoPlay=_allowWWANAutoPlay;
@property(nonatomic) _Bool muted; // @synthesize muted=_muted;
- (void).cxx_destruct;
- (_Bool)isPAAdMsgVCTopInWindow:(id)arg1;
- (void)pushNewVC:(id)arg1 toAdMsgVC:(id)arg2;
- (void)presentViewController:(id)arg1 fromNavController:(id)arg2;
- (void)clearAllPreloadVideoData;
- (_Bool)isPAAdMsgPreloadingVideo:(id)arg1;
- (_Bool)isVideoCached:(id)arg1;
- (void)addPreloadVideoInfo:(id)arg1;
- (void)startPreCacheTaskCallbackForVid:(id)arg1 ResultPlayId:(int)arg2 FileID:(id)arg3;
- (void)stopAllVideoPreDownload;
- (void)preDownloadVideoModel:(id)arg1;
- (void)networkChanged:(id)arg1;
- (void)initTVKLitePlayer;
- (id)getFileIDWithVid:(id)arg1;
- (void)writePreloadVideoDic;
- (void)readPreloadVideoDic;
- (void)resetUtilityWithoutStopPreDownload;
- (void)resetUtility;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

