//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Cocoa/Cocoa.h>
#import <UXKit/UXAccessoryBarContainerProtocol.h>

@class UXToolbar, UXViewController;

@interface UXWindowController : NSWindowController <NSToolbarDelegate, UXAccessoryBarContainer, NSWindowDelegate>

+ (id)defaultWindow;
@property (weak) NSToolbarItem *navigationBarToolbarItem; // @synthesize navigationBarToolbarItem=_navigationBarToolbarItem;
- (void)windowDidBecomeFirstResponder:(id)arg1;
- (void)windowDidRecalculateKeyViewLoop:(id)arg1;
- (void)windowWillRecalculateKeyViewLoop:(id)arg1;
- (void)windowWillExitFullScreen:(id)arg1;
- (void)windowWillEnterFullScreen:(id)arg1;
- (CGRect)window:(id)arg1 willPositionSheet:(id)arg2 usingRect:(CGRect)arg3;
- (id)toolbar:(id)arg1 itemForItemIdentifier:(id)arg2 willBeInsertedIntoToolbar:(BOOL)arg3;
- (id)toolbarDefaultItemIdentifiers:(id)arg1;
- (id)toolbarAllowedItemIdentifiers:(id)arg1;
- (void)setWindow:(id)arg1;
- (id)rootNavigationController;
@property (nonatomic, strong) UXViewController *rootViewController;
@property (nonatomic, readonly) NSTitlebarAccessoryViewController *titlebarAccessoryViewController;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)teardownViewControllerHierarchy;
- (id)initWithWindow:(id)arg1;
- (id)initWithRootViewController:(id)arg1;

@end

