//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@interface EncryptUtils : NSObject
{
}

+ (id)md5:(id)arg1;
+ (id)sha256:(id)arg1 length:(long long)arg2;
+ (id)decProcessMessage:(id)arg1 WithMethod:(id)arg2 WithKey:(id)arg3;
+ (id)encProcessMessage:(id)arg1 WithMethod:(id)arg2 WithKey:(id)arg3;
+ (id)base64Encoding:(id)arg1;
+ (id)dataWithBase64EncodedString:(id)arg1;
+ (id)AES128Decrypt:(id)arg1 WithKey:(id)arg2;
+ (id)AES128Encrypt:(id)arg1 WithKey:(id)arg2;
+ (id)AES256Decrypt:(id)arg1 WithKey:(id)arg2;
+ (id)AES256Encrypt:(id)arg1 WithKey:(id)arg2;

@end

