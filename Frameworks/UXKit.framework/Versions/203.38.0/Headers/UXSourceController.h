//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Cocoa/Cocoa.h>
#import <UXKit/UXViewController.h>
#import <UXKit/UXNavigationControllerDelegate-Protocol.h>
#import <UXKit/UXSourceList-Protocol.h>

@interface UXSourceController : UXViewController <UXNavigationControllerDelegate>

@property (nonatomic, readonly) NSSplitView *splitView;
@property (nonatomic, readonly) NSSegmentedControl *segmentedControl;
@property (nonatomic, copy) NSString *sourceListAutosaveName;
@property (nonatomic, strong) UXViewController<UXSourceList> *sourceListViewController;
@property (nonatomic, strong) UXViewController *selectedViewController;
@property (nonatomic, copy) NSArray *rootViewControllers;
@property (nonatomic) NSInteger style; // TODO: enum
@property (nonatomic) NSInteger preferredStyle; // TODO: enum
- (BOOL)navigationController:(id)arg1 shouldBeginInteractivePopFromViewController:(id)arg2 toViewController:(id)arg3;
- (id)navigationController:(id)arg1 animationControllerForOperation:(NSInteger)arg2 fromViewController:(id)arg3 toViewController:(id)arg4; // TODO: enum
- (id)navigationController:(id)arg1 interactionControllerForAnimationController:(id)arg2;
- (void)navigationController:(id)arg1 didShowViewController:(id)arg2;
- (void)navigationController:(id)arg1 willShowViewController:(id)arg2;
- (void)sourceSplitView:(id)arg1 didResizeMasterWidth:(CGFloat)arg2;
- (void)dismissViewControllerAnimated:(BOOL)arg1 completion:(void(^)(void))arg2;
- (void)presentViewController:(id)arg1 animated:(BOOL)arg2 completion:(void(^)(void))arg3;
- (void)removeDestination:(id)arg1 animated:(BOOL)arg2 completion:(void(^)(BOOL finished))arg3;
- (void)navigateToDestination:(id)arg1 animated:(BOOL)arg2 completion:(void(^)(BOOL finished))arg3;
- (void)didChangeSelectedViewController;
- (void)willAddNavigationController:(id)arg1;
@property (nonatomic) NSUInteger selectedIndex;
- (void)setSelectedIndex:(NSUInteger)arg1 animated:(BOOL)arg2;
- (void)setSelectedViewController:(id)arg1 animated:(BOOL)arg2;
- (void)setRootViewControllers:(id)arg1 destination:(id)arg2 completion:(void(^)(BOOL finished))arg3;
@property (nonatomic, readonly) BOOL alternateTitleEnabled;
- (void)unregisterTransitionControllerForTransitionToViewControllerClass:(Class)arg1;
- (void)registerTranistionControllerClass:(Class)arg1 forViewControllerClass:(Class)arg2;
- (void)registerTransitionControllerClass:(Class)arg1 forViewControllerClass:(Class)arg2;
- (id)destinationForNavigationIdentifier:(id)arg1 title:(id)arg2;
- (id)destinationForViewController:(id)arg1;
- (void)unregisterTransitoryViewController:(id)arg1;
- (void)registerTransitoryViewController:(id)arg1;
@property (nonatomic, readonly) id <UXNavigationDestination> currentNavigationDestination;
- (void)removeRootViewControllerAtIndex:(NSInteger)arg1;
- (void)insertRootViewController:(id)arg1 atIndex:(NSInteger)arg2;
- (void)addRootViewController:(id)arg1;

@end

