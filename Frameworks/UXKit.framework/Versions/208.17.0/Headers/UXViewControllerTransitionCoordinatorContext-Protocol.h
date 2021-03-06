//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Cocoa/Cocoa.h>

@class UXView, UXViewController;

@protocol UXViewControllerTransitionCoordinatorContext <NSObject>
- (UXView *)containerView;
- (UXViewController *)viewControllerForKey:(NSString *)arg1;
- (NSInteger)completionCurve; // TODO: enum
- (CGFloat)completionVelocity;
- (CGFloat)percentComplete;
- (CGFloat)transitionDuration;
- (BOOL)isCancelled;
- (BOOL)isInteractive;
- (BOOL)initiallyInteractive;
- (NSInteger)presentationStyle; // TODO: enum
- (BOOL)isAnimated;
@end

