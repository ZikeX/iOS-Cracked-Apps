//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "ALPInputCardBlockDelegate.h"

@class APInputBoxCell, NSString;

@interface EmailBlock : NSObject <ALPInputCardBlockDelegate>
{
    APInputBoxCell *_emailCell;
}

@property(retain, nonatomic) APInputBoxCell *emailCell; // @synthesize emailCell=_emailCell;
- (void).cxx_destruct;
- (void)didClickCell:(id)arg1 indexPath:(id)arg2 inController:(id)arg3;
- (void)fillValue:(id)arg1;
- (_Bool)hasText;
- (id)isValid;
- (void)resignFirstResponse;
- (double)cellHeight:(long long)arg1;
- (id)blockCell:(id)arg1 atIndex:(long long)arg2;
- (long long)cellCount;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

