//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableDictionary, NSString;

@interface KGParams : NSObject
{
    NSString *_singKey;
    NSMutableDictionary *_paramDic;
}

@property(retain, nonatomic) NSMutableDictionary *paramDic; // @synthesize paramDic=_paramDic;
@property(copy, nonatomic) NSString *singKey; // @synthesize singKey=_singKey;
- (void).cxx_destruct;
- (id)singString;
- (id)toSignUrlString;
- (void)addKey:(id)arg1 AndValue:(id)arg2;
- (id)init;

@end
