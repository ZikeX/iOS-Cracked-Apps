//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "AMPNetPacket.h"

@class NSString;

@interface AMPGetJoindGroupPacket : AMPNetPacket
{
    NSString *_groupType;
}

@property(retain, nonatomic) NSString *groupType; // @synthesize groupType=_groupType;
- (void).cxx_destruct;
- (_Bool)conbineWaitingPacket:(id)arg1;
- (_Bool)filterNewPacket:(id)arg1;
- (id)generateMtopBody;
- (id)generateMtopHeader;
- (id)initWithGroupType:(id)arg1;

@end
