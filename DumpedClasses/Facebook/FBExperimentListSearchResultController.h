//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"

@class NSArray, NSString;
@protocol FBExperimentListSearchResponderProtocol;

@interface FBExperimentListSearchResultController : NSObject <UITableViewDataSource, UITableViewDelegate>
{
    NSString *_searchedKeywordInLowerCase;
    NSArray *_searchResult;
    id <FBExperimentListSearchResponderProtocol> _responder;
    NSArray *_allResults;
}

@property(copy, nonatomic) NSArray *allResults; // @synthesize allResults=_allResults;
@property(nonatomic) __weak id <FBExperimentListSearchResponderProtocol> responder; // @synthesize responder=_responder;
@property(copy, nonatomic) NSArray *searchResult; // @synthesize searchResult=_searchResult;
@property(copy, nonatomic) NSString *searchedKeywordInLowerCase; // @synthesize searchedKeywordInLowerCase=_searchedKeywordInLowerCase;
- (void).cxx_destruct;
- (void)searchWithSearchText:(id)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)initWithDataSource:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
