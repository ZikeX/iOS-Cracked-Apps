//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSString;

@interface HotDocData : NSObject
{
    NSString *_album_id;
    NSString *_tvFocus;
    NSString *_albumurl;
    NSString *_keyword;
}

+ (id)parseForArray:(id)arg1;
@property(copy, nonatomic) NSString *keyword; // @synthesize keyword=_keyword;
@property(copy, nonatomic) NSString *albumurl; // @synthesize albumurl=_albumurl;
@property(copy, nonatomic) NSString *tvFocus; // @synthesize tvFocus=_tvFocus;
@property(copy, nonatomic) NSString *album_id; // @synthesize album_id=_album_id;
- (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)description;
- (void)buildWithDictionary:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (void)dealloc;

@end

