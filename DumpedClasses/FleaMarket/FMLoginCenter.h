//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface FMLoginCenter : NSObject
{
}

+ (void)logout;
+ (void)checkSession;
+ (void)autoLogin:(CDUnknownBlockType)arg1;
+ (void)loginWithLoginOption:(int)arg1 completionHandler:(CDUnknownBlockType)arg2 cancelationHandler:(CDUnknownBlockType)arg3;
+ (void)login:(CDUnknownBlockType)arg1 onCancel:(CDUnknownBlockType)arg2;
+ (void)login:(CDUnknownBlockType)arg1;
+ (void)setup;

@end
