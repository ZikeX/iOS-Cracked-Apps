//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "KTVMyOpusCellProtocol.h"
#import "KTVTableViewDataSource.h"
#import "KTVTableViewDelegate.h"

@class KGDefaultNetErrorView, KTVCommonTableViewRE, KTVEmptyView, KTVOpusInfo, NSString;

@interface KTVMyOpusView : UIView <KTVMyOpusCellProtocol, KTVTableViewDelegate, KTVTableViewDataSource>
{
    long long curIndex;
    KTVOpusInfo *curInfo;
    CDUnknownBlockType _selectedBlock;
    KTVCommonTableViewRE *_tableView;
    id <KTVMyOpusViewEventDelegate> _delegate;
    id <KTVMyOpusViewDataSource> _dataSource;
    KTVEmptyView *_emptyView;
    KGDefaultNetErrorView *_netErrorView;
}

@property(retain, nonatomic) KGDefaultNetErrorView *netErrorView; // @synthesize netErrorView=_netErrorView;
@property(retain, nonatomic) KTVEmptyView *emptyView; // @synthesize emptyView=_emptyView;
@property(nonatomic) __weak id <KTVMyOpusViewDataSource> dataSource; // @synthesize dataSource=_dataSource;
@property(nonatomic) __weak id <KTVMyOpusViewEventDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) KTVCommonTableViewRE *tableView; // @synthesize tableView=_tableView;
@property(copy, nonatomic) CDUnknownBlockType selectedBlock; // @synthesize selectedBlock=_selectedBlock;
- (void).cxx_destruct;
- (void)dismissEmpty;
- (void)chooseSong:(long long)arg1;
- (void)clickEmptyViewButton:(id)arg1;
- (void)showEmpty;
- (void)dismissNetError;
- (void)showNetError;
- (void)ktvTableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)ktvTableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (void)ktvTableView:(id)arg1 startAsyncRequestData:(_Bool)arg2;
- (id)ktvTableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)ktvTableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)reflash:(_Bool)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
