//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CTIDCardChildNode.h"

@class NSString;

@interface CTFlightIDCardChildNode : CTIDCardChildNode
{
    _Bool isAvailable;
    NSString *_certifiedCN;
    NSString *_certifiedEN;
    long long _compareIndex;
    NSString *_policySupportString;
}

+ (id)nodeWithModel:(id)arg1;
@property(copy, nonatomic) NSString *policySupportString; // @synthesize policySupportString=_policySupportString;
@property(nonatomic) long long compareIndex; // @synthesize compareIndex=_compareIndex;
@property(copy, nonatomic) NSString *certifiedEN; // @synthesize certifiedEN=_certifiedEN;
@property(copy, nonatomic) NSString *certifiedCN; // @synthesize certifiedCN=_certifiedCN;
- (void)setIsAvailable:(_Bool)arg1;
- (void).cxx_destruct;
- (id)getPolicySupportList;
- (long long)compareCertificate:(id)arg1;
- (void)setIDCardTimelimit:(id)arg1;
- (_Bool)isAvailable;
- (id)cardName;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)init;

@end

