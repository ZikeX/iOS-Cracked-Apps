//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"

@class NSArray, NSString;

@interface TRFlightNumDateSource : NSObject <UITableViewDelegate, UITableViewDataSource>
{
    _Bool _isSug;
    NSString *_sugFlightNum;
    NSArray *_flightList;
    CDUnknownBlockType _flightNumberSelectedBlock;
    CDUnknownBlockType _clearFlightNumberBlock;
    CDUnknownBlockType _keyBoardScrollDown;
}

@property(copy, nonatomic) CDUnknownBlockType keyBoardScrollDown; // @synthesize keyBoardScrollDown=_keyBoardScrollDown;
@property(copy, nonatomic) CDUnknownBlockType clearFlightNumberBlock; // @synthesize clearFlightNumberBlock=_clearFlightNumberBlock;
@property(copy, nonatomic) CDUnknownBlockType flightNumberSelectedBlock; // @synthesize flightNumberSelectedBlock=_flightNumberSelectedBlock;
@property(nonatomic) _Bool isSug; // @synthesize isSug=_isSug;
@property(retain, nonatomic) NSArray *flightList; // @synthesize flightList=_flightList;
@property(retain, nonatomic) NSString *sugFlightNum; // @synthesize sugFlightNum=_sugFlightNum;
- (void).cxx_destruct;
- (void)clearHistoryFlightNum;
- (void)scrollViewDidScroll:(id)arg1;
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForFooterInSection:(long long)arg2;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

