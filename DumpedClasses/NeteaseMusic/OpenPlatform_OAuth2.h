//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "OpenPlatformBase.h"

@interface OpenPlatform_OAuth2 : OpenPlatformBase
{
}

- (id)getAuthorizeUrl;
- (void)PostContent:(id)arg1 TitleDesc:(id)arg2 TitleUrl:(id)arg3;
- (void)OnAccessTokenRet:(id)arg1;
- (void)OnAuthoriztionRet:(id)arg1;
- (void)authLogin;
- (id)generateParametersString:(id)arg1 needEncode:(_Bool)arg2;
- (void)clearAuthInfo;
- (void)initialize:(int)arg1;
- (void)initializeURL;

@end
