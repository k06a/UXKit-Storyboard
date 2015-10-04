//
//  AppDelegate.m
//  UXKitSample
//
//  Created by Michał Kałużny on 06.02.2015.
//  Copyright (c) 2015 justmaku. All rights reserved.
//

#import "AppDelegate.h"
#import "JMKMainViewController.h"

@interface AppDelegate ()

@property (strong, nonatomic) UXNavigationController *rootViewController;
@property (strong, nonatomic) UXWindowController *windowController;

@end

@implementation AppDelegate

- (void)applicationDidFinishLaunching:(NSNotification *)aNotification
{
    self.rootViewController = [[NSStoryboard storyboardWithName:@"Main.storyboard" bundle:nil] instantiateInitialController];
    
    self.windowController = [[UXWindowController alloc] initWithRootViewController:self.rootViewController];
    [self.windowController.window setContentSize:NSMakeSize(505, 700)];
    [self.windowController showWindow:self];
}

- (void)applicationWillTerminate:(NSNotification *)aNotification
{
    // Insert code here to tear down your application
}

@end
