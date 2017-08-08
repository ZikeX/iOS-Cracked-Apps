//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "KTVObjectModel.h"

@class KTVPlayerBaseInfo, NSMutableAttributedString, NSString;

@interface KTVDayMVPInfo : KTVObjectModel
{
    int _starNum;
    int _supportRate;
    long long _opusId;
    NSString *_opusHash;
    NSString *_songName;
    KTVPlayerBaseInfo *_playerBase;
    NSMutableAttributedString *_songNameAttr;
}

+ (id)keyMapper;
@property(copy, nonatomic) NSMutableAttributedString *songNameAttr; // @synthesize songNameAttr=_songNameAttr;
@property(retain, nonatomic) KTVPlayerBaseInfo *playerBase; // @synthesize playerBase=_playerBase;
@property(nonatomic) int supportRate; // @synthesize supportRate=_supportRate;
@property(nonatomic) int starNum; // @synthesize starNum=_starNum;
@property(copy, nonatomic) NSString *songName; // @synthesize songName=_songName;
@property(copy, nonatomic) NSString *opusHash; // @synthesize opusHash=_opusHash;
@property(nonatomic) long long opusId; // @synthesize opusId=_opusId;
- (void).cxx_destruct;

@end
