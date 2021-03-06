//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <FBSharedFramework/FBValueObject.h>

#import "NSCopying-Protocol.h"

@class NSString;

@interface FBAuthLoginApprovalData : FBValueObject <NSCopying>
{
    NSString *_uid;
    NSString *_machineID;
    NSString *_token;
}

@property(readonly, copy, nonatomic) NSString *token; // @synthesize token=_token;
@property(readonly, copy, nonatomic) NSString *machineID; // @synthesize machineID=_machineID;
@property(readonly, copy, nonatomic) NSString *uid; // @synthesize uid=_uid;
- (void).cxx_destruct;
- (id)initWithUid:(id)arg1 machineID:(id)arg2 token:(id)arg3;

@end

