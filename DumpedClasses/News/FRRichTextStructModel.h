//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "FRBaseModel.h"

@class FRRichTextAttributesStructModel<Optional>, NSString<Optional>;

@interface FRRichTextStructModel : FRBaseModel
{
    NSString<Optional> *_text;
    FRRichTextAttributesStructModel<Optional> *_attributes;
}

@property(retain, nonatomic) FRRichTextAttributesStructModel<Optional> *attributes; // @synthesize attributes=_attributes;
@property(retain, nonatomic) NSString<Optional> *text; // @synthesize text=_text;
- (void).cxx_destruct;
- (void)reset;
- (id)init;

@end
