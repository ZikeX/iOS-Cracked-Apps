//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class QLONAPosterImageView, QLSprayVideoView;

@interface QLSprayContentView : UIView
{
    struct CGRect _defaultFrame;
    QLONAPosterImageView *_displayImageView;
    QLSprayVideoView *_sprayVideoView;
}

@property(retain, nonatomic) QLSprayVideoView *sprayVideoView; // @synthesize sprayVideoView=_sprayVideoView;
@property(retain, nonatomic) QLONAPosterImageView *displayImageView; // @synthesize displayImageView=_displayImageView;
- (void).cxx_destruct;
- (void)updateSprayVideoItem:(id)arg1;
- (void)flashPosterImageView:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end
