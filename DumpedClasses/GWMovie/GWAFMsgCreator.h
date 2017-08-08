//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug  6 2017 20:42:30).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "GWProviderManagerRequestDelegate-Protocol.h"

@class GWAppDotNetAPIClient, GWDownSessionManager, NSString;
@protocol GWProviderManagerProgressDelegate, GWProviderManagerResponseDelegate;

@interface GWAFMsgCreator : NSObject <GWProviderManagerRequestDelegate>
{
    id <GWProviderManagerResponseDelegate> _responseDelegate;
    id <GWProviderManagerProgressDelegate> _progressDelegate;
    GWDownSessionManager *_downManager;
    GWAppDotNetAPIClient *_manager;
}

@property(retain, nonatomic) GWAppDotNetAPIClient *manager; // @synthesize manager=_manager;
@property(retain, nonatomic) GWDownSessionManager *downManager; // @synthesize downManager=_downManager;
@property(nonatomic) __weak id <GWProviderManagerProgressDelegate> progressDelegate; // @synthesize progressDelegate=_progressDelegate;
@property(nonatomic) __weak id <GWProviderManagerResponseDelegate> responseDelegate; // @synthesize responseDelegate=_responseDelegate;
- (void).cxx_destruct;
- (void)request:(id)arg1 didReceiveBytes:(id)arg2;
- (void)request:(id)arg1 didReceiveResponseHeaders:(id)arg2;
- (void)requestFailed:(id)arg1 withError:(id)arg2;
- (void)requestFinished:(id)arg1;
- (void)requestStarted:(id)arg1;
- (id)operationWithProvider:(id)arg1 withUrlStr:(id)arg2 withParams:(id)arg3;
- (id)responseDataWithRequest:(id)arg1;
- (id)responseStringWithRequest:(id)arg1;
- (long long)responseStatusCodeWithRequest:(id)arg1;
- (void)cancelRequest:(id)arg1;
- (id)Post:(id)arg1 parameters:(id)arg2 provider:(id)arg3;
- (id)Post:(id)arg1 formDatas:(id)arg2 parameters:(id)arg3 provider:(id)arg4;
- (id)Get:(id)arg1 parameters:(id)arg2 provider:(id)arg3;
- (id)downLoadWithProvider:(id)arg1 urlString:(id)arg2;
- (void)downloadTaskCompletionWithProvider:(id)arg1 task:(id)arg2 filePath:(id)arg3 error:(id)arg4;
- (void)configureRequest:(id)arg1 withProvider:(id)arg2;
- (void)operationDidStart:(id)arg1;
- (id)init;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
