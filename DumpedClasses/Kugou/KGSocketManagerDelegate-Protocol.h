//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class KGSocketManager, NSString;

@protocol KGSocketManagerDelegate <NSObject>
- (void)managerDidUpdateMusics:(KGSocketManager *)arg1 finishedNumber:(long long)arg2 action:(NSString *)arg3;
- (void)manager:(KGSocketManager *)arg1 didSendMusicDataAtIndex:(long long)arg2;
- (void)manager:(KGSocketManager *)arg1 didReceiveMusicDataAtIndex:(long long)arg2;
- (void)managerDidUpdateMusics:(KGSocketManager *)arg1;
- (void)managerDidFailConnectToPC:(KGSocketManager *)arg1;
- (void)managerDidDisconnectFromPC:(KGSocketManager *)arg1;
- (void)manager:(KGSocketManager *)arg1 didConnectToPhone:(NSString *)arg2;
- (void)managerDidStartTransferringMusic:(KGSocketManager *)arg1;
- (void)manager:(KGSocketManager *)arg1 didLooseConnectionWithPhonePeer:(NSString *)arg2;

@optional
- (void)managerDidConnectToPC:(KGSocketManager *)arg1;
@end
