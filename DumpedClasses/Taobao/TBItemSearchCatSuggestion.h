//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TBJSONModel.h"

@class NSString;

@interface TBItemSearchCatSuggestion : TBJSONModel
{
    NSString *_catName;
    NSString *_catId;
    NSString *_query;
}

+ (_Bool)strictMode;
@property(retain, nonatomic) NSString *query; // @synthesize query=_query;
@property(retain, nonatomic) NSString *catId; // @synthesize catId=_catId;
@property(retain, nonatomic) NSString *catName; // @synthesize catName=_catName;
- (void).cxx_destruct;

@end

