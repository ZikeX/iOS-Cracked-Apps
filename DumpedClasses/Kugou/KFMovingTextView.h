//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class NSString, UILabel;

@interface KFMovingTextView : UIView
{
    NSString *_text;
    UILabel *_textLabel;
}

@property(retain, nonatomic) UILabel *textLabel; // @synthesize textLabel=_textLabel;
@property(copy, nonatomic) NSString *text; // @synthesize text=_text;
- (void).cxx_destruct;
- (void)songNameMoving:(id)arg1;
- (void)setTextAlpha:(double)arg1;
- (void)configureWithBounds:(struct CGRect)arg1;
- (void)initlizaSubviews;
- (void)setFrame:(struct CGRect)arg1;
- (id)init;

@end

