//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UICollectionReusableView.h"

#import "KTVHomeAdvertViewDelegate.h"
#import "KTVHomeSectionHeaderViewDelegate.h"
#import "UIScrollViewDelegate.h"

@class KGThemeLine, KTVBannerPageControl, KTVHomeAdvertView, KTVHomeMenuButton, KTVHomeSectionHeaderView, NSMutableArray, NSString, NSTimer, UIScrollView, UIView;

@interface KTVHomeHeaderView : UICollectionReusableView <UIScrollViewDelegate, KTVHomeSectionHeaderViewDelegate, KTVHomeAdvertViewDelegate>
{
    UIScrollView *bannerScrollView;
    KTVBannerPageControl *pageControl;
    NSMutableArray *bannerInfoArray;
    NSTimer *_timer;
    _Bool isFirstIn;
    id <KTVHomeHeaderViewDelegate> _delegate;
    KTVHomeMenuButton *_competitionBtn;
    KTVHomeMenuButton *_judgeBtn;
    KTVHomeMenuButton *_kSongBtn;
    KTVHomeMenuButton *_friendBtn;
    KTVHomeMenuButton *_mineBtn;
    KTVHomeSectionHeaderView *_sectionView;
    UIView *_menuView;
    KGThemeLine *_boldLine;
    KTVHomeAdvertView *_adsView;
    KGThemeLine *_thinLine;
}

@property(retain, nonatomic) KGThemeLine *thinLine; // @synthesize thinLine=_thinLine;
@property(retain, nonatomic) KTVHomeAdvertView *adsView; // @synthesize adsView=_adsView;
@property(nonatomic) __weak KGThemeLine *boldLine; // @synthesize boldLine=_boldLine;
@property(nonatomic) __weak UIView *menuView; // @synthesize menuView=_menuView;
@property(retain, nonatomic) KTVHomeSectionHeaderView *sectionView; // @synthesize sectionView=_sectionView;
@property(nonatomic) __weak KTVHomeMenuButton *mineBtn; // @synthesize mineBtn=_mineBtn;
@property(nonatomic) __weak KTVHomeMenuButton *friendBtn; // @synthesize friendBtn=_friendBtn;
@property(nonatomic) __weak KTVHomeMenuButton *kSongBtn; // @synthesize kSongBtn=_kSongBtn;
@property(nonatomic) __weak KTVHomeMenuButton *judgeBtn; // @synthesize judgeBtn=_judgeBtn;
@property(nonatomic) __weak KTVHomeMenuButton *competitionBtn; // @synthesize competitionBtn=_competitionBtn;
@property(nonatomic) __weak id <KTVHomeHeaderViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)scrollViewDidEndScrollingAnimation:(id)arg1;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)interruptAdScrolling;
- (void)startShowAds;
- (void)actionJudge:(id)arg1;
- (void)actionCompetition:(id)arg1;
- (void)actionMine:(id)arg1;
- (void)actionFriend:(id)arg1;
- (void)actionKSong:(id)arg1;
- (void)updatePKNum:(long long)arg1;
- (void)showJudgeTipIcon:(_Bool)arg1;
- (void)showCompetetionTipIcon:(_Bool)arg1;
- (void)showNewIcon:(_Bool)arg1;
- (void)showFriendRedDot:(_Bool)arg1;
- (void)showJudgeRedDot:(_Bool)arg1;
- (void)showCompetitonRedDot:(_Bool)arg1;
- (void)dealloc;
- (void)goTimerScroll;
- (void)stopGoTimer;
- (void)startGoTimer;
- (void)actionBanner:(id)arg1;
- (void)setBannerInfo:(id)arg1;
- (void)adsView:(id)arg1 didClickAdsViewWithAdsInfo:(id)arg2;
- (void)sectionHeaderView:(id)arg1 didClickSectionHeaderViewWithSectionType:(int)arg2;
- (void)setAdsInfo:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
