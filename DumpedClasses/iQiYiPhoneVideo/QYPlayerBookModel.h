//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "QYAdsModel.h"

@class NSString;

@interface QYPlayerBookModel : QYAdsModel
{
    NSString *_slot_id;
    NSString *_qipuid;
    NSString *_name;
    NSString *_promotion;
    NSString *_category;
    NSString *_author;
    NSString *_dsp_type;
}

@property(copy, nonatomic) NSString *dsp_type; // @synthesize dsp_type=_dsp_type;
@property(copy, nonatomic) NSString *author; // @synthesize author=_author;
@property(copy, nonatomic) NSString *category; // @synthesize category=_category;
@property(copy, nonatomic) NSString *promotion; // @synthesize promotion=_promotion;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
@property(copy, nonatomic) NSString *qipuid; // @synthesize qipuid=_qipuid;
@property(copy, nonatomic) NSString *slot_id; // @synthesize slot_id=_slot_id;
- (void).cxx_destruct;
- (void)parseData:(id)arg1;
- (id)initWithDictionary:(id)arg1;

@end

