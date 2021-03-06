//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "QYPlayerBarrageContentView.h"

#import "QYBarrageSettingWordFilterItemCellDelegate-Protocol.h"
#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"

@class NSArray, NSString, QYBarrageSettingWordFilterAddView, QYBarrageSettingWordFilterEmptyView, QYBarrageSettingWordFilterHeaderView, QYBarrageWordFilterService, UITableView;

@interface QYBarrageSettingWordFilterView : QYPlayerBarrageContentView <UITableViewDelegate, UITableViewDataSource, QYBarrageSettingWordFilterItemCellDelegate>
{
    QYBarrageSettingWordFilterHeaderView *_headerView;
    QYBarrageSettingWordFilterAddView *_addView;
    QYBarrageSettingWordFilterEmptyView *_emptyView;
    UITableView *_tableView;
    QYBarrageWordFilterService *_filterService;
    NSArray *_keywordList;
}

@property(retain, nonatomic) NSArray *keywordList; // @synthesize keywordList=_keywordList;
@property(retain, nonatomic) QYBarrageWordFilterService *filterService; // @synthesize filterService=_filterService;
@property(retain, nonatomic) UITableView *tableView; // @synthesize tableView=_tableView;
@property(retain, nonatomic) QYBarrageSettingWordFilterEmptyView *emptyView; // @synthesize emptyView=_emptyView;
@property(retain, nonatomic) QYBarrageSettingWordFilterAddView *addView; // @synthesize addView=_addView;
@property(retain, nonatomic) QYBarrageSettingWordFilterHeaderView *headerView; // @synthesize headerView=_headerView;
- (void).cxx_destruct;
- (void)__fetchKeywordListFromRemote;
- (CDUnknownBlockType)updateBlock;
- (void)deleteKeyword:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)dealloc;
- (void)__commonInit;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

