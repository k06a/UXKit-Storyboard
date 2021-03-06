//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Cocoa/Cocoa.h>
#import <UXKit/UXViewControllerAnimatedTransitioning-Protocol.h>
#import <UXKit/UXViewControllerInteractiveTransitioning-Protocol.h>

@interface UXTransitionController : NSObject <UXViewControllerAnimatedTransitioning, UXViewControllerInteractiveTransitioning>

@property (nonatomic, readonly) CGFloat percentComplete;
@property (nonatomic) NSInteger operation; // TODO: enum
- (BOOL)navigationController:(id)arg1 shouldBeginInteractivePopFromViewController:(id)arg2 toViewController:(id)arg3;
- (id)navigationController:(id)arg1 animationControllerForOperation:(NSInteger)arg2 fromViewController:(id)arg3 toViewController:(id)arg4; // TODO: enum
- (id)navigationController:(id)arg1 interactionControllerForAnimationController:(id)arg2;
- (void)animateTransition:(id)arg1;
- (CGFloat)transitionDuration:(id)arg1;
- (void)updateInteractiveTransition:(CGFloat)arg1 inContext:(id)arg2;
- (void)startInteractiveTransition:(id)arg1;

@end

