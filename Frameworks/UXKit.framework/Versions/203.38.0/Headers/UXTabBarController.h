//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UXViewController.h"

@class NSArray, NSSegmentedControl;

@interface UXTabBarController : UXViewController
{
    NSArray *_viewControllers;
    UXViewController *_selectedViewController;
    NSSegmentedControl *_segmentedControl;
}

@property(readonly, nonatomic) NSSegmentedControl *segmentedControl; // @synthesize segmentedControl=_segmentedControl;
@property(nonatomic) __weak UXViewController *selectedViewController; // @synthesize selectedViewController=_selectedViewController;
@property(copy, nonatomic) NSArray *viewControllers; // @synthesize viewControllers=_viewControllers;
@property(nonatomic) unsigned long long selectedIndex;
- (void)viewDidLoad;
- (void)keyDown:(id)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)segmentChanged:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

@end

