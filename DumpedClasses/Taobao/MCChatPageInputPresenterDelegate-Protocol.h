//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString, UIView<MCChatPageInputViewProtocol>;

@protocol MCChatPageInputPresenterDelegate <NSObject>

@optional
- (void)inputView:(UIView<MCChatPageInputViewProtocol> *)arg1 status:(long long)arg2;
- (_Bool)inputView:(UIView<MCChatPageInputViewProtocol> *)arg1 inputPresenter:(id <MCChatPageInputPresenterProtocol>)arg2 deleteAtLocation:(struct _NSRange)arg3;
- (_Bool)inputView:(UIView<MCChatPageInputViewProtocol> *)arg1 inputPresenter:(id <MCChatPageInputPresenterProtocol>)arg2 changeText:(NSString *)arg3 inRange:(struct _NSRange)arg4;
- (void)inputView:(UIView<MCChatPageInputViewProtocol> *)arg1 inputPresenter:(id <MCChatPageInputPresenterProtocol>)arg2 textToSend:(NSString *)arg3;
- (void)inputView:(UIView<MCChatPageInputViewProtocol> *)arg1 inputPresenter:(id <MCChatPageInputPresenterProtocol>)arg2 willChangeToFrame:(NSString *)arg3 animateDuration:(double)arg4;
@end
