//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray<FMFishpondQuestionTagDO>, NSString;

@interface FMFishpondQuestionCommentDO : NSObject
{
    NSArray<FMFishpondQuestionTagDO> *_topTags;
    NSString *_comment;
    NSString *_picUrl;
    NSString *_commentTimeDiff;
    NSString *_commenterId;
    NSString *_commenterNick;
}

@property(copy, nonatomic) NSString *commenterNick; // @synthesize commenterNick=_commenterNick;
@property(copy, nonatomic) NSString *commenterId; // @synthesize commenterId=_commenterId;
@property(copy, nonatomic) NSString *commentTimeDiff; // @synthesize commentTimeDiff=_commentTimeDiff;
@property(copy, nonatomic) NSString *picUrl; // @synthesize picUrl=_picUrl;
@property(copy, nonatomic) NSString *comment; // @synthesize comment=_comment;
@property(retain, nonatomic) NSArray<FMFishpondQuestionTagDO> *topTags; // @synthesize topTags=_topTags;
- (void).cxx_destruct;

@end
