//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "FBOptimisticPayloadFactoryProtocol-Protocol.h"

@class FBGroupApprovePendingMemberData, FBMemGroupApprovePendingMemberResponsePayload;

@protocol FBGroupApprovePendingMemberCoreMutationOptimisticPayloadFactoryProtocol <FBOptimisticPayloadFactoryProtocol>
- (FBMemGroupApprovePendingMemberResponsePayload *)rollbackOptimisticPayload:(FBGroupApprovePendingMemberData *)arg1;
- (FBMemGroupApprovePendingMemberResponsePayload *)optimisticPayload:(FBGroupApprovePendingMemberData *)arg1;
@end
