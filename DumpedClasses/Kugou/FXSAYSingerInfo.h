//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "FXBaseJSONModel.h"

@class NSString;

@interface FXSAYSingerInfo : FXBaseJSONModel
{
    NSString *_albumCover;
    NSString *_singerId;
    NSString *_singerImg;
    NSString *_singerName;
}

@property(retain, nonatomic) NSString *singerName; // @synthesize singerName=_singerName;
@property(retain, nonatomic) NSString *singerImg; // @synthesize singerImg=_singerImg;
@property(retain, nonatomic) NSString *singerId; // @synthesize singerId=_singerId;
@property(retain, nonatomic) NSString *albumCover; // @synthesize albumCover=_albumCover;
- (void).cxx_destruct;

@end
