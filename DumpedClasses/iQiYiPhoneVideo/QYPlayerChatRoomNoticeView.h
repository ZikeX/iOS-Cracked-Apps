//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSMutableArray, NSString, NSTimer, UIImageView, UILabel;

@interface QYPlayerChatRoomNoticeView : UIView
{
    double durationTimer;
    double showTime;
    double defRate;
    int _curMode;
    NSMutableArray *_noticeArr;
    NSMutableArray *_noticeShowArr;
    NSMutableArray *_noticeShowArrFull;
    UIView *_supAddView;
    CDUnknownBlockType _completeBlock;
    CDUnknownBlockType _beginBlock;
    UILabel *_noticeLB;
    NSTimer *_noticeTimer;
    UIImageView *_noticeIcon;
    NSString *_curShowStr;
    double _endAnimateTime;
}

@property(nonatomic) double endAnimateTime; // @synthesize endAnimateTime=_endAnimateTime;
@property(retain, nonatomic) NSString *curShowStr; // @synthesize curShowStr=_curShowStr;
@property(retain, nonatomic) UIImageView *noticeIcon; // @synthesize noticeIcon=_noticeIcon;
@property(retain, nonatomic) NSTimer *noticeTimer; // @synthesize noticeTimer=_noticeTimer;
@property(retain, nonatomic) UILabel *noticeLB; // @synthesize noticeLB=_noticeLB;
@property(copy, nonatomic) CDUnknownBlockType beginBlock; // @synthesize beginBlock=_beginBlock;
@property(copy, nonatomic) CDUnknownBlockType completeBlock; // @synthesize completeBlock=_completeBlock;
@property(nonatomic) int curMode; // @synthesize curMode=_curMode;
@property(nonatomic) __weak UIView *supAddView; // @synthesize supAddView=_supAddView;
@property(retain, nonatomic) NSMutableArray *noticeShowArrFull; // @synthesize noticeShowArrFull=_noticeShowArrFull;
@property(retain, nonatomic) NSMutableArray *noticeShowArr; // @synthesize noticeShowArr=_noticeShowArr;
@property(retain, nonatomic) NSMutableArray *noticeArr; // @synthesize noticeArr=_noticeArr;
- (void).cxx_destruct;
- (void)changeModeByMode:(int)arg1;
- (void)deallocSource;
- (void)showNoticeByStr:(id)arg1;
- (void)showNotice;
- (void)startChatRoomNotice;
- (void)configView;
- (id)initWithFrame:(struct CGRect)arg1;

@end

