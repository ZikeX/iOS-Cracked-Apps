//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITableViewCell.h"

@class UIView;

@interface FAUserSelStyleTableCell : UITableViewCell
{
    UIView *_fxSelectedView;
    UIView *_fxSelectedReferenceView;
}

@property(nonatomic) __weak UIView *fxSelectedReferenceView; // @synthesize fxSelectedReferenceView=_fxSelectedReferenceView;
@property(retain, nonatomic) UIView *fxSelectedView; // @synthesize fxSelectedView=_fxSelectedView;
- (void).cxx_destruct;
- (void)showSelectedStyle:(_Bool)arg1;
- (void)setHighlighted:(_Bool)arg1 animated:(_Bool)arg2;
- (void)setSelected:(_Bool)arg1 animated:(_Bool)arg2;
- (void)fxRemoveSelectView;
- (void)fxConfigPartiallySelectedStyle:(id)arg1;
- (void)fxConfigFullSelectedStyle;
- (void)installSelectedView;

@end
