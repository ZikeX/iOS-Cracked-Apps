//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "FBFGLFetchResultAggregatorDelegate-Protocol.h"
#import "FBFGLLocationMutatorListener-Protocol.h"
#import "FBOnOffService-Protocol.h"

@class FBFGLLocationMutator, FBFGLLocationServiceConfig, FBFGLLogger, FBFGLMultiSignalsResult, FBUserSession, NSMutableArray, NSSet, NSString;
@protocol OS_dispatch_queue;

@interface FBFGLLocationService : NSObject <FBFGLFetchResultAggregatorDelegate, FBOnOffService, FBFGLLocationMutatorListener>
{
    FBUserSession *_session;
    NSSet *_fetchers;
    NSMutableArray *_aggregators;
    FBFGLLocationMutator *_locationMutator;
    FBFGLLogger *_logger;
    FBFGLLocationServiceConfig *_config;
    FBFGLMultiSignalsResult *_lastLocationResult;
    _Bool _off;
    NSObject<OS_dispatch_queue> *_workQueue;
}

@property(retain, nonatomic) NSObject<OS_dispatch_queue> *workQueue; // @synthesize workQueue=_workQueue;
@property(readonly, nonatomic) _Bool off; // @synthesize off=_off;
- (void).cxx_destruct;
- (void)locationMutationFinished:(id)arg1 mutationId:(id)arg2 error:(id)arg3;
- (void)FBFGLLocationFetchResultReady:(id)arg1 aggregator:(id)arg2 error:(id)arg3;
- (void)performLocationFetch;
- (void)turnOff;
- (void)turnOn;
- (id)initWithSession:(id)arg1 locationFetchers:(id)arg2 locationMutator:(id)arg3 logger:(id)arg4 config:(id)arg5;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

