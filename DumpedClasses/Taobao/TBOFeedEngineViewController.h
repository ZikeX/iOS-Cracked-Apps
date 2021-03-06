//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TBViewController.h"

@class MocEngine, NSString;

@interface TBOFeedEngineViewController : TBViewController
{
    MocEngine *_mocEngine;
    NSString *_mtopApi;
    NSString *_mtopVersion;
}

@property(copy, nonatomic) NSString *mtopVersion; // @synthesize mtopVersion=_mtopVersion;
@property(copy, nonatomic) NSString *mtopApi; // @synthesize mtopApi=_mtopApi;
@property(retain, nonatomic) MocEngine *mocEngine; // @synthesize mocEngine=_mocEngine;
- (void).cxx_destruct;
- (void)setupList;
- (void)dealloc;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)loadView;
- (void)viewDidLoad;
- (id)initWithNavigatorURL:(id)arg1 query:(id)arg2;

@end

