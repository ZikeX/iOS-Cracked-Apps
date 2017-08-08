//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <FBSharedFramework/CKCompositeComponent.h>

#import "FBHScrollImpressionLogging-Protocol.h"

@class FBLivestreamVideoPlayerComponent, FBMemVideo;

@interface FBLiveMapVideoComponent : CKCompositeComponent <FBHScrollImpressionLogging>
{
    FBLivestreamVideoPlayerComponent *_livestreamComponent;
    CKTypedComponentAction_4b39899e _cardMoreAction;
    FBMemVideo *_video;
}

+ (id)newWithVideo:(id)arg1 story:(id)arg2 imageDownloader:(id)arg3 scenePath:(id)arg4 toolbox:(id)arg5 cardMoreAction:(CKTypedComponentAction_4b39899e)arg6;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)threeDotsTap:(id)arg1;
- (void)tapped;
- (void)didStopPlaying;
- (void)didStartPlaying;

@end
