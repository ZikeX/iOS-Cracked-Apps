//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "KGMusicDigitalStoreBaseEntity.h"

@class NSMutableArray;

@interface KGMusicDigitalStoreEntity : KGMusicDigitalStoreBaseEntity
{
    NSMutableArray *_banners;
    NSMutableArray *_pays;
    NSMutableArray *_songs;
    NSMutableArray *_alnums;
    NSMutableArray *_singers;
}

@property(retain, nonatomic) NSMutableArray *singers; // @synthesize singers=_singers;
@property(retain, nonatomic) NSMutableArray *alnums; // @synthesize alnums=_alnums;
@property(retain, nonatomic) NSMutableArray *songs; // @synthesize songs=_songs;
@property(retain, nonatomic) NSMutableArray *pays; // @synthesize pays=_pays;
@property(retain, nonatomic) NSMutableArray *banners; // @synthesize banners=_banners;
- (void).cxx_destruct;
- (id)dic2Obj:(id)arg1;

@end
