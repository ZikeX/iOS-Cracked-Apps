//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface FBGraphSearchEntityUtility : NSObject
{
}

+ (_Bool)isValidEntityInModel:(id)arg1;
+ (void)openGroupWithModel:(id)arg1 context:(id)arg2;
+ (void)insertEntityIntoRecentSearches:(id)arg1 context:(id)arg2;
+ (id)metadataAttributedStringForEdge:(id)arg1 context:(id)arg2 resultType:(unsigned long long)arg3;
+ (id)_primarySubtitleAttributedStringForPlace:(id)arg1;
+ (id)_halfStarImageWithFirstStar:(id)arg1 secondStar:(id)arg2;
+ (id)_attributedStringWithImage:(id)arg1 identifier:(unsigned long long)arg2 descent:(double)arg3;
+ (id)_starRatings:(id)arg1;
+ (id)primarySubtitleAttributedStringForEdge:(id)arg1 context:(id)arg2 resultType:(unsigned long long)arg3;
+ (unsigned long long)verifiedStatusTypeForNode:(id)arg1;
+ (id)titleForNode:(id)arg1;

@end

