//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class AVAudioPlayer, GFInteractButton, NSDictionary, NSString, QQGroupChatViewController, QQGroupDeliverGiftModel, QQOIDBSSORequest;

@interface QQVideoGiftAnimator : NSObject
{
    NSString *_resourcePath;
    NSDictionary *_info;
    QQGroupDeliverGiftModel *_giftModel;
    int _tapCount;
    int _totalTapCout;
    QQGroupChatViewController *_chatViewController;
    _Bool _singleSide;
    QQOIDBSSORequest *_clickReq;
    _Bool _didReport;
    double _offset;
    GFInteractButton *_interactButton;
    AVAudioPlayer *_tapAudioPlayer;
    _Bool _finished;
    CDUnknownBlockType _finishBlock;
    CDUnknownBlockType _interactBlock;
}

@property(copy, nonatomic) CDUnknownBlockType interactBlock; // @synthesize interactBlock=_interactBlock;
@property(copy, nonatomic) CDUnknownBlockType finishBlock; // @synthesize finishBlock=_finishBlock;
@property(readonly, getter=isFinished) _Bool finished; // @synthesize finished=_finished;
- (void).cxx_destruct;
- (void)dealloc;
- (void)reportOrCheck:(_Bool)arg1;
- (void)buttonTaped:(id)arg1;
- (void)finish;
- (void)playUpLevelAnimation;
- (void)animate3;
- (void)animate2;
- (void)presentInChatViewController:(id)arg1;
- (void)stop;
- (id)initWithGiftModel:(id)arg1 animationOffset:(double)arg2;

@end
