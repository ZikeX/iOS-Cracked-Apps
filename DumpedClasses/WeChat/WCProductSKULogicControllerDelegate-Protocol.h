//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class UIView, WCSKUResultItem;

@protocol WCProductSKULogicControllerDelegate <NSObject>
- (void)updatePurchaseButton;
- (void)updateDisplayInfo:(WCSKUResultItem *)arg1;

@optional
- (UIView *)getSKUTableFooterView;
- (UIView *)getSKUTableHeaderView;
@end
