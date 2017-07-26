//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TBViewController.h"

#import "TBModelStatusDelegate.h"

@class NSDictionary, NSString, TBCouponCustomDeleteTableView, TBCouponListModel, TBCouponListViewDataSource, TBCouponListViewTableViewDelegate, TBModelStatusHandler, UIView;

@interface TBCouponListHintViewController : TBViewController <TBModelStatusDelegate>
{
    TBCouponListViewDataSource *_dateSource;
    TBCouponListViewTableViewDelegate *_tableViewDeldegate;
    long long _filterType;
    long long _bizType;
    TBCouponCustomDeleteTableView *_tableView;
    TBModelStatusHandler *_handler;
    TBCouponListModel *_listModel;
    NSString *_jumpUrl;
    NSDictionary *_datasorceDict;
    NSString *_titleStr;
    UIView *_loactionView;
    long long _orzStatusBarStyle;
    struct CGPoint _tableViewContentOffset;
}

@property long long orzStatusBarStyle; // @synthesize orzStatusBarStyle=_orzStatusBarStyle;
@property(nonatomic) struct CGPoint tableViewContentOffset; // @synthesize tableViewContentOffset=_tableViewContentOffset;
@property(retain, nonatomic) UIView *loactionView; // @synthesize loactionView=_loactionView;
@property(copy, nonatomic) NSString *titleStr; // @synthesize titleStr=_titleStr;
@property(retain, nonatomic) NSDictionary *datasorceDict; // @synthesize datasorceDict=_datasorceDict;
@property(retain, nonatomic) NSString *jumpUrl; // @synthesize jumpUrl=_jumpUrl;
@property(retain, nonatomic) TBCouponListModel *listModel; // @synthesize listModel=_listModel;
@property(retain, nonatomic) TBModelStatusHandler *handler; // @synthesize handler=_handler;
@property(retain, nonatomic) TBCouponCustomDeleteTableView *tableView; // @synthesize tableView=_tableView;
@property(nonatomic) long long bizType; // @synthesize bizType=_bizType;
@property(nonatomic) long long filterType; // @synthesize filterType=_filterType;
@property(retain, nonatomic) TBCouponListViewTableViewDelegate *tableViewDeldegate; // @synthesize tableViewDeldegate=_tableViewDeldegate;
@property(retain, nonatomic) TBCouponListViewDataSource *dateSource; // @synthesize dateSource=_dateSource;
- (void).cxx_destruct;
- (void)dealloc;
- (void)didReceiveMemoryWarning;
- (void)openURL:(id)arg1 withParam:(id)arg2;
- (void)setupTableView;
- (void)setUpViews;
- (void)showErrorView:(id)arg1 actionSelector:(SEL)arg2 context:(id)arg3 error:(id)arg4;
- (id)configmodel2mutableArray:(id)arg1;
- (void)openURL;
- (void)recoveTableOffset;
- (void)analytics:(id)arg1;
- (void)loadDataSource;
- (_Bool)isShowPoitionView;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)decideChangeApearance4Festival;
- (void)handleFestivalSwitch:(id)arg1;
- (id)initWithCouponListModel:(id)arg1 title:(id)arg2 filterType:(long long)arg3 bizType:(long long)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
