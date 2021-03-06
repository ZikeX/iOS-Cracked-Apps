//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "XYPHBaseTableRefreshViewController.h"

#import "UISearchControllerDelegate.h"
#import "UISearchResultsUpdating.h"
#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"

@class NSString, UISearchController, UITableView, XYPHRefreshBaseDataSource;

@interface XYPHPostModelAtUserViewController : XYPHBaseTableRefreshViewController <UITableViewDelegate, UITableViewDataSource, UISearchResultsUpdating, UISearchControllerDelegate>
{
    XYPHRefreshBaseDataSource *_dataSource;
    id <XYPHPostModelAtUserViewControllerDelegate> _delegate;
    UISearchController *_searchController;
    UITableView *_tableView;
}

@property(retain, nonatomic) UITableView *tableView; // @synthesize tableView=_tableView;
@property(retain, nonatomic) UISearchController *searchController; // @synthesize searchController=_searchController;
@property(nonatomic) __weak id <XYPHPostModelAtUserViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)setDataSource:(id)arg1;
- (void).cxx_destruct;
- (void)cancelBarButtonTouchupInSide:(id)arg1;
- (void)willPresentSearchController:(id)arg1;
- (void)didDismissSearchController:(id)arg1;
- (void)updateSearchResultsForSearchController:(id)arg1;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 estimatedHeightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (id)dataSource;
- (void)setupSearchController;
- (void)setupNavigationItem;
- (void)setupTableView;
- (void)setup;
- (void)didReceiveMemoryWarning;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

