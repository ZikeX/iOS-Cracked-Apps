//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSProxy.h"

@interface TBMBMessageProxy : NSProxy
{
    Class _proxyClass;
    unsigned long long _key;
}

+ (void)__$$__NullMethod;
- (_Bool)conformsToProtocol:(id)arg1;
- (_Bool)isMemberOfClass:(Class)arg1;
- (_Bool)isKindOfClass:(Class)arg1;
- (_Bool)isProxy;
- (_Bool)respondsToSelector:(SEL)arg1;
- (void)processInvocation:(id)arg1;
- (void)forwardInvocation:(id)arg1;
- (id)methodSignatureForSelector:(SEL)arg1;
- (id)initWithClass:(Class)arg1 andKey:(unsigned long long)arg2;

@end
