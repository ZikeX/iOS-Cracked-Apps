//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CTRootView.h"

#import "CTHotelFilterViewDelegate.h"
#import "CTHotelListMoreViewDelegate.h"
#import "CTHotelListNoDateFilterContentCellDelegate.h"
#import "CTHotelMainLocationUtilDelegate.h"
#import "CTHotelRecommendFilterCellDelegate.h"
#import "CTNetErrorDelegate.h"
#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"

@class CTHotelFilterView, CTHotelMainLocationUtil, CTHotelSubFilterListView, CTHotelTabbarView, CTHotelUserEncourageView, CTLineView, CTTableView, HotelSeniorFilterModel, NSArray, NSIndexPath, NSMutableArray, NSString, NSTimer, UIView;

@interface CTAllHotelListView : CTRootView <CTHotelListNoDateFilterContentCellDelegate, CTHotelListMoreViewDelegate, CTNetErrorDelegate, UITableViewDelegate, UITableViewDataSource, CTHotelRecommendFilterCellDelegate, CTHotelMainLocationUtilDelegate, CTHotelFilterViewDelegate>
{
    double lastOffset;
    _Bool filterBarToHide;
    _Bool searchBarToHide;
    NSIndexPath *mIndexPath;
    UIView *_vHeaderForMoreSurrounding;
    double h_NoDateFilterContentCell;
    _Bool _locateLimited;
    _Bool _isLoadingError;
    _Bool _isShowGHIHotel;
    _Bool _isShowOverSeaSurroundingHotelSection;
    _Bool _bShowZoneFilterView;
    _Bool _showRoomid;
    _Bool _bScrollDragged;
    int _errorCode;
    NSArray *_dataArray;
    NSArray *_dataArray2;
    NSArray *_dataArray_overSeaSurroundingHotel;
    NSMutableArray *_filterMarkMArray;
    UIView *_bottomBackView_;
    UIView *_topClickView_;
    CTTableView *__tableView;
    CTHotelUserEncourageView *_encourageView_;
    id <CTAllHotelListViewDelegate> _allListDelegate;
    NSString *_errorInfo;
    UIView *_viewForLoading;
    NSMutableArray *_dataArrayForGHI;
    HotelSeniorFilterModel *_filterModel;
    NSString *_positionRemark;
    CTHotelFilterView *_selfDefFilterView;
    CTHotelFilterView *_zoneFilterView;
    long long _showZonePosition;
    NSTimer *_overseaPriceTimer;
    CTHotelTabbarView *_btSort;
    CTHotelTabbarView *_btPriceStar;
    CTHotelTabbarView *_btArea;
    CTHotelTabbarView *_btnFilter;
    CTLineView *_separatorLine;
    CTHotelSubFilterListView *_subFilterListView;
    NSArray *_sectionTypeList;
    CTHotelMainLocationUtil *_locationUtil;
}

