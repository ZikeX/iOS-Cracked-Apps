//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "QQModel.h"

@class NSArray, NSIndexPath, NSMutableDictionary, NSString;

@interface QQDynamicSearchResultModel : QQModel
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
    unsigned long long _groupMask;
    NSString *_groupName;
    NSString *_searchKeyword;
    NSMutableDictionary *_extensionInfo;
    double _heightForCell;
    int _xo;
    _Bool _isSubTabResult;
    NSArray *_highlightWords;
    unsigned long long _sectionGroupMask;
    NSString *_searchVer;
    NSIndexPath *_indexPath;
}

@property(retain, nonatomic) NSIndexPath *indexPath; // @synthesize indexPath=_indexPath;
@property(copy, nonatomic) NSString *searchVer; // @synthesize searchVer=_searchVer;
@property(nonatomic) unsigned long long sectionGroupMask; // @synthesize sectionGroupMask=_sectionGroupMask;
@property(nonatomic) _Bool isSubTabResult; // @synthesize isSubTabResult=_isSubTabResult;
@property(retain, nonatomic) NSArray *highlightWords; // @synthesize highlightWords=_highlightWords;
- (id)getReportThreeReserveItemType;
- (id)filterKeyWords:(id)arg1;
@property(copy, nonatomic) NSString *extension; // @dynamic extension;
@property(nonatomic) unsigned long long groupMask; // @dynamic groupMask;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)init;

// Remaining properties
@property(retain, nonatomic) NSMutableDictionary *extensionInfo; // @dynamic extensionInfo;
@property(copy, nonatomic) NSString *groupName; // @dynamic groupName;
@property(nonatomic) double heightForCell; // @dynamic heightForCell;
@property(nonatomic) unsigned long long itemType; // @dynamic itemType;
@property(nonatomic) unsigned long long jmpType; // @dynamic jmpType;
@property(copy, nonatomic) NSString *jmpUrl; // @dynamic jmpUrl;
@property(copy, nonatomic) NSString *name; // @dynamic name;
@property(copy, nonatomic) NSString *picUrl; // @dynamic picUrl;
@property(copy, nonatomic) NSString *resultId; // @dynamic resultId;
@property(nonatomic) unsigned long long searchId; // @dynamic searchId;
@property(copy, nonatomic) NSString *searchKeyword; // @dynamic searchKeyword;
@property(copy, nonatomic) NSString *word; // @dynamic word;

@end

