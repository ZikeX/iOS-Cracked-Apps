//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NVMLog.h"

@interface NVMLogFatory : NVMLog
{
}

+ (id)occultEventLogWithPath:(id)arg1 pageName:(id)arg2 pageID:(id)arg3 params:(id)arg4;
+ (id)eventDevLogWithMessage:(id)arg1 code:(id)arg2;
+ (id)errorDevLogWithError:(id)arg1;
+ (id)HTTPDevLogURLString:(id)arg1 method:(id)arg2 statusCode:(id)arg3 timing:(id)arg4 size:(id)arg5 body:(id)arg6 error:(id)arg7 serverIP:(id)arg8 requestID:(id)arg9;
+ (id)deviceInfo;
+ (id)currentCmpListLog;
+ (id)errorLogWithErrorName:(id)arg1 params:(id)arg2;
+ (id)webURLLogWithURLString:(id)arg1 timeSpentInMills:(id)arg2;
+ (id)HTTPRequestLogWithURLString:(id)arg1 method:(unsigned long long)arg2 statusCode:(id)arg3 time:(id)arg4 responseLength:(id)arg5 params:(id)arg6;
+ (id)eventLogWithEventID:(id)arg1 page:(id)arg2 pageID:(id)arg3 params:(id)arg4;
+ (id)pageViewLogWithName:(id)arg1 pageID:(id)arg2 params:(id)arg3;
+ (id)deviceInfoLog;
+ (id)devLogWithLogContent:(id)arg1;
+ (id)UBTLogWithLogContent:(id)arg1;

@end
