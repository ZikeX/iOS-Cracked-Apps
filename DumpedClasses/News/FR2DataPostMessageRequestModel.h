//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TTRequestModel.h"

@class NSNumber, NSString;

@interface FR2DataPostMessageRequestModel : TTRequestModel
{
    NSString *_group_id;
    NSString *_item_id;
    NSString *_forum_id;
    NSNumber *_is_comment;
    NSString *_text;
    NSNumber *_comment_duration;
    NSNumber *_read_pct;
    NSString *_staytime_ms;
    NSString *_reply_to_comment_id;
    NSString *_dongtai_comment_id;
    long long _group_type;
}

@property(nonatomic) long long group_type; // @synthesize group_type=_group_type;
@property(retain, nonatomic) NSString *dongtai_comment_id; // @synthesize dongtai_comment_id=_dongtai_comment_id;
@property(retain, nonatomic) NSString *reply_to_comment_id; // @synthesize reply_to_comment_id=_reply_to_comment_id;
@property(retain, nonatomic) NSString *staytime_ms; // @synthesize staytime_ms=_staytime_ms;
@property(retain, nonatomic) NSNumber *read_pct; // @synthesize read_pct=_read_pct;
@property(retain, nonatomic) NSNumber *comment_duration; // @synthesize comment_duration=_comment_duration;
@property(retain, nonatomic) NSString *text; // @synthesize text=_text;
@property(retain, nonatomic) NSNumber *is_comment; // @synthesize is_comment=_is_comment;
@property(retain, nonatomic) NSString *forum_id; // @synthesize forum_id=_forum_id;
@property(retain, nonatomic) NSString *item_id; // @synthesize item_id=_item_id;
@property(retain, nonatomic) NSString *group_id; // @synthesize group_id=_group_id;
- (void).cxx_destruct;
- (id)_requestParams;
- (id)init;

@end

