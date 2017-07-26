//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "DTViewController.h"

#import "MAMapViewDelegate.h"

@class CLLocation, MAMapView, NSDictionary, NSString, UIButton;

@interface APBaseMapViewController : DTViewController <MAMapViewDelegate>
{
    MAMapView *_mapView;
    CLLocation *_currentLocation;
    NSDictionary *_launchOptions;
    UIButton *_baseLocalBtn;
    struct CLLocationCoordinate2D _currentCoordinate;
}

@property(retain, nonatomic) UIButton *baseLocalBtn; // @synthesize baseLocalBtn=_baseLocalBtn;
@property(retain, nonatomic) NSDictionary *launchOptions; // @synthesize launchOptions=_launchOptions;
@property(retain, nonatomic) CLLocation *currentLocation; // @synthesize currentLocation=_currentLocation;
@property(nonatomic) struct CLLocationCoordinate2D currentCoordinate; // @synthesize currentCoordinate=_currentCoordinate;
@property(retain, nonatomic) MAMapView *mapView; // @synthesize mapView=_mapView;
- (void).cxx_destruct;
- (id)ucID;
- (id)seed;
- (id)appID;
- (id)actionID;
- (void)gotoUserLocation:(id)arg1;
- (void)dismissWithClickedButtonIndex:(long long)arg1 animated:(_Bool)arg2;
- (void)mapView:(id)arg1 didUpdateUserLocation:(id)arg2 updatingLocation:(_Bool)arg3;
- (void)mapView:(id)arg1 didFailToLocateUserWithError:(id)arg2;
- (void)initLocationOverlayView;
- (void)initSearch;
- (void)initMapView;
- (void)clearSearch;
- (void)clearMapView;
- (void)dealloc;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
