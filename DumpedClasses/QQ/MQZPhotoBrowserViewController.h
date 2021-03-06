//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PhotoBrowserBaseViewContoller.h"

#import "GAInputBarDelegate.h"
#import "MQZMutipleImageHandlerDelegate.h"
#import "MQZoneLandscapeInputBoardDelegate.h"
#import "MulMemSelBusiProcessDelegate.h"
#import "QQFriendSelectedViewControllerDelegate.h"
#import "QQPhotoDelegate.h"
#import "QUIShareDelegate.h"
#import "QZBlackCommentControllerDelegate.h"
#import "QZCommonVideoViewVideoPlayEventDelegate.h"
#import "QZPhotoBottomBarDelegate.h"
#import "QZPhotoBrowseVideoDelegate.h"

@class GAInputBar, MQZFavourOperater, MQZMutipleImageHandler, MQZoneLandscapeInputBoard, MQZoneTopBar, NSArray, NSDictionary, NSMutableArray, NSMutableDictionary, NSString, QQProgressBar, QUIShareView, QZBlackCommentController, QZPhotoBottomBar, QzoneFeedModel, QzonePhotoModel, UIButton, UIControl, UILabel, UIView, UIViewController;

@interface MQZPhotoBrowserViewController : PhotoBrowserBaseViewContoller <GAInputBarDelegate, MulMemSelBusiProcessDelegate, MQZoneLandscapeInputBoardDelegate, QQPhotoDelegate, QZPhotoBottomBarDelegate, MQZMutipleImageHandlerDelegate, QZPhotoBrowseVideoDelegate, QUIShareDelegate, QQFriendSelectedViewControllerDelegate, QZBlackCommentControllerDelegate, QZCommonVideoViewVideoPlayEventDelegate>
{
    _Bool bDismissWhenEnterBackground;
    UIViewController *_fatherController;
    long long _appid;
    NSString *_curid;
    QzoneFeedModel *_feedModel;
    MQZFavourOperater *_favourOperator;
    _Bool _isShowFavourButton;
    _Bool _isPushInViewController;
    _Bool _isFromCommentPhoto;
    _Bool _isFromAlbumList;
    _Bool _feedLevel;
    _Bool _fromGroup;
    _Bool _isSupportPicComment;
    _Bool _fromCreditLevel;
    long long _editPhotoListRequestId;
    long long _outsiteShareRequestId;
    long long _getShareOutsiteUrlReqID;
    NSString *_shareThumbUrl;
    QUIShareView *_shareView;
    NSString *_passwd;
    NSDictionary *_businessParameter;
    long long _firstRequestMoreIndex;
    long long _favourRequestId;
    UIView *_qzMaskView;
    UIControl *_maskControl;
    QQProgressBar *_progressView;
    UILabel *_progressLabel;
    long long _type;
    NSMutableDictionary *_requests;
    _Bool _shouldFetchPhotoList;
    _Bool _forceDismissByFading;
    _Bool _hasMoreOnLeft;
    _Bool _hasMoreOnRight;
    _Bool _requestingLeft;
    _Bool _requestingRight;
    GAInputBar *_inputBar;
    UIControl *_landscapeKeyboardMask;
    MQZoneLandscapeInputBoard *_inputBoard;
    MQZoneTopBar *_topBar;
    long long _getPhotoListReqID;
    NSMutableArray *_visitedPhoto;
    NSMutableArray *_preDownloadPhoto;
    double _layoutDrawingBeginTime;
    _Bool _isShowMorePitureButton;
    _Bool _allowShare;
    int _opmask;
    UIButton *_moreBtn;
    UIButton *_likeBtn;
    UILabel *_likeLabel;
    UILabel *_commentLabel;
    QZPhotoBottomBar *_photoBottomBar;
    double _loadBeginTime;
    _Bool _pushToPlayBack;
    long long _deletedPhotoIndex;
    long long _delUgcReqID;
    NSString *_scanResult;
    MQZMutipleImageHandler *_multiSaveHandler;
    _Bool _close;
    _Bool _pauseVideoByBackGround;
    _Bool _isShareShow;
    _Bool _isAudioSessionObtained;
    _Bool _isShowAlert;
    QZBlackCommentController *_blackCommentController;
    _Bool _shouldPushRecommendAlbum;
    _Bool _hasRecommendAlbum;
    NSArray *_recommendAlbumList;
    _Bool _hasMoreReommendAlbum;
    _Bool _showShare;
    _Bool _hasMore;
    QzonePhotoModel *_photoModel;
    long long _photoFromType;
    double _yOffset;
    NSString *_titleName;
    NSString *_attachInfo;
    long long _classifyType;
    NSString *_classifyId;
    CDUnknownBlockType _shareOutsiteBlock;
    NSMutableDictionary *_advDict;
    NSString *_advTraceInfo;
}

