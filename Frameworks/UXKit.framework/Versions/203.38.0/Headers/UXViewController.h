//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Cocoa/Cocoa.h>
#import <UXKit/UXLayoutSupport-Protocol.h>

@class UXNavigationController, UXNavigationItem, UXSourceController, UXTabBarItem, UXView, UXTabBarController, UXPopoverController;

@interface UXViewController : NSViewController

+ (Class)viewClass;
@property (nonatomic, strong) UXView *presentedViewControllerContainerView;
@property (nonatomic) BOOL automaticallyAdjustsScrollViewInsets;
@property (nonatomic) NSUInteger edgesForExtendedLayout; // TODO: enum
@property (nonatomic) NSInteger modalPresentationStyle; // TODO: enum
@property (nonatomic) BOOL isEditing;
- (id)menuForEvent:(id)arg1;
- (id)bottomLayoutGuide;
- (id)topLayoutGuide;
- (void)didUpdateLayoutGuides;
- (void)invalidateIntrinsicLayoutInsets;
- (NSEdgeInsets)intrinsicLayoutInsets;
- (CGSize)preferredContentSizeCappedToSize:(CGSize)arg1;
- (id)transitionCoordinator;
- (void)setEditing:(BOOL)arg1 animated:(BOOL)arg2;
- (void)dismissViewControllerAnimated:(BOOL)arg1 completion:(void(^)(void))arg2;
- (void)presentViewController:(id)arg1 animated:(BOOL)arg2 completion:(void(^)(BOOL))arg3;
@property (nonatomic, readonly) UXViewController *presentedViewController;
- (void)didMoveToParentViewController:(id)arg1;
- (void)willMoveToParentViewController:(id)arg1;
- (void)viewDidLiveResize;
- (void)viewWillLiveResize;
- (void)viewDidLayoutSubviews;
- (void)viewWillLayoutSubviews;
- (void)viewUpdateLayer;
@property (nonatomic, readonly) NSResponder *preferredFirstResponder;
@property (nonatomic, readonly) UXView *uxView;
@property (nonatomic) BOOL hidesBottomBarWhenPushed;
- (NSInteger)preferredToolbarPosition; // TODO: enum
@property (nonatomic, strong) id toolbarViewController;
@property (nonatomic, strong) id toolbarItems;
- (void)setToolbarItems:(id)arg1 animated:(BOOL)arg2;
@property (nonatomic, strong) id accessoryBarItems;
@property (nonatomic, strong) UXViewController *accessoryViewController;
@property (nonatomic, readonly) UXNavigationItem *navigationItem;
@property (nonatomic, readonly) UXNavigationController *navigationController;
@property (nonatomic, readonly) UXTabBarController *tabBarController;
@property (nonatomic, readonly) UXTabBarItem *tabBarItem;
@property (nonatomic, readonly) UXPopoverController *popoverController;
- (void)prepareForTransitionWithContext:(id)arg1 completion:(void(^)(void))arg2;
@property (nonatomic, readonly) NSInteger interfaceOrientation; // TODO: enum
- (void)viewDidDisappear:(BOOL)arg1;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewWillAppear:(BOOL)arg1;
@property (nonatomic) BOOL hidesSourceListWhenPushed;
- (BOOL)isTransitory;
- (void)setTransitory:(BOOL)arg1;
- (void)viewControllersForNavigationDestination:(id)arg1 completion:(void(^)(id unknown, NSArray *viewControllers))arg2; // TODO
- (void)willEncodeNavigationDestination:(id)arg1;
- (id)navigationDestination;
- (id)navigationIdentifier;
@property (nonatomic, readonly) UXSourceController *sourceController;

- (instancetype)initWithNibName:(NSString *)nibNameOrNil bundle:(NSBundle *)nibBundleOrNil NS_DESIGNATED_INITIALIZER;

@end

