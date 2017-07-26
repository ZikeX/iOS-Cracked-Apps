//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSFileManager.h"

@interface NSFileManager (CTExtensions)
+ (_Bool)documentFileExitsWithAppendComponent:(id)arg1;
+ (_Bool)removeDirectory:(id)arg1;
+ (id)directoryModifyTimestamp:(id)arg1;
+ (long long)directorySize:(id)arg1;
+ (id)fileModifyTimestamp:(id)arg1;
+ (long long)fileSize:(id)arg1;
+ (_Bool)moveDirectoryFrom:(id)arg1 to:(id)arg2;
+ (_Bool)copyDirectoryFrom:(id)arg1 to:(id)arg2;
+ (_Bool)moveFileFrom:(id)arg1 to:(id)arg2;
+ (_Bool)copyFileFrom:(id)arg1 to:(id)arg2;
+ (_Bool)createDirectory:(id)arg1;
@end