+ (id)qzonePhotoBrowser:(long long)arg1;
@property(retain, nonatomic) NSString *advTraceInfo; // @synthesize advTraceInfo=_advTraceInfo;
@property(retain, nonatomic) NSMutableDictionary *advDict; // @synthesize advDict=_advDict;
@property(copy, nonatomic) CDUnknownBlockType shareOutsiteBlock; // @synthesize shareOutsiteBlock=_shareOutsiteBlock;
@property(retain, nonatomic) NSString *classifyId; // @synthesize classifyId=_classifyId;
@property(nonatomic) long long classifyType; // @synthesize classifyType=_classifyType;
@property(nonatomic) _Bool hasMore; // @synthesize hasMore=_hasMore;
@property(retain, nonatomic) NSString *attachInfo; // @synthesize attachInfo=_attachInfo;
@property(retain, nonatomic) NSString *titleName; // @synthesize titleName=_titleName;
@property(nonatomic) double yOffset; // @synthesize yOffset=_yOffset;
@property(nonatomic) _Bool showShare; // @synthesize showShare=_showShare;
@property(nonatomic) long long photoFromType; // @synthesize photoFromType=_photoFromType;
@property(retain, nonatomic) QzonePhotoModel *photoModel; // @synthesize photoModel=_photoModel;
- (void).cxx_destruct;
- (void)reportLastPhotoDisplay;
- (int)onNotifyDelUgcResult:(id)arg1;
- (void)saveToAlbumRetNotify:(long long)arg1;
- (void)onForWardButtonClick;
- (void)onReportButtonClick;
- (void)onQRCodeButtonClick;
- (void)onOCRButtonClick;
- (void)onDeleteButtonclick;
- (void)downloadImageCompleteHandler;
- (void)saveImageCompleteHandlerWithError:(id)arg1;
- (_Bool)needDownloadCurrentImageWithTag:(long long)arg1 shouldNotSave:(_Bool)arg2;
- (void)saveToALbumButtonClick;
- (void)onfavourButtonClicked;
- (void)onCancelfavourButtonClicked;
- (void)onshareButtonClick;
- (long long)onNotifyShareOutsiteOperation:(id)arg1;
- (void)onSendWeixinClicked;
- (void)dialogSendBtnClick:(int)arg1 exInfo:(id)arg2;
- (void)sendToQQWithImagePath:(id)arg1;
- (void)onSendToQQClicked;
- (void)shareDidDismiss:(id)arg1;
- (void)shareDidAction:(id)arg1;
- (void)onQbossImgViewAdClicked:(id)arg1;
- (void)getOperationItems;
- (void)hideSharePanel;
- (void)popSharePanel;
- (_Bool)showDelete;
- (_Bool)isCurrentUser;
- (void)playVideoWithManul:(_Bool)arg1;
- (void)pauseVideoByUser:(_Bool)arg1;
- (id)commonVideoView;
- (void)photoBottomBarDescriptionClicked;
- (void)photoBottomBarMoreButtonClicked;
- (void)photoBottomBarLikeButtonClicked;
- (void)photoBottomBarInputButtonClicked;
- (void)photoBottomBarCommentButtonClicked;
- (void)createOperationBottomBar;
- (_Bool)isAlbumFeed;
- (void)dealWithScanResult:(id)arg1;
- (_Bool)shouldAutorotate;
- (unsigned long long)supportedInterfaceOrientations;
- (void)longPressDetected;
- (_Bool)needShowTopTips;
- (id)navigationTopBar;
- (void)updateButtonBarWhenRotate:(_Bool)arg1;
- (_Bool)needHideRightButtonMoreWithProvider:(id)arg1;
- (void)resetTitleText;
- (void)onRightButtonClick:(id)arg1;
- (void)onLeftButtonClick:(id)arg1;
- (void)imageView:(id)arg1 videoButtonPressed:(id)arg2 photo:(id)arg3;
- (void)singleTapDetected;
- (void)showPhotoBrowserInViewController:(id)arg1;
- (void)onReport:(id)arg1;
- (void)onNotifyFavourOperation:(id)arg1;
- (void)onFavour:(_Bool)arg1;
- (id)getFavourActionItem:(id)arg1;
- (void)handleEnterForegroundNotification:(id)arg1;
- (void)handleUIApplicationDidEnterBackgroundNotification:(id)arg1;
- (struct CGRect)regionForSupportingRightDragToGoBack;
- (_Bool)isSupportInterruputRightDragToGoBack;
- (_Bool)isSupportRightDragToGoBack;
- (id)getImageFromOutShare:(id)arg1;
- (void)sendReqToQQ:(id)arg1 outsiteShareUrl:(id)arg2;
- (void)sendToWeixinMoments:(id)arg1 outsiteShareUrl:(id)arg2 scene:(int)arg3;
- (_Bool)isNeedShareOutSiteUGCRight:(id)arg1;
- (_Bool)isSupportShareOutsiteRight:(id)arg1;
- (id)getVideoShareFeedModel;
- (void)showSpaceRightAlertView:(id)arg1 message:(id)arg2 scene:(int)arg3 shareFor:(long long)arg4;
- (void)forwardPICTOWeChat;
- (void)ForwardToWeChat:(id)arg1;
- (_Bool)showOCR;
- (_Bool)canQuote;
- (_Bool)showReport;
- (_Bool)showQuote;
- (_Bool)showFavour;
- (void)onQuoteFinish:(id)arg1;
- (void)quotePhoto:(id)arg1;
- (void)SaveToAlbum:(id)arg1;
- (void)ForwardToQQ:(id)arg1;
- (id)getCurrentImagePathNoSharpP:(_Bool)arg1;
- (id)getCurrentImagePath;
- (_Bool)canDownloadThisPhoto:(int)arg1 currentPage:(int)arg2;
- (void)setPageControlHidden:(_Bool)arg1 animated:(_Bool)arg2;
- (_Bool)canShowPageControl;
- (void)updatePageControl;
- (void)updateButtonBar;
- (void)setBottomBarHidden;
- (_Bool)supportLongPress;
- (id)currentPhotoModel;
- (long long)feedPictureCount;
- (void)onLikeNotify:(id)arg1;
- (void)onNotifyOperation:(id)arg1;
- (long long)requestMoreAllFeedsPhoto;
- (long long)requestMorePicturesLeft:(_Bool)arg1 right:(_Bool)arg2 albumId:(id)arg3 curlloc:(id)arg4 url:(id)arg5;
- (void)resetAllRects;
- (void)deleteCurrentPhoto;
- (id)getDetailViewController:(id)arg1 isComment:(_Bool)arg2;
- (void)hideDownloadProgressUI;
- (void)showDownloadProgressUI;
- (void)updateDownloadProgressUI:(double)arg1;
- (id)progressSizeConvert:(double)arg1;
- (id)getProgressLabelText:(double)arg1;
- (void)notifyDownloadProgress:(id)arg1;
- (void)notifyAsynLoadImageFail:(id)arg1;
- (void)notifyAsynLoadImageSuccess:(id)arg1;
- (void)notifyDownloadThumbFail:(id)arg1;
- (void)notifyDownloadThumbSuccess:(id)arg1;
- (void)notifyNetWorkError:(id)arg1;
- (void)notifyDownloadFail:(id)arg1;
- (void)notifyDownloadSuccess:(id)arg1;
- (void)originalPicButtonClick:(id)arg1;
- (void)detailButtonClick:(id)arg1 isComment:(_Bool)arg2;
- (id)currentFeedModel;
- (_Bool)isRecentFeed:(id)arg1;
- (void)videoStartPlaying;
- (void)releaseAudioDevice;
- (_Bool)requestAudioDevice;
- (void)requestQBossPhotoAdvWithId:(int)arg1;
- (void)deactiveLandscapeKeyboard;
- (void)onSelectionCompeleted:(id)arg1 nicks:(id)arg2;
- (void)inputBarShowSelectViewController:(id)arg1;
- (void)addCommentRequest:(id)arg1 text:(id)arg2 userParam:(id)arg3;
- (void)addComment:(id)arg1 text:(id)arg2 userParam:(id)arg3;
- (_Bool)isNotNeedFake;
- (void)onEditBatchPhotoNotify:(id)arg1;
- (_Bool)sendText:(id)arg1;
- (void)inputBarShowOpenYellowVip;
- (void)inputBarShowOpenYellowVipFromCommentController;
- (void)inputDone:(id)arg1 text:(id)arg2;
- (_Bool)inputBar:(id)arg1 sendAction:(id)arg2;
- (void)inputBarBeingActive:(id)arg1 willChangeOffset:(double)arg2 changeHeight:(double)arg3;
- (void)inputBarDidDeactive:(id)arg1;
- (void)showKeyBoardFor:(long long)arg1;
- (void)commentButtonClick:(id)arg1;
- (void)requestLikeWithPhotoModel:(id)arg1 ugcKey:(id)arg2;
- (void)likeButtonClick:(id)arg1;
- (void)didRotateFromInterfaceOrientation:(long long)arg1;
- (void)willRotateToInterfaceOrientation:(long long)arg1 duration:(double)arg2;
- (void)onNotifyGetAllFeedsPhotoList:(id)arg1;
- (void)getCategoryDetailNotify:(id)arg1;
- (void)onNotifyGetPhotoList:(id)arg1;
- (void)setPhotomodelTihBusiParam:(id)arg1;
- (void)delayShowProgressView:(id)arg1;
- (void)showTips;
- (_Bool)canPlayVideo;
- (void)handleVideoPlayControl;
- (void)didScrollToPage:(int)arg1;
- (void)notifyFeedDetail:(id)arg1;
- (void)setBlackCommentController:(id)arg1;
- (void)blackCommentViewDidDisapper;
- (void)handleOpenHomepage:(long long)arg1 nick:(id)arg2;
- (id)currentPageProvider;
- (void)onMaskControlClick:(id)arg1;
- (void)hidePhotoBrowser;
- (void)reportHitRate;
- (_Bool)showDownloadFaidButton;
- (id)getToolbar;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)loadView;
@property(retain, nonatomic) QzoneFeedModel *feedModel; // @dynamic feedModel;
- (void)dealloc;
- (void)onReceiveQQVideoReq;
- (id)init;

