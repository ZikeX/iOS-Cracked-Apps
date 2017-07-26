//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface MSOAServiceProvider : NSObject
{
    NSString *_className;
    NSString *_funcName;
    unsigned long long _funcType;
    Class _targetClass;
    SEL _selector;
    SEL _dependentSelector;
}

@property(nonatomic) SEL dependentSelector; // @synthesize dependentSelector=_dependentSelector;
@property(nonatomic) SEL selector; // @synthesize selector=_selector;
@property(retain, nonatomic) Class targetClass; // @synthesize targetClass=_targetClass;
@property(nonatomic) unsigned long long funcType; // @synthesize funcType=_funcType;
@property(retain, nonatomic) NSString *funcName; // @synthesize funcName=_funcName;
@property(retain, nonatomic) NSString *className; // @synthesize className=_className;
- (void).cxx_destruct;
- (unsigned long long)funcTypeWithTypeString:(id)arg1;
- (id)initWithData:(id)arg1;

@end
