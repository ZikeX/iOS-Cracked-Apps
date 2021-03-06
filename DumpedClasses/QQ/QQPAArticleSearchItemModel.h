//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "QQModel.h"

@class NSMutableDictionary, NSString;

@interface QQPAArticleSearchItemModel : QQModel
{
    NSString *_resultId;
    NSString *_name;
    NSString *_picUrl;
    NSString *_jmpUrl;
    NSString *_word;
    NSString *_extension;
    unsigned long long _searchId;
    unsigned long long _itemType;
    unsigned long long _jmpType;
    unsigned int _groupMask;
    NSString *_groupName;
    NSString *_searchKeyword;
    NSMutableDictionary *_extensionInfo;
    unsigned int _groupId;
}

@property(nonatomic) unsigned int groupId; // @synthesize groupId=_groupId;
@property(retain, nonatomic) NSMutableDictionary *extensionInfo; // @synthesize extensionInfo=_extensionInfo;
@property(retain, nonatomic) NSString *searchKeyword; // @synthesize searchKeyword=_searchKeyword;
@property(retain, nonatomic) NSString *groupName; // @synthesize groupName=_groupName;
@property(nonatomic) unsigned int groupMask; // @synthesize groupMask=_groupMask;
@property(nonatomic) unsigned long long jmpType; // @synthesize jmpType=_jmpType;
@property(nonatomic) unsigned long long itemType; // @synthesize itemType=_itemType;
@property(nonatomic) unsigned long long searchId; // @synthesize searchId=_searchId;
@property(retain, nonatomic) NSString *extension; // @synthesize extension=_extension;
@property(retain, nonatomic) NSString *word; // @synthesize word=_word;
@property(retain, nonatomic) NSString *jmpUrl; // @synthesize jmpUrl=_jmpUrl;
@property(retain, nonatomic) NSString *picUrl; // @synthesize picUrl=_picUrl;
@property(retain, nonatomic) NSString *name; // @synthesize name=_name;
@property(retain, nonatomic) NSString *resultId; // @synthesize resultId=_resultId;
- (id)getReportThreeReserveItemType;
- (void)dealloc;

@end