@property(retain, nonatomic) CTHotelMainLocationUtil *locationUtil; // @synthesize locationUtil=_locationUtil;
@property(nonatomic) _Bool bScrollDragged; // @synthesize bScrollDragged=_bScrollDragged;
@property(retain, nonatomic) NSArray *sectionTypeList; // @synthesize sectionTypeList=_sectionTypeList;
@property(nonatomic) __weak CTHotelSubFilterListView *subFilterListView; // @synthesize subFilterListView=_subFilterListView;
@property(retain, nonatomic) CTLineView *separatorLine; // @synthesize separatorLine=_separatorLine;
@property(retain, nonatomic) CTHotelTabbarView *btnFilter; // @synthesize btnFilter=_btnFilter;
@property(retain, nonatomic) CTHotelTabbarView *btArea; // @synthesize btArea=_btArea;
@property(retain, nonatomic) CTHotelTabbarView *btPriceStar; // @synthesize btPriceStar=_btPriceStar;
@property(retain, nonatomic) CTHotelTabbarView *btSort; // @synthesize btSort=_btSort;
@property(retain, nonatomic) NSTimer *overseaPriceTimer; // @synthesize overseaPriceTimer=_overseaPriceTimer;
@property(nonatomic) _Bool showRoomid; // @synthesize showRoomid=_showRoomid;
@property(nonatomic) long long showZonePosition; // @synthesize showZonePosition=_showZonePosition;
@property(nonatomic) _Bool bShowZoneFilterView; // @synthesize bShowZoneFilterView=_bShowZoneFilterView;
@property(retain, nonatomic) CTHotelFilterView *zoneFilterView; // @synthesize zoneFilterView=_zoneFilterView;
@property(retain, nonatomic) CTHotelFilterView *selfDefFilterView; // @synthesize selfDefFilterView=_selfDefFilterView;
@property(retain, nonatomic) NSString *positionRemark; // @synthesize positionRemark=_positionRemark;
@property(retain, nonatomic) HotelSeniorFilterModel *filterModel; // @synthesize filterModel=_filterModel;
@property(retain, nonatomic) NSMutableArray *dataArrayForGHI; // @synthesize dataArrayForGHI=_dataArrayForGHI;
@property _Bool isShowOverSeaSurroundingHotelSection; // @synthesize isShowOverSeaSurroundingHotelSection=_isShowOverSeaSurroundingHotelSection;
@property _Bool isShowGHIHotel; // @synthesize isShowGHIHotel=_isShowGHIHotel;
@property(nonatomic) int errorCode; // @synthesize errorCode=_errorCode;
@property(retain, nonatomic) UIView *viewForLoading; // @synthesize viewForLoading=_viewForLoading;
@property(nonatomic) _Bool isLoadingError; // @synthesize isLoadingError=_isLoadingError;
@property(nonatomic) _Bool locateLimited; // @synthesize locateLimited=_locateLimited;
@property(retain, nonatomic) NSString *errorInfo; // @synthesize errorInfo=_errorInfo;
@property(nonatomic) __weak id <CTAllHotelListViewDelegate> allListDelegate; // @synthesize allListDelegate=_allListDelegate;
@property(retain, nonatomic) CTHotelUserEncourageView *encourageView_; // @synthesize encourageView_=_encourageView_;
@property(retain, nonatomic) CTTableView *_tableView; // @synthesize _tableView=__tableView;
@property(retain, nonatomic) UIView *topClickView_; // @synthesize topClickView_=_topClickView_;
@property(retain, nonatomic) UIView *bottomBackView_; // @synthesize bottomBackView_=_bottomBackView_;
@property(retain, nonatomic) NSMutableArray *filterMarkMArray; // @synthesize filterMarkMArray=_filterMarkMArray;
@property(retain, nonatomic) NSArray *dataArray_overSeaSurroundingHotel; // @synthesize dataArray_overSeaSurroundingHotel=_dataArray_overSeaSurroundingHotel;
@property(retain, nonatomic) NSArray *dataArray2; // @synthesize dataArray2=_dataArray2;
@property(retain, nonatomic) NSArray *dataArray; // @synthesize dataArray=_dataArray;
- (void).cxx_destruct;
- (void)refreshBusinessFilterView;
- (void)insertBussinessZoneItem;
- (void)setBusinessZoneFilterViewWithModel:(id)arg1 position:(long long)arg2;
- (void)sendSearchOveseaHotelPrice:(id)arg1 hotelModels:(id)arg2;
- (void)searchOverseaPriceResult;
- (void)stopOverseaPriceTimer;
- (void)startOverseaPriceTimer;
- (void)buildHotelList;
- (void)hotelFilterViewSelectedView:(id)arg1 itemId:(long long)arg2 code:(id)arg3 selected:(_Bool)arg4;
- (void)locationFail:(int)arg1;
- (void)locationSuccessWithCoordinate:(struct CLLocationCoordinate2D)arg1;
- (void)showSubFilterList:(id)arg1 itemId:(long long)arg2 code:(id)arg3 inView:(id)arg4;
- (void)filterViewUpdated:(id)arg1 andParentModel:(id)arg2;
- (void)syncToFilterList:(id)arg1 inList:(id)arg2;
- (void)syncToBusinessFilterList:(id)arg1 bInit:(_Bool)arg2;
- (_Bool)isHasOverSeaSurroudingHotel;
- (id)createBrandPriceFilterResultCell:(id)arg1 indexPath:(id)arg2;
- (id)createPureContentCell:(id)arg1 indexPath:(id)arg2;
- (id)createDomesticExpandRecommendDescCell:(id)arg1 indexPath:(id)arg2;
- (id)createSearchHotelKeyWordResultCell:(id)arg1 indexPath:(id)arg2;
- (id)createNoDateFilterContentCell:(id)arg1 isShowContent:(_Bool)arg2;
- (id)createNoResultCell:(id)arg1 tbv:(id)arg2;
- (id)createShowFilterOptionCell:(id)arg1 tbv:(id)arg2;
- (id)createHotelCell:(id)arg1 tbv:(id)arg2 array:(id)arg3;
- (id)creatFilterItemTitle;
- (void)recommendFilterCellClicked:(id)arg1;
- (id)createDirectSearchNoResultCell:(id)arg1 indexPath:(id)arg2;
- (void)traceLog:(id)arg1 withRange:(long long)arg2 withAction:(id)arg3;
- (void)selectDirectSearchNoResultCell:(id)arg1;
- (void)selectReleatedHotelCell:(id)arg1;
- (void)selectRecommendHotelCell:(id)arg1;
- (void)selectArroundHotelCell:(id)arg1;
- (void)selectGHIHotelCell:(id)arg1;
- (void)selectOverSeaSurroundingCell:(id)arg1;
- (void)selectFullOrNonFullHouseHotelCell:(id)arg1;
- (void)sizeToFitByconstrainedSize:(id)arg1 constrainedSize:(struct CGSize)arg2;
- (id)creatGHIorOverSeaSurroundingHotelSectionHeaderView;
- (void)openOrCloseGHISection:(id)arg1;
- (void)refreshLocationBtnIcon:(_Bool)arg1;
- (void)resetFilterBtn:(long long)arg1;
- (void)resetSortBtnState:(id)arg1;
- (void)setFilterBarExpand:(_Bool)arg1 WithAnime:(_Bool)arg2;
- (void)setSearchBarView:(_Bool)arg1 WithAnime:(_Bool)arg2;
- (void)setFilterBarExpand:(_Bool)arg1;
- (void)showFilterBar;
- (void)searchMoreHotel:(id)arg1;
- (id)drawHasDataTableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 dataArray:(id)arg3;
- (id)drawMoreDataCellView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)delegateRefreshBtnClicked:(id)arg1;
- (id)noDateTableView0:(id)arg1 indexPath:(id)arg2;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)scrollViewWillBeginDecelerating:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForName:(id)arg2 identifier:(id)arg3;
- (id)tableView:(id)arg1 identifier:(id)arg2;
- (double)getNoResultHeight:(id)arg1;
- (double)getShowFilterHeight:(id)arg1;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (void)pullUpToAddData:(id)arg1;
- (void)pullDownToRefreshData:(id)arg1;
- (void)clickDeleteAction:(id)arg1;
- (void)btnAreaClicked:(id)arg1;
- (void)btnFilterClicked:(id)arg1;
- (void)btnPriceStarClicked:(id)arg1;
- (void)btnSortClicked:(id)arg1;
- (void)didMoveToSuperview;
- (void)awakeFromNib;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
