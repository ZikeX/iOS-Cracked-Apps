//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

@interface UIViewController (adapterNavigation)
- (void)tbpsSetToolbarItems:(id)arg1;
- (id)tbpsNavigationController;
- (id)superViewController;
- (double)navigationBarHeight;
- (id)toolbarViewController;
- (id)navigationViewControllers;
- (void)pushViewController:(id)arg1 animated:(_Bool)arg2;
- (void)popToViewController:(id)arg1 animated:(_Bool)arg2;
- (void)popViewControllerAnimated:(_Bool)arg1;
- (void)setOriginY:(double)arg1;
- (void)setRightNavigationItemWithTitle:(id)arg1 target:(id)arg2 action:(SEL)arg3;
- (void)setMoreItemWithIconFont:(id)arg1 title:(id)arg2 clickedBlock:(CDUnknownBlockType)arg3;
- (void)setRightBarButtonItemWithCustomView:(id)arg1;
@end

