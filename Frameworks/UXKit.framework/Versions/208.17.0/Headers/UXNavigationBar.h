//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Cocoa/Cocoa.h>
#import <UXKit/UXBar.h>
#import <UXKit/UXNavigationControllerDelegate-Protocol.h>
#import <UXKit/UXBarPositioningDelegate-Protocol.h>

@class UXNavigationBar;
@class UXNavigationItem;

@protocol UXNavigationBarDelegate <NSObject>

@optional
- (BOOL)navigationBar:(UXNavigationBar *)navigationBar shouldPushItem:(UXNavigationItem *)item;
- (void)navigationBar:(UXNavigationBar *)navigationBar didPushItem:(UXNavigationItem *)item;
- (BOOL)navigationBar:(UXNavigationBar *)navigationBar shouldPopItem:(UXNavigationItem *)item;
- (void)navigationBar:(UXNavigationBar *)navigationBar didPopItem:(UXNavigationItem *)item;

@end

@interface UXNavigationBar : UXBar

@property (nonatomic, strong) NSImage *backIndicatorImage;
@property (nonatomic, copy) NSArray *items;
@property (nonatomic, weak) NSView *titleCenteringTrackedView;
@property (nonatomic) NSEdgeInsets edgeInsets;
@property (nonatomic, getter=isTranslucent) BOOL translucent;
@property (nonatomic, weak) id <UXNavigationBarDelegate> delegate;
- (void)recalculateKeyViewLoop;
- (id)popNavigationItemAnimated:(BOOL)arg1;
- (void)pushNavigationItem:(id)arg1 animated:(BOOL)arg2;
@property (nonatomic, readonly) UXNavigationItem *backItem;
@property (nonatomic, readonly) UXNavigationItem *topItem;

@end
