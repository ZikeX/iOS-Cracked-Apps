//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface DCDelegateForwarder : NSObject
{
    id _delegate;
    id _owner;
}

+ (id)forwarderWithOwner:(id)arg1;
@property(nonatomic) __weak id owner; // @synthesize owner=_owner;
@property(nonatomic) __weak id delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (_Bool)respondsToSelector:(SEL)arg1;
- (id)forwardingTargetForSelector:(SEL)arg1;

@end

