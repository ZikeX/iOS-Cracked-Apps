//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "MCOfficialContentPresenterHeaderViewDelegate.h"
#import "MCPluginBaseProtocol.h"

@class MCOfficialHeaderPresenter, NSDictionary, NSString, UIView<MCOfficialHeaderViewProtocol>, UIViewController;

@interface MCOfficialContentHeaderViewPlugin : NSObject <MCPluginBaseProtocol, MCOfficialContentPresenterHeaderViewDelegate>
{
    _Bool _isD;
    UIView<MCOfficialHeaderViewProtocol> *_headerView;
    NSString *_defaultTitle;
    NSString *_utPageName;
    NSString *_spmA;
    NSString *_spmB;
    id <MCOfficialContentPresenterInterface> _officialContentPresenterInterface;
    id <MCInputPresenterProtocol> _chatPageInputPresenter;
    UIViewController *_baseVC;
    MCOfficialHeaderPresenter *_op;
    struct CGPoint _endPoint;
}

@property(nonatomic) struct CGPoint endPoint; // @synthesize endPoint=_endPoint;
@property(nonatomic) _Bool isD; // @synthesize isD=_isD;
@property(retain, nonatomic) MCOfficialHeaderPresenter *op; // @synthesize op=_op;
@property(nonatomic) __weak UIViewController *baseVC; // @synthesize baseVC=_baseVC;
@property(nonatomic) __weak id <MCInputPresenterProtocol> chatPageInputPresenter; // @synthesize chatPageInputPresenter=_chatPageInputPresenter;
@property(nonatomic) __weak id <MCOfficialContentPresenterInterface> officialContentPresenterInterface; // @synthesize officialContentPresenterInterface=_officialContentPresenterInterface;
@property(copy, nonatomic) NSString *spmB; // @synthesize spmB=_spmB;
@property(copy, nonatomic) NSString *spmA; // @synthesize spmA=_spmA;
@property(copy, nonatomic) NSString *utPageName; // @synthesize utPageName=_utPageName;
@property(retain, nonatomic) NSString *defaultTitle; // @synthesize defaultTitle=_defaultTitle;
@property(nonatomic) __weak UIView<MCOfficialHeaderViewProtocol> *headerView; // @synthesize headerView=_headerView;
- (void).cxx_destruct;
- (void)viewWillDisAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (id)getHeaderView;
- (void)processPage:(id)arg1;
- (id)getKey;
- (id)getPageName;
- (id)initWithBaseViewController:(id)arg1 utPageName:(id)arg2 spmA:(id)arg3 spmB:(id)arg4;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(retain, nonatomic) NSDictionary *userInfo;

@end

