//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TTDetailNatantViewBase.h"

#import "UICollectionViewDataSource.h"
#import "UICollectionViewDelegate.h"
#import "UICollectionViewDelegateFlowLayout.h"

@class Article, ExploreAvatarView, NSDictionary, NSMutableArray, NSString, SSThemedButton, SSThemedLabel, SSThemedView, TTAlphaThemedButton, TTIconLabel, TTImageView, UICollectionView, UICollectionViewFlowLayout, UIImageView;

@interface TTDetailNatantVideoPGCView : TTDetailNatantViewBase <UICollectionViewDelegate, UICollectionViewDataSource, UICollectionViewDelegateFlowLayout>
{
    _Bool _isRecommendList;
    _Bool _detectTop;
    _Bool _detectBottom;
    _Bool _onTop;
    _Bool _isAnimation;
    _Bool _hasFailedRequest;
    NSDictionary *_contentInfo;
    id <TTDetailNatantVideoPGCViewDelegate> _delegate;
    double _originViewHeight;
    double _changedViewHeight;
    TTImageView *_arrowTag;
    SSThemedLabel *_recommendLabel;
    UICollectionView *_collectionView;
    SSThemedView *_bottomLine;
    TTAlphaThemedButton *_backgroundView;
    ExploreAvatarView *_pgcAvatar;
    TTIconLabel *_pgcName;
    SSThemedButton *_subscribeButton;
    SSThemedButton *_subscribeIndicator;
    SSThemedButton *_arrowImage;
    Article *_article;
    NSMutableArray *_recommendArray;
    NSMutableArray *_recommendRangeArray;
    NSDictionary *_recommendResponse;
    UICollectionViewFlowLayout *_flowLayout;
    UIImageView *_indicatorImageView;
}

+ (double)nameLabelFontSize;
@property(retain, nonatomic) UIImageView *indicatorImageView; // @synthesize indicatorImageView=_indicatorImageView;
@property(retain, nonatomic) UICollectionViewFlowLayout *flowLayout; // @synthesize flowLayout=_flowLayout;
@property(nonatomic) _Bool hasFailedRequest; // @synthesize hasFailedRequest=_hasFailedRequest;
@property(retain, nonatomic) NSDictionary *recommendResponse; // @synthesize recommendResponse=_recommendResponse;
@property(retain, nonatomic) NSMutableArray *recommendRangeArray; // @synthesize recommendRangeArray=_recommendRangeArray;
@property(retain, nonatomic) NSMutableArray *recommendArray; // @synthesize recommendArray=_recommendArray;
@property(nonatomic) _Bool isAnimation; // @synthesize isAnimation=_isAnimation;
@property(retain, nonatomic) Article *article; // @synthesize article=_article;
@property(retain, nonatomic) SSThemedButton *arrowImage; // @synthesize arrowImage=_arrowImage;
@property(retain, nonatomic) SSThemedButton *subscribeIndicator; // @synthesize subscribeIndicator=_subscribeIndicator;
@property(retain, nonatomic) SSThemedButton *subscribeButton; // @synthesize subscribeButton=_subscribeButton;
@property(retain, nonatomic) TTIconLabel *pgcName; // @synthesize pgcName=_pgcName;
@property(retain, nonatomic) ExploreAvatarView *pgcAvatar; // @synthesize pgcAvatar=_pgcAvatar;
@property(retain, nonatomic) TTAlphaThemedButton *backgroundView; // @synthesize backgroundView=_backgroundView;
@property(nonatomic) _Bool onTop; // @synthesize onTop=_onTop;
@property(nonatomic) _Bool detectBottom; // @synthesize detectBottom=_detectBottom;
@property(nonatomic) _Bool detectTop; // @synthesize detectTop=_detectTop;
@property(nonatomic) _Bool isRecommendList; // @synthesize isRecommendList=_isRecommendList;
@property(retain, nonatomic) SSThemedView *bottomLine; // @synthesize bottomLine=_bottomLine;
@property(retain, nonatomic) UICollectionView *collectionView; // @synthesize collectionView=_collectionView;
@property(retain, nonatomic) SSThemedLabel *recommendLabel; // @synthesize recommendLabel=_recommendLabel;
@property(retain, nonatomic) TTImageView *arrowTag; // @synthesize arrowTag=_arrowTag;
@property(nonatomic) double changedViewHeight; // @synthesize changedViewHeight=_changedViewHeight;
@property(nonatomic) double originViewHeight; // @synthesize originViewHeight=_originViewHeight;
@property(nonatomic) __weak id <TTDetailNatantVideoPGCViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (long long)quickQueryIndex:(double)arg1 leftIndex:(long long)arg2 rightIndex:(long long)arg3;
- (double)nameButtonMaxLen;
- (double)subsribeButtonWidth;
@property(retain, nonatomic) NSDictionary *contentInfo; // @synthesize contentInfo=_contentInfo;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (void)recommendListEndDisplay;
- (void)recommendListWillDisplay;
- (void)collectionView:(id)arg1 didEndDisplayingCell:(id)arg2 forItemAtIndexPath:(id)arg3;
- (void)collectionViewWillDisplayAtIndex:(long long)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (void)stopIndicatorAnimating;
- (void)startIndicatorAnimating:(_Bool)arg1;
- (void)p_finishChangeSubscribeStatus:(id)arg1 hasSubscribed:(_Bool)arg2 conentType:(long long)arg3 result:(id)arg4 action:(int)arg5;
- (void)didExecuteSubscribe;
- (void)arrowButtonPressed;
- (void)subscribeButtonPressed;
- (void)changeSubscribeCount:(id)arg1;
- (void)showPGCView;
- (void)logUnSubscribe;
- (void)logSubscribe;
- (void)logClickPGC;
- (void)reloadData:(id)arg1;
- (void)trackEventIfNeeded;
- (void)willAppear;
- (void)themeChanged:(id)arg1;
- (void)refreshAvatar;
- (void)refreshUI;
- (void)refreshSubscribeButtonTitle;
- (void)refreshPGCSubscribeState:(id)arg1;
- (void)buildView;
- (void)layoutSubviews;
- (void)refreshWithArticle:(id)arg1;
- (id)initWithWidth:(double)arg1;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

