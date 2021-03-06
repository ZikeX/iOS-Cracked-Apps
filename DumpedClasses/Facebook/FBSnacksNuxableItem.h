//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <FBSharedFramework/FBValueObject.h>

#import "NSCopying-Protocol.h"

@class NSArray, NSString;

@interface FBSnacksNuxableItem : FBValueObject <NSCopying>
{
    NSString *_title;
    NSString *_body;
    NSString *_nuxID;
    NSArray *_triggerIDs;
}

@property(readonly, copy, nonatomic) NSArray *triggerIDs; // @synthesize triggerIDs=_triggerIDs;
@property(readonly, copy, nonatomic) NSString *nuxID; // @synthesize nuxID=_nuxID;
@property(readonly, copy, nonatomic) NSString *body; // @synthesize body=_body;
@property(readonly, copy, nonatomic) NSString *title; // @synthesize title=_title;
- (void).cxx_destruct;
- (id)initWithTitle:(id)arg1 body:(id)arg2 nuxID:(id)arg3 triggerIDs:(id)arg4;

@end

