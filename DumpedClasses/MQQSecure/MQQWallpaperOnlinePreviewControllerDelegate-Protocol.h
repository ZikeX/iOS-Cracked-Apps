//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class MQQWallpaperPreviewController, NSArray;

@protocol MQQWallpaperOnlinePreviewControllerDelegate <NSObject>

@optional
- (void)wpPreviewController:(MQQWallpaperPreviewController *)arg1 didRequestWithWallpapers:(NSArray *)arg2 reachedTheEnd:(_Bool)arg3;
@end
