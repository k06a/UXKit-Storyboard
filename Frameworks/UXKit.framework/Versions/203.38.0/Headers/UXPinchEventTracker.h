//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Cocoa/Cocoa.h>
#import <UXKit/UXEventTracker.h>

@interface UXPinchEventTracker : UXEventTracker

@property (nonatomic) double scale; // @synthesize scale=_scale;
- (CGPoint)locationOfTouch:(unsigned long long)arg1 inView:(id)arg2;
- (CGPoint)locationOfTouch:(id)arg1;
- (id)_touchForTouchIdentity:(id)arg1;
- (double)_distanceBetweenMonitoredTouches;
- (CGPoint)_normalizedlocation;
- (void)_updateVelocity:(id)arg1;
- (void)_touchesMovedWithEvent:(id)arg1;
- (void)mouseDown:(id)arg1;
- (void)endGestureWithEvent:(id)arg1;
- (void)_processGestureWithEvent:(id)arg1;
- (void)rotateWithEvent:(id)arg1;
- (void)magnifyWithEvent:(id)arg1;
- (void)reset;
- (CGPoint)locationInView:(id)arg1;
- (void)setTrackingEvent:(id)arg1;
- (id)init;
- (BOOL)eventTrackerRequiresTouches;

@end

