//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "VZFNode.h"

@interface VZFTextFieldNode : VZFNode
{
    struct TextFieldNodeSpecs _textFieldSpecs;
}

+ (id)newWithTextFieldAttributes:(const struct TextFieldNodeSpecs *)arg1 NodeSpecs:(const struct NodeSpecs *)arg2;
@property(readonly, nonatomic) struct TextFieldNodeSpecs textFieldSpecs; // @synthesize textFieldSpecs=_textFieldSpecs;
- (id).cxx_construct;
- (void).cxx_destruct;

@end

