//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "QYMCommentStandardBtnDelegate-Protocol.h"

@class NSString;
@protocol QYMCommentStandardViewDelegate;

@interface QYMCommentStandardView : UIView <QYMCommentStandardBtnDelegate>
{
    CDUnknownBlockType _getScore;
    id <QYMCommentStandardViewDelegate> _delegate;
}

@property(nonatomic) __weak id <QYMCommentStandardViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(copy, nonatomic) CDUnknownBlockType getScore; // @synthesize getScore=_getScore;
- (void).cxx_destruct;
- (void)clickBtnWithTag:(unsigned long long)arg1;
- (void)removeAllSelected;
- (void)updateView:(id)arg1;
- (void)initSubViews;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

