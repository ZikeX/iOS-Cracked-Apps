//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UILabel.h"

@interface TBStrikeLabel : UILabel
{
    _Bool _strikeThroughEnabled;
    int _style;
}

@property(nonatomic) int style; // @synthesize style=_style;
@property(nonatomic) _Bool strikeThroughEnabled; // @synthesize strikeThroughEnabled=_strikeThroughEnabled;
- (void)drawTextInRect:(struct CGRect)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