// Remaining properties
@property(nonatomic) long long appid; // @dynamic appid;
@property(retain, nonatomic) NSDictionary *businessParameter; // @dynamic businessParameter;
@property(retain, nonatomic) NSString *curid; // @dynamic curid;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(retain, nonatomic) UIViewController *fatherController; // @dynamic fatherController;
@property(retain, nonatomic) MQZFavourOperater *favourOperator; // @dynamic favourOperator;
@property(nonatomic) _Bool feedLevel; // @dynamic feedLevel;
@property(nonatomic) _Bool fromCreditLevel; // @dynamic fromCreditLevel;
@property(nonatomic) _Bool fromGroup; // @dynamic fromGroup;
@property(readonly) unsigned long long hash;
@property(nonatomic) _Bool isFromAlbumList; // @dynamic isFromAlbumList;
@property(nonatomic) _Bool isFromCommentPhoto; // @dynamic isFromCommentPhoto;
@property(nonatomic) _Bool isPushInViewController; // @dynamic isPushInViewController;
@property(nonatomic) _Bool isShowFavourButton; // @dynamic isShowFavourButton;
@property(nonatomic) _Bool isSupportPicComment; // @dynamic isSupportPicComment;
@property(retain, nonatomic) NSString *passwd; // @dynamic passwd;
@property(readonly) Class superclass;

@end

