//
//  UXKitStoryboardFix.m
//  UXKitSample
//
//  Created by Антон Буков on 04.10.15.
//  Copyright © 2015 justmaku. All rights reserved.
//

#import <JRSwizzle/JRSwizzle.h>
#import "UXKitStoryboardFix.h"

@implementation UXView (StoryboardFix)

+ (void)load {
    [UXView jr_swizzleMethod:@selector(removeConstraints:) withMethod:@selector(xxx_removeConstraints:) error:NULL];
    [UXView jr_swizzleMethod:@selector(addConstraints:) withMethod:@selector(xxx_addConstraints:) error:NULL];
}

- (void)xxx_removeConstraints:(NSArray<NSLayoutConstraint *> *)constraints {
    [self xxx_removeConstraints:constraints ?: @[]];
}

- (void)xxx_addConstraints:(NSArray<NSLayoutConstraint *> *)constraints {
    [self xxx_addConstraints:constraints ?: @[]];
}

@end

//

@interface RootStoryboardSegue : NSStoryboardSegue

@end

@implementation RootStoryboardSegue

- (void)perform {
}

@end

//

@implementation UXNavigationController (Root)

+ (void)load {
    [UXNavigationController jr_swizzleMethod:@selector(viewDidLoad) withMethod:@selector(xxx_viewDidLoad) error:NULL];
    [UXNavigationController jr_swizzleMethod:@selector(prepareForSegue:sender:) withMethod:@selector(xxx_prepareForSegue:sender:) error:NULL];
}

- (void)xxx_viewDidLoad {
    [self xxx_viewDidLoad];
    [self performSegueWithIdentifier:@"root" sender:nil];
}

- (void)xxx_prepareForSegue:(NSStoryboardSegue *)segue sender:(id)sender {
    if ([@"root" isEqualToString:segue.identifier]) {
        self.viewControllers = @[segue.destinationController];
        UXView *destView = (id)[segue.destinationController view];
        destView.frame = CGRectMake(10,10,100,100);
        
    } else {
        [self xxx_prepareForSegue:segue sender:sender];
    }
}

@end
