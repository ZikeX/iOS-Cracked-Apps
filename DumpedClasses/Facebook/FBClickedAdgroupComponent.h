//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <FBSharedFramework/CKCompositeComponent.h>

@class FBAdHistoryComponentContext;

@interface FBClickedAdgroupComponent : CKCompositeComponent
{
    FBAdHistoryComponentContext *_context;
    struct FBAdHistoryAdgroupComponentGraphQL _adgroup;
}

+ (id)newWithModel:(struct FBAdClickHistoryAdgroupComponentGraphQL)arg1 context:(id)arg2;
@property(retain, nonatomic) FBAdHistoryComponentContext *context; // @synthesize context=_context;
@property(nonatomic) struct FBAdHistoryAdgroupComponentGraphQL adgroup; // @synthesize adgroup=_adgroup;
- (id).cxx_construct;
- (void).cxx_destruct;

@end
