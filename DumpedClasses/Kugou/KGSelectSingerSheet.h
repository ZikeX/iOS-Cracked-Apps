//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "KGBasicSheet.h"

#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"

@class NSArray, NSMutableDictionary, NSString, UITableView;

@interface KGSelectSingerSheet : KGBasicSheet <UITableViewDelegate, UITableViewDataSource>
{
    _Bool _needObtainInfo;
    NSString *_title;
    NSString *_cancelTitle;
    NSArray *_singerNameArray;
    NSMutableDictionary *_singerInfoDic;
    long long _selectIndex;
    CDUnknownBlockType _selectInfoBlock;
    UITableView *_tableView;
}

+ (id)actionSheetWithTitle:(id)arg1 singerNameArray:(id)arg2 cancelTitle:(id)arg3 selectedIndex:(long long)arg4 needObtainSingerInfo:(_Bool)arg5 withBlock:(CDUnknownBlockType)arg6;
@property(retain, nonatomic) UITableView *tableView; // @synthesize tableView=_tableView;
@property(copy, nonatomic) CDUnknownBlockType selectInfoBlock; // @synthesize selectInfoBlock=_selectInfoBlock;
@property(nonatomic) long long selectIndex; // @synthesize selectIndex=_selectIndex;
@property(retain, nonatomic) NSMutableDictionary *singerInfoDic; // @synthesize singerInfoDic=_singerInfoDic;
@property(copy, nonatomic) NSArray *singerNameArray; // @synthesize singerNameArray=_singerNameArray;
@property(copy, nonatomic) NSString *cancelTitle; // @synthesize cancelTitle=_cancelTitle;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(nonatomic) _Bool needObtainInfo; // @synthesize needObtainInfo=_needObtainInfo;
- (void).cxx_destruct;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)p_loadSingerInfo;
- (void)cancelClicked:(id)arg1;
- (void)p_initView;
- (id)initSheetWithTitle:(id)arg1 singerNameArray:(id)arg2 cancelTitle:(id)arg3 selectedIndex:(long long)arg4 needObtainSingerInfo:(_Bool)arg5 withBlock:(CDUnknownBlockType)arg6;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

