//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug  6 2017 20:42:30).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "QDataSourceProtocol-Protocol.h"

@class NSString;
@protocol QDataCacheProtocol;

@interface QDataSourceBase : NSObject <QDataSourceProtocol>
{
    id <QDataCacheProtocol> _dataCache;
}

@property(retain, nonatomic) id <QDataCacheProtocol> dataCache; // @synthesize dataCache=_dataCache;
- (void).cxx_destruct;
- (id)initWithDataCache:(id)arg1;
- (id)tileImage:(CDStruct_2ec95fd7)arg1;
- (id)tileData:(CDStruct_2ec95fd7)arg1;
- (id)tileURL:(CDStruct_2ec95fd7)arg1;
- (id)tilePath:(CDStruct_2ec95fd7)arg1;
@property(readonly, nonatomic) long long maxZoomLevel;
@property(readonly, nonatomic) long long minZoomLevel;
@property(readonly, nonatomic) double tileSize;
- (_Bool)isValidForTileData:(id)arg1;
- (_Bool)isValidForTile:(CDStruct_2ec95fd7)arg1;
- (void)throwNotificationForError:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) unsigned long long mapLanguage;
@property(readonly) Class superclass;

@end

