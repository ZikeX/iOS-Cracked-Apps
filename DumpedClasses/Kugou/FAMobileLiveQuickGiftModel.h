//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "FAModel.h"

@class FALCRoomGiftModel, NSString;

@interface FAMobileLiveQuickGiftModel : FAModel
{
    _Bool _isNewest;
    FALCRoomGiftModel *_giftModel;
    NSString *_giftCountStr;
    NSString *_senderId;
}

@property(nonatomic) _Bool isNewest; // @synthesize isNewest=_isNewest;
@property(copy, nonatomic) NSString *senderId; // @synthesize senderId=_senderId;
@property(copy, nonatomic) NSString *giftCountStr; // @synthesize giftCountStr=_giftCountStr;
@property(retain, nonatomic) FALCRoomGiftModel *giftModel; // @synthesize giftModel=_giftModel;
- (void).cxx_destruct;

@end
