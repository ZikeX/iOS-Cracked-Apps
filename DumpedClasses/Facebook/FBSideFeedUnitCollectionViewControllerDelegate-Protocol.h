//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class FBSideFeedUnitContentViewCell, NSArray, NSMutableDictionary, NSString;

@protocol FBSideFeedUnitCollectionViewControllerDelegate <NSObject>
- (void)didChangeHeightAnimated:(_Bool)arg1 completion:(void (^)(void))arg2;
- (struct CGSize)sizeForItemAtIndex:(unsigned long long)arg1;
- (unsigned long long)numberOfItems;
- (void)configureCell:(FBSideFeedUnitContentViewCell *)arg1 forIndex:(unsigned long long)arg2;
- (NSString *)uniqueIDForItemAtIndex:(unsigned long long)arg1;
- (void)logAnalyticsEvent:(NSString *)arg1 itemPosition:(unsigned long long)arg2 history:(NSMutableDictionary *)arg3;

@optional
- (void)didScroll;
- (void)didUnhighlightCell:(FBSideFeedUnitContentViewCell *)arg1;
- (void)didHighlightCell:(FBSideFeedUnitContentViewCell *)arg1;
- (void)willDeleteItemsAtIndexes:(NSArray *)arg1;
- (void)willInsertItemsAtIndexes:(NSArray *)arg1;
- (void)didSelectCellWithIndex:(unsigned long long)arg1;
- (void)willHideItemAtIndex:(unsigned long long)arg1;
- (void)didBecomeEmpty;
@end

