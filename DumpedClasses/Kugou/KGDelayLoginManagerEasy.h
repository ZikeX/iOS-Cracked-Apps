//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "UserLoginViewControllerDelegate.h"

@class NSObject<KGAlertShowForRegisterCenter>, NSString;

@interface KGDelayLoginManagerEasy : NSObject <UserLoginViewControllerDelegate>
{
    _Bool _isWaiting;
    _Bool _isLoginShowedByOur;
    CDUnknownBlockType _callBack;
    NSObject<KGAlertShowForRegisterCenter> *_alert;
    CDUnknownBlockType _afterLoginBak;
    CDUnknownBlockType _preLoginBak;
    CDUnknownBlockType _callNeedReCall;
    id <UserLoginViewControllerDelegate> _loginDelegate;
    id _loginMarkedFromWhere;
    NSObject *_tokenObject;
    SEL _loginSelector;
    CDUnknownBlockType _loginBlock;
    CDUnknownBlockType _loginCancelBlock;
    CDUnknownBlockType _loginSuccessBlock;
    id _markAlert;
}

+ (_Bool)isFromPaidAlertPreShow;
+ (void)MarkAlert:(id)arg1 withLoginDelegate:(id)arg2;
+ (void)MarkAlert:(id)arg1 withLoginWorksTodoBeforeLogin:(CDUnknownBlockType)arg2 whenComplete:(CDUnknownBlockType)arg3;
+ (void)MarkLoginWorksTodoBeforeLogin:(CDUnknownBlockType)arg1 whenComplete:(CDUnknownBlockType)arg2;
+ (_Bool)tryLogin;
+ (_Bool)tryLoginWithAlertHash:(id)arg1;
+ (_Bool)tryLoginInAlert:(id)arg1;
+ (_Bool)goLogin;
+ (_Bool)canShowAlert:(id)arg1;
+ (void)markEnd;
+ (void)markAlertEnd;
+ (void)clearStatus;
+ (id)sharedInstance;
@property(retain, nonatomic) id markAlert; // @synthesize markAlert=_markAlert;
@property(copy, nonatomic) CDUnknownBlockType loginSuccessBlock; // @synthesize loginSuccessBlock=_loginSuccessBlock;
@property(copy, nonatomic) CDUnknownBlockType loginCancelBlock; // @synthesize loginCancelBlock=_loginCancelBlock;
@property(copy, nonatomic) CDUnknownBlockType loginBlock; // @synthesize loginBlock=_loginBlock;
@property(nonatomic) _Bool isLoginShowedByOur; // @synthesize isLoginShowedByOur=_isLoginShowedByOur;
@property(nonatomic) SEL loginSelector; // @synthesize loginSelector=_loginSelector;
@property(retain, nonatomic) NSObject *tokenObject; // @synthesize tokenObject=_tokenObject;
@property(nonatomic) __weak id loginMarkedFromWhere; // @synthesize loginMarkedFromWhere=_loginMarkedFromWhere;
@property(nonatomic) __weak id <UserLoginViewControllerDelegate> loginDelegate; // @synthesize loginDelegate=_loginDelegate;
@property(copy, nonatomic) CDUnknownBlockType callNeedReCall; // @synthesize callNeedReCall=_callNeedReCall;
@property(copy, nonatomic) CDUnknownBlockType preLoginBak; // @synthesize preLoginBak=_preLoginBak;
@property(copy, nonatomic) CDUnknownBlockType afterLoginBak; // @synthesize afterLoginBak=_afterLoginBak;
@property(retain, nonatomic) NSObject<KGAlertShowForRegisterCenter> *alert; // @synthesize alert=_alert;
@property(nonatomic) _Bool isWaiting; // @synthesize isWaiting=_isWaiting;
@property(copy, nonatomic) CDUnknownBlockType callBack; // @synthesize callBack=_callBack;
- (void).cxx_destruct;
- (void)loginSuccess;
- (void)loginCancel;
- (void)markAlertEnd;
- (void)didLogin;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
