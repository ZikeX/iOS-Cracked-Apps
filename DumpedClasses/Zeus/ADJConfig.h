//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"

@class NSString;
@protocol ADJLogger, AdjustDelegate;

@interface ADJConfig : NSObject <NSCopying>
{
    _Bool _eventBufferingEnabled;
    _Bool _sendInBackground;
    _Bool _allowSuppressLogLevel;
    int _logLevel;
    NSString *_sdkPrefix;
    NSString *_defaultTracker;
    NSString *_appToken;
    NSString *_environment;
    NSObject<AdjustDelegate> *_delegate;
    double _delayStart;
    NSString *_userAgent;
    id <ADJLogger> _logger;
}

+ (id)configWithAppToken:(id)arg1 environment:(id)arg2 allowSuppressLogLevel:(_Bool)arg3;
+ (id)configWithAppToken:(id)arg1 environment:(id)arg2;
@property(nonatomic) _Bool allowSuppressLogLevel; // @synthesize allowSuppressLogLevel=_allowSuppressLogLevel;
@property(nonatomic) __weak id <ADJLogger> logger; // @synthesize logger=_logger;
@property(copy, nonatomic) NSString *userAgent; // @synthesize userAgent=_userAgent;
@property(nonatomic) double delayStart; // @synthesize delayStart=_delayStart;
@property(nonatomic) _Bool sendInBackground; // @synthesize sendInBackground=_sendInBackground;
@property(nonatomic) __weak NSObject<AdjustDelegate> *delegate; // @synthesize delegate=_delegate;
@property(nonatomic) _Bool eventBufferingEnabled; // @synthesize eventBufferingEnabled=_eventBufferingEnabled;
@property(nonatomic) int logLevel; // @synthesize logLevel=_logLevel;
@property(readonly, copy, nonatomic) NSString *environment; // @synthesize environment=_environment;
@property(readonly, copy, nonatomic) NSString *appToken; // @synthesize appToken=_appToken;
@property(copy, nonatomic) NSString *defaultTracker; // @synthesize defaultTracker=_defaultTracker;
@property(copy, nonatomic) NSString *sdkPrefix; // @synthesize sdkPrefix=_sdkPrefix;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (_Bool)isValid;
- (_Bool)checkAppToken:(id)arg1;
- (_Bool)checkEnvironment:(id)arg1;
- (void)setLogLevel:(int)arg1 environment:(id)arg2;
- (id)initWithAppToken:(id)arg1 environment:(id)arg2 allowSuppressLogLevel:(_Bool)arg3;
- (id)initWithAppToken:(id)arg1 environment:(id)arg2;

@end

