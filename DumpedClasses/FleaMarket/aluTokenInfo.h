//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "aluDeviceTokenSignInfo.h"

@class NSDictionary, NSString;

@interface aluTokenInfo : aluDeviceTokenSignInfo
{
    NSString *_tokenType;
    NSString *_token;
    NSString *_scene;
    NSString *_useAcitonType;
    NSDictionary *_ext;
    NSString *_hid;
}

@property(copy, nonatomic) NSString *hid; // @synthesize hid=_hid;
@property(copy, nonatomic) NSDictionary *ext; // @synthesize ext=_ext;
@property(copy, nonatomic) NSString *useAcitonType; // @synthesize useAcitonType=_useAcitonType;
@property(copy, nonatomic) NSString *scene; // @synthesize scene=_scene;
@property(copy, nonatomic) NSString *token; // @synthesize token=_token;
@property(copy, nonatomic) NSString *tokenType; // @synthesize tokenType=_tokenType;
- (void).cxx_destruct;

@end
