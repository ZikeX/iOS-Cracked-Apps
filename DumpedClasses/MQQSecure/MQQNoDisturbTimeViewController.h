//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MQQBaseViewController.h"

#import "UIPickerViewDataSource-Protocol.h"
#import "UIPickerViewDelegate-Protocol.h"

@class MQQNoMenuUITextField, NSString, UIPickerView;

@interface MQQNoDisturbTimeViewController : MQQBaseViewController <UIPickerViewDelegate, UIPickerViewDataSource>
{
    MQQNoMenuUITextField *_noDisturbTimeTextField;
    UIPickerView *_timePickerView;
    long long _currentNoDisturbBeginTime;
    long long _currentNoDisturbEndTime;
}

- (void)noDisturbTimeCancelBtnClicked:(id)arg1;
- (void)noDisturbTimeDoneBtnClicked:(id)arg1;
- (double)pickerView:(id)arg1 rowHeightForComponent:(long long)arg2;
- (double)pickerView:(id)arg1 widthForComponent:(long long)arg2;
- (id)pickerView:(id)arg1 viewForRow:(long long)arg2 forComponent:(long long)arg3 reusingView:(id)arg4;
- (void)pickerView:(id)arg1 didSelectRow:(long long)arg2 inComponent:(long long)arg3;
- (long long)pickerView:(id)arg1 numberOfRowsInComponent:(long long)arg2;
- (long long)numberOfComponentsInPickerView:(id)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)dealloc;
- (void)viewDidLoad;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
