//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TBViewController.h"

#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"

@class NSDictionary, NSString, TBModelStatusHandler, TBTakeoutErrorView, TBTakeoutItemDetailViewModel, TBTakeoutOrderAgainViewModel, TBTakeoutOrderDetailConfigure, TBTakeoutOrderDetailFooterView, TBTakeoutOrderDetailViewModel, UITableView;

@interface TBTakeoutOrderDetailViewController : TBViewController <UITableViewDataSource, UITableViewDelegate>
{
    NSString *_orderId;
    NSString *_from;
    TBTakeoutOrderDetailViewModel *_viewModel;
    TBTakeoutOrderAgainViewModel *_orderAgainViewModel;
    UITableView *_tableView;
    TBTakeoutOrderDetailFooterView *_footerView;
    TBTakeoutErrorView *_errorView;
    NSDictionary *_handlers;
    CDUnknownBlockType _handler;
    TBTakeoutOrderDetailConfigure *_configure;
    TBModelStatusHandler *_errorUIModelStatusHdlr;
    TBTakeoutItemDetailViewModel *_itemViewModel;
}

@property(retain, nonatomic) TBTakeoutItemDetailViewModel *itemViewModel; // @synthesize itemViewModel=_itemViewModel;
@property(retain, nonatomic) TBModelStatusHandler *errorUIModelStatusHdlr; // @synthesize errorUIModelStatusHdlr=_errorUIModelStatusHdlr;
@property(retain, nonatomic) TBTakeoutOrderDetailConfigure *configure; // @synthesize configure=_configure;
@property(copy, nonatomic) CDUnknownBlockType handler; // @synthesize handler=_handler;
@property(retain, nonatomic) NSDictionary *handlers; // @synthesize handlers=_handlers;
@property(retain, nonatomic) TBTakeoutErrorView *errorView; // @synthesize errorView=_errorView;
@property(retain, nonatomic) TBTakeoutOrderDetailFooterView *footerView; // @synthesize footerView=_footerView;
@property(retain, nonatomic) UITableView *tableView; // @synthesize tableView=_tableView;
@property(retain, nonatomic) TBTakeoutOrderAgainViewModel *orderAgainViewModel; // @synthesize orderAgainViewModel=_orderAgainViewModel;
@property(retain, nonatomic) TBTakeoutOrderDetailViewModel *viewModel; // @synthesize viewModel=_viewModel;
@property(retain, nonatomic) NSString *from; // @synthesize from=_from;
@property(retain, nonatomic) NSString *orderId; // @synthesize orderId=_orderId;
- (void).cxx_destruct;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;
- (void)tableView:(id)arg1 willDisplayFooterView:(id)arg2 forSection:(long long)arg3;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)handleRateEvent:(id)arg1;
- (void)sendConfirm;
- (void)handleConfirmEvent:(id)arg1;
- (void)deleteOrder;
- (void)handleDeleteEvent:(id)arg1;
- (void)handleReminderEvent:(id)arg1;
- (void)handlePayEvent:(id)arg1;
- (void)handleOrderEvent:(id)arg1;
- (void)handleCancelEvent:(id)arg1;
- (void)handleComplaintEvent:(id)arg1;
- (void)handleServiceCellCheckGroupInfoEvent:(id)arg1;
- (void)handleServiceCellCheckLiangPiaoEvent:(id)arg1;
- (void)handleServiceCellExpandEvent:(id)arg1;
- (void)handleRiderUpdateEvent:(id)arg1;
- (void)handleEvent:(id)arg1 withObject:(id)arg2;
- (void)accsStart;
- (void)reload;
- (void)loadData;
- (void)didReceiveMemoryWarning;
- (void)viewDidLayoutSubviews;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (id)createMoreCustomItems;
- (id)defaultMorePopoverItems;
- (void)viewDidLoad;
- (id)initWithNavigatorURL:(id)arg1 query:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
