//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UICollectionViewCell.h"

@class XYPHTabMyHeaderViewButton;

@interface XYPHMyStoreCell : UICollectionViewCell
{
    id <XYPHMyStoreCellDelegate> _delegate;
    XYPHTabMyHeaderViewButton *_cartButton;
    XYPHTabMyHeaderViewButton *_orderButton;
    XYPHTabMyHeaderViewButton *_couponButton;
    XYPHTabMyHeaderViewButton *_wishButton;
}

@property(retain, nonatomic) XYPHTabMyHeaderViewButton *wishButton; // @synthesize wishButton=_wishButton;
@property(retain, nonatomic) XYPHTabMyHeaderViewButton *couponButton; // @synthesize couponButton=_couponButton;
@property(retain, nonatomic) XYPHTabMyHeaderViewButton *orderButton; // @synthesize orderButton=_orderButton;
@property(retain, nonatomic) XYPHTabMyHeaderViewButton *cartButton; // @synthesize cartButton=_cartButton;
@property(nonatomic) id <XYPHMyStoreCellDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)myWishEvent:(id)arg1;
- (void)myCouponEvent:(id)arg1;
- (void)myOrderEvent:(id)arg1;
- (void)myShoppingCarEvent:(id)arg1;
- (void)setViewWithNotification:(id)arg1;
- (void)noticeCartChange:(id)arg1;
- (void)noticeListNew:(id)arg1;
- (void)initialize;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

@end

