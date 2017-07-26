//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCoding.h"
#import "NSCopying.h"

@class NSString, UIImage;

@interface SCImageCacheModel : NSObject <NSCopying, NSCoding>
{
    UIImage *_image;
    NSString *_imageName;
    double _leftCap;
    double _topHeight;
}

@property(nonatomic) double topHeight; // @synthesize topHeight=_topHeight;
@property(nonatomic) double leftCap; // @synthesize leftCap=_leftCap;
@property(retain, nonatomic) NSString *imageName; // @synthesize imageName=_imageName;
@property(retain, nonatomic) UIImage *image; // @synthesize image=_image;
- (void).cxx_destruct;
- (_Bool)isEqual:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end
