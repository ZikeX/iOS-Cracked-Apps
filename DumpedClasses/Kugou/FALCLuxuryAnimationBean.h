//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "FAModel.h"

@class FALCLuxuryBackground, FALCLuxuryCommon, FALCLuxuryDynamic;

@interface FALCLuxuryAnimationBean : FAModel
{
    FALCLuxuryBackground *_background;
    FALCLuxuryCommon *_common;
    FALCLuxuryDynamic *_dynamic;
    double _trasnfromY;
}

+ (_Bool)propertyIsOptional:(id)arg1;
@property(nonatomic) double trasnfromY; // @synthesize trasnfromY=_trasnfromY;
@property(retain, nonatomic) FALCLuxuryDynamic *dynamic; // @synthesize dynamic=_dynamic;
@property(retain, nonatomic) FALCLuxuryCommon *common; // @synthesize common=_common;
@property(retain, nonatomic) FALCLuxuryBackground *background; // @synthesize background=_background;
- (void).cxx_destruct;

@end

