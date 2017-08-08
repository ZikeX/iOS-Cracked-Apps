//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "FBPowerLogsDownloadServiceDelegate-Protocol.h"

@class FBDiagnosticsStartUpRatioAnalyser, FBPowerLogsDownloadService, NSArray, NSString;
@protocol FBPowerLogsAllAppSessionDataSourceDelegate, OS_dispatch_queue;

@interface FBPowerLogsAllAppSessionDataSource : NSObject <FBPowerLogsDownloadServiceDelegate>
{
    FBPowerLogsDownloadService *_downloadService;
    NSArray *_fetchedResults;
    FBDiagnosticsStartUpRatioAnalyser *_analyser;
    NSObject<OS_dispatch_queue> *_sqlClientQueue;
    id <FBPowerLogsAllAppSessionDataSourceDelegate> _delegate;
}

@property(nonatomic) __weak id <FBPowerLogsAllAppSessionDataSourceDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)_analyserDidFinishWithResults:(id)arg1 error:(id)arg2;
- (void)powerLogDownloadService:(id)arg1 didFailWithError:(id)arg2;
- (void)powerLogDownloadService:(id)arg1 didFinishWithSQLLogFiles:(id)arg2;
- (void)startFetchingAppSessionData;
- (id)fetchedAppSessionData;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
