//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "UIActionSheetDelegate.h"
#import "UIAlertViewDelegate.h"

@class NSString;

@interface TMPopupsWithBlockRespond : NSObject <UIAlertViewDelegate, UIActionSheetDelegate>
{
    CDUnknownBlockType _alertViewCallback;
    CDUnknownBlockType _actionSheetCallback;
}

+ (id)showActionSheetWithTitle:(id)arg1 cancelButtonTitle:(id)arg2 destructiveButtonTitle:(id)arg3 otherButtonTitles:(id)arg4 clickedCallback:(CDUnknownBlockType)arg5 inView:(id)arg6;
+ (id)showActionSheetWithTitle:(id)arg1 cancelButtonTitle:(id)arg2 destructiveButtonTitle:(id)arg3 otherButtonTitles:(id)arg4 beforePopupCallback:(CDUnknownBlockType)arg5 clickedCallback:(CDUnknownBlockType)arg6 inView:(id)arg7;
+ (id)showAlertViewWithTitle:(id)arg1 message:(id)arg2 cancelButtonTitle:(id)arg3 otherButtonTitles:(id)arg4 clickedCallback:(CDUnknownBlockType)arg5;
+ (id)showAlertViewWithTitle:(id)arg1 message:(id)arg2 cancelButtonTitle:(id)arg3 otherButtonTitles:(id)arg4 beforePopupCallback:(CDUnknownBlockType)arg5 clickedCallback:(CDUnknownBlockType)arg6;
+ (id)sharedInstance;
- (void).cxx_destruct;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)alertView:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)setPopupCallbacks:(CDUnknownBlockType)arg1 actionSheetCallback:(CDUnknownBlockType)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
