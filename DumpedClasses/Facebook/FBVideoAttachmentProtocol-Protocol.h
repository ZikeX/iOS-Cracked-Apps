//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "FBMediaAttachmentProtocol-Protocol.h"
#import "NSCoding-Protocol.h"

@class FBVideoAsset, FBVideoAssetEdits, FBVideoExportConfig, NSDictionary, NSString, NSURL;
@protocol FBErrorSimulationProtocol;

@protocol FBVideoAttachmentProtocol <FBMediaAttachmentProtocol, NSCoding>
@property(readonly, copy, nonatomic) FBVideoAssetEdits *edits;
@property(nonatomic) _Bool notifyWhenProcessed;
@property(readonly, nonatomic) _Bool isAnimatedGIF;
@property(readonly, nonatomic) struct FBMediaUploadQualityPolicy qualityPolicy;
@property(readonly, nonatomic) FBVideoAsset *videoAsset;
@property(nonatomic) unsigned long long indexHint;
@property(readonly, copy, nonatomic) NSString *dataSourceID;
@property(copy, nonatomic) NSDictionary *extraUploadParameters;
@property(nonatomic) long long frameOffsetInMillisecond;
@property(readonly, nonatomic) _Bool requiresProcessing;
@property(readonly, nonatomic) double bitrateKbps;
@property(readonly, nonatomic) CDStruct_1b6d18a9 duration;
@property(readonly, nonatomic) long long estimatedOutputFileLength;
@property(readonly, copy, nonatomic) NSString *outputFileType;
@property(readonly, copy, nonatomic) NSString *presetName;
@property(retain, nonatomic) NSURL *videoURL;
- (void)cancelExportVideoDataWithCompletionBlock:(void (^)(void))arg1;
- (void)removeTemporaryExportFile;
- (void)exportVideoDataWithProgress:(void (^)(float))arg1 completion:(void (^)(NSError *))arg2 baseURL:(NSURL *)arg3 videoExportConfig:(FBVideoExportConfig *)arg4 errorSimulation:(id <FBErrorSimulationProtocol>)arg5 timeRange:(CDStruct_5c5366e1)arg6;
- (void)exportVideoDataWithProgress:(void (^)(float))arg1 completion:(void (^)(NSError *))arg2 baseURL:(NSURL *)arg3 videoExportConfig:(FBVideoExportConfig *)arg4 errorSimulation:(id <FBErrorSimulationProtocol>)arg5;
@end

