//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <FBSharedFramework/CKCompositeComponent.h>

@class FBMemEvent;
@protocol FBIntentHandler;

@interface FBGroupEventComponent : CKCompositeComponent
{
    FBMemEvent *_event;
    id <FBIntentHandler> _intentHandler;
}

+ (id)newWithEvent:(id)arg1 toolbox:(id)arg2;
- (void).cxx_destruct;
- (void)didTapEvent:(id)arg1;

@end

