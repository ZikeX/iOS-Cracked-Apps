//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class CTMyCtripInvoiceTitleWidget, NSString;

@protocol CTMyCtripInvoiceTitleWidgetDelegate <NSObject>

@optional
- (void)invoiceTitleWidgetDidCancelSelect:(CTMyCtripInvoiceTitleWidget *)arg1;
- (void)invoiceTitleWidget:(CTMyCtripInvoiceTitleWidget *)arg1 didDeleteTitle:(NSString *)arg2;
- (void)selectInvoiceTitle:(NSString *)arg1 andTitleWidget:(CTMyCtripInvoiceTitleWidget *)arg2;
@end

