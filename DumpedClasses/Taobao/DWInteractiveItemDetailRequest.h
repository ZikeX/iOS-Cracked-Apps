//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class AliDetailDataEngine;

@interface DWInteractiveItemDetailRequest : NSObject
{
    _Bool _isLoading;
    AliDetailDataEngine *_detailRequest;
}

@property(nonatomic) _Bool isLoading; // @synthesize isLoading=_isLoading;
@property(retain, nonatomic) AliDetailDataEngine *detailRequest; // @synthesize detailRequest=_detailRequest;
- (void).cxx_destruct;
- (void)startRequestWithItemId:(id)arg1 completion:(CDUnknownBlockType)arg2;

@end

