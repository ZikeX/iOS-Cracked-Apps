//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableArray, NSString;

@interface ListInfo : NSObject
{
    int _noteFlag;
    int _titleType;
    NSString *_noteTitle;
    NSString *_desc;
    NSMutableArray *_extendList;
}

@property(retain, nonatomic) NSMutableArray *extendList; // @synthesize extendList=_extendList;
@property(copy, nonatomic) NSString *desc; // @synthesize desc=_desc;
@property(nonatomic) int titleType; // @synthesize titleType=_titleType;
@property(nonatomic) int noteFlag; // @synthesize noteFlag=_noteFlag;
@property(copy, nonatomic) NSString *noteTitle; // @synthesize noteTitle=_noteTitle;
- (void).cxx_destruct;
- (id)init;

@end
